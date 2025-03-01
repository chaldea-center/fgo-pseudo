void __fastcall WarBoardAI___ctor(WarBoardAI_o *this, WarBoardStageNpcEntity_o *npc, const MethodInfo *method)
{
  WarBoardAIRoute_o *v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BFB16D & 1) == 0 )
  {
    sub_1C2E12C(&WarBoardAIRoute_TypeInfo, npc);
    byte_4BFB16D = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v5 = (WarBoardAIRoute_o *)sub_1C2E378(WarBoardAIRoute_TypeInfo);
  WarBoardAIRoute___ctor(v5, npc, 0LL);
  this->fields.routeClass = v5;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields, (int64_t)v5, v6, v7, v8, v9, v10, v11);
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
    sub_1C2E388(0LL, aiId);
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

  if ( (byte_4BFB16F & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__ContainsKey__, checkRoute);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ctor__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__set_Item__, v5);
    sub_1C2E12C(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__TypeInfo, v6);
    sub_1C2E12C(&IWarBoardAIRouteWaste_TypeInfo, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__, v9);
    byte_4BFB16F = 1;
  }
  v10 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2E378(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v10,
    (const MethodInfo_32D4500 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ctor__);
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
               (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
                   (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
                                     (const MethodInfo_32D50C8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__ContainsKey__);
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
            (const MethodInfo_32D4EC0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__set_Item__);
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
              p_method = sub_1C8010C(methods, v25, 2LL);
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
                v33 = sub_1C8010C(methods, v30, 2LL);
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
                  v41 = sub_1C8010C(methods, v37, 0LL);
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
                    v48 = sub_1C8010C(methods, v45, 1LL);
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
                      v53 = sub_1C8010C(methods, v50, 3LL);
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
    sub_1C2E388(Item, v12);
  }
  return v14;
}


void __fastcall WarBoardAI__Clear(WarBoardAI_o *this, const MethodInfo *method)
{
  WarBoardAIRoute_o *routeClass; // x0

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_1C2E388(0LL, method);
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

  if ( (byte_4BFB172 & 1) == 0 )
  {
    sub_1C2E12C(&int_TypeInfo, *(_QWORD *)&forceId);
    sub_1C2E12C(&StringLiteral_25503/*"{0},{1},{2}"*/, v8);
    byte_4BFB172 = 1;
  }
  v21 = forceId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, *(_QWORD *)&groupId, *(_QWORD *)&index, method);
  v20 = groupId;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v10, v11, v12);
  v19 = index;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v14, v15, v16);
  return System_String__Format_63250024((System_String_o *)StringLiteral_25503/*"{0},{1},{2}"*/, v9, v13, v17, 0LL);
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
  WarBoardPieceData_o *Piece_36546836; // x0
  System_Int32_array *v20; // x21
  WarBoardManager_o *v21; // x21
  int32_t v22; // w8
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v23; // x9

  if ( (byte_4BFB170 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__, v3);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    sub_1C2E12C(&WarBoardAIManager_TypeInfo, v5);
    byte_4BFB170 = 1;
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
                                                        (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
                                                        (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
  Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this->fields.executeRoute )
    goto LABEL_40;
  v16 = (WarBoardManager_o *)Item;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)this->fields.executeRoute,
                                                        this->fields.routeIndex,
                                                        (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
                                                        (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
                                                        (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
                                                          (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
    if ( !Item )
      goto LABEL_40;
    v18 = Item->fields._version;
    Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Item )
      goto LABEL_40;
    Item = (System_Collections_Generic_List_object__o *)Item[11].klass;
    if ( !Item )
      goto LABEL_40;
    Piece_36546836 = WarBoardData__GetPiece_36546836((WarBoardData_o *)Item, v18, 0LL);
    if ( Piece_36546836 )
    {
      if ( WarBoardPieceData__get_isServant(Piece_36546836, 0LL) )
      {
        Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( Item )
        {
          Item = (System_Collections_Generic_List_object__o *)Item[11].klass;
          if ( Item )
          {
            v20 = WarBoardData__GetInRangeSquareIndecies((WarBoardData_o *)Item, v18, 1, 0, 0LL);
            Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
            if ( Item )
            {
              WarBoardManager__DispPartyBuff((WarBoardManager_o *)Item, v20, 0LL);
              goto LABEL_33;
            }
          }
        }
LABEL_40:
        sub_1C2E388(Item, v9);
      }
    }
  }
LABEL_33:
  Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this->fields.executeRoute )
    goto LABEL_40;
  v21 = (WarBoardManager_o *)Item;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)this->fields.executeRoute,
                                                        this->fields.routeIndex,
                                                        (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
  if ( !Item || !v21 )
    goto LABEL_40;
  v14 = 1;
  Item = (System_Collections_Generic_List_object__o *)WarBoardManager__PieceAction_36746516(
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  const MethodInfo *v22; // x1
  System_Decimal_o *v23; // x20
  const MethodInfo *v24; // x21
  System_Decimal_o *cctor_finished; // x8
  System_Decimal_o *v26; // x20
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x21
  float v29; // s0
  float v30; // s0
  System_Decimal_o *v31; // x8
  System_Decimal_o *v32; // x0
  System_Decimal_o *v33; // x1
  System_Decimal_o *size; // x8
  MethodInfo *v35; // x21
  System_Decimal_o *v36; // x22
  int32_t v37; // w20
  System_Decimal_o *Item; // x23
  System_Decimal_o *v39; // x1
  System_Decimal_o *v40; // x24
  System_Decimal_o *v41; // x8
  System_Decimal_o *v42; // x23
  System_Decimal_o *v43; // x8
  System_Decimal_o *v44; // x0
  System_Decimal_o *v45; // x1

  if ( (byte_4BFB171 & 1) == 0 )
  {
    sub_1C2E12C(&System_Decimal_TypeInfo, weightTable);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Sum_Decimal___, v4);
    sub_1C2E12C(&System_Func_Decimal__Decimal__TypeInfo, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Decimal__get_Count__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Decimal__get_Item__, v7);
    sub_1C2E12C(&System_Math_TypeInfo, v8);
    sub_1C2E12C(&Method_WarBoardAI___c__GetRandomIndex_b__14_0__, v9);
    sub_1C2E12C(&WarBoardAI___c_TypeInfo, v10);
    byte_4BFB171 = 1;
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
    _9__14_0 = (System_Func_Decimal__Decimal__o *)sub_1C2E378(System_Func_Decimal__Decimal__TypeInfo);
    System_Func_Decimal__Decimal____ctor(_9__14_0, v14, Method_WarBoardAI___c__GetRandomIndex_b__14_0__, 0LL);
    v15 = WarBoardAI___c_TypeInfo->static_fields;
    v15->__9__14_0 = _9__14_0;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v15->__9__14_0, (int64_t)_9__14_0, v16, v17, v18, v19, v20, v21);
  }
  v23 = System_Linq_Enumerable__Sum_Decimal_(
          (System_Decimal_o *)static_fields,
          (System_Collections_Generic_IEnumerable_TSource__o *)weightTable,
          (System_Func_TSource__Decimal__o *)_9__14_0,
          (const MethodInfo_300A8AC *)Method_System_Linq_Enumerable_Sum_Decimal___);
  v24 = v22;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !byte_4BFB181 )
  {
    sub_1C2E12C(&System_Decimal_TypeInfo, v22);
    byte_4BFB181 = 1;
  }
  cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
  if ( !(_DWORD)cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  v26 = System_Decimal__Floor(cctor_finished, v23, v24);
  v28 = v27;
  if ( !System_Decimal_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  v29 = System_Decimal__op_Explicit_64444168(v26, v28);
  v30 = UnityEngine_Random__Range(0.0, v29, 0LL);
  v32 = System_Decimal__op_Explicit(v31, v30, 0LL);
  if ( !weightTable )
    sub_1C2E388(v32, v33);
  size = (System_Decimal_o *)(unsigned int)weightTable->fields._size;
  if ( (int)size < 1 )
    return 0;
  v35 = (MethodInfo *)v32;
  v36 = v33;
  v37 = 0;
  while ( 1 )
  {
    Item = System_Collections_Generic_List_Decimal___get_Item(
             size,
             weightTable,
             v37,
             (const MethodInfo_363ED5C *)Method_System_Collections_Generic_List_Decimal__get_Item__);
    v40 = v39;
    if ( !System_Decimal_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
    if ( System_Decimal__op_GreaterThanOrEqual(Item, v40, v35) )
      break;
    v42 = System_Collections_Generic_List_Decimal___get_Item(
            v41,
            weightTable,
            v37,
            (const MethodInfo_363ED5C *)Method_System_Collections_Generic_List_Decimal__get_Item__);
    v43 = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
    if ( !(_DWORD)v43 )
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
    v44 = System_Decimal__op_Subtraction(v43, (System_Decimal_o *)v35, v36, (const MethodInfo *)v42);
    size = (System_Decimal_o *)(unsigned int)weightTable->fields._size;
    ++v37;
    v35 = (MethodInfo *)v44;
    v36 = v45;
    if ( v37 >= (int)size )
      return 0;
  }
  return v37;
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

  if ( (byte_4BFB16E & 1) == 0 )
  {
    sub_1C2E12C(&WarBoardAI__Think_d__11_TypeInfo, method);
    byte_4BFB16E = 1;
  }
  v3 = sub_1C2E378(WarBoardAI__Think_d__11_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
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
    sub_1C2E388(0LL, aiId);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x0
  __int64 v20; // x1
  float v21; // s0

  if ( (byte_4BFB173 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____77805976, x);
    sub_1C2E12C(&System_Func_WarBoardAIRoute_RouteData__float__TypeInfo, v5);
    sub_1C2E12C(&Method_WarBoardAI___c__Think_b__11_7__, v6);
    sub_1C2E12C(&WarBoardAI___c_TypeInfo, v7);
    byte_4BFB173 = 1;
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
    _9__11_7 = (System_Func_T__TResult__o *)sub_1C2E378(System_Func_WarBoardAIRoute_RouteData__float__TypeInfo);
    System_Func_object__float____ctor(_9__11_7, v11, Method_WarBoardAI___c__Think_b__11_7__, 0LL);
    static_fields = WarBoardAI___c_TypeInfo->static_fields;
    static_fields->__9__11_7 = (struct System_Func_WarBoardAIRoute_RouteData__float__o *)_9__11_7;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&static_fields->__9__11_7,
      (int64_t)_9__11_7,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  v21 = System_Linq_Enumerable__Sum_object__50375044(
          (System_Collections_Generic_IEnumerable_TSource__o *)x,
          (System_Func_TSource__float__o *)_9__11_7,
          (const MethodInfo_300A984 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____77805976);
  if ( !routeClass )
    sub_1C2E388(v19, v20);
  return !WarBoardAIRoute__IsThinkingThreshold(routeClass, v21, 0LL);
}


int32_t __fastcall WarBoardAI__get_ForceId(WarBoardAI_o *this, const MethodInfo *method)
{
  struct WarBoardAIRoute_o *routeClass; // x8

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_1C2E388(this, method);
  return routeClass->fields.forceId;
}


int32_t __fastcall WarBoardAI__get_GroupId(WarBoardAI_o *this, const MethodInfo *method)
{
  struct WarBoardAIRoute_o *routeClass; // x8

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_1C2E388(this, method);
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
  struct WarBoardAI_o *_4__this; // x12
  struct WarBoardAI_o *v56; // x19
  WarBoardAIRoute_o *routeClass; // x20
  System_Collections_Generic_Dictionary_int__uint__o *placePieceData; // x21
  System_Collections_Generic_List_object__o *v59; // x22
  System_Collections_IEnumerator_o *RouteData; // x0
  PartyOrganizationUtility_o *p__2__current; // x26
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  bool v68; // w20
  WarBoardAI__Think_d__11_o *v69; // x19
  WarBoardAI__Think_d__11_o *availableRouteList_5__4; // x26
  struct WarBoardAIRoute_o *v71; // x8
  int64_t allRouteList; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *allRouteList_5__2; // x8
  __int64 v77; // x27
  Il2CppClass *klass; // x8
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *v79; // x22
  int32_t namespaze_high; // w8
  BalanceConfig_c *v81; // x8
  WarBoardAI___c_c *v82; // x0
  _BOOL4 IsWarBoardAiCalcEvalSum; // w21
  struct WarBoardAI___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__11_0; // x23
  Il2CppObject *v86; // x24
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  struct WarBoardAI___c_StaticFields *v93; // x0
  PartyOrganizationUtility_o *p__9__11_0; // x0
  Il2CppObject *v95; // x24
  struct WarBoardAI___c_StaticFields *v96; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v97; // x0
  System_Object_array *v98; // x22
  System_Collections_Generic_List_object__o *v99; // x24
  WarBoardAI__Think_d__11_o **p_availableRouteList_5__4; // x23
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  System_Collections_Generic_HashSet_T__o *v107; // x25
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  const MethodInfo *v114; // x2
  __int64 v115; // x3
  System_String_o *v116; // x4
  __int64 v117; // x8
  unsigned __int64 v118; // x20
  int32_t pickValue_5__3; // w28
  PartyOrganizationUtility_o *v120; // x25
  System_Collections_ICollection_o *v121; // x26
  BattleSetupInfo_o *v122; // x5
  FollowerInfo_o *v123; // x6
  PartyListViewItem_o *v124; // x7
  System_Collections_Generic_HashSet_T__o *v125; // x27
  System_Func_object__bool__o *v126; // x27
  int64_t v127; // x2
  int32_t v128; // w3
  System_String_o *v129; // x4
  BattleSetupInfo_o *v130; // x5
  FollowerInfo_o *v131; // x6
  PartyListViewItem_o *v132; // x7
  __int64 v133; // x8
  _QWORD *v134; // x9
  __int64 _2__current_low; // x10
  __int64 v136; // x8
  System_Func_object__bool__o *v137; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v138; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v139; // x0
  System_Object_array *v140; // x0
  int64_t v141; // x2
  int32_t v142; // w3
  System_String_o *v143; // x4
  BattleSetupInfo_o *v144; // x5
  FollowerInfo_o *v145; // x6
  PartyListViewItem_o *v146; // x7
  __int64 v147; // x2
  __int64 v148; // x3
  __int64 v149; // x4
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *evalValueSortList_5__5; // x8
  System_Collections_Generic_List_Decimal__o *v151; // x21
  const MethodInfo *v152; // x2
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *v153; // x22
  int v154; // w29
  int max_length; // w8
  int v156; // w24
  int v157; // w25
  char v158; // w26
  _BOOL8 v159; // x0
  __int64 v160; // x1
  WarBoardAIRoute_RouteData_o *current; // x22
  WarBoardPieceData_o *actionPiece; // x0
  Il2CppClass *v163; // x8
  float v164; // s12
  _BOOL8 v165; // x0
  __int64 v166; // x1
  WarBoardTacticalTrendEntity_o *v167; // x22
  float BestMagnification; // s8
  float LowestMagnification; // s0
  int value; // w23
  float ImmobilityMagnification; // s0
  BalanceConfig_c *v172; // x0
  float v173; // s8
  System_Decimal_c *v174; // x8
  _BOOL4 v175; // w25
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *v176; // x8
  WarBoardAI__Think_d__11_o *v177; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v178; // x24
  WarBoardAI___c_c *v179; // x0
  System_Decimal_o *v180; // x23
  struct WarBoardAI___c_StaticFields *v181; // x8
  System_Func_T__TResult__o *_9__11_8; // x25
  System_Func_T__TResult__o *_9__11_9; // x25
  Il2CppObject *v184; // x26
  struct WarBoardAI___c_StaticFields *v185; // x0
  int64_t v186; // x2
  int32_t v187; // w3
  System_String_o *v188; // x4
  BattleSetupInfo_o *v189; // x5
  FollowerInfo_o *v190; // x6
  PartyListViewItem_o *v191; // x7
  System_Decimal_o *v192; // x24
  System_Decimal_o *cctor_finished; // x8
  Il2CppObject *v194; // x26
  struct WarBoardAI___c_StaticFields *v195; // x0
  int64_t v196; // x2
  int32_t v197; // w3
  System_String_o *v198; // x4
  BattleSetupInfo_o *v199; // x5
  FollowerInfo_o *v200; // x6
  PartyListViewItem_o *v201; // x7
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *v202; // x8
  System_Decimal_o *v203; // x8
  WarBoardAI__Think_d__11_o *v204; // x24
  int32_t flags; // w26
  System_Decimal_o *v206; // x25
  System_Decimal_o *v207; // x0
  System_Decimal_o *v208; // x8
  struct System_Decimal_array *items; // x9
  __int64 size; // x11
  Il2CppObject *v211; // x9
  int64_t v212; // x2
  int32_t v213; // w3
  System_String_o *v214; // x4
  BattleSetupInfo_o *v215; // x5
  FollowerInfo_o *v216; // x6
  PartyListViewItem_o *v217; // x7
  int64_t v218; // x1
  WarBoardAI___c_c *v219; // x0
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x22
  System_Func_T__TResult__o *_9__11_3; // x23
  Il2CppObject *v222; // x24
  struct WarBoardAI___c_StaticFields *v223; // x0
  int64_t v224; // x2
  int32_t v225; // w3
  System_String_o *v226; // x4
  BattleSetupInfo_o *v227; // x5
  FollowerInfo_o *v228; // x6
  PartyListViewItem_o *v229; // x7
  WarBoardAI_o *v230; // x0
  const MethodInfo *v231; // x2
  __int64 v232; // x2
  __int64 v233; // x3
  __int64 v234; // x4
  int64_t v235; // x0
  PartyOrganizationUtility_o *v236; // x26
  int64_t v237; // x2
  int32_t v238; // w3
  System_String_o *v239; // x4
  BattleSetupInfo_o *v240; // x5
  FollowerInfo_o *v241; // x6
  PartyListViewItem_o *v242; // x7
  int v243; // w8
  System_Collections_Generic_HashSet_T__o *v244; // x21
  int64_t v245; // x2
  int32_t v246; // w3
  System_String_o *v247; // x4
  BattleSetupInfo_o *v248; // x5
  FollowerInfo_o *v249; // x6
  PartyListViewItem_o *v250; // x7
  int32_t v251; // w22
  WarBoardAI__Think_d__11_o *v252; // x23
  int64_t v253; // x2
  int32_t v254; // w3
  System_String_o *v255; // x4
  BattleSetupInfo_o *v256; // x5
  FollowerInfo_o *v257; // x6
  PartyListViewItem_o *v258; // x7
  __int64 v259; // x2
  __int64 v260; // x3
  __int64 v261; // x4
  int64_t v262; // x0
  PartyOrganizationUtility_o *v263; // x26
  int64_t v264; // x2
  int32_t v265; // w3
  System_String_o *v266; // x4
  BattleSetupInfo_o *v267; // x5
  FollowerInfo_o *v268; // x6
  PartyListViewItem_o *v269; // x7
  int64_t v270; // x0
  int64_t v271; // x2
  int32_t v272; // w3
  System_String_o *v273; // x4
  BattleSetupInfo_o *v274; // x5
  FollowerInfo_o *v275; // x6
  PartyListViewItem_o *v276; // x7
  int64_t v277; // x0
  int64_t v278; // x2
  int32_t v279; // w3
  System_String_o *v280; // x4
  BattleSetupInfo_o *v281; // x5
  FollowerInfo_o *v282; // x6
  PartyListViewItem_o *v283; // x7
  int64_t v284; // x0
  int64_t v285; // x2
  int32_t v286; // w3
  System_String_o *v287; // x4
  BattleSetupInfo_o *v288; // x5
  FollowerInfo_o *v289; // x6
  PartyListViewItem_o *v290; // x7
  WarBoardAI__Think_d__11_o **v292; // [xsp+10h] [xbp-110h]
  Il2CppObject *object; // [xsp+18h] [xbp-108h]
  System_Collections_Generic_HashSet_T__o **v294; // [xsp+20h] [xbp-100h]
  System_Collections_Generic_List_Decimal__o *v295; // [xsp+20h] [xbp-100h]
  Il2CppObject *v296; // [xsp+28h] [xbp-F8h]
  WarBoardAI__Think_d__11_o *v297; // [xsp+30h] [xbp-F0h]
  System_Collections_Generic_List_Enumerator_object__o v298; // [xsp+38h] [xbp-E8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v299; // [xsp+50h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v300; // [xsp+70h] [xbp-B0h] BYREF

  v8 = this;
  if ( (byte_4BFB17C & 1) == 0 )
  {
    sub_1C2E12C(&BalanceConfig_TypeInfo, method);
    sub_1C2E12C(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___, v9);
    sub_1C2E12C(&bool_TypeInfo, v10);
    sub_1C2E12C(&System_Decimal_TypeInfo, v11);
    sub_1C2E12C(&Method_System_Linq_Enumerable_OrderByDescending_List_WarBoardAIRoute_RouteData___Decimal___, v12);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____77805976, v13);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___, v14);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Take_List_WarBoardAIRoute_RouteData____, v15);
    sub_1C2E12C(&Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____, v16);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Where_List_WarBoardAIRoute_RouteData____, v17);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__, v18);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__Dispose__, v19);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__, v20);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__MoveNext__, v21);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__, v22);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__get_Current__, v23);
    sub_1C2E12C(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v24);
    sub_1C2E12C(&System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo, v25);
    sub_1C2E12C(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo, v26);
    sub_1C2E12C(&System_Func_WarBoardAIRoute_RouteData__float__TypeInfo, v27);
    sub_1C2E12C(&System_Func_List_WarBoardAIRoute_RouteData___bool__TypeInfo, v28);
    sub_1C2E12C(&Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__, v29);
    sub_1C2E12C(&Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__, v30);
    sub_1C2E12C(&Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__, v31);
    sub_1C2E12C(&System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo, v32);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Decimal__Add__, v33);
    sub_1C2E12C(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__, v34);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__, v35);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__GetEnumerator__, v36);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor__, v37);
    sub_1C2E12C(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__, v38);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Decimal___ctor__, v39);
    sub_1C2E12C(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___get_Count__, v40);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__, v41);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__, v42);
    sub_1C2E12C(&System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo, v43);
    sub_1C2E12C(&System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo, v44);
    sub_1C2E12C(&System_Collections_Generic_List_Decimal__TypeInfo, v45);
    sub_1C2E12C(&Method_WarBoardAI___c__Think_b__11_0__, v46);
    sub_1C2E12C(&Method_WarBoardAI___c__Think_b__11_1__, v47);
    sub_1C2E12C(&Method_WarBoardAI___c__Think_b__11_3__, v48);
    sub_1C2E12C(&Method_WarBoardAI___c__Think_b__11_8__, v49);
    sub_1C2E12C(&Method_WarBoardAI___c__Think_b__11_9__, v50);
    sub_1C2E12C(&Method_WarBoardAI___c__DisplayClass11_0__Think_b__6__, v51);
    sub_1C2E12C(&WarBoardAI___c__DisplayClass11_0_TypeInfo, v52);
    sub_1C2E12C(&WarBoardAI___c_TypeInfo, v53);
    this = (WarBoardAI__Think_d__11_o *)sub_1C2E12C(&Method_WarBoardAI__Think_b__11_2__, v54);
    byte_4BFB17C = 1;
  }
  memset(&v300, 0, sizeof(v300));
  memset(&v299, 0, sizeof(v299));
  _4__this = v8->fields.__4__this;
  v296 = (Il2CppObject *)_4__this;
  v297 = v8;
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
      v56 = _4__this;
      WarBoardAIRoute__BeforeCreateRouteData((WarBoardAIRoute_o *)this, 0LL);
      routeClass = v56->fields.routeClass;
      if ( !routeClass )
        goto LABEL_164;
      placePieceData = routeClass->fields.placePieceData;
      v59 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v59,
        (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor__);
      RouteData = WarBoardAIRoute__CreateRouteData(
                    routeClass,
                    placePieceData,
                    0,
                    (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v59,
                    0LL);
      v8->fields.__2__current = (Il2CppObject *)RouteData;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C2E0D0(p__2__current, (int64_t)RouteData, v62, v63, v64, v65, v66, v67);
      v68 = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return v68;
    case 1:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_164;
      v71 = _4__this->fields.routeClass;
      if ( !v71 )
        goto LABEL_164;
      allRouteList = (int64_t)v71->fields.allRouteList;
      v8->fields._allRouteList_5__2 = (struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *)allRouteList;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&v8->fields._allRouteList_5__2, allRouteList, v2, v3, v4, v5, v6, v7);
      allRouteList_5__2 = v8->fields._allRouteList_5__2;
      if ( !allRouteList_5__2 )
        goto LABEL_164;
      if ( !allRouteList_5__2->fields._size )
      {
        v68 = 1;
        LOBYTE(v298.fields._list) = 1;
        v284 = j_il2cpp_value_box_0(bool_TypeInfo, &v298, v73, v74, v75);
        v8->fields.__2__current = (Il2CppObject *)v284;
        v236 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C2E0D0(v236, v284, v285, v286, v287, v288, v289, v290);
        v243 = 2;
        goto LABEL_169;
      }
