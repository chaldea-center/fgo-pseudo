void WarBoardAI___ctor(WarBoardAI_o *this, WarBoardStageNpcEntity_o *npc, const MethodInfo *method)
{
  WarBoardAIRoute_o *v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C4091E & 1) == 0 )
  {
    sub_1C37058(&WarBoardAIRoute_TypeInfo);
    byte_4C4091E = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v5 = (WarBoardAIRoute_o *)sub_1C372A4(WarBoardAIRoute_TypeInfo);
  WarBoardAIRoute___ctor(v5, npc, 0);
  this->fields.routeClass = v5;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)v5, v6, v7);
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
    sub_1C372B4(0);
  WarBoardAIRoute__AddPiecePersonalityDic(routeClass, aiId, pieceIndex, 0);
}


bool WarBoardAI__CheckWasteRoute(
        WarBoardAI_o *this,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *checkRoute,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v4; // x20
  Il2CppObject *Item; // x0
  int32_t size; // w8
  bool v7; // w24
  IWarBoardAIRouteWaste_c **v8; // x28
  int32_t v9; // w21
  Il2CppObject *v10; // x23
  Il2CppClass *klass; // x8
  Il2CppObject *methods; // x22
  Il2CppClass *v13; // x9
  Il2CppClass *v14; // x8
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
  __int64 v31; // x9
  IWarBoardAIRouteWaste_c **v32; // x29
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

  if ( (byte_4C40920 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__set_Item__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__TypeInfo);
    sub_1C37058(&IWarBoardAIRouteWaste_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
    byte_4C40920 = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_33F9BB0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ctor__);
  if ( !checkRoute )
    goto LABEL_65;
  size = checkRoute->fields._size;
  v7 = size > 0;
  if ( size >= 1 )
  {
    v8 = &IWarBoardAIRouteWaste_TypeInfo;
    v9 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)checkRoute,
               v9,
               (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
      if ( !Item )
        break;
      v10 = Item;
      if ( Item[3].klass )
      {
        Item = (Il2CppObject *)WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)Item, 0);
        if ( ((unsigned __int8)Item & 1) == 0 )
        {
          if ( v9 < 1 )
            goto LABEL_15;
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)checkRoute,
                   v9 - 1,
                   (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
          if ( !Item )
            goto LABEL_15;
          klass = Item[3].klass;
          methods = Item;
          if ( !klass )
            break;
          v13 = v10[3].klass;
          if ( !v13 )
            break;
          if ( *(&klass->_1.byval_arg.bits + 1) != *(&v13->_1.byval_arg.bits + 1)
            || (Item = (Il2CppObject *)WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)Item, 0),
                ((unsigned __int8)Item & 1) != 0) )
          {
LABEL_15:
            v14 = v10[3].klass;
            if ( !v14 || !v4 )
              break;
            Item = (Il2CppObject *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                     v4,
                                     HIDWORD(v14->_1.namespaze),
                                     (const MethodInfo_33FA778 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__ContainsKey__);
            if ( ((unsigned __int8)Item & 1) != 0 )
            {
              methods = 0;
            }
            else
            {
              v15 = v10[3].klass;
              if ( !v15 )
                break;
              methods = (Il2CppObject *)v15->_1.methods;
            }
          }
          v16 = v10[3].klass;
          if ( !v16 || !v4 )
            break;
          System_Collections_Generic_Dictionary_int__object___set_Item(
            v4,
            HIDWORD(v16->_1.namespaze),
            v10,
            (const MethodInfo_33FA570 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__set_Item__);
          if ( methods && ((__int64)v10[1].klass & 0x10000002) == 0 )
          {
            v17 = methods->klass;
            v18 = *v8;
            v19 = *(unsigned __int16 *)&methods->klass->_2.rank;
            if ( *(_WORD *)&methods->klass->_2.rank )
            {
              p_offset = (IWarBoardAIRouteWaste_c **)&v17->_1.interfaceOffsets->offset;
              while ( *(p_offset - 1) != v18 )
              {
                --v19;
                p_offset += 2;
                if ( !v19 )
                  goto LABEL_29;
              }
              v21 = (__int64)&v17->vtable[*(_DWORD *)p_offset + 2];
            }
            else
            {
LABEL_29:
              v21 = sub_1C87870(methods, v18, 2);
            }
            if ( ((*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v21)(methods, *(_QWORD *)(v21 + 8)) & 2) == 0 )
            {
              v22 = methods->klass;
              v23 = *v8;
              v24 = *(unsigned __int16 *)&methods->klass->_2.rank;
              if ( *(_WORD *)&methods->klass->_2.rank )
              {
                v25 = (IWarBoardAIRouteWaste_c **)&v22->_1.interfaceOffsets->offset;
                while ( *(v25 - 1) != v23 )
                {
                  --v24;
                  v25 += 2;
                  if ( !v24 )
                    goto LABEL_36;
                }
                v26 = (__int64)&v22->vtable[*(_DWORD *)v25 + 2];
              }
              else
              {
LABEL_36:
                v26 = sub_1C87870(methods, v23, 2);
              }
              if ( ((*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v26)(methods, *(_QWORD *)(v26 + 8)) & 0x10000000) == 0 )
              {
                v27 = methods->klass;
                v28 = v8;
                monitor_high = HIDWORD(v10[1].monitor);
                v30 = *v28;
                v31 = *(unsigned __int16 *)&methods->klass->_2.rank;
                v32 = v28;
                if ( *(_WORD *)&methods->klass->_2.rank )
                {
                  v33 = &v27->_1.interfaceOffsets->offset;
                  while ( *((IWarBoardAIRouteWaste_c **)v33 - 1) != v30 )
                  {
                    --v31;
                    v33 += 4;
                    if ( !v31 )
                      goto LABEL_43;
                  }
                  v34 = (__int64)&v27->vtable[*v33];
                }
                else
                {
LABEL_43:
                  v34 = sub_1C87870(methods, v30, 0);
                }
                v35 = monitor_high == (*(unsigned int (__fastcall **)(Il2CppObject *, _QWORD))v34)(
                                        methods,
                                        *(_QWORD *)(v34 + 8));
                v8 = v32;
                if ( v35 )
                {
                  v36 = methods->klass;
                  monitor = (int)v10[1].monitor;
                  v38 = *v32;
                  v39 = *(unsigned __int16 *)&methods->klass->_2.rank;
                  if ( *(_WORD *)&methods->klass->_2.rank )
                  {
                    v40 = (IWarBoardAIRouteWaste_c **)&v36->_1.interfaceOffsets->offset;
                    while ( *(v40 - 1) != v38 )
                    {
                      --v39;
                      v40 += 2;
                      if ( !v39 )
                        goto LABEL_51;
                    }
                    v41 = (__int64)&v36->vtable[*(_DWORD *)v40 + 1];
                  }
                  else
                  {
LABEL_51:
                    v41 = sub_1C87870(methods, v38, 1);
                  }
                  v35 = monitor == (*(unsigned int (__fastcall **)(Il2CppObject *, _QWORD))v41)(
                                     methods,
                                     *(_QWORD *)(v41 + 8));
                  v8 = v32;
                  if ( v35 && !WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)v10, 0) )
                  {
                    v42 = methods->klass;
                    v43 = *v32;
                    v44 = *(unsigned __int16 *)&methods->klass->_2.rank;
                    if ( *(_WORD *)&methods->klass->_2.rank )
                    {
                      v45 = (IWarBoardAIRouteWaste_c **)&v42->_1.interfaceOffsets->offset;
                      while ( *(v45 - 1) != v43 )
                      {
                        --v44;
                        v45 += 2;
                        if ( !v44 )
                          goto LABEL_60;
                      }
                      v46 = (__int64)&v42->vtable[*(_DWORD *)v45 + 3];
                    }
                    else
                    {
LABEL_60:
                      v46 = sub_1C87870(methods, v43, 3);
                    }
                    if ( ((*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v46)(methods, *(_QWORD *)(v46 + 8)) & 1) == 0 )
                      return v7;
                  }
                }
              }
            }
          }
        }
      }
      v47 = checkRoute->fields._size;
      v7 = ++v9 < v47;
      if ( v9 >= v47 )
        return v7;
    }
