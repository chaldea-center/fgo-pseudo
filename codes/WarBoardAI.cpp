void WarBoardAI___ctor(WarBoardAI_o *this, WarBoardStageNpcEntity_o *npc, const MethodInfo *method)
{
  WarBoardAIRoute_o *v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5935F2E & 1) == 0 )
  {
    sub_21FFC50(&WarBoardAIRoute_TypeInfo);
    byte_5935F2E = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v5 = (WarBoardAIRoute_o *)sub_21FFEBC(WarBoardAIRoute_TypeInfo);
  WarBoardAIRoute___ctor(v5, npc, 0);
  this->fields.routeClass = v5;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v5, v6, v7, v8, v9, v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardAI__AddRoutePiecePersonalityDic(
        WarBoardAI_o *this,
        int32_t aiId,
        int32_t pieceIndex,
        const MethodInfo *method)
{
  WarBoardAIRoute_o *routeClass; // x0

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_21FFECC(0, *(_QWORD *)&aiId);
  WarBoardAIRoute__AddPiecePersonalityDic(routeClass, aiId, pieceIndex, 0);
}


bool WarBoardAI__CheckWasteRoute(
        WarBoardAI_o *this,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *checkRoute,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v4; // x20
  Il2CppObject *Item; // x0
  __int64 v6; // x1
  int32_t size; // w8
  bool v8; // w24
  IWarBoardAIRouteWaste_c **v9; // x28
  int32_t v10; // w21
  Il2CppObject *v11; // x23
  Il2CppClass *klass; // x8
  Il2CppObject *methods; // x22
  Il2CppClass *v14; // x9
  Il2CppClass *v15; // x8
  Il2CppClass *v16; // x8
  Il2CppClass *v17; // x8
  IWarBoardAIRouteWaste_c *v18; // x1
  __int64 v19; // x9
  IWarBoardAIRouteWaste_c **p_offset; // x10
  __int64 v21; // x0
  Il2CppClass *v22; // x8
  IWarBoardAIRouteWaste_c *v23; // x1
  __int64 v24; // x9
  IWarBoardAIRouteWaste_c **v25; // x10
  __int64 v26; // x0
  Il2CppClass *v27; // x8
  IWarBoardAIRouteWaste_c **v28; // x10
  int monitor_high; // w28
  IWarBoardAIRouteWaste_c *v30; // x1
  IWarBoardAIRouteWaste_c **v31; // x29
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  bool v35; // zf
  Il2CppClass *v36; // x8
  int monitor; // w28
  IWarBoardAIRouteWaste_c *v38; // x1
  __int64 v39; // x9
  IWarBoardAIRouteWaste_c **v40; // x10
  __int64 v41; // x0
  Il2CppClass *v42; // x8
  IWarBoardAIRouteWaste_c *v43; // x1
  __int64 v44; // x9
  IWarBoardAIRouteWaste_c **v45; // x10
  __int64 v46; // x0
  int32_t v47; // w8

  if ( (byte_5935F30 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__set_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__TypeInfo);
    sub_21FFC50(&IWarBoardAIRouteWaste_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
    byte_5935F30 = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_3F68354 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ctor__);
  if ( !checkRoute )
    goto LABEL_67;
  size = checkRoute->fields._size;
  v8 = size > 0;
  if ( size >= 1 )
  {
    v9 = &IWarBoardAIRouteWaste_TypeInfo;
    v10 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)checkRoute,
               v10,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
      if ( !Item )
        break;
      v11 = Item;
      if ( Item[3].klass )
      {
        Item = (Il2CppObject *)WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)Item, 0);
        if ( ((unsigned __int8)Item & 1) == 0 )
        {
          v6 = (unsigned int)(v10 - 1);
          if ( v10 < 1 )
            goto LABEL_15;
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)checkRoute,
                   v6,
                   (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
          if ( !Item )
            goto LABEL_15;
          klass = Item[3].klass;
          methods = Item;
          if ( !klass )
            break;
          v14 = v11[3].klass;
          if ( !v14 )
            break;
          if ( *(&klass->_1.byval_arg.bits + 1) == *(&v14->_1.byval_arg.bits + 1)
            && (Item = (Il2CppObject *)WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)Item, 0),
                ((unsigned __int8)Item & 1) == 0) )
          {
            v16 = v11[3].klass;
            if ( !v16 || !v4 )
              break;
          }
          else
          {
LABEL_15:
            v15 = v11[3].klass;
            if ( !v15 || !v4 )
              break;
            Item = (Il2CppObject *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                     v4,
                                     HIDWORD(v15->_1.namespaze),
                                     (const MethodInfo_3F68EFC *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__ContainsKey__);
            v16 = v11[3].klass;
            if ( ((unsigned __int8)Item & 1) != 0 )
            {
              if ( !v16 )
                break;
              methods = 0;
            }
            else
            {
              if ( !v16 )
                break;
              methods = (Il2CppObject *)v16->_1.methods;
            }
          }
          System_Collections_Generic_Dictionary_int__object___set_Item(
            v4,
            HIDWORD(v16->_1.namespaze),
            v11,
            (const MethodInfo_3F68CF4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__set_Item__);
          if ( methods && ((__int64)v11[1].klass & 0x10000002) == 0 )
          {
            v17 = methods->klass;
            v18 = *v9;
            v19 = *(unsigned __int16 *)&methods->klass->_2.rank;
            if ( *(_WORD *)&methods->klass->_2.rank )
            {
              p_offset = (IWarBoardAIRouteWaste_c **)&v17->_1.interfaceOffsets->offset;
              while ( *(p_offset - 1) != v18 )
              {
                --v19;
                p_offset += 2;
                if ( !v19 )
                  goto LABEL_28;
              }
              v21 = (__int64)&v17->vtable[*(_DWORD *)p_offset + 2];
            }
            else
            {
LABEL_28:
              v21 = sub_2237E2C(methods, v18, 2);
            }
            if ( ((*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v21)(methods, *(_QWORD *)(v21 + 8)) & 2) == 0 )
            {
              v22 = methods->klass;
              v23 = *v9;
              v24 = *(unsigned __int16 *)&methods->klass->_2.rank;
              if ( *(_WORD *)&methods->klass->_2.rank )
              {
                v25 = (IWarBoardAIRouteWaste_c **)&v22->_1.interfaceOffsets->offset;
                while ( *(v25 - 1) != v23 )
                {
                  --v24;
                  v25 += 2;
                  if ( !v24 )
                    goto LABEL_38;
                }
                v26 = (__int64)&v22->vtable[*(_DWORD *)v25 + 2];
              }
              else
              {
LABEL_38:
                v26 = sub_2237E2C(methods, v23, 2);
              }
              if ( ((*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v26)(methods, *(_QWORD *)(v26 + 8)) & 0x10000000) == 0 )
              {
                v27 = methods->klass;
                v28 = v9;
                monitor_high = HIDWORD(v11[1].monitor);
                v30 = *v28;
                v31 = v28;
                v32 = *(unsigned __int16 *)&methods->klass->_2.rank;
                if ( *(_WORD *)&methods->klass->_2.rank )
                {
                  v33 = &v27->_1.interfaceOffsets->offset;
                  while ( *((IWarBoardAIRouteWaste_c **)v33 - 1) != v30 )
                  {
                    --v32;
                    v33 += 4;
                    if ( !v32 )
                      goto LABEL_45;
                  }
                  v34 = (__int64)&v27->vtable[*v33];
                }
                else
                {
LABEL_45:
                  v34 = sub_2237E2C(methods, v30, 0);
                }
                v35 = monitor_high == (*(unsigned int (__fastcall **)(Il2CppObject *, _QWORD))v34)(
                                        methods,
                                        *(_QWORD *)(v34 + 8));
                v9 = v31;
                if ( v35 )
                {
                  v36 = methods->klass;
                  monitor = (int)v11[1].monitor;
                  v38 = *v31;
                  v39 = *(unsigned __int16 *)&methods->klass->_2.rank;
                  if ( *(_WORD *)&methods->klass->_2.rank )
                  {
                    v40 = (IWarBoardAIRouteWaste_c **)&v36->_1.interfaceOffsets->offset;
                    while ( *(v40 - 1) != v38 )
                    {
                      --v39;
                      v40 += 2;
                      if ( !v39 )
                        goto LABEL_53;
                    }
                    v41 = (__int64)&v36->vtable[*(_DWORD *)v40 + 1];
                  }
                  else
                  {
LABEL_53:
                    v41 = sub_2237E2C(methods, v38, 1);
                  }
                  v35 = monitor == (*(unsigned int (__fastcall **)(Il2CppObject *, _QWORD))v41)(
                                     methods,
                                     *(_QWORD *)(v41 + 8));
                  v9 = v31;
                  if ( v35 && !WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)v11, 0) )
                  {
                    v42 = methods->klass;
                    v43 = *v31;
                    v44 = *(unsigned __int16 *)&methods->klass->_2.rank;
                    if ( *(_WORD *)&methods->klass->_2.rank )
                    {
                      v45 = (IWarBoardAIRouteWaste_c **)&v42->_1.interfaceOffsets->offset;
                      while ( *(v45 - 1) != v43 )
                      {
                        --v44;
                        v45 += 2;
                        if ( !v44 )
                          goto LABEL_62;
                      }
                      v46 = (__int64)&v42->vtable[*(_DWORD *)v45 + 3];
                    }
                    else
                    {
LABEL_62:
                      v46 = sub_2237E2C(methods, v43, 3);
                    }
                    if ( ((*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v46)(methods, *(_QWORD *)(v46 + 8)) & 1) == 0 )
                      return v8;
                  }
                }
              }
            }
          }
        }
      }
      v47 = checkRoute->fields._size;
      v8 = ++v10 < v47;
      if ( v10 >= v47 )
        return v8;
    }