LABEL_16:
      v77 = sub_1C2E378(WarBoardAI___c__DisplayClass11_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v77, 0LL);
      if ( !v296 )
        goto LABEL_164;
      klass = v296[1].klass;
      if ( !klass )
        goto LABEL_164;
      v79 = v8->fields._allRouteList_5__2;
      if ( !v79 )
        goto LABEL_164;
      namespaze_high = HIDWORD(klass->_1.namespaze);
      if ( namespaze_high >= v79->fields._size )
        namespaze_high = v79->fields._size;
      if ( !namespaze_high )
        namespaze_high = v79->fields._size;
      v8->fields._pickValue_5__3 = namespaze_high;
      v81 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v81 = BalanceConfig_TypeInfo;
        v79 = v8->fields._allRouteList_5__2;
      }
      v82 = WarBoardAI___c_TypeInfo;
      IsWarBoardAiCalcEvalSum = v81->static_fields->IsWarBoardAiCalcEvalSum;
      if ( !WarBoardAI___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
        v82 = WarBoardAI___c_TypeInfo;
      }
      static_fields = v82->static_fields;
      if ( IsWarBoardAiCalcEvalSum )
      {
        _9__11_0 = (System_Func_T__TResult__o *)static_fields->__9__11_0;
        if ( _9__11_0 )
          goto LABEL_39;
        if ( !v82->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v82);
          v82 = WarBoardAI___c_TypeInfo;
        }
        v86 = (Il2CppObject *)v82->static_fields->__9;
        _9__11_0 = (System_Func_T__TResult__o *)sub_1C2E378(System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo);
        System_Func_object__Decimal____ctor(_9__11_0, v86, Method_WarBoardAI___c__Think_b__11_0__, 0LL);
        v93 = WarBoardAI___c_TypeInfo->static_fields;
        v93->__9__11_0 = (struct System_Func_List_WarBoardAIRoute_RouteData___Decimal__o *)_9__11_0;
        p__9__11_0 = (PartyOrganizationUtility_o *)&v93->__9__11_0;
      }
      else
      {
        _9__11_0 = (System_Func_T__TResult__o *)static_fields->__9__11_1;
        if ( _9__11_0 )
          goto LABEL_39;
        if ( !v82->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v82);
          v82 = WarBoardAI___c_TypeInfo;
        }
        v95 = (Il2CppObject *)v82->static_fields->__9;
        _9__11_0 = (System_Func_T__TResult__o *)sub_1C2E378(System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo);
        System_Func_object__Decimal____ctor(_9__11_0, v95, Method_WarBoardAI___c__Think_b__11_1__, 0LL);
        v96 = WarBoardAI___c_TypeInfo->static_fields;
        v96->__9__11_1 = (struct System_Func_List_WarBoardAIRoute_RouteData___Decimal__o *)_9__11_0;
        p__9__11_0 = (PartyOrganizationUtility_o *)&v96->__9__11_1;
      }
      sub_1C2E0D0(p__9__11_0, (int64_t)_9__11_0, v87, v88, v89, v90, v91, v92);
