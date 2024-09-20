void __fastcall WarBoardAI___ctor(WarBoardAI_o *this, WarBoardStageNpcEntity_o *npc, const MethodInfo *method)
{
  WarBoardAIRoute_o *v5; // x21
  const MethodInfo *v6; // x2
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A58D28 & 1) == 0 )
  {
    sub_1B885B0(&WarBoardAIRoute_TypeInfo);
    byte_4A58D28 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v5 = (WarBoardAIRoute_o *)sub_1B887FC(WarBoardAIRoute_TypeInfo);
  WarBoardAIRoute___ctor(v5, npc, v6);
  this->fields.routeClass = v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v5, v7, v8);
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
    sub_1B8880C(0LL, aiId);
  WarBoardAIRoute__AddPiecePersonalityDic(routeClass, aiId, pieceIndex, method);
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

  if ( (byte_4A58D2A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__set_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__TypeInfo);
    sub_1B885B0(&IWarBoardAIRouteWaste_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
    byte_4A58D2A = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ctor__);
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
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
                                     (const MethodInfo_316DB4C *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__ContainsKey__);
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
            (const MethodInfo_316D944 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__set_Item__);
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
              p_method = sub_1BDA590(methods, v19, 2LL);
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
                v27 = sub_1BDA590(methods, v24, 2LL);
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
                  v35 = sub_1BDA590(methods, v31, 0LL);
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
                    v42 = sub_1BDA590(methods, v39, 1LL);
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
                      v47 = sub_1BDA590(methods, v44, 3LL);
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
    sub_1B8880C(Item, v6);
  }
  return v8;
}


void __fastcall WarBoardAI__Clear(WarBoardAI_o *this, const MethodInfo *method)
{
  WarBoardAIRoute_o *routeClass; // x0

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_1B8880C(0LL, method);
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

  if ( (byte_4A58D2D & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_25033/*"{0},{1},{2}"*/);
    byte_4A58D2D = 1;
  }
  v20 = forceId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, *(_QWORD *)&groupId, *(_QWORD *)&index, method);
  v19 = groupId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v9, v10, v11);
  v18 = index;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v13, v14, v15);
  return System_String__Format_61721472((System_String_o *)StringLiteral_25033/*"{0},{1},{2}"*/, v8, v12, v16, 0LL);
}


bool __fastcall WarBoardAI__Execute(WarBoardAI_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *executeRoute; // x0
  int32_t routeIndex; // w1
  System_Collections_Generic_List_object__o *Item; // x0
  const MethodInfo *v6; // x1
  System_Collections_Generic_List_object__o *v7; // x8
  WarBoardPieceData_o *monitor; // x20
  int32_t v9; // w8
  int32_t v10; // w8
  bool v11; // w22
  WarBoardManager_o *v13; // x21
  int32_t version; // w22
  int32_t v15; // w21
  WarBoardPieceData_o *Piece_35359972; // x0
  System_Int32_array *v17; // x21
  WarBoardManager_o *v18; // x21
  int32_t v19; // w8
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v20; // x9

  if ( (byte_4A58D2B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&WarBoardAIManager_TypeInfo);
    byte_4A58D2B = 1;
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
                                                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
                                                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
  Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this->fields.executeRoute )
    goto LABEL_40;
  v13 = (WarBoardManager_o *)Item;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)this->fields.executeRoute,
                                                        this->fields.routeIndex,
                                                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
  if ( !Item )
    goto LABEL_40;
  version = Item->fields._version;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  Item = (System_Collections_Generic_List_object__o *)WarBoardAIManager__GetSquare(version, v6);
  if ( !v13 )
    goto LABEL_40;
  WarBoardManager__CheckSelectSquare(v13, monitor, (WarBoardSquareData_o *)Item, 1, 0LL);
  Item = (System_Collections_Generic_List_object__o *)this->fields.executeRoute;
  if ( !Item )
    goto LABEL_40;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                        Item,
                                                        this->fields.routeIndex,
                                                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
                                                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
                                                          (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
    if ( !Item )
      goto LABEL_40;
    v15 = Item->fields._version;
    Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Item )
      goto LABEL_40;
    Item = (System_Collections_Generic_List_object__o *)Item[11].klass;
    if ( !Item )
      goto LABEL_40;
    Piece_35359972 = WarBoardData__GetPiece_35359972((WarBoardData_o *)Item, v15, 0LL);
    if ( Piece_35359972 )
    {
      if ( WarBoardPieceData__get_isServant(Piece_35359972, 0LL) )
      {
        Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( Item )
        {
          Item = (System_Collections_Generic_List_object__o *)Item[11].klass;
          if ( Item )
          {
            v17 = WarBoardData__GetInRangeSquareIndecies((WarBoardData_o *)Item, v15, 1, 0, 0LL);
            Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
            if ( Item )
            {
              WarBoardManager__DispPartyBuff((WarBoardManager_o *)Item, v17, 0LL);
              goto LABEL_33;
            }
          }
        }
LABEL_40:
        sub_1B8880C(Item, v6);
      }
    }
  }