LABEL_67:
    sub_21FFECC(Item, v6);
  }
  return v8;
}


void WarBoardAI__Clear(WarBoardAI_o *this, const MethodInfo *method)
{
  WarBoardAIRoute_o *routeClass; // x0

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_21FFECC(0, method);
  WarBoardAIRoute__Clear(routeClass, 0);
}


System_String_o *WarBoardAI__ConvertForceGroupIndexToString(
        WarBoardAI_o *this,
        int32_t forceId,
        int32_t groupId,
        int32_t index,
        const MethodInfo *method)
{
  Il2CppObject *v8; // x21
  Il2CppObject *v9; // x20
  Il2CppObject *v10; // x0
  int32_t v12; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v13; // [xsp+8h] [xbp-38h] BYREF
  int32_t v14; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5935F33 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_26488/*"{0},{1},{2}"*/);
    byte_5935F33 = 1;
  }
  v14 = forceId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v14);
  v13 = groupId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v13);
  v12 = index;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v12);
  return System_String__Format_75484644((System_String_o *)StringLiteral_26488/*"{0},{1},{2}"*/, v8, v9, v10, 0);
}


bool WarBoardAI__Execute(WarBoardAI_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *executeRoute; // x0
  int32_t routeIndex; // w1
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x8
  WarBoardPieceData_o *monitor; // x20
  int32_t v9; // w8
  int32_t v10; // w8
  bool v11; // w20
  WarBoardManager_o *v13; // x21
  __int64 v14; // x2
  int32_t version; // w22
  int32_t v16; // w21
  WarBoardPieceData_o *Piece_44763860; // x0
  System_Int32_array *v18; // x21
  WarBoardManager_o *v19; // x21
  WarBoardPieceData_o *v20; // x1
  int32_t v21; // w8
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v22; // x9

  if ( (byte_5935F31 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&WarBoardAIManager_TypeInfo);
    byte_5935F31 = 1;
  }
  executeRoute = (System_Collections_Generic_List_object__o *)this->fields.executeRoute;
  if ( !executeRoute )
    return 0;
  routeIndex = this->fields.routeIndex;
  if ( executeRoute->fields._size <= routeIndex )
    return 0;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                        executeRoute,
                                                        routeIndex,
                                                        (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
  if ( !Item )
    goto LABEL_40;
  v7 = Item;
  Item = (System_Collections_Generic_List_object__o *)this->fields.executeRoute;
  if ( !Item )
    goto LABEL_40;
  monitor = (WarBoardPieceData_o *)v7[1].monitor;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                        Item,
                                                        this->fields.routeIndex,
                                                        (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
  if ( !Item )
    goto LABEL_40;
  Item = (System_Collections_Generic_List_object__o *)WarBoardAIRoute_RouteData__get_notAction(
                                                        (WarBoardAIRoute_RouteData_o *)Item,
                                                        0);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    v9 = this->fields.routeIndex;
    this->fields.isEndPhase = 0;
    v10 = v9 + 1;
    this->fields.routeIndex = v10;
    goto LABEL_37;
  }
  Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this->fields.executeRoute )
    goto LABEL_40;
  v13 = (WarBoardManager_o *)Item;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)this->fields.executeRoute,
                                                        this->fields.routeIndex,
                                                        (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
  if ( !Item )
    goto LABEL_40;
  version = Item->fields._version;
  if ( !*(&WarBoardAIManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v6, v14);
  Item = (System_Collections_Generic_List_object__o *)WarBoardAIManager__GetSquare(version, 0);
  if ( !v13 )
    goto LABEL_40;
  WarBoardManager__CheckSelectSquare(v13, monitor, (WarBoardSquareData_o *)Item, 1, 0);
  Item = (System_Collections_Generic_List_object__o *)this->fields.executeRoute;
  if ( !Item )
    goto LABEL_40;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                        Item,
                                                        this->fields.routeIndex,
                                                        (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
  if ( !Item )
    goto LABEL_40;
  if ( WarBoardAIRoute_RouteData__HasFlag((WarBoardAIRoute_RouteData_o *)Item, 2, 0) )
    goto LABEL_28;
  Item = (System_Collections_Generic_List_object__o *)this->fields.executeRoute;
  if ( !Item )
    goto LABEL_40;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                        Item,
                                                        this->fields.routeIndex,
                                                        (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
  if ( !Item )
    goto LABEL_40;
  if ( WarBoardAIRoute_RouteData__HasFlag((WarBoardAIRoute_RouteData_o *)Item, 4, 0) )
  {
LABEL_28:
    Item = (System_Collections_Generic_List_object__o *)this->fields.executeRoute;
    if ( !Item )
      goto LABEL_40;
    Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                          Item,
                                                          this->fields.routeIndex,
                                                          (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
    if ( !Item )
      goto LABEL_40;
    v16 = Item->fields._version;
    Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Item )
      goto LABEL_40;
    Item = (System_Collections_Generic_List_object__o *)Item[11].klass;
    if ( !Item )
      goto LABEL_40;
    Piece_44763860 = WarBoardData__GetPiece_44763860((WarBoardData_o *)Item, v16, 0);
    if ( Piece_44763860 )
    {
      if ( WarBoardPieceData__get_isServant(Piece_44763860, 0) )
      {
        Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( Item )
        {
          Item = (System_Collections_Generic_List_object__o *)Item[11].klass;
          if ( Item )
          {
            v18 = WarBoardData__GetInRangeSquareIndecies((WarBoardData_o *)Item, v16, 1, 0, 0);
            Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
            if ( Item )
            {
              WarBoardManager__DispPartyBuff((WarBoardManager_o *)Item, v18, 0);
              goto LABEL_33;
            }
          }
        }
LABEL_40:
        sub_21FFECC(Item, v6);
      }
    }
  }
LABEL_33:
  Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this->fields.executeRoute )
    goto LABEL_40;
  v19 = (WarBoardManager_o *)Item;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)this->fields.executeRoute,
                                                        this->fields.routeIndex,
                                                        (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
  if ( !Item || !v19 )
    goto LABEL_40;
  v20 = monitor;
  v11 = 1;
  Item = (System_Collections_Generic_List_object__o *)WarBoardManager__PieceAction_44961668(
                                                        v19,
                                                        v20,
                                                        Item->fields._version,
                                                        0,
                                                        1,
                                                        0);
  v21 = this->fields.routeIndex;
  this->fields.isEndPhase = (unsigned __int8)Item & 1;
  v10 = v21 + 1;
  this->fields.routeIndex = v10;
  if ( ((unsigned __int8)Item & 1) != 0 )
    return v11;
LABEL_37:
  v22 = this->fields.executeRoute;
  if ( !v22 )
    goto LABEL_40;
  v11 = 1;
  if ( v22->fields._size <= v10 )
    this->fields.isEndRoute = 1;
  return v11;
}


int32_t WarBoardAI__GetRandomIndex(
        WarBoardAI_o *this,
        System_Collections_Generic_List_Decimal__o *weightTable,
        const MethodInfo *method)
{
  WarBoardAI___c_c *v4; // x0
  struct WarBoardAI___c_StaticFields *static_fields; // x8
  System_Func_Decimal__Decimal__o *_9__14_0; // x20
  Il2CppObject *v7; // x21
  struct WarBoardAI___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  const MethodInfo *v15; // x1
  __int64 v16; // x2
  System_Decimal_o *v17; // x20
  const MethodInfo *v18; // x21
  System_Decimal_o *v19; // x8
  const MethodInfo *v20; // x1
  __int64 v21; // x2
  System_Decimal_o *v22; // x20
  const MethodInfo *v23; // x21
  float v24; // s0
  float v25; // s0
  System_Decimal_o *v26; // x8
  System_Decimal_o *v27; // x0
  System_Decimal_o *v28; // x1
  System_Decimal_o *size; // x8
  MethodInfo *v30; // x21
  System_Decimal_o *v31; // x22
  int32_t v32; // w20
  System_Decimal_o *v33; // x1
  __int64 v34; // x2
  System_Decimal_o *Item; // x23
  System_Decimal_o *v36; // x24
  System_Decimal_o *v37; // x8
  __int64 v38; // x1
  __int64 v39; // x2
  System_Decimal_o *v40; // x23
  System_Decimal_o *v41; // x8
  System_Decimal_o *v42; // x0
  System_Decimal_o *v43; // x1

  if ( (byte_5935F32 & 1) == 0 )
  {
    sub_21FFC50(&System_Decimal_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Sum_Decimal___);
    sub_21FFC50(&System_Func_Decimal__Decimal__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Decimal__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Decimal__get_Item__);
    sub_21FFC50(&System_Math_TypeInfo);
    sub_21FFC50(&Method_WarBoardAI___c__GetRandomIndex_b__14_0__);
    sub_21FFC50(&WarBoardAI___c_TypeInfo);
    byte_5935F32 = 1;
  }
  v4 = WarBoardAI___c_TypeInfo;
  if ( !*(&WarBoardAI___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo, weightTable, method);
    v4 = WarBoardAI___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__14_0 = static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, weightTable, method);
      static_fields = WarBoardAI___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__14_0 = (System_Func_Decimal__Decimal__o *)sub_21FFEBC(System_Func_Decimal__Decimal__TypeInfo);
    System_Func_Decimal__Decimal____ctor(_9__14_0, v7, Method_WarBoardAI___c__GetRandomIndex_b__14_0__, 0);
    v8 = WarBoardAI___c_TypeInfo->static_fields;
    v8->__9__14_0 = _9__14_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->__9__14_0, (int32_t)_9__14_0, v9, v10, v11, v12, v13, v14);
  }
  v17 = System_Linq_Enumerable__Sum_Decimal_(
          (System_Decimal_o *)static_fields,
          (System_Collections_Generic_IEnumerable_TSource__o *)weightTable,
          (System_Func_TSource__Decimal__o *)_9__14_0,
          (const MethodInfo_3866A08 *)Method_System_Linq_Enumerable_Sum_Decimal___);
  v18 = v15;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v15, v16);
  if ( !byte_5935F42 )
  {
    sub_21FFC50(&System_Decimal_TypeInfo);
    byte_5935F42 = 1;
  }
  v19 = (System_Decimal_o *)*(&System_Decimal_TypeInfo->_2.cctor_finished + 1);
  if ( !(_DWORD)v19 )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, v15, v16);
  v22 = System_Decimal__Floor(v19, v17, v18);
  v23 = v20;
  if ( !*(&System_Decimal_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, v20, v21);
  v24 = System_Decimal__op_Explicit_77321708(v22, v23);
  v25 = UnityEngine_Random__Range(0.0, v24, 0);
  v27 = System_Decimal__op_Explicit(v26, v25, 0);
  if ( !weightTable )
    sub_21FFECC(v27, v28);
  size = (System_Decimal_o *)(unsigned int)weightTable->fields._size;
  if ( (int)size < 1 )
    return 0;
  v30 = (MethodInfo *)v27;
  v31 = v28;
  v32 = 0;
  while ( 1 )
  {
    Item = System_Collections_Generic_List_Decimal___get_Item(
             size,
             weightTable,
             v32,
             (const MethodInfo_4420FDC *)Method_System_Collections_Generic_List_Decimal__get_Item__);
    v36 = v33;
    if ( !*(&System_Decimal_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, v33, v34);
    if ( System_Decimal__op_GreaterThanOrEqual(Item, v36, v30) )
      break;
    v40 = System_Collections_Generic_List_Decimal___get_Item(
            v37,
            weightTable,
            v32,
            (const MethodInfo_4420FDC *)Method_System_Collections_Generic_List_Decimal__get_Item__);
    v41 = (System_Decimal_o *)*(&System_Decimal_TypeInfo->_2.cctor_finished + 1);
    if ( !(_DWORD)v41 )
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, v38, v39);
    v42 = System_Decimal__op_Subtraction(v41, (System_Decimal_o *)v30, v31, (const MethodInfo *)v40);
    size = (System_Decimal_o *)(unsigned int)weightTable->fields._size;
    ++v32;
    v30 = (MethodInfo *)v42;
    v31 = v43;
    if ( v32 >= (int)size )
      return 0;
  }
  return v32;
}


