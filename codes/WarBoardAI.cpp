void WarBoardAI___ctor(WarBoardAI_o *this, WarBoardStageNpcEntity_o *npc, const MethodInfo *method)
{
  WarBoardAIRoute_o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CC4D25 & 1) == 0 )
  {
    sub_1C713B0(&WarBoardAIRoute_TypeInfo);
    byte_4CC4D25 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v5 = (WarBoardAIRoute_o *)sub_1C715FC(WarBoardAIRoute_TypeInfo);
  WarBoardAIRoute___ctor(v5, npc, 0);
  this->fields.routeClass = v5;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v5, v6, v7, v8, v9, v10, v11);
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
    sub_1C71608(0, aiId);
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

  if ( (byte_4CC4D27 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__ContainsKey__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__set_Item__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__TypeInfo);
    sub_1C713B0(&IWarBoardAIRouteWaste_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
    byte_4CC4D27 = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C715FC(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_34618C0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ctor__);
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
               (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
                   (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
                                     (const MethodInfo_3462488 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__ContainsKey__);
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
            (const MethodInfo_3462280 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__set_Item__);
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
              v22 = sub_1C47738(methods, v19, 2);
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
                v27 = sub_1C47738(methods, v24, 2);
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
                  v35 = sub_1C47738(methods, v31, 0);
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
                    v42 = sub_1C47738(methods, v39, 1);
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
                      v47 = sub_1C47738(methods, v44, 3);
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
    sub_1C71608(Item, v6);
  }
  return v8;
}


void WarBoardAI__Clear(WarBoardAI_o *this, const MethodInfo *method)
{
  WarBoardAIRoute_o *routeClass; // x0

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_1C71608(0, method);
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
  int32_t v12; // [xsp+Ch] [xbp-44h] BYREF
  int32_t v13; // [xsp+18h] [xbp-38h] BYREF
  int32_t v14; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4CC4D2A & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&StringLiteral_25277/*"{0},{1},{2}"*/);
    byte_4CC4D2A = 1;
  }
  v14 = forceId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v13 = groupId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
  v12 = index;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return System_String__Format_64073100((System_String_o *)StringLiteral_25277/*"{0},{1},{2}"*/, v8, v9, v10, 0);
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
  WarBoardPieceData_o *Piece_38148676; // x0
  System_Int32_array *v17; // x21
  WarBoardManager_o *v18; // x21
  int32_t v19; // w8
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v20; // x9

  if ( (byte_4CC4D28 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C713B0(&WarBoardAIManager_TypeInfo);
    byte_4CC4D28 = 1;
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
                                                        (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
                                                        (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
  Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this->fields.executeRoute )
    goto LABEL_40;
  v13 = (WarBoardManager_o *)Item;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)this->fields.executeRoute,
                                                        this->fields.routeIndex,
                                                        (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
                                                        (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
                                                        (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
                                                          (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
    if ( !Item )
      goto LABEL_40;
    v15 = Item->fields._version;
    Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Item )
      goto LABEL_40;
    Item = (System_Collections_Generic_List_object__o *)Item[11].klass;
    if ( !Item )
      goto LABEL_40;
    Piece_38148676 = WarBoardData__GetPiece_38148676((WarBoardData_o *)Item, v15, 0);
    if ( Piece_38148676 )
    {
      if ( WarBoardPieceData__get_isServant(Piece_38148676, 0) )
      {
        Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( Item )
        {
          Item = (System_Collections_Generic_List_object__o *)Item[11].klass;
          if ( Item )
          {
            v17 = WarBoardData__GetInRangeSquareIndecies((WarBoardData_o *)Item, v15, 1, 0, 0);
            Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
            if ( Item )
            {
              WarBoardManager__DispPartyBuff((WarBoardManager_o *)Item, v17, 0);
              goto LABEL_33;
            }
          }
        }
LABEL_40:
        sub_1C71608(Item, v6);
      }
    }
  }
LABEL_33:
  Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this->fields.executeRoute )
    goto LABEL_40;
  v18 = (WarBoardManager_o *)Item;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)this->fields.executeRoute,
                                                        this->fields.routeIndex,
                                                        (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
  if ( !Item || !v18 )
    goto LABEL_40;
  v11 = 1;
  Item = (System_Collections_Generic_List_object__o *)WarBoardManager__PieceAction_38348404(
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
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

  if ( (byte_4CC4D29 & 1) == 0 )
  {
    sub_1C713B0(&System_Decimal_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_Sum_Decimal___);
    sub_1C713B0(&System_Func_Decimal__Decimal__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Decimal__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Decimal__get_Item__);
    sub_1C713B0(&System_Math_TypeInfo);
    sub_1C713B0(&Method_WarBoardAI___c__GetRandomIndex_b__14_0__);
    sub_1C713B0(&WarBoardAI___c_TypeInfo);
    byte_4CC4D29 = 1;
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
    _9__14_0 = (System_Func_Decimal__Decimal__o *)sub_1C715FC(System_Func_Decimal__Decimal__TypeInfo);
    System_Func_Decimal__Decimal____ctor(_9__14_0, v7, Method_WarBoardAI___c__GetRandomIndex_b__14_0__, 0);
    v8 = WarBoardAI___c_TypeInfo->static_fields;
    v8->__9__14_0 = _9__14_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v8->__9__14_0, (int32_t)_9__14_0, v9, v10, v11, v12, v13, v14);
  }
  v15 = System_Linq_Enumerable__Sum_Decimal_(
          (System_Decimal_o *)static_fields,
          (System_Collections_Generic_IEnumerable_TSource__o *)weightTable,
          (System_Func_TSource__Decimal__o *)_9__14_0,
          (const MethodInfo_31895CC *)Method_System_Linq_Enumerable_Sum_Decimal___);
  v17 = v16;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !byte_4CC4D39 )
  {
    sub_1C713B0(&System_Decimal_TypeInfo);
    byte_4CC4D39 = 1;
  }
  cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
  if ( !(_DWORD)cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  v19 = System_Decimal__Floor(cctor_finished, v15, v17);
  v21 = v20;
  if ( !System_Decimal_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  v22 = System_Decimal__op_Explicit_65941516(v19, v21);
  v23 = UnityEngine_Random__Range(0.0, v22, 0);
  v25 = System_Decimal__op_Explicit(v24, v23, 0);
  if ( !weightTable )
    sub_1C71608(v25, v26);
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
             (const MethodInfo_37E3BC8 *)Method_System_Collections_Generic_List_Decimal__get_Item__);
    v33 = v32;
    if ( !System_Decimal_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
    if ( System_Decimal__op_GreaterThanOrEqual(Item, v33, v28) )
      break;
    v35 = System_Collections_Generic_List_Decimal___get_Item(
            v34,
            weightTable,
            v30,
            (const MethodInfo_37E3BC8 *)Method_System_Collections_Generic_List_Decimal__get_Item__);
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


System_Collections_IEnumerator_o *WarBoardAI__Think(WarBoardAI_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CC4D26 & 1) == 0 )
  {
    sub_1C713B0(&WarBoardAI__Think_d__11_TypeInfo);
    byte_4CC4D26 = 1;
  }
  v3 = sub_1C715FC(WarBoardAI__Think_d__11_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
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
    sub_1C71608(0, aiId);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  __int64 v16; // x0
  __int64 v17; // x1
  float v18; // s0

  if ( (byte_4CC4D2B & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____78684872);
    sub_1C713B0(&System_Func_WarBoardAIRoute_RouteData__float__TypeInfo);
    sub_1C713B0(&Method_WarBoardAI___c__Think_b__11_7__);
    sub_1C713B0(&WarBoardAI___c_TypeInfo);
    byte_4CC4D2B = 1;
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
    _9__11_7 = (System_Func_T__TResult__o *)sub_1C715FC(System_Func_WarBoardAIRoute_RouteData__float__TypeInfo);
    System_Func_object__float____ctor(_9__11_7, v8, Method_WarBoardAI___c__Think_b__11_7__, 0);
    static_fields = WarBoardAI___c_TypeInfo->static_fields;
    static_fields->__9__11_7 = (struct System_Func_WarBoardAIRoute_RouteData__float__o *)_9__11_7;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__11_7,
      (int32_t)_9__11_7,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  v18 = System_Linq_Enumerable__Sum_object__51943148(
          (System_Collections_Generic_IEnumerable_TSource__o *)x,
          (System_Func_TSource__float__o *)_9__11_7,
          (const MethodInfo_31896EC *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____78684872);
  if ( !routeClass )
    sub_1C71608(v16, v17);
  return !WarBoardAIRoute__IsThinkingThreshold(routeClass, v18, 0);
}


int32_t WarBoardAI__get_ForceId(WarBoardAI_o *this, const MethodInfo *method)
{
  struct WarBoardAIRoute_o *routeClass; // x8

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_1C71608(this, method);
  return routeClass->fields.forceId;
}


int32_t WarBoardAI__get_GroupId(WarBoardAI_o *this, const MethodInfo *method)
{
  struct WarBoardAIRoute_o *routeClass; // x8

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_1C71608(this, method);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  WarBoardAI__Think_d__11_o *v8; // x26
  struct WarBoardAI_o *_4__this; // x12
  struct WarBoardAI_o *v10; // x19
  WarBoardAIRoute_o *routeClass; // x20
  System_Collections_Generic_Dictionary_int__uint__o *placePieceData; // x21
  System_Collections_Generic_List_object__o *v13; // x22
  System_Collections_IEnumerator_o *RouteData; // x0
  GrandQuestFolderBoardItem_o *p__2__current; // x26
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  bool v22; // w20
  WarBoardAI__Think_d__11_o *v23; // x19
  WarBoardAI__Think_d__11_o *availableRouteList_5__4; // x26
  struct WarBoardAIRoute_o *v25; // x8
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *allRouteList; // x1
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *allRouteList_5__2; // x8
  __int64 v28; // x27
  Il2CppClass *klass; // x8
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *v30; // x22
  int32_t namespaze_high; // w8
  BalanceConfig_c *v32; // x8
  WarBoardAI___c_c *v33; // x0
  _BOOL4 IsWarBoardAiCalcEvalSum; // w21
  struct WarBoardAI___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__11_0; // x23
  Il2CppObject *v37; // x24
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  struct WarBoardAI___c_StaticFields *v44; // x0
  GrandQuestFolderBoardItem_o *p__9__11_0; // x0
  Il2CppObject *v46; // x24
  struct WarBoardAI___c_StaticFields *v47; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  System_Object_array *v49; // x22
  System_Collections_Generic_List_object__o *v50; // x24
  WarBoardAI__Think_d__11_o **p_availableRouteList_5__4; // x23
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  System_Collections_Generic_HashSet_T__o *v58; // x25
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v66; // x20
  int32_t pickValue_5__3; // w28
  GrandQuestFolderBoardItem_o *v68; // x25
  System_Collections_ICollection_o *v69; // x26
  const MethodInfo *v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  System_Collections_Generic_HashSet_T__o *v76; // x27
  System_Func_object__bool__o *v77; // x27
  int32_t v78; // w2
  int32_t v79; // w3
  System_String_o *v80; // x4
  int32_t v81; // w5
  int64_t v82; // x6
  System_String_o *v83; // x7
  __int64 v84; // x8
  _QWORD *v85; // x9
  __int64 _2__current_low; // x10
  __int64 v87; // x8
  System_Func_object__bool__o *v88; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v89; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v90; // x0
  System_Object_array *v91; // x0
  int32_t v92; // w2
  int32_t v93; // w3
  System_String_o *v94; // x4
  int32_t v95; // w5
  int64_t v96; // x6
  System_String_o *v97; // x7
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *evalValueSortList_5__5; // x8
  System_Collections_Generic_List_Decimal__o *v99; // x21
  const MethodInfo *v100; // x2
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *v101; // x22
  int v102; // w29
  int v103; // w8
  int v104; // w24
  int v105; // w25
  char v106; // w26
  _BOOL8 v107; // x0
  __int64 v108; // x1
  WarBoardAIRoute_RouteData_o *current; // x22
  WarBoardPieceData_o *actionPiece; // x0
  Il2CppClass *v111; // x8
  float v112; // s12
  _BOOL8 v113; // x0
  __int64 v114; // x1
  WarBoardTacticalTrendEntity_o *v115; // x22
  float BestMagnification; // s8
  float LowestMagnification; // s0
  int value; // w23
  float ImmobilityMagnification; // s0
  BalanceConfig_c *v120; // x0
  float v121; // s8
  System_Decimal_c *v122; // x8
  _BOOL4 v123; // w25
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *v124; // x8
  WarBoardAI__Think_d__11_o *v125; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v126; // x24
  WarBoardAI___c_c *v127; // x0
  System_Decimal_o *v128; // x23
  struct WarBoardAI___c_StaticFields *v129; // x8
  System_Func_T__TResult__o *_9__11_8; // x25
  System_Func_T__TResult__o *_9__11_9; // x25
  Il2CppObject *v132; // x26
  struct WarBoardAI___c_StaticFields *v133; // x0
  int32_t v134; // w2
  int32_t v135; // w3
  System_String_o *v136; // x4
  int32_t v137; // w5
  int64_t v138; // x6
  System_String_o *v139; // x7
  System_Decimal_o *v140; // x24
  System_Decimal_o *cctor_finished; // x8
  Il2CppObject *v142; // x26
  struct WarBoardAI___c_StaticFields *v143; // x0
  int32_t v144; // w2
  int32_t v145; // w3
  System_String_o *v146; // x4
  int32_t v147; // w5
  int64_t v148; // x6
  System_String_o *v149; // x7
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *v150; // x8
  System_Decimal_o *v151; // x8
  WarBoardAI__Think_d__11_o *v152; // x24
  int32_t flags; // w26
  System_Decimal_o *v154; // x25
  System_Decimal_o *v155; // x0
  System_Decimal_o *v156; // x8
  struct System_Decimal_array *items; // x9
  __int64 size; // x11
  Il2CppObject *v159; // x9
  int32_t v160; // w2
  int32_t v161; // w3
  System_String_o *v162; // x4
  int32_t v163; // w5
  int64_t v164; // x6
  System_String_o *v165; // x7
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v166; // x1
  WarBoardAI___c_c *v167; // x0
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x22
  System_Func_T__TResult__o *_9__11_3; // x23
  Il2CppObject *v170; // x24
  struct WarBoardAI___c_StaticFields *v171; // x0
  int32_t v172; // w2
  int32_t v173; // w3
  System_String_o *v174; // x4
  int32_t v175; // w5
  int64_t v176; // x6
  System_String_o *v177; // x7
  WarBoardAI_o *v178; // x0
  const MethodInfo *v179; // x2
  __int64 v180; // x0
  GrandQuestFolderBoardItem_o *v181; // x26
  int32_t v182; // w2
  int32_t v183; // w3
  System_String_o *v184; // x4
  int32_t v185; // w5
  int64_t v186; // x6
  System_String_o *v187; // x7
  int v188; // w8
  System_Collections_Generic_HashSet_T__o *v189; // x21
  int32_t v190; // w2
  int32_t v191; // w3
  System_String_o *v192; // x4
  int32_t v193; // w5
  int64_t v194; // x6
  System_String_o *v195; // x7
  int32_t v196; // w22
  WarBoardAI__Think_d__11_o *v197; // x23
  int32_t v198; // w2
  int32_t v199; // w3
  System_String_o *v200; // x4
  int32_t v201; // w5
  int64_t v202; // x6
  System_String_o *v203; // x7
  __int64 v204; // x0
  GrandQuestFolderBoardItem_o *v205; // x26
  int32_t v206; // w2
  int32_t v207; // w3
  System_String_o *v208; // x4
  int32_t v209; // w5
  int64_t v210; // x6
  System_String_o *v211; // x7
  __int64 v212; // x0
  int32_t v213; // w2
  int32_t v214; // w3
  System_String_o *v215; // x4
  int32_t v216; // w5
  int64_t v217; // x6
  System_String_o *v218; // x7
  __int64 v219; // x0
  int32_t v220; // w2
  int32_t v221; // w3
  System_String_o *v222; // x4
  int32_t v223; // w5
  int64_t v224; // x6
  System_String_o *v225; // x7
  __int64 v226; // x0
  int32_t v227; // w2
  int32_t v228; // w3
  System_String_o *v229; // x4
  int32_t v230; // w5
  int64_t v231; // x6
  System_String_o *v232; // x7
  WarBoardAI__Think_d__11_o **v234; // [xsp+10h] [xbp-110h]
  Il2CppObject *object; // [xsp+18h] [xbp-108h]
  System_Collections_Generic_HashSet_T__o **v236; // [xsp+20h] [xbp-100h]
  System_Collections_Generic_List_Decimal__o *v237; // [xsp+20h] [xbp-100h]
  Il2CppObject *v238; // [xsp+28h] [xbp-F8h]
  WarBoardAI__Think_d__11_o *v239; // [xsp+30h] [xbp-F0h]
  System_Collections_Generic_List_Enumerator_object__o v240; // [xsp+38h] [xbp-E8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v241; // [xsp+50h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v242; // [xsp+70h] [xbp-B0h] BYREF

  v8 = this;
  if ( (byte_4CC4D34 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
    sub_1C713B0(&bool_TypeInfo);
    sub_1C713B0(&System_Decimal_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_OrderByDescending_List_WarBoardAIRoute_RouteData___Decimal___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____78684872);
    sub_1C713B0(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Take_List_WarBoardAIRoute_RouteData____);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_List_WarBoardAIRoute_RouteData____);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__get_Current__);
    sub_1C713B0(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    sub_1C713B0(&System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo);
    sub_1C713B0(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    sub_1C713B0(&System_Func_WarBoardAIRoute_RouteData__float__TypeInfo);
    sub_1C713B0(&System_Func_List_WarBoardAIRoute_RouteData___bool__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__);
    sub_1C713B0(&System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Decimal__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Decimal___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo);
    sub_1C713B0(&System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_List_Decimal__TypeInfo);
    sub_1C713B0(&Method_WarBoardAI___c__Think_b__11_0__);
    sub_1C713B0(&Method_WarBoardAI___c__Think_b__11_1__);
    sub_1C713B0(&Method_WarBoardAI___c__Think_b__11_3__);
    sub_1C713B0(&Method_WarBoardAI___c__Think_b__11_8__);
    sub_1C713B0(&Method_WarBoardAI___c__Think_b__11_9__);
    sub_1C713B0(&Method_WarBoardAI___c__DisplayClass11_0__Think_b__6__);
    sub_1C713B0(&WarBoardAI___c__DisplayClass11_0_TypeInfo);
    sub_1C713B0(&WarBoardAI___c_TypeInfo);
    this = (WarBoardAI__Think_d__11_o *)sub_1C713B0(&Method_WarBoardAI__Think_b__11_2__);
    byte_4CC4D34 = 1;
  }
  memset(&v242, 0, sizeof(v242));
  memset(&v241, 0, sizeof(v241));
  _4__this = v8->fields.__4__this;
  v238 = (Il2CppObject *)_4__this;
  v239 = v8;
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
      WarBoardAIRoute__BeforeCreateRouteData((WarBoardAIRoute_o *)this, 0);
      routeClass = v10->fields.routeClass;
      if ( !routeClass )
        goto LABEL_164;
      placePieceData = routeClass->fields.placePieceData;
      v13 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v13,
        (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor__);
      RouteData = WarBoardAIRoute__CreateRouteData(
                    routeClass,
                    placePieceData,
                    0,
                    (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v13,
                    0);
      v8->fields.__2__current = (Il2CppObject *)RouteData;
      p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
      sub_1C71354(p__2__current, (int32_t)RouteData, v16, v17, v18, v19, v20, v21);
      v22 = 1;
      LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
      return v22;
    case 1:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_164;
      v25 = _4__this->fields.routeClass;
      if ( !v25 )
        goto LABEL_164;
      allRouteList = v25->fields.allRouteList;
      v8->fields._allRouteList_5__2 = allRouteList;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&v8->fields._allRouteList_5__2,
        (int32_t)allRouteList,
        v2,
        v3,
        v4,
        v5,
        v6,
        v7);
      allRouteList_5__2 = v8->fields._allRouteList_5__2;
      if ( !allRouteList_5__2 )
        goto LABEL_164;
      if ( !allRouteList_5__2->fields._size )
      {
        v22 = 1;
        LOBYTE(v240.fields._list) = 1;
        v226 = j_il2cpp_value_box_0(bool_TypeInfo, &v240);
        v8->fields.__2__current = (Il2CppObject *)v226;
        v181 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
        sub_1C71354(v181, v226, v227, v228, v229, v230, v231, v232);
        v188 = 2;
        goto LABEL_169;
      }
LABEL_16:
      v28 = sub_1C715FC(WarBoardAI___c__DisplayClass11_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v28, 0);
      if ( !v238 )
        goto LABEL_164;
      klass = v238[1].klass;
      if ( !klass )
        goto LABEL_164;
      v30 = v8->fields._allRouteList_5__2;
      if ( !v30 )
        goto LABEL_164;
      namespaze_high = HIDWORD(klass->_1.namespaze);
      if ( namespaze_high >= v30->fields._size )
        namespaze_high = v30->fields._size;
      if ( !namespaze_high )
        namespaze_high = v30->fields._size;
      v8->fields._pickValue_5__3 = namespaze_high;
      v32 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v32 = BalanceConfig_TypeInfo;
        v30 = v8->fields._allRouteList_5__2;
      }
      v33 = WarBoardAI___c_TypeInfo;
      IsWarBoardAiCalcEvalSum = v32->static_fields->IsWarBoardAiCalcEvalSum;
      if ( !WarBoardAI___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
        v33 = WarBoardAI___c_TypeInfo;
      }
      static_fields = v33->static_fields;
      if ( IsWarBoardAiCalcEvalSum )
      {
        _9__11_0 = (System_Func_T__TResult__o *)static_fields->__9__11_0;
        if ( _9__11_0 )
          goto LABEL_39;
        if ( !v33->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v33);
          v33 = WarBoardAI___c_TypeInfo;
        }
        v37 = (Il2CppObject *)v33->static_fields->__9;
        _9__11_0 = (System_Func_T__TResult__o *)sub_1C715FC(System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo);
        System_Func_object__Decimal____ctor(_9__11_0, v37, Method_WarBoardAI___c__Think_b__11_0__, 0);
        v44 = WarBoardAI___c_TypeInfo->static_fields;
        v44->__9__11_0 = (struct System_Func_List_WarBoardAIRoute_RouteData___Decimal__o *)_9__11_0;
        p__9__11_0 = (GrandQuestFolderBoardItem_o *)&v44->__9__11_0;
      }
      else
      {
        _9__11_0 = (System_Func_T__TResult__o *)static_fields->__9__11_1;
        if ( _9__11_0 )
          goto LABEL_39;
        if ( !v33->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v33);
          v33 = WarBoardAI___c_TypeInfo;
        }
        v46 = (Il2CppObject *)v33->static_fields->__9;
        _9__11_0 = (System_Func_T__TResult__o *)sub_1C715FC(System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo);
        System_Func_object__Decimal____ctor(_9__11_0, v46, Method_WarBoardAI___c__Think_b__11_1__, 0);
        v47 = WarBoardAI___c_TypeInfo->static_fields;
        v47->__9__11_1 = (struct System_Func_List_WarBoardAIRoute_RouteData___Decimal__o *)_9__11_0;
        p__9__11_0 = (GrandQuestFolderBoardItem_o *)&v47->__9__11_1;
      }
      sub_1C71354(p__9__11_0, (int32_t)_9__11_0, v38, v39, v40, v41, v42, v43);
LABEL_39:
      v48 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__Decimal_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v30,
                                                                   (System_Func_TSource__TKey__o *)_9__11_0,
                                                                   (const MethodInfo_317AE50 *)Method_System_Linq_Enumerable_OrderByDescending_List_WarBoardAIRoute_RouteData___Decimal___);
      v49 = System_Linq_Enumerable__ToArray_object_(
              v48,
              (const MethodInfo_318AFEC *)Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____);
      v50 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v50,
        (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
      v8->fields._availableRouteList_5__4 = (struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *)v50;
      p_availableRouteList_5__4 = (WarBoardAI__Think_d__11_o **)&v8->fields._availableRouteList_5__4;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&v8->fields._availableRouteList_5__4,
        (int32_t)v50,
        v52,
        v53,
        v54,
        v55,
        v56,
        v57);
      v58 = (System_Collections_Generic_HashSet_T__o *)sub_1C715FC(System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo);
      System_Collections_Generic_HashSet_object____ctor(
        v58,
        (const MethodInfo_36C7184 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__);
      if ( !v28 )
        goto LABEL_164;
      object = (Il2CppObject *)v28;
      *(_QWORD *)(v28 + 16) = v58;
      v236 = (System_Collections_Generic_HashSet_T__o **)(v28 + 16);
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v28 + 16), (int32_t)v58, v59, v60, v61, v62, v63, v64);
      if ( !v49 )
        goto LABEL_164;
      max_length = v49->max_length;
      if ( (int)max_length >= 1 )
      {
        v66 = 0;
        pickValue_5__3 = v8->fields._pickValue_5__3;
        v68 = (GrandQuestFolderBoardItem_o *)(v28 + 24);
        v234 = (WarBoardAI__Think_d__11_o **)&v8->fields._availableRouteList_5__4;
        do
        {
          if ( v66 >= (unsigned int)max_length )
            goto LABEL_171;
          v69 = (System_Collections_ICollection_o *)v49->m_Items[v66];
          this = (WarBoardAI__Think_d__11_o *)BasicHelper__IsNullOrEmpty(v69, 0);
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
              if ( !v69 )
                goto LABEL_164;
              this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)v69,
                                                    0,
                                                    (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
              if ( !this )
                goto LABEL_164;
              if ( WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)this, 0) )
              {
                v76 = *v236;
                this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_List_object___get_Item(
                                                      (System_Collections_Generic_List_object__o *)v69,
                                                      0,
                                                      (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
                if ( !this || !v76 )
                  goto LABEL_164;
                this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_HashSet_object___Add(
                                                      v76,
                                                      *(Il2CppObject **)&this->fields._pickValue_5__3,
                                                      (const MethodInfo_36C8368 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__);
                goto LABEL_69;
              }
              v77 = (System_Func_object__bool__o *)v68->klass;
              if ( !v68->klass )
              {
                v77 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
                System_Func_object__bool____ctor(v77, object, Method_WarBoardAI___c__DisplayClass11_0__Think_b__6__, 0);
                object[1].monitor = v77;
                p_availableRouteList_5__4 = v234;
                sub_1C71354(v68, (int32_t)v77, v78, v79, v80, v81, v82, v83);
              }
              this = (WarBoardAI__Think_d__11_o *)BasicHelper__Any_object_(
                                                    (System_Collections_Generic_List_T__o *)v69,
                                                    (System_Func_T__bool__o *)v77,
                                                    (const MethodInfo_31341D4 *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
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
                                                        (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v69,
                                                        v70),
                  ((unsigned __int8)this & 1) == 0) )
            {
              this = *p_availableRouteList_5__4;
              if ( !*p_availableRouteList_5__4 )
                goto LABEL_164;
              v84 = *(_QWORD *)&this->fields.__1__state;
              v85 = Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__;
              ++HIDWORD(this->fields.__2__current);
              if ( !v84 )
                goto LABEL_164;
              _2__current_low = SLODWORD(this->fields.__2__current);
              if ( (unsigned int)_2__current_low >= *(_DWORD *)(v84 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)v69,
                  *(const MethodInfo_3810718 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
              }
              else
              {
                v87 = v84 + 8 * _2__current_low;
                LODWORD(this->fields.__2__current) = _2__current_low + 1;
                *(_QWORD *)(v87 + 32) = v69;
                sub_1C71354(
                  (GrandQuestFolderBoardItem_o *)(v87 + 32),
                  (int32_t)v69,
                  (int32_t)v70,
                  v71,
                  v72,
                  v73,
                  v74,
                  v75);
              }
              availableRouteList_5__4 = *p_availableRouteList_5__4;
              if ( !*p_availableRouteList_5__4 )
                goto LABEL_164;
              if ( pickValue_5__3 <= SLODWORD(availableRouteList_5__4->fields.__2__current) )
                goto LABEL_71;
            }
          }
LABEL_69:
          LODWORD(max_length) = v49->max_length;
        }
        while ( (__int64)++v66 < (int)max_length );
      }
      availableRouteList_5__4 = *p_availableRouteList_5__4;
      if ( !*p_availableRouteList_5__4 )
        goto LABEL_164;
LABEL_71:
      v23 = v239;
      if ( SLODWORD(availableRouteList_5__4->fields.__2__current) <= 0 )
      {
        v22 = 1;
        LOBYTE(v240.fields._list) = 1;
        v219 = j_il2cpp_value_box_0(bool_TypeInfo, &v240);
        v239->fields.__2__current = (Il2CppObject *)v219;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&v239->fields.__2__current, v219, v220, v221, v222, v223, v224, v225);
        v239->fields.__1__state = 3;
      }
      else
      {
LABEL_72:
        v88 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_List_WarBoardAIRoute_RouteData___bool__TypeInfo);
        System_Func_object__bool____ctor(v88, v238, Method_WarBoardAI__Think_b__11_2__, 0);
        v89 = System_Linq_Enumerable__Where_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)availableRouteList_5__4,
                (System_Func_TSource__bool__o *)v88,
                (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_List_WarBoardAIRoute_RouteData____);
        v90 = System_Linq_Enumerable__Take_object_(
                v89,
                v23->fields._pickValue_5__3,
                (const MethodInfo_31898D8 *)Method_System_Linq_Enumerable_Take_List_WarBoardAIRoute_RouteData____);
        v91 = System_Linq_Enumerable__ToArray_object_(
                v90,
                (const MethodInfo_318AFEC *)Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____);
        v23->fields._evalValueSortList_5__5 = (struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *)v91;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&v23->fields._evalValueSortList_5__5,
          (int32_t)v91,
          v92,
          v93,
          v94,
          v95,
          v96,
          v97);
        evalValueSortList_5__5 = v23->fields._evalValueSortList_5__5;
        if ( !evalValueSortList_5__5 )
          goto LABEL_164;
        v8 = v23;
        if ( !evalValueSortList_5__5->max_length )
        {
          v22 = 1;
          LOBYTE(v240.fields._list) = 1;
          v212 = j_il2cpp_value_box_0(bool_TypeInfo, &v240);
          v23->fields.__2__current = (Il2CppObject *)v212;
          v181 = (GrandQuestFolderBoardItem_o *)&v23->fields.__2__current;
          sub_1C71354(
            (GrandQuestFolderBoardItem_o *)&v23->fields.__2__current,
            v212,
            v213,
            v214,
            v215,
            v216,
            v217,
            v218);
          v188 = 4;
          goto LABEL_169;
        }
LABEL_74:
        v99 = (System_Collections_Generic_List_Decimal__o *)sub_1C715FC(System_Collections_Generic_List_Decimal__TypeInfo);
        System_Collections_Generic_List_Decimal____ctor(
          v99,
          (const MethodInfo_37E3664 *)Method_System_Collections_Generic_List_Decimal___ctor__);
        v101 = v8->fields._evalValueSortList_5__5;
        if ( !v101 )
          goto LABEL_164;
        v102 = 0;
        v237 = v99;
        while ( 1 )
        {
          v103 = v101->max_length;
          if ( v102 >= v103 )
            break;
          if ( v102 >= (unsigned int)v103 )
            goto LABEL_171;
          this = (WarBoardAI__Think_d__11_o *)v101->m_Items[v102];
          if ( !this )
            goto LABEL_164;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v240,
            (System_Collections_Generic_List_object__o *)this,
            (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
          v104 = 0;
          v105 = 0;
          v106 = 0;
          v242 = v240;
          while ( 1 )
          {
            v107 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     &v242,
                     (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
            if ( !v107 )
              break;
            current = (WarBoardAIRoute_RouteData_o *)v242.fields._current;
            if ( !v242.fields._current )
              sub_1C71608(v107, v108);
            if ( WarBoardAIRoute_RouteData__HasFlag((WarBoardAIRoute_RouteData_o *)v242.fields._current, 4, 0) )
            {
              actionPiece = current->fields.actionPiece;
              if ( actionPiece )
                v105 |= WarBoardPieceData__get_isMaster(actionPiece, 0);
              v106 = 1;
            }
            v104 |= WarBoardAIRoute_RouteData__HasFlag(current, 8, 0);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v242,
            (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
          if ( !v238 )
            goto LABEL_164;
          v111 = v238[1].klass;
          if ( !v111 )
            goto LABEL_164;
          this = (WarBoardAI__Think_d__11_o *)v111->_1.klass;
          if ( !this )
            goto LABEL_164;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v240,
            (System_Collections_Generic_List_object__o *)this,
            (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__GetEnumerator__);
          v112 = 0.0;
          v241 = v240;
          while ( 1 )
          {
            v113 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     &v241,
                     (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__MoveNext__);
            if ( !v113 )
              break;
            v115 = (WarBoardTacticalTrendEntity_o *)v241.fields._current;
            if ( !v241.fields._current )
              sub_1C71608(v113, v114);
            switch ( HIDWORD(v241.fields._current[1].klass) )
            {
              case 0:
                if ( v102 < SLODWORD(v241.fields._current[1].monitor) )
                {
                  BestMagnification = WarBoardTacticalTrendEntity__GetBestMagnification(
                                        (WarBoardTacticalTrendEntity_o *)v241.fields._current,
                                        0);
                  LowestMagnification = WarBoardTacticalTrendEntity__GetLowestMagnification(v115, 0);
                  value = v115->fields.value;
                  ImmobilityMagnification = WarBoardTacticalTrendEntity__GetBestMagnification(v115, 0)
                                          - (float)((float)((float)(BestMagnification - LowestMagnification)
                                                          / (float)((float)value + -1.0))
                                                  * (float)v102);
                  goto LABEL_102;
                }
                break;
              case 1:
                if ( (v106 & 1) != 0 )
                  goto LABEL_101;
                break;
              case 4:
                if ( (v105 & 1) != 0 )
                  goto LABEL_101;
                break;
              case 5:
                if ( (v104 & 1) != 0 )
                {
LABEL_101:
                  ImmobilityMagnification = WarBoardTacticalTrendEntity__GetImmobilityMagnification(
                                              (WarBoardTacticalTrendEntity_o *)v241.fields._current,
                                              0);
LABEL_102:
                  v112 = v112 + ImmobilityMagnification;
                }
                break;
              default:
                continue;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v241,
            (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__Dispose__);
          v8 = v239;
          v120 = BalanceConfig_TypeInfo;
          if ( v112 == 0.0 )
            v121 = 1.0;
          else
            v121 = v112;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v120 = BalanceConfig_TypeInfo;
          }
          v122 = System_Decimal_TypeInfo;
          v123 = v120->static_fields->IsWarBoardAiCalcEvalSum;
          if ( !System_Decimal_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
          this = (WarBoardAI__Think_d__11_o *)System_Decimal__op_Explicit((System_Decimal_o *)v122, v121, 0);
          v124 = v239->fields._evalValueSortList_5__5;
          if ( !v124 )
            goto LABEL_164;
          if ( (unsigned int)v102 >= LODWORD(v124->max_length) )
            goto LABEL_171;
          v125 = this;
          v126 = (System_Collections_Generic_IEnumerable_TSource__o *)v124->m_Items[v102];
          v127 = WarBoardAI___c_TypeInfo;
          v128 = (System_Decimal_o *)method;
          if ( !WarBoardAI___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
            v127 = WarBoardAI___c_TypeInfo;
          }
          v129 = v127->static_fields;
          if ( v123 )
          {
            _9__11_8 = (System_Func_T__TResult__o *)v129->__9__11_8;
            if ( !_9__11_8 )
            {
              if ( !v127->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v127);
                v127 = WarBoardAI___c_TypeInfo;
              }
              v132 = (Il2CppObject *)v127->static_fields->__9;
              _9__11_8 = (System_Func_T__TResult__o *)sub_1C715FC(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
              System_Func_object__Decimal____ctor(_9__11_8, v132, Method_WarBoardAI___c__Think_b__11_8__, 0);
              v133 = WarBoardAI___c_TypeInfo->static_fields;
              v133->__9__11_8 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_8;
              sub_1C71354(
                (GrandQuestFolderBoardItem_o *)&v133->__9__11_8,
                (int32_t)_9__11_8,
                v134,
                v135,
                v136,
                v137,
                v138,
                v139);
              v8 = v239;
            }
            v140 = System_Linq_Enumerable__Sum_object__51943004(
                     (System_Decimal_o *)&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___,
                     v126,
                     (System_Func_TSource__Decimal__o *)_9__11_8,
                     (const MethodInfo_318965C *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
            cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
            if ( !(_DWORD)cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
          }
          else
          {
            _9__11_9 = (System_Func_T__TResult__o *)v129->__9__11_9;
            if ( !_9__11_9 )
            {
              if ( !v127->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v127);
                v127 = WarBoardAI___c_TypeInfo;
              }
              v142 = (Il2CppObject *)v127->static_fields->__9;
              _9__11_9 = (System_Func_T__TResult__o *)sub_1C715FC(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
              System_Func_object__Decimal____ctor(_9__11_9, v142, Method_WarBoardAI___c__Think_b__11_9__, 0);
              v143 = WarBoardAI___c_TypeInfo->static_fields;
              v143->__9__11_9 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_9;
              sub_1C71354(
                (GrandQuestFolderBoardItem_o *)&v143->__9__11_9,
                (int32_t)_9__11_9,
                v144,
                v145,
                v146,
                v147,
                v148,
                v149);
              v8 = v239;
            }
            this = (WarBoardAI__Think_d__11_o *)System_Linq_Enumerable__Sum_object__51943004(
                                                  (System_Decimal_o *)&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___,
                                                  v126,
                                                  (System_Func_TSource__Decimal__o *)_9__11_9,
                                                  (const MethodInfo_318965C *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
            v150 = v8->fields._evalValueSortList_5__5;
            if ( !v150 )
              goto LABEL_164;
            if ( (unsigned int)v102 >= LODWORD(v150->max_length) )
              goto LABEL_171;
            v151 = (System_Decimal_o *)v150->m_Items[v102];
            if ( !v151 )
              goto LABEL_164;
            v152 = this;
            flags = v151[1].fields.flags;
            v154 = (System_Decimal_o *)method;
            if ( !System_Decimal_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
            v155 = System_Decimal__op_Implicit_65941012(v151, flags, 0);
            v8 = v239;
            v140 = System_Decimal__op_Division(v156, (System_Decimal_o *)v152, v154, (const MethodInfo *)v155);
          }
          this = (WarBoardAI__Think_d__11_o *)System_Decimal__op_Multiply(
                                                cctor_finished,
                                                (System_Decimal_o *)v125,
                                                v128,
                                                (const MethodInfo *)v140);
          v99 = v237;
          if ( v237 )
          {
            items = v237->fields._items;
            ++v237->fields._version;
            if ( items )
            {
              size = v237->fields._size;
              v100 = method;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_Decimal___AddWithResize(
                  v237,
                  (System_Decimal_o *)this,
                  (const MethodInfo_37E3EF4 *)method);
              }
              else
              {
                v159 = &items->obj + size;
                v237->fields._size = size + 1;
                v159[2].klass = (Il2CppClass *)this;
                v159[2].monitor = (void *)method;
              }
              v101 = v8->fields._evalValueSortList_5__5;
              ++v102;
              if ( v101 )
                continue;
            }
          }
          goto LABEL_164;
        }
        if ( !v238 )
          goto LABEL_164;
        this = (WarBoardAI__Think_d__11_o *)WarBoardAI__GetRandomIndex((WarBoardAI_o *)this, v99, v100);
        if ( (unsigned int)this >= LODWORD(v101->max_length) )
LABEL_171:
          sub_1C71610(this);
        v166 = v101->m_Items[(int)this];
        v238[1].monitor = v166;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&v238[1].monitor, (int32_t)v166, v160, v161, v162, v163, v164, v165);
        v167 = WarBoardAI___c_TypeInfo;
        monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v238[1].monitor;
        if ( !WarBoardAI___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
          v167 = WarBoardAI___c_TypeInfo;
        }
        _9__11_3 = (System_Func_T__TResult__o *)v167->static_fields->__9__11_3;
        if ( !_9__11_3 )
        {
          if ( !v167->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v167);
            v167 = WarBoardAI___c_TypeInfo;
          }
          v170 = (Il2CppObject *)v167->static_fields->__9;
          _9__11_3 = (System_Func_T__TResult__o *)sub_1C715FC(System_Func_WarBoardAIRoute_RouteData__float__TypeInfo);
          System_Func_object__float____ctor(_9__11_3, v170, Method_WarBoardAI___c__Think_b__11_3__, 0);
          v171 = WarBoardAI___c_TypeInfo->static_fields;
          v171->__9__11_3 = (struct System_Func_WarBoardAIRoute_RouteData__float__o *)_9__11_3;
          sub_1C71354(
            (GrandQuestFolderBoardItem_o *)&v171->__9__11_3,
            (int32_t)_9__11_3,
            v172,
            v173,
            v174,
            v175,
            v176,
            v177);
        }
        System_Linq_Enumerable__Sum_object__51943148(
          monitor,
          (System_Func_TSource__float__o *)_9__11_3,
          (const MethodInfo_31896EC *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____78684872);
        if ( WarBoardAI__CheckWasteRoute(
               v178,
               (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v238[1].monitor,
               v179) )
        {
          v22 = 1;
          LOBYTE(v240.fields._list) = 1;
          v180 = j_il2cpp_value_box_0(bool_TypeInfo, &v240);
          v8->fields.__2__current = (Il2CppObject *)v180;
          v181 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
          sub_1C71354(v181, v180, v182, v183, v184, v185, v186, v187);
          v188 = 5;
LABEL_169:
          LODWORD(v181[-1].fields._ClosedMessage_k__BackingField) = v188;
          return v22;
        }
LABEL_152:
        v189 = (System_Collections_Generic_HashSet_T__o *)sub_1C715FC(System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo);
        System_Collections_Generic_HashSet_object____ctor(
          v189,
          (const MethodInfo_36C7184 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__);
        if ( !v238 || (this = (WarBoardAI__Think_d__11_o *)v238[1].monitor) == 0 )
LABEL_164:
          sub_1C71608(this, method);
        v196 = LODWORD(this->fields.__2__current) - 1;
        if ( v196 >= 0 )
        {
          while ( 1 )
          {
            this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)this,
                                                  v196,
                                                  (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
            if ( !this )
              goto LABEL_164;
            method = *(const MethodInfo **)&this->fields._pickValue_5__3;
            v197 = this;
            if ( method )
            {
              if ( !v189 )
                goto LABEL_164;
              if ( !System_Collections_Generic_HashSet_object___Contains(
                      v189,
                      (Il2CppObject *)method,
                      (const MethodInfo_36C7878 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__)
                && !WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)v197, 0) )
              {
                System_Collections_Generic_HashSet_object___Add(
                  v189,
                  *(Il2CppObject **)&v197->fields._pickValue_5__3,
                  (const MethodInfo_36C8368 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__);
                this = *(WarBoardAI__Think_d__11_o **)&v197->fields._pickValue_5__3;
                if ( !this )
                  goto LABEL_164;
                WarBoardPieceData__SetPrevAiRoute((WarBoardPieceData_o *)this, (WarBoardAIRoute_RouteData_o *)v197, 0);
              }
            }
            if ( --v196 < 0 )
              break;
            this = (WarBoardAI__Think_d__11_o *)v238[1].monitor;
            if ( !this )
              goto LABEL_164;
          }
        }
        v8->fields._availableRouteList_5__4 = 0;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&v8->fields._availableRouteList_5__4,
          0,
          v190,
          v191,
          v192,
          v193,
          v194,
          v195);
        v8->fields._evalValueSortList_5__5 = 0;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&v8->fields._evalValueSortList_5__5,
          0,
          v198,
          v199,
          v200,
          v201,
          v202,
          v203);
        LOBYTE(v240.fields._list) = 0;
        v204 = j_il2cpp_value_box_0(bool_TypeInfo, &v240);
        v8->fields.__2__current = (Il2CppObject *)v204;
        v205 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
        sub_1C71354(v205, v204, v206, v207, v208, v209, v210, v211);
        LODWORD(v205[-1].fields._ClosedMessage_k__BackingField) = 6;
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

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_WarBoardAI__Think_d__11_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC4D2C & 1) == 0 )
  {
    sub_1C713B0(&WarBoardAI___c_TypeInfo);
    byte_4CC4D2C = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(WarBoardAI___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardAI___c_TypeInfo->static_fields->__9 = (struct WarBoardAI___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)WarBoardAI___c_TypeInfo->static_fields,
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4CC4D2D & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
    sub_1C713B0(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    sub_1C713B0(&Method_WarBoardAI___c__Think_b__11_4__);
    sub_1C713B0(&WarBoardAI___c_TypeInfo);
    byte_4CC4D2D = 1;
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
    _9__11_4 = (System_Func_T__TResult__o *)sub_1C715FC(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    System_Func_object__Decimal____ctor(_9__11_4, v8, Method_WarBoardAI___c__Think_b__11_4__, 0);
    v9 = WarBoardAI___c_TypeInfo->static_fields;
    v9->__9__11_4 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_4;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v9->__9__11_4, (int32_t)_9__11_4, v10, v11, v12, v13, v14, v15);
  }
  return System_Linq_Enumerable__Sum_object__51943004(
           (System_Decimal_o *)static_fields,
           (System_Collections_Generic_IEnumerable_TSource__o *)x,
           (System_Func_TSource__Decimal__o *)_9__11_4,
           (const MethodInfo_318965C *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Decimal_o *v16; // x0
  System_Decimal_o *v17; // x1
  System_Decimal_o *v18; // x20
  int32_t size; // w19
  System_Decimal_o *v20; // x21
  System_Decimal_o *cctor_finished; // x8
  System_Decimal_o *v22; // x2
  System_Decimal_o *v23; // x8

  if ( (byte_4CC4D2F & 1) == 0 )
  {
    sub_1C713B0(&System_Decimal_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
    sub_1C713B0(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__);
    sub_1C713B0(&Method_WarBoardAI___c__Think_b__11_5__);
    sub_1C713B0(&WarBoardAI___c_TypeInfo);
    byte_4CC4D2F = 1;
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
    _9__11_5 = (System_Func_T__TResult__o *)sub_1C715FC(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    System_Func_object__Decimal____ctor(_9__11_5, v8, Method_WarBoardAI___c__Think_b__11_5__, 0);
    v9 = WarBoardAI___c_TypeInfo->static_fields;
    v9->__9__11_5 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_5;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v9->__9__11_5, (int32_t)_9__11_5, v10, v11, v12, v13, v14, v15);
  }
  v16 = System_Linq_Enumerable__Sum_object__51943004(
          (System_Decimal_o *)static_fields,
          (System_Collections_Generic_IEnumerable_TSource__o *)x,
          (System_Func_TSource__Decimal__o *)_9__11_5,
          (const MethodInfo_318965C *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
  if ( !x )
    sub_1C71608(v16, v17);
  v18 = v16;
  size = x->fields._size;
  v20 = v17;
  cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
  if ( !(_DWORD)cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  v22 = System_Decimal__op_Implicit_65941012(cctor_finished, size, 0);
  return System_Decimal__op_Division(v23, v18, v20, (const MethodInfo *)v22);
}


float WarBoardAI___c___Think_b__11_3(WarBoardAI___c_o *this, WarBoardAIRoute_RouteData_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
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

  if ( (byte_4CC4D2E & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_1C713B0(&System_Decimal_TypeInfo);
    byte_4CC4D2E = 1;
  }
  if ( !y )
    sub_1C71608(this, y);
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

  if ( (byte_4CC4D30 & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_1C713B0(&System_Decimal_TypeInfo);
    byte_4CC4D30 = 1;
  }
  if ( !y )
    sub_1C71608(this, y);
  evalValue = y->fields.evalValue;
  cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
  if ( !(_DWORD)cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  return System_Decimal__op_Explicit(cctor_finished, evalValue, 0);
}


float WarBoardAI___c___Think_b__11_7(WarBoardAI___c_o *this, WarBoardAIRoute_RouteData_o *y, const MethodInfo *method)
{
  if ( !y )
    sub_1C71608(this, 0);
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

  if ( (byte_4CC4D31 & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_1C713B0(&System_Decimal_TypeInfo);
    byte_4CC4D31 = 1;
  }
  if ( !y )
    sub_1C71608(this, y);
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

  if ( (byte_4CC4D32 & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_1C713B0(&System_Decimal_TypeInfo);
    byte_4CC4D32 = 1;
  }
  if ( !y )
    sub_1C71608(this, y);
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
  if ( (byte_4CC4D33 & 1) == 0 )
  {
    this = (WarBoardAI___c__DisplayClass11_0_o *)sub_1C713B0(&Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__);
    byte_4CC4D33 = 1;
  }
  if ( !x || (this = (WarBoardAI___c__DisplayClass11_0_o *)v4->fields.notActionPieceHash) == 0 )
    sub_1C71608(this, x);
  return System_Collections_Generic_HashSet_object___Contains(
           (System_Collections_Generic_HashSet_T__o *)this,
           (Il2CppObject *)x->fields.basePiece,
           (const MethodInfo_36C7878 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__);
}