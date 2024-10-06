void __fastcall WarBoardAI___ctor(WarBoardAI_o *this, WarBoardStageNpcEntity_o *npc, const MethodInfo *method)
{
  WarBoardAIRoute_o *v5; // x21
  const MethodInfo *v6; // x2
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A6DA2C & 1) == 0 )
  {
    sub_1B90010(&WarBoardAIRoute_TypeInfo, npc);
    byte_4A6DA2C = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v5 = (WarBoardAIRoute_o *)sub_1B9025C(WarBoardAIRoute_TypeInfo);
  WarBoardAIRoute___ctor(v5, npc, v6);
  this->fields.routeClass = v5;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v5, v7, v8);
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
    sub_1B9026C(0LL, aiId);
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

  if ( (byte_4A6DA2E & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__ContainsKey__, checkRoute);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ctor__, v4);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__set_Item__, v5);
    sub_1B90010(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__TypeInfo, v6);
    sub_1B90010(&IWarBoardAIRouteWaste_TypeInfo, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__, v9);
    byte_4A6DA2E = 1;
  }
  v10 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B9025C(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v10,
    (const MethodInfo_317BBF8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ctor__);
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
               (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
                   (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
                                     (const MethodInfo_317C7C0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__ContainsKey__);
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
            (const MethodInfo_317C5B8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__set_Item__);
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
              p_method = sub_1BE1FF0(methods, v25, 2LL);
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
                v33 = sub_1BE1FF0(methods, v30, 2LL);
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
                  v41 = sub_1BE1FF0(methods, v37, 0LL);
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
                    v48 = sub_1BE1FF0(methods, v45, 1LL);
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
                      v53 = sub_1BE1FF0(methods, v50, 3LL);
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
    sub_1B9026C(Item, v12);
  }
  return v14;
}


void __fastcall WarBoardAI__Clear(WarBoardAI_o *this, const MethodInfo *method)
{
  WarBoardAIRoute_o *routeClass; // x0

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_1B9026C(0LL, method);
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

  if ( (byte_4A6DA31 & 1) == 0 )
  {
    sub_1B90010(&int_TypeInfo, *(_QWORD *)&forceId);
    sub_1B90010(&StringLiteral_25073/*"{0},{1},{2}"*/, v8);
    byte_4A6DA31 = 1;
  }
  v21 = forceId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, *(_QWORD *)&groupId, *(_QWORD *)&index, method);
  v20 = groupId;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v10, v11, v12);
  v19 = index;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v14, v15, v16);
  return System_String__Format_61801532((System_String_o *)StringLiteral_25073/*"{0},{1},{2}"*/, v9, v13, v17, 0LL);
}