System_Collections_IEnumerator_o *WarBoardAI__Think(WarBoardAI_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5935F2F & 1) == 0 )
  {
    sub_21FFC50(&WarBoardAI__Think_d__11_TypeInfo);
    byte_5935F2F = 1;
  }
  v3 = sub_21FFEBC(WarBoardAI__Think_d__11_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


// local variable allocation has failed, the output may be wrong!
void WarBoardAI__UpdateRoutePiecePersonalityDic(
        WarBoardAI_o *this,
        int32_t aiId,
        int32_t pieceIndex,
        const MethodInfo *method)
{
  WarBoardAIRoute_o *routeClass; // x0

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_21FFECC(0, *(_QWORD *)&aiId);
  WarBoardAIRoute__UpdatePiecePersonalityDic(routeClass, aiId, pieceIndex, 0);
}


bool WarBoardAI___Think_b__11_2(
        WarBoardAI_o *this,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *x,
        const MethodInfo *method)
{
  WarBoardAI___c_c *v5; // x0
  WarBoardAIRoute_o *routeClass; // x20
  struct WarBoardAI___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__11_7; // x21
  Il2CppObject *v9; // x22
  struct WarBoardAI___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x0
  __int64 v18; // x1
  float v19; // s0

  if ( (byte_5935F34 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____91532000);
    sub_21FFC50(&System_Func_WarBoardAIRoute_RouteData__float__TypeInfo);
    sub_21FFC50(&Method_WarBoardAI___c__Think_b__11_7__);
    sub_21FFC50(&WarBoardAI___c_TypeInfo);
    byte_5935F34 = 1;
  }
  v5 = WarBoardAI___c_TypeInfo;
  routeClass = this->fields.routeClass;
  if ( !*(&WarBoardAI___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo, x, method);
    v5 = WarBoardAI___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__11_7 = (System_Func_T__TResult__o *)static_fields->__9__11_7;
  if ( !_9__11_7 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, x, method);
      static_fields = WarBoardAI___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__11_7 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_WarBoardAIRoute_RouteData__float__TypeInfo);
    System_Func_object__float____ctor(_9__11_7, v9, Method_WarBoardAI___c__Think_b__11_7__, 0);
    v10 = WarBoardAI___c_TypeInfo->static_fields;
    v10->__9__11_7 = (struct System_Func_WarBoardAIRoute_RouteData__float__o *)_9__11_7;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v10->__9__11_7, (int32_t)_9__11_7, v11, v12, v13, v14, v15, v16);
  }
  v19 = System_Linq_Enumerable__Sum_object__59140976(
          (System_Collections_Generic_IEnumerable_TSource__o *)x,
          (System_Func_TSource__float__o *)_9__11_7,
          (const MethodInfo_3866B70 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____91532000);
  if ( !routeClass )
    sub_21FFECC(v17, v18);
  return !WarBoardAIRoute__IsThinkingThreshold(routeClass, v19, 0);
}


int32_t WarBoardAI__get_ForceId(WarBoardAI_o *this, const MethodInfo *method)
{
  struct WarBoardAIRoute_o *routeClass; // x8

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_21FFECC(this, method);
  return routeClass->fields.forceId;
}


int32_t WarBoardAI__get_GroupId(WarBoardAI_o *this, const MethodInfo *method)
{
  struct WarBoardAIRoute_o *routeClass; // x8

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_21FFECC(this, method);
  return routeClass->fields.groupId;
}