LABEL_33:
  Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this->fields.executeRoute )
    goto LABEL_40;
  v18 = (WarBoardManager_o *)Item;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)this->fields.executeRoute,
                                                        this->fields.routeIndex,
                                                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
  if ( !Item || !v18 )
    goto LABEL_40;
  v11 = 1;
  Item = (System_Collections_Generic_List_object__o *)WarBoardManager__PieceAction_35501100(
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
  int32_t v9; // w2
  int32_t v10; // w3
  System_Decimal_o *v11; // x20
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x21
  System_Decimal_o *cctor_finished; // x8
  System_Decimal_o *v15; // x20
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x21
  float v18; // s0
  float v19; // s0
  System_Decimal_o *v20; // x8
  System_Decimal_o *v21; // x0
  System_Decimal_o *v22; // x1
  System_Decimal_o *size; // x8
  MethodInfo *v24; // x21
  System_Decimal_o *v25; // x22
  int32_t v26; // w20
  System_Decimal_o *Item; // x23
  System_Decimal_o *v28; // x1
  System_Decimal_o *v29; // x24
  System_Decimal_o *v30; // x8
  System_Decimal_o *v31; // x23
  System_Decimal_o *v32; // x8
  System_Decimal_o *v33; // x0
  System_Decimal_o *v34; // x1

  if ( (byte_4A58D2C & 1) == 0 )
  {
    sub_1B885B0(&System_Decimal_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Sum_Decimal___);
    sub_1B885B0(&System_Func_Decimal__Decimal__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Decimal__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Decimal__get_Item__);
    sub_1B885B0(&System_Math_TypeInfo);
    sub_1B885B0(&Method_WarBoardAI___c__GetRandomIndex_b__14_0__);
    sub_1B885B0(&WarBoardAI___c_TypeInfo);
    byte_4A58D2C = 1;
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
    _9__14_0 = (System_Func_Decimal__Decimal__o *)sub_1B887FC(System_Func_Decimal__Decimal__TypeInfo);
    System_Func_Decimal__Decimal____ctor(_9__14_0, v7, Method_WarBoardAI___c__GetRandomIndex_b__14_0__, 0LL);
    v8 = WarBoardAI___c_TypeInfo->static_fields;
    v8->__9__14_0 = _9__14_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->__9__14_0, (int32_t)_9__14_0, v9, v10);
  }
  v11 = System_Linq_Enumerable__Sum_Decimal_(
          (System_Decimal_o *)static_fields,
          (System_Collections_Generic_IEnumerable_TSource__o *)weightTable,
          (System_Func_TSource__Decimal__o *)_9__14_0,
          (const MethodInfo_2EB71D4 *)Method_System_Linq_Enumerable_Sum_Decimal___);
  v13 = v12;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !byte_4A58D80 )
  {
    sub_1B885B0(&System_Decimal_TypeInfo);
    byte_4A58D80 = 1;
  }
  cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
  if ( !(_DWORD)cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  v15 = System_Decimal__Floor(cctor_finished, v11, v13);
  v17 = v16;
  if ( !System_Decimal_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  v18 = System_Decimal__op_Explicit_62914912(v15, v17);
  v19 = UnityEngine_Random__Range(0.0, v18, 0LL);
  v21 = System_Decimal__op_Explicit(v20, v19, 0LL);
  if ( !weightTable )
    sub_1B8880C(v21, v22);
  size = (System_Decimal_o *)(unsigned int)weightTable->fields._size;
  if ( (int)size < 1 )
    return 0;
  v24 = (MethodInfo *)v21;
  v25 = v22;
  v26 = 0;
  while ( 1 )
  {
    Item = System_Collections_Generic_List_Decimal___get_Item(
             size,
             weightTable,
             v26,
             (const MethodInfo_34D0CE4 *)Method_System_Collections_Generic_List_Decimal__get_Item__);
    v29 = v28;
    if ( !System_Decimal_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
    if ( System_Decimal__op_GreaterThanOrEqual(Item, v29, v24) )
      break;
    v31 = System_Collections_Generic_List_Decimal___get_Item(
            v30,
            weightTable,
            v26,
            (const MethodInfo_34D0CE4 *)Method_System_Collections_Generic_List_Decimal__get_Item__);
    v32 = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
    if ( !(_DWORD)v32 )
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
    v33 = System_Decimal__op_Subtraction(v32, (System_Decimal_o *)v24, v25, (const MethodInfo *)v31);
    size = (System_Decimal_o *)(unsigned int)weightTable->fields._size;
    ++v26;
    v24 = (MethodInfo *)v33;
    v25 = v34;
    if ( v26 >= (int)size )
      return 0;
  }
  return v26;
}


System_Collections_IEnumerator_o *__fastcall WarBoardAI__Think(WarBoardAI_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A58D29 & 1) == 0 )
  {
    sub_1B885B0(&WarBoardAI__Think_d__11_TypeInfo);
    byte_4A58D29 = 1;
  }
  v3 = sub_1B887FC(WarBoardAI__Think_d__11_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
    sub_1B8880C(0LL, aiId);
  WarBoardAIRoute__UpdatePiecePersonalityDic(routeClass, aiId, pieceIndex, method);
}


bool __fastcall WarBoardAI___Think_b__11_2(
        WarBoardAI_o *this,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *x,
        const MethodInfo *method)
{
  WarBoardAI___c_c *v5; // x0
  struct WarBoardAIRoute_o *routeClass; // x23
  System_Func_T__TResult__o *_9__11_7; // x20
  Il2CppObject *v8; // x21
  struct WarBoardAI___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x0
  __int64 v13; // x1
  float v14; // s0
  struct WarBoardStageNpcEntity_o *npcData; // x8

  if ( (byte_4A58D2E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____76132696);
    sub_1B885B0(&System_Func_WarBoardAIRoute_RouteData__float__TypeInfo);
    sub_1B885B0(&Method_WarBoardAI___c__Think_b__11_7__);
    sub_1B885B0(&WarBoardAI___c_TypeInfo);
    byte_4A58D2E = 1;
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
    _9__11_7 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_WarBoardAIRoute_RouteData__float__TypeInfo);
    System_Func_object__float____ctor(_9__11_7, v8, Method_WarBoardAI___c__Think_b__11_7__, 0LL);
    static_fields = WarBoardAI___c_TypeInfo->static_fields;
    static_fields->__9__11_7 = (struct System_Func_WarBoardAIRoute_RouteData__float__o *)_9__11_7;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__11_7, (int32_t)_9__11_7, v10, v11);
  }
  v14 = System_Linq_Enumerable__Sum_object__48984748(
          (System_Collections_Generic_IEnumerable_TSource__o *)x,
          (System_Func_TSource__float__o *)_9__11_7,
          (const MethodInfo_2EB72AC *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____76132696);
  if ( !routeClass || (npcData = routeClass->fields.npcData) == 0LL )
    sub_1B8880C(v12, v13);
  return (float)((float)npcData->fields.lowerThinkingValue / 100.0) <= v14;
}


int32_t __fastcall WarBoardAI__get_ForceId(WarBoardAI_o *this, const MethodInfo *method)
{
  struct WarBoardAIRoute_o *routeClass; // x8

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_1B8880C(this, method);
  return routeClass->fields.forceId;
}