bool __fastcall WarBoardAI__Execute(WarBoardAI_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *executeRoute; // x0
  int32_t routeIndex; // w1
  System_Collections_Generic_List_object__o *Item; // x0
  const MethodInfo *v9; // x1
  System_Collections_Generic_List_object__o *v10; // x8
  WarBoardPieceData_o *monitor; // x20
  int32_t v12; // w8
  int32_t v13; // w8
  bool v14; // w22
  WarBoardManager_o *v16; // x21
  int32_t version; // w22
  int32_t v18; // w21
  WarBoardPieceData_o *Piece_35409936; // x0
  System_Int32_array *v20; // x21
  WarBoardManager_o *v21; // x21
  int32_t v22; // w8
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v23; // x9

  if ( (byte_4A6DA2F & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__, method);
    sub_1B90010(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__, v3);
    sub_1B90010(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    sub_1B90010(&WarBoardAIManager_TypeInfo, v5);
    byte_4A6DA2F = 1;
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
                                                        (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
                                                        (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
  Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this->fields.executeRoute )
    goto LABEL_40;
  v16 = (WarBoardManager_o *)Item;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)this->fields.executeRoute,
                                                        this->fields.routeIndex,
                                                        (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
  if ( !Item )
    goto LABEL_40;
  version = Item->fields._version;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  Item = (System_Collections_Generic_List_object__o *)WarBoardAIManager__GetSquare(version, v9);
  if ( !v16 )
    goto LABEL_40;
  WarBoardManager__CheckSelectSquare(v16, monitor, (WarBoardSquareData_o *)Item, 1, 0LL);
  Item = (System_Collections_Generic_List_object__o *)this->fields.executeRoute;
  if ( !Item )
    goto LABEL_40;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                        Item,
                                                        this->fields.routeIndex,
                                                        (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
                                                        (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
                                                          (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
    if ( !Item )
      goto LABEL_40;
    v18 = Item->fields._version;
    Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Item )
      goto LABEL_40;
    Item = (System_Collections_Generic_List_object__o *)Item[11].klass;
    if ( !Item )
      goto LABEL_40;
    Piece_35409936 = WarBoardData__GetPiece_35409936((WarBoardData_o *)Item, v18, 0LL);
    if ( Piece_35409936 )
    {
      if ( WarBoardPieceData__get_isServant(Piece_35409936, 0LL) )
      {
        Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( Item )
        {
          Item = (System_Collections_Generic_List_object__o *)Item[11].klass;
          if ( Item )
          {
            v20 = WarBoardData__GetInRangeSquareIndecies((WarBoardData_o *)Item, v18, 1, 0, 0LL);
            Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
            if ( Item )
            {
              WarBoardManager__DispPartyBuff((WarBoardManager_o *)Item, v20, 0LL);
              goto LABEL_33;
            }
          }
        }
LABEL_40:
        sub_1B9026C(Item, v9);
      }
    }
  }
LABEL_33:
  Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this->fields.executeRoute )
    goto LABEL_40;
  v21 = (WarBoardManager_o *)Item;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)this->fields.executeRoute,
                                                        this->fields.routeIndex,
                                                        (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
  if ( !Item || !v21 )
    goto LABEL_40;
  v14 = 1;
  Item = (System_Collections_Generic_List_object__o *)WarBoardManager__PieceAction_35551068(
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

  if ( (byte_4A6DA30 & 1) == 0 )
  {
    sub_1B90010(&System_Decimal_TypeInfo, weightTable);
    sub_1B90010(&Method_System_Linq_Enumerable_Sum_Decimal___, v4);
    sub_1B90010(&System_Func_Decimal__Decimal__TypeInfo, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_Decimal__get_Count__, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_Decimal__get_Item__, v7);
    sub_1B90010(&System_Math_TypeInfo, v8);
    sub_1B90010(&Method_WarBoardAI___c__GetRandomIndex_b__14_0__, v9);
    sub_1B90010(&WarBoardAI___c_TypeInfo, v10);
    byte_4A6DA30 = 1;
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
    _9__14_0 = (System_Func_Decimal__Decimal__o *)sub_1B9025C(System_Func_Decimal__Decimal__TypeInfo);
    System_Func_Decimal__Decimal____ctor(_9__14_0, v14, Method_WarBoardAI___c__GetRandomIndex_b__14_0__, 0LL);
    v15 = WarBoardAI___c_TypeInfo->static_fields;
    v15->__9__14_0 = _9__14_0;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v15->__9__14_0, (int32_t)_9__14_0, v16, v17);
  }
  v19 = System_Linq_Enumerable__Sum_Decimal_(
          (System_Decimal_o *)static_fields,
          (System_Collections_Generic_IEnumerable_TSource__o *)weightTable,
          (System_Func_TSource__Decimal__o *)_9__14_0,
          (const MethodInfo_2EC5A84 *)Method_System_Linq_Enumerable_Sum_Decimal___);
  v20 = v18;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !byte_4A6DA84 )
  {
    sub_1B90010(&System_Decimal_TypeInfo, v18);
    byte_4A6DA84 = 1;
  }
  cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
  if ( !(_DWORD)cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  v22 = System_Decimal__Floor(cctor_finished, v19, v20);
  v24 = v23;
  if ( !System_Decimal_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  v25 = System_Decimal__op_Explicit_62994972(v22, v24);
  v26 = UnityEngine_Random__Range(0.0, v25, 0LL);
  v28 = System_Decimal__op_Explicit(v27, v26, 0LL);
  if ( !weightTable )
    sub_1B9026C(v28, v29);
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
             (const MethodInfo_34E3E70 *)Method_System_Collections_Generic_List_Decimal__get_Item__);
    v36 = v35;
    if ( !System_Decimal_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
    if ( System_Decimal__op_GreaterThanOrEqual(Item, v36, v31) )
      break;
    v38 = System_Collections_Generic_List_Decimal___get_Item(
            v37,
            weightTable,
            v33,
            (const MethodInfo_34E3E70 *)Method_System_Collections_Generic_List_Decimal__get_Item__);
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
  int32_t v5; // w3

  if ( (byte_4A6DA2D & 1) == 0 )
  {
    sub_1B90010(&WarBoardAI__Think_d__11_TypeInfo, method);
    byte_4A6DA2D = 1;
  }
  v3 = sub_1B9025C(WarBoardAI__Think_d__11_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
    sub_1B9026C(0LL, aiId);
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
  __int64 v16; // x1
  float v17; // s0
  struct WarBoardStageNpcEntity_o *npcData; // x8

  if ( (byte_4A6DA32 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____76216888, x);
    sub_1B90010(&System_Func_WarBoardAIRoute_RouteData__float__TypeInfo, v5);
    sub_1B90010(&Method_WarBoardAI___c__Think_b__11_7__, v6);
    sub_1B90010(&WarBoardAI___c_TypeInfo, v7);
    byte_4A6DA32 = 1;
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
    _9__11_7 = (System_Func_T__TResult__o *)sub_1B9025C(System_Func_WarBoardAIRoute_RouteData__float__TypeInfo);
    System_Func_object__float____ctor(_9__11_7, v11, Method_WarBoardAI___c__Think_b__11_7__, 0LL);
    static_fields = WarBoardAI___c_TypeInfo->static_fields;
    static_fields->__9__11_7 = (struct System_Func_WarBoardAIRoute_RouteData__float__o *)_9__11_7;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__11_7, (int32_t)_9__11_7, v13, v14);
  }
  v17 = System_Linq_Enumerable__Sum_object__49044316(
          (System_Collections_Generic_IEnumerable_TSource__o *)x,
          (System_Func_TSource__float__o *)_9__11_7,
          (const MethodInfo_2EC5B5C *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____76216888);
  if ( !routeClass || (npcData = routeClass->fields.npcData) == 0LL )
    sub_1B9026C(v15, v16);
  return (float)((float)npcData->fields.lowerThinkingValue / 100.0) <= v17;
}


int32_t __fastcall WarBoardAI__get_ForceId(WarBoardAI_o *this, const MethodInfo *method)
{
  struct WarBoardAIRoute_o *routeClass; // x8

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_1B9026C(this, method);
  return routeClass->fields.forceId;
}


int32_t __fastcall WarBoardAI__get_GroupId(WarBoardAI_o *this, const MethodInfo *method)
{
  struct WarBoardAIRoute_o *routeClass; // x8

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_1B9026C(this, method);
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
  const MethodInfo *v56; // x4
  System_Collections_IEnumerator_o *RouteData; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x26
  int32_t v59; // w2
  int32_t v60; // w3
  bool v61; // w20
  WarBoardAI__Think_d__11_o *v62; // x19
  WarBoardAI__Think_d__11_o *availableRouteList_5__4; // x26
  struct WarBoardAIRoute_o *v64; // x8
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *allRouteList; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *allRouteList_5__2; // x8
  __int64 v70; // x27
  Il2CppClass *klass; // x8
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *v72; // x22
  int32_t namespaze_high; // w8
  BalanceConfig_c *v74; // x8
  WarBoardAI___c_c *v75; // x0
  _BOOL4 IsWarBoardAiCalcEvalSum; // w21
  struct WarBoardAI___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__11_0; // x23
  Il2CppObject *v79; // x24
  int32_t v80; // w2
  int32_t v81; // w3
  struct WarBoardAI___c_StaticFields *v82; // x0
  ServantStatusBattleListViewItem_o *p__9__11_0; // x0
  Il2CppObject *v84; // x24
  struct WarBoardAI___c_StaticFields *v85; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v86; // x0
  System_Object_array *v87; // x22
  System_Collections_Generic_List_object__o *v88; // x24
  WarBoardAI__Think_d__11_o **p_availableRouteList_5__4; // x23
  int32_t v90; // w2
  int32_t v91; // w3
  System_Collections_Generic_HashSet_T__o *v92; // x25
  int32_t v93; // w2
  int32_t v94; // w3
  const MethodInfo *v95; // x2
  __int64 v96; // x3
  __int64 v97; // x4
  __int64 v98; // x8
  unsigned __int64 v99; // x20
  int32_t pickValue_5__3; // w28
  ServantStatusBattleListViewItem_o *v101; // x25
  System_Collections_ICollection_o *v102; // x26
  System_Collections_Generic_HashSet_T__o *v103; // x27
  System_Func_object__bool__o *v104; // x27
  int32_t v105; // w2
  int32_t v106; // w3
  __int64 v107; // x8
  _QWORD *v108; // x9
  __int64 _2__current_low; // x10
  __int64 v110; // x8
  System_Func_object__bool__o *v111; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v112; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v113; // x0
  System_Object_array *v114; // x0
  int32_t v115; // w2
  int32_t v116; // w3
  __int64 v117; // x2
  __int64 v118; // x3
  __int64 v119; // x4
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *evalValueSortList_5__5; // x8
  System_Collections_Generic_List_Decimal__o *v121; // x21
  const MethodInfo *v122; // x2
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *v123; // x22
  int v124; // w29
  int max_length; // w8
  int v126; // w24
  int v127; // w25
  char v128; // w26
  _BOOL8 v129; // x0
  __int64 v130; // x1
  WarBoardAIRoute_RouteData_o *current; // x22
  WarBoardPieceData_o *actionPiece; // x0
  Il2CppClass *v133; // x8
  float v134; // s12
  _BOOL8 v135; // x0
  __int64 v136; // x1
  WarBoardTacticalTrendEntity_o *v137; // x22
  float BestMagnification; // s8
  float LowestMagnification; // s0
  int value; // w23
  float ImmobilityMagnification; // s0
  BalanceConfig_c *v142; // x0
  float v143; // s8
  System_Decimal_c *v144; // x8
  _BOOL4 v145; // w25
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *v146; // x8
  WarBoardAI__Think_d__11_o *v147; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v148; // x24
  WarBoardAI___c_c *v149; // x0
  System_Decimal_o *v150; // x23
  struct WarBoardAI___c_StaticFields *v151; // x8
  System_Func_T__TResult__o *_9__11_8; // x25
  System_Func_T__TResult__o *_9__11_9; // x25
  Il2CppObject *v154; // x26
  struct WarBoardAI___c_StaticFields *v155; // x0
  int32_t v156; // w2
  int32_t v157; // w3
  System_Decimal_o *v158; // x24
  System_Decimal_o *cctor_finished; // x8
  Il2CppObject *v160; // x26
  struct WarBoardAI___c_StaticFields *v161; // x0
  int32_t v162; // w2
  int32_t v163; // w3
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *v164; // x8
  System_Decimal_o *v165; // x8
  WarBoardAI__Think_d__11_o *v166; // x24
  int32_t flags; // w26
  System_Decimal_o *v168; // x25
  System_Decimal_o *v169; // x0
  System_Decimal_o *v170; // x8
  struct System_Decimal_array *items; // x9
  __int64 size; // x11
  Il2CppObject *v173; // x9
  int32_t v174; // w2
  int32_t v175; // w3
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v176; // x1
  WarBoardAI___c_c *v177; // x0
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x22
  System_Func_T__TResult__o *_9__11_3; // x23
  Il2CppObject *v180; // x24
  struct WarBoardAI___c_StaticFields *v181; // x0
  int32_t v182; // w2
  int32_t v183; // w3
  WarBoardAI_o *v184; // x0
  const MethodInfo *v185; // x2
  __int64 v186; // x2
  __int64 v187; // x3
  __int64 v188; // x4
  __int64 v189; // x0
  ServantStatusBattleListViewItem_o *v190; // x26
  int32_t v191; // w2
  int32_t v192; // w3
  int v193; // w8
  System_Collections_Generic_HashSet_T__o *v194; // x21
  int32_t v195; // w2
  int32_t v196; // w3
  int32_t v197; // w22
  WarBoardAI__Think_d__11_o *v198; // x23
  int32_t v199; // w2
  int32_t v200; // w3
  __int64 v201; // x2
  __int64 v202; // x3
  __int64 v203; // x4
  __int64 v204; // x0
  ServantStatusBattleListViewItem_o *v205; // x26
  int32_t v206; // w2
  int32_t v207; // w3
  __int64 v208; // x0
  int32_t v209; // w2
  int32_t v210; // w3
  __int64 v211; // x0
  int32_t v212; // w2
  int32_t v213; // w3
  __int64 v214; // x0
  int32_t v215; // w2
  int32_t v216; // w3
  WarBoardAI__Think_d__11_o **v218; // [xsp+10h] [xbp-110h]
  Il2CppObject *object; // [xsp+18h] [xbp-108h]
  System_Collections_Generic_HashSet_T__o **v220; // [xsp+20h] [xbp-100h]
  System_Collections_Generic_List_Decimal__o *v221; // [xsp+20h] [xbp-100h]
  Il2CppObject *v222; // [xsp+28h] [xbp-F8h]
  WarBoardAI__Think_d__11_o *v223; // [xsp+30h] [xbp-F0h]
  System_Collections_Generic_List_Enumerator_object__o v224; // [xsp+38h] [xbp-E8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v225; // [xsp+50h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v226; // [xsp+70h] [xbp-B0h] BYREF

  v4 = this;
  if ( (byte_4A6DA3B & 1) == 0 )
  {
    sub_1B90010(&BalanceConfig_TypeInfo, method);
    sub_1B90010(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___, v5);
    sub_1B90010(&bool_TypeInfo, v6);
    sub_1B90010(&System_Decimal_TypeInfo, v7);
    sub_1B90010(&Method_System_Linq_Enumerable_OrderByDescending_List_WarBoardAIRoute_RouteData___Decimal___, v8);
    sub_1B90010(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____76216888, v9);
    sub_1B90010(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___, v10);
    sub_1B90010(&Method_System_Linq_Enumerable_Take_List_WarBoardAIRoute_RouteData____, v11);
    sub_1B90010(&Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____, v12);
    sub_1B90010(&Method_System_Linq_Enumerable_Where_List_WarBoardAIRoute_RouteData____, v13);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__, v14);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__Dispose__, v15);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__, v16);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__MoveNext__, v17);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__, v18);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__get_Current__, v19);
    sub_1B90010(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v20);
    sub_1B90010(&System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo, v21);
    sub_1B90010(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo, v22);
    sub_1B90010(&System_Func_WarBoardAIRoute_RouteData__float__TypeInfo, v23);
    sub_1B90010(&System_Func_List_WarBoardAIRoute_RouteData___bool__TypeInfo, v24);
    sub_1B90010(&Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__, v25);
    sub_1B90010(&Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__, v26);
    sub_1B90010(&Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__, v27);
    sub_1B90010(&System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo, v28);
    sub_1B90010(&Method_System_Collections_Generic_List_Decimal__Add__, v29);
    sub_1B90010(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__, v30);
    sub_1B90010(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__, v31);
    sub_1B90010(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__GetEnumerator__, v32);
    sub_1B90010(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor__, v33);
    sub_1B90010(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__, v34);
    sub_1B90010(&Method_System_Collections_Generic_List_Decimal___ctor__, v35);
    sub_1B90010(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___get_Count__, v36);
    sub_1B90010(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__, v37);
    sub_1B90010(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__, v38);
    sub_1B90010(&System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo, v39);
    sub_1B90010(&System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo, v40);
    sub_1B90010(&System_Collections_Generic_List_Decimal__TypeInfo, v41);
    sub_1B90010(&Method_WarBoardAI___c__Think_b__11_0__, v42);
    sub_1B90010(&Method_WarBoardAI___c__Think_b__11_1__, v43);
    sub_1B90010(&Method_WarBoardAI___c__Think_b__11_3__, v44);
    sub_1B90010(&Method_WarBoardAI___c__Think_b__11_8__, v45);
    sub_1B90010(&Method_WarBoardAI___c__Think_b__11_9__, v46);
    sub_1B90010(&Method_WarBoardAI___c__DisplayClass11_0__Think_b__6__, v47);
    sub_1B90010(&WarBoardAI___c__DisplayClass11_0_TypeInfo, v48);
    sub_1B90010(&WarBoardAI___c_TypeInfo, v49);
    this = (WarBoardAI__Think_d__11_o *)sub_1B90010(&Method_WarBoardAI__Think_b__11_2__, v50);
    byte_4A6DA3B = 1;
  }
  memset(&v226, 0, sizeof(v226));
  memset(&v225, 0, sizeof(v225));
  _4__this = v4->fields.__4__this;
  v222 = (Il2CppObject *)_4__this;
  v223 = v4;
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
      v55 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v55,
        (const MethodInfo_351018C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor__);
      RouteData = WarBoardAIRoute__CreateRouteData(
                    routeClass,
                    placePieceData,
                    0,
                    (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v55,
                    v56);
      v4->fields.__2__current = (Il2CppObject *)RouteData;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B8FFB4(p__2__current, (int32_t)RouteData, v59, v60);
      v61 = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return v61;
    case 1:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_164;
      v64 = _4__this->fields.routeClass;
      if ( !v64 )
        goto LABEL_164;
      allRouteList = v64->fields.allRouteList;
      v4->fields._allRouteList_5__2 = allRouteList;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v4->fields._allRouteList_5__2, (int32_t)allRouteList, v2, v3);
      allRouteList_5__2 = v4->fields._allRouteList_5__2;
      if ( !allRouteList_5__2 )
        goto LABEL_164;
      if ( !allRouteList_5__2->fields._size )
      {
        v61 = 1;
        LOBYTE(v224.fields._list) = 1;
        v214 = j_il2cpp_value_box_0(bool_TypeInfo, &v224, v66, v67, v68);
        v4->fields.__2__current = (Il2CppObject *)v214;
        v190 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B8FFB4(v190, v214, v215, v216);
        v193 = 2;
        goto LABEL_169;
      }