void WarBoardAI__Think_d__11___ctor(WarBoardAI__Think_d__11_o *this, int32_t 1__state, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool WarBoardAI__Think_d__11__MoveNext(WarBoardAI__Think_d__11_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  WarBoardAI__Think_d__11_o *v8; // x26
  int _1__state; // w8
  struct WarBoardAI_o *_4__this; // x9
  bool v11; // w21
  WarBoardAIRoute_o *klass; // x20
  System_Collections_Generic_Dictionary_int__uint__o *placePieceData; // x21
  System_Collections_Generic_List_object__o *v14; // x22
  System_Collections_IEnumerator_o *RouteData; // x0
  MissionNaviTransitionBoardItem_o *p__2__current; // x26
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  WarBoardAI__Think_d__11_o *availableRouteList_5__4; // x25
  struct WarBoardAIRoute_o *routeClass; // x8
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *allRouteList; // x1
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *allRouteList_5__2; // x8
  __int64 v27; // x21
  __int64 v28; // x2
  Il2CppClass *v29; // x8
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *v30; // x9
  int32_t namespaze_high; // w8
  int32_t size; // w9
  BalanceConfig_c *v33; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x22
  WarBoardAI___c_c *v36; // x0
  _BOOL4 IsWarBoardAiCalcEvalSum; // w9
  int v38; // w8
  struct WarBoardAI___c_StaticFields *v39; // x8
  System_Func_T__TResult__o *_9__11_0; // x23
  Il2CppObject *v41; // x24
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  struct WarBoardAI___c_StaticFields *v48; // x0
  MissionNaviTransitionBoardItem_o *p__9__11_0; // x0
  struct WarBoardAI___c_StaticFields *v50; // x8
  Il2CppObject *v51; // x24
  struct WarBoardAI___c_StaticFields *v52; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0
  System_Object_array *v54; // x22
  System_Collections_Generic_List_object__o *v55; // x24
  WarBoardAI__Think_d__11_o **p_availableRouteList_5__4; // x23
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  System_Collections_Generic_HashSet_object__o *v63; // x25
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  WarBoardAI__Think_d__11_o *v70; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v72; // x27
  System_Collections_ICollection_o *v73; // x25
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  System_Collections_Generic_HashSet_object__o *v80; // x26
  System_Func_object__bool__o *v81; // x26
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  __int64 v88; // x8
  _QWORD *v89; // x9
  __int64 _2__current_low; // x10
  __int64 v91; // x8
  System_Func_object__bool__o *v92; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v93; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v94; // x0
  System_Object_array *v95; // x0
  System_String_o *v96; // x2
  System_String_o *v97; // x3
  int32_t v98; // w4
  int32_t v99; // w5
  bool v100; // w6
  bool v101; // w7
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *evalValueSortList_5__5; // x8
  System_Collections_Generic_List_Decimal__o *v103; // x21
  const MethodInfo *v104; // x2
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *v105; // x22
  WarBoardAI__Think_d__11_o *v106; // x20
  int v107; // w28
  int v108; // w8
  int v109; // w23
  int v110; // w24
  char v111; // w25
  _BOOL8 v112; // x0
  __int64 v113; // x1
  WarBoardAIRoute_RouteData_o *current; // x22
  WarBoardPieceData_o *actionPiece; // x0
  Il2CppClass *v116; // x8
  float v117; // s12
  _BOOL8 v118; // x0
  __int64 v119; // x1
  WarBoardTacticalTrendEntity_o *v120; // x22
  int klass_high; // w8
  float BestMagnification; // s8
  float LowestMagnification; // s9
  int value; // w26
  float ImmobilityMagnification; // s0
  __int64 v126; // x1
  __int64 v127; // x2
  BalanceConfig_c *v128; // x0
  float v129; // s8
  System_Decimal_o *v130; // x8
  __int64 v131; // x2
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *v132; // x8
  WarBoardAI__Think_d__11_o *v133; // x22
  const MethodInfo *v134; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v135; // x24
  WarBoardAI___c_c *v136; // x0
  struct WarBoardAI___c_StaticFields *v137; // x8
  System_Func_T__TResult__o *_9__11_8; // x25
  Il2CppObject *v139; // x26
  struct WarBoardAI___c_StaticFields *v140; // x0
  System_String_o *v141; // x2
  System_String_o *v142; // x3
  int32_t v143; // w4
  int32_t v144; // w5
  bool v145; // w6
  bool v146; // w7
  __int64 v147; // x1
  __int64 v148; // x2
  System_Decimal_o *v149; // x24
  System_Decimal_o *v150; // x8
  System_Decimal_o *v151; // x0
  System_Decimal_o *v152; // x1
  System_Decimal_o *v153; // x2
  __int64 v154; // x2
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *v155; // x8
  WarBoardAI__Think_d__11_o *v156; // x22
  const MethodInfo *v157; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v158; // x24
  WarBoardAI___c_c *v159; // x0
  struct WarBoardAI___c_StaticFields *v160; // x8
  System_Func_T__TResult__o *_9__11_9; // x25
  Il2CppObject *v162; // x26
  struct WarBoardAI___c_StaticFields *v163; // x0
  System_String_o *v164; // x2
  System_String_o *v165; // x3
  int32_t v166; // w4
  int32_t v167; // w5
  bool v168; // w6
  bool v169; // w7
  __int64 v170; // x2
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *v171; // x8
  System_Decimal_o *v172; // x8
  WarBoardAI__Think_d__11_o *v173; // x24
  System_Decimal_o *v174; // x25
  int32_t flags; // w26
  System_Decimal_o *v176; // x0
  System_Decimal_o *v177; // x8
  struct System_Decimal_array *items; // x9
  __int64 v179; // x11
  Il2CppObject *v180; // x9
  System_String_o *v181; // x2
  System_String_o *v182; // x3
  int32_t v183; // w4
  int32_t v184; // w5
  bool v185; // w6
  bool v186; // w7
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v187; // x1
  __int64 v188; // x1
  __int64 v189; // x2
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x22
  WarBoardAI___c_c *v191; // x0
  struct WarBoardAI___c_StaticFields *v192; // x8
  System_Func_T__TResult__o *_9__11_3; // x23
  Il2CppObject *v194; // x24
  struct WarBoardAI___c_StaticFields *v195; // x0
  System_String_o *v196; // x2
  System_String_o *v197; // x3
  int32_t v198; // w4
  int32_t v199; // w5
  bool v200; // w6
  bool v201; // w7
  WarBoardAI_o *v202; // x0
  const MethodInfo *v203; // x2
  __int64 v204; // x0
  MissionNaviTransitionBoardItem_o *v205; // x26
  System_String_o *v206; // x2
  System_String_o *v207; // x3
  int32_t v208; // w4
  int32_t v209; // w5
  bool v210; // w6
  bool v211; // w7
  int v212; // w8
  System_Collections_Generic_HashSet_object__o *v213; // x21
  System_String_o *v214; // x2
  System_String_o *v215; // x3
  int32_t v216; // w4
  int32_t v217; // w5
  bool v218; // w6
  bool v219; // w7
  _DWORD *v220; // x8
  int v221; // w22
  WarBoardAI__Think_d__11_o *v222; // x23
  System_String_o *v223; // x2
  System_String_o *v224; // x3
  int32_t v225; // w4
  int32_t v226; // w5
  bool v227; // w6
  bool v228; // w7
  __int64 v229; // x0
  System_String_o *v230; // x2
  System_String_o *v231; // x3
  int32_t v232; // w4
  int32_t v233; // w5
  bool v234; // w6
  bool v235; // w7
  __int64 v236; // x0
  System_String_o *v237; // x2
  System_String_o *v238; // x3
  int32_t v239; // w4
  int32_t v240; // w5
  bool v241; // w6
  bool v242; // w7
  __int64 v243; // x0
  System_String_o *v244; // x2
  System_String_o *v245; // x3
  int32_t v246; // w4
  int32_t v247; // w5
  bool v248; // w6
  bool v249; // w7
  __int64 v250; // x0
  System_String_o *v251; // x2
  System_String_o *v252; // x3
  int32_t v253; // w4
  int32_t v254; // w5
  bool v255; // w6
  bool v256; // w7
  int32_t pickValue_5__3; // [xsp+Ch] [xbp-F4h]
  Il2CppObject *object; // [xsp+10h] [xbp-F0h]
  System_Collections_Generic_List_Enumerator_object__o v260; // [xsp+18h] [xbp-E8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v261; // [xsp+30h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v262; // [xsp+50h] [xbp-B0h] BYREF

  v8 = this;
  if ( (byte_5935F3D & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
    sub_21FFC50(&System_Decimal_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderByDescending_List_WarBoardAIRoute_RouteData___Decimal___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____91532000);
    sub_21FFC50(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Take_List_WarBoardAIRoute_RouteData____);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_List_WarBoardAIRoute_RouteData____);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__get_Current__);
    sub_21FFC50(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    sub_21FFC50(&System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo);
    sub_21FFC50(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    sub_21FFC50(&System_Func_WarBoardAIRoute_RouteData__float__TypeInfo);
    sub_21FFC50(&System_Func_List_WarBoardAIRoute_RouteData___bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__);
    sub_21FFC50(&System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Decimal__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Decimal___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_Decimal__TypeInfo);
    sub_21FFC50(&Method_WarBoardAI___c__Think_b__11_0__);
    sub_21FFC50(&Method_WarBoardAI___c__Think_b__11_1__);
    sub_21FFC50(&Method_WarBoardAI___c__Think_b__11_3__);
    sub_21FFC50(&Method_WarBoardAI___c__Think_b__11_8__);
    sub_21FFC50(&Method_WarBoardAI___c__Think_b__11_9__);
    sub_21FFC50(&Method_WarBoardAI___c__DisplayClass11_0__Think_b__6__);
    sub_21FFC50(&WarBoardAI___c__DisplayClass11_0_TypeInfo);
    sub_21FFC50(&WarBoardAI___c_TypeInfo);
    this = (WarBoardAI__Think_d__11_o *)sub_21FFC50(&Method_WarBoardAI__Think_b__11_2__);
    byte_5935F3D = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  v11 = 0;
  memset(&v262, 0, sizeof(v262));
  memset(&v261, 0, sizeof(v261));
  object = (Il2CppObject *)_4__this;
  if ( _1__state <= 2 )
  {
    switch ( _1__state )
    {
      case 0:
        v8->fields.__1__state = -1;
        if ( !_4__this )
          goto LABEL_187;
        this = (WarBoardAI__Think_d__11_o *)_4__this->fields.routeClass;
        _4__this->fields.routeIndex = 0;
        _4__this->fields.isEndRoute = 0;
        if ( !this )
          goto LABEL_187;
        WarBoardAIRoute__BeforeCreateRouteData((WarBoardAIRoute_o *)this, 0);
        klass = (WarBoardAIRoute_o *)object[1].klass;
        if ( !klass )
          goto LABEL_187;
        placePieceData = klass->fields.placePieceData;
        v14 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v14,
          (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor__);
        RouteData = WarBoardAIRoute__CreateRouteData(
                      klass,
                      placePieceData,
                      0,
                      (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v14,
                      0);
        v8->fields.__2__current = (Il2CppObject *)RouteData;
        p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
        sub_21FFBF4(p__2__current, (int32_t)RouteData, v17, v18, v19, v20, v21, v22);
        v11 = 1;
        p__2__current[-1].fields._BoardType_k__BackingField = 1;
        return v11;
      case 1:
        v8->fields.__1__state = -1;
        if ( !_4__this )
          goto LABEL_187;
        routeClass = _4__this->fields.routeClass;
        if ( !routeClass )
          goto LABEL_187;
        allRouteList = routeClass->fields.allRouteList;
        v8->fields._allRouteList_5__2 = allRouteList;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v8->fields._allRouteList_5__2,
          (int32_t)allRouteList,
          v2,
          v3,
          v4,
          v5,
          v6,
          v7);
        allRouteList_5__2 = v8->fields._allRouteList_5__2;
        if ( !allRouteList_5__2 )
          goto LABEL_187;
        if ( !allRouteList_5__2->fields._size )
        {
          v11 = 1;
          LOBYTE(v260.fields._list) = 1;
          v250 = j_il2cpp_value_box_0(qword_594C050, &v260);
          v8->fields.__2__current = (Il2CppObject *)v250;
          v205 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
          sub_21FFBF4(v205, v250, v251, v252, v253, v254, v255, v256);
          v212 = 2;
          goto LABEL_185;
        }
        break;
      case 2:
        v8->fields.__1__state = -1;
        break;
      default:
        return v11;
    }
    v27 = sub_21FFEBC(WarBoardAI___c__DisplayClass11_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v27, 0);
    if ( !object )
      goto LABEL_187;
    v29 = object[1].klass;
    if ( !v29 )
      goto LABEL_187;
    v30 = v8->fields._allRouteList_5__2;
    if ( !v30 )
      goto LABEL_187;
    namespaze_high = HIDWORD(v29->_1.namespaze);
    size = v30->fields._size;
    if ( namespaze_high >= size )
      namespaze_high = size;
    v33 = BalanceConfig_TypeInfo;
    if ( !namespaze_high )
      namespaze_high = size;
    v8->fields._pickValue_5__3 = namespaze_high;
    if ( !*(&v33->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v33, method, v28);
      v33 = BalanceConfig_TypeInfo;
    }
    static_fields = v33->static_fields;
    v35 = (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields._allRouteList_5__2;
    v36 = WarBoardAI___c_TypeInfo;
    IsWarBoardAiCalcEvalSum = static_fields->IsWarBoardAiCalcEvalSum;
    v38 = *(&WarBoardAI___c_TypeInfo->_2.cctor_finished + 1);
    if ( IsWarBoardAiCalcEvalSum )
    {
      if ( !v38 )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo, method, v28);
        v36 = WarBoardAI___c_TypeInfo;
      }
      v39 = v36->static_fields;
      _9__11_0 = (System_Func_T__TResult__o *)v39->__9__11_0;
      if ( _9__11_0 )
        goto LABEL_47;
      if ( !*(&v36->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v36, method, v28);
        v39 = WarBoardAI___c_TypeInfo->static_fields;
      }
      v41 = (Il2CppObject *)v39->__9;
      _9__11_0 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo);
      System_Func_object__Decimal____ctor(_9__11_0, v41, Method_WarBoardAI___c__Think_b__11_0__, 0);
      v48 = WarBoardAI___c_TypeInfo->static_fields;
      v48->__9__11_0 = (struct System_Func_List_WarBoardAIRoute_RouteData___Decimal__o *)_9__11_0;
      p__9__11_0 = (MissionNaviTransitionBoardItem_o *)&v48->__9__11_0;
    }
    else
    {
      if ( !v38 )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo, method, v28);
        v36 = WarBoardAI___c_TypeInfo;
      }
      v50 = v36->static_fields;
      _9__11_0 = (System_Func_T__TResult__o *)v50->__9__11_1;
      if ( _9__11_0 )
        goto LABEL_47;
      if ( !*(&v36->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v36, method, v28);
        v50 = WarBoardAI___c_TypeInfo->static_fields;
      }
      v51 = (Il2CppObject *)v50->__9;
      _9__11_0 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo);
      System_Func_object__Decimal____ctor(_9__11_0, v51, Method_WarBoardAI___c__Think_b__11_1__, 0);
      v52 = WarBoardAI___c_TypeInfo->static_fields;
      v52->__9__11_1 = (struct System_Func_List_WarBoardAIRoute_RouteData___Decimal__o *)_9__11_0;
      p__9__11_0 = (MissionNaviTransitionBoardItem_o *)&v52->__9__11_1;
    }
    sub_21FFBF4(p__9__11_0, (int32_t)_9__11_0, v42, v43, v44, v45, v46, v47);