int32_t __fastcall WarBoardAI__get_GroupId(WarBoardAI_o *this, const MethodInfo *method)
{
  struct WarBoardAIRoute_o *routeClass; // x8

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_1B8880C(this, method);
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
  int32_t v2; // w2
  int32_t v3; // w3
  WarBoardAI__Think_d__11_o *v4; // x26
  struct WarBoardAI_o *_4__this; // x12
  struct WarBoardAI_o *v6; // x19
  WarBoardAIRoute_o *routeClass; // x20
  System_Collections_Generic_Dictionary_int__uint__o *placePieceData; // x21
  System_Collections_Generic_List_object__o *v9; // x22
  const MethodInfo *v10; // x4
  System_Collections_IEnumerator_o *RouteData; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x26
  int32_t v13; // w2
  int32_t v14; // w3
  bool v15; // w20
  WarBoardAI__Think_d__11_o *v16; // x19
  WarBoardAI__Think_d__11_o *availableRouteList_5__4; // x26
  struct WarBoardAIRoute_o *v18; // x8
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *allRouteList; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *allRouteList_5__2; // x8
  __int64 v24; // x27
  Il2CppClass *klass; // x8
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *v26; // x22
  int32_t namespaze_high; // w8
  BalanceConfig_c *v28; // x8
  WarBoardAI___c_c *v29; // x0
  _BOOL4 IsWarBoardAiCalcEvalSum; // w21
  struct WarBoardAI___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__11_0; // x23
  Il2CppObject *v33; // x24
  int32_t v34; // w2
  int32_t v35; // w3
  struct WarBoardAI___c_StaticFields *v36; // x0
  ServantStatusBattleListViewItem_o *p__9__11_0; // x0
  Il2CppObject *v38; // x24
  struct WarBoardAI___c_StaticFields *v39; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  System_Object_array *v41; // x22
  System_Collections_Generic_List_object__o *v42; // x24
  WarBoardAI__Think_d__11_o **p_availableRouteList_5__4; // x23
  int32_t v44; // w2
  int32_t v45; // w3
  System_Collections_Generic_HashSet_T__o *v46; // x25
  int32_t v47; // w2
  int32_t v48; // w3
  const MethodInfo *v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  __int64 v52; // x8
  unsigned __int64 v53; // x20
  int32_t pickValue_5__3; // w28
  ServantStatusBattleListViewItem_o *v55; // x25
  System_Collections_ICollection_o *v56; // x26
  System_Collections_Generic_HashSet_T__o *v57; // x27
  System_Func_object__bool__o *v58; // x27
  int32_t v59; // w2
  int32_t v60; // w3
  __int64 v61; // x8
  _QWORD *v62; // x9
  __int64 _2__current_low; // x10
  __int64 v64; // x8
  System_Func_object__bool__o *v65; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v66; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v67; // x0
  System_Object_array *v68; // x0
  int32_t v69; // w2
  int32_t v70; // w3
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *evalValueSortList_5__5; // x8
  System_Collections_Generic_List_Decimal__o *v75; // x21
  const MethodInfo *v76; // x2
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *v77; // x22
  int v78; // w29
  int max_length; // w8
  int v80; // w24
  int v81; // w25
  char v82; // w26
  _BOOL8 v83; // x0
  __int64 v84; // x1
  WarBoardAIRoute_RouteData_o *current; // x22
  WarBoardPieceData_o *actionPiece; // x0
  Il2CppClass *v87; // x8
  float v88; // s12
  _BOOL8 v89; // x0
  __int64 v90; // x1
  WarBoardTacticalTrendEntity_o *v91; // x22
  float BestMagnification; // s8
  float LowestMagnification; // s0
  int value; // w23
  float ImmobilityMagnification; // s0
  BalanceConfig_c *v96; // x0
  float v97; // s8
  System_Decimal_c *v98; // x8
  _BOOL4 v99; // w25
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *v100; // x8
  WarBoardAI__Think_d__11_o *v101; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v102; // x24
  WarBoardAI___c_c *v103; // x0
  System_Decimal_o *v104; // x23
  struct WarBoardAI___c_StaticFields *v105; // x8
  System_Func_T__TResult__o *_9__11_8; // x25
  System_Func_T__TResult__o *_9__11_9; // x25
  Il2CppObject *v108; // x26
  struct WarBoardAI___c_StaticFields *v109; // x0
  int32_t v110; // w2
  int32_t v111; // w3
  System_Decimal_o *v112; // x24
  System_Decimal_o *cctor_finished; // x8
  Il2CppObject *v114; // x26
  struct WarBoardAI___c_StaticFields *v115; // x0
  int32_t v116; // w2
  int32_t v117; // w3
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *v118; // x8
  System_Decimal_o *v119; // x8
  WarBoardAI__Think_d__11_o *v120; // x24
  int32_t flags; // w26
  System_Decimal_o *v122; // x25
  System_Decimal_o *v123; // x0
  System_Decimal_o *v124; // x8
  struct System_Decimal_array *items; // x9
  __int64 size; // x11
  Il2CppObject *v127; // x9
  int32_t v128; // w2
  int32_t v129; // w3
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v130; // x1
  WarBoardAI___c_c *v131; // x0
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x22
  System_Func_T__TResult__o *_9__11_3; // x23
  Il2CppObject *v134; // x24
  struct WarBoardAI___c_StaticFields *v135; // x0
  int32_t v136; // w2
  int32_t v137; // w3
  WarBoardAI_o *v138; // x0
  const MethodInfo *v139; // x2
  __int64 v140; // x2
  __int64 v141; // x3
  __int64 v142; // x4
  __int64 v143; // x0
  ServantStatusBattleListViewItem_o *v144; // x26
  int32_t v145; // w2
  int32_t v146; // w3
  int v147; // w8
  System_Collections_Generic_HashSet_T__o *v148; // x21
  int32_t v149; // w2
  int32_t v150; // w3
  int32_t v151; // w22
  WarBoardAI__Think_d__11_o *v152; // x23
  int32_t v153; // w2
  int32_t v154; // w3
  __int64 v155; // x2
  __int64 v156; // x3
  __int64 v157; // x4
  __int64 v158; // x0
  ServantStatusBattleListViewItem_o *v159; // x26
  int32_t v160; // w2
  int32_t v161; // w3
  __int64 v162; // x0
  int32_t v163; // w2
  int32_t v164; // w3
  __int64 v165; // x0
  int32_t v166; // w2
  int32_t v167; // w3
  __int64 v168; // x0
  int32_t v169; // w2
  int32_t v170; // w3
  WarBoardAI__Think_d__11_o **v172; // [xsp+10h] [xbp-110h]
  Il2CppObject *object; // [xsp+18h] [xbp-108h]
  System_Collections_Generic_HashSet_T__o **v174; // [xsp+20h] [xbp-100h]
  System_Collections_Generic_List_Decimal__o *v175; // [xsp+20h] [xbp-100h]
  Il2CppObject *v176; // [xsp+28h] [xbp-F8h]
  WarBoardAI__Think_d__11_o *v177; // [xsp+30h] [xbp-F0h]
  System_Collections_Generic_List_Enumerator_object__o v178; // [xsp+38h] [xbp-E8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v179; // [xsp+50h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v180; // [xsp+70h] [xbp-B0h] BYREF

  v4 = this;
  if ( (byte_4A58D37 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
    sub_1B885B0(&bool_TypeInfo);
    sub_1B885B0(&System_Decimal_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderByDescending_List_WarBoardAIRoute_RouteData___Decimal___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____76132696);
    sub_1B885B0(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Take_List_WarBoardAIRoute_RouteData____);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_List_WarBoardAIRoute_RouteData____);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__get_Current__);
    sub_1B885B0(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    sub_1B885B0(&System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo);
    sub_1B885B0(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    sub_1B885B0(&System_Func_WarBoardAIRoute_RouteData__float__TypeInfo);
    sub_1B885B0(&System_Func_List_WarBoardAIRoute_RouteData___bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__);
    sub_1B885B0(&System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Decimal__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Decimal___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_Decimal__TypeInfo);
    sub_1B885B0(&Method_WarBoardAI___c__Think_b__11_0__);
    sub_1B885B0(&Method_WarBoardAI___c__Think_b__11_1__);
    sub_1B885B0(&Method_WarBoardAI___c__Think_b__11_3__);
    sub_1B885B0(&Method_WarBoardAI___c__Think_b__11_8__);
    sub_1B885B0(&Method_WarBoardAI___c__Think_b__11_9__);
    sub_1B885B0(&Method_WarBoardAI___c__DisplayClass11_0__Think_b__6__);
    sub_1B885B0(&WarBoardAI___c__DisplayClass11_0_TypeInfo);
    sub_1B885B0(&WarBoardAI___c_TypeInfo);
    this = (WarBoardAI__Think_d__11_o *)sub_1B885B0(&Method_WarBoardAI__Think_b__11_2__);
    byte_4A58D37 = 1;
  }
  memset(&v180, 0, sizeof(v180));
  memset(&v179, 0, sizeof(v179));
  _4__this = v4->fields.__4__this;
  v176 = (Il2CppObject *)_4__this;
  v177 = v4;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_164;
      this = (WarBoardAI__Think_d__11_o *)_4__this->fields.routeClass;
      _4__this->fields.routeIndex = 0;
      _4__this->fields.isEndRoute = 0;
      if ( !this )
        goto LABEL_164;
      v6 = _4__this;
      WarBoardAIRoute__BeforeCreateRouteData((WarBoardAIRoute_o *)this, method);
      routeClass = v6->fields.routeClass;
      if ( !routeClass )
        goto LABEL_164;
      placePieceData = routeClass->fields.placePieceData;
      v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v9,
        (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor__);
      RouteData = WarBoardAIRoute__CreateRouteData(
                    routeClass,
                    placePieceData,
                    0,
                    (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v9,
                    v10);
      v4->fields.__2__current = (Il2CppObject *)RouteData;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B88554(p__2__current, (int32_t)RouteData, v13, v14);
      v15 = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return v15;
    case 1:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_164;
      v18 = _4__this->fields.routeClass;
      if ( !v18 )
        goto LABEL_164;
      allRouteList = v18->fields.allRouteList;
      v4->fields._allRouteList_5__2 = allRouteList;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._allRouteList_5__2, (int32_t)allRouteList, v2, v3);
      allRouteList_5__2 = v4->fields._allRouteList_5__2;
      if ( !allRouteList_5__2 )
        goto LABEL_164;
      if ( !allRouteList_5__2->fields._size )
      {
        v15 = 1;
        LOBYTE(v178.fields._list) = 1;
        v168 = j_il2cpp_value_box_0(bool_TypeInfo, &v178, v20, v21, v22);
        v4->fields.__2__current = (Il2CppObject *)v168;
        v144 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B88554(v144, v168, v169, v170);
        v147 = 2;
        goto LABEL_169;
      }
LABEL_16:
      v24 = sub_1B887FC(WarBoardAI___c__DisplayClass11_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v24, 0LL);
      if ( !v176 )
        goto LABEL_164;
      klass = v176[1].klass;
      if ( !klass )
        goto LABEL_164;
      v26 = v4->fields._allRouteList_5__2;
      if ( !v26 )
        goto LABEL_164;
      namespaze_high = HIDWORD(klass->_1.namespaze);
      if ( namespaze_high >= v26->fields._size )
        namespaze_high = v26->fields._size;
      if ( !namespaze_high )
        namespaze_high = v26->fields._size;
      v4->fields._pickValue_5__3 = namespaze_high;
      v28 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v28 = BalanceConfig_TypeInfo;
        v26 = v4->fields._allRouteList_5__2;
      }
      v29 = WarBoardAI___c_TypeInfo;
      IsWarBoardAiCalcEvalSum = v28->static_fields->IsWarBoardAiCalcEvalSum;
      if ( !WarBoardAI___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
        v29 = WarBoardAI___c_TypeInfo;
      }
      static_fields = v29->static_fields;
      if ( IsWarBoardAiCalcEvalSum )
      {
        _9__11_0 = (System_Func_T__TResult__o *)static_fields->__9__11_0;
        if ( _9__11_0 )
          goto LABEL_39;
        if ( !v29->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v29);
          v29 = WarBoardAI___c_TypeInfo;
        }
        v33 = (Il2CppObject *)v29->static_fields->__9;
        _9__11_0 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo);
        System_Func_object__Decimal____ctor(_9__11_0, v33, Method_WarBoardAI___c__Think_b__11_0__, 0LL);
        v36 = WarBoardAI___c_TypeInfo->static_fields;
        v36->__9__11_0 = (struct System_Func_List_WarBoardAIRoute_RouteData___Decimal__o *)_9__11_0;
        p__9__11_0 = (ServantStatusBattleListViewItem_o *)&v36->__9__11_0;
      }
      else
      {
        _9__11_0 = (System_Func_T__TResult__o *)static_fields->__9__11_1;
        if ( _9__11_0 )
          goto LABEL_39;
        if ( !v29->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v29);
          v29 = WarBoardAI___c_TypeInfo;
        }
        v38 = (Il2CppObject *)v29->static_fields->__9;
        _9__11_0 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo);
        System_Func_object__Decimal____ctor(_9__11_0, v38, Method_WarBoardAI___c__Think_b__11_1__, 0LL);
        v39 = WarBoardAI___c_TypeInfo->static_fields;
        v39->__9__11_1 = (struct System_Func_List_WarBoardAIRoute_RouteData___Decimal__o *)_9__11_0;
        p__9__11_0 = (ServantStatusBattleListViewItem_o *)&v39->__9__11_1;
      }
      sub_1B88554(p__9__11_0, (int32_t)_9__11_0, v34, v35);