LABEL_16:
      v70 = sub_1B9025C(WarBoardAI___c__DisplayClass11_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v70, 0LL);
      if ( !v222 )
        goto LABEL_164;
      klass = v222[1].klass;
      if ( !klass )
        goto LABEL_164;
      v72 = v4->fields._allRouteList_5__2;
      if ( !v72 )
        goto LABEL_164;
      namespaze_high = HIDWORD(klass->_1.namespaze);
      if ( namespaze_high >= v72->fields._size )
        namespaze_high = v72->fields._size;
      if ( !namespaze_high )
        namespaze_high = v72->fields._size;
      v4->fields._pickValue_5__3 = namespaze_high;
      v74 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v74 = BalanceConfig_TypeInfo;
        v72 = v4->fields._allRouteList_5__2;
      }
      v75 = WarBoardAI___c_TypeInfo;
      IsWarBoardAiCalcEvalSum = v74->static_fields->IsWarBoardAiCalcEvalSum;
      if ( !WarBoardAI___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
        v75 = WarBoardAI___c_TypeInfo;
      }
      static_fields = v75->static_fields;
      if ( IsWarBoardAiCalcEvalSum )
      {
        _9__11_0 = (System_Func_T__TResult__o *)static_fields->__9__11_0;
        if ( _9__11_0 )
          goto LABEL_39;
        if ( !v75->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v75);
          v75 = WarBoardAI___c_TypeInfo;
        }
        v79 = (Il2CppObject *)v75->static_fields->__9;
        _9__11_0 = (System_Func_T__TResult__o *)sub_1B9025C(System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo);
        System_Func_object__Decimal____ctor(_9__11_0, v79, Method_WarBoardAI___c__Think_b__11_0__, 0LL);
        v82 = WarBoardAI___c_TypeInfo->static_fields;
        v82->__9__11_0 = (struct System_Func_List_WarBoardAIRoute_RouteData___Decimal__o *)_9__11_0;
        p__9__11_0 = (ServantStatusBattleListViewItem_o *)&v82->__9__11_0;
      }
      else
      {
        _9__11_0 = (System_Func_T__TResult__o *)static_fields->__9__11_1;
        if ( _9__11_0 )
          goto LABEL_39;
        if ( !v75->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v75);
          v75 = WarBoardAI___c_TypeInfo;
        }
        v84 = (Il2CppObject *)v75->static_fields->__9;
        _9__11_0 = (System_Func_T__TResult__o *)sub_1B9025C(System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo);
        System_Func_object__Decimal____ctor(_9__11_0, v84, Method_WarBoardAI___c__Think_b__11_1__, 0LL);
        v85 = WarBoardAI___c_TypeInfo->static_fields;
        v85->__9__11_1 = (struct System_Func_List_WarBoardAIRoute_RouteData___Decimal__o *)_9__11_0;
        p__9__11_0 = (ServantStatusBattleListViewItem_o *)&v85->__9__11_1;
      }
      sub_1B8FFB4(p__9__11_0, (int32_t)_9__11_0, v80, v81);