LABEL_47:
    v53 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__Decimal_(
                                                                 v35,
                                                                 (System_Func_TSource__TKey__o *)_9__11_0,
                                                                 (const MethodInfo_3855C8C *)Method_System_Linq_Enumerable_OrderByDescending_List_WarBoardAIRoute_RouteData___Decimal___);
    v54 = System_Linq_Enumerable__ToArray_object_(
            v53,
            (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____);
    v55 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v55,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
    v8->fields._availableRouteList_5__4 = (struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *)v55;
    p_availableRouteList_5__4 = (WarBoardAI__Think_d__11_o **)&v8->fields._availableRouteList_5__4;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v8->fields._availableRouteList_5__4,
      (int32_t)v55,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62);
    v63 = (System_Collections_Generic_HashSet_object__o *)sub_21FFEBC(System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo);
    System_Collections_Generic_HashSet_object____ctor(
      v63,
      (const MethodInfo_4286740 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__);
    if ( !v27 )
      goto LABEL_187;
    v70 = v8;
    *(_QWORD *)(v27 + 16) = v63;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v27 + 16), (int32_t)v63, v64, v65, v66, v67, v68, v69);
    if ( !v54 )
      goto LABEL_187;
    max_length = v54->max_length;
    if ( (int)max_length < 1 )
    {
LABEL_78:
      availableRouteList_5__4 = *p_availableRouteList_5__4;
      if ( !*p_availableRouteList_5__4 )
        goto LABEL_187;
LABEL_79:
      v8 = v70;
      if ( SLODWORD(availableRouteList_5__4->fields.__2__current) <= 0 )
      {
        v11 = 1;
        LOBYTE(v260.fields._list) = 1;
        v243 = j_il2cpp_value_box_0(qword_594C050, &v260);
        v70->fields.__2__current = (Il2CppObject *)v243;
        v205 = (MissionNaviTransitionBoardItem_o *)&v70->fields.__2__current;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v70->fields.__2__current,
          v243,
          v244,
          v245,
          v246,
          v247,
          v248,
          v249);
        v212 = 3;
        goto LABEL_185;
      }
      goto LABEL_80;
    }
    v72 = 0;
    pickValue_5__3 = v8->fields._pickValue_5__3;
    while ( 1 )
    {
      if ( v72 >= (unsigned int)max_length )
        goto LABEL_188;
      v73 = (System_Collections_ICollection_o *)v54->m_Items[v72];
      this = (WarBoardAI__Think_d__11_o *)BasicHelper__IsNullOrEmpty(v73, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_77;
      this = (WarBoardAI__Think_d__11_o *)BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v74);
        this = (WarBoardAI__Think_d__11_o *)BalanceConfig_TypeInfo;
      }
      if ( !LOBYTE(this[2].fields._allRouteList_5__2[24].klass) )
        goto LABEL_66;
      if ( !v73 )
        goto LABEL_187;
      this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)v73,
                                            0,
                                            (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
      if ( !this )
        goto LABEL_187;
      if ( WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)this, 0) )
      {
        v80 = *(System_Collections_Generic_HashSet_object__o **)(v27 + 16);
        this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)v73,
                                              0,
                                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
        if ( !this || !v80 )
          goto LABEL_187;
        this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_HashSet_object___Add(
                                              v80,
                                              *(Il2CppObject **)&this->fields._pickValue_5__3,
                                              (const MethodInfo_4287934 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__);
        goto LABEL_77;
      }
      v81 = *(System_Func_object__bool__o **)(v27 + 24);
      if ( !v81 )
      {
        v81 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v81,
          (Il2CppObject *)v27,
          Method_WarBoardAI___c__DisplayClass11_0__Think_b__6__,
          0);
        *(_QWORD *)(v27 + 24) = v81;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v27 + 24), (int32_t)v81, v82, v83, v84, v85, v86, v87);
      }
      this = (WarBoardAI__Think_d__11_o *)BasicHelper__Any_object_(
                                            (System_Collections_Generic_List_T__o *)v73,
                                            (System_Func_T__bool__o *)v81,
                                            (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
      if ( ((unsigned __int8)this & 1) == 0 )
        break;
LABEL_77:
      LODWORD(max_length) = v54->max_length;
      if ( (__int64)++v72 >= (int)max_length )
        goto LABEL_78;
    }
    this = (WarBoardAI__Think_d__11_o *)BalanceConfig_TypeInfo;
LABEL_66:
    if ( !HIDWORD(this[3].monitor) )
    {
      j_il2cpp_runtime_class_init_0(this, method, v74);
      this = (WarBoardAI__Think_d__11_o *)BalanceConfig_TypeInfo;
    }
    if ( !BYTE1(this[2].fields._allRouteList_5__2[24].klass)
      || (this = (WarBoardAI__Think_d__11_o *)WarBoardAI__CheckWasteRoute(
                                                (WarBoardAI_o *)this,
                                                (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v73,
                                                (const MethodInfo *)v74),
          ((unsigned __int8)this & 1) == 0) )
    {
      this = *p_availableRouteList_5__4;
      if ( !*p_availableRouteList_5__4 )
        goto LABEL_187;
      v88 = *(_QWORD *)&this->fields.__1__state;
      v89 = Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__;
      ++HIDWORD(this->fields.__2__current);
      if ( !v88 )
        goto LABEL_187;
      _2__current_low = SLODWORD(this->fields.__2__current);
      if ( (unsigned int)_2__current_low >= *(_DWORD *)(v88 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v73,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
      }
      else
      {
        v91 = v88 + 8 * _2__current_low;
        LODWORD(this->fields.__2__current) = _2__current_low + 1;
        *(_QWORD *)(v91 + 32) = v73;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v91 + 32), (int32_t)v73, v74, v75, v76, v77, v78, v79);
      }
      availableRouteList_5__4 = *p_availableRouteList_5__4;
      if ( !*p_availableRouteList_5__4 )
        goto LABEL_187;
      if ( pickValue_5__3 <= SLODWORD(availableRouteList_5__4->fields.__2__current) )
        goto LABEL_79;
    }
    goto LABEL_77;
  }
  if ( _1__state > 4 )
  {
    if ( _1__state == 5 )
    {
      v8->fields.__1__state = -1;
      goto LABEL_169;
    }
    if ( _1__state == 6 )
    {
      v11 = 0;
      v8->fields.__1__state = -1;
    }
    return v11;
  }
  if ( _1__state == 3 )
  {
    availableRouteList_5__4 = (WarBoardAI__Think_d__11_o *)v8->fields._availableRouteList_5__4;
    v8->fields.__1__state = -1;
LABEL_80:
    v92 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_List_WarBoardAIRoute_RouteData___bool__TypeInfo);
    System_Func_object__bool____ctor(v92, object, Method_WarBoardAI__Think_b__11_2__, 0);
    v93 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)availableRouteList_5__4,
            (System_Func_TSource__bool__o *)v92,
            (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_List_WarBoardAIRoute_RouteData____);
    v94 = System_Linq_Enumerable__Take_object_(
            v93,
            v8->fields._pickValue_5__3,
            (const MethodInfo_3866DA8 *)Method_System_Linq_Enumerable_Take_List_WarBoardAIRoute_RouteData____);
    v95 = System_Linq_Enumerable__ToArray_object_(
            v94,
            (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____);
    v8->fields._evalValueSortList_5__5 = (struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *)v95;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v8->fields._evalValueSortList_5__5,
      (int32_t)v95,
      v96,
      v97,
      v98,
      v99,
      v100,
      v101);
    evalValueSortList_5__5 = v8->fields._evalValueSortList_5__5;
    if ( !evalValueSortList_5__5 )
      goto LABEL_187;
    if ( !evalValueSortList_5__5->max_length )
    {
      v11 = 1;
      LOBYTE(v260.fields._list) = 1;
      v236 = j_il2cpp_value_box_0(qword_594C050, &v260);
      v8->fields.__2__current = (Il2CppObject *)v236;
      v205 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
      sub_21FFBF4(v205, v236, v237, v238, v239, v240, v241, v242);
      v212 = 4;
      goto LABEL_185;
    }
    goto LABEL_82;
  }
  v8->fields.__1__state = -1;
