void __fastcall WarBoardAI___ctor(WarBoardAI_o *this, WarBoardStageNpcEntity_o *npc, const MethodInfo *method)
{
  WarBoardAIRoute_o *v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B423DB & 1) == 0 )
  {
    sub_1BDB878(&WarBoardAIRoute_TypeInfo, npc);
    byte_4B423DB = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v5 = (WarBoardAIRoute_o *)sub_1BDBAC4(WarBoardAIRoute_TypeInfo);
  WarBoardAIRoute___ctor(v5, npc, 0LL);
  this->fields.routeClass = v5;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, (int32_t)v5, v6, v7);
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
    sub_1BDBAD4(0LL, aiId);
  WarBoardAIRoute__AddPiecePersonalityDic(routeClass, aiId, pieceIndex, 0LL);
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
  __int64 v12; // x1
  int32_t size; // w8
  bool v14; // w24
  IWarBoardAIRouteWaste_c **v15; // x28
  int32_t v16; // w21
  Il2CppObject *v17; // x23
  Il2CppClass *klass; // x8
  Il2CppObject *methods; // x22
  Il2CppClass *v20; // x9
  Il2CppClass *v21; // x8
  Il2CppClass *v22; // x8
  Il2CppClass *v23; // x8
  Il2CppClass *v24; // x8
  IWarBoardAIRouteWaste_c *v25; // x1
  __int64 v26; // x9
  IWarBoardAIRouteWaste_c **p_offset; // x10
  __int64 p_method; // x0
  Il2CppClass *v29; // x8
  IWarBoardAIRouteWaste_c *v30; // x1
  __int64 v31; // x9
  IWarBoardAIRouteWaste_c **v32; // x10
  __int64 v33; // x0
  Il2CppClass *v34; // x8
  IWarBoardAIRouteWaste_c **v35; // x10
  int monitor_high; // w28
  IWarBoardAIRouteWaste_c *v37; // x1
  __int64 v38; // x9
  IWarBoardAIRouteWaste_c **v39; // x29
  int *v40; // x10
  __int64 v41; // x0
  bool v42; // zf
  Il2CppClass *v43; // x8
  int monitor; // w28
  IWarBoardAIRouteWaste_c *v45; // x1
  __int64 v46; // x9
  IWarBoardAIRouteWaste_c **v47; // x10
  __int64 v48; // x0
  Il2CppClass *v49; // x8
  IWarBoardAIRouteWaste_c *v50; // x1
  __int64 v51; // x9
  IWarBoardAIRouteWaste_c **v52; // x10
  __int64 v53; // x0
  int32_t v54; // w8

  if ( (byte_4B423DD & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__ContainsKey__, checkRoute);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ctor__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__set_Item__, v5);
    sub_1BDB878(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__TypeInfo, v6);
    sub_1BDB878(&IWarBoardAIRouteWaste_TypeInfo, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__, v9);
    byte_4B423DD = 1;
  }
  v10 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BDBAC4(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v10,
    (const MethodInfo_333A94C *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ctor__);
  if ( !checkRoute )
    goto LABEL_65;
  size = checkRoute->fields._size;
  v14 = size > 0;
  if ( size >= 1 )
  {
    v15 = &IWarBoardAIRouteWaste_TypeInfo;
    v16 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)checkRoute,
               v16,
               (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
      if ( !Item )
        break;
      v17 = Item;
      if ( Item[3].klass )
      {
        Item = (Il2CppObject *)WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)Item, 0LL);
        if ( ((unsigned __int8)Item & 1) == 0 )
        {
          v12 = (unsigned int)(v16 - 1);
          if ( v16 < 1 )
            goto LABEL_15;
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)checkRoute,
                   v12,
                   (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
          if ( !Item )
            goto LABEL_15;
          klass = Item[3].klass;
          methods = Item;
          if ( !klass )
            break;
          v20 = v17[3].klass;
          if ( !v20 )
            break;
          if ( *(&klass->_1.byval_arg.bits + 1) != *(&v20->_1.byval_arg.bits + 1)
            || (Item = (Il2CppObject *)WarBoardAIRoute_RouteData__get_notAction(
                                         (WarBoardAIRoute_RouteData_o *)Item,
                                         0LL),
                ((unsigned __int8)Item & 1) != 0) )
          {
LABEL_15:
            v21 = v17[3].klass;
            if ( !v21 || !v10 )
              break;
            Item = (Il2CppObject *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                     v10,
                                     HIDWORD(v21->_1.namespaze),
                                     (const MethodInfo_333B514 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__ContainsKey__);
            if ( ((unsigned __int8)Item & 1) != 0 )
            {
              methods = 0LL;
            }
            else
            {
              v22 = v17[3].klass;
              if ( !v22 )
                break;
              methods = (Il2CppObject *)v22->_1.methods;
            }
          }
          v23 = v17[3].klass;
          if ( !v23 || !v10 )
            break;
          System_Collections_Generic_Dictionary_int__object___set_Item(
            v10,
            HIDWORD(v23->_1.namespaze),
            v17,
            (const MethodInfo_333B30C *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__set_Item__);
          if ( methods && ((__int64)v17[1].klass & 0x10000002) == 0 )
          {
            v24 = methods->klass;
            v25 = *v15;
            v26 = *(unsigned __int16 *)(&methods->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&methods->klass->_2.bitflags2 + 3) )
            {
              p_offset = (IWarBoardAIRouteWaste_c **)&v24->_1.interfaceOffsets->offset;
              while ( *(p_offset - 1) != v25 )
              {
                --v26;
                p_offset += 2;
                if ( !v26 )
                  goto LABEL_29;
              }
              p_method = (__int64)&v24->vtable[*(_DWORD *)p_offset + 2].method;
            }
            else
            {
LABEL_29:
              p_method = sub_1C2C00C(methods, v25, 2LL);
            }
            if ( ((*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))p_method)(methods, *(_QWORD *)(p_method + 8)) & 2) == 0 )
            {
              v29 = methods->klass;
              v30 = *v15;
              v31 = *(unsigned __int16 *)(&methods->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&methods->klass->_2.bitflags2 + 3) )
              {
                v32 = (IWarBoardAIRouteWaste_c **)&v29->_1.interfaceOffsets->offset;
                while ( *(v32 - 1) != v30 )
                {
                  --v31;
                  v32 += 2;
                  if ( !v31 )
                    goto LABEL_36;
                }
                v33 = (__int64)&v29->vtable[*(_DWORD *)v32 + 2].method;
              }
              else
              {
LABEL_36:
                v33 = sub_1C2C00C(methods, v30, 2LL);
              }
              if ( ((*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v33)(methods, *(_QWORD *)(v33 + 8)) & 0x10000000) == 0 )
              {
                v34 = methods->klass;
                v35 = v15;
                monitor_high = HIDWORD(v17[1].monitor);
                v37 = *v35;
                v38 = *(unsigned __int16 *)(&methods->klass->_2.bitflags2 + 3);
                v39 = v35;
                if ( *(_WORD *)(&methods->klass->_2.bitflags2 + 3) )
                {
                  v40 = &v34->_1.interfaceOffsets->offset;
                  while ( *((IWarBoardAIRouteWaste_c **)v40 - 1) != v37 )
                  {
                    --v38;
                    v40 += 4;
                    if ( !v38 )
                      goto LABEL_43;
                  }
                  v41 = (__int64)&v34->vtable[*v40].method;
                }
                else
                {
LABEL_43:
                  v41 = sub_1C2C00C(methods, v37, 0LL);
                }
                v42 = monitor_high == (*(unsigned int (__fastcall **)(Il2CppObject *, _QWORD))v41)(
                                        methods,
                                        *(_QWORD *)(v41 + 8));
                v15 = v39;
                if ( v42 )
                {
                  v43 = methods->klass;
                  monitor = (int)v17[1].monitor;
                  v45 = *v39;
                  v46 = *(unsigned __int16 *)(&methods->klass->_2.bitflags2 + 3);
                  if ( *(_WORD *)(&methods->klass->_2.bitflags2 + 3) )
                  {
                    v47 = (IWarBoardAIRouteWaste_c **)&v43->_1.interfaceOffsets->offset;
                    while ( *(v47 - 1) != v45 )
                    {
                      --v46;
                      v47 += 2;
                      if ( !v46 )
                        goto LABEL_51;
                    }
                    v48 = (__int64)&v43->vtable[*(_DWORD *)v47 + 1].method;
                  }
                  else
                  {
LABEL_51:
                    v48 = sub_1C2C00C(methods, v45, 1LL);
                  }
                  v42 = monitor == (*(unsigned int (__fastcall **)(Il2CppObject *, _QWORD))v48)(
                                     methods,
                                     *(_QWORD *)(v48 + 8));
                  v15 = v39;
                  if ( v42 && !WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)v17, 0LL) )
                  {
                    v49 = methods->klass;
                    v50 = *v39;
                    v51 = *(unsigned __int16 *)(&methods->klass->_2.bitflags2 + 3);
                    if ( *(_WORD *)(&methods->klass->_2.bitflags2 + 3) )
                    {
                      v52 = (IWarBoardAIRouteWaste_c **)&v49->_1.interfaceOffsets->offset;
                      while ( *(v52 - 1) != v50 )
                      {
                        --v51;
                        v52 += 2;
                        if ( !v51 )
                          goto LABEL_60;
                      }
                      v53 = (__int64)&v49->vtable[*(_DWORD *)v52 + 3].method;
                    }
                    else
                    {
LABEL_60:
                      v53 = sub_1C2C00C(methods, v50, 3LL);
                    }
                    if ( ((*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v53)(methods, *(_QWORD *)(v53 + 8)) & 1) == 0 )
                      return v14;
                  }
                }
              }
            }
          }
        }
      }
      v54 = checkRoute->fields._size;
      v14 = ++v16 < v54;
      if ( v16 >= v54 )
        return v14;
    }
