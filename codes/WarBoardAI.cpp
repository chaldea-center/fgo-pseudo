void __fastcall WarBoardAI___ctor(WarBoardAI_o *this, WarBoardStageNpcEntity_o *npc, const MethodInfo *method)
{
  __int64 v3; // x3
  WarBoardAIRoute_o *v6; // x21
  const MethodInfo *v7; // x2
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E68BF & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardAIRoute_TypeInfo, (_DWORD)npc, (_DWORD)method, v3);
    byte_42E68BF = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6 = (WarBoardAIRoute_o *)sub_B5D694(WarBoardAIRoute_TypeInfo);
  WarBoardAIRoute___ctor(v6, npc, v7);
  this->fields.routeClass = v6;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v6, v8, v9, v10, v11, v12, v13);
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
    sub_B5D69C(0LL, aiId);
  WarBoardAIRoute__AddPiecePersonalityDic(routeClass, aiId, pieceIndex, method);
}


bool __fastcall WarBoardAI__CheckWasteRoute(
        WarBoardAI_o *this,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *checkRoute,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v26; // x20
  __int64 notAction; // x0
  __int64 v28; // x1
  int32_t size; // w8
  unsigned int v30; // w24
  WarBoardAIRoute_RouteData_o *v31; // x22
  unsigned int v32; // w21
  WarBoardAIRoute_RouteData_o *PrevAiRoute_k__BackingField; // x21
  struct WarBoardPieceData_o *basePiece; // x8
  struct WarBoardPieceData_o *v35; // x9
  struct WarBoardPieceData_o *v36; // x8
  struct WarBoardPieceData_o *v37; // x8
  struct WarBoardPieceData_o *v38; // x8
  System_Enum_o *v39; // x23
  System_Enum_o *v40; // x23
  __int64 v41; // x3
  WarBoardAIRoute_RouteData_c *klass; // x8
  unsigned __int64 v43; // x10
  IWarBoardAIRouteWaste_c **p_offset; // x11
  __int64 v45; // x0
  System_Enum_o *v46; // x23
  __int64 v47; // x3
  WarBoardAIRoute_RouteData_c *v48; // x8
  unsigned __int64 v49; // x10
  IWarBoardAIRouteWaste_c **v50; // x11
  __int64 v51; // x0
  System_Enum_o *v52; // x23
  __int64 v53; // x3
  WarBoardAIRoute_RouteData_c *v54; // x8
  int32_t actionIndex; // w23
  unsigned __int64 v56; // x10
  int32_t *v57; // x11
  __int64 v58; // x0
  __int64 v59; // x3
  WarBoardAIRoute_RouteData_c *v60; // x8
  int32_t baseIndex; // w23
  unsigned __int64 v62; // x10
  IWarBoardAIRouteWaste_c **v63; // x11
  __int64 v64; // x0
  __int64 v65; // x3
  WarBoardAIRoute_RouteData_c *v66; // x8
  unsigned __int64 v67; // x10
  IWarBoardAIRouteWaste_c **v68; // x11
  __int64 v69; // x0
  __int64 v71; // [xsp+0h] [xbp-60h] BYREF
  int64_t flagNow; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E68C1 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__ContainsKey__,
      (_DWORD)checkRoute,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ctor__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__set_Item__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&WarBoardAIRoute_RouteData_Flag_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&IWarBoardAIRouteWaste_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__, v23, v24, v25);
    byte_42E68C1 = 1;
  }
  v26 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v26,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ctor__);
  if ( !checkRoute )
