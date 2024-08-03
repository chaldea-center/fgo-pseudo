void __fastcall WarBoardAI___ctor(WarBoardAI_o *this, WarBoardStageNpcEntity_o *npc, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  WarBoardAIRoute_o *v7; // x21
  const MethodInfo *v8; // x2
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_49FA010 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardAIRoute_TypeInfo, npc);
    byte_49FA010 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v7 = (WarBoardAIRoute_o *)sub_1B64314(WarBoardAIRoute_TypeInfo, v5, v6);
  WarBoardAIRoute___ctor(v7, npc, v8);
  this->fields.routeClass = v7;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v7, v9, v10);
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
    sub_1B64324(0LL);
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
  System_Collections_Generic_Dictionary_int__object__o *v10; // x20
  Il2CppObject *Item; // x0
  int32_t size; // w8
  bool v13; // w24
  IWarBoardAIRouteWaste_c **v14; // x28
  int32_t v15; // w21
  Il2CppObject *v16; // x23
  Il2CppClass *klass; // x8
  Il2CppObject *methods; // x22
  Il2CppClass *v19; // x9
  Il2CppClass *v20; // x8
  Il2CppClass *v21; // x8
  Il2CppClass *v22; // x8
  Il2CppClass *v23; // x8
  IWarBoardAIRouteWaste_c *v24; // x1
  __int64 v25; // x9
  IWarBoardAIRouteWaste_c **p_offset; // x10
  __int64 p_method; // x0
  Il2CppClass *v28; // x8
  IWarBoardAIRouteWaste_c *v29; // x1
  __int64 v30; // x9
  IWarBoardAIRouteWaste_c **v31; // x10
  __int64 v32; // x0
  Il2CppClass *v33; // x8
  IWarBoardAIRouteWaste_c **v34; // x10
  int monitor_high; // w28
  IWarBoardAIRouteWaste_c *v36; // x1
  __int64 v37; // x9
  IWarBoardAIRouteWaste_c **v38; // x29
  int *v39; // x10
  __int64 v40; // x0
  bool v41; // zf
  Il2CppClass *v42; // x8
  int monitor; // w28
  IWarBoardAIRouteWaste_c *v44; // x1
  __int64 v45; // x9
  IWarBoardAIRouteWaste_c **v46; // x10
  __int64 v47; // x0
  Il2CppClass *v48; // x8
  IWarBoardAIRouteWaste_c *v49; // x1
  __int64 v50; // x9
  IWarBoardAIRouteWaste_c **v51; // x10
  __int64 v52; // x0
  int32_t v53; // w8

  if ( (byte_49FA012 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__ContainsKey__, checkRoute);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ctor__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__set_Item__, v5);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__TypeInfo, v6);
    sub_1B640C8(&IWarBoardAIRouteWaste_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__, v9);
    byte_49FA012 = 1;
  }
  v10 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__TypeInfo,
                                                                  checkRoute,
                                                                  method);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v10,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ctor__);
  if ( !checkRoute )
    goto LABEL_65;
  size = checkRoute->fields._size;
  v13 = size > 0;
  if ( size >= 1 )
  {
    v14 = &IWarBoardAIRouteWaste_TypeInfo;
    v15 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)checkRoute,
               v15,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
      if ( !Item )
        break;
      v16 = Item;
      if ( Item[3].klass )
      {
        Item = (Il2CppObject *)WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)Item, 0LL);
        if ( ((unsigned __int8)Item & 1) == 0 )
        {
          if ( v15 < 1 )
            goto LABEL_15;
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)checkRoute,
                   v15 - 1,
                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
          if ( !Item )
            goto LABEL_15;
          klass = Item[3].klass;
          methods = Item;
          if ( !klass )
            break;
          v19 = v16[3].klass;
          if ( !v19 )
            break;
          if ( *(&klass->_1.byval_arg.bits + 1) != *(&v19->_1.byval_arg.bits + 1)
            || (Item = (Il2CppObject *)WarBoardAIRoute_RouteData__get_notAction(
                                         (WarBoardAIRoute_RouteData_o *)Item,
                                         0LL),
                ((unsigned __int8)Item & 1) != 0) )
          {
LABEL_15:
            v20 = v16[3].klass;
            if ( !v20 || !v10 )
              break;
            Item = (Il2CppObject *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                     v10,
                                     HIDWORD(v20->_1.namespaze),
                                     (const MethodInfo_3123B78 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__ContainsKey__);
            if ( ((unsigned __int8)Item & 1) != 0 )
            {
              methods = 0LL;
            }
            else
            {
              v21 = v16[3].klass;
              if ( !v21 )
                break;
              methods = (Il2CppObject *)v21->_1.methods;
            }
          }
          v22 = v16[3].klass;
          if ( !v22 || !v10 )
            break;
          System_Collections_Generic_Dictionary_int__object___set_Item(
            v10,
            HIDWORD(v22->_1.namespaze),
            v16,
            (const MethodInfo_3123970 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__set_Item__);
          if ( methods && ((__int64)v16[1].klass & 0x10000002) == 0 )
          {
            v23 = methods->klass;
            v24 = *v14;
            v25 = *(unsigned __int16 *)(&methods->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&methods->klass->_2.bitflags2 + 3) )
            {
              p_offset = (IWarBoardAIRouteWaste_c **)&v23->_1.interfaceOffsets->offset;
              while ( *(p_offset - 1) != v24 )
              {
                --v25;
                p_offset += 2;
                if ( !v25 )
                  goto LABEL_29;
              }
              p_method = (__int64)&v23->vtable[*(_DWORD *)p_offset + 2].method;
            }
            else
            {
LABEL_29:
              p_method = sub_1BB60A8(methods, v24, 2LL);
            }
            if ( ((*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))p_method)(methods, *(_QWORD *)(p_method + 8)) & 2) == 0 )
            {
              v28 = methods->klass;
              v29 = *v14;
              v30 = *(unsigned __int16 *)(&methods->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&methods->klass->_2.bitflags2 + 3) )
              {
                v31 = (IWarBoardAIRouteWaste_c **)&v28->_1.interfaceOffsets->offset;
                while ( *(v31 - 1) != v29 )
                {
                  --v30;
                  v31 += 2;
                  if ( !v30 )
                    goto LABEL_36;
                }
                v32 = (__int64)&v28->vtable[*(_DWORD *)v31 + 2].method;
              }
              else
              {
LABEL_36:
                v32 = sub_1BB60A8(methods, v29, 2LL);
              }
              if ( ((*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v32)(methods, *(_QWORD *)(v32 + 8)) & 0x10000000) == 0 )
              {
                v33 = methods->klass;
                v34 = v14;
                monitor_high = HIDWORD(v16[1].monitor);
                v36 = *v34;
                v37 = *(unsigned __int16 *)(&methods->klass->_2.bitflags2 + 3);
                v38 = v34;
                if ( *(_WORD *)(&methods->klass->_2.bitflags2 + 3) )
                {
                  v39 = &v33->_1.interfaceOffsets->offset;
                  while ( *((IWarBoardAIRouteWaste_c **)v39 - 1) != v36 )
                  {
                    --v37;
                    v39 += 4;
                    if ( !v37 )
                      goto LABEL_43;
                  }
                  v40 = (__int64)&v33->vtable[*v39].method;
                }
                else
                {
LABEL_43:
                  v40 = sub_1BB60A8(methods, v36, 0LL);
                }
                v41 = monitor_high == (*(unsigned int (__fastcall **)(Il2CppObject *, _QWORD))v40)(
                                        methods,
                                        *(_QWORD *)(v40 + 8));
                v14 = v38;
                if ( v41 )
                {
                  v42 = methods->klass;
                  monitor = (int)v16[1].monitor;
                  v44 = *v38;
                  v45 = *(unsigned __int16 *)(&methods->klass->_2.bitflags2 + 3);
                  if ( *(_WORD *)(&methods->klass->_2.bitflags2 + 3) )
                  {
                    v46 = (IWarBoardAIRouteWaste_c **)&v42->_1.interfaceOffsets->offset;
                    while ( *(v46 - 1) != v44 )
                    {
                      --v45;
                      v46 += 2;
                      if ( !v45 )
                        goto LABEL_51;
                    }
                    v47 = (__int64)&v42->vtable[*(_DWORD *)v46 + 1].method;
                  }
                  else
                  {
LABEL_51:
                    v47 = sub_1BB60A8(methods, v44, 1LL);
                  }
                  v41 = monitor == (*(unsigned int (__fastcall **)(Il2CppObject *, _QWORD))v47)(
                                     methods,
                                     *(_QWORD *)(v47 + 8));
                  v14 = v38;
                  if ( v41 && !WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)v16, 0LL) )
                  {
                    v48 = methods->klass;
                    v49 = *v38;
                    v50 = *(unsigned __int16 *)(&methods->klass->_2.bitflags2 + 3);
                    if ( *(_WORD *)(&methods->klass->_2.bitflags2 + 3) )
                    {
                      v51 = (IWarBoardAIRouteWaste_c **)&v48->_1.interfaceOffsets->offset;
                      while ( *(v51 - 1) != v49 )
                      {
                        --v50;
                        v51 += 2;
                        if ( !v50 )
                          goto LABEL_60;
                      }
                      v52 = (__int64)&v48->vtable[*(_DWORD *)v51 + 3].method;
                    }
                    else
                    {
LABEL_60:
                      v52 = sub_1BB60A8(methods, v49, 3LL);
                    }
                    if ( ((*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v52)(methods, *(_QWORD *)(v52 + 8)) & 1) == 0 )
                      return v13;
                  }
                }
              }
            }
          }
        }
      }
      v53 = checkRoute->fields._size;
      v13 = ++v15 < v53;
      if ( v15 >= v53 )
        return v13;
    }