LABEL_65:
    sub_1BDBAD4(Item, v12);
  }
  return v14;
}


void __fastcall WarBoardAI__Clear(WarBoardAI_o *this, const MethodInfo *method)
{
  WarBoardAIRoute_o *routeClass; // x0

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_1BDBAD4(0LL, method);
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
  __int64 v8; // x1
  Il2CppObject *v9; // x21
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x20
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x0
  int32_t v19; // [xsp+Ch] [xbp-44h] BYREF
  int32_t v20; // [xsp+18h] [xbp-38h] BYREF
  int32_t v21; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4B423E0 & 1) == 0 )
  {
    sub_1BDB878(&int_TypeInfo, *(_QWORD *)&forceId);
    sub_1BDB878(&StringLiteral_25225/*"{0},{1},{2}"*/, v8);
    byte_4B423E0 = 1;
  }
  v21 = forceId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, *(_QWORD *)&groupId, *(_QWORD *)&index, method);
  v20 = groupId;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v10, v11, v12);
  v19 = index;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v14, v15, v16);
  return System_String__Format_62613620((System_String_o *)StringLiteral_25225/*"{0},{1},{2}"*/, v9, v13, v17, 0LL);
}


bool __fastcall WarBoardAI__Execute(WarBoardAI_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *executeRoute; // x0
  int32_t routeIndex; // w1
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x8
  WarBoardPieceData_o *monitor; // x20
  int32_t v12; // w8
  int32_t v13; // w8
  bool v14; // w22
  WarBoardManager_o *v16; // x21
  int32_t version; // w22
  int32_t v18; // w21
  WarBoardPieceData_o *Piece_36861404; // x0
  System_Int32_array *v20; // x21
  WarBoardManager_o *v21; // x21
  int32_t v22; // w8
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v23; // x9

  if ( (byte_4B423DE & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__, v3);
    sub_1BDB878(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    sub_1BDB878(&WarBoardAIManager_TypeInfo, v5);
    byte_4B423DE = 1;
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
                                                        (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
  if ( !Item )
    goto LABEL_40;
  v10 = Item;
  Item = (System_Collections_Generic_List_object__o *)this->fields.executeRoute;
  if ( !Item )
    goto LABEL_40;
  monitor = (WarBoardPieceData_o *)v10[1].monitor;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                        Item,
                                                        this->fields.routeIndex,
                                                        (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
  if ( !Item )
    goto LABEL_40;
  Item = (System_Collections_Generic_List_object__o *)WarBoardAIRoute_RouteData__get_notAction(
                                                        (WarBoardAIRoute_RouteData_o *)Item,
                                                        0LL);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    v12 = this->fields.routeIndex;
    this->fields.isEndPhase = 0;
    v13 = v12 + 1;
    this->fields.routeIndex = v13;
    goto LABEL_37;
  }
  Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this->fields.executeRoute )
    goto LABEL_40;
  v16 = (WarBoardManager_o *)Item;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)this->fields.executeRoute,
                                                        this->fields.routeIndex,
                                                        (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
  if ( !Item )
    goto LABEL_40;
  version = Item->fields._version;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  Item = (System_Collections_Generic_List_object__o *)WarBoardAIManager__GetSquare(version, 0LL);
  if ( !v16 )
    goto LABEL_40;
  WarBoardManager__CheckSelectSquare(v16, monitor, (WarBoardSquareData_o *)Item, 1, 0LL);
  Item = (System_Collections_Generic_List_object__o *)this->fields.executeRoute;
  if ( !Item )
    goto LABEL_40;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                        Item,
                                                        this->fields.routeIndex,
                                                        (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
                                                        (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
                                                          (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
    if ( !Item )
      goto LABEL_40;
    v18 = Item->fields._version;
    Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Item )
      goto LABEL_40;
    Item = (System_Collections_Generic_List_object__o *)Item[11].klass;
    if ( !Item )
      goto LABEL_40;
    Piece_36861404 = WarBoardData__GetPiece_36861404((WarBoardData_o *)Item, v18, 0LL);
    if ( Piece_36861404 )
    {
      if ( WarBoardPieceData__get_isServant(Piece_36861404, 0LL) )
      {
        Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( Item )
        {
          Item = (System_Collections_Generic_List_object__o *)Item[11].klass;
          if ( Item )
          {
            v20 = WarBoardData__GetInRangeSquareIndecies((WarBoardData_o *)Item, v18, 1, 0, 0LL);
            Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
            if ( Item )
            {
              WarBoardManager__DispPartyBuff((WarBoardManager_o *)Item, v20, 0LL);
              goto LABEL_33;
            }
          }
        }
LABEL_40:
        sub_1BDBAD4(Item, v9);
      }
    }
  }
LABEL_33:
  Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this->fields.executeRoute )
    goto LABEL_40;
  v21 = (WarBoardManager_o *)Item;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)this->fields.executeRoute,
                                                        this->fields.routeIndex,
                                                        (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
  if ( !Item || !v21 )
    goto LABEL_40;
  v14 = 1;
  Item = (System_Collections_Generic_List_object__o *)WarBoardManager__PieceAction_37061116(
                                                        v21,
                                                        monitor,
                                                        Item->fields._version,
                                                        0LL,
                                                        1,
                                                        0LL);
  v22 = this->fields.routeIndex;
  this->fields.isEndPhase = (unsigned __int8)Item & 1;
  v13 = v22 + 1;
  this->fields.routeIndex = v13;
  if ( ((unsigned __int8)Item & 1) != 0 )
    return v14;
LABEL_37:
  v23 = this->fields.executeRoute;
  if ( !v23 )
    goto LABEL_40;
  v14 = 1;
  if ( v23->fields._size <= v13 )
    this->fields.isEndRoute = 1;
  return v14;
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
  const MethodInfo *v17; // x3
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

  if ( (byte_4B423DF & 1) == 0 )
  {
    sub_1BDB878(&System_Decimal_TypeInfo, weightTable);
    sub_1BDB878(&Method_System_Linq_Enumerable_Sum_Decimal___, v4);
    sub_1BDB878(&System_Func_Decimal__Decimal__TypeInfo, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_Decimal__get_Count__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_Decimal__get_Item__, v7);
    sub_1BDB878(&System_Math_TypeInfo, v8);
    sub_1BDB878(&Method_WarBoardAI___c__GetRandomIndex_b__14_0__, v9);
    sub_1BDB878(&WarBoardAI___c_TypeInfo, v10);
    byte_4B423DF = 1;
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
    _9__14_0 = (System_Func_Decimal__Decimal__o *)sub_1BDBAC4(System_Func_Decimal__Decimal__TypeInfo);
    System_Func_Decimal__Decimal____ctor(_9__14_0, v14, Method_WarBoardAI___c__GetRandomIndex_b__14_0__, 0LL);
    v15 = WarBoardAI___c_TypeInfo->static_fields;
    v15->__9__14_0 = _9__14_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&v15->__9__14_0, (int32_t)_9__14_0, v16, v17);
  }
  v19 = System_Linq_Enumerable__Sum_Decimal_(
          (System_Decimal_o *)static_fields,
          (System_Collections_Generic_IEnumerable_TSource__o *)weightTable,
          (System_Func_TSource__Decimal__o *)_9__14_0,
          (const MethodInfo_306F298 *)Method_System_Linq_Enumerable_Sum_Decimal___);
  v20 = v18;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !byte_4B423EF )
  {
    sub_1BDB878(&System_Decimal_TypeInfo, v18);
    byte_4B423EF = 1;
  }
  cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
  if ( !(_DWORD)cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  v22 = System_Decimal__Floor(cctor_finished, v19, v20);
  v24 = v23;
  if ( !System_Decimal_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  v25 = System_Decimal__op_Explicit_64488944(v22, v24);
  v26 = UnityEngine_Random__Range(0.0, v25, 0LL);
  v28 = System_Decimal__op_Explicit(v27, v26, 0LL);
  if ( !weightTable )
    sub_1BDBAD4(v28, v29);
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
             (const MethodInfo_36A9274 *)Method_System_Collections_Generic_List_Decimal__get_Item__);
    v36 = v35;
    if ( !System_Decimal_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
    if ( System_Decimal__op_GreaterThanOrEqual(Item, v36, v31) )
      break;
    v38 = System_Collections_Generic_List_Decimal___get_Item(
            v37,
            weightTable,
            v33,
            (const MethodInfo_36A9274 *)Method_System_Collections_Generic_List_Decimal__get_Item__);
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
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4B423DC & 1) == 0 )
  {
    sub_1BDB878(&WarBoardAI__Think_d__11_TypeInfo, method);
    byte_4B423DC = 1;
  }
  v3 = sub_1BDBAC4(WarBoardAI__Think_d__11_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
    sub_1BDBAD4(0LL, aiId);
  WarBoardAIRoute__UpdatePiecePersonalityDic(routeClass, aiId, pieceIndex, 0LL);
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
  WarBoardAIRoute_o *routeClass; // x20
  System_Func_T__TResult__o *_9__11_7; // x21
  Il2CppObject *v11; // x22
  struct WarBoardAI___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x0
  __int64 v16; // x1
  float v17; // s0

  if ( (byte_4B423E1 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____77120784, x);
    sub_1BDB878(&System_Func_WarBoardAIRoute_RouteData__float__TypeInfo, v5);
    sub_1BDB878(&Method_WarBoardAI___c__Think_b__11_7__, v6);
    sub_1BDB878(&WarBoardAI___c_TypeInfo, v7);
    byte_4B423E1 = 1;
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
    _9__11_7 = (System_Func_T__TResult__o *)sub_1BDBAC4(System_Func_WarBoardAIRoute_RouteData__float__TypeInfo);
    System_Func_object__float____ctor(_9__11_7, v11, Method_WarBoardAI___c__Think_b__11_7__, 0LL);
    static_fields = WarBoardAI___c_TypeInfo->static_fields;
    static_fields->__9__11_7 = (struct System_Func_WarBoardAIRoute_RouteData__float__o *)_9__11_7;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__11_7, (int32_t)_9__11_7, v13, v14);
  }
  v17 = System_Linq_Enumerable__Sum_object__50787184(
          (System_Collections_Generic_IEnumerable_TSource__o *)x,
          (System_Func_TSource__float__o *)_9__11_7,
          (const MethodInfo_306F370 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____77120784);
  if ( !routeClass )
    sub_1BDBAD4(v15, v16);
  return !WarBoardAIRoute__IsThinkingThreshold(routeClass, v17, 0LL);
}


int32_t __fastcall WarBoardAI__get_ForceId(WarBoardAI_o *this, const MethodInfo *method)
{
  struct WarBoardAIRoute_o *routeClass; // x8

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_1BDBAD4(this, method);
  return routeClass->fields.forceId;
}


int32_t __fastcall WarBoardAI__get_GroupId(WarBoardAI_o *this, const MethodInfo *method)
{
  struct WarBoardAIRoute_o *routeClass; // x8

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_1BDBAD4(this, method);
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
  const MethodInfo *v3; // x3
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
  WarBoardAIRoute_o *routeClass; // x20
  System_Collections_Generic_Dictionary_int__uint__o *placePieceData; // x21
  System_Collections_Generic_List_object__o *v55; // x22
  System_Collections_IEnumerator_o *RouteData; // x0
  CGThumbnailListItem_o *p__2__current; // x26
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  bool v60; // w20
  WarBoardAI__Think_d__11_o *v61; // x19
  WarBoardAI__Think_d__11_o *availableRouteList_5__4; // x26
  struct WarBoardAIRoute_o *v63; // x8
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *allRouteList; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *allRouteList_5__2; // x8
  __int64 v69; // x27
  Il2CppClass *klass; // x8
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *v71; // x22
  int32_t namespaze_high; // w8
  BalanceConfig_c *v73; // x8
  WarBoardAI___c_c *v74; // x0
  _BOOL4 IsWarBoardAiCalcEvalSum; // w21
  struct WarBoardAI___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__11_0; // x23
  Il2CppObject *v78; // x24
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  struct WarBoardAI___c_StaticFields *v81; // x0
  CGThumbnailListItem_o *p__9__11_0; // x0
  Il2CppObject *v83; // x24
  struct WarBoardAI___c_StaticFields *v84; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v85; // x0
  System_Object_array *v86; // x22
  System_Collections_Generic_List_object__o *v87; // x24
  WarBoardAI__Think_d__11_o **p_availableRouteList_5__4; // x23
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  System_Collections_Generic_HashSet_T__o *v91; // x25
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  const MethodInfo *v94; // x2
  const MethodInfo *v95; // x3
  __int64 v96; // x4
  __int64 v97; // x8
  unsigned __int64 v98; // x20
  int32_t pickValue_5__3; // w28
  CGThumbnailListItem_o *v100; // x25
  System_Collections_ICollection_o *v101; // x26
  System_Collections_Generic_HashSet_T__o *v102; // x27
  System_Func_object__bool__o *v103; // x27
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  __int64 v106; // x8
  _QWORD *v107; // x9
  __int64 _2__current_low; // x10
  __int64 v109; // x8
  System_Func_object__bool__o *v110; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v111; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v112; // x0
  System_Object_array *v113; // x0
  int32_t v114; // w2
  const MethodInfo *v115; // x3
  __int64 v116; // x2
  __int64 v117; // x3
  __int64 v118; // x4
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *evalValueSortList_5__5; // x8
  System_Collections_Generic_List_Decimal__o *v120; // x21
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *v121; // x22
  int v122; // w29
  int max_length; // w8
  int v124; // w24
  int v125; // w25
  char v126; // w26
  _BOOL8 v127; // x0
  __int64 v128; // x1
  WarBoardAIRoute_RouteData_o *current; // x22
  WarBoardPieceData_o *actionPiece; // x0
  Il2CppClass *v131; // x8
  float v132; // s12
  _BOOL8 v133; // x0
  __int64 v134; // x1
  WarBoardTacticalTrendEntity_o *v135; // x22
  float BestMagnification; // s8
  float LowestMagnification; // s0
  int value; // w23
  float ImmobilityMagnification; // s0
  BalanceConfig_c *v140; // x0
  float v141; // s8
  System_Decimal_c *v142; // x8
  _BOOL4 v143; // w25
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *v144; // x8
  WarBoardAI__Think_d__11_o *v145; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v146; // x24
  WarBoardAI___c_c *v147; // x0
  System_Decimal_o *v148; // x23
  struct WarBoardAI___c_StaticFields *v149; // x8
  System_Func_T__TResult__o *_9__11_8; // x25
  System_Func_T__TResult__o *_9__11_9; // x25
  Il2CppObject *v152; // x26
  struct WarBoardAI___c_StaticFields *v153; // x0
  int32_t v154; // w2
  const MethodInfo *v155; // x3
  System_Decimal_o *v156; // x24
  System_Decimal_o *cctor_finished; // x8
  Il2CppObject *v158; // x26
  struct WarBoardAI___c_StaticFields *v159; // x0
  int32_t v160; // w2
  const MethodInfo *v161; // x3
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *v162; // x8
  System_Decimal_o *v163; // x8
  WarBoardAI__Think_d__11_o *v164; // x24
  int32_t flags; // w26
  System_Decimal_o *v166; // x25
  System_Decimal_o *v167; // x0
  System_Decimal_o *v168; // x8
  struct System_Decimal_array *items; // x9
  __int64 size; // x11
  Il2CppObject *v171; // x9
  const MethodInfo *v172; // x3
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v173; // x1
  WarBoardAI___c_c *v174; // x0
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x22
  System_Func_T__TResult__o *_9__11_3; // x23
  Il2CppObject *v177; // x24
  struct WarBoardAI___c_StaticFields *v178; // x0
  int32_t v179; // w2
  const MethodInfo *v180; // x3
  WarBoardAI_o *v181; // x0
  const MethodInfo *v182; // x2
  __int64 v183; // x2
  __int64 v184; // x3
  __int64 v185; // x4
  __int64 v186; // x0
  CGThumbnailListItem_o *v187; // x26
  int32_t v188; // w2
  const MethodInfo *v189; // x3
  int v190; // w8
  System_Collections_Generic_HashSet_T__o *v191; // x21
  int32_t v192; // w2
  const MethodInfo *v193; // x3
  int32_t v194; // w22
  WarBoardAI__Think_d__11_o *v195; // x23
  int32_t v196; // w2
  const MethodInfo *v197; // x3
  __int64 v198; // x2
  __int64 v199; // x3
  __int64 v200; // x4
  __int64 v201; // x0
  CGThumbnailListItem_o *v202; // x26
  int32_t v203; // w2
  const MethodInfo *v204; // x3
  __int64 v205; // x0
  int32_t v206; // w2
  const MethodInfo *v207; // x3
  __int64 v208; // x0
  int32_t v209; // w2
  const MethodInfo *v210; // x3
  __int64 v211; // x0
  int32_t v212; // w2
  const MethodInfo *v213; // x3
  WarBoardAI__Think_d__11_o **v215; // [xsp+10h] [xbp-110h]
  Il2CppObject *object; // [xsp+18h] [xbp-108h]
  System_Collections_Generic_HashSet_T__o **v217; // [xsp+20h] [xbp-100h]
  System_Collections_Generic_List_Decimal__o *v218; // [xsp+20h] [xbp-100h]
  Il2CppObject *v219; // [xsp+28h] [xbp-F8h]
  WarBoardAI__Think_d__11_o *v220; // [xsp+30h] [xbp-F0h]
  System_Collections_Generic_List_Enumerator_object__o v221; // [xsp+38h] [xbp-E8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v222; // [xsp+50h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v223; // [xsp+70h] [xbp-B0h] BYREF

  v4 = this;
  if ( (byte_4B423EA & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, method);
    sub_1BDB878(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___, v5);
    sub_1BDB878(&bool_TypeInfo, v6);
    sub_1BDB878(&System_Decimal_TypeInfo, v7);
    sub_1BDB878(&Method_System_Linq_Enumerable_OrderByDescending_List_WarBoardAIRoute_RouteData___Decimal___, v8);
    sub_1BDB878(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____77120784, v9);
    sub_1BDB878(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___, v10);
    sub_1BDB878(&Method_System_Linq_Enumerable_Take_List_WarBoardAIRoute_RouteData____, v11);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____, v12);
    sub_1BDB878(&Method_System_Linq_Enumerable_Where_List_WarBoardAIRoute_RouteData____, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__Dispose__, v15);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__, v16);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__MoveNext__, v17);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__, v18);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__get_Current__, v19);
    sub_1BDB878(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v20);
    sub_1BDB878(&System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo, v21);
    sub_1BDB878(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo, v22);
    sub_1BDB878(&System_Func_WarBoardAIRoute_RouteData__float__TypeInfo, v23);
    sub_1BDB878(&System_Func_List_WarBoardAIRoute_RouteData___bool__TypeInfo, v24);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__, v25);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__, v26);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__, v27);
    sub_1BDB878(&System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo, v28);
    sub_1BDB878(&Method_System_Collections_Generic_List_Decimal__Add__, v29);
    sub_1BDB878(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__, v30);
    sub_1BDB878(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__, v31);
    sub_1BDB878(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__GetEnumerator__, v32);
    sub_1BDB878(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor__, v33);
    sub_1BDB878(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__, v34);
    sub_1BDB878(&Method_System_Collections_Generic_List_Decimal___ctor__, v35);
    sub_1BDB878(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___get_Count__, v36);
    sub_1BDB878(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__, v37);
    sub_1BDB878(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__, v38);
    sub_1BDB878(&System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo, v39);
    sub_1BDB878(&System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo, v40);
    sub_1BDB878(&System_Collections_Generic_List_Decimal__TypeInfo, v41);
    sub_1BDB878(&Method_WarBoardAI___c__Think_b__11_0__, v42);
    sub_1BDB878(&Method_WarBoardAI___c__Think_b__11_1__, v43);
    sub_1BDB878(&Method_WarBoardAI___c__Think_b__11_3__, v44);
    sub_1BDB878(&Method_WarBoardAI___c__Think_b__11_8__, v45);
    sub_1BDB878(&Method_WarBoardAI___c__Think_b__11_9__, v46);
    sub_1BDB878(&Method_WarBoardAI___c__DisplayClass11_0__Think_b__6__, v47);
    sub_1BDB878(&WarBoardAI___c__DisplayClass11_0_TypeInfo, v48);
    sub_1BDB878(&WarBoardAI___c_TypeInfo, v49);
    this = (WarBoardAI__Think_d__11_o *)sub_1BDB878(&Method_WarBoardAI__Think_b__11_2__, v50);
    byte_4B423EA = 1;
  }
  memset(&v223, 0, sizeof(v223));
  memset(&v222, 0, sizeof(v222));
  _4__this = v4->fields.__4__this;
  v219 = (Il2CppObject *)_4__this;
  v220 = v4;
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
      WarBoardAIRoute__BeforeCreateRouteData((WarBoardAIRoute_o *)this, 0LL);
      routeClass = v52->fields.routeClass;
      if ( !routeClass )
        goto LABEL_164;
      placePieceData = routeClass->fields.placePieceData;
      v55 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v55,
        (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor__);
      RouteData = WarBoardAIRoute__CreateRouteData(
                    routeClass,
                    placePieceData,
                    0,
                    (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v55,
                    0LL);
      v4->fields.__2__current = (Il2CppObject *)RouteData;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1BDB81C(p__2__current, (int32_t)RouteData, v58, v59);
      v60 = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return v60;
    case 1:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_164;
      v63 = _4__this->fields.routeClass;
      if ( !v63 )
        goto LABEL_164;
      allRouteList = v63->fields.allRouteList;
      v4->fields._allRouteList_5__2 = allRouteList;
      sub_1BDB81C((CGThumbnailListItem_o *)&v4->fields._allRouteList_5__2, (int32_t)allRouteList, v2, v3);
      allRouteList_5__2 = v4->fields._allRouteList_5__2;
      if ( !allRouteList_5__2 )
        goto LABEL_164;
      if ( !allRouteList_5__2->fields._size )
      {
        v60 = 1;
        LOBYTE(v221.fields._list) = 1;
        v211 = j_il2cpp_value_box_0(bool_TypeInfo, &v221, v65, v66, v67);
        v4->fields.__2__current = (Il2CppObject *)v211;
        v187 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1BDB81C(v187, v211, v212, v213);
        v190 = 2;
        goto LABEL_169;
      }
LABEL_16:
      v69 = sub_1BDBAC4(WarBoardAI___c__DisplayClass11_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v69, 0LL);
      if ( !v219 )
        goto LABEL_164;
      klass = v219[1].klass;
      if ( !klass )
        goto LABEL_164;
      v71 = v4->fields._allRouteList_5__2;
      if ( !v71 )
        goto LABEL_164;
      namespaze_high = HIDWORD(klass->_1.namespaze);
      if ( namespaze_high >= v71->fields._size )
        namespaze_high = v71->fields._size;
      if ( !namespaze_high )
        namespaze_high = v71->fields._size;
      v4->fields._pickValue_5__3 = namespaze_high;
      v73 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v73 = BalanceConfig_TypeInfo;
        v71 = v4->fields._allRouteList_5__2;
      }
      v74 = WarBoardAI___c_TypeInfo;
      IsWarBoardAiCalcEvalSum = v73->static_fields->IsWarBoardAiCalcEvalSum;
      if ( !WarBoardAI___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
        v74 = WarBoardAI___c_TypeInfo;
      }
      static_fields = v74->static_fields;
      if ( IsWarBoardAiCalcEvalSum )
      {
        _9__11_0 = (System_Func_T__TResult__o *)static_fields->__9__11_0;
        if ( _9__11_0 )
          goto LABEL_39;
        if ( !v74->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v74);
          v74 = WarBoardAI___c_TypeInfo;
        }
        v78 = (Il2CppObject *)v74->static_fields->__9;
        _9__11_0 = (System_Func_T__TResult__o *)sub_1BDBAC4(System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo);
        System_Func_object__Decimal____ctor(_9__11_0, v78, Method_WarBoardAI___c__Think_b__11_0__, 0LL);
        v81 = WarBoardAI___c_TypeInfo->static_fields;
        v81->__9__11_0 = (struct System_Func_List_WarBoardAIRoute_RouteData___Decimal__o *)_9__11_0;
        p__9__11_0 = (CGThumbnailListItem_o *)&v81->__9__11_0;
      }
      else
      {
        _9__11_0 = (System_Func_T__TResult__o *)static_fields->__9__11_1;
        if ( _9__11_0 )
          goto LABEL_39;
        if ( !v74->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v74);
          v74 = WarBoardAI___c_TypeInfo;
        }
        v83 = (Il2CppObject *)v74->static_fields->__9;
        _9__11_0 = (System_Func_T__TResult__o *)sub_1BDBAC4(System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo);
        System_Func_object__Decimal____ctor(_9__11_0, v83, Method_WarBoardAI___c__Think_b__11_1__, 0LL);
        v84 = WarBoardAI___c_TypeInfo->static_fields;
        v84->__9__11_1 = (struct System_Func_List_WarBoardAIRoute_RouteData___Decimal__o *)_9__11_0;
        p__9__11_0 = (CGThumbnailListItem_o *)&v84->__9__11_1;
      }
      sub_1BDB81C(p__9__11_0, (int32_t)_9__11_0, v79, v80);