LABEL_39:
      v86 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__Decimal_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v72,
                                                                   (System_Func_TSource__TKey__o *)_9__11_0,
                                                                   (const MethodInfo_2EB8C04 *)Method_System_Linq_Enumerable_OrderByDescending_List_WarBoardAIRoute_RouteData___Decimal___);
      v87 = System_Linq_Enumerable__ToArray_object_(
              v86,
              (const MethodInfo_2EC6F94 *)Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____);
      v88 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v88,
        (const MethodInfo_351018C *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
      v4->fields._availableRouteList_5__4 = (struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *)v88;
      p_availableRouteList_5__4 = (WarBoardAI__Think_d__11_o **)&v4->fields._availableRouteList_5__4;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v4->fields._availableRouteList_5__4, (int32_t)v88, v90, v91);
      v92 = (System_Collections_Generic_HashSet_T__o *)sub_1B9025C(System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo);
      System_Collections_Generic_HashSet_object____ctor(
        v92,
        (const MethodInfo_33CB7E8 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__);
      if ( !v70 )
        goto LABEL_164;
      object = (Il2CppObject *)v70;
      *(_QWORD *)(v70 + 16) = v92;
      v220 = (System_Collections_Generic_HashSet_T__o **)(v70 + 16);
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v70 + 16), (int32_t)v92, v93, v94);
      if ( !v87 )
        goto LABEL_164;
      v98 = *(_QWORD *)&v87->max_length;
      if ( (int)v98 >= 1 )
      {
        v99 = 0LL;
        pickValue_5__3 = v4->fields._pickValue_5__3;
        v101 = (ServantStatusBattleListViewItem_o *)(v70 + 24);
        v218 = (WarBoardAI__Think_d__11_o **)&v4->fields._availableRouteList_5__4;
        do
        {
          if ( v99 >= (unsigned int)v98 )
            goto LABEL_171;
          v102 = (System_Collections_ICollection_o *)v87->m_Items[v99];
          this = (WarBoardAI__Think_d__11_o *)BasicHelper__IsNullOrEmpty(v102, 0LL);
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
              if ( !v102 )
                goto LABEL_164;
              this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)v102,
                                                    0,
                                                    (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
              if ( !this )
                goto LABEL_164;
              if ( WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)this, 0LL) )
              {
                v103 = *v220;
                this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_List_object___get_Item(
                                                      (System_Collections_Generic_List_object__o *)v102,
                                                      0,
                                                      (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
                if ( !this || !v103 )
                  goto LABEL_164;
                this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_HashSet_object___Add(
                                                      v103,
                                                      *(Il2CppObject **)&this->fields._pickValue_5__3,
                                                      (const MethodInfo_33CC9CC *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__);
                goto LABEL_69;
              }
              v104 = (System_Func_object__bool__o *)v101->klass;
              if ( !v101->klass )
              {
                v104 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
                System_Func_object__bool____ctor(
                  v104,
                  object,
                  Method_WarBoardAI___c__DisplayClass11_0__Think_b__6__,
                  0LL);
                object[1].monitor = v104;
                p_availableRouteList_5__4 = v218;
                sub_1B8FFB4(v101, (int32_t)v104, v105, v106);
              }
              this = (WarBoardAI__Think_d__11_o *)BasicHelper__Any_object_(
                                                    (System_Collections_Generic_List_T__o *)v102,
                                                    (System_Func_T__bool__o *)v104,
                                                    (const MethodInfo_2E795E4 *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
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
                                                        (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v102,
                                                        v95),
                  ((unsigned __int8)this & 1) == 0) )
            {
              this = *p_availableRouteList_5__4;
              if ( !*p_availableRouteList_5__4 )
                goto LABEL_164;
              v107 = *(_QWORD *)&this->fields.__1__state;
              v108 = Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__;
              ++HIDWORD(this->fields.__2__current);
              if ( !v107 )
                goto LABEL_164;
              _2__current_low = SLODWORD(this->fields.__2__current);
              if ( (unsigned int)_2__current_low >= *(_DWORD *)(v107 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)v102,
                  *(const MethodInfo_35109C0 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
              }
              else
              {
                v110 = v107 + 8 * _2__current_low;
                LODWORD(this->fields.__2__current) = _2__current_low + 1;
                *(_QWORD *)(v110 + 32) = v102;
                sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v110 + 32), (int32_t)v102, (int32_t)v95, v96);
              }
              availableRouteList_5__4 = *p_availableRouteList_5__4;
              if ( !*p_availableRouteList_5__4 )
                goto LABEL_164;
              if ( pickValue_5__3 <= SLODWORD(availableRouteList_5__4->fields.__2__current) )
                goto LABEL_71;
            }
          }
LABEL_69:
          LODWORD(v98) = v87->max_length;
        }
        while ( (__int64)++v99 < (int)v98 );
      }
      availableRouteList_5__4 = *p_availableRouteList_5__4;
      if ( !*p_availableRouteList_5__4 )
        goto LABEL_164;