LABEL_39:
      v97 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__Decimal_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v79,
                                                                   (System_Func_TSource__TKey__o *)_9__11_0,
                                                                   (const MethodInfo_2FFB978 *)Method_System_Linq_Enumerable_OrderByDescending_List_WarBoardAIRoute_RouteData___Decimal___);
      v98 = System_Linq_Enumerable__ToArray_object_(
              v97,
              (const MethodInfo_300BDBC *)Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____);
      v99 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v99,
        (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
      v8->fields._availableRouteList_5__4 = (struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *)v99;
      p_availableRouteList_5__4 = (WarBoardAI__Think_d__11_o **)&v8->fields._availableRouteList_5__4;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&v8->fields._availableRouteList_5__4,
        (int64_t)v99,
        v101,
        v102,
        v103,
        v104,
        v105,
        v106);
      v107 = (System_Collections_Generic_HashSet_T__o *)sub_1C2E378(System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo);
      System_Collections_Generic_HashSet_object____ctor(
        v107,
        (const MethodInfo_3527820 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__);
      if ( !v77 )
        goto LABEL_164;
      object = (Il2CppObject *)v77;
      *(_QWORD *)(v77 + 16) = v107;
      v294 = (System_Collections_Generic_HashSet_T__o **)(v77 + 16);
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v77 + 16), (int64_t)v107, v108, v109, v110, v111, v112, v113);
      if ( !v98 )
        goto LABEL_164;
      v117 = *(_QWORD *)&v98->max_length;
      if ( (int)v117 >= 1 )
      {
        v118 = 0LL;
        pickValue_5__3 = v8->fields._pickValue_5__3;
        v120 = (PartyOrganizationUtility_o *)(v77 + 24);
        v292 = (WarBoardAI__Think_d__11_o **)&v8->fields._availableRouteList_5__4;
        do
        {
          if ( v118 >= (unsigned int)v117 )
            goto LABEL_171;
          v121 = (System_Collections_ICollection_o *)v98->m_Items[v118];
          this = (WarBoardAI__Think_d__11_o *)BasicHelper__IsNullOrEmpty(v121, 0LL);
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
              if ( !v121 )
                goto LABEL_164;
              this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)v121,
                                                    0,
                                                    (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
              if ( !this )
                goto LABEL_164;
              if ( WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)this, 0LL) )
              {
                v125 = *v294;
                this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_List_object___get_Item(
                                                      (System_Collections_Generic_List_object__o *)v121,
                                                      0,
                                                      (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
                if ( !this || !v125 )
                  goto LABEL_164;
                this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_HashSet_object___Add(
                                                      v125,
                                                      *(Il2CppObject **)&this->fields._pickValue_5__3,
                                                      (const MethodInfo_3528A04 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__);
                goto LABEL_69;
              }
              v126 = (System_Func_object__bool__o *)v120->klass;
              if ( !v120->klass )
              {
                v126 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
                System_Func_object__bool____ctor(
                  v126,
                  object,
                  Method_WarBoardAI___c__DisplayClass11_0__Think_b__6__,
                  0LL);
                object[1].monitor = v126;
                p_availableRouteList_5__4 = v292;
                sub_1C2E0D0(v120, (int64_t)v126, v127, v128, v129, v130, v131, v132);
              }
              this = (WarBoardAI__Think_d__11_o *)BasicHelper__Any_object_(
                                                    (System_Collections_Generic_List_T__o *)v121,
                                                    (System_Func_T__bool__o *)v126,
                                                    (const MethodInfo_2FBC23C *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
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
                                                        (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v121,
                                                        v114),
                  ((unsigned __int8)this & 1) == 0) )
            {
              this = *p_availableRouteList_5__4;
              if ( !*p_availableRouteList_5__4 )
                goto LABEL_164;
              v133 = *(_QWORD *)&this->fields.__1__state;
              v134 = Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__;
              ++HIDWORD(this->fields.__2__current);
              if ( !v133 )
                goto LABEL_164;
              _2__current_low = SLODWORD(this->fields.__2__current);
              if ( (unsigned int)_2__current_low >= *(_DWORD *)(v133 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)v121,
                  *(const MethodInfo_366B8AC **)(*(_QWORD *)(v134[4] + 192LL) + 112LL));
              }
              else
              {
                v136 = v133 + 8 * _2__current_low;
                LODWORD(this->fields.__2__current) = _2__current_low + 1;
                *(_QWORD *)(v136 + 32) = v121;
                sub_1C2E0D0(
                  (PartyOrganizationUtility_o *)(v136 + 32),
                  (int64_t)v121,
                  (int64_t)v114,
                  v115,
                  v116,
                  v122,
                  v123,
                  v124);
              }
              availableRouteList_5__4 = *p_availableRouteList_5__4;
              if ( !*p_availableRouteList_5__4 )
                goto LABEL_164;
              if ( pickValue_5__3 <= SLODWORD(availableRouteList_5__4->fields.__2__current) )
                goto LABEL_71;
            }
          }
LABEL_69:
          LODWORD(v117) = v98->max_length;
        }
        while ( (__int64)++v118 < (int)v117 );
      }
      availableRouteList_5__4 = *p_availableRouteList_5__4;
      if ( !*p_availableRouteList_5__4 )
        goto LABEL_164;