LABEL_65:
    sub_1B64324(Item);
  }
  return v13;
}


void __fastcall WarBoardAI__Clear(WarBoardAI_o *this, const MethodInfo *method)
{
  WarBoardAIRoute_o *routeClass; // x0

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_1B64324(0LL);
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
  int32_t v13; // [xsp+Ch] [xbp-44h] BYREF
  int32_t v14; // [xsp+18h] [xbp-38h] BYREF
  int32_t v15; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_49FA015 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&forceId);
    sub_1B640C8(&StringLiteral_24933/*"{0},{1},{2}"*/, v8);
    byte_49FA015 = 1;
  }
  v15 = forceId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
  v14 = groupId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v13 = index;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return System_String__Format_61389836((System_String_o *)StringLiteral_24933/*"{0},{1},{2}"*/, v9, v10, v11, 0LL);
}


bool __fastcall WarBoardAI__Execute(WarBoardAI_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *executeRoute; // x0
  int32_t routeIndex; // w1
  System_Collections_Generic_List_object__o *Item; // x0
  System_Collections_Generic_List_object__o *v9; // x8
  WarBoardPieceData_o *monitor; // x20
  int32_t v11; // w8
  int32_t v12; // w8
  bool v13; // w22
  WarBoardManager_o *v15; // x21
  const MethodInfo *v16; // x1
  int32_t version; // w22
  int32_t v18; // w21
  WarBoardPieceData_o *Piece_35061152; // x0
  System_Int32_array *v20; // x21
  WarBoardManager_o *v21; // x21
  int32_t v22; // w8
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v23; // x9

  if ( (byte_49FA013 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    sub_1B640C8(&WarBoardAIManager_TypeInfo, v5);
    byte_49FA013 = 1;
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
                                                        (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
  if ( !Item )
    goto LABEL_40;
  v9 = Item;
  Item = (System_Collections_Generic_List_object__o *)this->fields.executeRoute;
  if ( !Item )
    goto LABEL_40;
  monitor = (WarBoardPieceData_o *)v9[1].monitor;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                        Item,
                                                        this->fields.routeIndex,
                                                        (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
  if ( !Item )
    goto LABEL_40;
  Item = (System_Collections_Generic_List_object__o *)WarBoardAIRoute_RouteData__get_notAction(
                                                        (WarBoardAIRoute_RouteData_o *)Item,
                                                        0LL);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    v11 = this->fields.routeIndex;
    this->fields.isEndPhase = 0;
    v12 = v11 + 1;
    this->fields.routeIndex = v12;
    goto LABEL_37;
  }
  Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this->fields.executeRoute )
    goto LABEL_40;
  v15 = (WarBoardManager_o *)Item;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)this->fields.executeRoute,
                                                        this->fields.routeIndex,
                                                        (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
  if ( !Item )
    goto LABEL_40;
  version = Item->fields._version;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  Item = (System_Collections_Generic_List_object__o *)WarBoardAIManager__GetSquare(version, v16);
  if ( !v15 )
    goto LABEL_40;
  WarBoardManager__CheckSelectSquare(v15, monitor, (WarBoardSquareData_o *)Item, 1, 0LL);
  Item = (System_Collections_Generic_List_object__o *)this->fields.executeRoute;
  if ( !Item )
    goto LABEL_40;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                        Item,
                                                        this->fields.routeIndex,
                                                        (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
                                                        (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
                                                          (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
    if ( !Item )
      goto LABEL_40;
    v18 = Item->fields._version;
    Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Item )
      goto LABEL_40;
    Item = (System_Collections_Generic_List_object__o *)Item[11].klass;
    if ( !Item )
      goto LABEL_40;
    Piece_35061152 = WarBoardData__GetPiece_35061152((WarBoardData_o *)Item, v18, 0LL);
    if ( Piece_35061152 )
    {
      if ( WarBoardPieceData__get_isServant(Piece_35061152, 0LL) )
      {
        Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( Item )
        {
          Item = (System_Collections_Generic_List_object__o *)Item[11].klass;
          if ( Item )
          {
            v20 = WarBoardData__GetInRangeSquareIndecies((WarBoardData_o *)Item, v18, 1, 0, 0LL);
            Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
            if ( Item )
            {
              WarBoardManager__DispPartyBuff((WarBoardManager_o *)Item, v20, 0LL);
              goto LABEL_33;
            }
          }
        }
LABEL_40:
        sub_1B64324(Item);
      }
    }
  }
LABEL_33:
  Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this->fields.executeRoute )
    goto LABEL_40;
  v21 = (WarBoardManager_o *)Item;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)this->fields.executeRoute,
                                                        this->fields.routeIndex,
                                                        (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
  if ( !Item || !v21 )
    goto LABEL_40;
  v13 = 1;
  Item = (System_Collections_Generic_List_object__o *)WarBoardManager__PieceAction_35202272(
                                                        v21,
                                                        monitor,
                                                        Item->fields._version,
                                                        0LL,
                                                        1,
                                                        0LL);
  v22 = this->fields.routeIndex;
  this->fields.isEndPhase = (unsigned __int8)Item & 1;
  v12 = v22 + 1;
  this->fields.routeIndex = v12;
  if ( ((unsigned __int8)Item & 1) != 0 )
    return v13;
LABEL_37:
  v23 = this->fields.executeRoute;
  if ( !v23 )
    goto LABEL_40;
  v13 = 1;
  if ( v23->fields._size <= v12 )
    this->fields.isEndRoute = 1;
  return v13;
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
  WarBoardAI___c_c *v11; // x0
  struct WarBoardAI___c_StaticFields *static_fields; // x8
  System_Func_Decimal__Decimal__o *_9__14_0; // x20
  Il2CppObject *v14; // x21
  struct WarBoardAI___c_StaticFields *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  const MethodInfo *v18; // x1
  System_Decimal_o *v19; // x20
  const MethodInfo *v20; // x21
  System_Decimal_o *cctor_finished; // x8
  System_Decimal_o *v22; // x20
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x21
  float v25; // s0
  float v26; // s0
  System_Decimal_o *v27; // x8
  System_Decimal_o *v28; // x0
  System_Decimal_o *v29; // x1
  System_Decimal_o *size; // x8
  MethodInfo *v31; // x21
  System_Decimal_o *v32; // x22
  int32_t v33; // w20
  System_Decimal_o *Item; // x23
  System_Decimal_o *v35; // x1
  System_Decimal_o *v36; // x24
  System_Decimal_o *v37; // x8
  System_Decimal_o *v38; // x23
  System_Decimal_o *v39; // x8
  System_Decimal_o *v40; // x0
  System_Decimal_o *v41; // x1

  if ( (byte_49FA014 & 1) == 0 )
  {
    sub_1B640C8(&System_Decimal_TypeInfo, weightTable);
    sub_1B640C8(&Method_System_Linq_Enumerable_Sum_Decimal___, v4);
    sub_1B640C8(&System_Func_Decimal__Decimal__TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Decimal__get_Count__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Decimal__get_Item__, v7);
    sub_1B640C8(&System_Math_TypeInfo, v8);
    sub_1B640C8(&Method_WarBoardAI___c__GetRandomIndex_b__14_0__, v9);
    sub_1B640C8(&WarBoardAI___c_TypeInfo, v10);
    byte_49FA014 = 1;
  }
  v11 = WarBoardAI___c_TypeInfo;
  if ( !WarBoardAI___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
    v11 = WarBoardAI___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__14_0 = static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = WarBoardAI___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__14_0 = (System_Func_Decimal__Decimal__o *)sub_1B64314(
                                                    System_Func_Decimal__Decimal__TypeInfo,
                                                    weightTable,
                                                    method);
    System_Func_Decimal__Decimal____ctor(_9__14_0, v14, Method_WarBoardAI___c__GetRandomIndex_b__14_0__, 0LL);
    v15 = WarBoardAI___c_TypeInfo->static_fields;
    v15->__9__14_0 = _9__14_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v15->__9__14_0, (int32_t)_9__14_0, v16, v17);
  }
  v19 = System_Linq_Enumerable__Sum_Decimal_(
          (System_Decimal_o *)static_fields,
          (System_Collections_Generic_IEnumerable_TSource__o *)weightTable,
          (System_Func_TSource__Decimal__o *)_9__14_0,
          (const MethodInfo_2E7004C *)Method_System_Linq_Enumerable_Sum_Decimal___);
  v20 = v18;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !byte_49FA068 )
  {
    sub_1B640C8(&System_Decimal_TypeInfo, v18);
    byte_49FA068 = 1;
  }
  cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
  if ( !(_DWORD)cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  v22 = System_Decimal__Floor(cctor_finished, v19, v20);
  v24 = v23;
  if ( !System_Decimal_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  v25 = System_Decimal__op_Explicit_62583268(v22, v24);
  v26 = UnityEngine_Random__Range(0.0, v25, 0LL);
  v28 = System_Decimal__op_Explicit(v27, v26, 0LL);
  if ( !weightTable )
    sub_1B64324(v28);
  size = (System_Decimal_o *)(unsigned int)weightTable->fields._size;
  if ( (int)size < 1 )
    return 0;
  v31 = (MethodInfo *)v28;
  v32 = v29;
  v33 = 0;
  while ( 1 )
  {
    Item = System_Collections_Generic_List_Decimal___get_Item(
             size,
             weightTable,
             v33,
             (const MethodInfo_347FFA0 *)Method_System_Collections_Generic_List_Decimal__get_Item__);
    v36 = v35;
    if ( !System_Decimal_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
    if ( System_Decimal__op_GreaterThanOrEqual(Item, v36, v31) )
      break;
    v38 = System_Collections_Generic_List_Decimal___get_Item(
            v37,
            weightTable,
            v33,
            (const MethodInfo_347FFA0 *)Method_System_Collections_Generic_List_Decimal__get_Item__);
    v39 = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
    if ( !(_DWORD)v39 )
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
    v40 = System_Decimal__op_Subtraction(v39, (System_Decimal_o *)v31, v32, (const MethodInfo *)v38);
    size = (System_Decimal_o *)(unsigned int)weightTable->fields._size;
    ++v33;
    v31 = (MethodInfo *)v40;
    v32 = v41;
    if ( v33 >= (int)size )
      return 0;
  }
  return v33;
}


System_Collections_IEnumerator_o *__fastcall WarBoardAI__Think(WarBoardAI_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FA011 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardAI__Think_d__11_TypeInfo, method);
    byte_49FA011 = 1;
  }
  v4 = sub_1B64314(WarBoardAI__Think_d__11_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v5, v6);
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
    sub_1B64324(0LL);
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
  WarBoardAI___c_c *v8; // x0
  struct WarBoardAIRoute_o *routeClass; // x23
  System_Func_T__TResult__o *_9__11_7; // x20
  Il2CppObject *v11; // x21
  struct WarBoardAI___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x0
  float v16; // s0
  struct WarBoardStageNpcEntity_o *npcData; // x8

  if ( (byte_49FA016 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____75752952, x);
    sub_1B640C8(&System_Func_WarBoardAIRoute_RouteData__float__TypeInfo, v5);
    sub_1B640C8(&Method_WarBoardAI___c__Think_b__11_7__, v6);
    sub_1B640C8(&WarBoardAI___c_TypeInfo, v7);
    byte_49FA016 = 1;
  }
  v8 = WarBoardAI___c_TypeInfo;
  routeClass = this->fields.routeClass;
  if ( !WarBoardAI___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
    v8 = WarBoardAI___c_TypeInfo;
  }
  _9__11_7 = (System_Func_T__TResult__o *)v8->static_fields->__9__11_7;
  if ( !_9__11_7 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = WarBoardAI___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__11_7 = (System_Func_T__TResult__o *)sub_1B64314(
                                              System_Func_WarBoardAIRoute_RouteData__float__TypeInfo,
                                              x,
                                              method);
    System_Func_object__float____ctor(_9__11_7, v11, Method_WarBoardAI___c__Think_b__11_7__, 0LL);
    static_fields = WarBoardAI___c_TypeInfo->static_fields;
    static_fields->__9__11_7 = (struct System_Func_WarBoardAIRoute_RouteData__float__o *)_9__11_7;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__11_7, (int32_t)_9__11_7, v13, v14);
  }
  v16 = System_Linq_Enumerable__Sum_object__48693540(
          (System_Collections_Generic_IEnumerable_TSource__o *)x,
          (System_Func_TSource__float__o *)_9__11_7,
          (const MethodInfo_2E70124 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____75752952);
  if ( !routeClass || (npcData = routeClass->fields.npcData) == 0LL )
    sub_1B64324(v15);
  return (float)((float)npcData->fields.lowerThinkingValue / 100.0) <= v16;
}


int32_t __fastcall WarBoardAI__get_ForceId(WarBoardAI_o *this, const MethodInfo *method)
{
  struct WarBoardAIRoute_o *routeClass; // x8

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_1B64324(this);
  return routeClass->fields.forceId;
}


int32_t __fastcall WarBoardAI__get_GroupId(WarBoardAI_o *this, const MethodInfo *method)
{
  struct WarBoardAIRoute_o *routeClass; // x8

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_1B64324(this);
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
  const MethodInfo *v2; // x2
  int32_t v3; // w3
  WarBoardAI__Think_d__11_o *v4; // x26
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
  struct WarBoardAI_o *_4__this; // x12
  struct WarBoardAI_o *v52; // x19
  __int64 v53; // x1
  __int64 v54; // x2
  WarBoardAIRoute_o *routeClass; // x20
  System_Collections_Generic_Dictionary_int__uint__o *placePieceData; // x21
  System_Collections_Generic_List_object__o *v57; // x22
  const MethodInfo *v58; // x4
  System_Collections_IEnumerator_o *RouteData; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x26
  int32_t v61; // w2
  int32_t v62; // w3
  bool v63; // w20
  WarBoardAI__Think_d__11_o *v64; // x19
  WarBoardAI__Think_d__11_o *availableRouteList_5__4; // x26
  struct WarBoardAIRoute_o *v66; // x8
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *allRouteList; // x1
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *allRouteList_5__2; // x8
  __int64 v69; // x27
  __int64 v70; // x1
  __int64 v71; // x2
  Il2CppClass *klass; // x8
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *v73; // x22
  int32_t namespaze_high; // w8
  BalanceConfig_c *v75; // x8
  WarBoardAI___c_c *v76; // x0
  _BOOL4 IsWarBoardAiCalcEvalSum; // w21
  struct WarBoardAI___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__11_0; // x23
  Il2CppObject *v80; // x24
  int32_t v81; // w2
  int32_t v82; // w3
  struct WarBoardAI___c_StaticFields *v83; // x0
  ServantStatusBattleListViewItem_o *p__9__11_0; // x0
  Il2CppObject *v85; // x24
  struct WarBoardAI___c_StaticFields *v86; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v87; // x0
  System_Object_array *v88; // x22
  __int64 v89; // x1
  __int64 v90; // x2
  System_Collections_Generic_List_object__o *v91; // x24
  WarBoardAI__Think_d__11_o **p_availableRouteList_5__4; // x23
  int32_t v93; // w2
  int32_t v94; // w3
  __int64 v95; // x1
  __int64 v96; // x2
  System_Collections_Generic_HashSet_T__o *v97; // x25
  int32_t v98; // w2
  int32_t v99; // w3
  __int64 v100; // x8
  unsigned __int64 v101; // x20
  int32_t pickValue_5__3; // w28
  ServantStatusBattleListViewItem_o *v103; // x25
  System_Collections_ICollection_o *v104; // x26
  int32_t v105; // w3
  __int64 v106; // x1
  __int64 v107; // x2
  System_Collections_Generic_HashSet_T__o *v108; // x27
  System_Func_object__bool__o *v109; // x27
  int32_t v110; // w2
  int32_t v111; // w3
  __int64 v112; // x8
  _QWORD *v113; // x9
  __int64 _2__current_low; // x10
  __int64 v115; // x8
  System_Func_object__bool__o *v116; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v117; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v118; // x0
  System_Object_array *v119; // x0
  int32_t v120; // w2
  int32_t v121; // w3
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *evalValueSortList_5__5; // x8
  System_Collections_Generic_List_Decimal__o *v123; // x21
  const MethodInfo *v124; // x2
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *v125; // x22
  int v126; // w29
  int max_length; // w8
  int v128; // w24
  int v129; // w25
  char v130; // w26
  _BOOL8 v131; // x0
  WarBoardAIRoute_RouteData_o *current; // x22
  WarBoardPieceData_o *actionPiece; // x0
  Il2CppClass *v134; // x8
  float v135; // s12
  _BOOL8 v136; // x0
  WarBoardTacticalTrendEntity_o *v137; // x22
  float BestMagnification; // s8
  float LowestMagnification; // s0
  int value; // w23
  float ImmobilityMagnification; // s0
  BalanceConfig_c *v142; // x0
  float v143; // s8
  System_Decimal_c *v144; // x8
  _BOOL4 v145; // w25
  __int64 v146; // x2
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *v147; // x8
  WarBoardAI__Think_d__11_o *v148; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v149; // x24
  WarBoardAI___c_c *v150; // x0
  System_Decimal_o *v151; // x23
  struct WarBoardAI___c_StaticFields *v152; // x8
  System_Func_T__TResult__o *_9__11_8; // x25
  System_Func_T__TResult__o *_9__11_9; // x25
  Il2CppObject *v155; // x26
  struct WarBoardAI___c_StaticFields *v156; // x0
  int32_t v157; // w2
  int32_t v158; // w3
  System_Decimal_o *v159; // x24
  System_Decimal_o *cctor_finished; // x8
  Il2CppObject *v161; // x26
  struct WarBoardAI___c_StaticFields *v162; // x0
  int32_t v163; // w2
  int32_t v164; // w3
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *v165; // x8
  System_Decimal_o *v166; // x8
  WarBoardAI__Think_d__11_o *v167; // x24
  int32_t flags; // w26
  System_Decimal_o *v169; // x25
  System_Decimal_o *v170; // x0
  System_Decimal_o *v171; // x8
  struct System_Decimal_array *items; // x9
  __int64 size; // x11
  Il2CppObject *v174; // x9
  int32_t v175; // w2
  int32_t v176; // w3
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v177; // x1
  __int64 v178; // x1
  __int64 v179; // x2
  WarBoardAI___c_c *v180; // x0
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x22
  System_Func_T__TResult__o *_9__11_3; // x23
  Il2CppObject *v183; // x24
  struct WarBoardAI___c_StaticFields *v184; // x0
  int32_t v185; // w2
  int32_t v186; // w3
  WarBoardAI_o *v187; // x0
  const MethodInfo *v188; // x2
  __int64 v189; // x0
  ServantStatusBattleListViewItem_o *v190; // x26
  int32_t v191; // w2
  int32_t v192; // w3
  int v193; // w8
  System_Collections_Generic_HashSet_T__o *v194; // x21
  int32_t v195; // w2
  int32_t v196; // w3
  int32_t v197; // w22
  Il2CppObject *v198; // x1
  WarBoardAI__Think_d__11_o *v199; // x23
  int32_t v200; // w2
  int32_t v201; // w3
  __int64 v202; // x0
  ServantStatusBattleListViewItem_o *v203; // x26
  int32_t v204; // w2
  int32_t v205; // w3
  __int64 v206; // x0
  int32_t v207; // w2
  int32_t v208; // w3
  __int64 v209; // x0
  int32_t v210; // w2
  int32_t v211; // w3
  __int64 v212; // x0
  int32_t v213; // w2
  int32_t v214; // w3
  WarBoardAI__Think_d__11_o **v216; // [xsp+10h] [xbp-110h]
  Il2CppObject *object; // [xsp+18h] [xbp-108h]
  System_Collections_Generic_HashSet_T__o **v218; // [xsp+20h] [xbp-100h]
  System_Collections_Generic_List_Decimal__o *v219; // [xsp+20h] [xbp-100h]
  Il2CppObject *v220; // [xsp+28h] [xbp-F8h]
  WarBoardAI__Think_d__11_o *v221; // [xsp+30h] [xbp-F0h]
  System_Collections_Generic_List_Enumerator_object__o v222; // [xsp+38h] [xbp-E8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v223; // [xsp+50h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v224; // [xsp+70h] [xbp-B0h] BYREF

  v4 = this;
  if ( (byte_49FA01F & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___, v5);
    sub_1B640C8(&bool_TypeInfo, v6);
    sub_1B640C8(&System_Decimal_TypeInfo, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderByDescending_List_WarBoardAIRoute_RouteData___Decimal___, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____75752952, v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___, v10);
    sub_1B640C8(&Method_System_Linq_Enumerable_Take_List_WarBoardAIRoute_RouteData____, v11);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____, v12);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_List_WarBoardAIRoute_RouteData____, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__Dispose__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__MoveNext__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__get_Current__, v19);
    sub_1B640C8(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v20);
    sub_1B640C8(&System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo, v21);
    sub_1B640C8(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo, v22);
    sub_1B640C8(&System_Func_WarBoardAIRoute_RouteData__float__TypeInfo, v23);
    sub_1B640C8(&System_Func_List_WarBoardAIRoute_RouteData___bool__TypeInfo, v24);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__, v25);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__, v26);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__, v27);
    sub_1B640C8(&System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo, v28);
    sub_1B640C8(&Method_System_Collections_Generic_List_Decimal__Add__, v29);
    sub_1B640C8(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__, v30);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__, v31);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__GetEnumerator__, v32);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor__, v33);
    sub_1B640C8(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__, v34);
    sub_1B640C8(&Method_System_Collections_Generic_List_Decimal___ctor__, v35);
    sub_1B640C8(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___get_Count__, v36);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__, v37);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__, v38);
    sub_1B640C8(&System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo, v39);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo, v40);
    sub_1B640C8(&System_Collections_Generic_List_Decimal__TypeInfo, v41);
    sub_1B640C8(&Method_WarBoardAI___c__Think_b__11_0__, v42);
    sub_1B640C8(&Method_WarBoardAI___c__Think_b__11_1__, v43);
    sub_1B640C8(&Method_WarBoardAI___c__Think_b__11_3__, v44);
    sub_1B640C8(&Method_WarBoardAI___c__Think_b__11_8__, v45);
    sub_1B640C8(&Method_WarBoardAI___c__Think_b__11_9__, v46);
    sub_1B640C8(&Method_WarBoardAI___c__DisplayClass11_0__Think_b__6__, v47);
    sub_1B640C8(&WarBoardAI___c__DisplayClass11_0_TypeInfo, v48);
    sub_1B640C8(&WarBoardAI___c_TypeInfo, v49);
    this = (WarBoardAI__Think_d__11_o *)sub_1B640C8(&Method_WarBoardAI__Think_b__11_2__, v50);
    byte_49FA01F = 1;
  }
  memset(&v224, 0, sizeof(v224));
  memset(&v223, 0, sizeof(v223));
  _4__this = v4->fields.__4__this;
  v220 = (Il2CppObject *)_4__this;
  v221 = v4;
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
      v52 = _4__this;
      WarBoardAIRoute__BeforeCreateRouteData((WarBoardAIRoute_o *)this, method);
      routeClass = v52->fields.routeClass;
      if ( !routeClass )
        goto LABEL_164;
      placePieceData = routeClass->fields.placePieceData;
      v57 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                           System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo,
                                                           v53,
                                                           v54);
      System_Collections_Generic_List_object____ctor(
        v57,
        (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor__);
      RouteData = WarBoardAIRoute__CreateRouteData(
                    routeClass,
                    placePieceData,
                    0,
                    (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v57,
                    v58);
      v4->fields.__2__current = (Il2CppObject *)RouteData;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B6406C(p__2__current, (int32_t)RouteData, v61, v62);
      v63 = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return v63;
    case 1:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_164;
      v66 = _4__this->fields.routeClass;
      if ( !v66 )
        goto LABEL_164;
      allRouteList = v66->fields.allRouteList;
      v4->fields._allRouteList_5__2 = allRouteList;
      sub_1B6406C(
        (ServantStatusBattleListViewItem_o *)&v4->fields._allRouteList_5__2,
        (int32_t)allRouteList,
        (int32_t)v2,
        v3);
      allRouteList_5__2 = v4->fields._allRouteList_5__2;
      if ( !allRouteList_5__2 )
        goto LABEL_164;
      if ( !allRouteList_5__2->fields._size )
      {
        v63 = 1;
        LOBYTE(v222.fields._list) = 1;
        v212 = j_il2cpp_value_box_0(bool_TypeInfo, &v222);
        v4->fields.__2__current = (Il2CppObject *)v212;
        v190 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B6406C(v190, v212, v213, v214);
        v193 = 2;
        goto LABEL_169;
      }
LABEL_16:
      v69 = sub_1B64314(WarBoardAI___c__DisplayClass11_0_TypeInfo, method, v2);
      System_Object___ctor((Il2CppObject *)v69, 0LL);
      if ( !v220 )
        goto LABEL_164;
      klass = v220[1].klass;
      if ( !klass )
        goto LABEL_164;
      v73 = v4->fields._allRouteList_5__2;
      if ( !v73 )
        goto LABEL_164;
      namespaze_high = HIDWORD(klass->_1.namespaze);
      if ( namespaze_high >= v73->fields._size )
        namespaze_high = v73->fields._size;
      if ( !namespaze_high )
        namespaze_high = v73->fields._size;
      v4->fields._pickValue_5__3 = namespaze_high;
      v75 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v75 = BalanceConfig_TypeInfo;
        v73 = v4->fields._allRouteList_5__2;
      }
      v76 = WarBoardAI___c_TypeInfo;
      IsWarBoardAiCalcEvalSum = v75->static_fields->IsWarBoardAiCalcEvalSum;
      if ( !WarBoardAI___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
        v76 = WarBoardAI___c_TypeInfo;
      }
      static_fields = v76->static_fields;
      if ( IsWarBoardAiCalcEvalSum )
      {
        _9__11_0 = (System_Func_T__TResult__o *)static_fields->__9__11_0;
        if ( _9__11_0 )
          goto LABEL_39;
        if ( !v76->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v76);
          v76 = WarBoardAI___c_TypeInfo;
        }
        v80 = (Il2CppObject *)v76->static_fields->__9;
        _9__11_0 = (System_Func_T__TResult__o *)sub_1B64314(
                                                  System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo,
                                                  v70,
                                                  v71);
        System_Func_object__Decimal____ctor(_9__11_0, v80, Method_WarBoardAI___c__Think_b__11_0__, 0LL);
        v83 = WarBoardAI___c_TypeInfo->static_fields;
        v83->__9__11_0 = (struct System_Func_List_WarBoardAIRoute_RouteData___Decimal__o *)_9__11_0;
        p__9__11_0 = (ServantStatusBattleListViewItem_o *)&v83->__9__11_0;
      }
      else
      {
        _9__11_0 = (System_Func_T__TResult__o *)static_fields->__9__11_1;
        if ( _9__11_0 )
          goto LABEL_39;
        if ( !v76->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v76);
          v76 = WarBoardAI___c_TypeInfo;
        }
        v85 = (Il2CppObject *)v76->static_fields->__9;
        _9__11_0 = (System_Func_T__TResult__o *)sub_1B64314(
                                                  System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo,
                                                  v70,
                                                  v71);
        System_Func_object__Decimal____ctor(_9__11_0, v85, Method_WarBoardAI___c__Think_b__11_1__, 0LL);
        v86 = WarBoardAI___c_TypeInfo->static_fields;
        v86->__9__11_1 = (struct System_Func_List_WarBoardAIRoute_RouteData___Decimal__o *)_9__11_0;
        p__9__11_0 = (ServantStatusBattleListViewItem_o *)&v86->__9__11_1;
      }
      sub_1B6406C(p__9__11_0, (int32_t)_9__11_0, v81, v82);