LABEL_71:
      v62 = v223;
      if ( SLODWORD(availableRouteList_5__4->fields.__2__current) <= 0 )
      {
        v61 = 1;
        LOBYTE(v224.fields._list) = 1;
        v211 = j_il2cpp_value_box_0(bool_TypeInfo, &v224, v95, v96, v97);
        v223->fields.__2__current = (Il2CppObject *)v211;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v223->fields.__2__current, v211, v212, v213);
        v223->fields.__1__state = 3;
      }
      else
      {
LABEL_72:
        v111 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_List_WarBoardAIRoute_RouteData___bool__TypeInfo);
        System_Func_object__bool____ctor(v111, v222, Method_WarBoardAI__Think_b__11_2__, 0LL);
        v112 = System_Linq_Enumerable__Where_object_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)availableRouteList_5__4,
                 (System_Func_TSource__bool__o *)v111,
                 (const MethodInfo_2ECC92C *)Method_System_Linq_Enumerable_Where_List_WarBoardAIRoute_RouteData____);
        v113 = System_Linq_Enumerable__Take_object_(
                 v112,
                 v62->fields._pickValue_5__3,
                 (const MethodInfo_2EC5D48 *)Method_System_Linq_Enumerable_Take_List_WarBoardAIRoute_RouteData____);
        v114 = System_Linq_Enumerable__ToArray_object_(
                 v113,
                 (const MethodInfo_2EC6F94 *)Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____);
        v62->fields._evalValueSortList_5__5 = (struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *)v114;
        sub_1B8FFB4(
          (ServantStatusBattleListViewItem_o *)&v62->fields._evalValueSortList_5__5,
          (int32_t)v114,
          v115,
          v116);
        evalValueSortList_5__5 = v62->fields._evalValueSortList_5__5;
        if ( !evalValueSortList_5__5 )
          goto LABEL_164;
        v4 = v62;
        if ( !*(_QWORD *)&evalValueSortList_5__5->max_length )
        {
          v61 = 1;
          LOBYTE(v224.fields._list) = 1;
          v208 = j_il2cpp_value_box_0(bool_TypeInfo, &v224, v117, v118, v119);
          v62->fields.__2__current = (Il2CppObject *)v208;
          v190 = (ServantStatusBattleListViewItem_o *)&v62->fields.__2__current;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v62->fields.__2__current, v208, v209, v210);
          v193 = 4;
          goto LABEL_169;
        }
