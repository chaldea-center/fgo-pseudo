void __fastcall WarBoardAI___ctor(WarBoardAI_o *this, WarBoardStageNpcEntity_o *npc, const MethodInfo *method)
{
  WarBoardAIRoute_o *v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BD9F7E & 1) == 0 )
  {
    sub_1C21E38(&WarBoardAIRoute_TypeInfo);
    byte_4BD9F7E = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v5 = (WarBoardAIRoute_o *)sub_1C22084(WarBoardAIRoute_TypeInfo);
  WarBoardAIRoute___ctor(v5, npc, 0LL);
  this->fields.routeClass = v5;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)v5, v6, v7, v8, v9, v10, v11);
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
    sub_1C22094(0LL, aiId);
  WarBoardAIRoute__AddPiecePersonalityDic(routeClass, aiId, pieceIndex, 0LL);
}


bool __fastcall WarBoardAI__CheckWasteRoute(
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
  Il2CppClass *v18; // x8
  IWarBoardAIRouteWaste_c *v19; // x1
  __int64 v20; // x9
  IWarBoardAIRouteWaste_c **p_offset; // x10
  __int64 p_method; // x0
  Il2CppClass *v23; // x8
  IWarBoardAIRouteWaste_c *v24; // x1
  __int64 v25; // x9
  IWarBoardAIRouteWaste_c **v26; // x10
  __int64 v27; // x0
  Il2CppClass *v28; // x8
  IWarBoardAIRouteWaste_c **v29; // x10
  int monitor_high; // w28
  IWarBoardAIRouteWaste_c *v31; // x1
  __int64 v32; // x9
  IWarBoardAIRouteWaste_c **v33; // x29
  int *v34; // x10
  __int64 v35; // x0
  bool v36; // zf
  Il2CppClass *v37; // x8
  int monitor; // w28
  IWarBoardAIRouteWaste_c *v39; // x1
  __int64 v40; // x9
  IWarBoardAIRouteWaste_c **v41; // x10
  __int64 v42; // x0
  Il2CppClass *v43; // x8
  IWarBoardAIRouteWaste_c *v44; // x1
  __int64 v45; // x9
  IWarBoardAIRouteWaste_c **v46; // x10
  __int64 v47; // x0
  int32_t v48; // w8

  if ( (byte_4BD9F80 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__set_Item__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__TypeInfo);
    sub_1C21E38(&IWarBoardAIRouteWaste_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
    byte_4BD9F80 = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_32B5078 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ctor__);
  if ( !checkRoute )
    goto LABEL_65;
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
               (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
      if ( !Item )
        break;
      v11 = Item;
      if ( Item[3].klass )
      {
        Item = (Il2CppObject *)WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)Item, 0LL);
        if ( ((unsigned __int8)Item & 1) == 0 )
        {
          v6 = (unsigned int)(v10 - 1);
          if ( v10 < 1 )
            goto LABEL_15;
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)checkRoute,
                   v6,
                   (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
          if ( !Item )
            goto LABEL_15;
          klass = Item[3].klass;
          methods = Item;
          if ( !klass )
            break;
          v14 = v11[3].klass;
          if ( !v14 )
            break;
          if ( *(&klass->_1.byval_arg.bits + 1) != *(&v14->_1.byval_arg.bits + 1)
            || (Item = (Il2CppObject *)WarBoardAIRoute_RouteData__get_notAction(
                                         (WarBoardAIRoute_RouteData_o *)Item,
                                         0LL),
                ((unsigned __int8)Item & 1) != 0) )
          {
LABEL_15:
            v15 = v11[3].klass;
            if ( !v15 || !v4 )
              break;
            Item = (Il2CppObject *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                     v4,
                                     HIDWORD(v15->_1.namespaze),
                                     (const MethodInfo_32B5C40 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__ContainsKey__);
            if ( ((unsigned __int8)Item & 1) != 0 )
            {
              methods = 0LL;
            }
            else
            {
              v16 = v11[3].klass;
              if ( !v16 )
                break;
              methods = (Il2CppObject *)v16->_1.methods;
            }
          }
          v17 = v11[3].klass;
          if ( !v17 || !v4 )
            break;
          System_Collections_Generic_Dictionary_int__object___set_Item(
            v4,
            HIDWORD(v17->_1.namespaze),
            v11,
            (const MethodInfo_32B5A38 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__set_Item__);
          if ( methods && ((__int64)v11[1].klass & 0x10000002) == 0 )
          {
            v18 = methods->klass;
            v19 = *v9;
            v20 = *(unsigned __int16 *)(&methods->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&methods->klass->_2.bitflags2 + 3) )
            {
              p_offset = (IWarBoardAIRouteWaste_c **)&v18->_1.interfaceOffsets->offset;
              while ( *(p_offset - 1) != v19 )
              {
                --v20;
                p_offset += 2;
                if ( !v20 )
                  goto LABEL_29;
              }
              p_method = (__int64)&v18->vtable[*(_DWORD *)p_offset + 2].method;
            }
            else
            {
LABEL_29:
              p_method = sub_1C73E18(methods, v19, 2LL);
            }
            if ( ((*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))p_method)(methods, *(_QWORD *)(p_method + 8)) & 2) == 0 )
            {
              v23 = methods->klass;
              v24 = *v9;
              v25 = *(unsigned __int16 *)(&methods->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&methods->klass->_2.bitflags2 + 3) )
              {
                v26 = (IWarBoardAIRouteWaste_c **)&v23->_1.interfaceOffsets->offset;
                while ( *(v26 - 1) != v24 )
                {
                  --v25;
                  v26 += 2;
                  if ( !v25 )
                    goto LABEL_36;
                }
                v27 = (__int64)&v23->vtable[*(_DWORD *)v26 + 2].method;
              }
              else
              {
LABEL_36:
                v27 = sub_1C73E18(methods, v24, 2LL);
              }
              if ( ((*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v27)(methods, *(_QWORD *)(v27 + 8)) & 0x10000000) == 0 )
              {
                v28 = methods->klass;
                v29 = v9;
                monitor_high = HIDWORD(v11[1].monitor);
                v31 = *v29;
                v32 = *(unsigned __int16 *)(&methods->klass->_2.bitflags2 + 3);
                v33 = v29;
                if ( *(_WORD *)(&methods->klass->_2.bitflags2 + 3) )
                {
                  v34 = &v28->_1.interfaceOffsets->offset;
                  while ( *((IWarBoardAIRouteWaste_c **)v34 - 1) != v31 )
                  {
                    --v32;
                    v34 += 4;
                    if ( !v32 )
                      goto LABEL_43;
                  }
                  v35 = (__int64)&v28->vtable[*v34].method;
                }
                else
                {
LABEL_43:
                  v35 = sub_1C73E18(methods, v31, 0LL);
                }
                v36 = monitor_high == (*(unsigned int (__fastcall **)(Il2CppObject *, _QWORD))v35)(
                                        methods,
                                        *(_QWORD *)(v35 + 8));
                v9 = v33;
                if ( v36 )
                {
                  v37 = methods->klass;
                  monitor = (int)v11[1].monitor;
                  v39 = *v33;
                  v40 = *(unsigned __int16 *)(&methods->klass->_2.bitflags2 + 3);
                  if ( *(_WORD *)(&methods->klass->_2.bitflags2 + 3) )
                  {
                    v41 = (IWarBoardAIRouteWaste_c **)&v37->_1.interfaceOffsets->offset;
                    while ( *(v41 - 1) != v39 )
                    {
                      --v40;
                      v41 += 2;
                      if ( !v40 )
                        goto LABEL_51;
                    }
                    v42 = (__int64)&v37->vtable[*(_DWORD *)v41 + 1].method;
                  }
                  else
                  {
LABEL_51:
                    v42 = sub_1C73E18(methods, v39, 1LL);
                  }
                  v36 = monitor == (*(unsigned int (__fastcall **)(Il2CppObject *, _QWORD))v42)(
                                     methods,
                                     *(_QWORD *)(v42 + 8));
                  v9 = v33;
                  if ( v36 && !WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)v11, 0LL) )
                  {
                    v43 = methods->klass;
                    v44 = *v33;
                    v45 = *(unsigned __int16 *)(&methods->klass->_2.bitflags2 + 3);
                    if ( *(_WORD *)(&methods->klass->_2.bitflags2 + 3) )
                    {
                      v46 = (IWarBoardAIRouteWaste_c **)&v43->_1.interfaceOffsets->offset;
                      while ( *(v46 - 1) != v44 )
                      {
                        --v45;
                        v46 += 2;
                        if ( !v45 )
                          goto LABEL_60;
                      }
                      v47 = (__int64)&v43->vtable[*(_DWORD *)v46 + 3].method;
                    }
                    else
                    {
LABEL_60:
                      v47 = sub_1C73E18(methods, v44, 3LL);
                    }
                    if ( ((*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v47)(methods, *(_QWORD *)(v47 + 8)) & 1) == 0 )
                      return v8;
                  }
                }
              }
            }
          }
        }
      }
      v48 = checkRoute->fields._size;
      v8 = ++v10 < v48;
      if ( v10 >= v48 )
        return v8;
    }
