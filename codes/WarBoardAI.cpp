void WarBoardAI___ctor(WarBoardAI_o *this, WarBoardStageNpcEntity_o *npc, const MethodInfo *method)
{
  WarBoardAIRoute_o *v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C24C5F & 1) == 0 )
  {
    sub_1C2D490(&WarBoardAIRoute_TypeInfo);
    byte_4C24C5F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v5 = (WarBoardAIRoute_o *)sub_1C2D6DC(WarBoardAIRoute_TypeInfo);
  WarBoardAIRoute___ctor(v5, npc, 0);
  this->fields.routeClass = v5;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)v5, v6, v7);
}


void WarBoardAI__AddRoutePiecePersonalityDic(
        WarBoardAI_o *this,
        int32_t aiId,
        int32_t pieceIndex,
        const MethodInfo *method)
{
  WarBoardAIRoute_o *routeClass; // x0

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_1C2D6EC(0, aiId);
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
  Il2CppClass *v18; // x8
  IWarBoardAIRouteWaste_c *v19; // x1
  __int64 v20; // x9
  IWarBoardAIRouteWaste_c **p_offset; // x10
  __int64 v22; // x0
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

  if ( (byte_4C24C61 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__set_Item__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__TypeInfo);
    sub_1C2D490(&IWarBoardAIRouteWaste_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
    byte_4C24C61 = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_33E08A8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ctor__);
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
               (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
                   (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
            || (Item = (Il2CppObject *)WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)Item, 0),
                ((unsigned __int8)Item & 1) != 0) )
          {
LABEL_15:
            v15 = v11[3].klass;
            if ( !v15 || !v4 )
              break;
            Item = (Il2CppObject *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                     v4,
                                     HIDWORD(v15->_1.namespaze),
                                     (const MethodInfo_33E1470 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__ContainsKey__);
            if ( ((unsigned __int8)Item & 1) != 0 )
            {
              methods = 0;
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
            (const MethodInfo_33E1268 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__set_Item__);
          if ( methods && ((__int64)v11[1].klass & 0x10000002) == 0 )
          {
            v18 = methods->klass;
            v19 = *v9;
            v20 = *(unsigned __int16 *)&methods->klass->_2.rank;
            if ( *(_WORD *)&methods->klass->_2.rank )
            {
              p_offset = (IWarBoardAIRouteWaste_c **)&v18->_1.interfaceOffsets->offset;
              while ( *(p_offset - 1) != v19 )
              {
                --v20;
                p_offset += 2;
                if ( !v20 )
                  goto LABEL_29;
              }
              v22 = (__int64)&v18->vtable[*(_DWORD *)p_offset + 2];
            }
            else
            {
LABEL_29:
              v22 = sub_1C7DCA8(methods, v19, 2);
            }
            if ( ((*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v22)(methods, *(_QWORD *)(v22 + 8)) & 2) == 0 )
            {
              v23 = methods->klass;
              v24 = *v9;
              v25 = *(unsigned __int16 *)&methods->klass->_2.rank;
              if ( *(_WORD *)&methods->klass->_2.rank )
              {
                v26 = (IWarBoardAIRouteWaste_c **)&v23->_1.interfaceOffsets->offset;
                while ( *(v26 - 1) != v24 )
                {
                  --v25;
                  v26 += 2;
                  if ( !v25 )
                    goto LABEL_36;
                }
                v27 = (__int64)&v23->vtable[*(_DWORD *)v26 + 2];
              }
              else
              {
LABEL_36:
                v27 = sub_1C7DCA8(methods, v24, 2);
              }
              if ( ((*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v27)(methods, *(_QWORD *)(v27 + 8)) & 0x10000000) == 0 )
              {
                v28 = methods->klass;
                v29 = v9;
                monitor_high = HIDWORD(v11[1].monitor);
                v31 = *v29;
                v32 = *(unsigned __int16 *)&methods->klass->_2.rank;
                v33 = v29;
                if ( *(_WORD *)&methods->klass->_2.rank )
                {
                  v34 = &v28->_1.interfaceOffsets->offset;
                  while ( *((IWarBoardAIRouteWaste_c **)v34 - 1) != v31 )
                  {
                    --v32;
                    v34 += 4;
                    if ( !v32 )
                      goto LABEL_43;
                  }
                  v35 = (__int64)&v28->vtable[*v34];
                }
                else
                {
LABEL_43:
                  v35 = sub_1C7DCA8(methods, v31, 0);
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
                  v40 = *(unsigned __int16 *)&methods->klass->_2.rank;
                  if ( *(_WORD *)&methods->klass->_2.rank )
                  {
                    v41 = (IWarBoardAIRouteWaste_c **)&v37->_1.interfaceOffsets->offset;
                    while ( *(v41 - 1) != v39 )
                    {
                      --v40;
                      v41 += 2;
                      if ( !v40 )
                        goto LABEL_51;
                    }
                    v42 = (__int64)&v37->vtable[*(_DWORD *)v41 + 1];
                  }
                  else
                  {
LABEL_51:
                    v42 = sub_1C7DCA8(methods, v39, 1);
                  }
                  v36 = monitor == (*(unsigned int (__fastcall **)(Il2CppObject *, _QWORD))v42)(
                                     methods,
                                     *(_QWORD *)(v42 + 8));
                  v9 = v33;
                  if ( v36 && !WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)v11, 0) )
                  {
                    v43 = methods->klass;
                    v44 = *v33;
                    v45 = *(unsigned __int16 *)&methods->klass->_2.rank;
                    if ( *(_WORD *)&methods->klass->_2.rank )
                    {
                      v46 = (IWarBoardAIRouteWaste_c **)&v43->_1.interfaceOffsets->offset;
                      while ( *(v46 - 1) != v44 )
                      {
                        --v45;
                        v46 += 2;
                        if ( !v45 )
                          goto LABEL_60;
                      }
                      v47 = (__int64)&v43->vtable[*(_DWORD *)v46 + 3];
                    }
                    else
                    {
LABEL_60:
                      v47 = sub_1C7DCA8(methods, v44, 3);
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
    sub_1C2D6EC(Item, v6);
  }
  return v8;
}


void WarBoardAI__Clear(WarBoardAI_o *this, const MethodInfo *method)
{
  WarBoardAIRoute_o *routeClass; // x0

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_1C2D6EC(0, method);
  WarBoardAIRoute__Clear(routeClass, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *WarBoardAI__ConvertForceGroupIndexToString(
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

  if ( (byte_4C24C64 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&StringLiteral_25124/*"{0},{1},{2}"*/);
    byte_4C24C64 = 1;
  }
  v20 = forceId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, *(_QWORD *)&groupId, *(_QWORD *)&index, method);
  v19 = groupId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v9, v10, v11);
  v18 = index;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v13, v14, v15);
  return System_String__Format_63499224((System_String_o *)StringLiteral_25124/*"{0},{1},{2}"*/, v8, v12, v16, 0);
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
  bool v11; // w22
  WarBoardManager_o *v13; // x21
  int32_t version; // w22
  int32_t v15; // w21
  WarBoardPieceData_o *Piece_37670316; // x0
  System_Int32_array *v17; // x21
  WarBoardManager_o *v18; // x21
  int32_t v19; // w8
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v20; // x9

  if ( (byte_4C24C62 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&WarBoardAIManager_TypeInfo);
    byte_4C24C62 = 1;
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
                                                        (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
                                                        (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
  Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this->fields.executeRoute )
    goto LABEL_40;
  v13 = (WarBoardManager_o *)Item;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)this->fields.executeRoute,
                                                        this->fields.routeIndex,
                                                        (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
  if ( !Item )
    goto LABEL_40;
  version = Item->fields._version;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
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
                                                        (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
                                                        (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
                                                          (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
    if ( !Item )
      goto LABEL_40;
    v15 = Item->fields._version;
    Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Item )
      goto LABEL_40;
    Item = (System_Collections_Generic_List_object__o *)Item[11].klass;
    if ( !Item )
      goto LABEL_40;
    Piece_37670316 = WarBoardData__GetPiece_37670316((WarBoardData_o *)Item, v15, 0);
    if ( Piece_37670316 )
    {
      if ( WarBoardPieceData__get_isServant(Piece_37670316, 0) )
      {
        Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( Item )
        {
          Item = (System_Collections_Generic_List_object__o *)Item[11].klass;
          if ( Item )
          {
            v17 = WarBoardData__GetInRangeSquareIndecies((WarBoardData_o *)Item, v15, 1, 0, 0);
            Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
            if ( Item )
            {
              WarBoardManager__DispPartyBuff((WarBoardManager_o *)Item, v17, 0);
              goto LABEL_33;
            }
          }
        }
LABEL_40:
        sub_1C2D6EC(Item, v6);
      }
    }
  }
LABEL_33:
  Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this->fields.executeRoute )
    goto LABEL_40;
  v18 = (WarBoardManager_o *)Item;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)this->fields.executeRoute,
                                                        this->fields.routeIndex,
                                                        (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
  if ( !Item || !v18 )
    goto LABEL_40;
  v11 = 1;
  Item = (System_Collections_Generic_List_object__o *)WarBoardManager__PieceAction_37870036(
                                                        v18,
                                                        monitor,
                                                        Item->fields._version,
                                                        0,
                                                        1,
                                                        0);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
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

  if ( (byte_4C24C63 & 1) == 0 )
  {
    sub_1C2D490(&System_Decimal_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Sum_Decimal___);
    sub_1C2D490(&System_Func_Decimal__Decimal__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Decimal__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Decimal__get_Item__);
    sub_1C2D490(&System_Math_TypeInfo);
    sub_1C2D490(&Method_WarBoardAI___c__GetRandomIndex_b__14_0__);
    sub_1C2D490(&WarBoardAI___c_TypeInfo);
    byte_4C24C63 = 1;
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
    _9__14_0 = (System_Func_Decimal__Decimal__o *)sub_1C2D6DC(System_Func_Decimal__Decimal__TypeInfo);
    System_Func_Decimal__Decimal____ctor(_9__14_0, v7, Method_WarBoardAI___c__GetRandomIndex_b__14_0__, 0);
    v8 = WarBoardAI___c_TypeInfo->static_fields;
    v8->__9__14_0 = _9__14_0;
    sub_1C2D434((CGThumbnailListItem_o *)&v8->__9__14_0, (int32_t)_9__14_0, v9, v10);
  }
  v11 = System_Linq_Enumerable__Sum_Decimal_(
          (System_Decimal_o *)static_fields,
          (System_Collections_Generic_IEnumerable_TSource__o *)weightTable,
          (System_Func_TSource__Decimal__o *)_9__14_0,
          (const MethodInfo_310C614 *)Method_System_Linq_Enumerable_Sum_Decimal___);
  v13 = v12;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !byte_4C24C73 )
  {
    sub_1C2D490(&System_Decimal_TypeInfo);
    byte_4C24C73 = 1;
  }
  cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
  if ( !(_DWORD)cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  v15 = System_Decimal__Floor(cctor_finished, v11, v13);
  v17 = v16;
  if ( !System_Decimal_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  v18 = System_Decimal__op_Explicit_65370164(v15, v17);
  v19 = UnityEngine_Random__Range(0.0, v18, 0);
  v21 = System_Decimal__op_Explicit(v20, v19, 0);
  if ( !weightTable )
    sub_1C2D6EC(v21, v22);
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
             (const MethodInfo_375D034 *)Method_System_Collections_Generic_List_Decimal__get_Item__);
    v29 = v28;
    if ( !System_Decimal_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
    if ( System_Decimal__op_GreaterThanOrEqual(Item, v29, v24) )
      break;
    v31 = System_Collections_Generic_List_Decimal___get_Item(
            v30,
            weightTable,
            v26,
            (const MethodInfo_375D034 *)Method_System_Collections_Generic_List_Decimal__get_Item__);
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


System_Collections_IEnumerator_o *WarBoardAI__Think(WarBoardAI_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C24C60 & 1) == 0 )
  {
    sub_1C2D490(&WarBoardAI__Think_d__11_TypeInfo);
    byte_4C24C60 = 1;
  }
  v3 = sub_1C2D6DC(WarBoardAI__Think_d__11_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void WarBoardAI__UpdateRoutePiecePersonalityDic(
        WarBoardAI_o *this,
        int32_t aiId,
        int32_t pieceIndex,
        const MethodInfo *method)
{
  WarBoardAIRoute_o *routeClass; // x0

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_1C2D6EC(0, aiId);
  WarBoardAIRoute__UpdatePiecePersonalityDic(routeClass, aiId, pieceIndex, 0);
}


bool WarBoardAI___Think_b__11_2(
        WarBoardAI_o *this,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *x,
        const MethodInfo *method)
{
  WarBoardAI___c_c *v5; // x0
  WarBoardAIRoute_o *routeClass; // x20
  System_Func_T__TResult__o *_9__11_7; // x21
  Il2CppObject *v8; // x22
  struct WarBoardAI___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x0
  __int64 v13; // x1
  float v14; // s0

  if ( (byte_4C24C65 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____78041560);
    sub_1C2D490(&System_Func_WarBoardAIRoute_RouteData__float__TypeInfo);
    sub_1C2D490(&Method_WarBoardAI___c__Think_b__11_7__);
    sub_1C2D490(&WarBoardAI___c_TypeInfo);
    byte_4C24C65 = 1;
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
    _9__11_7 = (System_Func_T__TResult__o *)sub_1C2D6DC(System_Func_WarBoardAIRoute_RouteData__float__TypeInfo);
    System_Func_object__float____ctor(_9__11_7, v8, Method_WarBoardAI___c__Think_b__11_7__, 0);
    static_fields = WarBoardAI___c_TypeInfo->static_fields;
    static_fields->__9__11_7 = (struct System_Func_WarBoardAIRoute_RouteData__float__o *)_9__11_7;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__11_7, (int32_t)_9__11_7, v10, v11);
  }
  v14 = System_Linq_Enumerable__Sum_object__51431148(
          (System_Collections_Generic_IEnumerable_TSource__o *)x,
          (System_Func_TSource__float__o *)_9__11_7,
          (const MethodInfo_310C6EC *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____78041560);
  if ( !routeClass )
    sub_1C2D6EC(v12, v13);
  return !WarBoardAIRoute__IsThinkingThreshold(routeClass, v14, 0);
}


int32_t WarBoardAI__get_ForceId(WarBoardAI_o *this, const MethodInfo *method)
{
  struct WarBoardAIRoute_o *routeClass; // x8

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_1C2D6EC(this, method);
  return routeClass->fields.forceId;
}


int32_t WarBoardAI__get_GroupId(WarBoardAI_o *this, const MethodInfo *method)
{
  struct WarBoardAIRoute_o *routeClass; // x8

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_1C2D6EC(this, method);
  return routeClass->fields.groupId;
}


void WarBoardAI__Think_d__11___ctor(WarBoardAI__Think_d__11_o *this, int32_t 1__state, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool WarBoardAI__Think_d__11__MoveNext(WarBoardAI__Think_d__11_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  WarBoardAI__Think_d__11_o *v4; // x26
  struct WarBoardAI_o *_4__this; // x12
  struct WarBoardAI_o *v6; // x19
  WarBoardAIRoute_o *routeClass; // x20
  System_Collections_Generic_Dictionary_int__uint__o *placePieceData; // x21
  System_Collections_Generic_List_object__o *v9; // x22
  System_Collections_IEnumerator_o *RouteData; // x0
  CGThumbnailListItem_o *p__2__current; // x26
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  bool v14; // w20
  WarBoardAI__Think_d__11_o *v15; // x19
  WarBoardAI__Think_d__11_o *availableRouteList_5__4; // x26
  struct WarBoardAIRoute_o *v17; // x8
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *allRouteList; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *allRouteList_5__2; // x8
  __int64 v23; // x27
  Il2CppClass *klass; // x8
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *v25; // x22
  int32_t namespaze_high; // w8
  BalanceConfig_c *v27; // x8
  WarBoardAI___c_c *v28; // x0
  _BOOL4 IsWarBoardAiCalcEvalSum; // w21
  struct WarBoardAI___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__11_0; // x23
  Il2CppObject *v32; // x24
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct WarBoardAI___c_StaticFields *v35; // x0
  CGThumbnailListItem_o *p__9__11_0; // x0
  Il2CppObject *v37; // x24
  struct WarBoardAI___c_StaticFields *v38; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  System_Object_array *v40; // x22
  System_Collections_Generic_List_object__o *v41; // x24
  WarBoardAI__Think_d__11_o **p_availableRouteList_5__4; // x23
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  System_Collections_Generic_HashSet_T__o *v45; // x25
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  const MethodInfo *v48; // x2
  const MethodInfo *v49; // x3
  __int64 v50; // x4
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v52; // x20
  int32_t pickValue_5__3; // w28
  CGThumbnailListItem_o *v54; // x25
  System_Collections_ICollection_o *v55; // x26
  System_Collections_Generic_HashSet_T__o *v56; // x27
  System_Func_object__bool__o *v57; // x27
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  __int64 v60; // x8
  _QWORD *v61; // x9
  __int64 _2__current_low; // x10
  __int64 v63; // x8
  System_Func_object__bool__o *v64; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v65; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v66; // x0
  System_Object_array *v67; // x0
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *evalValueSortList_5__5; // x8
  System_Collections_Generic_List_Decimal__o *v74; // x21
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *v75; // x22
  int v76; // w29
  int v77; // w8
  int v78; // w24
  int v79; // w25
  char v80; // w26
  _BOOL8 v81; // x0
  __int64 v82; // x1
  WarBoardAIRoute_RouteData_o *current; // x22
  WarBoardPieceData_o *actionPiece; // x0
  Il2CppClass *v85; // x8
  float v86; // s12
  _BOOL8 v87; // x0
  __int64 v88; // x1
  WarBoardTacticalTrendEntity_o *v89; // x22
  float BestMagnification; // s8
  float LowestMagnification; // s0
  int value; // w23
  float ImmobilityMagnification; // s0
  BalanceConfig_c *v94; // x0
  float v95; // s8
  System_Decimal_c *v96; // x8
  _BOOL4 v97; // w25
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *v98; // x8
  WarBoardAI__Think_d__11_o *v99; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v100; // x24
  WarBoardAI___c_c *v101; // x0
  System_Decimal_o *v102; // x23
  struct WarBoardAI___c_StaticFields *v103; // x8
  System_Func_T__TResult__o *_9__11_8; // x25
  System_Func_T__TResult__o *_9__11_9; // x25
  Il2CppObject *v106; // x26
  struct WarBoardAI___c_StaticFields *v107; // x0
  int32_t v108; // w2
  const MethodInfo *v109; // x3
  System_Decimal_o *v110; // x24
  System_Decimal_o *cctor_finished; // x8
  Il2CppObject *v112; // x26
  struct WarBoardAI___c_StaticFields *v113; // x0
  int32_t v114; // w2
  const MethodInfo *v115; // x3
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *v116; // x8
  System_Decimal_o *v117; // x8
  WarBoardAI__Think_d__11_o *v118; // x24
  int32_t flags; // w26
  System_Decimal_o *v120; // x25
  System_Decimal_o *v121; // x0
  System_Decimal_o *v122; // x8
  struct System_Decimal_array *items; // x9
  __int64 size; // x11
  Il2CppObject *v125; // x9
  const MethodInfo *v126; // x3
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v127; // x1
  WarBoardAI___c_c *v128; // x0
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x22
  System_Func_T__TResult__o *_9__11_3; // x23
  Il2CppObject *v131; // x24
  struct WarBoardAI___c_StaticFields *v132; // x0
  int32_t v133; // w2
  const MethodInfo *v134; // x3
  WarBoardAI_o *v135; // x0
  const MethodInfo *v136; // x2
  __int64 v137; // x2
  __int64 v138; // x3
  __int64 v139; // x4
  __int64 v140; // x0
  CGThumbnailListItem_o *v141; // x26
  int32_t v142; // w2
  const MethodInfo *v143; // x3
  int v144; // w8
  System_Collections_Generic_HashSet_T__o *v145; // x21
  int32_t v146; // w2
  const MethodInfo *v147; // x3
  int32_t v148; // w22
  WarBoardAI__Think_d__11_o *v149; // x23
  int32_t v150; // w2
  const MethodInfo *v151; // x3
  __int64 v152; // x2
  __int64 v153; // x3
  __int64 v154; // x4
  __int64 v155; // x0
  CGThumbnailListItem_o *v156; // x26
  int32_t v157; // w2
  const MethodInfo *v158; // x3
  __int64 v159; // x0
  int32_t v160; // w2
  const MethodInfo *v161; // x3
  __int64 v162; // x0
  int32_t v163; // w2
  const MethodInfo *v164; // x3
  __int64 v165; // x0
  int32_t v166; // w2
  const MethodInfo *v167; // x3
  WarBoardAI__Think_d__11_o **v169; // [xsp+10h] [xbp-110h]
  Il2CppObject *object; // [xsp+18h] [xbp-108h]
  System_Collections_Generic_HashSet_T__o **v171; // [xsp+20h] [xbp-100h]
  System_Collections_Generic_List_Decimal__o *v172; // [xsp+20h] [xbp-100h]
  Il2CppObject *v173; // [xsp+28h] [xbp-F8h]
  WarBoardAI__Think_d__11_o *v174; // [xsp+30h] [xbp-F0h]
  System_Collections_Generic_List_Enumerator_object__o v175; // [xsp+38h] [xbp-E8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v176; // [xsp+50h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v177; // [xsp+70h] [xbp-B0h] BYREF

  v4 = this;
  if ( (byte_4C24C6E & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
    sub_1C2D490(&bool_TypeInfo);
    sub_1C2D490(&System_Decimal_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_OrderByDescending_List_WarBoardAIRoute_RouteData___Decimal___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____78041560);
    sub_1C2D490(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Take_List_WarBoardAIRoute_RouteData____);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_List_WarBoardAIRoute_RouteData____);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__get_Current__);
    sub_1C2D490(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    sub_1C2D490(&System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo);
    sub_1C2D490(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    sub_1C2D490(&System_Func_WarBoardAIRoute_RouteData__float__TypeInfo);
    sub_1C2D490(&System_Func_List_WarBoardAIRoute_RouteData___bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__);
    sub_1C2D490(&System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Decimal__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Decimal___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_Decimal__TypeInfo);
    sub_1C2D490(&Method_WarBoardAI___c__Think_b__11_0__);
    sub_1C2D490(&Method_WarBoardAI___c__Think_b__11_1__);
    sub_1C2D490(&Method_WarBoardAI___c__Think_b__11_3__);
    sub_1C2D490(&Method_WarBoardAI___c__Think_b__11_8__);
    sub_1C2D490(&Method_WarBoardAI___c__Think_b__11_9__);
    sub_1C2D490(&Method_WarBoardAI___c__DisplayClass11_0__Think_b__6__);
    sub_1C2D490(&WarBoardAI___c__DisplayClass11_0_TypeInfo);
    sub_1C2D490(&WarBoardAI___c_TypeInfo);
    this = (WarBoardAI__Think_d__11_o *)sub_1C2D490(&Method_WarBoardAI__Think_b__11_2__);
    byte_4C24C6E = 1;
  }
  memset(&v177, 0, sizeof(v177));
  memset(&v176, 0, sizeof(v176));
  _4__this = v4->fields.__4__this;
  v173 = (Il2CppObject *)_4__this;
  v174 = v4;
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
      WarBoardAIRoute__BeforeCreateRouteData((WarBoardAIRoute_o *)this, 0);
      routeClass = v6->fields.routeClass;
      if ( !routeClass )
        goto LABEL_164;
      placePieceData = routeClass->fields.placePieceData;
      v9 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v9,
        (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor__);
      RouteData = WarBoardAIRoute__CreateRouteData(
                    routeClass,
                    placePieceData,
                    0,
                    (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v9,
                    0);
      v4->fields.__2__current = (Il2CppObject *)RouteData;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C2D434(p__2__current, (int32_t)RouteData, v12, v13);
      v14 = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return v14;
    case 1:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_164;
      v17 = _4__this->fields.routeClass;
      if ( !v17 )
        goto LABEL_164;
      allRouteList = v17->fields.allRouteList;
      v4->fields._allRouteList_5__2 = allRouteList;
      sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._allRouteList_5__2, (int32_t)allRouteList, v2, v3);
      allRouteList_5__2 = v4->fields._allRouteList_5__2;
      if ( !allRouteList_5__2 )
        goto LABEL_164;
      if ( !allRouteList_5__2->fields._size )
      {
        v14 = 1;
        LOBYTE(v175.fields._list) = 1;
        v165 = j_il2cpp_value_box_0(bool_TypeInfo, &v175, v19, v20, v21);
        v4->fields.__2__current = (Il2CppObject *)v165;
        v141 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C2D434(v141, v165, v166, v167);
        v144 = 2;
        goto LABEL_169;
      }
LABEL_16:
      v23 = sub_1C2D6DC(WarBoardAI___c__DisplayClass11_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v23, 0);
      if ( !v173 )
        goto LABEL_164;
      klass = v173[1].klass;
      if ( !klass )
        goto LABEL_164;
      v25 = v4->fields._allRouteList_5__2;
      if ( !v25 )
        goto LABEL_164;
      namespaze_high = HIDWORD(klass->_1.namespaze);
      if ( namespaze_high >= v25->fields._size )
        namespaze_high = v25->fields._size;
      if ( !namespaze_high )
        namespaze_high = v25->fields._size;
      v4->fields._pickValue_5__3 = namespaze_high;
      v27 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v27 = BalanceConfig_TypeInfo;
        v25 = v4->fields._allRouteList_5__2;
      }
      v28 = WarBoardAI___c_TypeInfo;
      IsWarBoardAiCalcEvalSum = v27->static_fields->IsWarBoardAiCalcEvalSum;
      if ( !WarBoardAI___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
        v28 = WarBoardAI___c_TypeInfo;
      }
      static_fields = v28->static_fields;
      if ( IsWarBoardAiCalcEvalSum )
      {
        _9__11_0 = (System_Func_T__TResult__o *)static_fields->__9__11_0;
        if ( _9__11_0 )
          goto LABEL_39;
        if ( !v28->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v28);
          v28 = WarBoardAI___c_TypeInfo;
        }
        v32 = (Il2CppObject *)v28->static_fields->__9;
        _9__11_0 = (System_Func_T__TResult__o *)sub_1C2D6DC(System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo);
        System_Func_object__Decimal____ctor(_9__11_0, v32, Method_WarBoardAI___c__Think_b__11_0__, 0);
        v35 = WarBoardAI___c_TypeInfo->static_fields;
        v35->__9__11_0 = (struct System_Func_List_WarBoardAIRoute_RouteData___Decimal__o *)_9__11_0;
        p__9__11_0 = (CGThumbnailListItem_o *)&v35->__9__11_0;
      }
      else
      {
        _9__11_0 = (System_Func_T__TResult__o *)static_fields->__9__11_1;
        if ( _9__11_0 )
          goto LABEL_39;
        if ( !v28->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v28);
          v28 = WarBoardAI___c_TypeInfo;
        }
        v37 = (Il2CppObject *)v28->static_fields->__9;
        _9__11_0 = (System_Func_T__TResult__o *)sub_1C2D6DC(System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo);
        System_Func_object__Decimal____ctor(_9__11_0, v37, Method_WarBoardAI___c__Think_b__11_1__, 0);
        v38 = WarBoardAI___c_TypeInfo->static_fields;
        v38->__9__11_1 = (struct System_Func_List_WarBoardAIRoute_RouteData___Decimal__o *)_9__11_0;
        p__9__11_0 = (CGThumbnailListItem_o *)&v38->__9__11_1;
      }
      sub_1C2D434(p__9__11_0, (int32_t)_9__11_0, v33, v34);
LABEL_39:
      v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__Decimal_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v25,
                                                                   (System_Func_TSource__TKey__o *)_9__11_0,
                                                                   (const MethodInfo_30FE5B8 *)Method_System_Linq_Enumerable_OrderByDescending_List_WarBoardAIRoute_RouteData___Decimal___);
      v40 = System_Linq_Enumerable__ToArray_object_(
              v39,
              (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____);
      v41 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v41,
        (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
      v4->fields._availableRouteList_5__4 = (struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *)v41;
      p_availableRouteList_5__4 = (WarBoardAI__Think_d__11_o **)&v4->fields._availableRouteList_5__4;
      sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._availableRouteList_5__4, (int32_t)v41, v43, v44);
      v45 = (System_Collections_Generic_HashSet_T__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo);
      System_Collections_Generic_HashSet_object____ctor(
        v45,
        (const MethodInfo_3640D88 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__);
      if ( !v23 )
        goto LABEL_164;
      object = (Il2CppObject *)v23;
      *(_QWORD *)(v23 + 16) = v45;
      v171 = (System_Collections_Generic_HashSet_T__o **)(v23 + 16);
      sub_1C2D434((CGThumbnailListItem_o *)(v23 + 16), (int32_t)v45, v46, v47);
      if ( !v40 )
        goto LABEL_164;
      max_length = v40->max_length;
      if ( (int)max_length >= 1 )
      {
        v52 = 0;
        pickValue_5__3 = v4->fields._pickValue_5__3;
        v54 = (CGThumbnailListItem_o *)(v23 + 24);
        v169 = (WarBoardAI__Think_d__11_o **)&v4->fields._availableRouteList_5__4;
        do
        {
          if ( v52 >= (unsigned int)max_length )
            goto LABEL_171;
          v55 = (System_Collections_ICollection_o *)v40->m_Items[v52];
          this = (WarBoardAI__Think_d__11_o *)BasicHelper__IsNullOrEmpty(v55, 0);
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
              if ( !v55 )
                goto LABEL_164;
              this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)v55,
                                                    0,
                                                    (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
              if ( !this )
                goto LABEL_164;
              if ( WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)this, 0) )
              {
                v56 = *v171;
                this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_List_object___get_Item(
                                                      (System_Collections_Generic_List_object__o *)v55,
                                                      0,
                                                      (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
                if ( !this || !v56 )
                  goto LABEL_164;
                this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_HashSet_object___Add(
                                                      v56,
                                                      *(Il2CppObject **)&this->fields._pickValue_5__3,
                                                      (const MethodInfo_3641F6C *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__);
                goto LABEL_69;
              }
              v57 = (System_Func_object__bool__o *)v54->klass;
              if ( !v54->klass )
              {
                v57 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
                System_Func_object__bool____ctor(v57, object, Method_WarBoardAI___c__DisplayClass11_0__Think_b__6__, 0);
                object[1].monitor = v57;
                p_availableRouteList_5__4 = v169;
                sub_1C2D434(v54, (int32_t)v57, v58, v59);
              }
              this = (WarBoardAI__Think_d__11_o *)BasicHelper__Any_object_(
                                                    (System_Collections_Generic_List_T__o *)v55,
                                                    (System_Func_T__bool__o *)v57,
                                                    (const MethodInfo_30B7CF0 *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
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
                                                        (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v55,
                                                        v48),
                  ((unsigned __int8)this & 1) == 0) )
            {
              this = *p_availableRouteList_5__4;
              if ( !*p_availableRouteList_5__4 )
                goto LABEL_164;
              v60 = *(_QWORD *)&this->fields.__1__state;
              v61 = Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__;
              ++HIDWORD(this->fields.__2__current);
              if ( !v60 )
                goto LABEL_164;
              _2__current_low = SLODWORD(this->fields.__2__current);
              if ( (unsigned int)_2__current_low >= *(_DWORD *)(v60 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)v55,
                  *(const MethodInfo_3789B84 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
              }
              else
              {
                v63 = v60 + 8 * _2__current_low;
                LODWORD(this->fields.__2__current) = _2__current_low + 1;
                *(_QWORD *)(v63 + 32) = v55;
                sub_1C2D434((CGThumbnailListItem_o *)(v63 + 32), (int32_t)v55, (int32_t)v48, v49);
              }
              availableRouteList_5__4 = *p_availableRouteList_5__4;
              if ( !*p_availableRouteList_5__4 )
                goto LABEL_164;
              if ( pickValue_5__3 <= SLODWORD(availableRouteList_5__4->fields.__2__current) )
                goto LABEL_71;
            }
          }
LABEL_69:
          LODWORD(max_length) = v40->max_length;
        }
        while ( (__int64)++v52 < (int)max_length );
      }
      availableRouteList_5__4 = *p_availableRouteList_5__4;
      if ( !*p_availableRouteList_5__4 )
        goto LABEL_164;
LABEL_71:
      v15 = v174;
      if ( SLODWORD(availableRouteList_5__4->fields.__2__current) <= 0 )
      {
        v14 = 1;
        LOBYTE(v175.fields._list) = 1;
        v162 = j_il2cpp_value_box_0(bool_TypeInfo, &v175, v48, v49, v50);
        v174->fields.__2__current = (Il2CppObject *)v162;
        sub_1C2D434((CGThumbnailListItem_o *)&v174->fields.__2__current, v162, v163, v164);
        v174->fields.__1__state = 3;
      }
      else
      {
LABEL_72:
        v64 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_List_WarBoardAIRoute_RouteData___bool__TypeInfo);
        System_Func_object__bool____ctor(v64, v173, Method_WarBoardAI__Think_b__11_2__, 0);
        v65 = System_Linq_Enumerable__Where_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)availableRouteList_5__4,
                (System_Func_TSource__bool__o *)v64,
                (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_List_WarBoardAIRoute_RouteData____);
        v66 = System_Linq_Enumerable__Take_object_(
                v65,
                v15->fields._pickValue_5__3,
                (const MethodInfo_310C8D8 *)Method_System_Linq_Enumerable_Take_List_WarBoardAIRoute_RouteData____);
        v67 = System_Linq_Enumerable__ToArray_object_(
                v66,
                (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____);
        v15->fields._evalValueSortList_5__5 = (struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *)v67;
        sub_1C2D434((CGThumbnailListItem_o *)&v15->fields._evalValueSortList_5__5, (int32_t)v67, v68, v69);
        evalValueSortList_5__5 = v15->fields._evalValueSortList_5__5;
        if ( !evalValueSortList_5__5 )
          goto LABEL_164;
        v4 = v15;
        if ( !evalValueSortList_5__5->max_length )
        {
          v14 = 1;
          LOBYTE(v175.fields._list) = 1;
          v159 = j_il2cpp_value_box_0(bool_TypeInfo, &v175, v70, v71, v72);
          v15->fields.__2__current = (Il2CppObject *)v159;
          v141 = (CGThumbnailListItem_o *)&v15->fields.__2__current;
          sub_1C2D434((CGThumbnailListItem_o *)&v15->fields.__2__current, v159, v160, v161);
          v144 = 4;
          goto LABEL_169;
        }
LABEL_74:
        v74 = (System_Collections_Generic_List_Decimal__o *)sub_1C2D6DC(System_Collections_Generic_List_Decimal__TypeInfo);
        System_Collections_Generic_List_Decimal____ctor(
          v74,
          (const MethodInfo_375CAD0 *)Method_System_Collections_Generic_List_Decimal___ctor__);
        v75 = v4->fields._evalValueSortList_5__5;
        if ( !v75 )
          goto LABEL_164;
        v76 = 0;
        v172 = v74;
        while ( 1 )
        {
          v77 = v75->max_length;
          if ( v76 >= v77 )
            break;
          if ( v76 >= (unsigned int)v77 )
            goto LABEL_171;
          this = (WarBoardAI__Think_d__11_o *)v75->m_Items[v76];
          if ( !this )
            goto LABEL_164;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v175,
            (System_Collections_Generic_List_object__o *)this,
            (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
          v78 = 0;
          v79 = 0;
          v80 = 0;
          v177 = v175;
          while ( 1 )
          {
            v81 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v177,
                    (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
            if ( !v81 )
              break;
            current = (WarBoardAIRoute_RouteData_o *)v177.fields._current;
            if ( !v177.fields._current )
              sub_1C2D6EC(v81, v82);
            if ( WarBoardAIRoute_RouteData__HasFlag((WarBoardAIRoute_RouteData_o *)v177.fields._current, 4, 0) )
            {
              actionPiece = current->fields.actionPiece;
              if ( actionPiece )
                v79 |= WarBoardPieceData__get_isMaster(actionPiece, 0);
              v80 = 1;
            }
            v78 |= WarBoardAIRoute_RouteData__HasFlag(current, 8, 0);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v177,
            (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
          if ( !v173 )
            goto LABEL_164;
          v85 = v173[1].klass;
          if ( !v85 )
            goto LABEL_164;
          this = (WarBoardAI__Think_d__11_o *)v85->_1.klass;
          if ( !this )
            goto LABEL_164;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v175,
            (System_Collections_Generic_List_object__o *)this,
            (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__GetEnumerator__);
          v86 = 0.0;
          v176 = v175;
          while ( 1 )
          {
            v87 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v176,
                    (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__MoveNext__);
            if ( !v87 )
              break;
            v89 = (WarBoardTacticalTrendEntity_o *)v176.fields._current;
            if ( !v176.fields._current )
              sub_1C2D6EC(v87, v88);
            switch ( HIDWORD(v176.fields._current[1].klass) )
            {
              case 0:
                if ( v76 < SLODWORD(v176.fields._current[1].monitor) )
                {
                  BestMagnification = WarBoardTacticalTrendEntity__GetBestMagnification(
                                        (WarBoardTacticalTrendEntity_o *)v176.fields._current,
                                        0);
                  LowestMagnification = WarBoardTacticalTrendEntity__GetLowestMagnification(v89, 0);
                  value = v89->fields.value;
                  ImmobilityMagnification = WarBoardTacticalTrendEntity__GetBestMagnification(v89, 0)
                                          - (float)((float)((float)(BestMagnification - LowestMagnification)
                                                          / (float)((float)value + -1.0))
                                                  * (float)v76);
                  goto LABEL_102;
                }
                break;
              case 1:
                if ( (v80 & 1) != 0 )
                  goto LABEL_101;
                break;
              case 4:
                if ( (v79 & 1) != 0 )
                  goto LABEL_101;
                break;
              case 5:
                if ( (v78 & 1) != 0 )
                {
LABEL_101:
                  ImmobilityMagnification = WarBoardTacticalTrendEntity__GetImmobilityMagnification(
                                              (WarBoardTacticalTrendEntity_o *)v176.fields._current,
                                              0);
LABEL_102:
                  v86 = v86 + ImmobilityMagnification;
                }
                break;
              default:
                continue;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v176,
            (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__Dispose__);
          v4 = v174;
          v94 = BalanceConfig_TypeInfo;
          if ( v86 == 0.0 )
            v95 = 1.0;
          else
            v95 = v86;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v94 = BalanceConfig_TypeInfo;
          }
          v96 = System_Decimal_TypeInfo;
          v97 = v94->static_fields->IsWarBoardAiCalcEvalSum;
          if ( !System_Decimal_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
          this = (WarBoardAI__Think_d__11_o *)System_Decimal__op_Explicit((System_Decimal_o *)v96, v95, 0);
          v98 = v174->fields._evalValueSortList_5__5;
          if ( !v98 )
            goto LABEL_164;
          if ( (unsigned int)v76 >= LODWORD(v98->max_length) )
            goto LABEL_171;
          v99 = this;
          v100 = (System_Collections_Generic_IEnumerable_TSource__o *)v98->m_Items[v76];
          v101 = WarBoardAI___c_TypeInfo;
          v102 = (System_Decimal_o *)method;
          if ( !WarBoardAI___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
            v101 = WarBoardAI___c_TypeInfo;
          }
          v103 = v101->static_fields;
          if ( v97 )
          {
            _9__11_8 = (System_Func_T__TResult__o *)v103->__9__11_8;
            if ( !_9__11_8 )
            {
              if ( !v101->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v101);
                v101 = WarBoardAI___c_TypeInfo;
              }
              v106 = (Il2CppObject *)v101->static_fields->__9;
              _9__11_8 = (System_Func_T__TResult__o *)sub_1C2D6DC(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
              System_Func_object__Decimal____ctor(_9__11_8, v106, Method_WarBoardAI___c__Think_b__11_8__, 0);
              v107 = WarBoardAI___c_TypeInfo->static_fields;
              v107->__9__11_8 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_8;
              sub_1C2D434((CGThumbnailListItem_o *)&v107->__9__11_8, (int32_t)_9__11_8, v108, v109);
              v4 = v174;
            }
            v110 = System_Linq_Enumerable__Sum_object__51431004(
                     (System_Decimal_o *)&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___,
                     v100,
                     (System_Func_TSource__Decimal__o *)_9__11_8,
                     (const MethodInfo_310C65C *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
            cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
            if ( !(_DWORD)cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
          }
          else
          {
            _9__11_9 = (System_Func_T__TResult__o *)v103->__9__11_9;
            if ( !_9__11_9 )
            {
              if ( !v101->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v101);
                v101 = WarBoardAI___c_TypeInfo;
              }
              v112 = (Il2CppObject *)v101->static_fields->__9;
              _9__11_9 = (System_Func_T__TResult__o *)sub_1C2D6DC(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
              System_Func_object__Decimal____ctor(_9__11_9, v112, Method_WarBoardAI___c__Think_b__11_9__, 0);
              v113 = WarBoardAI___c_TypeInfo->static_fields;
              v113->__9__11_9 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_9;
              sub_1C2D434((CGThumbnailListItem_o *)&v113->__9__11_9, (int32_t)_9__11_9, v114, v115);
              v4 = v174;
            }
            this = (WarBoardAI__Think_d__11_o *)System_Linq_Enumerable__Sum_object__51431004(
                                                  (System_Decimal_o *)&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___,
                                                  v100,
                                                  (System_Func_TSource__Decimal__o *)_9__11_9,
                                                  (const MethodInfo_310C65C *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
            v116 = v4->fields._evalValueSortList_5__5;
            if ( !v116 )
              goto LABEL_164;
            if ( (unsigned int)v76 >= LODWORD(v116->max_length) )
              goto LABEL_171;
            v117 = (System_Decimal_o *)v116->m_Items[v76];
            if ( !v117 )
              goto LABEL_164;
            v118 = this;
            flags = v117[1].fields.flags;
            v120 = (System_Decimal_o *)method;
            if ( !System_Decimal_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
            v121 = System_Decimal__op_Implicit_65369660(v117, flags, 0);
            v4 = v174;
            v110 = System_Decimal__op_Division(v122, (System_Decimal_o *)v118, v120, (const MethodInfo *)v121);
          }
          this = (WarBoardAI__Think_d__11_o *)System_Decimal__op_Multiply(
                                                cctor_finished,
                                                (System_Decimal_o *)v99,
                                                v102,
                                                (const MethodInfo *)v110);
          v74 = v172;
          if ( v172 )
          {
            items = v172->fields._items;
            ++v172->fields._version;
            if ( items )
            {
              size = v172->fields._size;
              v48 = method;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_Decimal___AddWithResize(
                  v172,
                  (System_Decimal_o *)this,
                  (const MethodInfo_375D360 *)method);
              }
              else
              {
                v125 = &items->obj + size;
                v172->fields._size = size + 1;
                v125[2].klass = (Il2CppClass *)this;
                v125[2].monitor = (void *)method;
              }
              v75 = v4->fields._evalValueSortList_5__5;
              ++v76;
              if ( v75 )
                continue;
            }
          }
          goto LABEL_164;
        }
        if ( !v173 )
          goto LABEL_164;
        this = (WarBoardAI__Think_d__11_o *)WarBoardAI__GetRandomIndex((WarBoardAI_o *)this, v74, v48);
        if ( (unsigned int)this >= LODWORD(v75->max_length) )
LABEL_171:
          sub_1C2D6F4(this, method, v48);
        v127 = v75->m_Items[(int)this];
        v173[1].monitor = v127;
        sub_1C2D434((CGThumbnailListItem_o *)&v173[1].monitor, (int32_t)v127, (int32_t)v48, v126);
        v128 = WarBoardAI___c_TypeInfo;
        monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v173[1].monitor;
        if ( !WarBoardAI___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
          v128 = WarBoardAI___c_TypeInfo;
        }
        _9__11_3 = (System_Func_T__TResult__o *)v128->static_fields->__9__11_3;
        if ( !_9__11_3 )
        {
          if ( !v128->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v128);
            v128 = WarBoardAI___c_TypeInfo;
          }
          v131 = (Il2CppObject *)v128->static_fields->__9;
          _9__11_3 = (System_Func_T__TResult__o *)sub_1C2D6DC(System_Func_WarBoardAIRoute_RouteData__float__TypeInfo);
          System_Func_object__float____ctor(_9__11_3, v131, Method_WarBoardAI___c__Think_b__11_3__, 0);
          v132 = WarBoardAI___c_TypeInfo->static_fields;
          v132->__9__11_3 = (struct System_Func_WarBoardAIRoute_RouteData__float__o *)_9__11_3;
          sub_1C2D434((CGThumbnailListItem_o *)&v132->__9__11_3, (int32_t)_9__11_3, v133, v134);
        }
        System_Linq_Enumerable__Sum_object__51431148(
          monitor,
          (System_Func_TSource__float__o *)_9__11_3,
          (const MethodInfo_310C6EC *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____78041560);
        if ( WarBoardAI__CheckWasteRoute(
               v135,
               (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v173[1].monitor,
               v136) )
        {
          v14 = 1;
          LOBYTE(v175.fields._list) = 1;
          v140 = j_il2cpp_value_box_0(bool_TypeInfo, &v175, v137, v138, v139);
          v4->fields.__2__current = (Il2CppObject *)v140;
          v141 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1C2D434(v141, v140, v142, v143);
          v144 = 5;
LABEL_169:
          LODWORD(v141[-1].fields._ThumbnailSpritePath_k__BackingField) = v144;
          return v14;
        }
LABEL_152:
        v145 = (System_Collections_Generic_HashSet_T__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo);
        System_Collections_Generic_HashSet_object____ctor(
          v145,
          (const MethodInfo_3640D88 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__);
        if ( !v173 || (this = (WarBoardAI__Think_d__11_o *)v173[1].monitor) == 0 )
LABEL_164:
          sub_1C2D6EC(this, method);
        v148 = LODWORD(this->fields.__2__current) - 1;
        if ( v148 >= 0 )
        {
          while ( 1 )
          {
            this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)this,
                                                  v148,
                                                  (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
            if ( !this )
              goto LABEL_164;
            method = *(const MethodInfo **)&this->fields._pickValue_5__3;
            v149 = this;
            if ( method )
            {
              if ( !v145 )
                goto LABEL_164;
              if ( !System_Collections_Generic_HashSet_object___Contains(
                      v145,
                      (Il2CppObject *)method,
                      (const MethodInfo_364147C *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__)
                && !WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)v149, 0) )
              {
                System_Collections_Generic_HashSet_object___Add(
                  v145,
                  *(Il2CppObject **)&v149->fields._pickValue_5__3,
                  (const MethodInfo_3641F6C *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__);
                this = *(WarBoardAI__Think_d__11_o **)&v149->fields._pickValue_5__3;
                if ( !this )
                  goto LABEL_164;
                WarBoardPieceData__SetPrevAiRoute((WarBoardPieceData_o *)this, (WarBoardAIRoute_RouteData_o *)v149, 0);
              }
            }
            if ( --v148 < 0 )
              break;
            this = (WarBoardAI__Think_d__11_o *)v173[1].monitor;
            if ( !this )
              goto LABEL_164;
          }
        }
        v4->fields._availableRouteList_5__4 = 0;
        sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._availableRouteList_5__4, 0, v146, v147);
        v4->fields._evalValueSortList_5__5 = 0;
        sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._evalValueSortList_5__5, 0, v150, v151);
        LOBYTE(v175.fields._list) = 0;
        v155 = j_il2cpp_value_box_0(bool_TypeInfo, &v175, v152, v153, v154);
        v4->fields.__2__current = (Il2CppObject *)v155;
        v156 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C2D434(v156, v155, v157, v158);
        LODWORD(v156[-1].fields._ThumbnailSpritePath_k__BackingField) = 6;
        return 1;
      }
      return v14;
    case 2:
      v4->fields.__1__state = -1;
      goto LABEL_16;
    case 3:
      v15 = v4;
      availableRouteList_5__4 = (WarBoardAI__Think_d__11_o *)v4->fields._availableRouteList_5__4;
      v15->fields.__1__state = -1;
      goto LABEL_72;
    case 4:
      v4->fields.__1__state = -1;
      goto LABEL_74;
    case 5:
      v4->fields.__1__state = -1;
      goto LABEL_152;
    case 6:
      v14 = 0;
      v4->fields.__1__state = -1;
      return v14;
    default:
      return 0;
  }
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_WarBoardAI__Think_d__11_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C24C66 & 1) == 0 )
  {
    sub_1C2D490(&WarBoardAI___c_TypeInfo);
    byte_4C24C66 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(WarBoardAI___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardAI___c_TypeInfo->static_fields->__9 = (struct WarBoardAI___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)WarBoardAI___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C24C67 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
    sub_1C2D490(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    sub_1C2D490(&Method_WarBoardAI___c__Think_b__11_4__);
    sub_1C2D490(&WarBoardAI___c_TypeInfo);
    byte_4C24C67 = 1;
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
    _9__11_4 = (System_Func_T__TResult__o *)sub_1C2D6DC(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    System_Func_object__Decimal____ctor(_9__11_4, v8, Method_WarBoardAI___c__Think_b__11_4__, 0);
    v9 = WarBoardAI___c_TypeInfo->static_fields;
    v9->__9__11_4 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_4;
    sub_1C2D434((CGThumbnailListItem_o *)&v9->__9__11_4, (int32_t)_9__11_4, v10, v11);
  }
  return System_Linq_Enumerable__Sum_object__51431004(
           (System_Decimal_o *)static_fields,
           (System_Collections_Generic_IEnumerable_TSource__o *)x,
           (System_Func_TSource__Decimal__o *)_9__11_4,
           (const MethodInfo_310C65C *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Decimal_o *v12; // x0
  System_Decimal_o *v13; // x1
  System_Decimal_o *v14; // x20
  int32_t size; // w19
  System_Decimal_o *v16; // x21
  System_Decimal_o *cctor_finished; // x8
  System_Decimal_o *v18; // x2
  System_Decimal_o *v19; // x8

  if ( (byte_4C24C69 & 1) == 0 )
  {
    sub_1C2D490(&System_Decimal_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
    sub_1C2D490(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__);
    sub_1C2D490(&Method_WarBoardAI___c__Think_b__11_5__);
    sub_1C2D490(&WarBoardAI___c_TypeInfo);
    byte_4C24C69 = 1;
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
    _9__11_5 = (System_Func_T__TResult__o *)sub_1C2D6DC(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    System_Func_object__Decimal____ctor(_9__11_5, v8, Method_WarBoardAI___c__Think_b__11_5__, 0);
    v9 = WarBoardAI___c_TypeInfo->static_fields;
    v9->__9__11_5 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_5;
    sub_1C2D434((CGThumbnailListItem_o *)&v9->__9__11_5, (int32_t)_9__11_5, v10, v11);
  }
  v12 = System_Linq_Enumerable__Sum_object__51431004(
          (System_Decimal_o *)static_fields,
          (System_Collections_Generic_IEnumerable_TSource__o *)x,
          (System_Func_TSource__Decimal__o *)_9__11_5,
          (const MethodInfo_310C65C *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
  if ( !x )
    sub_1C2D6EC(v12, v13);
  v14 = v12;
  size = x->fields._size;
  v16 = v13;
  cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
  if ( !(_DWORD)cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  v18 = System_Decimal__op_Implicit_65369660(cctor_finished, size, 0);
  return System_Decimal__op_Division(v19, v14, v16, (const MethodInfo *)v18);
}


float WarBoardAI___c___Think_b__11_3(WarBoardAI___c_o *this, WarBoardAIRoute_RouteData_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.evalValue;
}


System_Decimal_o *WarBoardAI___c___Think_b__11_4(
        System_Decimal_o *__return_ptr retstr,
        WarBoardAI___c_o *this,
        WarBoardAIRoute_RouteData_o *y,
        const MethodInfo *method)
{
  float evalValue; // s8
  System_Decimal_o *cctor_finished; // x8

  if ( (byte_4C24C68 & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_1C2D490(&System_Decimal_TypeInfo);
    byte_4C24C68 = 1;
  }
  if ( !y )
    sub_1C2D6EC(this, y);
  evalValue = y->fields.evalValue;
  cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
  if ( !(_DWORD)cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  return System_Decimal__op_Explicit(cctor_finished, evalValue, 0);
}


System_Decimal_o *WarBoardAI___c___Think_b__11_5(
        System_Decimal_o *__return_ptr retstr,
        WarBoardAI___c_o *this,
        WarBoardAIRoute_RouteData_o *y,
        const MethodInfo *method)
{
  float evalValue; // s8
  System_Decimal_o *cctor_finished; // x8

  if ( (byte_4C24C6A & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_1C2D490(&System_Decimal_TypeInfo);
    byte_4C24C6A = 1;
  }
  if ( !y )
    sub_1C2D6EC(this, y);
  evalValue = y->fields.evalValue;
  cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
  if ( !(_DWORD)cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  return System_Decimal__op_Explicit(cctor_finished, evalValue, 0);
}


float WarBoardAI___c___Think_b__11_7(WarBoardAI___c_o *this, WarBoardAIRoute_RouteData_o *y, const MethodInfo *method)
{
  if ( !y )
    sub_1C2D6EC(this, 0);
  return y->fields.evalValue;
}


System_Decimal_o *WarBoardAI___c___Think_b__11_8(
        System_Decimal_o *__return_ptr retstr,
        WarBoardAI___c_o *this,
        WarBoardAIRoute_RouteData_o *y,
        const MethodInfo *method)
{
  float evalValue; // s8
  System_Decimal_o *cctor_finished; // x8

  if ( (byte_4C24C6B & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_1C2D490(&System_Decimal_TypeInfo);
    byte_4C24C6B = 1;
  }
  if ( !y )
    sub_1C2D6EC(this, y);
  evalValue = y->fields.evalValue;
  cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
  if ( !(_DWORD)cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  return System_Decimal__op_Explicit(cctor_finished, evalValue, 0);
}


System_Decimal_o *WarBoardAI___c___Think_b__11_9(
        System_Decimal_o *__return_ptr retstr,
        WarBoardAI___c_o *this,
        WarBoardAIRoute_RouteData_o *y,
        const MethodInfo *method)
{
  float evalValue; // s8
  System_Decimal_o *cctor_finished; // x8

  if ( (byte_4C24C6C & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_1C2D490(&System_Decimal_TypeInfo);
    byte_4C24C6C = 1;
  }
  if ( !y )
    sub_1C2D6EC(this, y);
  evalValue = y->fields.evalValue;
  cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
  if ( !(_DWORD)cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  return System_Decimal__op_Explicit(cctor_finished, evalValue, 0);
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
  if ( (byte_4C24C6D & 1) == 0 )
  {
    this = (WarBoardAI___c__DisplayClass11_0_o *)sub_1C2D490(&Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__);
    byte_4C24C6D = 1;
  }
  if ( !x || (this = (WarBoardAI___c__DisplayClass11_0_o *)v4->fields.notActionPieceHash) == 0 )
    sub_1C2D6EC(this, x);
  return System_Collections_Generic_HashSet_object___Contains(
           (System_Collections_Generic_HashSet_T__o *)this,
           (Il2CppObject *)x->fields.basePiece,
           (const MethodInfo_364147C *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__);
}