LABEL_39:
      v85 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__Decimal_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v71,
                                                                   (System_Func_TSource__TKey__o *)_9__11_0,
                                                                   (const MethodInfo_305FB14 *)Method_System_Linq_Enumerable_OrderByDescending_List_WarBoardAIRoute_RouteData___Decimal___);
      v86 = System_Linq_Enumerable__ToArray_object_(
              v85,
              (const MethodInfo_30707A8 *)Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____);
      v87 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v87,
        (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
      v4->fields._availableRouteList_5__4 = (struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *)v87;
      p_availableRouteList_5__4 = (WarBoardAI__Think_d__11_o **)&v4->fields._availableRouteList_5__4;
      sub_1BDB81C((CGThumbnailListItem_o *)&v4->fields._availableRouteList_5__4, (int32_t)v87, v89, v90);
      v91 = (System_Collections_Generic_HashSet_T__o *)sub_1BDBAC4(System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo);
      System_Collections_Generic_HashSet_object____ctor(
        v91,
        (const MethodInfo_3591DC4 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__);
      if ( !v69 )
        goto LABEL_164;
      object = (Il2CppObject *)v69;
      *(_QWORD *)(v69 + 16) = v91;
      v217 = (System_Collections_Generic_HashSet_T__o **)(v69 + 16);
      sub_1BDB81C((CGThumbnailListItem_o *)(v69 + 16), (int32_t)v91, v92, v93);
      if ( !v86 )
        goto LABEL_164;
      v97 = *(_QWORD *)&v86->max_length;
      if ( (int)v97 >= 1 )
      {
        v98 = 0LL;
        pickValue_5__3 = v4->fields._pickValue_5__3;
        v100 = (CGThumbnailListItem_o *)(v69 + 24);
        v215 = (WarBoardAI__Think_d__11_o **)&v4->fields._availableRouteList_5__4;
        do
        {
          if ( v98 >= (unsigned int)v97 )
            goto LABEL_171;
          v101 = (System_Collections_ICollection_o *)v86->m_Items[v98];
          this = (WarBoardAI__Think_d__11_o *)BasicHelper__IsNullOrEmpty(v101, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            this = (WarBoardAI__Think_d__11_o *)BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              this = (WarBoardAI__Think_d__11_o *)BalanceConfig_TypeInfo;
            }
            if ( LOBYTE(this[2].fields._allRouteList_5__2[23].fields._size) )
            {
              if ( !v101 )
                goto LABEL_164;
              this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)v101,
                                                    0,
                                                    (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
              if ( !this )
                goto LABEL_164;
              if ( WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)this, 0LL) )
              {
                v102 = *v217;
                this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_List_object___get_Item(
                                                      (System_Collections_Generic_List_object__o *)v101,
                                                      0,
                                                      (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
                if ( !this || !v102 )
                  goto LABEL_164;
                this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_HashSet_object___Add(
                                                      v102,
                                                      *(Il2CppObject **)&this->fields._pickValue_5__3,
                                                      (const MethodInfo_3592FA8 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__);
                goto LABEL_69;
              }
              v103 = (System_Func_object__bool__o *)v100->klass;
              if ( !v100->klass )
              {
                v103 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
                System_Func_object__bool____ctor(
                  v103,
                  object,
                  Method_WarBoardAI___c__DisplayClass11_0__Think_b__6__,
                  0LL);
                object[1].monitor = v103;
                p_availableRouteList_5__4 = v215;
                sub_1BDB81C(v100, (int32_t)v103, v104, v105);
              }
              this = (WarBoardAI__Think_d__11_o *)BasicHelper__Any_object_(
                                                    (System_Collections_Generic_List_T__o *)v101,
                                                    (System_Func_T__bool__o *)v103,
                                                    (const MethodInfo_301CDFC *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
              if ( ((unsigned __int8)this & 1) != 0 )
                goto LABEL_69;
              this = (WarBoardAI__Think_d__11_o *)BalanceConfig_TypeInfo;
            }
            if ( !LODWORD(this[3].monitor) )
            {
              j_il2cpp_runtime_class_init_0(this);
              this = (WarBoardAI__Think_d__11_o *)BalanceConfig_TypeInfo;
            }
            if ( !BYTE1(this[2].fields._allRouteList_5__2[23].fields._size)
              || (this = (WarBoardAI__Think_d__11_o *)WarBoardAI__CheckWasteRoute(
                                                        (WarBoardAI_o *)this,
                                                        (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v101,
                                                        v94),
                  ((unsigned __int8)this & 1) == 0) )
            {
              this = *p_availableRouteList_5__4;
              if ( !*p_availableRouteList_5__4 )
                goto LABEL_164;
              v106 = *(_QWORD *)&this->fields.__1__state;
              v107 = Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__;
              ++HIDWORD(this->fields.__2__current);
              if ( !v106 )
                goto LABEL_164;
              _2__current_low = SLODWORD(this->fields.__2__current);
              if ( (unsigned int)_2__current_low >= *(_DWORD *)(v106 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)v101,
                  *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
              }
              else
              {
                v109 = v106 + 8 * _2__current_low;
                LODWORD(this->fields.__2__current) = _2__current_low + 1;
                *(_QWORD *)(v109 + 32) = v101;
                sub_1BDB81C((CGThumbnailListItem_o *)(v109 + 32), (int32_t)v101, (int32_t)v94, v95);
              }
              availableRouteList_5__4 = *p_availableRouteList_5__4;
              if ( !*p_availableRouteList_5__4 )
                goto LABEL_164;
              if ( pickValue_5__3 <= SLODWORD(availableRouteList_5__4->fields.__2__current) )
                goto LABEL_71;
            }
          }
LABEL_69:
          LODWORD(v97) = v86->max_length;
        }
        while ( (__int64)++v98 < (int)v97 );
      }
      availableRouteList_5__4 = *p_availableRouteList_5__4;
      if ( !*p_availableRouteList_5__4 )
        goto LABEL_164;
LABEL_71:
      v61 = v220;
      if ( SLODWORD(availableRouteList_5__4->fields.__2__current) <= 0 )
      {
        v60 = 1;
        LOBYTE(v221.fields._list) = 1;
        v208 = j_il2cpp_value_box_0(bool_TypeInfo, &v221, v94, v95, v96);
        v220->fields.__2__current = (Il2CppObject *)v208;
        sub_1BDB81C((CGThumbnailListItem_o *)&v220->fields.__2__current, v208, v209, v210);
        v220->fields.__1__state = 3;
      }
      else
      {
LABEL_72:
        v110 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_List_WarBoardAIRoute_RouteData___bool__TypeInfo);
        System_Func_object__bool____ctor(v110, v219, Method_WarBoardAI__Think_b__11_2__, 0LL);
        v111 = System_Linq_Enumerable__Where_object_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)availableRouteList_5__4,
                 (System_Func_TSource__bool__o *)v110,
                 (const MethodInfo_3077440 *)Method_System_Linq_Enumerable_Where_List_WarBoardAIRoute_RouteData____);
        v112 = System_Linq_Enumerable__Take_object_(
                 v111,
                 v61->fields._pickValue_5__3,
                 (const MethodInfo_306F55C *)Method_System_Linq_Enumerable_Take_List_WarBoardAIRoute_RouteData____);
        v113 = System_Linq_Enumerable__ToArray_object_(
                 v112,
                 (const MethodInfo_30707A8 *)Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____);
        v61->fields._evalValueSortList_5__5 = (struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *)v113;
        sub_1BDB81C((CGThumbnailListItem_o *)&v61->fields._evalValueSortList_5__5, (int32_t)v113, v114, v115);
        evalValueSortList_5__5 = v61->fields._evalValueSortList_5__5;
        if ( !evalValueSortList_5__5 )
          goto LABEL_164;
        v4 = v61;
        if ( !*(_QWORD *)&evalValueSortList_5__5->max_length )
        {
          v60 = 1;
          LOBYTE(v221.fields._list) = 1;
          v205 = j_il2cpp_value_box_0(bool_TypeInfo, &v221, v116, v117, v118);
          v61->fields.__2__current = (Il2CppObject *)v205;
          v187 = (CGThumbnailListItem_o *)&v61->fields.__2__current;
          sub_1BDB81C((CGThumbnailListItem_o *)&v61->fields.__2__current, v205, v206, v207);
          v190 = 4;
          goto LABEL_169;
        }
LABEL_74:
        v120 = (System_Collections_Generic_List_Decimal__o *)sub_1BDBAC4(System_Collections_Generic_List_Decimal__TypeInfo);
        System_Collections_Generic_List_Decimal____ctor(
          v120,
          (const MethodInfo_36A8D10 *)Method_System_Collections_Generic_List_Decimal___ctor__);
        v121 = v4->fields._evalValueSortList_5__5;
        if ( !v121 )
          goto LABEL_164;
        v122 = 0;
        v218 = v120;
        while ( 1 )
        {
          max_length = v121->max_length;
          if ( v122 >= max_length )
            break;
          if ( v122 >= (unsigned int)max_length )
            goto LABEL_171;
          this = (WarBoardAI__Think_d__11_o *)v121->m_Items[v122];
          if ( !this )
            goto LABEL_164;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v221,
            (System_Collections_Generic_List_object__o *)this,
            (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
          v124 = 0;
          v125 = 0;
          v126 = 0;
          v223 = v221;
          while ( 1 )
          {
            v127 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     &v223,
                     (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
            if ( !v127 )
              break;
            current = (WarBoardAIRoute_RouteData_o *)v223.fields._current;
            if ( !v223.fields._current )
              sub_1BDBAD4(v127, v128);
            if ( WarBoardAIRoute_RouteData__HasFlag((WarBoardAIRoute_RouteData_o *)v223.fields._current, 4LL, 0LL) )
            {
              actionPiece = current->fields.actionPiece;
              if ( actionPiece )
                v125 |= WarBoardPieceData__get_isMaster(actionPiece, 0LL);
              v126 = 1;
            }
            v124 |= WarBoardAIRoute_RouteData__HasFlag(current, 8LL, 0LL);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v223,
            (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
          if ( !v219 )
            goto LABEL_164;
          v131 = v219[1].klass;
          if ( !v131 )
            goto LABEL_164;
          this = (WarBoardAI__Think_d__11_o *)v131->_1.klass;
          if ( !this )
            goto LABEL_164;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v221,
            (System_Collections_Generic_List_object__o *)this,
            (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__GetEnumerator__);
          v132 = 0.0;
          v222 = v221;
          while ( 1 )
          {
            v133 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     &v222,
                     (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__MoveNext__);
            if ( !v133 )
              break;
            v135 = (WarBoardTacticalTrendEntity_o *)v222.fields._current;
            if ( !v222.fields._current )
              sub_1BDBAD4(v133, v134);
            switch ( HIDWORD(v222.fields._current[1].klass) )
            {
              case 0:
                if ( v122 < SLODWORD(v222.fields._current[1].monitor) )
                {
                  BestMagnification = WarBoardTacticalTrendEntity__GetBestMagnification(
                                        (WarBoardTacticalTrendEntity_o *)v222.fields._current,
                                        0LL);
                  LowestMagnification = WarBoardTacticalTrendEntity__GetLowestMagnification(v135, 0LL);
                  value = v135->fields.value;
                  ImmobilityMagnification = WarBoardTacticalTrendEntity__GetBestMagnification(v135, 0LL)
                                          - (float)((float)((float)(BestMagnification - LowestMagnification)
                                                          / (float)((float)value + -1.0))
                                                  * (float)v122);
                  goto LABEL_102;
                }
                break;
              case 1:
                if ( (v126 & 1) != 0 )
                  goto LABEL_101;
                break;
              case 4:
                if ( (v125 & 1) != 0 )
                  goto LABEL_101;
                break;
              case 5:
                if ( (v124 & 1) != 0 )
                {
LABEL_101:
                  ImmobilityMagnification = WarBoardTacticalTrendEntity__GetImmobilityMagnification(
                                              (WarBoardTacticalTrendEntity_o *)v222.fields._current,
                                              0LL);
LABEL_102:
                  v132 = v132 + ImmobilityMagnification;
                }
                break;
              default:
                continue;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v222,
            (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__Dispose__);
          v4 = v220;
          v140 = BalanceConfig_TypeInfo;
          if ( v132 == 0.0 )
            v141 = 1.0;
          else
            v141 = v132;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v140 = BalanceConfig_TypeInfo;
          }
          v142 = System_Decimal_TypeInfo;
          v143 = v140->static_fields->IsWarBoardAiCalcEvalSum;
          if ( !System_Decimal_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
          this = (WarBoardAI__Think_d__11_o *)System_Decimal__op_Explicit((System_Decimal_o *)v142, v141, 0LL);
          v144 = v220->fields._evalValueSortList_5__5;
          if ( !v144 )
            goto LABEL_164;
          if ( v122 >= v144->max_length )
            goto LABEL_171;
          v145 = this;
          v146 = (System_Collections_Generic_IEnumerable_TSource__o *)v144->m_Items[v122];
          v147 = WarBoardAI___c_TypeInfo;
          v148 = (System_Decimal_o *)method;
          if ( !WarBoardAI___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
            v147 = WarBoardAI___c_TypeInfo;
          }
          v149 = v147->static_fields;
          if ( v143 )
          {
            _9__11_8 = (System_Func_T__TResult__o *)v149->__9__11_8;
            if ( !_9__11_8 )
            {
              if ( !v147->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v147);
                v147 = WarBoardAI___c_TypeInfo;
              }
              v152 = (Il2CppObject *)v147->static_fields->__9;
              _9__11_8 = (System_Func_T__TResult__o *)sub_1BDBAC4(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
              System_Func_object__Decimal____ctor(_9__11_8, v152, Method_WarBoardAI___c__Think_b__11_8__, 0LL);
              v153 = WarBoardAI___c_TypeInfo->static_fields;
              v153->__9__11_8 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_8;
              sub_1BDB81C((CGThumbnailListItem_o *)&v153->__9__11_8, (int32_t)_9__11_8, v154, v155);
              v4 = v220;
            }
            v156 = System_Linq_Enumerable__Sum_object__50787040(
                     (System_Decimal_o *)&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___,
                     v146,
                     (System_Func_TSource__Decimal__o *)_9__11_8,
                     (const MethodInfo_306F2E0 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
            cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
            if ( !(_DWORD)cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
          }
          else
          {
            _9__11_9 = (System_Func_T__TResult__o *)v149->__9__11_9;
            if ( !_9__11_9 )
            {
              if ( !v147->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v147);
                v147 = WarBoardAI___c_TypeInfo;
              }
              v158 = (Il2CppObject *)v147->static_fields->__9;
              _9__11_9 = (System_Func_T__TResult__o *)sub_1BDBAC4(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
              System_Func_object__Decimal____ctor(_9__11_9, v158, Method_WarBoardAI___c__Think_b__11_9__, 0LL);
              v159 = WarBoardAI___c_TypeInfo->static_fields;
              v159->__9__11_9 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_9;
              sub_1BDB81C((CGThumbnailListItem_o *)&v159->__9__11_9, (int32_t)_9__11_9, v160, v161);
              v4 = v220;
            }
            this = (WarBoardAI__Think_d__11_o *)System_Linq_Enumerable__Sum_object__50787040(
                                                  (System_Decimal_o *)&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___,
                                                  v146,
                                                  (System_Func_TSource__Decimal__o *)_9__11_9,
                                                  (const MethodInfo_306F2E0 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
            v162 = v4->fields._evalValueSortList_5__5;
            if ( !v162 )
              goto LABEL_164;
            if ( v122 >= v162->max_length )
              goto LABEL_171;
            v163 = (System_Decimal_o *)v162->m_Items[v122];
            if ( !v163 )
              goto LABEL_164;
            v164 = this;
            flags = v163[1].fields.flags;
            v166 = (System_Decimal_o *)method;
            if ( !System_Decimal_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
            v167 = System_Decimal__op_Implicit_64488440(v163, flags, 0LL);
            v4 = v220;
            v156 = System_Decimal__op_Division(v168, (System_Decimal_o *)v164, v166, (const MethodInfo *)v167);
          }
          this = (WarBoardAI__Think_d__11_o *)System_Decimal__op_Multiply(
                                                cctor_finished,
                                                (System_Decimal_o *)v145,
                                                v148,
                                                (const MethodInfo *)v156);
          v120 = v218;
          if ( v218 )
          {
            items = v218->fields._items;
            ++v218->fields._version;
            if ( items )
            {
              size = v218->fields._size;
              v94 = method;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_Decimal___AddWithResize(
                  v218,
                  (System_Decimal_o *)this,
                  (const MethodInfo_36A95A0 *)method);
              }
              else
              {
                v171 = &items->obj + size;
                v218->fields._size = size + 1;
                v171[2].klass = (Il2CppClass *)this;
                v171[2].monitor = (void *)method;
              }
              v121 = v4->fields._evalValueSortList_5__5;
              ++v122;
              if ( v121 )
                continue;
            }
          }
          goto LABEL_164;
        }
        if ( !v219 )
          goto LABEL_164;
        this = (WarBoardAI__Think_d__11_o *)WarBoardAI__GetRandomIndex((WarBoardAI_o *)this, v120, v94);
        if ( (unsigned int)this >= v121->max_length )
LABEL_171:
          sub_1BDBADC(this, method, v94);
        v173 = v121->m_Items[(int)this];
        v219[1].monitor = v173;
        sub_1BDB81C((CGThumbnailListItem_o *)&v219[1].monitor, (int32_t)v173, (int32_t)v94, v172);
        v174 = WarBoardAI___c_TypeInfo;
        monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v219[1].monitor;
        if ( !WarBoardAI___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
          v174 = WarBoardAI___c_TypeInfo;
        }
        _9__11_3 = (System_Func_T__TResult__o *)v174->static_fields->__9__11_3;
        if ( !_9__11_3 )
        {
          if ( !v174->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v174);
            v174 = WarBoardAI___c_TypeInfo;
          }
          v177 = (Il2CppObject *)v174->static_fields->__9;
          _9__11_3 = (System_Func_T__TResult__o *)sub_1BDBAC4(System_Func_WarBoardAIRoute_RouteData__float__TypeInfo);
          System_Func_object__float____ctor(_9__11_3, v177, Method_WarBoardAI___c__Think_b__11_3__, 0LL);
          v178 = WarBoardAI___c_TypeInfo->static_fields;
          v178->__9__11_3 = (struct System_Func_WarBoardAIRoute_RouteData__float__o *)_9__11_3;
          sub_1BDB81C((CGThumbnailListItem_o *)&v178->__9__11_3, (int32_t)_9__11_3, v179, v180);
        }
        System_Linq_Enumerable__Sum_object__50787184(
          monitor,
          (System_Func_TSource__float__o *)_9__11_3,
          (const MethodInfo_306F370 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____77120784);
        if ( WarBoardAI__CheckWasteRoute(
               v181,
               (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v219[1].monitor,
               v182) )
        {
          v60 = 1;
          LOBYTE(v221.fields._list) = 1;
          v186 = j_il2cpp_value_box_0(bool_TypeInfo, &v221, v183, v184, v185);
          v4->fields.__2__current = (Il2CppObject *)v186;
          v187 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1BDB81C(v187, v186, v188, v189);
          v190 = 5;
LABEL_169:
          LODWORD(v187[-1].fields._ThumbnailSpritePath_k__BackingField) = v190;
          return v60;
        }
LABEL_152:
        v191 = (System_Collections_Generic_HashSet_T__o *)sub_1BDBAC4(System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo);
        System_Collections_Generic_HashSet_object____ctor(
          v191,
          (const MethodInfo_3591DC4 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__);
        if ( !v219 || (this = (WarBoardAI__Think_d__11_o *)v219[1].monitor) == 0LL )
LABEL_164:
          sub_1BDBAD4(this, method);
        v194 = LODWORD(this->fields.__2__current) - 1;
        if ( v194 >= 0 )
        {
          while ( 1 )
          {
            this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)this,
                                                  v194,
                                                  (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
            if ( !this )
              goto LABEL_164;
            method = *(const MethodInfo **)&this->fields._pickValue_5__3;
            v195 = this;
            if ( method )
            {
              if ( !v191 )
                goto LABEL_164;
              if ( !System_Collections_Generic_HashSet_object___Contains(
                      v191,
                      (Il2CppObject *)method,
                      (const MethodInfo_35924B8 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__)
                && !WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)v195, 0LL) )
              {
                System_Collections_Generic_HashSet_object___Add(
                  v191,
                  *(Il2CppObject **)&v195->fields._pickValue_5__3,
                  (const MethodInfo_3592FA8 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__);
                this = *(WarBoardAI__Think_d__11_o **)&v195->fields._pickValue_5__3;
                if ( !this )
                  goto LABEL_164;
                WarBoardPieceData__SetPrevAiRoute((WarBoardPieceData_o *)this, (WarBoardAIRoute_RouteData_o *)v195, 0LL);
              }
            }
            if ( --v194 < 0 )
              break;
            this = (WarBoardAI__Think_d__11_o *)v219[1].monitor;
            if ( !this )
              goto LABEL_164;
          }
        }
        v4->fields._availableRouteList_5__4 = 0LL;
        sub_1BDB81C((CGThumbnailListItem_o *)&v4->fields._availableRouteList_5__4, 0, v192, v193);
        v4->fields._evalValueSortList_5__5 = 0LL;
        sub_1BDB81C((CGThumbnailListItem_o *)&v4->fields._evalValueSortList_5__5, 0, v196, v197);
        LOBYTE(v221.fields._list) = 0;
        v201 = j_il2cpp_value_box_0(bool_TypeInfo, &v221, v198, v199, v200);
        v4->fields.__2__current = (Il2CppObject *)v201;
        v202 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1BDB81C(v202, v201, v203, v204);
        LODWORD(v202[-1].fields._ThumbnailSpritePath_k__BackingField) = 6;
        return 1;
      }
      return v60;
    case 2:
      v4->fields.__1__state = -1;
      goto LABEL_16;
    case 3:
      v61 = v4;
      availableRouteList_5__4 = (WarBoardAI__Think_d__11_o *)v4->fields._availableRouteList_5__4;
      v61->fields.__1__state = -1;
      goto LABEL_72;
    case 4:
      v4->fields.__1__state = -1;
      goto LABEL_74;
    case 5:
      v4->fields.__1__state = -1;
      goto LABEL_152;
    case 6:
      v60 = 0;
      v4->fields.__1__state = -1;
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

  v2 = sub_1BDB88C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BDBAC4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BDB88C(&Method_WarBoardAI__Think_d__11_System_Collections_IEnumerator_Reset__);
  sub_1BDB9A0(v3, v4);
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
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B423E2 & 1) == 0 )
  {
    sub_1BDB878(&WarBoardAI___c_TypeInfo, v1);
    byte_4B423E2 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(WarBoardAI___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardAI___c_TypeInfo->static_fields->__9 = (struct WarBoardAI___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)WarBoardAI___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
  const MethodInfo *v14; // x3

  if ( (byte_4B423E3 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___, x);
    sub_1BDB878(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo, v5);
    sub_1BDB878(&Method_WarBoardAI___c__Think_b__11_4__, v6);
    sub_1BDB878(&WarBoardAI___c_TypeInfo, v7);
    byte_4B423E3 = 1;
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
    _9__11_4 = (System_Func_T__TResult__o *)sub_1BDBAC4(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    System_Func_object__Decimal____ctor(_9__11_4, v11, Method_WarBoardAI___c__Think_b__11_4__, 0LL);
    v12 = WarBoardAI___c_TypeInfo->static_fields;
    v12->__9__11_4 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_4;
    sub_1BDB81C((CGThumbnailListItem_o *)&v12->__9__11_4, (int32_t)_9__11_4, v13, v14);
  }
  return System_Linq_Enumerable__Sum_object__50787040(
           (System_Decimal_o *)static_fields,
           (System_Collections_Generic_IEnumerable_TSource__o *)x,
           (System_Func_TSource__Decimal__o *)_9__11_4,
           (const MethodInfo_306F2E0 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
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
  const MethodInfo *v16; // x3
  System_Decimal_o *v17; // x0
  System_Decimal_o *v18; // x1
  System_Decimal_o *v19; // x20
  int32_t size; // w19
  System_Decimal_o *v21; // x21
  System_Decimal_o *cctor_finished; // x8
  System_Decimal_o *v23; // x2
  System_Decimal_o *v24; // x8

  if ( (byte_4B423E5 & 1) == 0 )
  {
    sub_1BDB878(&System_Decimal_TypeInfo, x);
    sub_1BDB878(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___, v5);
    sub_1BDB878(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__, v7);
    sub_1BDB878(&Method_WarBoardAI___c__Think_b__11_5__, v8);
    sub_1BDB878(&WarBoardAI___c_TypeInfo, v9);
    byte_4B423E5 = 1;
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
    _9__11_5 = (System_Func_T__TResult__o *)sub_1BDBAC4(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    System_Func_object__Decimal____ctor(_9__11_5, v13, Method_WarBoardAI___c__Think_b__11_5__, 0LL);
    v14 = WarBoardAI___c_TypeInfo->static_fields;
    v14->__9__11_5 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_5;
    sub_1BDB81C((CGThumbnailListItem_o *)&v14->__9__11_5, (int32_t)_9__11_5, v15, v16);
  }
  v17 = System_Linq_Enumerable__Sum_object__50787040(
          (System_Decimal_o *)static_fields,
          (System_Collections_Generic_IEnumerable_TSource__o *)x,
          (System_Func_TSource__Decimal__o *)_9__11_5,
          (const MethodInfo_306F2E0 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
  if ( !x )
    sub_1BDBAD4(v17, v18);
  v19 = v17;
  size = x->fields._size;
  v21 = v18;
  cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
  if ( !(_DWORD)cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  v23 = System_Decimal__op_Implicit_64488440(cctor_finished, size, 0LL);
  return System_Decimal__op_Division(v24, v19, v21, (const MethodInfo *)v23);
}


float __fastcall WarBoardAI___c___Think_b__11_3(
        WarBoardAI___c_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
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

  if ( (byte_4B423E4 & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_1BDB878(&System_Decimal_TypeInfo, y);
    byte_4B423E4 = 1;
  }
  if ( !y )
    sub_1BDBAD4(this, y);
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

  if ( (byte_4B423E6 & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_1BDB878(&System_Decimal_TypeInfo, y);
    byte_4B423E6 = 1;
  }
  if ( !y )
    sub_1BDBAD4(this, y);
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
    sub_1BDBAD4(this, 0LL);
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

  if ( (byte_4B423E7 & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_1BDB878(&System_Decimal_TypeInfo, y);
    byte_4B423E7 = 1;
  }
  if ( !y )
    sub_1BDBAD4(this, y);
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

  if ( (byte_4B423E8 & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_1BDB878(&System_Decimal_TypeInfo, y);
    byte_4B423E8 = 1;
  }
  if ( !y )
    sub_1BDBAD4(this, y);
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
  if ( (byte_4B423E9 & 1) == 0 )
  {
    this = (WarBoardAI___c__DisplayClass11_0_o *)sub_1BDB878(
                                                   &Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__,
                                                   x);
    byte_4B423E9 = 1;
  }
  if ( !x || (this = (WarBoardAI___c__DisplayClass11_0_o *)v4->fields.notActionPieceHash) == 0LL )
    sub_1BDBAD4(this, x);
  return System_Collections_Generic_HashSet_object___Contains(
           (System_Collections_Generic_HashSet_T__o *)this,
           (Il2CppObject *)x->fields.basePiece,
           (const MethodInfo_35924B8 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__);
}