LABEL_39:
      v40 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__Decimal_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v26,
                                                                   (System_Func_TSource__TKey__o *)_9__11_0,
                                                                   (const MethodInfo_2EAA284 *)Method_System_Linq_Enumerable_OrderByDescending_List_WarBoardAIRoute_RouteData___Decimal___);
      v41 = System_Linq_Enumerable__ToArray_object_(
              v40,
              (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____);
      v42 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v42,
        (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
      v4->fields._availableRouteList_5__4 = (struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *)v42;
      p_availableRouteList_5__4 = (WarBoardAI__Think_d__11_o **)&v4->fields._availableRouteList_5__4;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._availableRouteList_5__4, (int32_t)v42, v44, v45);
      v46 = (System_Collections_Generic_HashSet_T__o *)sub_1B887FC(System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo);
      System_Collections_Generic_HashSet_object____ctor(
        v46,
        (const MethodInfo_33B9184 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__);
      if ( !v24 )
        goto LABEL_164;
      object = (Il2CppObject *)v24;
      *(_QWORD *)(v24 + 16) = v46;
      v174 = (System_Collections_Generic_HashSet_T__o **)(v24 + 16);
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v24 + 16), (int32_t)v46, v47, v48);
      if ( !v41 )
        goto LABEL_164;
      v52 = *(_QWORD *)&v41->max_length;
      if ( (int)v52 >= 1 )
      {
        v53 = 0LL;
        pickValue_5__3 = v4->fields._pickValue_5__3;
        v55 = (ServantStatusBattleListViewItem_o *)(v24 + 24);
        v172 = (WarBoardAI__Think_d__11_o **)&v4->fields._availableRouteList_5__4;
        do
        {
          if ( v53 >= (unsigned int)v52 )
            goto LABEL_171;
          v56 = (System_Collections_ICollection_o *)v41->m_Items[v53];
          this = (WarBoardAI__Think_d__11_o *)BasicHelper__IsNullOrEmpty(v56, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            this = (WarBoardAI__Think_d__11_o *)BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              this = (WarBoardAI__Think_d__11_o *)BalanceConfig_TypeInfo;
            }
            if ( LOBYTE(this[2].fields._allRouteList_5__2[22].monitor) )
            {
              if ( !v56 )
                goto LABEL_164;
              this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)v56,
                                                    0,
                                                    (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
              if ( !this )
                goto LABEL_164;
              if ( WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)this, 0LL) )
              {
                v57 = *v174;
                this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_List_object___get_Item(
                                                      (System_Collections_Generic_List_object__o *)v56,
                                                      0,
                                                      (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
                if ( !this || !v57 )
                  goto LABEL_164;
                this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_HashSet_object___Add(
                                                      v57,
                                                      *(Il2CppObject **)&this->fields._pickValue_5__3,
                                                      (const MethodInfo_33BA368 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__);
                goto LABEL_69;
              }
              v58 = (System_Func_object__bool__o *)v55->klass;
              if ( !v55->klass )
              {
                v58 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
                System_Func_object__bool____ctor(
                  v58,
                  object,
                  Method_WarBoardAI___c__DisplayClass11_0__Think_b__6__,
                  0LL);
                object[1].monitor = v58;
                p_availableRouteList_5__4 = v172;
                sub_1B88554(v55, (int32_t)v58, v59, v60);
              }
              this = (WarBoardAI__Think_d__11_o *)BasicHelper__Any_object_(
                                                    (System_Collections_Generic_List_T__o *)v56,
                                                    (System_Func_T__bool__o *)v58,
                                                    (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
              if ( ((unsigned __int8)this & 1) != 0 )
                goto LABEL_69;
              this = (WarBoardAI__Think_d__11_o *)BalanceConfig_TypeInfo;
            }
            if ( !LODWORD(this[3].monitor) )
            {
              j_il2cpp_runtime_class_init_0(this);
              this = (WarBoardAI__Think_d__11_o *)BalanceConfig_TypeInfo;
            }
            if ( !BYTE1(this[2].fields._allRouteList_5__2[22].monitor)
              || (this = (WarBoardAI__Think_d__11_o *)WarBoardAI__CheckWasteRoute(
                                                        (WarBoardAI_o *)this,
                                                        (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v56,
                                                        v49),
                  ((unsigned __int8)this & 1) == 0) )
            {
              this = *p_availableRouteList_5__4;
              if ( !*p_availableRouteList_5__4 )
                goto LABEL_164;
              v61 = *(_QWORD *)&this->fields.__1__state;
              v62 = Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__;
              ++HIDWORD(this->fields.__2__current);
              if ( !v61 )
                goto LABEL_164;
              _2__current_low = SLODWORD(this->fields.__2__current);
              if ( (unsigned int)_2__current_low >= *(_DWORD *)(v61 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)v56,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
              }
              else
              {
                v64 = v61 + 8 * _2__current_low;
                LODWORD(this->fields.__2__current) = _2__current_low + 1;
                *(_QWORD *)(v64 + 32) = v56;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v64 + 32), (int32_t)v56, (int32_t)v49, v50);
              }
              availableRouteList_5__4 = *p_availableRouteList_5__4;
              if ( !*p_availableRouteList_5__4 )
                goto LABEL_164;
              if ( pickValue_5__3 <= SLODWORD(availableRouteList_5__4->fields.__2__current) )
                goto LABEL_71;
            }
          }
LABEL_69:
          LODWORD(v52) = v41->max_length;
        }
        while ( (__int64)++v53 < (int)v52 );
      }
      availableRouteList_5__4 = *p_availableRouteList_5__4;
      if ( !*p_availableRouteList_5__4 )
        goto LABEL_164;
LABEL_71:
      v16 = v177;
      if ( SLODWORD(availableRouteList_5__4->fields.__2__current) <= 0 )
      {
        v15 = 1;
        LOBYTE(v178.fields._list) = 1;
        v165 = j_il2cpp_value_box_0(bool_TypeInfo, &v178, v49, v50, v51);
        v177->fields.__2__current = (Il2CppObject *)v165;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v177->fields.__2__current, v165, v166, v167);
        v177->fields.__1__state = 3;
      }
      else
      {
LABEL_72:
        v65 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_List_WarBoardAIRoute_RouteData___bool__TypeInfo);
        System_Func_object__bool____ctor(v65, v176, Method_WarBoardAI__Think_b__11_2__, 0LL);
        v66 = System_Linq_Enumerable__Where_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)availableRouteList_5__4,
                (System_Func_TSource__bool__o *)v65,
                (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_List_WarBoardAIRoute_RouteData____);
        v67 = System_Linq_Enumerable__Take_object_(
                v66,
                v16->fields._pickValue_5__3,
                (const MethodInfo_2EB7498 *)Method_System_Linq_Enumerable_Take_List_WarBoardAIRoute_RouteData____);
        v68 = System_Linq_Enumerable__ToArray_object_(
                v67,
                (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____);
        v16->fields._evalValueSortList_5__5 = (struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *)v68;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v16->fields._evalValueSortList_5__5, (int32_t)v68, v69, v70);
        evalValueSortList_5__5 = v16->fields._evalValueSortList_5__5;
        if ( !evalValueSortList_5__5 )
          goto LABEL_164;
        v4 = v16;
        if ( !*(_QWORD *)&evalValueSortList_5__5->max_length )
        {
          v15 = 1;
          LOBYTE(v178.fields._list) = 1;
          v162 = j_il2cpp_value_box_0(bool_TypeInfo, &v178, v71, v72, v73);
          v16->fields.__2__current = (Il2CppObject *)v162;
          v144 = (ServantStatusBattleListViewItem_o *)&v16->fields.__2__current;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v16->fields.__2__current, v162, v163, v164);
          v147 = 4;
          goto LABEL_169;
        }