LABEL_65:
    sub_1C372B4(Item);
  }
  return v7;
}


void WarBoardAI__Clear(WarBoardAI_o *this, const MethodInfo *method)
{
  WarBoardAIRoute_o *routeClass; // x0

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_1C372B4(0);
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
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  Il2CppObject *v11; // x21
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  Il2CppObject *v18; // x20
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x5
  __int64 v23; // x6
  __int64 v24; // x7
  Il2CppObject *v25; // x0
  int32_t v27; // [xsp+Ch] [xbp-44h] BYREF
  int32_t v28; // [xsp+18h] [xbp-38h] BYREF
  int32_t v29; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4C40923 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&StringLiteral_25147/*"{0},{1},{2}"*/);
    byte_4C40923 = 1;
  }
  v29 = forceId;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(
                          int_TypeInfo,
                          &v29,
                          *(_QWORD *)&groupId,
                          *(_QWORD *)&index,
                          method,
                          v5,
                          v6,
                          v7);
  v28 = groupId;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v12, v13, v14, v15, v16, v17);
  v27 = index;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v19, v20, v21, v22, v23, v24);
  return System_String__Format_63603016((System_String_o *)StringLiteral_25147/*"{0},{1},{2}"*/, v11, v18, v25, 0);
}


bool WarBoardAI__Execute(WarBoardAI_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *executeRoute; // x0
  int32_t routeIndex; // w1
  System_Collections_Generic_List_object__o *Item; // x0
  System_Collections_Generic_List_object__o *v6; // x8
  WarBoardPieceData_o *monitor; // x20
  int32_t v8; // w8
  int32_t v9; // w8
  bool v10; // w22
  WarBoardManager_o *v12; // x21
  int32_t version; // w22
  int32_t v14; // w21
  WarBoardPieceData_o *Piece_37884744; // x0
  System_Int32_array *v16; // x21
  WarBoardManager_o *v17; // x21
  int32_t v18; // w8
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v19; // x9

  if ( (byte_4C40921 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
    sub_1C37058(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C37058(&WarBoardAIManager_TypeInfo);
    byte_4C40921 = 1;
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
                                                        (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
  if ( !Item )
    goto LABEL_40;
  v6 = Item;
  Item = (System_Collections_Generic_List_object__o *)this->fields.executeRoute;
  if ( !Item )
    goto LABEL_40;
  monitor = (WarBoardPieceData_o *)v6[1].monitor;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                        Item,
                                                        this->fields.routeIndex,
                                                        (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
  if ( !Item )
    goto LABEL_40;
  Item = (System_Collections_Generic_List_object__o *)WarBoardAIRoute_RouteData__get_notAction(
                                                        (WarBoardAIRoute_RouteData_o *)Item,
                                                        0);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    v8 = this->fields.routeIndex;
    this->fields.isEndPhase = 0;
    v9 = v8 + 1;
    this->fields.routeIndex = v9;
    goto LABEL_37;
  }
  Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this->fields.executeRoute )
    goto LABEL_40;
  v12 = (WarBoardManager_o *)Item;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)this->fields.executeRoute,
                                                        this->fields.routeIndex,
                                                        (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
  if ( !Item )
    goto LABEL_40;
  version = Item->fields._version;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  Item = (System_Collections_Generic_List_object__o *)WarBoardAIManager__GetSquare(version, 0);
  if ( !v12 )
    goto LABEL_40;
  WarBoardManager__CheckSelectSquare(v12, monitor, (WarBoardSquareData_o *)Item, 1, 0);
  Item = (System_Collections_Generic_List_object__o *)this->fields.executeRoute;
  if ( !Item )
    goto LABEL_40;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                        Item,
                                                        this->fields.routeIndex,
                                                        (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
                                                        (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
                                                          (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
    if ( !Item )
      goto LABEL_40;
    v14 = Item->fields._version;
    Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Item )
      goto LABEL_40;
    Item = (System_Collections_Generic_List_object__o *)Item[11].klass;
    if ( !Item )
      goto LABEL_40;
    Piece_37884744 = WarBoardData__GetPiece_37884744((WarBoardData_o *)Item, v14, 0);
    if ( Piece_37884744 )
    {
      if ( WarBoardPieceData__get_isServant(Piece_37884744, 0) )
      {
        Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( Item )
        {
          Item = (System_Collections_Generic_List_object__o *)Item[11].klass;
          if ( Item )
          {
            v16 = WarBoardData__GetInRangeSquareIndecies((WarBoardData_o *)Item, v14, 1, 0, 0);
            Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
            if ( Item )
            {
              WarBoardManager__DispPartyBuff((WarBoardManager_o *)Item, v16, 0);
              goto LABEL_33;
            }
          }
        }
LABEL_40:
        sub_1C372B4(Item);
      }
    }
  }
LABEL_33:
  Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this->fields.executeRoute )
    goto LABEL_40;
  v17 = (WarBoardManager_o *)Item;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)this->fields.executeRoute,
                                                        this->fields.routeIndex,
                                                        (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
  if ( !Item || !v17 )
    goto LABEL_40;
  v10 = 1;
  Item = (System_Collections_Generic_List_object__o *)WarBoardManager__PieceAction_38084464(
                                                        v17,
                                                        monitor,
                                                        Item->fields._version,
                                                        0,
                                                        1,
                                                        0);
  v18 = this->fields.routeIndex;
  this->fields.isEndPhase = (unsigned __int8)Item & 1;
  v9 = v18 + 1;
  this->fields.routeIndex = v9;
  if ( ((unsigned __int8)Item & 1) != 0 )
    return v10;
LABEL_37:
  v19 = this->fields.executeRoute;
  if ( !v19 )
    goto LABEL_40;
  v10 = 1;
  if ( v19->fields._size <= v9 )
    this->fields.isEndRoute = 1;
  return v10;
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

  if ( (byte_4C40922 & 1) == 0 )
  {
    sub_1C37058(&System_Decimal_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Sum_Decimal___);
    sub_1C37058(&System_Func_Decimal__Decimal__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Decimal__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_Decimal__get_Item__);
    sub_1C37058(&System_Math_TypeInfo);
    sub_1C37058(&Method_WarBoardAI___c__GetRandomIndex_b__14_0__);
    sub_1C37058(&WarBoardAI___c_TypeInfo);
    byte_4C40922 = 1;
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
    _9__14_0 = (System_Func_Decimal__Decimal__o *)sub_1C372A4(System_Func_Decimal__Decimal__TypeInfo);
    System_Func_Decimal__Decimal____ctor(_9__14_0, v7, Method_WarBoardAI___c__GetRandomIndex_b__14_0__, 0);
    v8 = WarBoardAI___c_TypeInfo->static_fields;
    v8->__9__14_0 = _9__14_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&v8->__9__14_0, (int32_t)_9__14_0, v9, v10);
  }
  v11 = System_Linq_Enumerable__Sum_Decimal_(
          (System_Decimal_o *)static_fields,
          (System_Collections_Generic_IEnumerable_TSource__o *)weightTable,
          (System_Func_TSource__Decimal__o *)_9__14_0,
          (const MethodInfo_312591C *)Method_System_Linq_Enumerable_Sum_Decimal___);
  v13 = v12;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !byte_4C40932 )
  {
    sub_1C37058(&System_Decimal_TypeInfo);
    byte_4C40932 = 1;
  }
  cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
  if ( !(_DWORD)cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  v15 = System_Decimal__Floor(cctor_finished, v11, v13);
  v17 = v16;
  if ( !System_Decimal_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  v18 = System_Decimal__op_Explicit_65473212(v15, v17);
  v19 = UnityEngine_Random__Range(0.0, v18, 0);
  v21 = System_Decimal__op_Explicit(v20, v19, 0);
  if ( !weightTable )
    sub_1C372B4(v21);
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
             (const MethodInfo_37764D4 *)Method_System_Collections_Generic_List_Decimal__get_Item__);
    v29 = v28;
    if ( !System_Decimal_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
    if ( System_Decimal__op_GreaterThanOrEqual(Item, v29, v24) )
      break;
    v31 = System_Collections_Generic_List_Decimal___get_Item(
            v30,
            weightTable,
            v26,
            (const MethodInfo_37764D4 *)Method_System_Collections_Generic_List_Decimal__get_Item__);
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

  if ( (byte_4C4091F & 1) == 0 )
  {
    sub_1C37058(&WarBoardAI__Think_d__11_TypeInfo);
    byte_4C4091F = 1;
  }
  v3 = sub_1C372A4(WarBoardAI__Think_d__11_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
    sub_1C372B4(0);
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
  float v13; // s0

  if ( (byte_4C40924 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____78152776);
    sub_1C37058(&System_Func_WarBoardAIRoute_RouteData__float__TypeInfo);
    sub_1C37058(&Method_WarBoardAI___c__Think_b__11_7__);
    sub_1C37058(&WarBoardAI___c_TypeInfo);
    byte_4C40924 = 1;
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
    _9__11_7 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_WarBoardAIRoute_RouteData__float__TypeInfo);
    System_Func_object__float____ctor(_9__11_7, v8, Method_WarBoardAI___c__Think_b__11_7__, 0);
    static_fields = WarBoardAI___c_TypeInfo->static_fields;
    static_fields->__9__11_7 = (struct System_Func_WarBoardAIRoute_RouteData__float__o *)_9__11_7;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__11_7, (int32_t)_9__11_7, v10, v11);
  }
  v13 = System_Linq_Enumerable__Sum_object__51534324(
          (System_Collections_Generic_IEnumerable_TSource__o *)x,
          (System_Func_TSource__float__o *)_9__11_7,
          (const MethodInfo_31259F4 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____78152776);
  if ( !routeClass )
    sub_1C372B4(v12);
  return !WarBoardAIRoute__IsThinkingThreshold(routeClass, v13, 0);
}


int32_t WarBoardAI__get_ForceId(WarBoardAI_o *this, const MethodInfo *method)
{
  struct WarBoardAIRoute_o *routeClass; // x8

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_1C372B4(this);
  return routeClass->fields.forceId;
}


int32_t WarBoardAI__get_GroupId(WarBoardAI_o *this, const MethodInfo *method)
{
  struct WarBoardAIRoute_o *routeClass; // x8

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_1C372B4(this);
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
  __int64 v22; // x5
  __int64 v23; // x6
  __int64 v24; // x7
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *allRouteList_5__2; // x8
  __int64 v26; // x27
  Il2CppClass *klass; // x8
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *v28; // x22
  int32_t namespaze_high; // w8
  BalanceConfig_c *v30; // x8
  WarBoardAI___c_c *v31; // x0
  _BOOL4 IsWarBoardAiCalcEvalSum; // w21
  struct WarBoardAI___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__11_0; // x23
  Il2CppObject *v35; // x24
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct WarBoardAI___c_StaticFields *v38; // x0
  CGThumbnailListItem_o *p__9__11_0; // x0
  Il2CppObject *v40; // x24
  struct WarBoardAI___c_StaticFields *v41; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  System_Object_array *v43; // x22
  System_Collections_Generic_List_object__o *v44; // x24
  WarBoardAI__Think_d__11_o **p_availableRouteList_5__4; // x23
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  System_Collections_Generic_HashSet_T__o *v48; // x25
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  const MethodInfo *v51; // x2
  const MethodInfo *v52; // x3
  __int64 v53; // x4
  __int64 v54; // x5
  __int64 v55; // x6
  __int64 v56; // x7
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v58; // x20
  int32_t pickValue_5__3; // w28
  CGThumbnailListItem_o *v60; // x25
  System_Collections_ICollection_o *v61; // x26
  System_Collections_Generic_HashSet_T__o *v62; // x27
  System_Func_object__bool__o *v63; // x27
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  __int64 v66; // x8
  _QWORD *v67; // x9
  __int64 _2__current_low; // x10
  __int64 v69; // x8
  System_Func_object__bool__o *v70; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x0
  System_Object_array *v73; // x0
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  __int64 v79; // x5
  __int64 v80; // x6
  __int64 v81; // x7
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *evalValueSortList_5__5; // x8
  System_Collections_Generic_List_Decimal__o *v83; // x21
  const MethodInfo *v84; // x2
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *v85; // x22
  int v86; // w29
  int v87; // w8
  int v88; // w24
  int v89; // w25
  char v90; // w26
  _BOOL8 v91; // x0
  WarBoardAIRoute_RouteData_o *current; // x22
  WarBoardPieceData_o *actionPiece; // x0
  Il2CppClass *v94; // x8
  float v95; // s12
  _BOOL8 v96; // x0
  WarBoardTacticalTrendEntity_o *v97; // x22
  float BestMagnification; // s8
  float LowestMagnification; // s0
  int value; // w23
  float ImmobilityMagnification; // s0
  BalanceConfig_c *v102; // x0
  float v103; // s8
  System_Decimal_c *v104; // x8
  _BOOL4 v105; // w25
  System_Decimal_o *v106; // x1
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *v107; // x8
  WarBoardAI__Think_d__11_o *v108; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v109; // x24
  WarBoardAI___c_c *v110; // x0
  System_Decimal_o *v111; // x23
  struct WarBoardAI___c_StaticFields *v112; // x8
  System_Func_T__TResult__o *_9__11_8; // x25
  System_Func_T__TResult__o *_9__11_9; // x25
  Il2CppObject *v115; // x26
  struct WarBoardAI___c_StaticFields *v116; // x0
  int32_t v117; // w2
  const MethodInfo *v118; // x3
  System_Decimal_o *v119; // x24
  System_Decimal_o *cctor_finished; // x8
  Il2CppObject *v121; // x26
  struct WarBoardAI___c_StaticFields *v122; // x0
  int32_t v123; // w2
  const MethodInfo *v124; // x3
  System_Decimal_o *v125; // x1
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *v126; // x8
  System_Decimal_o *v127; // x8
  WarBoardAI__Think_d__11_o *v128; // x24
  int32_t flags; // w26
  System_Decimal_o *v130; // x25
  System_Decimal_o *v131; // x0
  System_Decimal_o *v132; // x8
  const MethodInfo_3776800 *v133; // x1
  struct System_Decimal_array *items; // x9
  __int64 size; // x11
  Il2CppObject *v136; // x9
  int32_t v137; // w2
  const MethodInfo *v138; // x3
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v139; // x1
  WarBoardAI___c_c *v140; // x0
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x22
  System_Func_T__TResult__o *_9__11_3; // x23
  Il2CppObject *v143; // x24
  struct WarBoardAI___c_StaticFields *v144; // x0
  int32_t v145; // w2
  const MethodInfo *v146; // x3
  WarBoardAI_o *v147; // x0
  const MethodInfo *v148; // x2
  __int64 v149; // x2
  __int64 v150; // x3
  __int64 v151; // x4
  __int64 v152; // x5
  __int64 v153; // x6
  __int64 v154; // x7
  __int64 v155; // x0
  CGThumbnailListItem_o *v156; // x26
  int32_t v157; // w2
  const MethodInfo *v158; // x3
  int v159; // w8
  System_Collections_Generic_HashSet_T__o *v160; // x21
  int32_t v161; // w2
  const MethodInfo *v162; // x3
  int32_t v163; // w22
  Il2CppObject *v164; // x1
  WarBoardAI__Think_d__11_o *v165; // x23
  int32_t v166; // w2
  const MethodInfo *v167; // x3
  __int64 v168; // x2
  __int64 v169; // x3
  __int64 v170; // x4
  __int64 v171; // x5
  __int64 v172; // x6
  __int64 v173; // x7
  __int64 v174; // x0
  CGThumbnailListItem_o *v175; // x26
  int32_t v176; // w2
  const MethodInfo *v177; // x3
  __int64 v178; // x0
  int32_t v179; // w2
  const MethodInfo *v180; // x3
  __int64 v181; // x0
  int32_t v182; // w2
  const MethodInfo *v183; // x3
  __int64 v184; // x0
  int32_t v185; // w2
  const MethodInfo *v186; // x3
  WarBoardAI__Think_d__11_o **v188; // [xsp+10h] [xbp-110h]
  Il2CppObject *object; // [xsp+18h] [xbp-108h]
  System_Collections_Generic_HashSet_T__o **v190; // [xsp+20h] [xbp-100h]
  System_Collections_Generic_List_Decimal__o *v191; // [xsp+20h] [xbp-100h]
  Il2CppObject *v192; // [xsp+28h] [xbp-F8h]
  WarBoardAI__Think_d__11_o *v193; // [xsp+30h] [xbp-F0h]
  System_Collections_Generic_List_Enumerator_object__o v194; // [xsp+38h] [xbp-E8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v195; // [xsp+50h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v196; // [xsp+70h] [xbp-B0h] BYREF

  v4 = this;
  if ( (byte_4C4092D & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
    sub_1C37058(&bool_TypeInfo);
    sub_1C37058(&System_Decimal_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_OrderByDescending_List_WarBoardAIRoute_RouteData___Decimal___);
    sub_1C37058(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____78152776);
    sub_1C37058(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
    sub_1C37058(&Method_System_Linq_Enumerable_Take_List_WarBoardAIRoute_RouteData____);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_List_WarBoardAIRoute_RouteData____);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__get_Current__);
    sub_1C37058(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    sub_1C37058(&System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo);
    sub_1C37058(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    sub_1C37058(&System_Func_WarBoardAIRoute_RouteData__float__TypeInfo);
    sub_1C37058(&System_Func_List_WarBoardAIRoute_RouteData___bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__);
    sub_1C37058(&System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Decimal__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_Decimal___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_Decimal__TypeInfo);
    sub_1C37058(&Method_WarBoardAI___c__Think_b__11_0__);
    sub_1C37058(&Method_WarBoardAI___c__Think_b__11_1__);
    sub_1C37058(&Method_WarBoardAI___c__Think_b__11_3__);
    sub_1C37058(&Method_WarBoardAI___c__Think_b__11_8__);
    sub_1C37058(&Method_WarBoardAI___c__Think_b__11_9__);
    sub_1C37058(&Method_WarBoardAI___c__DisplayClass11_0__Think_b__6__);
    sub_1C37058(&WarBoardAI___c__DisplayClass11_0_TypeInfo);
    sub_1C37058(&WarBoardAI___c_TypeInfo);
    this = (WarBoardAI__Think_d__11_o *)sub_1C37058(&Method_WarBoardAI__Think_b__11_2__);
    byte_4C4092D = 1;
  }
  memset(&v196, 0, sizeof(v196));
  memset(&v195, 0, sizeof(v195));
  _4__this = v4->fields.__4__this;
  v192 = (Il2CppObject *)_4__this;
  v193 = v4;
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
      v9 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v9,
        (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor__);
      RouteData = WarBoardAIRoute__CreateRouteData(
                    routeClass,
                    placePieceData,
                    0,
                    (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v9,
                    0);
      v4->fields.__2__current = (Il2CppObject *)RouteData;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C36FFC(p__2__current, (int32_t)RouteData, v12, v13);
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
      sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields._allRouteList_5__2, (int32_t)allRouteList, v2, v3);
      allRouteList_5__2 = v4->fields._allRouteList_5__2;
      if ( !allRouteList_5__2 )
        goto LABEL_164;
      if ( !allRouteList_5__2->fields._size )
      {
        v14 = 1;
        LOBYTE(v194.fields._list) = 1;
        v184 = j_il2cpp_value_box_0(bool_TypeInfo, &v194, v19, v20, v21, v22, v23, v24);
        v4->fields.__2__current = (Il2CppObject *)v184;
        v156 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C36FFC(v156, v184, v185, v186);
        v159 = 2;
        goto LABEL_169;
      }
LABEL_16:
      v26 = sub_1C372A4(WarBoardAI___c__DisplayClass11_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v26, 0);
      if ( !v192 )
        goto LABEL_164;
      klass = v192[1].klass;
      if ( !klass )
        goto LABEL_164;
      v28 = v4->fields._allRouteList_5__2;
      if ( !v28 )
        goto LABEL_164;
      namespaze_high = HIDWORD(klass->_1.namespaze);
      if ( namespaze_high >= v28->fields._size )
        namespaze_high = v28->fields._size;
      if ( !namespaze_high )
        namespaze_high = v28->fields._size;
      v4->fields._pickValue_5__3 = namespaze_high;
      v30 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v30 = BalanceConfig_TypeInfo;
        v28 = v4->fields._allRouteList_5__2;
      }
      v31 = WarBoardAI___c_TypeInfo;
      IsWarBoardAiCalcEvalSum = v30->static_fields->IsWarBoardAiCalcEvalSum;
      if ( !WarBoardAI___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
        v31 = WarBoardAI___c_TypeInfo;
      }
      static_fields = v31->static_fields;
      if ( IsWarBoardAiCalcEvalSum )
      {
        _9__11_0 = (System_Func_T__TResult__o *)static_fields->__9__11_0;
        if ( _9__11_0 )
          goto LABEL_39;
        if ( !v31->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v31);
          v31 = WarBoardAI___c_TypeInfo;
        }
        v35 = (Il2CppObject *)v31->static_fields->__9;
        _9__11_0 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo);
        System_Func_object__Decimal____ctor(_9__11_0, v35, Method_WarBoardAI___c__Think_b__11_0__, 0);
        v38 = WarBoardAI___c_TypeInfo->static_fields;
        v38->__9__11_0 = (struct System_Func_List_WarBoardAIRoute_RouteData___Decimal__o *)_9__11_0;
        p__9__11_0 = (CGThumbnailListItem_o *)&v38->__9__11_0;
      }
      else
      {
        _9__11_0 = (System_Func_T__TResult__o *)static_fields->__9__11_1;
        if ( _9__11_0 )
          goto LABEL_39;
        if ( !v31->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v31);
          v31 = WarBoardAI___c_TypeInfo;
        }
        v40 = (Il2CppObject *)v31->static_fields->__9;
        _9__11_0 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo);
        System_Func_object__Decimal____ctor(_9__11_0, v40, Method_WarBoardAI___c__Think_b__11_1__, 0);
        v41 = WarBoardAI___c_TypeInfo->static_fields;
        v41->__9__11_1 = (struct System_Func_List_WarBoardAIRoute_RouteData___Decimal__o *)_9__11_0;
        p__9__11_0 = (CGThumbnailListItem_o *)&v41->__9__11_1;
      }
      sub_1C36FFC(p__9__11_0, (int32_t)_9__11_0, v36, v37);
LABEL_39:
      v42 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__Decimal_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v28,
                                                                   (System_Func_TSource__TKey__o *)_9__11_0,
                                                                   (const MethodInfo_31178C0 *)Method_System_Linq_Enumerable_OrderByDescending_List_WarBoardAIRoute_RouteData___Decimal___);
      v43 = System_Linq_Enumerable__ToArray_object_(
              v42,
              (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____);
      v44 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v44,
        (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
      v4->fields._availableRouteList_5__4 = (struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *)v44;
      p_availableRouteList_5__4 = (WarBoardAI__Think_d__11_o **)&v4->fields._availableRouteList_5__4;
      sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields._availableRouteList_5__4, (int32_t)v44, v46, v47);
      v48 = (System_Collections_Generic_HashSet_T__o *)sub_1C372A4(System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo);
      System_Collections_Generic_HashSet_object____ctor(
        v48,
        (const MethodInfo_365A090 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__);
      if ( !v26 )
        goto LABEL_164;
      object = (Il2CppObject *)v26;
      *(_QWORD *)(v26 + 16) = v48;
      v190 = (System_Collections_Generic_HashSet_T__o **)(v26 + 16);
      sub_1C36FFC((CGThumbnailListItem_o *)(v26 + 16), (int32_t)v48, v49, v50);
      if ( !v43 )
        goto LABEL_164;
      max_length = v43->max_length;
      if ( (int)max_length >= 1 )
      {
        v58 = 0;
        pickValue_5__3 = v4->fields._pickValue_5__3;
        v60 = (CGThumbnailListItem_o *)(v26 + 24);
        v188 = (WarBoardAI__Think_d__11_o **)&v4->fields._availableRouteList_5__4;
        do
        {
          if ( v58 >= (unsigned int)max_length )
            goto LABEL_171;
          v61 = (System_Collections_ICollection_o *)v43->m_Items[v58];
          this = (WarBoardAI__Think_d__11_o *)BasicHelper__IsNullOrEmpty(v61, 0);
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
              if ( !v61 )
                goto LABEL_164;
              this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)v61,
                                                    0,
                                                    (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
              if ( !this )
                goto LABEL_164;
              if ( WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)this, 0) )
              {
                v62 = *v190;
                this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_List_object___get_Item(
                                                      (System_Collections_Generic_List_object__o *)v61,
                                                      0,
                                                      (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
                if ( !this || !v62 )
                  goto LABEL_164;
                this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_HashSet_object___Add(
                                                      v62,
                                                      *(Il2CppObject **)&this->fields._pickValue_5__3,
                                                      (const MethodInfo_365B274 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__);
                goto LABEL_69;
              }
              v63 = (System_Func_object__bool__o *)v60->klass;
              if ( !v60->klass )
              {
                v63 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
                System_Func_object__bool____ctor(v63, object, Method_WarBoardAI___c__DisplayClass11_0__Think_b__6__, 0);
                object[1].monitor = v63;
                p_availableRouteList_5__4 = v188;
                sub_1C36FFC(v60, (int32_t)v63, v64, v65);
              }
              this = (WarBoardAI__Think_d__11_o *)BasicHelper__Any_object_(
                                                    (System_Collections_Generic_List_T__o *)v61,
                                                    (System_Func_T__bool__o *)v63,
                                                    (const MethodInfo_30D0FF8 *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
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
                                                        (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v61,
                                                        v51),
                  ((unsigned __int8)this & 1) == 0) )
            {
              this = *p_availableRouteList_5__4;
              if ( !*p_availableRouteList_5__4 )
                goto LABEL_164;
              v66 = *(_QWORD *)&this->fields.__1__state;
              v67 = Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__;
              ++HIDWORD(this->fields.__2__current);
              if ( !v66 )
                goto LABEL_164;
              _2__current_low = SLODWORD(this->fields.__2__current);
              if ( (unsigned int)_2__current_low >= *(_DWORD *)(v66 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)v61,
                  *(const MethodInfo_37A3024 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
              }
              else
              {
                v69 = v66 + 8 * _2__current_low;
                LODWORD(this->fields.__2__current) = _2__current_low + 1;
                *(_QWORD *)(v69 + 32) = v61;
                sub_1C36FFC((CGThumbnailListItem_o *)(v69 + 32), (int32_t)v61, (int32_t)v51, v52);
              }
              availableRouteList_5__4 = *p_availableRouteList_5__4;
              if ( !*p_availableRouteList_5__4 )
                goto LABEL_164;
              if ( pickValue_5__3 <= SLODWORD(availableRouteList_5__4->fields.__2__current) )
                goto LABEL_71;
            }
          }
LABEL_69:
          LODWORD(max_length) = v43->max_length;
        }
        while ( (__int64)++v58 < (int)max_length );
      }
      availableRouteList_5__4 = *p_availableRouteList_5__4;
      if ( !*p_availableRouteList_5__4 )
        goto LABEL_164;
LABEL_71:
      v15 = v193;
      if ( SLODWORD(availableRouteList_5__4->fields.__2__current) <= 0 )
      {
        v14 = 1;
        LOBYTE(v194.fields._list) = 1;
        v181 = j_il2cpp_value_box_0(bool_TypeInfo, &v194, v51, v52, v53, v54, v55, v56);
        v193->fields.__2__current = (Il2CppObject *)v181;
        sub_1C36FFC((CGThumbnailListItem_o *)&v193->fields.__2__current, v181, v182, v183);
        v193->fields.__1__state = 3;
      }
      else
      {
LABEL_72:
        v70 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_List_WarBoardAIRoute_RouteData___bool__TypeInfo);
        System_Func_object__bool____ctor(v70, v192, Method_WarBoardAI__Think_b__11_2__, 0);
        v71 = System_Linq_Enumerable__Where_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)availableRouteList_5__4,
                (System_Func_TSource__bool__o *)v70,
                (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_List_WarBoardAIRoute_RouteData____);
        v72 = System_Linq_Enumerable__Take_object_(
                v71,
                v15->fields._pickValue_5__3,
                (const MethodInfo_3125BE0 *)Method_System_Linq_Enumerable_Take_List_WarBoardAIRoute_RouteData____);
        v73 = System_Linq_Enumerable__ToArray_object_(
                v72,
                (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____);
        v15->fields._evalValueSortList_5__5 = (struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *)v73;
        sub_1C36FFC((CGThumbnailListItem_o *)&v15->fields._evalValueSortList_5__5, (int32_t)v73, v74, v75);
        evalValueSortList_5__5 = v15->fields._evalValueSortList_5__5;
        if ( !evalValueSortList_5__5 )
          goto LABEL_164;
        v4 = v15;
        if ( !evalValueSortList_5__5->max_length )
        {
          v14 = 1;
          LOBYTE(v194.fields._list) = 1;
          v178 = j_il2cpp_value_box_0(bool_TypeInfo, &v194, v76, v77, v78, v79, v80, v81);
          v15->fields.__2__current = (Il2CppObject *)v178;
          v156 = (CGThumbnailListItem_o *)&v15->fields.__2__current;
          sub_1C36FFC((CGThumbnailListItem_o *)&v15->fields.__2__current, v178, v179, v180);
          v159 = 4;
          goto LABEL_169;
        }
LABEL_74:
        v83 = (System_Collections_Generic_List_Decimal__o *)sub_1C372A4(System_Collections_Generic_List_Decimal__TypeInfo);
        System_Collections_Generic_List_Decimal____ctor(
          v83,
          (const MethodInfo_3775F70 *)Method_System_Collections_Generic_List_Decimal___ctor__);
        v85 = v4->fields._evalValueSortList_5__5;
        if ( !v85 )
          goto LABEL_164;
        v86 = 0;
        v191 = v83;
        while ( 1 )
        {
          v87 = v85->max_length;
          if ( v86 >= v87 )
            break;
          if ( v86 >= (unsigned int)v87 )
            goto LABEL_171;
          this = (WarBoardAI__Think_d__11_o *)v85->m_Items[v86];
          if ( !this )
            goto LABEL_164;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v194,
            (System_Collections_Generic_List_object__o *)this,
            (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
          v88 = 0;
          v89 = 0;
          v90 = 0;
          v196 = v194;
          while ( 1 )
          {
            v91 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v196,
                    (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
            if ( !v91 )
              break;
            current = (WarBoardAIRoute_RouteData_o *)v196.fields._current;
            if ( !v196.fields._current )
              sub_1C372B4(v91);
            if ( WarBoardAIRoute_RouteData__HasFlag((WarBoardAIRoute_RouteData_o *)v196.fields._current, 4, 0) )
            {
              actionPiece = current->fields.actionPiece;
              if ( actionPiece )
                v89 |= WarBoardPieceData__get_isMaster(actionPiece, 0);
              v90 = 1;
            }
            v88 |= WarBoardAIRoute_RouteData__HasFlag(current, 8, 0);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v196,
            (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
          if ( !v192 )
            goto LABEL_164;
          v94 = v192[1].klass;
          if ( !v94 )
            goto LABEL_164;
          this = (WarBoardAI__Think_d__11_o *)v94->_1.klass;
          if ( !this )
            goto LABEL_164;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v194,
            (System_Collections_Generic_List_object__o *)this,
            (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__GetEnumerator__);
          v95 = 0.0;
          v195 = v194;
          while ( 1 )
          {
            v96 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v195,
                    (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__MoveNext__);
            if ( !v96 )
              break;
            v97 = (WarBoardTacticalTrendEntity_o *)v195.fields._current;
            if ( !v195.fields._current )
              sub_1C372B4(v96);
            switch ( HIDWORD(v195.fields._current[1].klass) )
            {
              case 0:
                if ( v86 < SLODWORD(v195.fields._current[1].monitor) )
                {
                  BestMagnification = WarBoardTacticalTrendEntity__GetBestMagnification(
                                        (WarBoardTacticalTrendEntity_o *)v195.fields._current,
                                        0);
                  LowestMagnification = WarBoardTacticalTrendEntity__GetLowestMagnification(v97, 0);
                  value = v97->fields.value;
                  ImmobilityMagnification = WarBoardTacticalTrendEntity__GetBestMagnification(v97, 0)
                                          - (float)((float)((float)(BestMagnification - LowestMagnification)
                                                          / (float)((float)value + -1.0))
                                                  * (float)v86);
                  goto LABEL_102;
                }
                break;
              case 1:
                if ( (v90 & 1) != 0 )
                  goto LABEL_101;
                break;
              case 4:
                if ( (v89 & 1) != 0 )
                  goto LABEL_101;
                break;
              case 5:
                if ( (v88 & 1) != 0 )
                {
LABEL_101:
                  ImmobilityMagnification = WarBoardTacticalTrendEntity__GetImmobilityMagnification(
                                              (WarBoardTacticalTrendEntity_o *)v195.fields._current,
                                              0);
LABEL_102:
                  v95 = v95 + ImmobilityMagnification;
                }
                break;
              default:
                continue;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v195,
            (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__Dispose__);
          v4 = v193;
          v102 = BalanceConfig_TypeInfo;
          if ( v95 == 0.0 )
            v103 = 1.0;
          else
            v103 = v95;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v102 = BalanceConfig_TypeInfo;
          }
          v104 = System_Decimal_TypeInfo;
          v105 = v102->static_fields->IsWarBoardAiCalcEvalSum;
          if ( !System_Decimal_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
          this = (WarBoardAI__Think_d__11_o *)System_Decimal__op_Explicit((System_Decimal_o *)v104, v103, 0);
          v107 = v193->fields._evalValueSortList_5__5;
          if ( !v107 )
            goto LABEL_164;
          if ( (unsigned int)v86 >= LODWORD(v107->max_length) )
            goto LABEL_171;
          v108 = this;
          v109 = (System_Collections_Generic_IEnumerable_TSource__o *)v107->m_Items[v86];
          v110 = WarBoardAI___c_TypeInfo;
          v111 = v106;
          if ( !WarBoardAI___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
            v110 = WarBoardAI___c_TypeInfo;
          }
          v112 = v110->static_fields;
          if ( v105 )
          {
            _9__11_8 = (System_Func_T__TResult__o *)v112->__9__11_8;
            if ( !_9__11_8 )
            {
              if ( !v110->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v110);
                v110 = WarBoardAI___c_TypeInfo;
              }
              v115 = (Il2CppObject *)v110->static_fields->__9;
              _9__11_8 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
              System_Func_object__Decimal____ctor(_9__11_8, v115, Method_WarBoardAI___c__Think_b__11_8__, 0);
              v116 = WarBoardAI___c_TypeInfo->static_fields;
              v116->__9__11_8 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_8;
              sub_1C36FFC((CGThumbnailListItem_o *)&v116->__9__11_8, (int32_t)_9__11_8, v117, v118);
              v4 = v193;
            }
            v119 = System_Linq_Enumerable__Sum_object__51534180(
                     (System_Decimal_o *)&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___,
                     v109,
                     (System_Func_TSource__Decimal__o *)_9__11_8,
                     (const MethodInfo_3125964 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
            cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
            if ( !(_DWORD)cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
          }
          else
          {
            _9__11_9 = (System_Func_T__TResult__o *)v112->__9__11_9;
            if ( !_9__11_9 )
            {
              if ( !v110->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v110);
                v110 = WarBoardAI___c_TypeInfo;
              }
              v121 = (Il2CppObject *)v110->static_fields->__9;
              _9__11_9 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
              System_Func_object__Decimal____ctor(_9__11_9, v121, Method_WarBoardAI___c__Think_b__11_9__, 0);
              v122 = WarBoardAI___c_TypeInfo->static_fields;
              v122->__9__11_9 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_9;
              sub_1C36FFC((CGThumbnailListItem_o *)&v122->__9__11_9, (int32_t)_9__11_9, v123, v124);
              v4 = v193;
            }
            this = (WarBoardAI__Think_d__11_o *)System_Linq_Enumerable__Sum_object__51534180(
                                                  (System_Decimal_o *)&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___,
                                                  v109,
                                                  (System_Func_TSource__Decimal__o *)_9__11_9,
                                                  (const MethodInfo_3125964 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
            v126 = v4->fields._evalValueSortList_5__5;
            if ( !v126 )
              goto LABEL_164;
            if ( (unsigned int)v86 >= LODWORD(v126->max_length) )
              goto LABEL_171;
            v127 = (System_Decimal_o *)v126->m_Items[v86];
            if ( !v127 )
              goto LABEL_164;
            v128 = this;
            flags = v127[1].fields.flags;
            v130 = v125;
            if ( !System_Decimal_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
            v131 = System_Decimal__op_Implicit_65472708(v127, flags, 0);
            v4 = v193;
            v119 = System_Decimal__op_Division(v132, (System_Decimal_o *)v128, v130, (const MethodInfo *)v131);
          }
          this = (WarBoardAI__Think_d__11_o *)System_Decimal__op_Multiply(
                                                cctor_finished,
                                                (System_Decimal_o *)v108,
                                                v111,
                                                (const MethodInfo *)v119);
          v83 = v191;
          if ( v191 )
          {
            items = v191->fields._items;
            ++v191->fields._version;
            if ( items )
            {
              size = v191->fields._size;
              v84 = (const MethodInfo *)v133;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_Decimal___AddWithResize(v191, (System_Decimal_o *)this, v133);
              }
              else
              {
                v136 = &items->obj + size;
                v191->fields._size = size + 1;
                v136[2].klass = (Il2CppClass *)this;
                v136[2].monitor = (void *)v133;
              }
              v85 = v4->fields._evalValueSortList_5__5;
              ++v86;
              if ( v85 )
                continue;
            }
          }
          goto LABEL_164;
        }
        if ( !v192 )
          goto LABEL_164;
        this = (WarBoardAI__Think_d__11_o *)WarBoardAI__GetRandomIndex((WarBoardAI_o *)this, v83, v84);
        if ( (unsigned int)this >= LODWORD(v85->max_length) )
LABEL_171:
          sub_1C372BC(this);
        v139 = v85->m_Items[(int)this];
        v192[1].monitor = v139;
        sub_1C36FFC((CGThumbnailListItem_o *)&v192[1].monitor, (int32_t)v139, v137, v138);
        v140 = WarBoardAI___c_TypeInfo;
        monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v192[1].monitor;
        if ( !WarBoardAI___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
          v140 = WarBoardAI___c_TypeInfo;
        }
        _9__11_3 = (System_Func_T__TResult__o *)v140->static_fields->__9__11_3;
        if ( !_9__11_3 )
        {
          if ( !v140->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v140);
            v140 = WarBoardAI___c_TypeInfo;
          }
          v143 = (Il2CppObject *)v140->static_fields->__9;
          _9__11_3 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_WarBoardAIRoute_RouteData__float__TypeInfo);
          System_Func_object__float____ctor(_9__11_3, v143, Method_WarBoardAI___c__Think_b__11_3__, 0);
          v144 = WarBoardAI___c_TypeInfo->static_fields;
          v144->__9__11_3 = (struct System_Func_WarBoardAIRoute_RouteData__float__o *)_9__11_3;
          sub_1C36FFC((CGThumbnailListItem_o *)&v144->__9__11_3, (int32_t)_9__11_3, v145, v146);
        }
        System_Linq_Enumerable__Sum_object__51534324(
          monitor,
          (System_Func_TSource__float__o *)_9__11_3,
          (const MethodInfo_31259F4 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____78152776);
        if ( WarBoardAI__CheckWasteRoute(
               v147,
               (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v192[1].monitor,
               v148) )
        {
          v14 = 1;
          LOBYTE(v194.fields._list) = 1;
          v155 = j_il2cpp_value_box_0(bool_TypeInfo, &v194, v149, v150, v151, v152, v153, v154);
          v4->fields.__2__current = (Il2CppObject *)v155;
          v156 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1C36FFC(v156, v155, v157, v158);
          v159 = 5;
LABEL_169:
          LODWORD(v156[-1].fields._ThumbnailSpritePath_k__BackingField) = v159;
          return v14;
        }
LABEL_152:
        v160 = (System_Collections_Generic_HashSet_T__o *)sub_1C372A4(System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo);
        System_Collections_Generic_HashSet_object____ctor(
          v160,
          (const MethodInfo_365A090 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__);
        if ( !v192 || (this = (WarBoardAI__Think_d__11_o *)v192[1].monitor) == 0 )
LABEL_164:
          sub_1C372B4(this);
        v163 = LODWORD(this->fields.__2__current) - 1;
        if ( v163 >= 0 )
        {
          while ( 1 )
          {
            this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)this,
                                                  v163,
                                                  (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
            if ( !this )
              goto LABEL_164;
            v164 = *(Il2CppObject **)&this->fields._pickValue_5__3;
            v165 = this;
            if ( v164 )
            {
              if ( !v160 )
                goto LABEL_164;
              if ( !System_Collections_Generic_HashSet_object___Contains(
                      v160,
                      v164,
                      (const MethodInfo_365A784 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__)
                && !WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)v165, 0) )
              {
                System_Collections_Generic_HashSet_object___Add(
                  v160,
                  *(Il2CppObject **)&v165->fields._pickValue_5__3,
                  (const MethodInfo_365B274 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__);
                this = *(WarBoardAI__Think_d__11_o **)&v165->fields._pickValue_5__3;
                if ( !this )
                  goto LABEL_164;
                WarBoardPieceData__SetPrevAiRoute((WarBoardPieceData_o *)this, (WarBoardAIRoute_RouteData_o *)v165, 0);
              }
            }
            if ( --v163 < 0 )
              break;
            this = (WarBoardAI__Think_d__11_o *)v192[1].monitor;
            if ( !this )
              goto LABEL_164;
          }
        }
        v4->fields._availableRouteList_5__4 = 0;
        sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields._availableRouteList_5__4, 0, v161, v162);
        v4->fields._evalValueSortList_5__5 = 0;
        sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields._evalValueSortList_5__5, 0, v166, v167);
        LOBYTE(v194.fields._list) = 0;
        v174 = j_il2cpp_value_box_0(bool_TypeInfo, &v194, v168, v169, v170, v171, v172, v173);
        v4->fields.__2__current = (Il2CppObject *)v174;
        v175 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C36FFC(v175, v174, v176, v177);
        LODWORD(v175[-1].fields._ThumbnailSpritePath_k__BackingField) = 6;
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

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_WarBoardAI__Think_d__11_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
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

  if ( (byte_4C40925 & 1) == 0 )
  {
    sub_1C37058(&WarBoardAI___c_TypeInfo);
    byte_4C40925 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(WarBoardAI___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardAI___c_TypeInfo->static_fields->__9 = (struct WarBoardAI___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)WarBoardAI___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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

  if ( (byte_4C40926 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
    sub_1C37058(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    sub_1C37058(&Method_WarBoardAI___c__Think_b__11_4__);
    sub_1C37058(&WarBoardAI___c_TypeInfo);
    byte_4C40926 = 1;
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
    _9__11_4 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    System_Func_object__Decimal____ctor(_9__11_4, v8, Method_WarBoardAI___c__Think_b__11_4__, 0);
    v9 = WarBoardAI___c_TypeInfo->static_fields;
    v9->__9__11_4 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_4;
    sub_1C36FFC((CGThumbnailListItem_o *)&v9->__9__11_4, (int32_t)_9__11_4, v10, v11);
  }
  return System_Linq_Enumerable__Sum_object__51534180(
           (System_Decimal_o *)static_fields,
           (System_Collections_Generic_IEnumerable_TSource__o *)x,
           (System_Func_TSource__Decimal__o *)_9__11_4,
           (const MethodInfo_3125964 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
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

  if ( (byte_4C40928 & 1) == 0 )
  {
    sub_1C37058(&System_Decimal_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
    sub_1C37058(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__);
    sub_1C37058(&Method_WarBoardAI___c__Think_b__11_5__);
    sub_1C37058(&WarBoardAI___c_TypeInfo);
    byte_4C40928 = 1;
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
    _9__11_5 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    System_Func_object__Decimal____ctor(_9__11_5, v8, Method_WarBoardAI___c__Think_b__11_5__, 0);
    v9 = WarBoardAI___c_TypeInfo->static_fields;
    v9->__9__11_5 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_5;
    sub_1C36FFC((CGThumbnailListItem_o *)&v9->__9__11_5, (int32_t)_9__11_5, v10, v11);
  }
  v12 = System_Linq_Enumerable__Sum_object__51534180(
          (System_Decimal_o *)static_fields,
          (System_Collections_Generic_IEnumerable_TSource__o *)x,
          (System_Func_TSource__Decimal__o *)_9__11_5,
          (const MethodInfo_3125964 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
  if ( !x )
    sub_1C372B4(v12);
  v14 = v12;
  size = x->fields._size;
  v16 = v13;
  cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
  if ( !(_DWORD)cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  v18 = System_Decimal__op_Implicit_65472708(cctor_finished, size, 0);
  return System_Decimal__op_Division(v19, v14, v16, (const MethodInfo *)v18);
}


float WarBoardAI___c___Think_b__11_3(WarBoardAI___c_o *this, WarBoardAIRoute_RouteData_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
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

  if ( (byte_4C40927 & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_1C37058(&System_Decimal_TypeInfo);
    byte_4C40927 = 1;
  }
  if ( !y )
    sub_1C372B4(this);
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

  if ( (byte_4C40929 & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_1C37058(&System_Decimal_TypeInfo);
    byte_4C40929 = 1;
  }
  if ( !y )
    sub_1C372B4(this);
  evalValue = y->fields.evalValue;
  cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
  if ( !(_DWORD)cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  return System_Decimal__op_Explicit(cctor_finished, evalValue, 0);
}


float WarBoardAI___c___Think_b__11_7(WarBoardAI___c_o *this, WarBoardAIRoute_RouteData_o *y, const MethodInfo *method)
{
  if ( !y )
    sub_1C372B4(this);
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

  if ( (byte_4C4092A & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_1C37058(&System_Decimal_TypeInfo);
    byte_4C4092A = 1;
  }
  if ( !y )
    sub_1C372B4(this);
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

  if ( (byte_4C4092B & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_1C37058(&System_Decimal_TypeInfo);
    byte_4C4092B = 1;
  }
  if ( !y )
    sub_1C372B4(this);
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
  if ( (byte_4C4092C & 1) == 0 )
  {
    this = (WarBoardAI___c__DisplayClass11_0_o *)sub_1C37058(&Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__);
    byte_4C4092C = 1;
  }
  if ( !x || (this = (WarBoardAI___c__DisplayClass11_0_o *)v4->fields.notActionPieceHash) == 0 )
    sub_1C372B4(this);
  return System_Collections_Generic_HashSet_object___Contains(
           (System_Collections_Generic_HashSet_T__o *)this,
           (Il2CppObject *)x->fields.basePiece,
           (const MethodInfo_365A784 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__);
}