LABEL_74:
        v121 = (System_Collections_Generic_List_Decimal__o *)sub_1B9025C(System_Collections_Generic_List_Decimal__TypeInfo);
        System_Collections_Generic_List_Decimal____ctor(
          v121,
          (const MethodInfo_34E390C *)Method_System_Collections_Generic_List_Decimal___ctor__);
        v123 = v4->fields._evalValueSortList_5__5;
        if ( !v123 )
          goto LABEL_164;
        v124 = 0;
        v221 = v121;
        while ( 1 )
        {
          max_length = v123->max_length;
          if ( v124 >= max_length )
            break;
          if ( v124 >= (unsigned int)max_length )
            goto LABEL_171;
          this = (WarBoardAI__Think_d__11_o *)v123->m_Items[v124];
          if ( !this )
            goto LABEL_164;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v224,
            (System_Collections_Generic_List_object__o *)this,
            (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
          v126 = 0;
          v127 = 0;
          v128 = 0;
          v226 = v224;
          while ( 1 )
          {
            v129 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     &v226,
                     (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
            if ( !v129 )
              break;
            current = (WarBoardAIRoute_RouteData_o *)v226.fields._current;
            if ( !v226.fields._current )
              sub_1B9026C(v129, v130);
            if ( WarBoardAIRoute_RouteData__HasFlag((WarBoardAIRoute_RouteData_o *)v226.fields._current, 4LL, 0LL) )
            {
              actionPiece = current->fields.actionPiece;
              if ( actionPiece )
                v127 |= WarBoardPieceData__get_isMaster(actionPiece, 0LL);
              v128 = 1;
            }
            v126 |= WarBoardAIRoute_RouteData__HasFlag(current, 8LL, 0LL);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v226,
            (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
          if ( !v222 )
            goto LABEL_164;
          v133 = v222[1].klass;
          if ( !v133 )
            goto LABEL_164;
          this = (WarBoardAI__Think_d__11_o *)v133->_1.klass;
          if ( !this )
            goto LABEL_164;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v224,
            (System_Collections_Generic_List_object__o *)this,
            (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__GetEnumerator__);
          v134 = 0.0;
          v225 = v224;
          while ( 1 )
          {
            v135 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     &v225,
                     (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__MoveNext__);
            if ( !v135 )
              break;
            v137 = (WarBoardTacticalTrendEntity_o *)v225.fields._current;
            if ( !v225.fields._current )
              sub_1B9026C(v135, v136);
            switch ( HIDWORD(v225.fields._current[1].klass) )
            {
              case 0:
                if ( v124 < SLODWORD(v225.fields._current[1].monitor) )
                {
                  BestMagnification = WarBoardTacticalTrendEntity__GetBestMagnification(
                                        (WarBoardTacticalTrendEntity_o *)v225.fields._current,
                                        0LL);
                  LowestMagnification = WarBoardTacticalTrendEntity__GetLowestMagnification(v137, 0LL);
                  value = v137->fields.value;
                  ImmobilityMagnification = WarBoardTacticalTrendEntity__GetBestMagnification(v137, 0LL)
                                          - (float)((float)((float)(BestMagnification - LowestMagnification)
                                                          / (float)((float)value + -1.0))
                                                  * (float)v124);
                  goto LABEL_102;
                }
                break;
              case 1:
                if ( (v128 & 1) != 0 )
                  goto LABEL_101;
                break;
              case 4:
                if ( (v127 & 1) != 0 )
                  goto LABEL_101;
                break;
              case 5:
                if ( (v126 & 1) != 0 )
                {
LABEL_101:
                  ImmobilityMagnification = WarBoardTacticalTrendEntity__GetImmobilityMagnification(
                                              (WarBoardTacticalTrendEntity_o *)v225.fields._current,
                                              0LL);
LABEL_102:
                  v134 = v134 + ImmobilityMagnification;
                }
                break;
              default:
                continue;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v225,
            (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__Dispose__);
          v4 = v223;
          v142 = BalanceConfig_TypeInfo;
          if ( v134 == 0.0 )
            v143 = 1.0;
          else
            v143 = v134;
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
          v146 = v223->fields._evalValueSortList_5__5;
          if ( !v146 )
            goto LABEL_164;
          if ( v124 >= v146->max_length )
            goto LABEL_171;
          v147 = this;
          v148 = (System_Collections_Generic_IEnumerable_TSource__o *)v146->m_Items[v124];
          v149 = WarBoardAI___c_TypeInfo;
          v150 = (System_Decimal_o *)method;
          if ( !WarBoardAI___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
            v149 = WarBoardAI___c_TypeInfo;
          }
          v151 = v149->static_fields;
          if ( v145 )
          {
            _9__11_8 = (System_Func_T__TResult__o *)v151->__9__11_8;
            if ( !_9__11_8 )
            {
              if ( !v149->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v149);
                v149 = WarBoardAI___c_TypeInfo;
              }
              v154 = (Il2CppObject *)v149->static_fields->__9;
              _9__11_8 = (System_Func_T__TResult__o *)sub_1B9025C(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
              System_Func_object__Decimal____ctor(_9__11_8, v154, Method_WarBoardAI___c__Think_b__11_8__, 0LL);
              v155 = WarBoardAI___c_TypeInfo->static_fields;
              v155->__9__11_8 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_8;
              sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v155->__9__11_8, (int32_t)_9__11_8, v156, v157);
              v4 = v223;
            }
            v158 = System_Linq_Enumerable__Sum_object__49044172(
                     (System_Decimal_o *)&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___,
                     v148,
                     (System_Func_TSource__Decimal__o *)_9__11_8,
                     (const MethodInfo_2EC5ACC *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
            cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
            if ( !(_DWORD)cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
          }
          else
          {
            _9__11_9 = (System_Func_T__TResult__o *)v151->__9__11_9;
            if ( !_9__11_9 )
            {
              if ( !v149->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v149);
                v149 = WarBoardAI___c_TypeInfo;
              }
              v160 = (Il2CppObject *)v149->static_fields->__9;
              _9__11_9 = (System_Func_T__TResult__o *)sub_1B9025C(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
              System_Func_object__Decimal____ctor(_9__11_9, v160, Method_WarBoardAI___c__Think_b__11_9__, 0LL);
              v161 = WarBoardAI___c_TypeInfo->static_fields;
              v161->__9__11_9 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_9;
              sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v161->__9__11_9, (int32_t)_9__11_9, v162, v163);
              v4 = v223;
            }
            this = (WarBoardAI__Think_d__11_o *)System_Linq_Enumerable__Sum_object__49044172(
                                                  (System_Decimal_o *)&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___,
                                                  v148,
                                                  (System_Func_TSource__Decimal__o *)_9__11_9,
                                                  (const MethodInfo_2EC5ACC *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
            v164 = v4->fields._evalValueSortList_5__5;
            if ( !v164 )
              goto LABEL_164;
            if ( v124 >= v164->max_length )
              goto LABEL_171;
            v165 = (System_Decimal_o *)v164->m_Items[v124];
            if ( !v165 )
              goto LABEL_164;
            v166 = this;
            flags = v165[1].fields.flags;
            v168 = (System_Decimal_o *)method;
            if ( !System_Decimal_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
            v169 = System_Decimal__op_Implicit_62994468(v165, flags, 0LL);
            v4 = v223;
            v158 = System_Decimal__op_Division(v170, (System_Decimal_o *)v166, v168, (const MethodInfo *)v169);
          }
          this = (WarBoardAI__Think_d__11_o *)System_Decimal__op_Multiply(
                                                cctor_finished,
                                                (System_Decimal_o *)v147,
                                                v150,
                                                (const MethodInfo *)v158);
          v121 = v221;
          if ( v221 )
          {
            items = v221->fields._items;
            ++v221->fields._version;
            if ( items )
            {
              size = v221->fields._size;
              v122 = method;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_Decimal___AddWithResize(
                  v221,
                  (System_Decimal_o *)this,
                  (const MethodInfo_34E419C *)method);
              }
              else
              {
                v173 = &items->obj + size;
                v221->fields._size = size + 1;
                v173[2].klass = (Il2CppClass *)this;
                v173[2].monitor = (void *)method;
              }
              v123 = v4->fields._evalValueSortList_5__5;
              ++v124;
              if ( v123 )
                continue;
            }
          }
          goto LABEL_164;
        }
        if ( !v222 )
          goto LABEL_164;
        this = (WarBoardAI__Think_d__11_o *)WarBoardAI__GetRandomIndex((WarBoardAI_o *)this, v121, v122);
        if ( (unsigned int)this >= v123->max_length )
LABEL_171:
          sub_1B90274(this, method);
        v176 = v123->m_Items[(int)this];
        v222[1].monitor = v176;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v222[1].monitor, (int32_t)v176, v174, v175);
        v177 = WarBoardAI___c_TypeInfo;
        monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v222[1].monitor;
        if ( !WarBoardAI___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
          v177 = WarBoardAI___c_TypeInfo;
        }
        _9__11_3 = (System_Func_T__TResult__o *)v177->static_fields->__9__11_3;
        if ( !_9__11_3 )
        {
          if ( !v177->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v177);
            v177 = WarBoardAI___c_TypeInfo;
          }
          v180 = (Il2CppObject *)v177->static_fields->__9;
          _9__11_3 = (System_Func_T__TResult__o *)sub_1B9025C(System_Func_WarBoardAIRoute_RouteData__float__TypeInfo);
          System_Func_object__float____ctor(_9__11_3, v180, Method_WarBoardAI___c__Think_b__11_3__, 0LL);
          v181 = WarBoardAI___c_TypeInfo->static_fields;
          v181->__9__11_3 = (struct System_Func_WarBoardAIRoute_RouteData__float__o *)_9__11_3;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v181->__9__11_3, (int32_t)_9__11_3, v182, v183);
        }
        System_Linq_Enumerable__Sum_object__49044316(
          monitor,
          (System_Func_TSource__float__o *)_9__11_3,
          (const MethodInfo_2EC5B5C *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____76216888);
        if ( WarBoardAI__CheckWasteRoute(
               v184,
               (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v222[1].monitor,
               v185) )
        {
          v61 = 1;
          LOBYTE(v224.fields._list) = 1;
          v189 = j_il2cpp_value_box_0(bool_TypeInfo, &v224, v186, v187, v188);
          v4->fields.__2__current = (Il2CppObject *)v189;
          v190 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
          sub_1B8FFB4(v190, v189, v191, v192);
          v193 = 5;
LABEL_169:
          *(_DWORD *)&v190[-1].fields.isMine = v193;
          return v61;
        }
LABEL_152:
        v194 = (System_Collections_Generic_HashSet_T__o *)sub_1B9025C(System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo);
        System_Collections_Generic_HashSet_object____ctor(
          v194,
          (const MethodInfo_33CB7E8 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__);
        if ( !v222 || (this = (WarBoardAI__Think_d__11_o *)v222[1].monitor) == 0LL )
LABEL_164:
          sub_1B9026C(this, method);
        v197 = LODWORD(this->fields.__2__current) - 1;
        if ( v197 >= 0 )
        {
          while ( 1 )
          {
            this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)this,
                                                  v197,
                                                  (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
            if ( !this )
              goto LABEL_164;
            method = *(const MethodInfo **)&this->fields._pickValue_5__3;
            v198 = this;
            if ( method )
            {
              if ( !v194 )
                goto LABEL_164;
              if ( !System_Collections_Generic_HashSet_object___Contains(
                      v194,
                      (Il2CppObject *)method,
                      (const MethodInfo_33CBEDC *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__)
                && !WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)v198, 0LL) )
              {
                System_Collections_Generic_HashSet_object___Add(
                  v194,
                  *(Il2CppObject **)&v198->fields._pickValue_5__3,
                  (const MethodInfo_33CC9CC *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__);
                this = *(WarBoardAI__Think_d__11_o **)&v198->fields._pickValue_5__3;
                if ( !this )
                  goto LABEL_164;
                WarBoardPieceData__SetPrevAiRoute((WarBoardPieceData_o *)this, (WarBoardAIRoute_RouteData_o *)v198, 0LL);
              }
            }
            if ( --v197 < 0 )
              break;
            this = (WarBoardAI__Think_d__11_o *)v222[1].monitor;
            if ( !this )
              goto LABEL_164;
          }
        }
        v4->fields._availableRouteList_5__4 = 0LL;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v4->fields._availableRouteList_5__4, 0, v195, v196);
        v4->fields._evalValueSortList_5__5 = 0LL;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v4->fields._evalValueSortList_5__5, 0, v199, v200);
        LOBYTE(v224.fields._list) = 0;
        v204 = j_il2cpp_value_box_0(bool_TypeInfo, &v224, v201, v202, v203);
        v4->fields.__2__current = (Il2CppObject *)v204;
        v205 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B8FFB4(v205, v204, v206, v207);
        *(_DWORD *)&v205[-1].fields.isMine = 6;
        return 1;
      }
      return v61;
    case 2:
      v4->fields.__1__state = -1;
      goto LABEL_16;
    case 3:
      v62 = v4;
      availableRouteList_5__4 = (WarBoardAI__Think_d__11_o *)v4->fields._availableRouteList_5__4;
      v62->fields.__1__state = -1;
      goto LABEL_72;
    case 4:
      v4->fields.__1__state = -1;
      goto LABEL_74;
    case 5:
      v4->fields.__1__state = -1;
      goto LABEL_152;
    case 6:
      v61 = 0;
      v4->fields.__1__state = -1;
      return v61;
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

  v2 = sub_1B90024(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B9025C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B90024(&Method_WarBoardAI__Think_d__11_System_Collections_IEnumerator_Reset__);
  sub_1B90138(v3, v4);
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
  int32_t v4; // w3

  if ( (byte_4A6DA33 & 1) == 0 )
  {
    sub_1B90010(&WarBoardAI___c_TypeInfo, v1);
    byte_4A6DA33 = 1;
  }
  v2 = (Il2CppObject *)sub_1B9025C(WarBoardAI___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardAI___c_TypeInfo->static_fields->__9 = (struct WarBoardAI___c_o *)v2;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)WarBoardAI___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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

  if ( (byte_4A6DA34 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___, x);
    sub_1B90010(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo, v5);
    sub_1B90010(&Method_WarBoardAI___c__Think_b__11_4__, v6);
    sub_1B90010(&WarBoardAI___c_TypeInfo, v7);
    byte_4A6DA34 = 1;
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
    _9__11_4 = (System_Func_T__TResult__o *)sub_1B9025C(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    System_Func_object__Decimal____ctor(_9__11_4, v11, Method_WarBoardAI___c__Think_b__11_4__, 0LL);
    v12 = WarBoardAI___c_TypeInfo->static_fields;
    v12->__9__11_4 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_4;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v12->__9__11_4, (int32_t)_9__11_4, v13, v14);
  }
  return System_Linq_Enumerable__Sum_object__49044172(
           (System_Decimal_o *)static_fields,
           (System_Collections_Generic_IEnumerable_TSource__o *)x,
           (System_Func_TSource__Decimal__o *)_9__11_4,
           (const MethodInfo_2EC5ACC *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
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

  if ( (byte_4A6DA36 & 1) == 0 )
  {
    sub_1B90010(&System_Decimal_TypeInfo, x);
    sub_1B90010(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___, v5);
    sub_1B90010(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__, v7);
    sub_1B90010(&Method_WarBoardAI___c__Think_b__11_5__, v8);
    sub_1B90010(&WarBoardAI___c_TypeInfo, v9);
    byte_4A6DA36 = 1;
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
    _9__11_5 = (System_Func_T__TResult__o *)sub_1B9025C(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    System_Func_object__Decimal____ctor(_9__11_5, v13, Method_WarBoardAI___c__Think_b__11_5__, 0LL);
    v14 = WarBoardAI___c_TypeInfo->static_fields;
    v14->__9__11_5 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_5;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v14->__9__11_5, (int32_t)_9__11_5, v15, v16);
  }
  v17 = System_Linq_Enumerable__Sum_object__49044172(
          (System_Decimal_o *)static_fields,
          (System_Collections_Generic_IEnumerable_TSource__o *)x,
          (System_Func_TSource__Decimal__o *)_9__11_5,
          (const MethodInfo_2EC5ACC *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
  if ( !x )
    sub_1B9026C(v17, v18);
  v19 = v17;
  size = x->fields._size;
  v21 = v18;
  cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
  if ( !(_DWORD)cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  v23 = System_Decimal__op_Implicit_62994468(cctor_finished, size, 0LL);
  return System_Decimal__op_Division(v24, v19, v21, (const MethodInfo *)v23);
}


float __fastcall WarBoardAI___c___Think_b__11_3(
        WarBoardAI___c_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B9026C(this, 0LL);
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

  if ( (byte_4A6DA35 & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_1B90010(&System_Decimal_TypeInfo, y);
    byte_4A6DA35 = 1;
  }
  if ( !y )
    sub_1B9026C(this, y);
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

  if ( (byte_4A6DA37 & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_1B90010(&System_Decimal_TypeInfo, y);
    byte_4A6DA37 = 1;
  }
  if ( !y )
    sub_1B9026C(this, y);
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
    sub_1B9026C(this, 0LL);
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

  if ( (byte_4A6DA38 & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_1B90010(&System_Decimal_TypeInfo, y);
    byte_4A6DA38 = 1;
  }
  if ( !y )
    sub_1B9026C(this, y);
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

  if ( (byte_4A6DA39 & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_1B90010(&System_Decimal_TypeInfo, y);
    byte_4A6DA39 = 1;
  }
  if ( !y )
    sub_1B9026C(this, y);
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
  if ( (byte_4A6DA3A & 1) == 0 )
  {
    this = (WarBoardAI___c__DisplayClass11_0_o *)sub_1B90010(
                                                   &Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__,
                                                   x);
    byte_4A6DA3A = 1;
  }
  if ( !x || (this = (WarBoardAI___c__DisplayClass11_0_o *)v4->fields.notActionPieceHash) == 0LL )
    sub_1B9026C(this, x);
  return System_Collections_Generic_HashSet_object___Contains(
           (System_Collections_Generic_HashSet_T__o *)this,
           (Il2CppObject *)x->fields.basePiece,
           (const MethodInfo_33CBEDC *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__);
}