LABEL_74:
        v75 = (System_Collections_Generic_List_Decimal__o *)sub_1B887FC(System_Collections_Generic_List_Decimal__TypeInfo);
        System_Collections_Generic_List_Decimal____ctor(
          v75,
          (const MethodInfo_34D0780 *)Method_System_Collections_Generic_List_Decimal___ctor__);
        v77 = v4->fields._evalValueSortList_5__5;
        if ( !v77 )
          goto LABEL_164;
        v78 = 0;
        v175 = v75;
        while ( 1 )
        {
          max_length = v77->max_length;
          if ( v78 >= max_length )
            break;
          if ( v78 >= (unsigned int)max_length )
            goto LABEL_171;
          this = (WarBoardAI__Think_d__11_o *)v77->m_Items[v78];
          if ( !this )
            goto LABEL_164;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v178,
            (System_Collections_Generic_List_object__o *)this,
            (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
          v80 = 0;
          v81 = 0;
          v82 = 0;
          v180 = v178;
          while ( 1 )
          {
            v83 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v180,
                    (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
            if ( !v83 )
              break;
            current = (WarBoardAIRoute_RouteData_o *)v180.fields._current;
            if ( !v180.fields._current )
              sub_1B8880C(v83, v84);
            if ( WarBoardAIRoute_RouteData__HasFlag((WarBoardAIRoute_RouteData_o *)v180.fields._current, 4LL, 0LL) )
            {
              actionPiece = current->fields.actionPiece;
              if ( actionPiece )
                v81 |= WarBoardPieceData__get_isMaster(actionPiece, 0LL);
              v82 = 1;
            }
            v80 |= WarBoardAIRoute_RouteData__HasFlag(current, 8LL, 0LL);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v180,
            (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
          if ( !v176 )
            goto LABEL_164;
          v87 = v176[1].klass;
          if ( !v87 )
            goto LABEL_164;
          this = (WarBoardAI__Think_d__11_o *)v87->_1.klass;
          if ( !this )
            goto LABEL_164;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v178,
            (System_Collections_Generic_List_object__o *)this,
            (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__GetEnumerator__);
          v88 = 0.0;
          v179 = v178;
          while ( 1 )
          {
            v89 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v179,
                    (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__MoveNext__);
            if ( !v89 )
              break;
            v91 = (WarBoardTacticalTrendEntity_o *)v179.fields._current;
            if ( !v179.fields._current )
              sub_1B8880C(v89, v90);
            switch ( HIDWORD(v179.fields._current[1].klass) )
            {
              case 0:
                if ( v78 < SLODWORD(v179.fields._current[1].monitor) )
                {
                  BestMagnification = WarBoardTacticalTrendEntity__GetBestMagnification(
                                        (WarBoardTacticalTrendEntity_o *)v179.fields._current,
                                        0LL);
                  LowestMagnification = WarBoardTacticalTrendEntity__GetLowestMagnification(v91, 0LL);
                  value = v91->fields.value;
                  ImmobilityMagnification = WarBoardTacticalTrendEntity__GetBestMagnification(v91, 0LL)
                                          - (float)((float)((float)(BestMagnification - LowestMagnification)
                                                          / (float)((float)value + -1.0))
                                                  * (float)v78);
                  goto LABEL_102;
                }
                break;
              case 1:
                if ( (v82 & 1) != 0 )
                  goto LABEL_101;
                break;
              case 4:
                if ( (v81 & 1) != 0 )
                  goto LABEL_101;
                break;
              case 5:
                if ( (v80 & 1) != 0 )
                {
LABEL_101:
                  ImmobilityMagnification = WarBoardTacticalTrendEntity__GetImmobilityMagnification(
                                              (WarBoardTacticalTrendEntity_o *)v179.fields._current,
                                              0LL);
LABEL_102:
                  v88 = v88 + ImmobilityMagnification;
                }
                break;
              default:
                continue;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v179,
            (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__Dispose__);
          v4 = v177;
          v96 = BalanceConfig_TypeInfo;
          if ( v88 == 0.0 )
            v97 = 1.0;
          else
            v97 = v88;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v96 = BalanceConfig_TypeInfo;
          }
          v98 = System_Decimal_TypeInfo;
          v99 = v96->static_fields->IsWarBoardAiCalcEvalSum;
          if ( !System_Decimal_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
          this = (WarBoardAI__Think_d__11_o *)System_Decimal__op_Explicit((System_Decimal_o *)v98, v97, 0LL);
          v100 = v177->fields._evalValueSortList_5__5;
          if ( !v100 )
            goto LABEL_164;
          if ( v78 >= v100->max_length )
            goto LABEL_171;
          v101 = this;
          v102 = (System_Collections_Generic_IEnumerable_TSource__o *)v100->m_Items[v78];
          v103 = WarBoardAI___c_TypeInfo;
          v104 = (System_Decimal_o *)method;
          if ( !WarBoardAI___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
            v103 = WarBoardAI___c_TypeInfo;
          }
          v105 = v103->static_fields;
          if ( v99 )
          {
            _9__11_8 = (System_Func_T__TResult__o *)v105->__9__11_8;
            if ( !_9__11_8 )
            {
              if ( !v103->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v103);
                v103 = WarBoardAI___c_TypeInfo;
              }
              v108 = (Il2CppObject *)v103->static_fields->__9;
              _9__11_8 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
              System_Func_object__Decimal____ctor(_9__11_8, v108, Method_WarBoardAI___c__Think_b__11_8__, 0LL);
              v109 = WarBoardAI___c_TypeInfo->static_fields;
              v109->__9__11_8 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_8;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v109->__9__11_8, (int32_t)_9__11_8, v110, v111);
              v4 = v177;
            }
            v112 = System_Linq_Enumerable__Sum_object__48984604(
                     (System_Decimal_o *)&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___,
                     v102,
                     (System_Func_TSource__Decimal__o *)_9__11_8,
                     (const MethodInfo_2EB721C *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
            cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
            if ( !(_DWORD)cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
          }
          else
          {
            _9__11_9 = (System_Func_T__TResult__o *)v105->__9__11_9;
            if ( !_9__11_9 )
            {
              if ( !v103->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v103);
                v103 = WarBoardAI___c_TypeInfo;
              }
              v114 = (Il2CppObject *)v103->static_fields->__9;
              _9__11_9 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
              System_Func_object__Decimal____ctor(_9__11_9, v114, Method_WarBoardAI___c__Think_b__11_9__, 0LL);
              v115 = WarBoardAI___c_TypeInfo->static_fields;
              v115->__9__11_9 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_9;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v115->__9__11_9, (int32_t)_9__11_9, v116, v117);
              v4 = v177;
            }
            this = (WarBoardAI__Think_d__11_o *)System_Linq_Enumerable__Sum_object__48984604(
                                                  (System_Decimal_o *)&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___,
                                                  v102,
                                                  (System_Func_TSource__Decimal__o *)_9__11_9,
                                                  (const MethodInfo_2EB721C *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
            v118 = v4->fields._evalValueSortList_5__5;
            if ( !v118 )
              goto LABEL_164;
            if ( v78 >= v118->max_length )
              goto LABEL_171;
            v119 = (System_Decimal_o *)v118->m_Items[v78];
            if ( !v119 )
              goto LABEL_164;
            v120 = this;
            flags = v119[1].fields.flags;
            v122 = (System_Decimal_o *)method;
            if ( !System_Decimal_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
            v123 = System_Decimal__op_Implicit_62914408(v119, flags, 0LL);
            v4 = v177;
            v112 = System_Decimal__op_Division(v124, (System_Decimal_o *)v120, v122, (const MethodInfo *)v123);
          }
          this = (WarBoardAI__Think_d__11_o *)System_Decimal__op_Multiply(
                                                cctor_finished,
                                                (System_Decimal_o *)v101,
                                                v104,
                                                (const MethodInfo *)v112);
          v75 = v175;
          if ( v175 )
          {
            items = v175->fields._items;
            ++v175->fields._version;
            if ( items )
            {
              size = v175->fields._size;
              v76 = method;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_Decimal___AddWithResize(
                  v175,
                  (System_Decimal_o *)this,
                  (const MethodInfo_34D1010 *)method);
              }
              else
              {
                v127 = &items->obj + size;
                v175->fields._size = size + 1;
                v127[2].klass = (Il2CppClass *)this;
                v127[2].monitor = (void *)method;
              }
              v77 = v4->fields._evalValueSortList_5__5;
              ++v78;
              if ( v77 )
                continue;
            }
          }
          goto LABEL_164;
        }
        if ( !v176 )
          goto LABEL_164;
        this = (WarBoardAI__Think_d__11_o *)WarBoardAI__GetRandomIndex((WarBoardAI_o *)this, v75, v76);
        if ( (unsigned int)this >= v77->max_length )
LABEL_171:
          sub_1B88814(this, method);
        v130 = v77->m_Items[(int)this];
        v176[1].monitor = v130;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v176[1].monitor, (int32_t)v130, v128, v129);
        v131 = WarBoardAI___c_TypeInfo;
        monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v176[1].monitor;
        if ( !WarBoardAI___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
          v131 = WarBoardAI___c_TypeInfo;
        }
        _9__11_3 = (System_Func_T__TResult__o *)v131->static_fields->__9__11_3;
        if ( !_9__11_3 )
        {
          if ( !v131->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v131);
            v131 = WarBoardAI___c_TypeInfo;
          }
          v134 = (Il2CppObject *)v131->static_fields->__9;
          _9__11_3 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_WarBoardAIRoute_RouteData__float__TypeInfo);
          System_Func_object__float____ctor(_9__11_3, v134, Method_WarBoardAI___c__Think_b__11_3__, 0LL);
          v135 = WarBoardAI___c_TypeInfo->static_fields;
          v135->__9__11_3 = (struct System_Func_WarBoardAIRoute_RouteData__float__o *)_9__11_3;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v135->__9__11_3, (int32_t)_9__11_3, v136, v137);
        }
        System_Linq_Enumerable__Sum_object__48984748(
          monitor,
          (System_Func_TSource__float__o *)_9__11_3,
          (const MethodInfo_2EB72AC *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____76132696);
        if ( WarBoardAI__CheckWasteRoute(
               v138,
               (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v176[1].monitor,
               v139) )
        {
          v15 = 1;
          LOBYTE(v178.fields._list) = 1;
          v143 = j_il2cpp_value_box_0(bool_TypeInfo, &v178, v140, v141, v142);
          v4->fields.__2__current = (Il2CppObject *)v143;
          v144 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
          sub_1B88554(v144, v143, v145, v146);
          v147 = 5;
LABEL_169:
          *(_DWORD *)&v144[-1].fields.isMine = v147;
          return v15;
        }
LABEL_152:
        v148 = (System_Collections_Generic_HashSet_T__o *)sub_1B887FC(System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo);
        System_Collections_Generic_HashSet_object____ctor(
          v148,
          (const MethodInfo_33B9184 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__);
        if ( !v176 || (this = (WarBoardAI__Think_d__11_o *)v176[1].monitor) == 0LL )
LABEL_164:
          sub_1B8880C(this, method);
        v151 = LODWORD(this->fields.__2__current) - 1;
        if ( v151 >= 0 )
        {
          while ( 1 )
          {
            this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)this,
                                                  v151,
                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
            if ( !this )
              goto LABEL_164;
            method = *(const MethodInfo **)&this->fields._pickValue_5__3;
            v152 = this;
            if ( method )
            {
              if ( !v148 )
                goto LABEL_164;
              if ( !System_Collections_Generic_HashSet_object___Contains(
                      v148,
                      (Il2CppObject *)method,
                      (const MethodInfo_33B9878 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__)
                && !WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)v152, 0LL) )
              {
                System_Collections_Generic_HashSet_object___Add(
                  v148,
                  *(Il2CppObject **)&v152->fields._pickValue_5__3,
                  (const MethodInfo_33BA368 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__);
                this = *(WarBoardAI__Think_d__11_o **)&v152->fields._pickValue_5__3;
                if ( !this )
                  goto LABEL_164;
                WarBoardPieceData__SetPrevAiRoute((WarBoardPieceData_o *)this, (WarBoardAIRoute_RouteData_o *)v152, 0LL);
              }
            }
            if ( --v151 < 0 )
              break;
            this = (WarBoardAI__Think_d__11_o *)v176[1].monitor;
            if ( !this )
              goto LABEL_164;
          }
        }
        v4->fields._availableRouteList_5__4 = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._availableRouteList_5__4, 0, v149, v150);
        v4->fields._evalValueSortList_5__5 = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._evalValueSortList_5__5, 0, v153, v154);
        LOBYTE(v178.fields._list) = 0;
        v158 = j_il2cpp_value_box_0(bool_TypeInfo, &v178, v155, v156, v157);
        v4->fields.__2__current = (Il2CppObject *)v158;
        v159 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B88554(v159, v158, v160, v161);
        *(_DWORD *)&v159[-1].fields.isMine = 6;
        return 1;
      }
      return v15;
    case 2:
      v4->fields.__1__state = -1;
      goto LABEL_16;
    case 3:
      v16 = v4;
      availableRouteList_5__4 = (WarBoardAI__Think_d__11_o *)v4->fields._availableRouteList_5__4;
      v16->fields.__1__state = -1;
      goto LABEL_72;
    case 4:
      v4->fields.__1__state = -1;
      goto LABEL_74;
    case 5:
      v4->fields.__1__state = -1;
      goto LABEL_152;
    case 6:
      v15 = 0;
      v4->fields.__1__state = -1;
      return v15;
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_WarBoardAI__Think_d__11_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A58D2F & 1) == 0 )
  {
    sub_1B885B0(&WarBoardAI___c_TypeInfo);
    byte_4A58D2F = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(WarBoardAI___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  WarBoardAI___c_TypeInfo->static_fields->__9 = (struct WarBoardAI___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)WarBoardAI___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A58D30 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
    sub_1B885B0(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    sub_1B885B0(&Method_WarBoardAI___c__Think_b__11_4__);
    sub_1B885B0(&WarBoardAI___c_TypeInfo);
    byte_4A58D30 = 1;
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
    _9__11_4 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    System_Func_object__Decimal____ctor(_9__11_4, v8, Method_WarBoardAI___c__Think_b__11_4__, 0LL);
    v9 = WarBoardAI___c_TypeInfo->static_fields;
    v9->__9__11_4 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_4;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v9->__9__11_4, (int32_t)_9__11_4, v10, v11);
  }
  return System_Linq_Enumerable__Sum_object__48984604(
           (System_Decimal_o *)static_fields,
           (System_Collections_Generic_IEnumerable_TSource__o *)x,
           (System_Func_TSource__Decimal__o *)_9__11_4,
           (const MethodInfo_2EB721C *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_Decimal_o *v12; // x0
  System_Decimal_o *v13; // x1
  System_Decimal_o *v14; // x20
  int32_t size; // w19
  System_Decimal_o *v16; // x21
  System_Decimal_o *cctor_finished; // x8
  System_Decimal_o *v18; // x2
  System_Decimal_o *v19; // x8

  if ( (byte_4A58D32 & 1) == 0 )
  {
    sub_1B885B0(&System_Decimal_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
    sub_1B885B0(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__);
    sub_1B885B0(&Method_WarBoardAI___c__Think_b__11_5__);
    sub_1B885B0(&WarBoardAI___c_TypeInfo);
    byte_4A58D32 = 1;
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
    _9__11_5 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    System_Func_object__Decimal____ctor(_9__11_5, v8, Method_WarBoardAI___c__Think_b__11_5__, 0LL);
    v9 = WarBoardAI___c_TypeInfo->static_fields;
    v9->__9__11_5 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_5;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v9->__9__11_5, (int32_t)_9__11_5, v10, v11);
  }
  v12 = System_Linq_Enumerable__Sum_object__48984604(
          (System_Decimal_o *)static_fields,
          (System_Collections_Generic_IEnumerable_TSource__o *)x,
          (System_Func_TSource__Decimal__o *)_9__11_5,
          (const MethodInfo_2EB721C *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
  if ( !x )
    sub_1B8880C(v12, v13);
  v14 = v12;
  size = x->fields._size;
  v16 = v13;
  cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
  if ( !(_DWORD)cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  v18 = System_Decimal__op_Implicit_62914408(cctor_finished, size, 0LL);
  return System_Decimal__op_Division(v19, v14, v16, (const MethodInfo *)v18);
}


float __fastcall WarBoardAI___c___Think_b__11_3(
        WarBoardAI___c_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
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

  if ( (byte_4A58D31 & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_1B885B0(&System_Decimal_TypeInfo);
    byte_4A58D31 = 1;
  }
  if ( !y )
    sub_1B8880C(this, y);
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

  if ( (byte_4A58D33 & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_1B885B0(&System_Decimal_TypeInfo);
    byte_4A58D33 = 1;
  }
  if ( !y )
    sub_1B8880C(this, y);
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
    sub_1B8880C(this, 0LL);
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

  if ( (byte_4A58D34 & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_1B885B0(&System_Decimal_TypeInfo);
    byte_4A58D34 = 1;
  }
  if ( !y )
    sub_1B8880C(this, y);
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

  if ( (byte_4A58D35 & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_1B885B0(&System_Decimal_TypeInfo);
    byte_4A58D35 = 1;
  }
  if ( !y )
    sub_1B8880C(this, y);
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
  if ( (byte_4A58D36 & 1) == 0 )
  {
    this = (WarBoardAI___c__DisplayClass11_0_o *)sub_1B885B0(&Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__);
    byte_4A58D36 = 1;
  }
  if ( !x || (this = (WarBoardAI___c__DisplayClass11_0_o *)v4->fields.notActionPieceHash) == 0LL )
    sub_1B8880C(this, x);
  return System_Collections_Generic_HashSet_object___Contains(
           (System_Collections_Generic_HashSet_T__o *)this,
           (Il2CppObject *)x->fields.basePiece,
           (const MethodInfo_33B9878 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__);
}