LABEL_82:
  v103 = (System_Collections_Generic_List_Decimal__o *)sub_21FFEBC(System_Collections_Generic_List_Decimal__TypeInfo);
  System_Collections_Generic_List_Decimal____ctor(
    v103,
    (const MethodInfo_4420A44 *)Method_System_Collections_Generic_List_Decimal___ctor__);
  v105 = v8->fields._evalValueSortList_5__5;
  if ( !v105 )
    goto LABEL_187;
  v106 = v8;
  v107 = 0;
  while ( 1 )
  {
    v108 = v105->max_length;
    if ( v107 >= v108 )
      break;
    if ( v107 >= (unsigned int)v108 )
      goto LABEL_188;
    this = (WarBoardAI__Think_d__11_o *)v105->m_Items[v107];
    if ( !this )
      goto LABEL_187;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v260,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
    v109 = 0;
    v110 = 0;
    v111 = 0;
    v262 = v260;
    v260.fields._list = 0;
    *(_QWORD *)&v260.fields._index = &v262;
    while ( 1 )
    {
      v112 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v262,
               (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
      if ( !v112 )
        break;
      current = (WarBoardAIRoute_RouteData_o *)v262.fields._current;
      if ( !v262.fields._current )
        sub_21FFECC(v112, v113);
      if ( WarBoardAIRoute_RouteData__HasFlag((WarBoardAIRoute_RouteData_o *)v262.fields._current, 4, 0) )
      {
        actionPiece = current->fields.actionPiece;
        if ( actionPiece )
          v110 |= WarBoardPieceData__get_isMaster(actionPiece, 0);
        v111 = 1;
      }
      v109 |= WarBoardAIRoute_RouteData__HasFlag(current, 8, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v262,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
    if ( !object )
      goto LABEL_187;
    v116 = object[1].klass;
    if ( !v116 )
      goto LABEL_187;
    this = (WarBoardAI__Think_d__11_o *)v116->_1.klass;
    if ( !this )
      goto LABEL_187;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v260,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__GetEnumerator__);
    v117 = 0.0;
    v261 = v260;
    v260.fields._list = 0;
    *(_QWORD *)&v260.fields._index = &v261;
    while ( 1 )
    {
      v118 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v261,
               (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__MoveNext__);
      if ( !v118 )
        break;
      v120 = (WarBoardTacticalTrendEntity_o *)v261.fields._current;
      if ( !v261.fields._current )
        sub_21FFECC(v118, v119);
      klass_high = HIDWORD(v261.fields._current[1].klass);
      if ( klass_high > 3 )
      {
        if ( klass_high == 4 )
        {
          if ( (v110 & 1) != 0 )
          {
LABEL_113:
            ImmobilityMagnification = WarBoardTacticalTrendEntity__GetImmobilityMagnification(
                                        (WarBoardTacticalTrendEntity_o *)v261.fields._current,
                                        0);
LABEL_114:
            v117 = v117 + ImmobilityMagnification;
          }
        }
        else if ( klass_high == 5 && (v109 & 1) != 0 )
        {
          goto LABEL_113;
        }
      }
      else if ( klass_high )
      {
        if ( klass_high == 1 && (v111 & 1) != 0 )
          goto LABEL_113;
      }
      else if ( v107 < SLODWORD(v261.fields._current[1].monitor) )
      {
        BestMagnification = WarBoardTacticalTrendEntity__GetBestMagnification(
                              (WarBoardTacticalTrendEntity_o *)v261.fields._current,
                              0);
        LowestMagnification = WarBoardTacticalTrendEntity__GetLowestMagnification(v120, 0);
        value = v120->fields.value;
        ImmobilityMagnification = WarBoardTacticalTrendEntity__GetBestMagnification(v120, 0)
                                - (float)((float)((float)(BestMagnification - LowestMagnification)
                                                / (float)((float)value + -1.0))
                                        * (float)v107);
        goto LABEL_114;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v261,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__Dispose__);
    v128 = BalanceConfig_TypeInfo;
    if ( v117 == 0.0 )
      v129 = 1.0;
    else
      v129 = v117;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v126, v127);
      v128 = BalanceConfig_TypeInfo;
    }
    v130 = (System_Decimal_o *)*(&System_Decimal_TypeInfo->_2.cctor_finished + 1);
    if ( v128->static_fields->IsWarBoardAiCalcEvalSum )
    {
      if ( !(_DWORD)v130 )
        j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, v126, v127);
      this = (WarBoardAI__Think_d__11_o *)System_Decimal__op_Explicit(v130, v129, 0);
      v132 = v106->fields._evalValueSortList_5__5;
      if ( v132 )
      {
        if ( (unsigned int)v107 < LODWORD(v132->max_length) )
        {
          v133 = this;
          v134 = method;
          v135 = (System_Collections_Generic_IEnumerable_TSource__o *)v132->m_Items[v107];
          v136 = WarBoardAI___c_TypeInfo;
          if ( !*(&WarBoardAI___c_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo, method, v131);
            v136 = WarBoardAI___c_TypeInfo;
          }
          v137 = v136->static_fields;
          _9__11_8 = (System_Func_T__TResult__o *)v137->__9__11_8;
          if ( !_9__11_8 )
          {
            if ( !*(&v136->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v136, method, v131);
              v137 = WarBoardAI___c_TypeInfo->static_fields;
            }
            v139 = (Il2CppObject *)v137->__9;
            _9__11_8 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
            System_Func_object__Decimal____ctor(_9__11_8, v139, Method_WarBoardAI___c__Think_b__11_8__, 0);
            v140 = WarBoardAI___c_TypeInfo->static_fields;
            v140->__9__11_8 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_8;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&v140->__9__11_8,
              (int32_t)_9__11_8,
              v141,
              v142,
              v143,
              v144,
              v145,
              v146);
          }
          v149 = System_Linq_Enumerable__Sum_object__59140760(
                   (System_Decimal_o *)&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___,
                   v135,
                   (System_Func_TSource__Decimal__o *)_9__11_8,
                   (const MethodInfo_3866A98 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
          v150 = (System_Decimal_o *)*(&System_Decimal_TypeInfo->_2.cctor_finished + 1);
          if ( !(_DWORD)v150 )
            j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, v147, v148);
          v151 = (System_Decimal_o *)v133;
          v152 = (System_Decimal_o *)v134;
          v153 = v149;
          goto LABEL_150;
        }
LABEL_188:
        sub_21FFED4(this);
      }
LABEL_187:
      sub_21FFECC(this, method);
    }
    if ( !(_DWORD)v130 )
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, v126, v127);
    this = (WarBoardAI__Think_d__11_o *)System_Decimal__op_Explicit(v130, v129, 0);
    v155 = v106->fields._evalValueSortList_5__5;
    if ( v155 )
    {
      if ( (unsigned int)v107 >= LODWORD(v155->max_length) )
        goto LABEL_188;
      v156 = this;
      v157 = method;
      v158 = (System_Collections_Generic_IEnumerable_TSource__o *)v155->m_Items[v107];
      v159 = WarBoardAI___c_TypeInfo;
      if ( !*(&WarBoardAI___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo, method, v154);
        v159 = WarBoardAI___c_TypeInfo;
      }
      v160 = v159->static_fields;
      _9__11_9 = (System_Func_T__TResult__o *)v160->__9__11_9;
      if ( !_9__11_9 )
      {
        if ( !*(&v159->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v159, method, v154);
          v160 = WarBoardAI___c_TypeInfo->static_fields;
        }
        v162 = (Il2CppObject *)v160->__9;
        _9__11_9 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
        System_Func_object__Decimal____ctor(_9__11_9, v162, Method_WarBoardAI___c__Think_b__11_9__, 0);
        v163 = WarBoardAI___c_TypeInfo->static_fields;
        v163->__9__11_9 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_9;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v163->__9__11_9,
          (int32_t)_9__11_9,
          v164,
          v165,
          v166,
          v167,
          v168,
          v169);
      }
      this = (WarBoardAI__Think_d__11_o *)System_Linq_Enumerable__Sum_object__59140760(
                                            (System_Decimal_o *)&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___,
                                            v158,
                                            (System_Func_TSource__Decimal__o *)_9__11_9,
                                            (const MethodInfo_3866A98 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
      v171 = v106->fields._evalValueSortList_5__5;
      if ( v171 )
      {
        if ( (unsigned int)v107 >= LODWORD(v171->max_length) )
          goto LABEL_188;
        v172 = (System_Decimal_o *)v171->m_Items[v107];
        if ( v172 )
        {
          v173 = this;
          v174 = (System_Decimal_o *)method;
          flags = v172[1].fields.flags;
          if ( !*(&System_Decimal_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, method, v170);
          v176 = System_Decimal__op_Implicit_77321204(v172, flags, 0);
          v153 = System_Decimal__op_Division(v177, (System_Decimal_o *)v173, v174, (const MethodInfo *)v176);
          v151 = (System_Decimal_o *)v156;
          v152 = (System_Decimal_o *)v157;
LABEL_150:
          this = (WarBoardAI__Think_d__11_o *)System_Decimal__op_Multiply(v150, v151, v152, (const MethodInfo *)v153);
          v104 = method;
          if ( v103 )
          {
            items = v103->fields._items;
            ++v103->fields._version;
            if ( items )
            {
              v179 = v103->fields._size;
              if ( (unsigned int)v179 >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_Decimal___AddWithResize(
                  v103,
                  (System_Decimal_o *)this,
                  (const MethodInfo_4421304 *)method);
              }
              else
              {
                v180 = &items->obj + v179;
                v103->fields._size = v179 + 1;
                v180[2].klass = (Il2CppClass *)this;
                v180[2].monitor = (void *)method;
              }
              v105 = v106->fields._evalValueSortList_5__5;
              ++v107;
              if ( v105 )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_187;
  }
  if ( !object )
    goto LABEL_187;
  this = (WarBoardAI__Think_d__11_o *)WarBoardAI__GetRandomIndex((WarBoardAI_o *)this, v103, v104);
  if ( (unsigned int)this >= LODWORD(v105->max_length) )
    goto LABEL_188;
  v8 = v106;
  v187 = v105->m_Items[(int)this];
  object[1].monitor = v187;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&object[1].monitor, (int32_t)v187, v181, v182, v183, v184, v185, v186);
  monitor = (System_Collections_Generic_IEnumerable_TSource__o *)object[1].monitor;
  v191 = WarBoardAI___c_TypeInfo;
  if ( !*(&WarBoardAI___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo, v188, v189);
    v191 = WarBoardAI___c_TypeInfo;
  }
  v192 = v191->static_fields;
  _9__11_3 = (System_Func_T__TResult__o *)v192->__9__11_3;
  if ( !_9__11_3 )
  {
    if ( !*(&v191->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v191, v188, v189);
      v192 = WarBoardAI___c_TypeInfo->static_fields;
    }
    v194 = (Il2CppObject *)v192->__9;
    _9__11_3 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_WarBoardAIRoute_RouteData__float__TypeInfo);
    System_Func_object__float____ctor(_9__11_3, v194, Method_WarBoardAI___c__Think_b__11_3__, 0);
    v195 = WarBoardAI___c_TypeInfo->static_fields;
    v195->__9__11_3 = (struct System_Func_WarBoardAIRoute_RouteData__float__o *)_9__11_3;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v195->__9__11_3,
      (int32_t)_9__11_3,
      v196,
      v197,
      v198,
      v199,
      v200,
      v201);
  }
  System_Linq_Enumerable__Sum_object__59140976(
    monitor,
    (System_Func_TSource__float__o *)_9__11_3,
    (const MethodInfo_3866B70 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____91532000);
  if ( WarBoardAI__CheckWasteRoute(
         v202,
         (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)object[1].monitor,
         v203) )
  {
    v11 = 1;
    LOBYTE(v260.fields._list) = 1;
    v204 = j_il2cpp_value_box_0(qword_594C050, &v260);
    v106->fields.__2__current = (Il2CppObject *)v204;
    v205 = (MissionNaviTransitionBoardItem_o *)&v106->fields.__2__current;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v106->fields.__2__current,
      v204,
      v206,
      v207,
      v208,
      v209,
      v210,
      v211);
    v212 = 5;
    goto LABEL_185;
  }
LABEL_169:
  v213 = (System_Collections_Generic_HashSet_object__o *)sub_21FFEBC(System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v213,
    (const MethodInfo_4286740 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__);
  if ( !object )
    goto LABEL_187;
  v220 = object[1].monitor;
  if ( !v220 )
    goto LABEL_187;
  v221 = v220[6];
  if ( v221 - 1 >= 0 )
  {
    do
    {
      this = (WarBoardAI__Think_d__11_o *)object[1].monitor;
      if ( !this )
        goto LABEL_187;
      this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)this,
                                            --v221,
                                            (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
      if ( !this )
        goto LABEL_187;
      method = *(const MethodInfo **)&this->fields._pickValue_5__3;
      v222 = this;
      if ( method )
      {
        if ( !v213 )
          goto LABEL_187;
        if ( !System_Collections_Generic_HashSet_object___Contains(
                v213,
                (Il2CppObject *)method,
                (const MethodInfo_4286E44 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__)
          && !WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)v222, 0) )
        {
          System_Collections_Generic_HashSet_object___Add(
            v213,
            *(Il2CppObject **)&v222->fields._pickValue_5__3,
            (const MethodInfo_4287934 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__);
          this = *(WarBoardAI__Think_d__11_o **)&v222->fields._pickValue_5__3;
          if ( !this )
            goto LABEL_187;
          WarBoardPieceData__SetPrevAiRoute((WarBoardPieceData_o *)this, (WarBoardAIRoute_RouteData_o *)v222, 0);
        }
      }
    }
    while ( v221 > 0 );
  }
  v8->fields._availableRouteList_5__4 = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v8->fields._availableRouteList_5__4,
    0,
    v214,
    v215,
    v216,
    v217,
    v218,
    v219);
  v8->fields._evalValueSortList_5__5 = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v8->fields._evalValueSortList_5__5,
    0,
    v223,
    v224,
    v225,
    v226,
    v227,
    v228);
  LOBYTE(v260.fields._list) = 0;
  v229 = j_il2cpp_value_box_0(qword_594C050, &v260);
  v8->fields.__2__current = (Il2CppObject *)v229;
  v205 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
  sub_21FFBF4(v205, v229, v230, v231, v232, v233, v234, v235);
  v212 = 6;
  v11 = 1;
LABEL_185:
  v205[-1].fields._BoardType_k__BackingField = v212;
  return v11;
}


Il2CppObject *WarBoardAI__Think_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardAI__Think_d__11_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn WarBoardAI__Think_d__11__System_Collections_IEnumerator_Reset(
        WarBoardAI__Think_d__11_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_WarBoardAI__Think_d__11_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *WarBoardAI__Think_d__11__System_Collections_IEnumerator_get_Current(
        WarBoardAI__Think_d__11_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void WarBoardAI__Think_d__11__System_IDisposable_Dispose(WarBoardAI__Think_d__11_o *this, const MethodInfo *method)
{
  ;
}


void WarBoardAI___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5935F35 & 1) == 0 )
  {
    sub_21FFC50(&WarBoardAI___c_TypeInfo);
    byte_5935F35 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(WarBoardAI___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardAI___c_TypeInfo->static_fields->__9 = (struct WarBoardAI___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)WarBoardAI___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardAI___c___ctor(WarBoardAI___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Decimal_o *WarBoardAI___c___GetRandomIndex_b__14_0(
        System_Decimal_o *__return_ptr retstr,
        WarBoardAI___c_o *this,
        System_Decimal_o *x,
        const MethodInfo *method)
{
  return x;
}


System_Decimal_o *WarBoardAI___c___Think_b__11_0(
        System_Decimal_o *__return_ptr retstr,
        WarBoardAI___c_o *this,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *x,
        const MethodInfo *method)
{
  WarBoardAI___c_c *v5; // x0
  struct WarBoardAI___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__11_4; // x20
  Il2CppObject *v8; // x21
  struct WarBoardAI___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5935F36 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
    sub_21FFC50(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    sub_21FFC50(&Method_WarBoardAI___c__Think_b__11_4__);
    sub_21FFC50(&WarBoardAI___c_TypeInfo);
    byte_5935F36 = 1;
  }
  v5 = WarBoardAI___c_TypeInfo;
  if ( !*(&WarBoardAI___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo, x, method);
    v5 = WarBoardAI___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__11_4 = (System_Func_T__TResult__o *)static_fields->__9__11_4;
  if ( !_9__11_4 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, x, method);
      static_fields = WarBoardAI___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__11_4 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    System_Func_object__Decimal____ctor(_9__11_4, v8, Method_WarBoardAI___c__Think_b__11_4__, 0);
    v9 = WarBoardAI___c_TypeInfo->static_fields;
    v9->__9__11_4 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_4;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->__9__11_4, (int32_t)_9__11_4, v10, v11, v12, v13, v14, v15);
  }
  return System_Linq_Enumerable__Sum_object__59140760(
           (System_Decimal_o *)static_fields,
           (System_Collections_Generic_IEnumerable_TSource__o *)x,
           (System_Func_TSource__Decimal__o *)_9__11_4,
           (const MethodInfo_3866A98 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
}


System_Decimal_o *WarBoardAI___c___Think_b__11_1(
        System_Decimal_o *__return_ptr retstr,
        WarBoardAI___c_o *this,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *x,
        const MethodInfo *method)
{
  WarBoardAI___c_c *v5; // x0
  struct WarBoardAI___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__11_5; // x20
  Il2CppObject *v8; // x21
  struct WarBoardAI___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Decimal_o *v16; // x0
  System_Decimal_o *v17; // x1
  __int64 v18; // x2
  System_Decimal_o *v19; // x20
  System_Decimal_o *v20; // x21
  int32_t size; // w19
  System_Decimal_o *v22; // x8
  System_Decimal_o *v23; // x2
  System_Decimal_o *v24; // x8

  if ( (byte_5935F38 & 1) == 0 )
  {
    sub_21FFC50(&System_Decimal_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
    sub_21FFC50(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__);
    sub_21FFC50(&Method_WarBoardAI___c__Think_b__11_5__);
    sub_21FFC50(&WarBoardAI___c_TypeInfo);
    byte_5935F38 = 1;
  }
  v5 = WarBoardAI___c_TypeInfo;
  if ( !*(&WarBoardAI___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo, x, method);
    v5 = WarBoardAI___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__11_5 = (System_Func_T__TResult__o *)static_fields->__9__11_5;
  if ( !_9__11_5 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, x, method);
      static_fields = WarBoardAI___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__11_5 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    System_Func_object__Decimal____ctor(_9__11_5, v8, Method_WarBoardAI___c__Think_b__11_5__, 0);
    v9 = WarBoardAI___c_TypeInfo->static_fields;
    v9->__9__11_5 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_5;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->__9__11_5, (int32_t)_9__11_5, v10, v11, v12, v13, v14, v15);
  }
  v16 = System_Linq_Enumerable__Sum_object__59140760(
          (System_Decimal_o *)static_fields,
          (System_Collections_Generic_IEnumerable_TSource__o *)x,
          (System_Func_TSource__Decimal__o *)_9__11_5,
          (const MethodInfo_3866A98 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
  if ( !x )
    sub_21FFECC(v16, v17);
  v19 = v16;
  v20 = v17;
  size = x->fields._size;
  v22 = (System_Decimal_o *)*(&System_Decimal_TypeInfo->_2.cctor_finished + 1);
  if ( !(_DWORD)v22 )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, v17, v18);
  v23 = System_Decimal__op_Implicit_77321204(v22, size, 0);
  return System_Decimal__op_Division(v24, v19, v20, (const MethodInfo *)v23);
}


float WarBoardAI___c___Think_b__11_3(WarBoardAI___c_o *this, WarBoardAIRoute_RouteData_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.evalValue;
}


System_Decimal_o *WarBoardAI___c___Think_b__11_4(
        System_Decimal_o *__return_ptr retstr,
        WarBoardAI___c_o *this,
        WarBoardAIRoute_RouteData_o *y,
        const MethodInfo *method)
{
  float evalValue; // s8
  System_Decimal_o *v6; // x8

  if ( (byte_5935F37 & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_21FFC50(&System_Decimal_TypeInfo);
    byte_5935F37 = 1;
  }
  if ( !y )
    sub_21FFECC(this, y);
  evalValue = y->fields.evalValue;
  v6 = (System_Decimal_o *)*(&System_Decimal_TypeInfo->_2.cctor_finished + 1);
  if ( !(_DWORD)v6 )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, y, method);
  return System_Decimal__op_Explicit(v6, evalValue, 0);
}


System_Decimal_o *WarBoardAI___c___Think_b__11_5(
        System_Decimal_o *__return_ptr retstr,
        WarBoardAI___c_o *this,
        WarBoardAIRoute_RouteData_o *y,
        const MethodInfo *method)
{
  float evalValue; // s8
  System_Decimal_o *v6; // x8

  if ( (byte_5935F39 & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_21FFC50(&System_Decimal_TypeInfo);
    byte_5935F39 = 1;
  }
  if ( !y )
    sub_21FFECC(this, y);
  evalValue = y->fields.evalValue;
  v6 = (System_Decimal_o *)*(&System_Decimal_TypeInfo->_2.cctor_finished + 1);
  if ( !(_DWORD)v6 )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, y, method);
  return System_Decimal__op_Explicit(v6, evalValue, 0);
}


float WarBoardAI___c___Think_b__11_7(WarBoardAI___c_o *this, WarBoardAIRoute_RouteData_o *y, const MethodInfo *method)
{
  if ( !y )
    sub_21FFECC(this, 0);
  return y->fields.evalValue;
}


System_Decimal_o *WarBoardAI___c___Think_b__11_8(
        System_Decimal_o *__return_ptr retstr,
        WarBoardAI___c_o *this,
        WarBoardAIRoute_RouteData_o *y,
        const MethodInfo *method)
{
  float evalValue; // s8
  System_Decimal_o *v6; // x8

  if ( (byte_5935F3A & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_21FFC50(&System_Decimal_TypeInfo);
    byte_5935F3A = 1;
  }
  if ( !y )
    sub_21FFECC(this, y);
  evalValue = y->fields.evalValue;
  v6 = (System_Decimal_o *)*(&System_Decimal_TypeInfo->_2.cctor_finished + 1);
  if ( !(_DWORD)v6 )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, y, method);
  return System_Decimal__op_Explicit(v6, evalValue, 0);
}


System_Decimal_o *WarBoardAI___c___Think_b__11_9(
        System_Decimal_o *__return_ptr retstr,
        WarBoardAI___c_o *this,
        WarBoardAIRoute_RouteData_o *y,
        const MethodInfo *method)
{
  float evalValue; // s8
  System_Decimal_o *v6; // x8

  if ( (byte_5935F3B & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_21FFC50(&System_Decimal_TypeInfo);
    byte_5935F3B = 1;
  }
  if ( !y )
    sub_21FFECC(this, y);
  evalValue = y->fields.evalValue;
  v6 = (System_Decimal_o *)*(&System_Decimal_TypeInfo->_2.cctor_finished + 1);
  if ( !(_DWORD)v6 )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, y, method);
  return System_Decimal__op_Explicit(v6, evalValue, 0);
}


void WarBoardAI___c__DisplayClass11_0___ctor(WarBoardAI___c__DisplayClass11_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardAI___c__DisplayClass11_0___Think_b__6(
        WarBoardAI___c__DisplayClass11_0_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  WarBoardAI___c__DisplayClass11_0_o *v4; // x20

  v4 = this;
  if ( (byte_5935F3C & 1) == 0 )
  {
    this = (WarBoardAI___c__DisplayClass11_0_o *)sub_21FFC50(&Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__);
    byte_5935F3C = 1;
  }
  if ( !x || (this = (WarBoardAI___c__DisplayClass11_0_o *)v4->fields.notActionPieceHash) == 0 )
    sub_21FFECC(this, x);
  return System_Collections_Generic_HashSet_object___Contains(
           (System_Collections_Generic_HashSet_object__o *)this,
           (Il2CppObject *)x->fields.basePiece,
           (const MethodInfo_4286E44 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__);
}