LABEL_71:
      v69 = v297;
      if ( SLODWORD(availableRouteList_5__4->fields.__2__current) <= 0 )
      {
        v68 = 1;
        LOBYTE(v298.fields._list) = 1;
        v277 = j_il2cpp_value_box_0(bool_TypeInfo, &v298, v114, v115, v116);
        v297->fields.__2__current = (Il2CppObject *)v277;
        sub_1C2E0D0((PartyOrganizationUtility_o *)&v297->fields.__2__current, v277, v278, v279, v280, v281, v282, v283);
        v297->fields.__1__state = 3;
      }
      else
      {
LABEL_72:
        v137 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_List_WarBoardAIRoute_RouteData___bool__TypeInfo);
        System_Func_object__bool____ctor(v137, v296, Method_WarBoardAI__Think_b__11_2__, 0LL);
        v138 = System_Linq_Enumerable__Where_object_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)availableRouteList_5__4,
                 (System_Func_TSource__bool__o *)v137,
                 (const MethodInfo_3011CD0 *)Method_System_Linq_Enumerable_Where_List_WarBoardAIRoute_RouteData____);
        v139 = System_Linq_Enumerable__Take_object_(
                 v138,
                 v69->fields._pickValue_5__3,
                 (const MethodInfo_300AB70 *)Method_System_Linq_Enumerable_Take_List_WarBoardAIRoute_RouteData____);
        v140 = System_Linq_Enumerable__ToArray_object_(
                 v139,
                 (const MethodInfo_300BDBC *)Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____);
        v69->fields._evalValueSortList_5__5 = (struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *)v140;
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&v69->fields._evalValueSortList_5__5,
          (int64_t)v140,
          v141,
          v142,
          v143,
          v144,
          v145,
          v146);
        evalValueSortList_5__5 = v69->fields._evalValueSortList_5__5;
        if ( !evalValueSortList_5__5 )
          goto LABEL_164;
        v8 = v69;
        if ( !*(_QWORD *)&evalValueSortList_5__5->max_length )
        {
          v68 = 1;
          LOBYTE(v298.fields._list) = 1;
          v270 = j_il2cpp_value_box_0(bool_TypeInfo, &v298, v147, v148, v149);
          v69->fields.__2__current = (Il2CppObject *)v270;
          v236 = (PartyOrganizationUtility_o *)&v69->fields.__2__current;
          sub_1C2E0D0((PartyOrganizationUtility_o *)&v69->fields.__2__current, v270, v271, v272, v273, v274, v275, v276);
          v243 = 4;
          goto LABEL_169;
        }