LABEL_39:
      v87 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__Decimal_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v73,
                                                                   (System_Func_TSource__TKey__o *)_9__11_0,
                                                                   (const MethodInfo_2E63518 *)Method_System_Linq_Enumerable_OrderByDescending_List_WarBoardAIRoute_RouteData___Decimal___);
      v88 = System_Linq_Enumerable__ToArray_object_(
              v87,
              (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____);
      v91 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                           System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo,
                                                           v89,
                                                           v90);
      System_Collections_Generic_List_object____ctor(
        v91,
        (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
      v4->fields._availableRouteList_5__4 = (struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *)v91;
      p_availableRouteList_5__4 = (WarBoardAI__Think_d__11_o **)&v4->fields._availableRouteList_5__4;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._availableRouteList_5__4, (int32_t)v91, v93, v94);
      v97 = (System_Collections_Generic_HashSet_T__o *)sub_1B64314(
                                                         System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo,
                                                         v95,
                                                         v96);
      System_Collections_Generic_HashSet_object____ctor(
        v97,
        (const MethodInfo_3369DD0 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__);
      if ( !v69 )
        goto LABEL_164;
      object = (Il2CppObject *)v69;
      *(_QWORD *)(v69 + 16) = v97;
      v218 = (System_Collections_Generic_HashSet_T__o **)(v69 + 16);
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v69 + 16), (int32_t)v97, v98, v99);
      if ( !v88 )
        goto LABEL_164;
      v100 = *(_QWORD *)&v88->max_length;
      if ( (int)v100 >= 1 )
      {
        v101 = 0LL;
        pickValue_5__3 = v4->fields._pickValue_5__3;
        v103 = (ServantStatusBattleListViewItem_o *)(v69 + 24);
        v216 = (WarBoardAI__Think_d__11_o **)&v4->fields._availableRouteList_5__4;
        do
        {
          if ( v101 >= (unsigned int)v100 )
            goto LABEL_171;
          v104 = (System_Collections_ICollection_o *)v88->m_Items[v101];
          this = (WarBoardAI__Think_d__11_o *)BasicHelper__IsNullOrEmpty(v104, 0LL);
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
              if ( !v104 )
                goto LABEL_164;
              this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)v104,
                                                    0,
                                                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
              if ( !this )
                goto LABEL_164;
              if ( WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)this, 0LL) )
              {
                v108 = *v218;
                this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_List_object___get_Item(
                                                      (System_Collections_Generic_List_object__o *)v104,
                                                      0,
                                                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
                if ( !this || !v108 )
                  goto LABEL_164;
                this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_HashSet_object___Add(
                                                      v108,
                                                      *(Il2CppObject **)&this->fields._pickValue_5__3,
                                                      (const MethodInfo_336AFB4 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__);
                goto LABEL_69;
              }
              v109 = (System_Func_object__bool__o *)v103->klass;
              if ( !v103->klass )
              {
                v109 = (System_Func_object__bool__o *)sub_1B64314(
                                                        System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo,
                                                        v106,
                                                        v107);
                System_Func_object__bool____ctor(
                  v109,
                  object,
                  Method_WarBoardAI___c__DisplayClass11_0__Think_b__6__,
                  0LL);
                object[1].monitor = v109;
                p_availableRouteList_5__4 = v216;
                sub_1B6406C(v103, (int32_t)v109, v110, v111);
              }
              this = (WarBoardAI__Think_d__11_o *)BasicHelper__Any_object_(
                                                    (System_Collections_Generic_List_T__o *)v104,
                                                    (System_Func_T__bool__o *)v109,
                                                    (const MethodInfo_2E24870 *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
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
                                                        (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v104,
                                                        v2),
                  ((unsigned __int8)this & 1) == 0) )
            {
              this = *p_availableRouteList_5__4;
              if ( !*p_availableRouteList_5__4 )
                goto LABEL_164;
              v112 = *(_QWORD *)&this->fields.__1__state;
              v113 = Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__;
              ++HIDWORD(this->fields.__2__current);
              if ( !v112 )
                goto LABEL_164;
              _2__current_low = SLODWORD(this->fields.__2__current);
              if ( (unsigned int)_2__current_low >= *(_DWORD *)(v112 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)v104,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v113[4] + 192LL) + 112LL));
              }
              else
              {
                v115 = v112 + 8 * _2__current_low;
                LODWORD(this->fields.__2__current) = _2__current_low + 1;
                *(_QWORD *)(v115 + 32) = v104;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v115 + 32), (int32_t)v104, (int32_t)v2, v105);
              }
              availableRouteList_5__4 = *p_availableRouteList_5__4;
              if ( !*p_availableRouteList_5__4 )
                goto LABEL_164;
              if ( pickValue_5__3 <= SLODWORD(availableRouteList_5__4->fields.__2__current) )
                goto LABEL_71;
            }
          }