LABEL_65:
    sub_1C22094(Item, v6);
  }
  return v8;
}


void __fastcall WarBoardAI__Clear(WarBoardAI_o *this, const MethodInfo *method)
{
  WarBoardAIRoute_o *routeClass; // x0

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_1C22094(0LL, method);
  WarBoardAIRoute__Clear(routeClass, 0LL);
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
  __int64 v10; // x3
  __int64 v11; // x4
  Il2CppObject *v12; // x20
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  Il2CppObject *v16; // x0
  int32_t v18; // [xsp+Ch] [xbp-44h] BYREF
  int32_t v19; // [xsp+18h] [xbp-38h] BYREF
  int32_t v20; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4BD9F83 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&StringLiteral_25477/*"{0},{1},{2}"*/);
    byte_4BD9F83 = 1;
  }
  v20 = forceId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, *(_QWORD *)&groupId, *(_QWORD *)&index, method);
  v19 = groupId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v9, v10, v11);
  v18 = index;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v13, v14, v15);
  return System_String__Format_63129916((System_String_o *)StringLiteral_25477/*"{0},{1},{2}"*/, v8, v12, v16, 0LL);
}


bool __fastcall WarBoardAI__Execute(WarBoardAI_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *executeRoute; // x0
  int32_t routeIndex; // w1
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x8
  WarBoardPieceData_o *monitor; // x20
  int32_t v9; // w8
  int32_t v10; // w8
  bool v11; // w22
  WarBoardManager_o *v13; // x21
  int32_t version; // w22
  int32_t v15; // w21
  WarBoardPieceData_o *Piece_36484864; // x0
  System_Int32_array *v17; // x21
  WarBoardManager_o *v18; // x21
  int32_t v19; // w8
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v20; // x9

  if ( (byte_4BD9F81 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C21E38(&WarBoardAIManager_TypeInfo);
    byte_4BD9F81 = 1;
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
                                                        (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
                                                        (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
  if ( !Item )
    goto LABEL_40;
  Item = (System_Collections_Generic_List_object__o *)WarBoardAIRoute_RouteData__get_notAction(
                                                        (WarBoardAIRoute_RouteData_o *)Item,
                                                        0LL);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    v9 = this->fields.routeIndex;
    this->fields.isEndPhase = 0;
    v10 = v9 + 1;
    this->fields.routeIndex = v10;
    goto LABEL_37;
  }
  Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this->fields.executeRoute )
    goto LABEL_40;
  v13 = (WarBoardManager_o *)Item;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)this->fields.executeRoute,
                                                        this->fields.routeIndex,
                                                        (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
  if ( !Item )
    goto LABEL_40;
  version = Item->fields._version;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  Item = (System_Collections_Generic_List_object__o *)WarBoardAIManager__GetSquare(version, 0LL);
  if ( !v13 )
    goto LABEL_40;
  WarBoardManager__CheckSelectSquare(v13, monitor, (WarBoardSquareData_o *)Item, 1, 0LL);
  Item = (System_Collections_Generic_List_object__o *)this->fields.executeRoute;
  if ( !Item )
    goto LABEL_40;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                        Item,
                                                        this->fields.routeIndex,
                                                        (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
  if ( !Item )
    goto LABEL_40;
  if ( WarBoardAIRoute_RouteData__HasFlag((WarBoardAIRoute_RouteData_o *)Item, 2LL, 0LL) )
    goto LABEL_28;
  Item = (System_Collections_Generic_List_object__o *)this->fields.executeRoute;
  if ( !Item )
    goto LABEL_40;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                        Item,
                                                        this->fields.routeIndex,
                                                        (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
  if ( !Item )
    goto LABEL_40;
  if ( WarBoardAIRoute_RouteData__HasFlag((WarBoardAIRoute_RouteData_o *)Item, 4LL, 0LL) )
  {
LABEL_28:
    Item = (System_Collections_Generic_List_object__o *)this->fields.executeRoute;
    if ( !Item )
      goto LABEL_40;
    Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                          Item,
                                                          this->fields.routeIndex,
                                                          (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
    if ( !Item )
      goto LABEL_40;
    v15 = Item->fields._version;
    Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Item )
      goto LABEL_40;
    Item = (System_Collections_Generic_List_object__o *)Item[11].klass;
    if ( !Item )
      goto LABEL_40;
    Piece_36484864 = WarBoardData__GetPiece_36484864((WarBoardData_o *)Item, v15, 0LL);
    if ( Piece_36484864 )
    {
      if ( WarBoardPieceData__get_isServant(Piece_36484864, 0LL) )
      {
        Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( Item )
        {
          Item = (System_Collections_Generic_List_object__o *)Item[11].klass;
          if ( Item )
          {
            v17 = WarBoardData__GetInRangeSquareIndecies((WarBoardData_o *)Item, v15, 1, 0, 0LL);
            Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
            if ( Item )
            {
              WarBoardManager__DispPartyBuff((WarBoardManager_o *)Item, v17, 0LL);
              goto LABEL_33;
            }
          }
        }
LABEL_40:
        sub_1C22094(Item, v6);
      }
    }
  }
LABEL_33:
  Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this->fields.executeRoute )
    goto LABEL_40;
  v18 = (WarBoardManager_o *)Item;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)this->fields.executeRoute,
                                                        this->fields.routeIndex,
                                                        (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
  if ( !Item || !v18 )
    goto LABEL_40;
  v11 = 1;
  Item = (System_Collections_Generic_List_object__o *)WarBoardManager__PieceAction_36684544(
                                                        v18,
                                                        monitor,
                                                        Item->fields._version,
                                                        0LL,
                                                        1,
                                                        0LL);
  v19 = this->fields.routeIndex;
  this->fields.isEndPhase = (unsigned __int8)Item & 1;
  v10 = v19 + 1;
  this->fields.routeIndex = v10;
  if ( ((unsigned __int8)Item & 1) != 0 )
    return v11;
LABEL_37:
  v20 = this->fields.executeRoute;
  if ( !v20 )
    goto LABEL_40;
  v11 = 1;
  if ( v20->fields._size <= v10 )
    this->fields.isEndRoute = 1;
  return v11;
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Decimal_o *v15; // x20
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x21
  System_Decimal_o *cctor_finished; // x8
  System_Decimal_o *v19; // x20
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x21
  float v22; // s0
  float v23; // s0
  System_Decimal_o *v24; // x8
  System_Decimal_o *v25; // x0
  System_Decimal_o *v26; // x1
  System_Decimal_o *size; // x8
  MethodInfo *v28; // x21
  System_Decimal_o *v29; // x22
  int32_t v30; // w20
  System_Decimal_o *Item; // x23
  System_Decimal_o *v32; // x1
  System_Decimal_o *v33; // x24
  System_Decimal_o *v34; // x8
  System_Decimal_o *v35; // x23
  System_Decimal_o *v36; // x8
  System_Decimal_o *v37; // x0
  System_Decimal_o *v38; // x1

  if ( (byte_4BD9F82 & 1) == 0 )
  {
    sub_1C21E38(&System_Decimal_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_Sum_Decimal___);
    sub_1C21E38(&System_Func_Decimal__Decimal__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Decimal__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Decimal__get_Item__);
    sub_1C21E38(&System_Math_TypeInfo);
    sub_1C21E38(&Method_WarBoardAI___c__GetRandomIndex_b__14_0__);
    sub_1C21E38(&WarBoardAI___c_TypeInfo);
    byte_4BD9F82 = 1;
  }
  v4 = WarBoardAI___c_TypeInfo;
  if ( !WarBoardAI___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
    v4 = WarBoardAI___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__14_0 = static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = WarBoardAI___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__14_0 = (System_Func_Decimal__Decimal__o *)sub_1C22084(System_Func_Decimal__Decimal__TypeInfo);
    System_Func_Decimal__Decimal____ctor(_9__14_0, v7, Method_WarBoardAI___c__GetRandomIndex_b__14_0__, 0LL);
    v8 = WarBoardAI___c_TypeInfo->static_fields;
    v8->__9__14_0 = _9__14_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v8->__9__14_0, (int64_t)_9__14_0, v9, v10, v11, v12, v13, v14);
  }
  v15 = System_Linq_Enumerable__Sum_Decimal_(
          (System_Decimal_o *)static_fields,
          (System_Collections_Generic_IEnumerable_TSource__o *)weightTable,
          (System_Func_TSource__Decimal__o *)_9__14_0,
          (const MethodInfo_2FE82D4 *)Method_System_Linq_Enumerable_Sum_Decimal___);
  v17 = v16;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !byte_4BD9F92 )
  {
    sub_1C21E38(&System_Decimal_TypeInfo);
    byte_4BD9F92 = 1;
  }
  cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
  if ( !(_DWORD)cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  v19 = System_Decimal__Floor(cctor_finished, v15, v17);
  v21 = v20;
  if ( !System_Decimal_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  v22 = System_Decimal__op_Explicit_64324060(v19, v21);
  v23 = UnityEngine_Random__Range(0.0, v22, 0LL);
  v25 = System_Decimal__op_Explicit(v24, v23, 0LL);
  if ( !weightTable )
    sub_1C22094(v25, v26);
  size = (System_Decimal_o *)(unsigned int)weightTable->fields._size;
  if ( (int)size < 1 )
    return 0;
  v28 = (MethodInfo *)v25;
  v29 = v26;
  v30 = 0;
  while ( 1 )
  {
    Item = System_Collections_Generic_List_Decimal___get_Item(
             size,
             weightTable,
             v30,
             (const MethodInfo_3622564 *)Method_System_Collections_Generic_List_Decimal__get_Item__);
    v33 = v32;
    if ( !System_Decimal_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
    if ( System_Decimal__op_GreaterThanOrEqual(Item, v33, v28) )
      break;
    v35 = System_Collections_Generic_List_Decimal___get_Item(
            v34,
            weightTable,
            v30,
            (const MethodInfo_3622564 *)Method_System_Collections_Generic_List_Decimal__get_Item__);
    v36 = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
    if ( !(_DWORD)v36 )
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
    v37 = System_Decimal__op_Subtraction(v36, (System_Decimal_o *)v28, v29, (const MethodInfo *)v35);
    size = (System_Decimal_o *)(unsigned int)weightTable->fields._size;
    ++v30;
    v28 = (MethodInfo *)v37;
    v29 = v38;
    if ( v30 >= (int)size )
      return 0;
  }
  return v30;
}


System_Collections_IEnumerator_o *__fastcall WarBoardAI__Think(WarBoardAI_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BD9F7F & 1) == 0 )
  {
    sub_1C21E38(&WarBoardAI__Think_d__11_TypeInfo);
    byte_4BD9F7F = 1;
  }
  v3 = sub_1C22084(WarBoardAI__Think_d__11_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
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
    sub_1C22094(0LL, aiId);
  WarBoardAIRoute__UpdatePiecePersonalityDic(routeClass, aiId, pieceIndex, 0LL);
}


bool __fastcall WarBoardAI___Think_b__11_2(
        WarBoardAI_o *this,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *x,
        const MethodInfo *method)
{
  WarBoardAI___c_c *v5; // x0
  WarBoardAIRoute_o *routeClass; // x20
  System_Func_T__TResult__o *_9__11_7; // x21
  Il2CppObject *v8; // x22
  struct WarBoardAI___c_StaticFields *static_fields; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x0
  __int64 v17; // x1
  float v18; // s0

  if ( (byte_4BD9F84 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____77674632);
    sub_1C21E38(&System_Func_WarBoardAIRoute_RouteData__float__TypeInfo);
    sub_1C21E38(&Method_WarBoardAI___c__Think_b__11_7__);
    sub_1C21E38(&WarBoardAI___c_TypeInfo);
    byte_4BD9F84 = 1;
  }
  v5 = WarBoardAI___c_TypeInfo;
  routeClass = this->fields.routeClass;
  if ( !WarBoardAI___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
    v5 = WarBoardAI___c_TypeInfo;
  }
  _9__11_7 = (System_Func_T__TResult__o *)v5->static_fields->__9__11_7;
  if ( !_9__11_7 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = WarBoardAI___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__11_7 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_WarBoardAIRoute_RouteData__float__TypeInfo);
    System_Func_object__float____ctor(_9__11_7, v8, Method_WarBoardAI___c__Think_b__11_7__, 0LL);
    static_fields = WarBoardAI___c_TypeInfo->static_fields;
    static_fields->__9__11_7 = (struct System_Func_WarBoardAIRoute_RouteData__float__o *)_9__11_7;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__11_7,
      (int64_t)_9__11_7,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  v18 = System_Linq_Enumerable__Sum_object__50234284(
          (System_Collections_Generic_IEnumerable_TSource__o *)x,
          (System_Func_TSource__float__o *)_9__11_7,
          (const MethodInfo_2FE83AC *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____77674632);
  if ( !routeClass )
    sub_1C22094(v16, v17);
  return !WarBoardAIRoute__IsThinkingThreshold(routeClass, v18, 0LL);
}


int32_t __fastcall WarBoardAI__get_ForceId(WarBoardAI_o *this, const MethodInfo *method)
{
  struct WarBoardAIRoute_o *routeClass; // x8

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_1C22094(this, method);
  return routeClass->fields.forceId;
}


int32_t __fastcall WarBoardAI__get_GroupId(WarBoardAI_o *this, const MethodInfo *method)
{
  struct WarBoardAIRoute_o *routeClass; // x8

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_1C22094(this, method);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  WarBoardAI__Think_d__11_o *v8; // x26
  struct WarBoardAI_o *_4__this; // x12
  struct WarBoardAI_o *v10; // x19
  WarBoardAIRoute_o *routeClass; // x20
  System_Collections_Generic_Dictionary_int__uint__o *placePieceData; // x21
  System_Collections_Generic_List_object__o *v13; // x22
  System_Collections_IEnumerator_o *RouteData; // x0
  PartyOrganizationUtility_o *p__2__current; // x26
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  bool v22; // w20
  WarBoardAI__Think_d__11_o *v23; // x19
  WarBoardAI__Think_d__11_o *availableRouteList_5__4; // x26
  struct WarBoardAIRoute_o *v25; // x8
  int64_t allRouteList; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *allRouteList_5__2; // x8
  __int64 v31; // x27
  Il2CppClass *klass; // x8
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *v33; // x22
  int32_t namespaze_high; // w8
  BalanceConfig_c *v35; // x8
  WarBoardAI___c_c *v36; // x0
  _BOOL4 IsWarBoardAiCalcEvalSum; // w21
  struct WarBoardAI___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__11_0; // x23
  Il2CppObject *v40; // x24
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct WarBoardAI___c_StaticFields *v47; // x0
  PartyOrganizationUtility_o *p__9__11_0; // x0
  Il2CppObject *v49; // x24
  struct WarBoardAI___c_StaticFields *v50; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x0
  System_Object_array *v52; // x22
  System_Collections_Generic_List_object__o *v53; // x24
  WarBoardAI__Think_d__11_o **p_availableRouteList_5__4; // x23
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  System_Collections_Generic_HashSet_T__o *v61; // x25
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  const MethodInfo *v68; // x2
  __int64 v69; // x3
  System_String_o *v70; // x4
  __int64 v71; // x8
  unsigned __int64 v72; // x20
  int32_t pickValue_5__3; // w28
  PartyOrganizationUtility_o *v74; // x25
  System_Collections_ICollection_o *v75; // x26
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  System_Collections_Generic_HashSet_T__o *v79; // x27
  System_Func_object__bool__o *v80; // x27
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  __int64 v87; // x8
  _QWORD *v88; // x9
  __int64 _2__current_low; // x10
  __int64 v90; // x8
  System_Func_object__bool__o *v91; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v92; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v93; // x0
  System_Object_array *v94; // x0
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  __int64 v101; // x2
  __int64 v102; // x3
  __int64 v103; // x4
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *evalValueSortList_5__5; // x8
  System_Collections_Generic_List_Decimal__o *v105; // x21
  const MethodInfo *v106; // x2
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *v107; // x22
  int v108; // w29
  int max_length; // w8
  int v110; // w24
  int v111; // w25
  char v112; // w26
  _BOOL8 v113; // x0
  __int64 v114; // x1
  WarBoardAIRoute_RouteData_o *current; // x22
  WarBoardPieceData_o *actionPiece; // x0
  Il2CppClass *v117; // x8
  float v118; // s12
  _BOOL8 v119; // x0
  __int64 v120; // x1
  WarBoardTacticalTrendEntity_o *v121; // x22
  float BestMagnification; // s8
  float LowestMagnification; // s0
  int value; // w23
  float ImmobilityMagnification; // s0
  BalanceConfig_c *v126; // x0
  float v127; // s8
  System_Decimal_c *v128; // x8
  _BOOL4 v129; // w25
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *v130; // x8
  WarBoardAI__Think_d__11_o *v131; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v132; // x24
  WarBoardAI___c_c *v133; // x0
  System_Decimal_o *v134; // x23
  struct WarBoardAI___c_StaticFields *v135; // x8
  System_Func_T__TResult__o *_9__11_8; // x25
  System_Func_T__TResult__o *_9__11_9; // x25
  Il2CppObject *v138; // x26
  struct WarBoardAI___c_StaticFields *v139; // x0
  int64_t v140; // x2
  int32_t v141; // w3
  System_String_o *v142; // x4
  BattleSetupInfo_o *v143; // x5
  FollowerInfo_o *v144; // x6
  PartyListViewItem_o *v145; // x7
  System_Decimal_o *v146; // x24
  System_Decimal_o *cctor_finished; // x8
  Il2CppObject *v148; // x26
  struct WarBoardAI___c_StaticFields *v149; // x0
  int64_t v150; // x2
  int32_t v151; // w3
  System_String_o *v152; // x4
  BattleSetupInfo_o *v153; // x5
  FollowerInfo_o *v154; // x6
  PartyListViewItem_o *v155; // x7
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *v156; // x8
  System_Decimal_o *v157; // x8
  WarBoardAI__Think_d__11_o *v158; // x24
  int32_t flags; // w26
  System_Decimal_o *v160; // x25
  System_Decimal_o *v161; // x0
  System_Decimal_o *v162; // x8
  struct System_Decimal_array *items; // x9
  __int64 size; // x11
  Il2CppObject *v165; // x9
  int64_t v166; // x2
  int32_t v167; // w3
  System_String_o *v168; // x4
  BattleSetupInfo_o *v169; // x5
  FollowerInfo_o *v170; // x6
  PartyListViewItem_o *v171; // x7
  int64_t v172; // x1
  WarBoardAI___c_c *v173; // x0
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x22
  System_Func_T__TResult__o *_9__11_3; // x23
  Il2CppObject *v176; // x24
  struct WarBoardAI___c_StaticFields *v177; // x0
  int64_t v178; // x2
  int32_t v179; // w3
  System_String_o *v180; // x4
  BattleSetupInfo_o *v181; // x5
  FollowerInfo_o *v182; // x6
  PartyListViewItem_o *v183; // x7
  WarBoardAI_o *v184; // x0
  const MethodInfo *v185; // x2
  __int64 v186; // x2
  __int64 v187; // x3
  __int64 v188; // x4
  int64_t v189; // x0
  PartyOrganizationUtility_o *v190; // x26
  int64_t v191; // x2
  int32_t v192; // w3
  System_String_o *v193; // x4
  BattleSetupInfo_o *v194; // x5
  FollowerInfo_o *v195; // x6
  PartyListViewItem_o *v196; // x7
  int v197; // w8
  System_Collections_Generic_HashSet_T__o *v198; // x21
  int64_t v199; // x2
  int32_t v200; // w3
  System_String_o *v201; // x4
  BattleSetupInfo_o *v202; // x5
  FollowerInfo_o *v203; // x6
  PartyListViewItem_o *v204; // x7
  int32_t v205; // w22
  WarBoardAI__Think_d__11_o *v206; // x23
  int64_t v207; // x2
  int32_t v208; // w3
  System_String_o *v209; // x4
  BattleSetupInfo_o *v210; // x5
  FollowerInfo_o *v211; // x6
  PartyListViewItem_o *v212; // x7
  __int64 v213; // x2
  __int64 v214; // x3
  __int64 v215; // x4
  int64_t v216; // x0
  PartyOrganizationUtility_o *v217; // x26
  int64_t v218; // x2
  int32_t v219; // w3
  System_String_o *v220; // x4
  BattleSetupInfo_o *v221; // x5
  FollowerInfo_o *v222; // x6
  PartyListViewItem_o *v223; // x7
  int64_t v224; // x0
  int64_t v225; // x2
  int32_t v226; // w3
  System_String_o *v227; // x4
  BattleSetupInfo_o *v228; // x5
  FollowerInfo_o *v229; // x6
  PartyListViewItem_o *v230; // x7
  int64_t v231; // x0
  int64_t v232; // x2
  int32_t v233; // w3
  System_String_o *v234; // x4
  BattleSetupInfo_o *v235; // x5
  FollowerInfo_o *v236; // x6
  PartyListViewItem_o *v237; // x7
  int64_t v238; // x0
  int64_t v239; // x2
  int32_t v240; // w3
  System_String_o *v241; // x4
  BattleSetupInfo_o *v242; // x5
  FollowerInfo_o *v243; // x6
  PartyListViewItem_o *v244; // x7
  WarBoardAI__Think_d__11_o **v246; // [xsp+10h] [xbp-110h]
  Il2CppObject *object; // [xsp+18h] [xbp-108h]
  System_Collections_Generic_HashSet_T__o **v248; // [xsp+20h] [xbp-100h]
  System_Collections_Generic_List_Decimal__o *v249; // [xsp+20h] [xbp-100h]
  Il2CppObject *v250; // [xsp+28h] [xbp-F8h]
  WarBoardAI__Think_d__11_o *v251; // [xsp+30h] [xbp-F0h]
  System_Collections_Generic_List_Enumerator_object__o v252; // [xsp+38h] [xbp-E8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v253; // [xsp+50h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v254; // [xsp+70h] [xbp-B0h] BYREF

  v8 = this;
  if ( (byte_4BD9F8D & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
    sub_1C21E38(&bool_TypeInfo);
    sub_1C21E38(&System_Decimal_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_OrderByDescending_List_WarBoardAIRoute_RouteData___Decimal___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____77674632);
    sub_1C21E38(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Take_List_WarBoardAIRoute_RouteData____);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_List_WarBoardAIRoute_RouteData____);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__get_Current__);
    sub_1C21E38(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    sub_1C21E38(&System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo);
    sub_1C21E38(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    sub_1C21E38(&System_Func_WarBoardAIRoute_RouteData__float__TypeInfo);
    sub_1C21E38(&System_Func_List_WarBoardAIRoute_RouteData___bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__);
    sub_1C21E38(&System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Decimal__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Decimal___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_Decimal__TypeInfo);
    sub_1C21E38(&Method_WarBoardAI___c__Think_b__11_0__);
    sub_1C21E38(&Method_WarBoardAI___c__Think_b__11_1__);
    sub_1C21E38(&Method_WarBoardAI___c__Think_b__11_3__);
    sub_1C21E38(&Method_WarBoardAI___c__Think_b__11_8__);
    sub_1C21E38(&Method_WarBoardAI___c__Think_b__11_9__);
    sub_1C21E38(&Method_WarBoardAI___c__DisplayClass11_0__Think_b__6__);
    sub_1C21E38(&WarBoardAI___c__DisplayClass11_0_TypeInfo);
    sub_1C21E38(&WarBoardAI___c_TypeInfo);
    this = (WarBoardAI__Think_d__11_o *)sub_1C21E38(&Method_WarBoardAI__Think_b__11_2__);
    byte_4BD9F8D = 1;
  }
  memset(&v254, 0, sizeof(v254));
  memset(&v253, 0, sizeof(v253));
  _4__this = v8->fields.__4__this;
  v250 = (Il2CppObject *)_4__this;
  v251 = v8;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_164;
      this = (WarBoardAI__Think_d__11_o *)_4__this->fields.routeClass;
      _4__this->fields.routeIndex = 0;
      _4__this->fields.isEndRoute = 0;
      if ( !this )
        goto LABEL_164;
      v10 = _4__this;
      WarBoardAIRoute__BeforeCreateRouteData((WarBoardAIRoute_o *)this, 0LL);
      routeClass = v10->fields.routeClass;
      if ( !routeClass )
        goto LABEL_164;
      placePieceData = routeClass->fields.placePieceData;
      v13 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v13,
        (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor__);
      RouteData = WarBoardAIRoute__CreateRouteData(
                    routeClass,
                    placePieceData,
                    0,
                    (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v13,
                    0LL);
      v8->fields.__2__current = (Il2CppObject *)RouteData;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C21DDC(p__2__current, (int64_t)RouteData, v16, v17, v18, v19, v20, v21);
      v22 = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return v22;
    case 1:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_164;
      v25 = _4__this->fields.routeClass;
      if ( !v25 )
        goto LABEL_164;
      allRouteList = (int64_t)v25->fields.allRouteList;
      v8->fields._allRouteList_5__2 = (struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *)allRouteList;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._allRouteList_5__2, allRouteList, v2, v3, v4, v5, v6, v7);
      allRouteList_5__2 = v8->fields._allRouteList_5__2;
      if ( !allRouteList_5__2 )
        goto LABEL_164;
      if ( !allRouteList_5__2->fields._size )
      {
        v22 = 1;
        LOBYTE(v252.fields._list) = 1;
        v238 = j_il2cpp_value_box_0(bool_TypeInfo, &v252, v27, v28, v29);
        v8->fields.__2__current = (Il2CppObject *)v238;
        v190 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C21DDC(v190, v238, v239, v240, v241, v242, v243, v244);
        v197 = 2;
        goto LABEL_169;
      }
LABEL_16:
      v31 = sub_1C22084(WarBoardAI___c__DisplayClass11_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v31, 0LL);
      if ( !v250 )
        goto LABEL_164;
      klass = v250[1].klass;
      if ( !klass )
        goto LABEL_164;
      v33 = v8->fields._allRouteList_5__2;
      if ( !v33 )
        goto LABEL_164;
      namespaze_high = HIDWORD(klass->_1.namespaze);
      if ( namespaze_high >= v33->fields._size )
        namespaze_high = v33->fields._size;
      if ( !namespaze_high )
        namespaze_high = v33->fields._size;
      v8->fields._pickValue_5__3 = namespaze_high;
      v35 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v35 = BalanceConfig_TypeInfo;
        v33 = v8->fields._allRouteList_5__2;
      }
      v36 = WarBoardAI___c_TypeInfo;
      IsWarBoardAiCalcEvalSum = v35->static_fields->IsWarBoardAiCalcEvalSum;
      if ( !WarBoardAI___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
        v36 = WarBoardAI___c_TypeInfo;
      }
      static_fields = v36->static_fields;
      if ( IsWarBoardAiCalcEvalSum )
      {
        _9__11_0 = (System_Func_T__TResult__o *)static_fields->__9__11_0;
        if ( _9__11_0 )
          goto LABEL_39;
        if ( !v36->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v36);
          v36 = WarBoardAI___c_TypeInfo;
        }
        v40 = (Il2CppObject *)v36->static_fields->__9;
        _9__11_0 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo);
        System_Func_object__Decimal____ctor(_9__11_0, v40, Method_WarBoardAI___c__Think_b__11_0__, 0LL);
        v47 = WarBoardAI___c_TypeInfo->static_fields;
        v47->__9__11_0 = (struct System_Func_List_WarBoardAIRoute_RouteData___Decimal__o *)_9__11_0;
        p__9__11_0 = (PartyOrganizationUtility_o *)&v47->__9__11_0;
      }
      else
      {
        _9__11_0 = (System_Func_T__TResult__o *)static_fields->__9__11_1;
        if ( _9__11_0 )
          goto LABEL_39;
        if ( !v36->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v36);
          v36 = WarBoardAI___c_TypeInfo;
        }
        v49 = (Il2CppObject *)v36->static_fields->__9;
        _9__11_0 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo);
        System_Func_object__Decimal____ctor(_9__11_0, v49, Method_WarBoardAI___c__Think_b__11_1__, 0LL);
        v50 = WarBoardAI___c_TypeInfo->static_fields;
        v50->__9__11_1 = (struct System_Func_List_WarBoardAIRoute_RouteData___Decimal__o *)_9__11_0;
        p__9__11_0 = (PartyOrganizationUtility_o *)&v50->__9__11_1;
      }
      sub_1C21DDC(p__9__11_0, (int64_t)_9__11_0, v41, v42, v43, v44, v45, v46);
LABEL_39:
      v51 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__Decimal_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v33,
                                                                   (System_Func_TSource__TKey__o *)_9__11_0,
                                                                   (const MethodInfo_2FD93A0 *)Method_System_Linq_Enumerable_OrderByDescending_List_WarBoardAIRoute_RouteData___Decimal___);
      v52 = System_Linq_Enumerable__ToArray_object_(
              v51,
              (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____);
      v53 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v53,
        (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
      v8->fields._availableRouteList_5__4 = (struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *)v53;
      p_availableRouteList_5__4 = (WarBoardAI__Think_d__11_o **)&v8->fields._availableRouteList_5__4;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v8->fields._availableRouteList_5__4,
        (int64_t)v53,
        v55,
        v56,
        v57,
        v58,
        v59,
        v60);
      v61 = (System_Collections_Generic_HashSet_T__o *)sub_1C22084(System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo);
      System_Collections_Generic_HashSet_object____ctor(
        v61,
        (const MethodInfo_3508BA4 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__);
      if ( !v31 )
        goto LABEL_164;
      object = (Il2CppObject *)v31;
      *(_QWORD *)(v31 + 16) = v61;
      v248 = (System_Collections_Generic_HashSet_T__o **)(v31 + 16);
      sub_1C21DDC((PartyOrganizationUtility_o *)(v31 + 16), (int64_t)v61, v62, v63, v64, v65, v66, v67);
      if ( !v52 )
        goto LABEL_164;
      v71 = *(_QWORD *)&v52->max_length;
      if ( (int)v71 >= 1 )
      {
        v72 = 0LL;
        pickValue_5__3 = v8->fields._pickValue_5__3;
        v74 = (PartyOrganizationUtility_o *)(v31 + 24);
        v246 = (WarBoardAI__Think_d__11_o **)&v8->fields._availableRouteList_5__4;
        do
        {
          if ( v72 >= (unsigned int)v71 )
            goto LABEL_171;
          v75 = (System_Collections_ICollection_o *)v52->m_Items[v72];
          this = (WarBoardAI__Think_d__11_o *)BasicHelper__IsNullOrEmpty(v75, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            this = (WarBoardAI__Think_d__11_o *)BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              this = (WarBoardAI__Think_d__11_o *)BalanceConfig_TypeInfo;
            }
            if ( LOBYTE(this[2].fields._allRouteList_5__2[22].fields._size) )
            {
              if ( !v75 )
                goto LABEL_164;
              this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)v75,
                                                    0,
                                                    (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
              if ( !this )
                goto LABEL_164;
              if ( WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)this, 0LL) )
              {
                v79 = *v248;
                this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_List_object___get_Item(
                                                      (System_Collections_Generic_List_object__o *)v75,
                                                      0,
                                                      (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
                if ( !this || !v79 )
                  goto LABEL_164;
                this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_HashSet_object___Add(
                                                      v79,
                                                      *(Il2CppObject **)&this->fields._pickValue_5__3,
                                                      (const MethodInfo_3509D88 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__);
                goto LABEL_69;
              }
              v80 = (System_Func_object__bool__o *)v74->klass;
              if ( !v74->klass )
              {
                v80 = (System_Func_object__bool__o *)sub_1C22084(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
                System_Func_object__bool____ctor(
                  v80,
                  object,
                  Method_WarBoardAI___c__DisplayClass11_0__Think_b__6__,
                  0LL);
                object[1].monitor = v80;
                p_availableRouteList_5__4 = v246;
                sub_1C21DDC(v74, (int64_t)v80, v81, v82, v83, v84, v85, v86);
              }
              this = (WarBoardAI__Think_d__11_o *)BasicHelper__Any_object_(
                                                    (System_Collections_Generic_List_T__o *)v75,
                                                    (System_Func_T__bool__o *)v80,
                                                    (const MethodInfo_2F9AD70 *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
              if ( ((unsigned __int8)this & 1) != 0 )
                goto LABEL_69;
              this = (WarBoardAI__Think_d__11_o *)BalanceConfig_TypeInfo;
            }
            if ( !LODWORD(this[3].monitor) )
            {
              j_il2cpp_runtime_class_init_0(this);
              this = (WarBoardAI__Think_d__11_o *)BalanceConfig_TypeInfo;
            }
            if ( !BYTE1(this[2].fields._allRouteList_5__2[22].fields._size)
              || (this = (WarBoardAI__Think_d__11_o *)WarBoardAI__CheckWasteRoute(
                                                        (WarBoardAI_o *)this,
                                                        (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v75,
                                                        v68),
                  ((unsigned __int8)this & 1) == 0) )
            {
              this = *p_availableRouteList_5__4;
              if ( !*p_availableRouteList_5__4 )
                goto LABEL_164;
              v87 = *(_QWORD *)&this->fields.__1__state;
              v88 = Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__;
              ++HIDWORD(this->fields.__2__current);
              if ( !v87 )
                goto LABEL_164;
              _2__current_low = SLODWORD(this->fields.__2__current);
              if ( (unsigned int)_2__current_low >= *(_DWORD *)(v87 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)v75,
                  *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
              }
              else
              {
                v90 = v87 + 8 * _2__current_low;
                LODWORD(this->fields.__2__current) = _2__current_low + 1;
                *(_QWORD *)(v90 + 32) = v75;
                sub_1C21DDC(
                  (PartyOrganizationUtility_o *)(v90 + 32),
                  (int64_t)v75,
                  (int64_t)v68,
                  v69,
                  v70,
                  v76,
                  v77,
                  v78);
              }
              availableRouteList_5__4 = *p_availableRouteList_5__4;
              if ( !*p_availableRouteList_5__4 )
                goto LABEL_164;
              if ( pickValue_5__3 <= SLODWORD(availableRouteList_5__4->fields.__2__current) )
                goto LABEL_71;
            }
          }
LABEL_69:
          LODWORD(v71) = v52->max_length;
        }
        while ( (__int64)++v72 < (int)v71 );
      }
      availableRouteList_5__4 = *p_availableRouteList_5__4;
      if ( !*p_availableRouteList_5__4 )
        goto LABEL_164;
LABEL_71:
      v23 = v251;
      if ( SLODWORD(availableRouteList_5__4->fields.__2__current) <= 0 )
      {
        v22 = 1;
        LOBYTE(v252.fields._list) = 1;
        v231 = j_il2cpp_value_box_0(bool_TypeInfo, &v252, v68, v69, v70);
        v251->fields.__2__current = (Il2CppObject *)v231;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v251->fields.__2__current, v231, v232, v233, v234, v235, v236, v237);
        v251->fields.__1__state = 3;
      }
      else
      {
LABEL_72:
        v91 = (System_Func_object__bool__o *)sub_1C22084(System_Func_List_WarBoardAIRoute_RouteData___bool__TypeInfo);
        System_Func_object__bool____ctor(v91, v250, Method_WarBoardAI__Think_b__11_2__, 0LL);
        v92 = System_Linq_Enumerable__Where_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)availableRouteList_5__4,
                (System_Func_TSource__bool__o *)v91,
                (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_List_WarBoardAIRoute_RouteData____);
        v93 = System_Linq_Enumerable__Take_object_(
                v92,
                v23->fields._pickValue_5__3,
                (const MethodInfo_2FE8598 *)Method_System_Linq_Enumerable_Take_List_WarBoardAIRoute_RouteData____);
        v94 = System_Linq_Enumerable__ToArray_object_(
                v93,
                (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____);
        v23->fields._evalValueSortList_5__5 = (struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *)v94;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&v23->fields._evalValueSortList_5__5,
          (int64_t)v94,
          v95,
          v96,
          v97,
          v98,
          v99,
          v100);
        evalValueSortList_5__5 = v23->fields._evalValueSortList_5__5;
        if ( !evalValueSortList_5__5 )
          goto LABEL_164;
        v8 = v23;
        if ( !*(_QWORD *)&evalValueSortList_5__5->max_length )
        {
          v22 = 1;
          LOBYTE(v252.fields._list) = 1;
          v224 = j_il2cpp_value_box_0(bool_TypeInfo, &v252, v101, v102, v103);
          v23->fields.__2__current = (Il2CppObject *)v224;
          v190 = (PartyOrganizationUtility_o *)&v23->fields.__2__current;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v23->fields.__2__current, v224, v225, v226, v227, v228, v229, v230);
          v197 = 4;
          goto LABEL_169;
        }
LABEL_74:
        v105 = (System_Collections_Generic_List_Decimal__o *)sub_1C22084(System_Collections_Generic_List_Decimal__TypeInfo);
        System_Collections_Generic_List_Decimal____ctor(
          v105,
          (const MethodInfo_3622000 *)Method_System_Collections_Generic_List_Decimal___ctor__);
        v107 = v8->fields._evalValueSortList_5__5;
        if ( !v107 )
          goto LABEL_164;
        v108 = 0;
        v249 = v105;
        while ( 1 )
        {
          max_length = v107->max_length;
          if ( v108 >= max_length )
            break;
          if ( v108 >= (unsigned int)max_length )
            goto LABEL_171;
          this = (WarBoardAI__Think_d__11_o *)v107->m_Items[v108];
          if ( !this )
            goto LABEL_164;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v252,
            (System_Collections_Generic_List_object__o *)this,
            (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
          v110 = 0;
          v111 = 0;
          v112 = 0;
          v254 = v252;
          while ( 1 )
          {
            v113 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     &v254,
                     (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
            if ( !v113 )
              break;
            current = (WarBoardAIRoute_RouteData_o *)v254.fields._current;
            if ( !v254.fields._current )
              sub_1C22094(v113, v114);
            if ( WarBoardAIRoute_RouteData__HasFlag((WarBoardAIRoute_RouteData_o *)v254.fields._current, 4LL, 0LL) )
            {
              actionPiece = current->fields.actionPiece;
              if ( actionPiece )
                v111 |= WarBoardPieceData__get_isMaster(actionPiece, 0LL);
              v112 = 1;
            }
            v110 |= WarBoardAIRoute_RouteData__HasFlag(current, 8LL, 0LL);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v254,
            (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
          if ( !v250 )
            goto LABEL_164;
          v117 = v250[1].klass;
          if ( !v117 )
            goto LABEL_164;
          this = (WarBoardAI__Think_d__11_o *)v117->_1.klass;
          if ( !this )
            goto LABEL_164;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v252,
            (System_Collections_Generic_List_object__o *)this,
            (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__GetEnumerator__);
          v118 = 0.0;
          v253 = v252;
          while ( 1 )
          {
            v119 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     &v253,
                     (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__MoveNext__);
            if ( !v119 )
              break;
            v121 = (WarBoardTacticalTrendEntity_o *)v253.fields._current;
            if ( !v253.fields._current )
              sub_1C22094(v119, v120);
            switch ( HIDWORD(v253.fields._current[1].klass) )
            {
              case 0:
                if ( v108 < SLODWORD(v253.fields._current[1].monitor) )
                {
                  BestMagnification = WarBoardTacticalTrendEntity__GetBestMagnification(
                                        (WarBoardTacticalTrendEntity_o *)v253.fields._current,
                                        0LL);
                  LowestMagnification = WarBoardTacticalTrendEntity__GetLowestMagnification(v121, 0LL);
                  value = v121->fields.value;
                  ImmobilityMagnification = WarBoardTacticalTrendEntity__GetBestMagnification(v121, 0LL)
                                          - (float)((float)((float)(BestMagnification - LowestMagnification)
                                                          / (float)((float)value + -1.0))
                                                  * (float)v108);
                  goto LABEL_102;
                }
                break;
              case 1:
                if ( (v112 & 1) != 0 )
                  goto LABEL_101;
                break;
              case 4:
                if ( (v111 & 1) != 0 )
                  goto LABEL_101;
                break;
              case 5:
                if ( (v110 & 1) != 0 )
                {
LABEL_101:
                  ImmobilityMagnification = WarBoardTacticalTrendEntity__GetImmobilityMagnification(
                                              (WarBoardTacticalTrendEntity_o *)v253.fields._current,
                                              0LL);
LABEL_102:
                  v118 = v118 + ImmobilityMagnification;
                }
                break;
              default:
                continue;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v253,
            (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__Dispose__);
          v8 = v251;
          v126 = BalanceConfig_TypeInfo;
          if ( v118 == 0.0 )
            v127 = 1.0;
          else
            v127 = v118;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v126 = BalanceConfig_TypeInfo;
          }
          v128 = System_Decimal_TypeInfo;
          v129 = v126->static_fields->IsWarBoardAiCalcEvalSum;
          if ( !System_Decimal_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
          this = (WarBoardAI__Think_d__11_o *)System_Decimal__op_Explicit((System_Decimal_o *)v128, v127, 0LL);
          v130 = v251->fields._evalValueSortList_5__5;
          if ( !v130 )
            goto LABEL_164;
          if ( v108 >= v130->max_length )
            goto LABEL_171;
          v131 = this;
          v132 = (System_Collections_Generic_IEnumerable_TSource__o *)v130->m_Items[v108];
          v133 = WarBoardAI___c_TypeInfo;
          v134 = (System_Decimal_o *)method;
          if ( !WarBoardAI___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
            v133 = WarBoardAI___c_TypeInfo;
          }
          v135 = v133->static_fields;
          if ( v129 )
          {
            _9__11_8 = (System_Func_T__TResult__o *)v135->__9__11_8;
            if ( !_9__11_8 )
            {
              if ( !v133->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v133);
                v133 = WarBoardAI___c_TypeInfo;
              }
              v138 = (Il2CppObject *)v133->static_fields->__9;
              _9__11_8 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
              System_Func_object__Decimal____ctor(_9__11_8, v138, Method_WarBoardAI___c__Think_b__11_8__, 0LL);
              v139 = WarBoardAI___c_TypeInfo->static_fields;
              v139->__9__11_8 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_8;
              sub_1C21DDC(
                (PartyOrganizationUtility_o *)&v139->__9__11_8,
                (int64_t)_9__11_8,
                v140,
                v141,
                v142,
                v143,
                v144,
                v145);
              v8 = v251;
            }
            v146 = System_Linq_Enumerable__Sum_object__50234140(
                     (System_Decimal_o *)&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___,
                     v132,
                     (System_Func_TSource__Decimal__o *)_9__11_8,
                     (const MethodInfo_2FE831C *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
            cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
            if ( !(_DWORD)cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
          }
          else
          {
            _9__11_9 = (System_Func_T__TResult__o *)v135->__9__11_9;
            if ( !_9__11_9 )
            {
              if ( !v133->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v133);
                v133 = WarBoardAI___c_TypeInfo;
              }
              v148 = (Il2CppObject *)v133->static_fields->__9;
              _9__11_9 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
              System_Func_object__Decimal____ctor(_9__11_9, v148, Method_WarBoardAI___c__Think_b__11_9__, 0LL);
              v149 = WarBoardAI___c_TypeInfo->static_fields;
              v149->__9__11_9 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_9;
              sub_1C21DDC(
                (PartyOrganizationUtility_o *)&v149->__9__11_9,
                (int64_t)_9__11_9,
                v150,
                v151,
                v152,
                v153,
                v154,
                v155);
              v8 = v251;
            }
            this = (WarBoardAI__Think_d__11_o *)System_Linq_Enumerable__Sum_object__50234140(
                                                  (System_Decimal_o *)&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___,
                                                  v132,
                                                  (System_Func_TSource__Decimal__o *)_9__11_9,
                                                  (const MethodInfo_2FE831C *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
            v156 = v8->fields._evalValueSortList_5__5;
            if ( !v156 )
              goto LABEL_164;
            if ( v108 >= v156->max_length )
              goto LABEL_171;
            v157 = (System_Decimal_o *)v156->m_Items[v108];
            if ( !v157 )
              goto LABEL_164;
            v158 = this;
            flags = v157[1].fields.flags;
            v160 = (System_Decimal_o *)method;
            if ( !System_Decimal_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
            v161 = System_Decimal__op_Implicit_64323556(v157, flags, 0LL);
            v8 = v251;
            v146 = System_Decimal__op_Division(v162, (System_Decimal_o *)v158, v160, (const MethodInfo *)v161);
          }
          this = (WarBoardAI__Think_d__11_o *)System_Decimal__op_Multiply(
                                                cctor_finished,
                                                (System_Decimal_o *)v131,
                                                v134,
                                                (const MethodInfo *)v146);
          v105 = v249;
          if ( v249 )
          {
            items = v249->fields._items;
            ++v249->fields._version;
            if ( items )
            {
              size = v249->fields._size;
              v106 = method;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_Decimal___AddWithResize(
                  v249,
                  (System_Decimal_o *)this,
                  (const MethodInfo_3622890 *)method);
              }
              else
              {
                v165 = &items->obj + size;
                v249->fields._size = size + 1;
                v165[2].klass = (Il2CppClass *)this;
                v165[2].monitor = (void *)method;
              }
              v107 = v8->fields._evalValueSortList_5__5;
              ++v108;
              if ( v107 )
                continue;
            }
          }
          goto LABEL_164;
        }
        if ( !v250 )
          goto LABEL_164;
        this = (WarBoardAI__Think_d__11_o *)WarBoardAI__GetRandomIndex((WarBoardAI_o *)this, v105, v106);
        if ( (unsigned int)this >= v107->max_length )
LABEL_171:
          sub_1C2209C(this, method);
        v172 = (int64_t)v107->m_Items[(int)this];
        v250[1].monitor = (void *)v172;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v250[1].monitor, v172, v166, v167, v168, v169, v170, v171);
        v173 = WarBoardAI___c_TypeInfo;
        monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v250[1].monitor;
        if ( !WarBoardAI___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
          v173 = WarBoardAI___c_TypeInfo;
        }
        _9__11_3 = (System_Func_T__TResult__o *)v173->static_fields->__9__11_3;
        if ( !_9__11_3 )
        {
          if ( !v173->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v173);
            v173 = WarBoardAI___c_TypeInfo;
          }
          v176 = (Il2CppObject *)v173->static_fields->__9;
          _9__11_3 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_WarBoardAIRoute_RouteData__float__TypeInfo);
          System_Func_object__float____ctor(_9__11_3, v176, Method_WarBoardAI___c__Think_b__11_3__, 0LL);
          v177 = WarBoardAI___c_TypeInfo->static_fields;
          v177->__9__11_3 = (struct System_Func_WarBoardAIRoute_RouteData__float__o *)_9__11_3;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&v177->__9__11_3,
            (int64_t)_9__11_3,
            v178,
            v179,
            v180,
            v181,
            v182,
            v183);
        }
        System_Linq_Enumerable__Sum_object__50234284(
          monitor,
          (System_Func_TSource__float__o *)_9__11_3,
          (const MethodInfo_2FE83AC *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____77674632);
        if ( WarBoardAI__CheckWasteRoute(
               v184,
               (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v250[1].monitor,
               v185) )
        {
          v22 = 1;
          LOBYTE(v252.fields._list) = 1;
          v189 = j_il2cpp_value_box_0(bool_TypeInfo, &v252, v186, v187, v188);
          v8->fields.__2__current = (Il2CppObject *)v189;
          v190 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1C21DDC(v190, v189, v191, v192, v193, v194, v195, v196);
          v197 = 5;
LABEL_169:
          *(_DWORD *)&v190[-1].fields._IsQuestStartMenuMode_k__BackingField = v197;
          return v22;
        }
LABEL_152:
        v198 = (System_Collections_Generic_HashSet_T__o *)sub_1C22084(System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo);
        System_Collections_Generic_HashSet_object____ctor(
          v198,
          (const MethodInfo_3508BA4 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__);
        if ( !v250 || (this = (WarBoardAI__Think_d__11_o *)v250[1].monitor) == 0LL )
LABEL_164:
          sub_1C22094(this, method);
        v205 = LODWORD(this->fields.__2__current) - 1;
        if ( v205 >= 0 )
        {
          while ( 1 )
          {
            this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)this,
                                                  v205,
                                                  (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
            if ( !this )
              goto LABEL_164;
            method = *(const MethodInfo **)&this->fields._pickValue_5__3;
            v206 = this;
            if ( method )
            {
              if ( !v198 )
                goto LABEL_164;
              if ( !System_Collections_Generic_HashSet_object___Contains(
                      v198,
                      (Il2CppObject *)method,
                      (const MethodInfo_3509298 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__)
                && !WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)v206, 0LL) )
              {
                System_Collections_Generic_HashSet_object___Add(
                  v198,
                  *(Il2CppObject **)&v206->fields._pickValue_5__3,
                  (const MethodInfo_3509D88 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__);
                this = *(WarBoardAI__Think_d__11_o **)&v206->fields._pickValue_5__3;
                if ( !this )
                  goto LABEL_164;
                WarBoardPieceData__SetPrevAiRoute((WarBoardPieceData_o *)this, (WarBoardAIRoute_RouteData_o *)v206, 0LL);
              }
            }
            if ( --v205 < 0 )
              break;
            this = (WarBoardAI__Think_d__11_o *)v250[1].monitor;
            if ( !this )
              goto LABEL_164;
          }
        }
        v8->fields._availableRouteList_5__4 = 0LL;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&v8->fields._availableRouteList_5__4,
          0LL,
          v199,
          v200,
          v201,
          v202,
          v203,
          v204);
        v8->fields._evalValueSortList_5__5 = 0LL;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&v8->fields._evalValueSortList_5__5,
          0LL,
          v207,
          v208,
          v209,
          v210,
          v211,
          v212);
        LOBYTE(v252.fields._list) = 0;
        v216 = j_il2cpp_value_box_0(bool_TypeInfo, &v252, v213, v214, v215);
        v8->fields.__2__current = (Il2CppObject *)v216;
        v217 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C21DDC(v217, v216, v218, v219, v220, v221, v222, v223);
        *(_DWORD *)&v217[-1].fields._IsQuestStartMenuMode_k__BackingField = 6;
        return 1;
      }
      return v22;
    case 2:
      v8->fields.__1__state = -1;
      goto LABEL_16;
    case 3:
      v23 = v8;
      availableRouteList_5__4 = (WarBoardAI__Think_d__11_o *)v8->fields._availableRouteList_5__4;
      v23->fields.__1__state = -1;
      goto LABEL_72;
    case 4:
      v8->fields.__1__state = -1;
      goto LABEL_74;
    case 5:
      v8->fields.__1__state = -1;
      goto LABEL_152;
    case 6:
      v22 = 0;
      v8->fields.__1__state = -1;
      return v22;
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_WarBoardAI__Think_d__11_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BD9F85 & 1) == 0 )
  {
    sub_1C21E38(&WarBoardAI___c_TypeInfo);
    byte_4BD9F85 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(WarBoardAI___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  WarBoardAI___c_TypeInfo->static_fields->__9 = (struct WarBoardAI___c_o *)v1;
  sub_1C21DDC((PartyOrganizationUtility_o *)WarBoardAI___c_TypeInfo->static_fields, (int64_t)v1, v2, v3, v4, v5, v6, v7);
}


void __fastcall WarBoardAI___c___ctor(WarBoardAI___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Decimal_o *__fastcall WarBoardAI___c___GetRandomIndex_b__14_0(
        System_Decimal_o *retstr,
        WarBoardAI___c_o *this,
        System_Decimal_o *x,
        const MethodInfo *method)
{
  return x;
}


System_Decimal_o *__fastcall WarBoardAI___c___Think_b__11_0(
        System_Decimal_o *retstr,
        WarBoardAI___c_o *this,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *x,
        const MethodInfo *method)
{
  WarBoardAI___c_c *v5; // x0
  struct WarBoardAI___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__11_4; // x20
  Il2CppObject *v8; // x21
  struct WarBoardAI___c_StaticFields *v9; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4BD9F86 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
    sub_1C21E38(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    sub_1C21E38(&Method_WarBoardAI___c__Think_b__11_4__);
    sub_1C21E38(&WarBoardAI___c_TypeInfo);
    byte_4BD9F86 = 1;
  }
  v5 = WarBoardAI___c_TypeInfo;
  if ( !WarBoardAI___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
    v5 = WarBoardAI___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__11_4 = (System_Func_T__TResult__o *)static_fields->__9__11_4;
  if ( !_9__11_4 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = WarBoardAI___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__11_4 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    System_Func_object__Decimal____ctor(_9__11_4, v8, Method_WarBoardAI___c__Think_b__11_4__, 0LL);
    v9 = WarBoardAI___c_TypeInfo->static_fields;
    v9->__9__11_4 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_4;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v9->__9__11_4, (int64_t)_9__11_4, v10, v11, v12, v13, v14, v15);
  }
  return System_Linq_Enumerable__Sum_object__50234140(
           (System_Decimal_o *)static_fields,
           (System_Collections_Generic_IEnumerable_TSource__o *)x,
           (System_Func_TSource__Decimal__o *)_9__11_4,
           (const MethodInfo_2FE831C *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
}


System_Decimal_o *__fastcall WarBoardAI___c___Think_b__11_1(
        System_Decimal_o *retstr,
        WarBoardAI___c_o *this,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *x,
        const MethodInfo *method)
{
  WarBoardAI___c_c *v5; // x0
  struct WarBoardAI___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__11_5; // x20
  Il2CppObject *v8; // x21
  struct WarBoardAI___c_StaticFields *v9; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_Decimal_o *v16; // x0
  System_Decimal_o *v17; // x1
  System_Decimal_o *v18; // x20
  int32_t size; // w19
  System_Decimal_o *v20; // x21
  System_Decimal_o *cctor_finished; // x8
  System_Decimal_o *v22; // x2
  System_Decimal_o *v23; // x8

  if ( (byte_4BD9F88 & 1) == 0 )
  {
    sub_1C21E38(&System_Decimal_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
    sub_1C21E38(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__);
    sub_1C21E38(&Method_WarBoardAI___c__Think_b__11_5__);
    sub_1C21E38(&WarBoardAI___c_TypeInfo);
    byte_4BD9F88 = 1;
  }
  v5 = WarBoardAI___c_TypeInfo;
  if ( !WarBoardAI___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
    v5 = WarBoardAI___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__11_5 = (System_Func_T__TResult__o *)static_fields->__9__11_5;
  if ( !_9__11_5 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = WarBoardAI___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__11_5 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    System_Func_object__Decimal____ctor(_9__11_5, v8, Method_WarBoardAI___c__Think_b__11_5__, 0LL);
    v9 = WarBoardAI___c_TypeInfo->static_fields;
    v9->__9__11_5 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_5;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v9->__9__11_5, (int64_t)_9__11_5, v10, v11, v12, v13, v14, v15);
  }
  v16 = System_Linq_Enumerable__Sum_object__50234140(
          (System_Decimal_o *)static_fields,
          (System_Collections_Generic_IEnumerable_TSource__o *)x,
          (System_Func_TSource__Decimal__o *)_9__11_5,
          (const MethodInfo_2FE831C *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
  if ( !x )
    sub_1C22094(v16, v17);
  v18 = v16;
  size = x->fields._size;
  v20 = v17;
  cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
  if ( !(_DWORD)cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  v22 = System_Decimal__op_Implicit_64323556(cctor_finished, size, 0LL);
  return System_Decimal__op_Division(v23, v18, v20, (const MethodInfo *)v22);
}


float __fastcall WarBoardAI___c___Think_b__11_3(
        WarBoardAI___c_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.evalValue;
}


System_Decimal_o *__fastcall WarBoardAI___c___Think_b__11_4(
        System_Decimal_o *retstr,
        WarBoardAI___c_o *this,
        WarBoardAIRoute_RouteData_o *y,
        const MethodInfo *method)
{
  float evalValue; // s8
  System_Decimal_o *cctor_finished; // x8

  if ( (byte_4BD9F87 & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_1C21E38(&System_Decimal_TypeInfo);
    byte_4BD9F87 = 1;
  }
  if ( !y )
    sub_1C22094(this, y);
  evalValue = y->fields.evalValue;
  cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
  if ( !(_DWORD)cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  return System_Decimal__op_Explicit(cctor_finished, evalValue, 0LL);
}


System_Decimal_o *__fastcall WarBoardAI___c___Think_b__11_5(
        System_Decimal_o *retstr,
        WarBoardAI___c_o *this,
        WarBoardAIRoute_RouteData_o *y,
        const MethodInfo *method)
{
  float evalValue; // s8
  System_Decimal_o *cctor_finished; // x8

  if ( (byte_4BD9F89 & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_1C21E38(&System_Decimal_TypeInfo);
    byte_4BD9F89 = 1;
  }
  if ( !y )
    sub_1C22094(this, y);
  evalValue = y->fields.evalValue;
  cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
  if ( !(_DWORD)cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  return System_Decimal__op_Explicit(cctor_finished, evalValue, 0LL);
}


float __fastcall WarBoardAI___c___Think_b__11_7(
        WarBoardAI___c_o *this,
        WarBoardAIRoute_RouteData_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_1C22094(this, 0LL);
  return y->fields.evalValue;
}


System_Decimal_o *__fastcall WarBoardAI___c___Think_b__11_8(
        System_Decimal_o *retstr,
        WarBoardAI___c_o *this,
        WarBoardAIRoute_RouteData_o *y,
        const MethodInfo *method)
{
  float evalValue; // s8
  System_Decimal_o *cctor_finished; // x8

  if ( (byte_4BD9F8A & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_1C21E38(&System_Decimal_TypeInfo);
    byte_4BD9F8A = 1;
  }
  if ( !y )
    sub_1C22094(this, y);
  evalValue = y->fields.evalValue;
  cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
  if ( !(_DWORD)cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  return System_Decimal__op_Explicit(cctor_finished, evalValue, 0LL);
}


System_Decimal_o *__fastcall WarBoardAI___c___Think_b__11_9(
        System_Decimal_o *retstr,
        WarBoardAI___c_o *this,
        WarBoardAIRoute_RouteData_o *y,
        const MethodInfo *method)
{
  float evalValue; // s8
  System_Decimal_o *cctor_finished; // x8

  if ( (byte_4BD9F8B & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_1C21E38(&System_Decimal_TypeInfo);
    byte_4BD9F8B = 1;
  }
  if ( !y )
    sub_1C22094(this, y);
  evalValue = y->fields.evalValue;
  cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
  if ( !(_DWORD)cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  return System_Decimal__op_Explicit(cctor_finished, evalValue, 0LL);
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
  if ( (byte_4BD9F8C & 1) == 0 )
  {
    this = (WarBoardAI___c__DisplayClass11_0_o *)sub_1C21E38(&Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__);
    byte_4BD9F8C = 1;
  }
  if ( !x || (this = (WarBoardAI___c__DisplayClass11_0_o *)v4->fields.notActionPieceHash) == 0LL )
    sub_1C22094(this, x);
  return System_Collections_Generic_HashSet_object___Contains(
           (System_Collections_Generic_HashSet_T__o *)this,
           (Il2CppObject *)x->fields.basePiece,
           (const MethodInfo_3509298 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__);
}