LABEL_74:
    sub_B5D69C(notAction, v28);
  size = checkRoute->fields._size;
  if ( size < 1 )
    return 0;
  v30 = 0;
  while ( 1 )
  {
    if ( size <= v30 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v31 = checkRoute->fields._items->m_Items[v30];
    if ( !v31 )
      goto LABEL_74;
    if ( v31->fields.basePiece )
    {
      notAction = WarBoardAIRoute_RouteData__get_notAction(v31, 0LL);
      if ( (notAction & 1) == 0 )
      {
        v32 = v30 - 1;
        if ( (int)(v30 - 1) < 0 )
          goto LABEL_19;
        if ( checkRoute->fields._size <= v32 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        PrevAiRoute_k__BackingField = checkRoute->fields._items->m_Items[v32];
        if ( !PrevAiRoute_k__BackingField )
          goto LABEL_19;
        basePiece = PrevAiRoute_k__BackingField->fields.basePiece;
        if ( !basePiece )
          goto LABEL_74;
        v35 = v31->fields.basePiece;
        if ( !v35 )
          goto LABEL_74;
        if ( basePiece->fields._uniqueIndex_k__BackingField != v35->fields._uniqueIndex_k__BackingField
          || (notAction = WarBoardAIRoute_RouteData__get_notAction(PrevAiRoute_k__BackingField, 0LL),
              (notAction & 1) != 0) )
        {
LABEL_19:
          v36 = v31->fields.basePiece;
          if ( !v36 || !v26 )
            goto LABEL_74;
          notAction = System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                        (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v26,
                        v36->fields._index_k__BackingField,
                        (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__ContainsKey__);
          if ( (notAction & 1) != 0 )
          {
            PrevAiRoute_k__BackingField = 0LL;
          }
          else
          {
            v37 = v31->fields.basePiece;
            if ( !v37 )
              goto LABEL_74;
            PrevAiRoute_k__BackingField = (WarBoardAIRoute_RouteData_o *)v37->fields._PrevAiRoute_k__BackingField;
          }
        }
        v38 = v31->fields.basePiece;
        if ( !v38 || !v26 )
          goto LABEL_74;
        System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v26,
          v38->fields._index_k__BackingField,
          v31,
          (const MethodInfo_2F3209C *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__set_Item__);
        if ( PrevAiRoute_k__BackingField )
        {
          flagNow = v31->fields.flagNow;
          v39 = (System_Enum_o *)j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &flagNow);
          v71 = 2LL;
          notAction = j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &v71);
          if ( !v39 )
            goto LABEL_74;
          notAction = System_Enum__HasFlag(v39, (System_Enum_o *)notAction, 0LL);
          if ( (notAction & 1) == 0 )
          {
            flagNow = v31->fields.flagNow;
            v40 = (System_Enum_o *)j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &flagNow);
            v71 = 0x10000000LL;
            notAction = j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &v71);
            if ( !v40 )
              goto LABEL_74;
            notAction = System_Enum__HasFlag(v40, (System_Enum_o *)notAction, 0LL);
            if ( (notAction & 1) == 0 )
            {
              klass = PrevAiRoute_k__BackingField->klass;
              if ( *(_WORD *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
              {
                v43 = 0LL;
                p_offset = (IWarBoardAIRouteWaste_c **)&klass->_1.interfaceOffsets->offset;
                while ( *(p_offset - 1) != IWarBoardAIRouteWaste_TypeInfo )
                {
                  ++v43;
                  p_offset += 2;
                  if ( v43 >= *(unsigned __int16 *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                    goto LABEL_36;
                }
                v45 = (__int64)(&klass->vtable._2_GetHashCode.method + 2 * *(_DWORD *)p_offset);
              }
              else
              {
LABEL_36:
                v45 = sub_AF54C0(PrevAiRoute_k__BackingField, IWarBoardAIRouteWaste_TypeInfo, 2LL, v41);
              }
              flagNow = (*(__int64 (__fastcall **)(WarBoardAIRoute_RouteData_o *, _QWORD))v45)(
                          PrevAiRoute_k__BackingField,
                          *(_QWORD *)(v45 + 8));
              v46 = (System_Enum_o *)j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &flagNow);
              v71 = 2LL;
              notAction = j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &v71);
              if ( !v46 )
                goto LABEL_74;
              notAction = System_Enum__HasFlag(v46, (System_Enum_o *)notAction, 0LL);
              if ( (notAction & 1) == 0 )
              {
                v48 = PrevAiRoute_k__BackingField->klass;
                if ( *(_WORD *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                {
                  v49 = 0LL;
                  v50 = (IWarBoardAIRouteWaste_c **)&v48->_1.interfaceOffsets->offset;
                  while ( *(v50 - 1) != IWarBoardAIRouteWaste_TypeInfo )
                  {
                    ++v49;
                    v50 += 2;
                    if ( v49 >= *(unsigned __int16 *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                      goto LABEL_44;
                  }
                  v51 = (__int64)(&v48->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v50);
                }
                else
                {
LABEL_44:
                  v51 = sub_AF54C0(PrevAiRoute_k__BackingField, IWarBoardAIRouteWaste_TypeInfo, 2LL, v47);
                }
                flagNow = (*(__int64 (__fastcall **)(WarBoardAIRoute_RouteData_o *, _QWORD))v51)(
                            PrevAiRoute_k__BackingField,
                            *(_QWORD *)(v51 + 8));
                v52 = (System_Enum_o *)j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &flagNow);
                v71 = 0x10000000LL;
                notAction = j_il2cpp_value_box_0(WarBoardAIRoute_RouteData_Flag_TypeInfo, &v71);
                if ( !v52 )
                  goto LABEL_74;
                notAction = System_Enum__HasFlag(v52, (System_Enum_o *)notAction, 0LL);
                if ( (notAction & 1) == 0 )
                {
                  v54 = PrevAiRoute_k__BackingField->klass;
                  actionIndex = v31->fields.actionIndex;
                  if ( *(_WORD *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                  {
                    v56 = 0LL;
                    v57 = &v54->_1.interfaceOffsets->offset;
                    while ( *((IWarBoardAIRouteWaste_c **)v57 - 1) != IWarBoardAIRouteWaste_TypeInfo )
                    {
                      ++v56;
                      v57 += 4;
                      if ( v56 >= *(unsigned __int16 *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                        goto LABEL_52;
                    }
                    v58 = (__int64)(&v54->vtable._0_Equals.method + 2 * *v57);
                  }
                  else
                  {
LABEL_52:
                    v58 = sub_AF54C0(PrevAiRoute_k__BackingField, IWarBoardAIRouteWaste_TypeInfo, 0LL, v53);
                  }
                  notAction = (*(__int64 (__fastcall **)(WarBoardAIRoute_RouteData_o *, _QWORD))v58)(
                                PrevAiRoute_k__BackingField,
                                *(_QWORD *)(v58 + 8));
                  if ( actionIndex == (_DWORD)notAction )
                  {
                    v60 = PrevAiRoute_k__BackingField->klass;
                    baseIndex = v31->fields.baseIndex;
                    if ( *(_WORD *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                    {
                      v62 = 0LL;
                      v63 = (IWarBoardAIRouteWaste_c **)&v60->_1.interfaceOffsets->offset;
                      while ( *(v63 - 1) != IWarBoardAIRouteWaste_TypeInfo )
                      {
                        ++v62;
                        v63 += 2;
                        if ( v62 >= *(unsigned __int16 *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                          goto LABEL_59;
                      }
                      v64 = (__int64)(&v60->vtable._1_Finalize.method + 2 * *(_DWORD *)v63);
                    }
                    else
                    {
LABEL_59:
                      v64 = sub_AF54C0(PrevAiRoute_k__BackingField, IWarBoardAIRouteWaste_TypeInfo, 1LL, v59);
                    }
                    notAction = (*(__int64 (__fastcall **)(WarBoardAIRoute_RouteData_o *, _QWORD))v64)(
                                  PrevAiRoute_k__BackingField,
                                  *(_QWORD *)(v64 + 8));
                    if ( baseIndex == (_DWORD)notAction )
                    {
                      notAction = WarBoardAIRoute_RouteData__get_notAction(v31, 0LL);
                      if ( (notAction & 1) == 0 )
                      {
                        v66 = PrevAiRoute_k__BackingField->klass;
                        if ( *(_WORD *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                        {
                          v67 = 0LL;
                          v68 = (IWarBoardAIRouteWaste_c **)&v66->_1.interfaceOffsets->offset;
                          while ( *(v68 - 1) != IWarBoardAIRouteWaste_TypeInfo )
                          {
                            ++v67;
                            v68 += 2;
                            if ( v67 >= *(unsigned __int16 *)&PrevAiRoute_k__BackingField->klass->_2.bitflags1 )
                              goto LABEL_67;
                          }
                          v69 = (__int64)(&v66->vtable._3_ToString.method + 2 * *(_DWORD *)v68);
                        }
                        else
                        {
LABEL_67:
                          v69 = sub_AF54C0(PrevAiRoute_k__BackingField, IWarBoardAIRouteWaste_TypeInfo, 3LL, v65);
                        }
                        notAction = (*(__int64 (__fastcall **)(WarBoardAIRoute_RouteData_o *, _QWORD))v69)(
                                      PrevAiRoute_k__BackingField,
                                      *(_QWORD *)(v69 + 8));
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
    if ( (int)++v30 >= size )
      return 0;
  }
}


void __fastcall WarBoardAI__Clear(WarBoardAI_o *this, const MethodInfo *method)
{
  WarBoardAIRoute_o *routeClass; // x0

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_B5D69C(0LL, method);
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  Il2CppObject *v11; // x21
  Il2CppObject *v12; // x20
  Il2CppObject *v13; // x0
  int32_t v15; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t v16; // [xsp+8h] [xbp-28h] BYREF
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E68C4 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, forceId, groupId, *(_QWORD *)&index);
    sub_B5D5C4(&StringLiteral_23900/*"{0},{1},{2}"*/, v8, v9, v10);
    byte_42E68C4 = 1;
  }
  v17 = forceId;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v16 = groupId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v15 = index;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
  return System_String__Format_44578852((System_String_o *)StringLiteral_23900/*"{0},{1},{2}"*/, v11, v12, v13, 0LL);
}


bool __fastcall WarBoardAI__Execute(WarBoardAI_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WarBoardAI_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *executeRoute; // x20
  int size; // w8
  __int64 routeIndex; // x21
  WarBoardAIRoute_RouteData_o *v17; // x8
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v18; // x21
  __int64 v19; // x22
  WarBoardPieceData_o *basePiece; // x20
  int32_t v21; // w8
  int32_t v22; // w8
  bool v23; // w22
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v25; // x22
  __int64 v26; // x24
  WarBoardAI_o *v27; // x21
  WarBoardAIRoute_RouteData_o *v28; // x8
  int32_t actionIndex; // w22
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v30; // x21
  __int64 v31; // x22
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v32; // x21
  __int64 v33; // x22
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v34; // x21
  __int64 v35; // x22
  WarBoardAIRoute_RouteData_o *v36; // x8
  int32_t v37; // w21
  WarBoardPieceData_o *Piece_23181536; // x0
  System_Int32_array *v39; // x21
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v40; // x22
  __int64 v41; // x23
  WarBoardAIRoute_RouteData_o *v42; // x8
  int32_t v43; // w8
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v44; // x9

  v4 = this;
  if ( (byte_42E68C2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8, v9, v10);
    this = (WarBoardAI_o *)sub_B5D5C4(&WarBoardAIManager_TypeInfo, v11, v12, v13);
    byte_42E68C2 = 1;
  }
  executeRoute = v4->fields.executeRoute;
  if ( !executeRoute )
    return 0;
  size = executeRoute->fields._size;
  routeIndex = v4->fields.routeIndex;
  if ( size <= (int)routeIndex )
    return 0;
  if ( size <= (unsigned int)routeIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v17 = executeRoute->fields._items->m_Items[routeIndex];
  if ( !v17 )
    goto LABEL_55;
  v18 = v4->fields.executeRoute;
  if ( !v18 )
    goto LABEL_55;
  v19 = v4->fields.routeIndex;
  basePiece = v17->fields.basePiece;
  if ( v18->fields._size <= (unsigned int)v19 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  this = (WarBoardAI_o *)v18->fields._items->m_Items[v19];
  if ( !this )
    goto LABEL_55;
  this = (WarBoardAI_o *)WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v21 = v4->fields.routeIndex;
    v4->fields.isEndPhase = 0;
    v22 = v21 + 1;
    v4->fields.routeIndex = v22;
    goto LABEL_52;
  }
  this = (WarBoardAI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v25 = v4->fields.executeRoute;
  if ( !v25 )
    goto LABEL_55;
  v26 = v4->fields.routeIndex;
  v27 = this;
  if ( v25->fields._size <= (unsigned int)v26 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v28 = v25->fields._items->m_Items[v26];
  if ( !v28 )
    goto LABEL_55;
  actionIndex = v28->fields.actionIndex;
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  }
  this = (WarBoardAI_o *)WarBoardAIManager__GetSquare(actionIndex, method);
  if ( !v27 )
    goto LABEL_55;
  this = (WarBoardAI_o *)WarBoardManager__CheckSelectSquare(
                           (WarBoardManager_o *)v27,
                           basePiece,
                           (WarBoardSquareData_o *)this,
                           1,
                           0LL);
  v30 = v4->fields.executeRoute;
  if ( !v30 )
    goto LABEL_55;
  v31 = v4->fields.routeIndex;
  if ( v30->fields._size <= (unsigned int)v31 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  this = (WarBoardAI_o *)v30->fields._items->m_Items[v31];
  if ( !this )
    goto LABEL_55;
  this = (WarBoardAI_o *)WarBoardAIRoute_RouteData__HasFlag((WarBoardAIRoute_RouteData_o *)this, 2LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_34;
  v32 = v4->fields.executeRoute;
  if ( !v32 )
    goto LABEL_55;
  v33 = v4->fields.routeIndex;
  if ( v32->fields._size <= (unsigned int)v33 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  this = (WarBoardAI_o *)v32->fields._items->m_Items[v33];
  if ( !this )
LABEL_55:
    sub_B5D69C(this, method);
  this = (WarBoardAI_o *)WarBoardAIRoute_RouteData__HasFlag((WarBoardAIRoute_RouteData_o *)this, 4LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_46;
LABEL_34:
  v34 = v4->fields.executeRoute;
  if ( !v34 )
    goto LABEL_55;
  v35 = v4->fields.routeIndex;
  if ( v34->fields._size <= (unsigned int)v35 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v36 = v34->fields._items->m_Items[v35];
  if ( !v36 )
    goto LABEL_55;
  v37 = v36->fields.actionIndex;
  this = (WarBoardAI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_55;
  this = *(WarBoardAI_o **)&this[10].fields.isEndPhase;
  if ( !this )
    goto LABEL_55;
  Piece_23181536 = WarBoardData__GetPiece_23181536((WarBoardData_o *)this, v37, 0LL);
  if ( Piece_23181536 && WarBoardPieceData__get_isServant(Piece_23181536, 0LL) )
  {
    this = (WarBoardAI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this )
      goto LABEL_55;
    this = *(WarBoardAI_o **)&this[10].fields.isEndPhase;
    if ( !this )
      goto LABEL_55;
    v39 = WarBoardData__GetInRangeSquareIndecies((WarBoardData_o *)this, v37, 1, 0, 0LL);
    this = (WarBoardAI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this )
      goto LABEL_55;
    WarBoardManager__DispPartyBuff((WarBoardManager_o *)this, v39, 0LL);
  }
LABEL_46:
  this = (WarBoardAI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v40 = v4->fields.executeRoute;
  if ( !v40 )
    goto LABEL_55;
  v41 = v4->fields.routeIndex;
  if ( v40->fields._size <= (unsigned int)v41 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v42 = v40->fields._items->m_Items[v41];
  if ( !v42 || !this )
    goto LABEL_55;
  v23 = 1;
  this = (WarBoardAI_o *)WarBoardManager__PieceAction_18819260(
                           (WarBoardManager_o *)this,
                           basePiece,
                           v42->fields.actionIndex,
                           0LL,
                           1,
                           0LL);
  v43 = v4->fields.routeIndex;
  v4->fields.isEndPhase = (unsigned __int8)this & 1;
  v22 = v43 + 1;
  v4->fields.routeIndex = v22;
  if ( ((unsigned __int8)this & 1) != 0 )
    return v23;
LABEL_52:
  v44 = v4->fields.executeRoute;
  if ( !v44 )
    goto LABEL_55;
  v23 = 1;
  if ( v44->fields._size <= v22 )
    v4->fields.isEndRoute = 1;
  return v23;
}


int32_t __fastcall WarBoardAI__GetRandomIndex(
        WarBoardAI_o *this,
        System_Collections_Generic_List_Decimal__o *weightTable,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  WarBoardAI___c_c *v29; // x0
  struct WarBoardAI___c_StaticFields *static_fields; // x8
  System_Func_Decimal__Decimal__o *_9__14_0; // x20
  Il2CppObject *v32; // x21
  struct WarBoardAI___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Decimal_o v40; // kr00_16
  System_Decimal_o v41; // kr10_16
  float v42; // s0
  float v43; // s0
  System_Decimal_o v44; // kr20_16
  signed __int64 size; // x8
  __int64 v46; // x21
  __int64 v47; // x22
  __int64 v48; // x26
  unsigned __int64 v49; // x20
  char *v50; // x8
  __int64 v51; // x23
  __int64 v52; // x24
  char *v53; // x8
  __int64 v54; // x23
  __int64 v55; // x24
  System_Decimal_o v56; // kr30_16
  System_Decimal_o v58; // 0:x0.16
  System_Decimal_o v59; // 0:x0.16
  System_Decimal_o v60; // 0:x2.16
  System_Decimal_o v61; // 0:x2.16

  if ( (byte_42E68C3 & 1) == 0 )
  {
    sub_B5D5C4(&System_Decimal_TypeInfo, (_DWORD)weightTable, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Sum_Decimal___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_Decimal__Decimal___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_Decimal__Decimal__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Decimal__get_Count__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Decimal__get_Item__, v17, v18, v19);
    sub_B5D5C4(&System_Math_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_WarBoardAI___c__GetRandomIndex_b__14_0__, v23, v24, v25);
    sub_B5D5C4(&WarBoardAI___c_TypeInfo, v26, v27, v28);
    byte_42E68C3 = 1;
  }
  v29 = WarBoardAI___c_TypeInfo;
  if ( (BYTE3(WarBoardAI___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAI___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
    v29 = WarBoardAI___c_TypeInfo;
  }
  static_fields = v29->static_fields;
  _9__14_0 = static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      static_fields = WarBoardAI___c_TypeInfo->static_fields;
    }
    v32 = (Il2CppObject *)static_fields->__9;
    _9__14_0 = (System_Func_Decimal__Decimal__o *)sub_B5D694(System_Func_Decimal__Decimal__TypeInfo);
    System_Func_Decimal__Decimal____ctor(
      _9__14_0,
      v32,
      Method_WarBoardAI___c__GetRandomIndex_b__14_0__,
      (const MethodInfo_279DCF0 *)Method_System_Func_Decimal__Decimal___ctor__);
    v33 = WarBoardAI___c_TypeInfo->static_fields;
    v33->__9__14_0 = _9__14_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v33->__9__14_0,
      (System_Int32_array **)_9__14_0,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  v40 = System_Linq_Enumerable__Sum_Decimal_(
          (System_Collections_Generic_IEnumerable_TSource__o *)weightTable,
          (System_Func_TSource__Decimal__o *)_9__14_0,
          (const MethodInfo_1CB6D20 *)Method_System_Linq_Enumerable_Sum_Decimal___);
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v41 = System_Math__Floor(v40, 0LL);
  if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Decimal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  }
  v42 = System_Decimal__op_Explicit_44462856(v41, 0LL);
  v43 = UnityEngine_Random__Range(0.0, v42, 0LL);
  v44 = System_Decimal__op_Explicit(v43, 0LL);
  if ( !weightTable )
    sub_B5D69C(*(_QWORD *)&v44.fields.flags, *(_QWORD *)&v44.fields.lo);
  LODWORD(size) = weightTable->fields._size;
  if ( (int)size < 1 )
    goto LABEL_34;
  v46 = *(_QWORD *)&v44.fields.flags;
  v47 = *(_QWORD *)&v44.fields.lo;
  v48 = 0LL;
  v49 = 0LL;
  while ( 1 )
  {
    if ( v49 >= (unsigned int)size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v50 = (char *)weightTable->fields._items + v48;
    v52 = *((_QWORD *)v50 + 4);
    v51 = *((_QWORD *)v50 + 5);
    if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Decimal_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
    }
    *(_QWORD *)&v58.fields.flags = v52;
    *(_QWORD *)&v58.fields.lo = v51;
    *(_QWORD *)&v60.fields.flags = v46;
    *(_QWORD *)&v60.fields.lo = v47;
    if ( System_Decimal__op_GreaterThanOrEqual(v58, v60, 0LL) )
      break;
    if ( v49 >= (unsigned int)weightTable->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v53 = (char *)weightTable->fields._items + v48;
    v55 = *((_QWORD *)v53 + 4);
    v54 = *((_QWORD *)v53 + 5);
    if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Decimal_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
    }
    *(_QWORD *)&v59.fields.flags = v46;
    *(_QWORD *)&v59.fields.lo = v47;
    *(_QWORD *)&v61.fields.flags = v55;
    *(_QWORD *)&v61.fields.lo = v54;
    v56 = System_Decimal__op_Subtraction(v59, v61, 0LL);
    size = weightTable->fields._size;
    ++v49;
    v47 = *(_QWORD *)&v56.fields.lo;
    v46 = *(_QWORD *)&v56.fields.flags;
    v48 += 16LL;
    if ( (__int64)v49 >= size )
      goto LABEL_34;
  }
  if ( (_DWORD)v49 == -1 )
LABEL_34:
    LODWORD(v49) = 0;
  return v49;
}


System_Collections_IEnumerator_o *__fastcall WarBoardAI__Think(WarBoardAI_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E68C0 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardAI__Think_d__11_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E68C0 = 1;
  }
  v5 = sub_B5D694(WarBoardAI__Think_d__11_TypeInfo);
  WarBoardAI__Think_d__11___ctor((WarBoardAI__Think_d__11_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
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
    sub_B5D69C(0LL, aiId);
  WarBoardAIRoute__UpdatePiecePersonalityDic(routeClass, aiId, pieceIndex, method);
}


bool __fastcall WarBoardAI___Think_b__11_2(
        WarBoardAI_o *this,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  struct WarBoardAIRoute_o *routeClass; // x22
  WarBoardAI___c_c *v19; // x0
  struct WarBoardAI___c_StaticFields *static_fields; // x8
  System_Func_WarBoardAIRoute_RouteData__float__o *_9__11_7; // x20
  Il2CppObject *v22; // x21
  struct WarBoardAI___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x0
  __int64 v31; // x1
  float v32; // s0
  struct WarBoardStageNpcEntity_o *npcData; // x8

  if ( (byte_42E68C5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____68849168, (_DWORD)x, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_WarBoardAIRoute_RouteData__float___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_WarBoardAIRoute_RouteData__float__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_WarBoardAI___c__Think_b__11_7__, v12, v13, v14);
    sub_B5D5C4(&WarBoardAI___c_TypeInfo, v15, v16, v17);
    byte_42E68C5 = 1;
  }
  routeClass = this->fields.routeClass;
  v19 = WarBoardAI___c_TypeInfo;
  if ( (BYTE3(WarBoardAI___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAI___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
    v19 = WarBoardAI___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__11_7 = static_fields->__9__11_7;
  if ( !_9__11_7 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = WarBoardAI___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__11_7 = (System_Func_WarBoardAIRoute_RouteData__float__o *)sub_B5D694(System_Func_WarBoardAIRoute_RouteData__float__TypeInfo);
    System_Func_WarBoardAIRoute_RouteData__float____ctor(
      _9__11_7,
      v22,
      Method_WarBoardAI___c__Think_b__11_7__,
      (const MethodInfo_2C30BC4 *)Method_System_Func_WarBoardAIRoute_RouteData__float___ctor__);
    v23 = WarBoardAI___c_TypeInfo->static_fields;
    v23->__9__11_7 = _9__11_7;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v23->__9__11_7,
      (System_Int32_array **)_9__11_7,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  v32 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData__30109068(
          (System_Collections_Generic_IEnumerable_TSource__o *)x,
          (System_Func_TSource__float__o *)_9__11_7,
          (const MethodInfo_1CB6D8C *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____68849168);
  if ( !routeClass || (npcData = routeClass->fields.npcData) == 0LL )
    sub_B5D69C(v30, v31);
  return (float)((float)npcData->fields.lowerThinkingValue / 100.0) <= v32;
}


int32_t __fastcall WarBoardAI__get_ForceId(WarBoardAI_o *this, const MethodInfo *method)
{
  struct WarBoardAIRoute_o *routeClass; // x8

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_B5D69C(this, method);
  return routeClass->fields.forceId;
}


int32_t __fastcall WarBoardAI__get_GroupId(WarBoardAI_o *this, const MethodInfo *method)
{
  struct WarBoardAIRoute_o *routeClass; // x8

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_B5D69C(this, method);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  int v81; // w1
  int v82; // w2
  __int64 v83; // x3
  int v84; // w1
  int v85; // w2
  __int64 v86; // x3
  int v87; // w1
  int v88; // w2
  __int64 v89; // x3
  int v90; // w1
  int v91; // w2
  __int64 v92; // x3
  int v93; // w1
  int v94; // w2
  __int64 v95; // x3
  int v96; // w1
  int v97; // w2
  __int64 v98; // x3
  int v99; // w1
  int v100; // w2
  __int64 v101; // x3
  int v102; // w1
  int v103; // w2
  __int64 v104; // x3
  int v105; // w1
  int v106; // w2
  __int64 v107; // x3
  int v108; // w1
  int v109; // w2
  __int64 v110; // x3
  int v111; // w1
  int v112; // w2
  __int64 v113; // x3
  int v114; // w1
  int v115; // w2
  __int64 v116; // x3
  int v117; // w1
  int v118; // w2
  __int64 v119; // x3
  int v120; // w1
  int v121; // w2
  __int64 v122; // x3
  int v123; // w1
  int v124; // w2
  __int64 v125; // x3
  int v126; // w1
  int v127; // w2
  __int64 v128; // x3
  int v129; // w1
  int v130; // w2
  __int64 v131; // x3
  int v132; // w1
  int v133; // w2
  __int64 v134; // x3
  int v135; // w1
  int v136; // w2
  __int64 v137; // x3
  int v138; // w1
  int v139; // w2
  __int64 v140; // x3
  int v141; // w1
  int v142; // w2
  __int64 v143; // x3
  int v144; // w1
  int v145; // w2
  __int64 v146; // x3
  int v147; // w1
  int v148; // w2
  __int64 v149; // x3
  int v150; // w1
  int v151; // w2
  __int64 v152; // x3
  int v153; // w1
  int v154; // w2
  __int64 v155; // x3
  int v156; // w1
  int v157; // w2
  __int64 v158; // x3
  int v159; // w1
  int v160; // w2
  __int64 v161; // x3
  struct WarBoardAI_o *_4__this; // x19
  WarBoardAIRoute_o *routeClass; // x20
  System_Collections_Generic_Dictionary_int__uint__o *placePieceData; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v165; // x22
  System_Int32_array **RouteData; // x0
  BattleServantConfConponent_o *p__2__current; // x27
  System_String_array **v168; // x2
  System_String_array **v169; // x3
  System_Boolean_array **v170; // x4
  System_Int32_array **v171; // x5
  System_Int32_array *v172; // x6
  System_Int32_array *v173; // x7
  bool v174; // w20
  WarBoardAI__Think_d__11_o *availableRouteList_5__4; // x26
  struct WarBoardAIRoute_o *v176; // x8
  System_Int32_array **allRouteList; // x1
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *allRouteList_5__2; // x8
  __int64 v179; // x21
  struct WarBoardAIRoute_o *v180; // x8
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *v181; // x22
  int32_t pickValue; // w8
  BalanceConfig_c *v183; // x0
  _BOOL4 IsWarBoardAiCalcEvalSum; // w9
  WarBoardAI___c_c *v185; // x0
  struct WarBoardAI___c_StaticFields *static_fields; // x8
  System_Func_WarBoardAIRoute_RouteData__Decimal__o *_9__11_0; // x23
  Il2CppObject *v188; // x24
  System_String_array **v189; // x2
  System_String_array **v190; // x3
  System_Boolean_array **v191; // x4
  System_Int32_array **v192; // x5
  System_Int32_array *v193; // x6
  System_Int32_array *v194; // x7
  struct WarBoardAI___c_StaticFields *v195; // x0
  BattleServantConfConponent_o *p__9__11_0; // x0
  struct WarBoardAI___c_StaticFields *v197; // x8
  Il2CppObject *v198; // x24
  struct WarBoardAI___c_StaticFields *v199; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v200; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v201; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v202; // x24
  WarBoardAI__Think_d__11_o **p_availableRouteList_5__4; // x23
  System_String_array **v204; // x2
  System_String_array **v205; // x3
  System_Boolean_array **v206; // x4
  System_Int32_array **v207; // x5
  System_Int32_array *v208; // x6
  System_Int32_array *v209; // x7
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v210; // x25
  System_String_array **v211; // x2
  System_String_array **v212; // x3
  System_Boolean_array **v213; // x4
  System_Int32_array **v214; // x5
  System_Int32_array *v215; // x6
  System_Int32_array *v216; // x7
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o **v217; // x24
  __int64 v218; // x8
  unsigned __int64 v219; // x20
  int32_t pickValue_5__3; // w28
  BattleServantConfConponent_o *v221; // x25
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *v222; // x26
  __int64 v223; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *klass; // x27
  System_String_array **v225; // x2
  System_String_array **v226; // x3
  System_Boolean_array **v227; // x4
  System_Int32_array **v228; // x5
  System_Int32_array *v229; // x6
  System_Int32_array *v230; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v231; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v232; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v233; // x0
  System_Int32_array **v234; // x0
  System_String_array **v235; // x2
  System_String_array **v236; // x3
  System_Boolean_array **v237; // x4
  System_Int32_array **v238; // x5
  System_Int32_array *v239; // x6
  System_Int32_array *v240; // x7
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *evalValueSortList_5__5; // x8
  System_Collections_Generic_List_Decimal__o *v242; // x21
  Il2CppClass *v243; // x23
  int v244; // w27
  int v245; // w19
  int namespaze; // w8
  int v247; // w24
  char v248; // w25
  char v249; // w26
  Il2CppClass *v250; // x8
  WarBoardPieceData_o *monitor; // x0
  bool isMaster; // w0
  _BOOL8 v253; // x0
  __int64 v254; // x1
  Il2CppObject *current; // x23
  int v256; // w27
  int v257; // w8
  WarBoardAI_o *v258; // x9
  struct WarBoardAIRoute_o *v259; // x8
  float v260; // s12
  float BestMagnification; // s8
  float LowestMagnification; // s0
  int value; // w21
  float ImmobilityMagnification; // s0
  _BOOL8 v265; // x0
  __int64 v266; // x1
  WarBoardTacticalTrendEntity_o *v267; // x23
  int v268; // w8
  float v269; // s8
  BalanceConfig_c *v270; // x0
  System_Decimal_o v271; // kr00_16
  Il2CppClass *v272; // x8
  WarBoardAI___c_c *v273; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v274; // x25
  struct WarBoardAI___c_StaticFields *v275; // x8
  System_Func_WarBoardAIRoute_RouteData__Decimal__o *_9__11_8; // x26
  int v277; // w21
  System_Decimal_o v278; // kr10_16
  Il2CppClass *v279; // x8
  WarBoardAI___c_c *v280; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v281; // x25
  struct WarBoardAI___c_StaticFields *v282; // x8
  System_Func_WarBoardAIRoute_RouteData__Decimal__o *_9__11_9; // x26
  int v284; // w21
  Il2CppObject *v285; // x27
  struct WarBoardAI___c_StaticFields *v286; // x0
  System_String_array **v287; // x2
  System_String_array **v288; // x3
  System_Boolean_array **v289; // x4
  System_Int32_array **v290; // x5
  System_Int32_array *v291; // x6
  System_Int32_array *v292; // x7
  System_Decimal_o v293; // kr20_16
  System_Decimal_o v294; // kr30_16
  __int64 v295; // x2
  __int64 v296; // x4
  Il2CppObject *v297; // x27
  struct WarBoardAI___c_StaticFields *v298; // x0
  System_String_array **v299; // x2
  System_String_array **v300; // x3
  System_Boolean_array **v301; // x4
  System_Int32_array **v302; // x5
  System_Int32_array *v303; // x6
  System_Int32_array *v304; // x7
  System_Decimal_o v305; // kr40_16
  Il2CppClass *v306; // x8
  __int64 v307; // x8
  int v308; // w21
  int32_t v309; // w27
  System_Decimal_o v310; // kr70_16
  System_String_array **v311; // x2
  System_String_array **v312; // x3
  System_Boolean_array **v313; // x4
  System_Int32_array **v314; // x5
  System_Int32_array *v315; // x6
  System_Int32_array *v316; // x7
  System_Int32_array **v317; // x1
  System_Collections_Generic_IEnumerable_TSource__o *executeRoute; // x21
  WarBoardAI___c_c *v319; // x0
  struct WarBoardAI___c_StaticFields *v320; // x8
  System_Func_WarBoardAIRoute_RouteData__float__o *_9__11_3; // x22
  Il2CppObject *v322; // x23
  struct WarBoardAI___c_StaticFields *v323; // x0
  System_String_array **v324; // x2
  System_String_array **v325; // x3
  System_Boolean_array **v326; // x4
  System_Int32_array **v327; // x5
  System_Int32_array *v328; // x6
  System_Int32_array *v329; // x7
  System_Int32_array **v330; // x0
  BattleServantConfConponent_o *v331; // x27
  System_String_array **v332; // x2
  System_String_array **v333; // x3
  System_Boolean_array **v334; // x4
  System_Int32_array **v335; // x5
  System_Int32_array *v336; // x6
  System_Int32_array *v337; // x7
  int v338; // w8
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v339; // x21
  System_String_array **v340; // x2
  System_String_array **v341; // x3
  System_Boolean_array **v342; // x4
  System_Int32_array **v343; // x5
  System_Int32_array *v344; // x6
  System_Int32_array *v345; // x7
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v346; // x22
  int v347; // w19
  __int64 v348; // x23
  __int64 v349; // x22
  BattleServantConfConponent_o *p_evalValueSortList_5__5; // x27
  System_String_array **v351; // x2
  System_String_array **v352; // x3
  System_Boolean_array **v353; // x4
  System_Int32_array **v354; // x5
  System_Int32_array *v355; // x6
  System_Int32_array *v356; // x7
  System_Int32_array **v357; // x0
  System_String_array **v358; // x2
  System_String_array **v359; // x3
  System_Boolean_array **v360; // x4
  System_Int32_array **v361; // x5
  System_Int32_array *v362; // x6
  System_Int32_array *v363; // x7
  System_Int32_array **v364; // x0
  System_String_array **v365; // x2
  System_String_array **v366; // x3
  System_Boolean_array **v367; // x4
  System_Int32_array **v368; // x5
  System_Int32_array *v369; // x6
  System_Int32_array *v370; // x7
  System_Int32_array **v371; // x0
  System_String_array **v372; // x2
  System_String_array **v373; // x3
  System_Boolean_array **v374; // x4
  System_Int32_array **v375; // x5
  System_Int32_array *v376; // x6
  System_Int32_array *v377; // x7
  System_Int32_array **v378; // x0
  System_String_array **v379; // x2
  System_String_array **v380; // x3
  System_Boolean_array **v381; // x4
  System_Int32_array **v382; // x5
  System_Int32_array *v383; // x6
  System_Int32_array *v384; // x7
  __int64 v386; // x0
  WarBoardAI__Think_d__11_o *v387; // [xsp+8h] [xbp-118h]
  WarBoardAI__Think_d__11_o *v388; // [xsp+8h] [xbp-118h]
  System_Collections_Generic_List_Decimal__o *v389; // [xsp+10h] [xbp-110h]
  WarBoardAI_o *v390; // [xsp+20h] [xbp-100h]
  WarBoardAI__Think_d__11_o **v391; // [xsp+28h] [xbp-F8h]
  Il2CppObject *object; // [xsp+30h] [xbp-F0h]
  _BYTE v393[32]; // [xsp+38h] [xbp-E8h] BYREF
  int v394; // [xsp+58h] [xbp-C8h]
  System_Collections_Generic_List_Enumerator_T__o v395; // [xsp+60h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v396; // [xsp+80h] [xbp-A0h] BYREF
  System_Decimal_o v397; // 0:x1.16
  System_Decimal_o v398; // 0:x2.16
  System_Decimal_o v399; // 0:x2.16

  v8 = this;
  if ( (byte_42E703C & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___, v9, v10, v11);
    sub_B5D5C4(&bool_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Decimal_TypeInfo, v15, v16, v17);
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_OrderByDescending_List_WarBoardAIRoute_RouteData___Decimal___,
      v18,
      v19,
      v20);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___, v21, v22, v23);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____68849168, v24, v25, v26);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Take_List_WarBoardAIRoute_RouteData____, v27, v28, v29);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____, v30, v31, v32);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_List_WarBoardAIRoute_RouteData____, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__Dispose__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__, v39, v40, v41);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__MoveNext__,
      v42,
      v43,
      v44);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__, v45, v46, v47);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__,
      v48,
      v49,
      v50);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__get_Current__,
      v51,
      v52,
      v53);
    sub_B5D5C4(&Method_System_Func_WarBoardAIRoute_RouteData__Decimal___ctor__, v54, v55, v56);
    sub_B5D5C4(&Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__, v57, v58, v59);
    sub_B5D5C4(&Method_System_Func_WarBoardAIRoute_RouteData__float___ctor__, v60, v61, v62);
    sub_B5D5C4(&Method_System_Func_List_WarBoardAIRoute_RouteData___bool___ctor__, v63, v64, v65);
    sub_B5D5C4(&Method_System_Func_List_WarBoardAIRoute_RouteData___Decimal___ctor__, v66, v67, v68);
    sub_B5D5C4(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v69, v70, v71);
    sub_B5D5C4(&System_Func_List_WarBoardAIRoute_RouteData___bool__TypeInfo, v72, v73, v74);
    sub_B5D5C4(&System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo, v75, v76, v77);
    sub_B5D5C4(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo, v78, v79, v80);
    sub_B5D5C4(&System_Func_WarBoardAIRoute_RouteData__float__TypeInfo, v81, v82, v83);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__, v84, v85, v86);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__, v87, v88, v89);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__, v90, v91, v92);
    sub_B5D5C4(&System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo, v93, v94, v95);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Decimal__Add__, v96, v97, v98);
    sub_B5D5C4(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__, v99, v100, v101);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__, v102, v103, v104);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__GetEnumerator__, v105, v106, v107);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Decimal___ctor__, v108, v109, v110);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor__, v111, v112, v113);
    sub_B5D5C4(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__, v114, v115, v116);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__, v117, v118, v119);
    sub_B5D5C4(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___get_Count__, v120, v121, v122);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__, v123, v124, v125);
    sub_B5D5C4(&System_Collections_Generic_List_Decimal__TypeInfo, v126, v127, v128);
    sub_B5D5C4(&System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo, v129, v130, v131);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo, v132, v133, v134);
    sub_B5D5C4(&Method_WarBoardAI___c__Think_b__11_0__, v135, v136, v137);
    sub_B5D5C4(&Method_WarBoardAI___c__Think_b__11_1__, v138, v139, v140);
    sub_B5D5C4(&Method_WarBoardAI___c__Think_b__11_3__, v141, v142, v143);
    sub_B5D5C4(&Method_WarBoardAI___c__Think_b__11_8__, v144, v145, v146);
    sub_B5D5C4(&Method_WarBoardAI___c__Think_b__11_9__, v147, v148, v149);
    sub_B5D5C4(&Method_WarBoardAI___c__DisplayClass11_0__Think_b__6__, v150, v151, v152);
    sub_B5D5C4(&WarBoardAI___c__DisplayClass11_0_TypeInfo, v153, v154, v155);
    sub_B5D5C4(&WarBoardAI___c_TypeInfo, v156, v157, v158);
    this = (WarBoardAI__Think_d__11_o *)sub_B5D5C4(&Method_WarBoardAI__Think_b__11_2__, v159, v160, v161);
    byte_42E703C = 1;
  }
  memset(&v396, 0, sizeof(v396));
  memset(&v395, 0, sizeof(v395));
  v394 = 0;
  _4__this = v8->fields.__4__this;
  v390 = _4__this;
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
      v165 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v165,
        (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor__);
      RouteData = (System_Int32_array **)WarBoardAIRoute__CreateRouteData(
                                           routeClass,
                                           placePieceData,
                                           0,
                                           (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v165,
                                           0LL);
      v8->fields.__2__current = (Il2CppObject *)RouteData;
      p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B5D560(p__2__current, RouteData, v168, v169, v170, v171, v172, v173);
      v174 = 1;
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
      return v174;
    case 1:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_197;
      v176 = _4__this->fields.routeClass;
      if ( !v176 )
        goto LABEL_197;
      allRouteList = (System_Int32_array **)v176->fields.allRouteList;
      v8->fields._allRouteList_5__2 = (struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *)allRouteList;
      sub_B5D560((BattleServantConfConponent_o *)&v8->fields._allRouteList_5__2, allRouteList, v2, v3, v4, v5, v6, v7);
      allRouteList_5__2 = v8->fields._allRouteList_5__2;
      if ( !allRouteList_5__2 )
        goto LABEL_197;
      if ( !allRouteList_5__2->fields._size )
      {
        v174 = 1;
        v393[0] = 1;
        v378 = (System_Int32_array **)j_il2cpp_value_box_0(bool_TypeInfo, v393);
        v8->fields.__2__current = (Il2CppObject *)v378;
        v331 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
        sub_B5D560(v331, v378, v379, v380, v381, v382, v383, v384);
        v338 = 2;
        goto LABEL_202;
      }
LABEL_16:
      v179 = sub_B5D694(WarBoardAI___c__DisplayClass11_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v179, 0LL);
      if ( !_4__this )
        goto LABEL_197;
      v180 = _4__this->fields.routeClass;
      if ( !v180 )
        goto LABEL_197;
      v181 = v8->fields._allRouteList_5__2;
      if ( !v181 )
        goto LABEL_197;
      pickValue = v180->fields.pickValue;
      if ( pickValue >= v181->fields._size )
        pickValue = v181->fields._size;
      v8->fields._pickValue_5__3 = pickValue;
      if ( !pickValue )
        v8->fields._pickValue_5__3 = v181->fields._size;
      v183 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v183 = BalanceConfig_TypeInfo;
        v181 = v8->fields._allRouteList_5__2;
      }
      IsWarBoardAiCalcEvalSum = v183->static_fields->IsWarBoardAiCalcEvalSum;
      v185 = WarBoardAI___c_TypeInfo;
      if ( IsWarBoardAiCalcEvalSum )
      {
        if ( (WORD1(WarBoardAI___c_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !WarBoardAI___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
          v185 = WarBoardAI___c_TypeInfo;
        }
        static_fields = v185->static_fields;
        _9__11_0 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)static_fields->__9__11_0;
        if ( !_9__11_0 )
        {
          if ( (BYTE3(v185->vtable._0_Equals.methodPtr) & 4) != 0 && !v185->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v185);
            static_fields = WarBoardAI___c_TypeInfo->static_fields;
          }
          v188 = (Il2CppObject *)static_fields->__9;
          _9__11_0 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)sub_B5D694(System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo);
          System_Func_WarBoardAIRoute_RouteData__Decimal____ctor(
            _9__11_0,
            v188,
            Method_WarBoardAI___c__Think_b__11_0__,
            (const MethodInfo_2C2F494 *)Method_System_Func_List_WarBoardAIRoute_RouteData___Decimal___ctor__);
          v195 = WarBoardAI___c_TypeInfo->static_fields;
          v195->__9__11_0 = (struct System_Func_List_WarBoardAIRoute_RouteData___Decimal__o *)_9__11_0;
          p__9__11_0 = (BattleServantConfConponent_o *)&v195->__9__11_0;
LABEL_45:
          sub_B5D560(p__9__11_0, (System_Int32_array **)_9__11_0, v189, v190, v191, v192, v193, v194);
        }
      }
      else
      {
        if ( (WORD1(WarBoardAI___c_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !WarBoardAI___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
          v185 = WarBoardAI___c_TypeInfo;
        }
        v197 = v185->static_fields;
        _9__11_0 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)v197->__9__11_1;
        if ( !_9__11_0 )
        {
          if ( (BYTE3(v185->vtable._0_Equals.methodPtr) & 4) != 0 && !v185->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v185);
            v197 = WarBoardAI___c_TypeInfo->static_fields;
          }
          v198 = (Il2CppObject *)v197->__9;
          _9__11_0 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)sub_B5D694(System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo);
          System_Func_WarBoardAIRoute_RouteData__Decimal____ctor(
            _9__11_0,
            v198,
            Method_WarBoardAI___c__Think_b__11_1__,
            (const MethodInfo_2C2F494 *)Method_System_Func_List_WarBoardAIRoute_RouteData___Decimal___ctor__);
          v199 = WarBoardAI___c_TypeInfo->static_fields;
          v199->__9__11_1 = (struct System_Func_List_WarBoardAIRoute_RouteData___Decimal__o *)_9__11_0;
          p__9__11_0 = (BattleServantConfConponent_o *)&v199->__9__11_1;
          goto LABEL_45;
        }
      }
      v200 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__Decimal_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)v181,
                                                                    (System_Func_TSource__TKey__o *)_9__11_0,
                                                                    (const MethodInfo_1CAF540 *)Method_System_Linq_Enumerable_OrderByDescending_List_WarBoardAIRoute_RouteData___Decimal___);
      v201 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
               v200,
               (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____);
      v202 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v202,
        (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
      v8->fields._availableRouteList_5__4 = (struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *)v202;
      p_availableRouteList_5__4 = (WarBoardAI__Think_d__11_o **)&v8->fields._availableRouteList_5__4;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v8->fields._availableRouteList_5__4,
        (System_Int32_array **)v202,
        v204,
        v205,
        v206,
        v207,
        v208,
        v209);
      v210 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo);
      System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
        v210,
        (const MethodInfo_2505E54 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__);
      if ( !v179 )
        goto LABEL_197;
      *(_QWORD *)(v179 + 16) = v210;
      v217 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o **)(v179 + 16);
      v387 = v8;
      sub_B5D560(
        (BattleServantConfConponent_o *)(v179 + 16),
        (System_Int32_array **)v210,
        v211,
        v212,
        v213,
        v214,
        v215,
        v216);
      if ( !v201 )
        goto LABEL_197;
      v218 = *(_QWORD *)&v201->max_length;
      if ( (int)v218 >= 1 )
      {
        v219 = 0LL;
        pickValue_5__3 = v8->fields._pickValue_5__3;
        v391 = (WarBoardAI__Think_d__11_o **)&v8->fields._availableRouteList_5__4;
        v221 = (BattleServantConfConponent_o *)(v179 + 24);
        while ( 1 )
        {
          if ( v219 >= (unsigned int)v218 )
            goto LABEL_204;
          v222 = v201->m_Items[v219];
          this = (WarBoardAI__Think_d__11_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v222, 0LL);
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
            if ( !v222 )
              goto LABEL_197;
            if ( !LODWORD(v222->fields.msgIds) )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            v223 = *(_QWORD *)(*(_QWORD *)&v222->fields.groupId + 32LL);
            if ( !v223 )
              goto LABEL_197;
            if ( *(_DWORD *)(v223 + 24) == *(_DWORD *)(v223 + 28) )
            {
              if ( !LODWORD(v222->fields.msgIds) )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
              if ( !*v217 )
                goto LABEL_197;
              this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
                                                    *v217,
                                                    *(WarBoardAIRoute_RouteData_o **)(v223 + 48),
                                                    (const MethodInfo_2507010 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__);
              goto LABEL_77;
            }
            klass = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v221->klass;
            if ( !v221->klass )
            {
              klass = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
              System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                klass,
                (Il2CppObject *)v179,
                Method_WarBoardAI___c__DisplayClass11_0__Think_b__6__,
                (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardAIRoute_RouteData__bool___ctor__);
              *(_QWORD *)(v179 + 24) = klass;
              p_availableRouteList_5__4 = v391;
              sub_B5D560(v221, (System_Int32_array **)klass, v225, v226, v227, v228, v229, v230);
            }
            this = (WarBoardAI__Think_d__11_o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                                  (System_Collections_Generic_List_T__o *)v222,
                                                  (System_Func_T__bool__o *)klass,
                                                  (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
            if ( ((unsigned __int8)this & 1) == 0 )
              break;
          }
LABEL_77:
          LODWORD(v218) = v201->max_length;
          if ( (__int64)++v219 >= (int)v218 )
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
                                                    (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v222,
                                                    0LL),
              ((unsigned __int8)this & 1) == 0) )
        {
          this = *p_availableRouteList_5__4;
          if ( !*p_availableRouteList_5__4 )
            goto LABEL_197;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v222,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__);
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
      v8 = v387;
      if ( SLODWORD(availableRouteList_5__4->fields.__2__current) <= 0 )
      {
        v174 = 1;
        v393[0] = 1;
        v371 = (System_Int32_array **)j_il2cpp_value_box_0(bool_TypeInfo, v393);
        v387->fields.__2__current = (Il2CppObject *)v371;
        v331 = (BattleServantConfConponent_o *)&v387->fields.__2__current;
        sub_B5D560((BattleServantConfConponent_o *)&v387->fields.__2__current, v371, v372, v373, v374, v375, v376, v377);
        v338 = 3;
        goto LABEL_202;
      }
LABEL_80:
      v231 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_List_WarBoardAIRoute_RouteData___bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v231,
        (Il2CppObject *)_4__this,
        Method_WarBoardAI__Think_b__11_2__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_List_WarBoardAIRoute_RouteData___bool___ctor__);
      v232 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
               (System_Collections_Generic_IEnumerable_TSource__o *)availableRouteList_5__4,
               (System_Func_TSource__bool__o *)v231,
               (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_List_WarBoardAIRoute_RouteData____);
      v233 = System_Linq_Enumerable__Take_BattleData_CommandHistory_(
               v232,
               v8->fields._pickValue_5__3,
               (const MethodInfo_1CB6E50 *)Method_System_Linq_Enumerable_Take_List_WarBoardAIRoute_RouteData____);
      v234 = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v233,
                                      (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____);
      v8->fields._evalValueSortList_5__5 = (struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *)v234;
      object = (Il2CppObject *)&v8->fields._evalValueSortList_5__5;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v8->fields._evalValueSortList_5__5,
        v234,
        v235,
        v236,
        v237,
        v238,
        v239,
        v240);
      evalValueSortList_5__5 = v8->fields._evalValueSortList_5__5;
      if ( !evalValueSortList_5__5 )
        goto LABEL_197;
      if ( !*(_QWORD *)&evalValueSortList_5__5->max_length )
      {
        v174 = 1;
        v393[0] = 1;
        v364 = (System_Int32_array **)j_il2cpp_value_box_0(bool_TypeInfo, v393);
        v8->fields.__2__current = (Il2CppObject *)v364;
        v331 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
        sub_B5D560(v331, v364, v365, v366, v367, v368, v369, v370);
        v338 = 4;
LABEL_202:
        *(_DWORD *)&v331[-1].fields.isOpenAfter = v338;
        return v174;
      }
LABEL_82:
      v388 = v8;
      v242 = (System_Collections_Generic_List_Decimal__o *)sub_B5D694(System_Collections_Generic_List_Decimal__TypeInfo);
      System_Collections_Generic_List_Decimal____ctor(
        v242,
        (const MethodInfo_3077628 *)Method_System_Collections_Generic_List_Decimal___ctor__);
      v243 = object->klass;
      if ( !object->klass )
        goto LABEL_197;
      v244 = 0;
      v245 = 0;
      v389 = v242;
      while ( 1 )
      {
        namespaze = (int)v243->_1.namespaze;
        if ( v245 >= namespaze )
          break;
        if ( v245 >= (unsigned int)namespaze )
          goto LABEL_204;
        this = (WarBoardAI__Think_d__11_o *)*((_QWORD *)&v243->_1.byval_arg.data + v245);
        if ( !this )
          goto LABEL_197;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v393,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
          (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
        v247 = 0;
        v248 = 0;
        v249 = 0;
        v396 = *(System_Collections_Generic_List_Enumerator_T__o *)v393;
        while ( 1 )
        {
          v253 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                   &v396,
                   (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
          if ( !v253 )
            break;
          current = v396.fields.current;
          if ( !v396.fields.current )
            sub_B5D69C(v253, v254);
          v250 = v396.fields.current[1].klass;
          if ( ((unsigned __int8)v250 & 4) != 0 )
          {
            monitor = (WarBoardPieceData_o *)v396.fields.current[3].monitor;
            if ( monitor )
            {
              isMaster = WarBoardPieceData__get_isMaster(monitor, 0LL);
              v250 = current[1].klass;
              v248 |= isMaster;
            }
            v249 = 1;
          }
          v247 |= ((unsigned __int64)v250 >> 3) & 1;
        }
        *(_DWORD *)&v393[4 * v244 + 24] = 849;
        v256 = ++v394;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v396,
          (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
        if ( v256 )
        {
          v257 = v256 - 1;
          v258 = v390;
          if ( *(_DWORD *)&v393[4 * v256 + 20] == 849 )
          {
            --v256;
            v394 = v257;
            if ( !v390 )
              goto LABEL_197;
            goto LABEL_102;
          }
        }
        else
        {
          v258 = v390;
        }
        if ( !v258 )
          goto LABEL_197;
LABEL_102:
        v259 = v258->fields.routeClass;
        if ( !v259 )
          goto LABEL_197;
        this = (WarBoardAI__Think_d__11_o *)v259->fields.tacticalTrendList;
        if ( !this )
          goto LABEL_197;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v393,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
          (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__GetEnumerator__);
        v260 = 0.0;
        v395 = *(System_Collections_Generic_List_Enumerator_T__o *)v393;
        while ( 1 )
        {
          v265 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                   &v395,
                   (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__MoveNext__);
          if ( !v265 )
            break;
          v267 = (WarBoardTacticalTrendEntity_o *)v395.fields.current;
          if ( !v395.fields.current )
            sub_B5D69C(v265, v266);
          switch ( HIDWORD(v395.fields.current[1].klass) )
          {
            case 0:
              if ( v245 < SLODWORD(v395.fields.current[1].monitor) )
              {
                BestMagnification = WarBoardTacticalTrendEntity__GetBestMagnification(
                                      (WarBoardTacticalTrendEntity_o *)v395.fields.current,
                                      0LL);
                LowestMagnification = WarBoardTacticalTrendEntity__GetLowestMagnification(v267, 0LL);
                value = v267->fields.value;
                ImmobilityMagnification = WarBoardTacticalTrendEntity__GetBestMagnification(v267, 0LL)
                                        - (float)((float)((float)(BestMagnification - LowestMagnification)
                                                        / (float)((float)value + -1.0))
                                                * (float)v245);
                goto LABEL_114;
              }
              break;
            case 1:
              if ( (v249 & 1) != 0 )
                goto LABEL_113;
              break;
            case 4:
              if ( (v248 & 1) != 0 )
                goto LABEL_113;
              break;
            case 5:
              if ( (v247 & 1) != 0 )
              {
LABEL_113:
                ImmobilityMagnification = WarBoardTacticalTrendEntity__GetImmobilityMagnification(
                                            (WarBoardTacticalTrendEntity_o *)v395.fields.current,
                                            0LL);
LABEL_114:
                v260 = v260 + ImmobilityMagnification;
              }
              break;
            default:
              continue;
          }
        }
        *(_DWORD *)&v393[4 * v256 + 24] = 1074;
        v244 = ++v394;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v395,
          (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__Dispose__);
        if ( v244 )
        {
          v268 = v244 - 1;
          if ( *(_DWORD *)&v393[4 * v244 + 20] == 1074 )
          {
            --v244;
            v394 = v268;
          }
        }
        if ( v260 == 0.0 )
          v269 = 1.0;
        else
          v269 = v260;
        v270 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v270 = BalanceConfig_TypeInfo;
        }
        if ( v270->static_fields->IsWarBoardAiCalcEvalSum )
        {
          if ( (WORD1(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !System_Decimal_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
          }
          v271 = System_Decimal__op_Explicit(v269, 0LL);
          method = *(const MethodInfo **)&v271.fields.lo;
          this = *(WarBoardAI__Think_d__11_o **)&v271.fields.flags;
          v272 = object->klass;
          if ( !object->klass )
            goto LABEL_197;
          if ( (unsigned int)v245 >= LODWORD(v272->_1.namespaze) )
            goto LABEL_204;
          v273 = WarBoardAI___c_TypeInfo;
          v274 = (System_Collections_Generic_IEnumerable_TSource__o *)*((_QWORD *)&v272->_1.byval_arg.data + v245);
          if ( (BYTE3(WarBoardAI___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardAI___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
            v273 = WarBoardAI___c_TypeInfo;
          }
          v275 = v273->static_fields;
          _9__11_8 = v275->__9__11_8;
          if ( !_9__11_8 )
          {
            if ( (BYTE3(v273->vtable._0_Equals.methodPtr) & 4) != 0 )
            {
              v277 = v244;
              if ( !v273->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v273);
                v275 = WarBoardAI___c_TypeInfo->static_fields;
              }
            }
            else
            {
              v277 = v244;
            }
            v285 = (Il2CppObject *)v275->__9;
            _9__11_8 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)sub_B5D694(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
            System_Func_WarBoardAIRoute_RouteData__Decimal____ctor(
              _9__11_8,
              v285,
              Method_WarBoardAI___c__Think_b__11_8__,
              (const MethodInfo_2C2F494 *)Method_System_Func_WarBoardAIRoute_RouteData__Decimal___ctor__);
            v286 = WarBoardAI___c_TypeInfo->static_fields;
            v286->__9__11_8 = _9__11_8;
            sub_B5D560(
              (BattleServantConfConponent_o *)&v286->__9__11_8,
              (System_Int32_array **)_9__11_8,
              v287,
              v288,
              v289,
              v290,
              v291,
              v292);
            v244 = v277;
          }
          v293 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData__30108996(
                   v274,
                   (System_Func_TSource__Decimal__o *)_9__11_8,
                   (const MethodInfo_1CB6D44 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
          if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Decimal_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
          }
          v294 = System_Decimal__op_Multiply(v271, v293, 0LL);
          method = *(const MethodInfo **)&v294.fields.lo;
          v296 = *(unsigned __int128 *)&v294 >> 64;
          this = (WarBoardAI__Think_d__11_o *)*(_OWORD *)&v294;
          v295 = *(_QWORD *)&v294.fields.flags;
        }
        else
        {
          if ( (WORD1(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !System_Decimal_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
          }
          v278 = System_Decimal__op_Explicit(v269, 0LL);
          method = *(const MethodInfo **)&v278.fields.lo;
          this = *(WarBoardAI__Think_d__11_o **)&v278.fields.flags;
          v279 = object->klass;
          if ( !object->klass )
            goto LABEL_197;
          if ( (unsigned int)v245 >= LODWORD(v279->_1.namespaze) )
            goto LABEL_204;
          v280 = WarBoardAI___c_TypeInfo;
          v281 = (System_Collections_Generic_IEnumerable_TSource__o *)*((_QWORD *)&v279->_1.byval_arg.data + v245);
          if ( (BYTE3(WarBoardAI___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardAI___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
            v280 = WarBoardAI___c_TypeInfo;
          }
          v282 = v280->static_fields;
          _9__11_9 = v282->__9__11_9;
          if ( !_9__11_9 )
          {
            if ( (BYTE3(v280->vtable._0_Equals.methodPtr) & 4) != 0 )
            {
              v284 = v244;
              if ( !v280->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v280);
                v282 = WarBoardAI___c_TypeInfo->static_fields;
              }
            }
            else
            {
              v284 = v244;
            }
            v297 = (Il2CppObject *)v282->__9;
            _9__11_9 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)sub_B5D694(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
            System_Func_WarBoardAIRoute_RouteData__Decimal____ctor(
              _9__11_9,
              v297,
              Method_WarBoardAI___c__Think_b__11_9__,
              (const MethodInfo_2C2F494 *)Method_System_Func_WarBoardAIRoute_RouteData__Decimal___ctor__);
            v298 = WarBoardAI___c_TypeInfo->static_fields;
            v298->__9__11_9 = _9__11_9;
            sub_B5D560(
              (BattleServantConfConponent_o *)&v298->__9__11_9,
              (System_Int32_array **)_9__11_9,
              v299,
              v300,
              v301,
              v302,
              v303,
              v304);
            v244 = v284;
          }
          v305 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData__30108996(
                   v281,
                   (System_Func_TSource__Decimal__o *)_9__11_9,
                   (const MethodInfo_1CB6D44 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
          method = *(const MethodInfo **)&v305.fields.lo;
          this = *(WarBoardAI__Think_d__11_o **)&v305.fields.flags;
          v306 = object->klass;
          if ( !object->klass )
            goto LABEL_197;
          if ( (unsigned int)v245 >= LODWORD(v306->_1.namespaze) )
            goto LABEL_204;
          v307 = *((_QWORD *)&v306->_1.byval_arg.data + v245);
          if ( !v307 )
            goto LABEL_197;
          v308 = v244;
          v309 = *(_DWORD *)(v307 + 24);
          if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Decimal_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
          }
          v398 = System_Decimal__op_Implicit_44462380(v309, 0LL);
          v399 = System_Decimal__op_Division(v305, v398, 0LL);
          v310 = System_Decimal__op_Multiply(v278, v399, 0LL);
          method = *(const MethodInfo **)&v310.fields.lo;
          v296 = *(unsigned __int128 *)&v310 >> 64;
          this = (WarBoardAI__Think_d__11_o *)*(_OWORD *)&v310;
          v295 = *(_QWORD *)&v310.fields.flags;
          v244 = v308;
        }
        v242 = v389;
        if ( v389 )
        {
          *(_QWORD *)&v397.fields.flags = v295;
          *(_QWORD *)&v397.fields.lo = v296;
          System_Collections_Generic_List_Decimal___Add(
            v389,
            v397,
            (const MethodInfo_30783AC *)Method_System_Collections_Generic_List_Decimal__Add__);
          ++v245;
          v243 = object->klass;
          if ( object->klass )
            continue;
        }
        goto LABEL_197;
      }
      _4__this = v390;
      if ( !v390 )
        goto LABEL_197;
      this = (WarBoardAI__Think_d__11_o *)WarBoardAI__GetRandomIndex(v390, v242, 0LL);
      v8 = v388;
      if ( (unsigned int)this >= LODWORD(v243->_1.namespaze) )
      {
LABEL_204:
        v386 = sub_B5D6C8(this);
        sub_B5D668(v386, 0LL);
      }
      v317 = (System_Int32_array **)*((_QWORD *)&v243->_1.byval_arg.data + (int)this);
      v390->fields.executeRoute = (struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v317;
      sub_B5D560((BattleServantConfConponent_o *)&v390->fields.executeRoute, v317, v311, v312, v313, v314, v315, v316);
      executeRoute = (System_Collections_Generic_IEnumerable_TSource__o *)v390->fields.executeRoute;
      v319 = WarBoardAI___c_TypeInfo;
      if ( (BYTE3(WarBoardAI___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAI___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
        v319 = WarBoardAI___c_TypeInfo;
      }
      v320 = v319->static_fields;
      _9__11_3 = v320->__9__11_3;
      if ( !_9__11_3 )
      {
        if ( (BYTE3(v319->vtable._0_Equals.methodPtr) & 4) != 0 && !v319->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v319);
          v320 = WarBoardAI___c_TypeInfo->static_fields;
        }
        v322 = (Il2CppObject *)v320->__9;
        _9__11_3 = (System_Func_WarBoardAIRoute_RouteData__float__o *)sub_B5D694(System_Func_WarBoardAIRoute_RouteData__float__TypeInfo);
        System_Func_WarBoardAIRoute_RouteData__float____ctor(
          _9__11_3,
          v322,
          Method_WarBoardAI___c__Think_b__11_3__,
          (const MethodInfo_2C30BC4 *)Method_System_Func_WarBoardAIRoute_RouteData__float___ctor__);
        v323 = WarBoardAI___c_TypeInfo->static_fields;
        v323->__9__11_3 = _9__11_3;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v323->__9__11_3,
          (System_Int32_array **)_9__11_3,
          v324,
          v325,
          v326,
          v327,
          v328,
          v329);
        _4__this = v390;
      }
      System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData__30109068(
        executeRoute,
        (System_Func_TSource__float__o *)_9__11_3,
        (const MethodInfo_1CB6D8C *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____68849168);
      if ( WarBoardAI__CheckWasteRoute(_4__this, _4__this->fields.executeRoute, 0LL) )
      {
        v174 = 1;
        v393[0] = 1;
        v330 = (System_Int32_array **)j_il2cpp_value_box_0(bool_TypeInfo, v393);
        v388->fields.__2__current = (Il2CppObject *)v330;
        v331 = (BattleServantConfConponent_o *)&v388->fields.__2__current;
        sub_B5D560((BattleServantConfConponent_o *)&v388->fields.__2__current, v330, v332, v333, v334, v335, v336, v337);
        v338 = 5;
        goto LABEL_202;
      }
LABEL_182:
      v339 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo);
      System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
        v339,
        (const MethodInfo_2505E54 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__);
      if ( !_4__this || (v346 = _4__this->fields.executeRoute) == 0LL )
LABEL_197:
        sub_B5D69C(this, method);
      v347 = v346->fields._size - 1;
      if ( v347 >= 0 )
      {
        v348 = 8LL * v347 + 32;
        while ( 1 )
        {
          if ( v346->fields._size <= (unsigned int)v347 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v349 = *(__int64 *)((char *)&v346->fields._items->obj.klass + v348);
          if ( !v349 )
            goto LABEL_197;
          method = *(const MethodInfo **)(v349 + 48);
          if ( method )
          {
            if ( !v339 )
              goto LABEL_197;
            this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
                                                  (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)v339,
                                                  (BattleBuffData_BuffData_o *)method,
                                                  (const MethodInfo_25064D8 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__);
            if ( ((unsigned __int8)this & 1) == 0 && *(_DWORD *)(v349 + 24) != *(_DWORD *)(v349 + 28) )
            {
              System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
                v339,
                *(WarBoardAIRoute_RouteData_o **)(v349 + 48),
                (const MethodInfo_2507010 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__);
              this = *(WarBoardAI__Think_d__11_o **)(v349 + 48);
              if ( !this )
                goto LABEL_197;
              WarBoardPieceData__SetPrevAiRoute((WarBoardPieceData_o *)this, (WarBoardAIRoute_RouteData_o *)v349, 0LL);
            }
          }
          if ( (--v347 & 0x80000000) != 0 )
            break;
          v348 -= 8LL;
          v346 = v390->fields.executeRoute;
          if ( !v346 )
            goto LABEL_197;
        }
      }
      v8->fields._availableRouteList_5__4 = 0LL;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v8->fields._availableRouteList_5__4,
        0LL,
        v340,
        v341,
        v342,
        v343,
        v344,
        v345);
      v8->fields._evalValueSortList_5__5 = 0LL;
      p_evalValueSortList_5__5 = (BattleServantConfConponent_o *)&v8->fields._evalValueSortList_5__5;
      sub_B5D560(p_evalValueSortList_5__5, 0LL, v351, v352, v353, v354, v355, v356);
      v393[0] = 0;
      v357 = (System_Int32_array **)j_il2cpp_value_box_0(bool_TypeInfo, v393);
      p_evalValueSortList_5__5[-1].fields.data = (struct BattleData_o *)v357;
      sub_B5D560(
        (BattleServantConfConponent_o *)((char *)p_evalValueSortList_5__5 - 40),
        v357,
        v358,
        v359,
        v360,
        v361,
        v362,
        v363);
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
      v174 = 0;
      v8->fields.__1__state = -1;
      return v174;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_WarBoardAI__Think_d__11_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7034 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardAI___c_TypeInfo, v1, v2, v3);
    byte_42E7034 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(WarBoardAI___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardAI___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  WarBoardAI___c_c *v17; // x0
  struct WarBoardAI___c_StaticFields *static_fields; // x8
  System_Func_WarBoardAIRoute_RouteData__Decimal__o *_9__11_4; // x20
  Il2CppObject *v20; // x21
  struct WarBoardAI___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x0 OVERLAPPED
  __int64 v29; // x1
  System_Decimal_o v30; // kr00_16
  System_Decimal_o result; // 0:x0.16

  if ( (byte_42E7035 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___, (_DWORD)x, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_WarBoardAIRoute_RouteData__Decimal___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_WarBoardAI___c__Think_b__11_4__, v11, v12, v13);
    sub_B5D5C4(&WarBoardAI___c_TypeInfo, v14, v15, v16);
    byte_42E7035 = 1;
  }
  v17 = WarBoardAI___c_TypeInfo;
  if ( (BYTE3(WarBoardAI___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAI___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
    v17 = WarBoardAI___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__11_4 = static_fields->__9__11_4;
  if ( !_9__11_4 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = WarBoardAI___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__11_4 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)sub_B5D694(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    System_Func_WarBoardAIRoute_RouteData__Decimal____ctor(
      _9__11_4,
      v20,
      Method_WarBoardAI___c__Think_b__11_4__,
      (const MethodInfo_2C2F494 *)Method_System_Func_WarBoardAIRoute_RouteData__Decimal___ctor__);
    v21 = WarBoardAI___c_TypeInfo->static_fields;
    v21->__9__11_4 = _9__11_4;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v21->__9__11_4,
      (System_Int32_array **)_9__11_4,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  v30 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData__30108996(
          (System_Collections_Generic_IEnumerable_TSource__o *)x,
          (System_Func_TSource__Decimal__o *)_9__11_4,
          (const MethodInfo_1CB6D44 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
  v29 = *(_QWORD *)&v30.fields.lo;
  v28 = *(_QWORD *)&v30.fields.flags;
  *(_QWORD *)&result.fields.lo = v29;
  *(_QWORD *)&result.fields.flags = v28;
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Decimal_o __fastcall WarBoardAI___c___Think_b__11_1(
        WarBoardAI___c_o *this,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  WarBoardAI___c_c *v23; // x0
  struct WarBoardAI___c_StaticFields *static_fields; // x8
  System_Func_WarBoardAIRoute_RouteData__Decimal__o *_9__11_5; // x20
  Il2CppObject *v26; // x21
  struct WarBoardAI___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Decimal_o v34; // kr00_16
  int32_t size; // w19
  __int64 v36; // x0 OVERLAPPED
  __int64 v37; // x1
  System_Decimal_o v38; // kr20_16
  System_Decimal_o result; // 0:x0.16
  System_Decimal_o v40; // 0:x2.16

  if ( (byte_42E7037 & 1) == 0 )
  {
    sub_B5D5C4(&System_Decimal_TypeInfo, (_DWORD)x, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_WarBoardAIRoute_RouteData__Decimal___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__, v14, v15, v16);
    sub_B5D5C4(&Method_WarBoardAI___c__Think_b__11_5__, v17, v18, v19);
    sub_B5D5C4(&WarBoardAI___c_TypeInfo, v20, v21, v22);
    byte_42E7037 = 1;
  }
  v23 = WarBoardAI___c_TypeInfo;
  if ( (BYTE3(WarBoardAI___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAI___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
    v23 = WarBoardAI___c_TypeInfo;
  }
  static_fields = v23->static_fields;
  _9__11_5 = static_fields->__9__11_5;
  if ( !_9__11_5 )
  {
    if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      static_fields = WarBoardAI___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__11_5 = (System_Func_WarBoardAIRoute_RouteData__Decimal__o *)sub_B5D694(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    System_Func_WarBoardAIRoute_RouteData__Decimal____ctor(
      _9__11_5,
      v26,
      Method_WarBoardAI___c__Think_b__11_5__,
      (const MethodInfo_2C2F494 *)Method_System_Func_WarBoardAIRoute_RouteData__Decimal___ctor__);
    v27 = WarBoardAI___c_TypeInfo->static_fields;
    v27->__9__11_5 = _9__11_5;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v27->__9__11_5,
      (System_Int32_array **)_9__11_5,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  v34 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData__30108996(
          (System_Collections_Generic_IEnumerable_TSource__o *)x,
          (System_Func_TSource__Decimal__o *)_9__11_5,
          (const MethodInfo_1CB6D44 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
  if ( !x )
    sub_B5D69C(*(_QWORD *)&v34.fields.flags, *(_QWORD *)&v34.fields.lo);
  size = x->fields._size;
  if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Decimal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  }
  v40 = System_Decimal__op_Implicit_44462380(size, 0LL);
  v38 = System_Decimal__op_Division(v34, v40, 0LL);
  v37 = *(_QWORD *)&v38.fields.lo;
  v36 = *(_QWORD *)&v38.fields.flags;
  *(_QWORD *)&result.fields.lo = v37;
  *(_QWORD *)&result.fields.flags = v36;
  return result;
}


float __fastcall WarBoardAI___c___Think_b__11_3(
        WarBoardAI___c_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.evalValue;
}


// local variable allocation has failed, the output may be wrong!
System_Decimal_o __fastcall WarBoardAI___c___Think_b__11_4(
        WarBoardAI___c_o *this,
        WarBoardAIRoute_RouteData_o *y,
        const MethodInfo *method)
{
  __int64 v3; // x3
  float evalValue; // s8
  __int64 v6; // x0 OVERLAPPED
  __int64 v7; // x1
  System_Decimal_o v8; // kr00_16
  System_Decimal_o result; // 0:x0.16

  if ( (byte_42E7036 & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_B5D5C4(&System_Decimal_TypeInfo, (_DWORD)y, (_DWORD)method, v3);
    byte_42E7036 = 1;
  }
  if ( !y )
    sub_B5D69C(this, y);
  evalValue = y->fields.evalValue;
  if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Decimal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  }
  v8 = System_Decimal__op_Explicit(evalValue, 0LL);
  v7 = *(_QWORD *)&v8.fields.lo;
  v6 = *(_QWORD *)&v8.fields.flags;
  *(_QWORD *)&result.fields.lo = v7;
  *(_QWORD *)&result.fields.flags = v6;
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Decimal_o __fastcall WarBoardAI___c___Think_b__11_5(
        WarBoardAI___c_o *this,
        WarBoardAIRoute_RouteData_o *y,
        const MethodInfo *method)
{
  __int64 v3; // x3
  float evalValue; // s8
  __int64 v6; // x0 OVERLAPPED
  __int64 v7; // x1
  System_Decimal_o v8; // kr00_16
  System_Decimal_o result; // 0:x0.16

  if ( (byte_42E7038 & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_B5D5C4(&System_Decimal_TypeInfo, (_DWORD)y, (_DWORD)method, v3);
    byte_42E7038 = 1;
  }
  if ( !y )
    sub_B5D69C(this, y);
  evalValue = y->fields.evalValue;
  if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Decimal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  }
  v8 = System_Decimal__op_Explicit(evalValue, 0LL);
  v7 = *(_QWORD *)&v8.fields.lo;
  v6 = *(_QWORD *)&v8.fields.flags;
  *(_QWORD *)&result.fields.lo = v7;
  *(_QWORD *)&result.fields.flags = v6;
  return result;
}


float __fastcall WarBoardAI___c___Think_b__11_7(
        WarBoardAI___c_o *this,
        WarBoardAIRoute_RouteData_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_B5D69C(this, 0LL);
  return y->fields.evalValue;
}


// local variable allocation has failed, the output may be wrong!
System_Decimal_o __fastcall WarBoardAI___c___Think_b__11_8(
        WarBoardAI___c_o *this,
        WarBoardAIRoute_RouteData_o *y,
        const MethodInfo *method)
{
  __int64 v3; // x3
  float evalValue; // s8
  __int64 v6; // x0 OVERLAPPED
  __int64 v7; // x1
  System_Decimal_o v8; // kr00_16
  System_Decimal_o result; // 0:x0.16

  if ( (byte_42E7039 & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_B5D5C4(&System_Decimal_TypeInfo, (_DWORD)y, (_DWORD)method, v3);
    byte_42E7039 = 1;
  }
  if ( !y )
    sub_B5D69C(this, y);
  evalValue = y->fields.evalValue;
  if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Decimal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  }
  v8 = System_Decimal__op_Explicit(evalValue, 0LL);
  v7 = *(_QWORD *)&v8.fields.lo;
  v6 = *(_QWORD *)&v8.fields.flags;
  *(_QWORD *)&result.fields.lo = v7;
  *(_QWORD *)&result.fields.flags = v6;
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Decimal_o __fastcall WarBoardAI___c___Think_b__11_9(
        WarBoardAI___c_o *this,
        WarBoardAIRoute_RouteData_o *y,
        const MethodInfo *method)
{
  __int64 v3; // x3
  float evalValue; // s8
  __int64 v6; // x0 OVERLAPPED
  __int64 v7; // x1
  System_Decimal_o v8; // kr00_16
  System_Decimal_o result; // 0:x0.16

  if ( (byte_42E703A & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_B5D5C4(&System_Decimal_TypeInfo, (_DWORD)y, (_DWORD)method, v3);
    byte_42E703A = 1;
  }
  if ( !y )
    sub_B5D69C(this, y);
  evalValue = y->fields.evalValue;
  if ( (BYTE3(System_Decimal_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Decimal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  }
  v8 = System_Decimal__op_Explicit(evalValue, 0LL);
  v7 = *(_QWORD *)&v8.fields.lo;
  v6 = *(_QWORD *)&v8.fields.flags;
  *(_QWORD *)&result.fields.lo = v7;
  *(_QWORD *)&result.fields.flags = v6;
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
  __int64 v3; // x3
  WarBoardAI___c__DisplayClass11_0_o *v5; // x20

  v5 = this;
  if ( (byte_42E703B & 1) == 0 )
  {
    this = (WarBoardAI___c__DisplayClass11_0_o *)sub_B5D5C4(
                                                   &Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__,
                                                   (_DWORD)x,
                                                   (_DWORD)method,
                                                   v3);
    byte_42E703B = 1;
  }
  if ( !x || (this = (WarBoardAI___c__DisplayClass11_0_o *)v5->fields.notActionPieceHash) == 0LL )
    sub_B5D69C(this, x);
  return System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
           (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)this,
           (BattleBuffData_BuffData_o *)x->fields.basePiece,
           (const MethodInfo_25064D8 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__);
}