LABEL_69:
          LODWORD(v100) = v88->max_length;
        }
        while ( (__int64)++v101 < (int)v100 );
      }
      availableRouteList_5__4 = *p_availableRouteList_5__4;
      if ( !*p_availableRouteList_5__4 )
        goto LABEL_164;
LABEL_71:
      v64 = v221;
      if ( SLODWORD(availableRouteList_5__4->fields.__2__current) <= 0 )
      {
        v63 = 1;
        LOBYTE(v222.fields._list) = 1;
        v209 = j_il2cpp_value_box_0(bool_TypeInfo, &v222);
        v221->fields.__2__current = (Il2CppObject *)v209;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v221->fields.__2__current, v209, v210, v211);
        v221->fields.__1__state = 3;
      }
      else
      {
LABEL_72:
        v116 = (System_Func_object__bool__o *)sub_1B64314(
                                                System_Func_List_WarBoardAIRoute_RouteData___bool__TypeInfo,
                                                method,
                                                v2);
        System_Func_object__bool____ctor(v116, v220, Method_WarBoardAI__Think_b__11_2__, 0LL);
        v117 = System_Linq_Enumerable__Where_object_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)availableRouteList_5__4,
                 (System_Func_TSource__bool__o *)v116,
                 (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_List_WarBoardAIRoute_RouteData____);
        v118 = System_Linq_Enumerable__Take_object_(
                 v117,
                 v64->fields._pickValue_5__3,
                 (const MethodInfo_2E70310 *)Method_System_Linq_Enumerable_Take_List_WarBoardAIRoute_RouteData____);
        v119 = System_Linq_Enumerable__ToArray_object_(
                 v118,
                 (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____);
        v64->fields._evalValueSortList_5__5 = (struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *)v119;
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&v64->fields._evalValueSortList_5__5,
          (int32_t)v119,
          v120,
          v121);
        evalValueSortList_5__5 = v64->fields._evalValueSortList_5__5;
        if ( !evalValueSortList_5__5 )
          goto LABEL_164;
        v4 = v64;
        if ( !*(_QWORD *)&evalValueSortList_5__5->max_length )
        {
          v63 = 1;
          LOBYTE(v222.fields._list) = 1;
          v206 = j_il2cpp_value_box_0(bool_TypeInfo, &v222);
          v64->fields.__2__current = (Il2CppObject *)v206;
          v190 = (ServantStatusBattleListViewItem_o *)&v64->fields.__2__current;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v64->fields.__2__current, v206, v207, v208);
          v193 = 4;
          goto LABEL_169;
        }