LABEL_74:
        v151 = (System_Collections_Generic_List_Decimal__o *)sub_1C2E378(System_Collections_Generic_List_Decimal__TypeInfo);
        System_Collections_Generic_List_Decimal____ctor(
          v151,
          (const MethodInfo_363E7F8 *)Method_System_Collections_Generic_List_Decimal___ctor__);
        v153 = v8->fields._evalValueSortList_5__5;
        if ( !v153 )
          goto LABEL_164;
        v154 = 0;
        v295 = v151;
        while ( 1 )
        {
          max_length = v153->max_length;
          if ( v154 >= max_length )
            break;
          if ( v154 >= (unsigned int)max_length )
            goto LABEL_171;
          this = (WarBoardAI__Think_d__11_o *)v153->m_Items[v154];
          if ( !this )
            goto LABEL_164;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v298,
            (System_Collections_Generic_List_object__o *)this,
            (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
          v156 = 0;
          v157 = 0;
          v158 = 0;
          v300 = v298;
          while ( 1 )
          {
            v159 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     &v300,
                     (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
            if ( !v159 )
              break;
            current = (WarBoardAIRoute_RouteData_o *)v300.fields._current;
            if ( !v300.fields._current )
              sub_1C2E388(v159, v160);
            if ( WarBoardAIRoute_RouteData__HasFlag((WarBoardAIRoute_RouteData_o *)v300.fields._current, 4LL, 0LL) )
            {
              actionPiece = current->fields.actionPiece;
              if ( actionPiece )
                v157 |= WarBoardPieceData__get_isMaster(actionPiece, 0LL);
              v158 = 1;
            }
            v156 |= WarBoardAIRoute_RouteData__HasFlag(current, 8LL, 0LL);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v300,
            (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
          if ( !v296 )
            goto LABEL_164;
          v163 = v296[1].klass;
          if ( !v163 )
            goto LABEL_164;
          this = (WarBoardAI__Think_d__11_o *)v163->_1.klass;
          if ( !this )
            goto LABEL_164;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v298,
            (System_Collections_Generic_List_object__o *)this,
            (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__GetEnumerator__);
          v164 = 0.0;
          v299 = v298;
          while ( 1 )
          {
            v165 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     &v299,
                     (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__MoveNext__);
            if ( !v165 )
              break;
            v167 = (WarBoardTacticalTrendEntity_o *)v299.fields._current;
            if ( !v299.fields._current )
              sub_1C2E388(v165, v166);
            switch ( HIDWORD(v299.fields._current[1].klass) )
            {
              case 0:
                if ( v154 < SLODWORD(v299.fields._current[1].monitor) )
                {
                  BestMagnification = WarBoardTacticalTrendEntity__GetBestMagnification(
                                        (WarBoardTacticalTrendEntity_o *)v299.fields._current,
                                        0LL);
                  LowestMagnification = WarBoardTacticalTrendEntity__GetLowestMagnification(v167, 0LL);
                  value = v167->fields.value;
                  ImmobilityMagnification = WarBoardTacticalTrendEntity__GetBestMagnification(v167, 0LL)
                                          - (float)((float)((float)(BestMagnification - LowestMagnification)
                                                          / (float)((float)value + -1.0))
                                                  * (float)v154);
                  goto LABEL_102;
                }
                break;
              case 1:
                if ( (v158 & 1) != 0 )
                  goto LABEL_101;
                break;
              case 4:
                if ( (v157 & 1) != 0 )
                  goto LABEL_101;
                break;
              case 5:
                if ( (v156 & 1) != 0 )
                {
LABEL_101:
                  ImmobilityMagnification = WarBoardTacticalTrendEntity__GetImmobilityMagnification(
                                              (WarBoardTacticalTrendEntity_o *)v299.fields._current,
                                              0LL);
LABEL_102:
                  v164 = v164 + ImmobilityMagnification;
                }
                break;
              default:
                continue;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v299,
            (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__Dispose__);
          v8 = v297;
          v172 = BalanceConfig_TypeInfo;
          if ( v164 == 0.0 )
            v173 = 1.0;
          else
            v173 = v164;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v172 = BalanceConfig_TypeInfo;
          }
          v174 = System_Decimal_TypeInfo;
          v175 = v172->static_fields->IsWarBoardAiCalcEvalSum;
          if ( !System_Decimal_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
          this = (WarBoardAI__Think_d__11_o *)System_Decimal__op_Explicit((System_Decimal_o *)v174, v173, 0LL);
          v176 = v297->fields._evalValueSortList_5__5;
          if ( !v176 )
            goto LABEL_164;
          if ( v154 >= v176->max_length )
            goto LABEL_171;
          v177 = this;
          v178 = (System_Collections_Generic_IEnumerable_TSource__o *)v176->m_Items[v154];
          v179 = WarBoardAI___c_TypeInfo;
          v180 = (System_Decimal_o *)method;
          if ( !WarBoardAI___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
            v179 = WarBoardAI___c_TypeInfo;
          }
          v181 = v179->static_fields;
          if ( v175 )
          {
            _9__11_8 = (System_Func_T__TResult__o *)v181->__9__11_8;
            if ( !_9__11_8 )
            {
              if ( !v179->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v179);
                v179 = WarBoardAI___c_TypeInfo;
              }
              v184 = (Il2CppObject *)v179->static_fields->__9;
              _9__11_8 = (System_Func_T__TResult__o *)sub_1C2E378(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
              System_Func_object__Decimal____ctor(_9__11_8, v184, Method_WarBoardAI___c__Think_b__11_8__, 0LL);
              v185 = WarBoardAI___c_TypeInfo->static_fields;
              v185->__9__11_8 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_8;
              sub_1C2E0D0(
                (PartyOrganizationUtility_o *)&v185->__9__11_8,
                (int64_t)_9__11_8,
                v186,
                v187,
                v188,
                v189,
                v190,
                v191);
              v8 = v297;
            }
            v192 = System_Linq_Enumerable__Sum_object__50374900(
                     (System_Decimal_o *)&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___,
                     v178,
                     (System_Func_TSource__Decimal__o *)_9__11_8,
                     (const MethodInfo_300A8F4 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
            cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
            if ( !(_DWORD)cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
          }
          else
          {
            _9__11_9 = (System_Func_T__TResult__o *)v181->__9__11_9;
            if ( !_9__11_9 )
            {
              if ( !v179->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v179);
                v179 = WarBoardAI___c_TypeInfo;
              }
              v194 = (Il2CppObject *)v179->static_fields->__9;
              _9__11_9 = (System_Func_T__TResult__o *)sub_1C2E378(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
              System_Func_object__Decimal____ctor(_9__11_9, v194, Method_WarBoardAI___c__Think_b__11_9__, 0LL);
              v195 = WarBoardAI___c_TypeInfo->static_fields;
              v195->__9__11_9 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_9;
              sub_1C2E0D0(
                (PartyOrganizationUtility_o *)&v195->__9__11_9,
                (int64_t)_9__11_9,
                v196,
                v197,
                v198,
                v199,
                v200,
                v201);
              v8 = v297;
            }
            this = (WarBoardAI__Think_d__11_o *)System_Linq_Enumerable__Sum_object__50374900(
                                                  (System_Decimal_o *)&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___,
                                                  v178,
                                                  (System_Func_TSource__Decimal__o *)_9__11_9,
                                                  (const MethodInfo_300A8F4 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
            v202 = v8->fields._evalValueSortList_5__5;
            if ( !v202 )
              goto LABEL_164;
            if ( v154 >= v202->max_length )
              goto LABEL_171;
            v203 = (System_Decimal_o *)v202->m_Items[v154];
            if ( !v203 )
              goto LABEL_164;
            v204 = this;
            flags = v203[1].fields.flags;
            v206 = (System_Decimal_o *)method;
            if ( !System_Decimal_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
            v207 = System_Decimal__op_Implicit_64443664(v203, flags, 0LL);
            v8 = v297;
            v192 = System_Decimal__op_Division(v208, (System_Decimal_o *)v204, v206, (const MethodInfo *)v207);
          }
          this = (WarBoardAI__Think_d__11_o *)System_Decimal__op_Multiply(
                                                cctor_finished,
                                                (System_Decimal_o *)v177,
                                                v180,
                                                (const MethodInfo *)v192);
          v151 = v295;
          if ( v295 )
          {
            items = v295->fields._items;
            ++v295->fields._version;
            if ( items )
            {
              size = v295->fields._size;
              v152 = method;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_Decimal___AddWithResize(
                  v295,
                  (System_Decimal_o *)this,
                  (const MethodInfo_363F088 *)method);
              }
              else
              {
                v211 = &items->obj + size;
                v295->fields._size = size + 1;
                v211[2].klass = (Il2CppClass *)this;
                v211[2].monitor = (void *)method;
              }
              v153 = v8->fields._evalValueSortList_5__5;
              ++v154;
              if ( v153 )
                continue;
            }
          }
          goto LABEL_164;
        }
        if ( !v296 )
          goto LABEL_164;
        this = (WarBoardAI__Think_d__11_o *)WarBoardAI__GetRandomIndex((WarBoardAI_o *)this, v151, v152);
        if ( (unsigned int)this >= v153->max_length )
LABEL_171:
          sub_1C2E390(this, method);
        v218 = (int64_t)v153->m_Items[(int)this];
        v296[1].monitor = (void *)v218;
        sub_1C2E0D0((PartyOrganizationUtility_o *)&v296[1].monitor, v218, v212, v213, v214, v215, v216, v217);
        v219 = WarBoardAI___c_TypeInfo;
        monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v296[1].monitor;
        if ( !WarBoardAI___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
          v219 = WarBoardAI___c_TypeInfo;
        }
        _9__11_3 = (System_Func_T__TResult__o *)v219->static_fields->__9__11_3;
        if ( !_9__11_3 )
        {
          if ( !v219->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v219);
            v219 = WarBoardAI___c_TypeInfo;
          }
          v222 = (Il2CppObject *)v219->static_fields->__9;
          _9__11_3 = (System_Func_T__TResult__o *)sub_1C2E378(System_Func_WarBoardAIRoute_RouteData__float__TypeInfo);
          System_Func_object__float____ctor(_9__11_3, v222, Method_WarBoardAI___c__Think_b__11_3__, 0LL);
          v223 = WarBoardAI___c_TypeInfo->static_fields;
          v223->__9__11_3 = (struct System_Func_WarBoardAIRoute_RouteData__float__o *)_9__11_3;
          sub_1C2E0D0(
            (PartyOrganizationUtility_o *)&v223->__9__11_3,
            (int64_t)_9__11_3,
            v224,
            v225,
            v226,
            v227,
            v228,
            v229);
        }
        System_Linq_Enumerable__Sum_object__50375044(
          monitor,
          (System_Func_TSource__float__o *)_9__11_3,
          (const MethodInfo_300A984 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____77805976);
        if ( WarBoardAI__CheckWasteRoute(
               v230,
               (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v296[1].monitor,
               v231) )
        {
          v68 = 1;
          LOBYTE(v298.fields._list) = 1;
          v235 = j_il2cpp_value_box_0(bool_TypeInfo, &v298, v232, v233, v234);
          v8->fields.__2__current = (Il2CppObject *)v235;
          v236 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1C2E0D0(v236, v235, v237, v238, v239, v240, v241, v242);
          v243 = 5;
LABEL_169:
          *(_DWORD *)&v236[-1].fields._IsQuestStartMenuMode_k__BackingField = v243;
          return v68;
        }
LABEL_152:
        v244 = (System_Collections_Generic_HashSet_T__o *)sub_1C2E378(System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo);
        System_Collections_Generic_HashSet_object____ctor(
          v244,
          (const MethodInfo_3527820 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__);
        if ( !v296 || (this = (WarBoardAI__Think_d__11_o *)v296[1].monitor) == 0LL )
LABEL_164:
          sub_1C2E388(this, method);
        v251 = LODWORD(this->fields.__2__current) - 1;
        if ( v251 >= 0 )
        {
          while ( 1 )
          {
            this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)this,
                                                  v251,
                                                  (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
            if ( !this )
              goto LABEL_164;
            method = *(const MethodInfo **)&this->fields._pickValue_5__3;
            v252 = this;
            if ( method )
            {
              if ( !v244 )
                goto LABEL_164;
              if ( !System_Collections_Generic_HashSet_object___Contains(
                      v244,
                      (Il2CppObject *)method,
                      (const MethodInfo_3527F14 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__)
                && !WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)v252, 0LL) )
              {
                System_Collections_Generic_HashSet_object___Add(
                  v244,
                  *(Il2CppObject **)&v252->fields._pickValue_5__3,
                  (const MethodInfo_3528A04 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__);
                this = *(WarBoardAI__Think_d__11_o **)&v252->fields._pickValue_5__3;
                if ( !this )
                  goto LABEL_164;
                WarBoardPieceData__SetPrevAiRoute((WarBoardPieceData_o *)this, (WarBoardAIRoute_RouteData_o *)v252, 0LL);
              }
            }
            if ( --v251 < 0 )
              break;
            this = (WarBoardAI__Think_d__11_o *)v296[1].monitor;
            if ( !this )
              goto LABEL_164;
          }
        }
        v8->fields._availableRouteList_5__4 = 0LL;
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&v8->fields._availableRouteList_5__4,
          0LL,
          v245,
          v246,
          v247,
          v248,
          v249,
          v250);
        v8->fields._evalValueSortList_5__5 = 0LL;
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&v8->fields._evalValueSortList_5__5,
          0LL,
          v253,
          v254,
          v255,
          v256,
          v257,
          v258);
        LOBYTE(v298.fields._list) = 0;
        v262 = j_il2cpp_value_box_0(bool_TypeInfo, &v298, v259, v260, v261);
        v8->fields.__2__current = (Il2CppObject *)v262;
        v263 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C2E0D0(v263, v262, v264, v265, v266, v267, v268, v269);
        *(_DWORD *)&v263[-1].fields._IsQuestStartMenuMode_k__BackingField = 6;
        return 1;
      }
      return v68;
    case 2:
      v8->fields.__1__state = -1;
      goto LABEL_16;
    case 3:
      v69 = v8;
      availableRouteList_5__4 = (WarBoardAI__Think_d__11_o *)v8->fields._availableRouteList_5__4;
      v69->fields.__1__state = -1;
      goto LABEL_72;
    case 4:
      v8->fields.__1__state = -1;
      goto LABEL_74;
    case 5:
      v8->fields.__1__state = -1;
      goto LABEL_152;
    case 6:
      v68 = 0;
      v8->fields.__1__state = -1;
      return v68;
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

  v2 = sub_1C2E140(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2E378(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C2E140(&Method_WarBoardAI__Think_d__11_System_Collections_IEnumerator_Reset__);
  sub_1C2E254(v3, v4);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BFB174 & 1) == 0 )
  {
    sub_1C2E12C(&WarBoardAI___c_TypeInfo, v1);
    byte_4BFB174 = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(WarBoardAI___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardAI___c_TypeInfo->static_fields->__9 = (struct WarBoardAI___c_o *)v2;
  sub_1C2E0D0((PartyOrganizationUtility_o *)WarBoardAI___c_TypeInfo->static_fields, (int64_t)v2, v3, v4, v5, v6, v7, v8);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4BFB175 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___, x);
    sub_1C2E12C(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo, v5);
    sub_1C2E12C(&Method_WarBoardAI___c__Think_b__11_4__, v6);
    sub_1C2E12C(&WarBoardAI___c_TypeInfo, v7);
    byte_4BFB175 = 1;
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
    _9__11_4 = (System_Func_T__TResult__o *)sub_1C2E378(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    System_Func_object__Decimal____ctor(_9__11_4, v11, Method_WarBoardAI___c__Think_b__11_4__, 0LL);
    v12 = WarBoardAI___c_TypeInfo->static_fields;
    v12->__9__11_4 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_4;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v12->__9__11_4, (int64_t)_9__11_4, v13, v14, v15, v16, v17, v18);
  }
  return System_Linq_Enumerable__Sum_object__50374900(
           (System_Decimal_o *)static_fields,
           (System_Collections_Generic_IEnumerable_TSource__o *)x,
           (System_Func_TSource__Decimal__o *)_9__11_4,
           (const MethodInfo_300A8F4 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Decimal_o *v21; // x0
  System_Decimal_o *v22; // x1
  System_Decimal_o *v23; // x20
  int32_t size; // w19
  System_Decimal_o *v25; // x21
  System_Decimal_o *cctor_finished; // x8
  System_Decimal_o *v27; // x2
  System_Decimal_o *v28; // x8

  if ( (byte_4BFB177 & 1) == 0 )
  {
    sub_1C2E12C(&System_Decimal_TypeInfo, x);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___, v5);
    sub_1C2E12C(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__, v7);
    sub_1C2E12C(&Method_WarBoardAI___c__Think_b__11_5__, v8);
    sub_1C2E12C(&WarBoardAI___c_TypeInfo, v9);
    byte_4BFB177 = 1;
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
    _9__11_5 = (System_Func_T__TResult__o *)sub_1C2E378(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    System_Func_object__Decimal____ctor(_9__11_5, v13, Method_WarBoardAI___c__Think_b__11_5__, 0LL);
    v14 = WarBoardAI___c_TypeInfo->static_fields;
    v14->__9__11_5 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_5;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v14->__9__11_5, (int64_t)_9__11_5, v15, v16, v17, v18, v19, v20);
  }
  v21 = System_Linq_Enumerable__Sum_object__50374900(
          (System_Decimal_o *)static_fields,
          (System_Collections_Generic_IEnumerable_TSource__o *)x,
          (System_Func_TSource__Decimal__o *)_9__11_5,
          (const MethodInfo_300A8F4 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
  if ( !x )
    sub_1C2E388(v21, v22);
  v23 = v21;
  size = x->fields._size;
  v25 = v22;
  cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
  if ( !(_DWORD)cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  v27 = System_Decimal__op_Implicit_64443664(cctor_finished, size, 0LL);
  return System_Decimal__op_Division(v28, v23, v25, (const MethodInfo *)v27);
}


float __fastcall WarBoardAI___c___Think_b__11_3(
        WarBoardAI___c_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2E388(this, 0LL);
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

  if ( (byte_4BFB176 & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_1C2E12C(&System_Decimal_TypeInfo, y);
    byte_4BFB176 = 1;
  }
  if ( !y )
    sub_1C2E388(this, y);
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

  if ( (byte_4BFB178 & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_1C2E12C(&System_Decimal_TypeInfo, y);
    byte_4BFB178 = 1;
  }
  if ( !y )
    sub_1C2E388(this, y);
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
    sub_1C2E388(this, 0LL);
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

  if ( (byte_4BFB179 & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_1C2E12C(&System_Decimal_TypeInfo, y);
    byte_4BFB179 = 1;
  }
  if ( !y )
    sub_1C2E388(this, y);
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

  if ( (byte_4BFB17A & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_1C2E12C(&System_Decimal_TypeInfo, y);
    byte_4BFB17A = 1;
  }
  if ( !y )
    sub_1C2E388(this, y);
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
  if ( (byte_4BFB17B & 1) == 0 )
  {
    this = (WarBoardAI___c__DisplayClass11_0_o *)sub_1C2E12C(
                                                   &Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__,
                                                   x);
    byte_4BFB17B = 1;
  }
  if ( !x || (this = (WarBoardAI___c__DisplayClass11_0_o *)v4->fields.notActionPieceHash) == 0LL )
    sub_1C2E388(this, x);
  return System_Collections_Generic_HashSet_object___Contains(
           (System_Collections_Generic_HashSet_T__o *)this,
           (Il2CppObject *)x->fields.basePiece,
           (const MethodInfo_3527F14 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__);
}