LABEL_74:
        v123 = (System_Collections_Generic_List_Decimal__o *)sub_1B64314(
                                                               System_Collections_Generic_List_Decimal__TypeInfo,
                                                               method,
                                                               v2);
        System_Collections_Generic_List_Decimal____ctor(
          v123,
          (const MethodInfo_347FA3C *)Method_System_Collections_Generic_List_Decimal___ctor__);
        v125 = v4->fields._evalValueSortList_5__5;
        if ( !v125 )
          goto LABEL_164;
        v126 = 0;
        v219 = v123;
        while ( 1 )
        {
          max_length = v125->max_length;
          if ( v126 >= max_length )
            break;
          if ( v126 >= (unsigned int)max_length )
            goto LABEL_171;
          this = (WarBoardAI__Think_d__11_o *)v125->m_Items[v126];
          if ( !this )
            goto LABEL_164;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v222,
            (System_Collections_Generic_List_object__o *)this,
            (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
          v128 = 0;
          v129 = 0;
          v130 = 0;
          v224 = v222;
          while ( 1 )
          {
            v131 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     &v224,
                     (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
            if ( !v131 )
              break;
            current = (WarBoardAIRoute_RouteData_o *)v224.fields._current;
            if ( !v224.fields._current )
              sub_1B64324(v131);
            if ( WarBoardAIRoute_RouteData__HasFlag((WarBoardAIRoute_RouteData_o *)v224.fields._current, 4LL, 0LL) )
            {
              actionPiece = current->fields.actionPiece;
              if ( actionPiece )
                v129 |= WarBoardPieceData__get_isMaster(actionPiece, 0LL);
              v130 = 1;
            }
            v128 |= WarBoardAIRoute_RouteData__HasFlag(current, 8LL, 0LL);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v224,
            (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
          if ( !v220 )
            goto LABEL_164;
          v134 = v220[1].klass;
          if ( !v134 )
            goto LABEL_164;
          this = (WarBoardAI__Think_d__11_o *)v134->_1.klass;
          if ( !this )
            goto LABEL_164;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v222,
            (System_Collections_Generic_List_object__o *)this,
            (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__GetEnumerator__);
          v135 = 0.0;
          v223 = v222;
          while ( 1 )
          {
            v136 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     &v223,
                     (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__MoveNext__);
            if ( !v136 )
              break;
            v137 = (WarBoardTacticalTrendEntity_o *)v223.fields._current;
            if ( !v223.fields._current )
              sub_1B64324(v136);
            switch ( HIDWORD(v223.fields._current[1].klass) )
            {
              case 0:
                if ( v126 < SLODWORD(v223.fields._current[1].monitor) )
                {
                  BestMagnification = WarBoardTacticalTrendEntity__GetBestMagnification(
                                        (WarBoardTacticalTrendEntity_o *)v223.fields._current,
                                        0LL);
                  LowestMagnification = WarBoardTacticalTrendEntity__GetLowestMagnification(v137, 0LL);
                  value = v137->fields.value;
                  ImmobilityMagnification = WarBoardTacticalTrendEntity__GetBestMagnification(v137, 0LL)
                                          - (float)((float)((float)(BestMagnification - LowestMagnification)
                                                          / (float)((float)value + -1.0))
                                                  * (float)v126);
                  goto LABEL_102;
                }
                break;
              case 1:
                if ( (v130 & 1) != 0 )
                  goto LABEL_101;
                break;
              case 4:
                if ( (v129 & 1) != 0 )
                  goto LABEL_101;
                break;
              case 5:
                if ( (v128 & 1) != 0 )
                {
LABEL_101:
                  ImmobilityMagnification = WarBoardTacticalTrendEntity__GetImmobilityMagnification(
                                              (WarBoardTacticalTrendEntity_o *)v223.fields._current,
                                              0LL);
LABEL_102:
                  v135 = v135 + ImmobilityMagnification;
                }
                break;
              default:
                continue;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v223,
            (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__Dispose__);
          v4 = v221;
          v142 = BalanceConfig_TypeInfo;
          if ( v135 == 0.0 )
            v143 = 1.0;
          else
            v143 = v135;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v142 = BalanceConfig_TypeInfo;
          }
          v144 = System_Decimal_TypeInfo;
          v145 = v142->static_fields->IsWarBoardAiCalcEvalSum;
          if ( !System_Decimal_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
          this = (WarBoardAI__Think_d__11_o *)System_Decimal__op_Explicit((System_Decimal_o *)v144, v143, 0LL);
          v147 = v221->fields._evalValueSortList_5__5;
          if ( !v147 )
            goto LABEL_164;
          if ( v126 >= v147->max_length )
            goto LABEL_171;
          v148 = this;
          v149 = (System_Collections_Generic_IEnumerable_TSource__o *)v147->m_Items[v126];
          v150 = WarBoardAI___c_TypeInfo;
          v151 = (System_Decimal_o *)method;
          if ( !WarBoardAI___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
            v150 = WarBoardAI___c_TypeInfo;
          }
          v152 = v150->static_fields;
          if ( v145 )
          {
            _9__11_8 = (System_Func_T__TResult__o *)v152->__9__11_8;
            if ( !_9__11_8 )
            {
              if ( !v150->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v150);
                v150 = WarBoardAI___c_TypeInfo;
              }
              v155 = (Il2CppObject *)v150->static_fields->__9;
              _9__11_8 = (System_Func_T__TResult__o *)sub_1B64314(
                                                        System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo,
                                                        method,
                                                        v146);
              System_Func_object__Decimal____ctor(_9__11_8, v155, Method_WarBoardAI___c__Think_b__11_8__, 0LL);
              v156 = WarBoardAI___c_TypeInfo->static_fields;
              v156->__9__11_8 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_8;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v156->__9__11_8, (int32_t)_9__11_8, v157, v158);
              v4 = v221;
            }
            v159 = System_Linq_Enumerable__Sum_object__48693396(
                     (System_Decimal_o *)&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___,
                     v149,
                     (System_Func_TSource__Decimal__o *)_9__11_8,
                     (const MethodInfo_2E70094 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
            cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
            if ( !(_DWORD)cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
          }
          else
          {
            _9__11_9 = (System_Func_T__TResult__o *)v152->__9__11_9;
            if ( !_9__11_9 )
            {
              if ( !v150->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v150);
                v150 = WarBoardAI___c_TypeInfo;
              }
              v161 = (Il2CppObject *)v150->static_fields->__9;
              _9__11_9 = (System_Func_T__TResult__o *)sub_1B64314(
                                                        System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo,
                                                        method,
                                                        v146);
              System_Func_object__Decimal____ctor(_9__11_9, v161, Method_WarBoardAI___c__Think_b__11_9__, 0LL);
              v162 = WarBoardAI___c_TypeInfo->static_fields;
              v162->__9__11_9 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_9;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v162->__9__11_9, (int32_t)_9__11_9, v163, v164);
              v4 = v221;
            }
            this = (WarBoardAI__Think_d__11_o *)System_Linq_Enumerable__Sum_object__48693396(
                                                  (System_Decimal_o *)&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___,
                                                  v149,
                                                  (System_Func_TSource__Decimal__o *)_9__11_9,
                                                  (const MethodInfo_2E70094 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
            v165 = v4->fields._evalValueSortList_5__5;
            if ( !v165 )
              goto LABEL_164;
            if ( v126 >= v165->max_length )
              goto LABEL_171;
            v166 = (System_Decimal_o *)v165->m_Items[v126];
            if ( !v166 )
              goto LABEL_164;
            v167 = this;
            flags = v166[1].fields.flags;
            v169 = (System_Decimal_o *)method;
            if ( !System_Decimal_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
            v170 = System_Decimal__op_Implicit_62582764(v166, flags, 0LL);
            v4 = v221;
            v159 = System_Decimal__op_Division(v171, (System_Decimal_o *)v167, v169, (const MethodInfo *)v170);
          }
          this = (WarBoardAI__Think_d__11_o *)System_Decimal__op_Multiply(
                                                cctor_finished,
                                                (System_Decimal_o *)v148,
                                                v151,
                                                (const MethodInfo *)v159);
          v123 = v219;
          if ( v219 )
          {
            items = v219->fields._items;
            ++v219->fields._version;
            if ( items )
            {
              size = v219->fields._size;
              v124 = method;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_Decimal___AddWithResize(
                  v219,
                  (System_Decimal_o *)this,
                  (const MethodInfo_34802CC *)method);
              }
              else
              {
                v174 = &items->obj + size;
                v219->fields._size = size + 1;
                v174[2].klass = (Il2CppClass *)this;
                v174[2].monitor = (void *)method;
              }
              v125 = v4->fields._evalValueSortList_5__5;
              ++v126;
              if ( v125 )
                continue;
            }
          }
          goto LABEL_164;
        }
        if ( !v220 )
          goto LABEL_164;
        this = (WarBoardAI__Think_d__11_o *)WarBoardAI__GetRandomIndex((WarBoardAI_o *)this, v123, v124);
        if ( (unsigned int)this >= v125->max_length )
LABEL_171:
          sub_1B6432C(this, method);
        v177 = v125->m_Items[(int)this];
        v220[1].monitor = v177;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v220[1].monitor, (int32_t)v177, v175, v176);
        v180 = WarBoardAI___c_TypeInfo;
        monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v220[1].monitor;
        if ( !WarBoardAI___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
          v180 = WarBoardAI___c_TypeInfo;
        }
        _9__11_3 = (System_Func_T__TResult__o *)v180->static_fields->__9__11_3;
        if ( !_9__11_3 )
        {
          if ( !v180->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v180);
            v180 = WarBoardAI___c_TypeInfo;
          }
          v183 = (Il2CppObject *)v180->static_fields->__9;
          _9__11_3 = (System_Func_T__TResult__o *)sub_1B64314(
                                                    System_Func_WarBoardAIRoute_RouteData__float__TypeInfo,
                                                    v178,
                                                    v179);
          System_Func_object__float____ctor(_9__11_3, v183, Method_WarBoardAI___c__Think_b__11_3__, 0LL);
          v184 = WarBoardAI___c_TypeInfo->static_fields;
          v184->__9__11_3 = (struct System_Func_WarBoardAIRoute_RouteData__float__o *)_9__11_3;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v184->__9__11_3, (int32_t)_9__11_3, v185, v186);
        }
        System_Linq_Enumerable__Sum_object__48693540(
          monitor,
          (System_Func_TSource__float__o *)_9__11_3,
          (const MethodInfo_2E70124 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____75752952);
        if ( WarBoardAI__CheckWasteRoute(
               v187,
               (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v220[1].monitor,
               v188) )
        {
          v63 = 1;
          LOBYTE(v222.fields._list) = 1;
          v189 = j_il2cpp_value_box_0(bool_TypeInfo, &v222);
          v4->fields.__2__current = (Il2CppObject *)v189;
          v190 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
          sub_1B6406C(v190, v189, v191, v192);
          v193 = 5;
LABEL_169:
          *(_DWORD *)&v190[-1].fields.isMine = v193;
          return v63;
        }
LABEL_152:
        v194 = (System_Collections_Generic_HashSet_T__o *)sub_1B64314(
                                                            System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo,
                                                            method,
                                                            v2);
        System_Collections_Generic_HashSet_object____ctor(
          v194,
          (const MethodInfo_3369DD0 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__);
        if ( !v220 || (this = (WarBoardAI__Think_d__11_o *)v220[1].monitor) == 0LL )
LABEL_164:
          sub_1B64324(this);
        v197 = LODWORD(this->fields.__2__current) - 1;
        if ( v197 >= 0 )
        {
          while ( 1 )
          {
            this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)this,
                                                  v197,
                                                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
            if ( !this )
              goto LABEL_164;
            v198 = *(Il2CppObject **)&this->fields._pickValue_5__3;
            v199 = this;
            if ( v198 )
            {
              if ( !v194 )
                goto LABEL_164;
              if ( !System_Collections_Generic_HashSet_object___Contains(
                      v194,
                      v198,
                      (const MethodInfo_336A4C4 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__)
                && !WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)v199, 0LL) )
              {
                System_Collections_Generic_HashSet_object___Add(
                  v194,
                  *(Il2CppObject **)&v199->fields._pickValue_5__3,
                  (const MethodInfo_336AFB4 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__);
                this = *(WarBoardAI__Think_d__11_o **)&v199->fields._pickValue_5__3;
                if ( !this )
                  goto LABEL_164;
                WarBoardPieceData__SetPrevAiRoute((WarBoardPieceData_o *)this, (WarBoardAIRoute_RouteData_o *)v199, 0LL);
              }
            }
            if ( --v197 < 0 )
              break;
            this = (WarBoardAI__Think_d__11_o *)v220[1].monitor;
            if ( !this )
              goto LABEL_164;
          }
        }
        v4->fields._availableRouteList_5__4 = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._availableRouteList_5__4, 0, v195, v196);
        v4->fields._evalValueSortList_5__5 = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._evalValueSortList_5__5, 0, v200, v201);
        LOBYTE(v222.fields._list) = 0;
        v202 = j_il2cpp_value_box_0(bool_TypeInfo, &v222);
        v4->fields.__2__current = (Il2CppObject *)v202;
        v203 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B6406C(v203, v202, v204, v205);
        *(_DWORD *)&v203[-1].fields.isMine = 6;
        return 1;
      }
      return v63;
    case 2:
      v4->fields.__1__state = -1;
      goto LABEL_16;
    case 3:
      v64 = v4;
      availableRouteList_5__4 = (WarBoardAI__Think_d__11_o *)v4->fields._availableRouteList_5__4;
      v64->fields.__1__state = -1;
      goto LABEL_72;
    case 4:
      v4->fields.__1__state = -1;
      goto LABEL_74;
    case 5:
      v4->fields.__1__state = -1;
      goto LABEL_152;
    case 6:
      v63 = 0;
      v4->fields.__1__state = -1;
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

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_WarBoardAI__Think_d__11_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FA017 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardAI___c_TypeInfo, v1);
    byte_49FA017 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(WarBoardAI___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  WarBoardAI___c_TypeInfo->static_fields->__9 = (struct WarBoardAI___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)WarBoardAI___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WarBoardAI___c_c *v8; // x0
  struct WarBoardAI___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__11_4; // x20
  Il2CppObject *v11; // x21
  struct WarBoardAI___c_StaticFields *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49FA018 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___, x);
    sub_1B640C8(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo, v5);
    sub_1B640C8(&Method_WarBoardAI___c__Think_b__11_4__, v6);
    sub_1B640C8(&WarBoardAI___c_TypeInfo, v7);
    byte_49FA018 = 1;
  }
  v8 = WarBoardAI___c_TypeInfo;
  if ( !WarBoardAI___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
    v8 = WarBoardAI___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__11_4 = (System_Func_T__TResult__o *)static_fields->__9__11_4;
  if ( !_9__11_4 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = WarBoardAI___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__11_4 = (System_Func_T__TResult__o *)sub_1B64314(
                                              System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo,
                                              x,
                                              method);
    System_Func_object__Decimal____ctor(_9__11_4, v11, Method_WarBoardAI___c__Think_b__11_4__, 0LL);
    v12 = WarBoardAI___c_TypeInfo->static_fields;
    v12->__9__11_4 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_4;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v12->__9__11_4, (int32_t)_9__11_4, v13, v14);
  }
  return System_Linq_Enumerable__Sum_object__48693396(
           (System_Decimal_o *)static_fields,
           (System_Collections_Generic_IEnumerable_TSource__o *)x,
           (System_Func_TSource__Decimal__o *)_9__11_4,
           (const MethodInfo_2E70094 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
}


System_Decimal_o *__fastcall WarBoardAI___c___Think_b__11_1(
        System_Decimal_o *retstr,
        WarBoardAI___c_o *this,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *x,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WarBoardAI___c_c *v10; // x0
  struct WarBoardAI___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__11_5; // x20
  Il2CppObject *v13; // x21
  struct WarBoardAI___c_StaticFields *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_Decimal_o *v17; // x0
  System_Decimal_o *v18; // x1
  System_Decimal_o *v19; // x20
  int32_t size; // w19
  System_Decimal_o *v21; // x21
  System_Decimal_o *cctor_finished; // x8
  System_Decimal_o *v23; // x2
  System_Decimal_o *v24; // x8

  if ( (byte_49FA01A & 1) == 0 )
  {
    sub_1B640C8(&System_Decimal_TypeInfo, x);
    sub_1B640C8(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___, v5);
    sub_1B640C8(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__, v7);
    sub_1B640C8(&Method_WarBoardAI___c__Think_b__11_5__, v8);
    sub_1B640C8(&WarBoardAI___c_TypeInfo, v9);
    byte_49FA01A = 1;
  }
  v10 = WarBoardAI___c_TypeInfo;
  if ( !WarBoardAI___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
    v10 = WarBoardAI___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__11_5 = (System_Func_T__TResult__o *)static_fields->__9__11_5;
  if ( !_9__11_5 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = WarBoardAI___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__11_5 = (System_Func_T__TResult__o *)sub_1B64314(
                                              System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo,
                                              x,
                                              method);
    System_Func_object__Decimal____ctor(_9__11_5, v13, Method_WarBoardAI___c__Think_b__11_5__, 0LL);
    v14 = WarBoardAI___c_TypeInfo->static_fields;
    v14->__9__11_5 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_5;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v14->__9__11_5, (int32_t)_9__11_5, v15, v16);
  }
  v17 = System_Linq_Enumerable__Sum_object__48693396(
          (System_Decimal_o *)static_fields,
          (System_Collections_Generic_IEnumerable_TSource__o *)x,
          (System_Func_TSource__Decimal__o *)_9__11_5,
          (const MethodInfo_2E70094 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
  if ( !x )
    sub_1B64324(v17);
  v19 = v17;
  size = x->fields._size;
  v21 = v18;
  cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
  if ( !(_DWORD)cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  v23 = System_Decimal__op_Implicit_62582764(cctor_finished, size, 0LL);
  return System_Decimal__op_Division(v24, v19, v21, (const MethodInfo *)v23);
}


float __fastcall WarBoardAI___c___Think_b__11_3(
        WarBoardAI___c_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
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

  if ( (byte_49FA019 & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_1B640C8(&System_Decimal_TypeInfo, y);
    byte_49FA019 = 1;
  }
  if ( !y )
    sub_1B64324(this);
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

  if ( (byte_49FA01B & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_1B640C8(&System_Decimal_TypeInfo, y);
    byte_49FA01B = 1;
  }
  if ( !y )
    sub_1B64324(this);
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
    sub_1B64324(this);
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

  if ( (byte_49FA01C & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_1B640C8(&System_Decimal_TypeInfo, y);
    byte_49FA01C = 1;
  }
  if ( !y )
    sub_1B64324(this);
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

  if ( (byte_49FA01D & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_1B640C8(&System_Decimal_TypeInfo, y);
    byte_49FA01D = 1;
  }
  if ( !y )
    sub_1B64324(this);
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
  if ( (byte_49FA01E & 1) == 0 )
  {
    this = (WarBoardAI___c__DisplayClass11_0_o *)sub_1B640C8(
                                                   &Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__,
                                                   x);
    byte_49FA01E = 1;
  }
  if ( !x || (this = (WarBoardAI___c__DisplayClass11_0_o *)v4->fields.notActionPieceHash) == 0LL )
    sub_1B64324(this);
  return System_Collections_Generic_HashSet_object___Contains(
           (System_Collections_Generic_HashSet_T__o *)this,
           (Il2CppObject *)x->fields.basePiece,
           (const MethodInfo_336A4C4 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__);
}