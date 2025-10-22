void WarBoardAI___ctor(WarBoardAI_o *this, WarBoardStageNpcEntity_o *npc, const MethodInfo *method)
{
  WarBoardAIRoute_o *v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C546BB & 1) == 0 )
  {
    sub_1C3E564(&WarBoardAIRoute_TypeInfo);
    byte_4C546BB = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v5 = (WarBoardAIRoute_o *)sub_1C3E7B0(WarBoardAIRoute_TypeInfo);
  WarBoardAIRoute___ctor(v5, npc, 0);
  this->fields.routeClass = v5;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)v5, v6, v7);
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
    sub_1C3E7C0(0, *(_QWORD *)&aiId);
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

  if ( (byte_4C546BD & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__set_Item__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__TypeInfo);
    sub_1C3E564(&IWarBoardAIRouteWaste_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
    byte_4C546BD = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_340BA68 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ctor__);
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
               (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
                   (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
                                     (const MethodInfo_340C630 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__ContainsKey__);
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
            (const MethodInfo_340C428 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__set_Item__);
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
              v22 = sub_1C8ED7C(methods, v19, 2);
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
                v27 = sub_1C8ED7C(methods, v24, 2);
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
                  v35 = sub_1C8ED7C(methods, v31, 0);
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
                    v42 = sub_1C8ED7C(methods, v39, 1);
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
                      v47 = sub_1C8ED7C(methods, v44, 3);
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
    sub_1C3E7C0(Item, v6);
  }
  return v8;
}


void WarBoardAI__Clear(WarBoardAI_o *this, const MethodInfo *method)
{
  WarBoardAIRoute_o *routeClass; // x0

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_1C3E7C0(0, method);
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

  if ( (byte_4C546C0 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&StringLiteral_25167/*"{0},{1},{2}"*/);
    byte_4C546C0 = 1;
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
  return System_String__Format_63677828((System_String_o *)StringLiteral_25167/*"{0},{1},{2}"*/, v11, v18, v25, 0);
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
  WarBoardPieceData_o *Piece_37929548; // x0
  System_Int32_array *v17; // x21
  WarBoardManager_o *v18; // x21
  int32_t v19; // w8
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v20; // x9

  if ( (byte_4C546BE & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C3E564(&WarBoardAIManager_TypeInfo);
    byte_4C546BE = 1;
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
                                                        (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
                                                        (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
  Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this->fields.executeRoute )
    goto LABEL_40;
  v13 = (WarBoardManager_o *)Item;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)this->fields.executeRoute,
                                                        this->fields.routeIndex,
                                                        (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
                                                        (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
                                                        (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
                                                          (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
    if ( !Item )
      goto LABEL_40;
    v15 = Item->fields._version;
    Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Item )
      goto LABEL_40;
    Item = (System_Collections_Generic_List_object__o *)Item[11].klass;
    if ( !Item )
      goto LABEL_40;
    Piece_37929548 = WarBoardData__GetPiece_37929548((WarBoardData_o *)Item, v15, 0);
    if ( Piece_37929548 )
    {
      if ( WarBoardPieceData__get_isServant(Piece_37929548, 0) )
      {
        Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( Item )
        {
          Item = (System_Collections_Generic_List_object__o *)Item[11].klass;
          if ( Item )
          {
            v17 = WarBoardData__GetInRangeSquareIndecies((WarBoardData_o *)Item, v15, 1, 0, 0);
            Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
            if ( Item )
            {
              WarBoardManager__DispPartyBuff((WarBoardManager_o *)Item, v17, 0);
              goto LABEL_33;
            }
          }
        }
LABEL_40:
        sub_1C3E7C0(Item, v6);
      }
    }
  }
LABEL_33:
  Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this->fields.executeRoute )
    goto LABEL_40;
  v18 = (WarBoardManager_o *)Item;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)this->fields.executeRoute,
                                                        this->fields.routeIndex,
                                                        (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
  if ( !Item || !v18 )
    goto LABEL_40;
  v11 = 1;
  Item = (System_Collections_Generic_List_object__o *)WarBoardManager__PieceAction_38129268(
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

  if ( (byte_4C546BF & 1) == 0 )
  {
    sub_1C3E564(&System_Decimal_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Sum_Decimal___);
    sub_1C3E564(&System_Func_Decimal__Decimal__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Decimal__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Decimal__get_Item__);
    sub_1C3E564(&System_Math_TypeInfo);
    sub_1C3E564(&Method_WarBoardAI___c__GetRandomIndex_b__14_0__);
    sub_1C3E564(&WarBoardAI___c_TypeInfo);
    byte_4C546BF = 1;
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
    _9__14_0 = (System_Func_Decimal__Decimal__o *)sub_1C3E7B0(System_Func_Decimal__Decimal__TypeInfo);
    System_Func_Decimal__Decimal____ctor(_9__14_0, v7, Method_WarBoardAI___c__GetRandomIndex_b__14_0__, 0);
    v8 = WarBoardAI___c_TypeInfo->static_fields;
    v8->__9__14_0 = _9__14_0;
    sub_1C3E508((CGThumbnailListItem_o *)&v8->__9__14_0, (int32_t)_9__14_0, v9, v10);
  }
  v11 = System_Linq_Enumerable__Sum_Decimal_(
          (System_Decimal_o *)static_fields,
          (System_Collections_Generic_IEnumerable_TSource__o *)weightTable,
          (System_Func_TSource__Decimal__o *)_9__14_0,
          (const MethodInfo_3137810 *)Method_System_Linq_Enumerable_Sum_Decimal___);
  v13 = v12;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !byte_4C546CF )
  {
    sub_1C3E564(&System_Decimal_TypeInfo);
    byte_4C546CF = 1;
  }
  cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
  if ( !(_DWORD)cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  v15 = System_Decimal__Floor(cctor_finished, v11, v13);
  v17 = v16;
  if ( !System_Decimal_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  v18 = System_Decimal__op_Explicit_65548024(v15, v17);
  v19 = UnityEngine_Random__Range(0.0, v18, 0);
  v21 = System_Decimal__op_Explicit(v20, v19, 0);
  if ( !weightTable )
    sub_1C3E7C0(v21, v22);
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
             (const MethodInfo_3788910 *)Method_System_Collections_Generic_List_Decimal__get_Item__);
    v29 = v28;
    if ( !System_Decimal_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
    if ( System_Decimal__op_GreaterThanOrEqual(Item, v29, v24) )
      break;
    v31 = System_Collections_Generic_List_Decimal___get_Item(
            v30,
            weightTable,
            v26,
            (const MethodInfo_3788910 *)Method_System_Collections_Generic_List_Decimal__get_Item__);
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

  if ( (byte_4C546BC & 1) == 0 )
  {
    sub_1C3E564(&WarBoardAI__Think_d__11_TypeInfo);
    byte_4C546BC = 1;
  }
  v3 = sub_1C3E7B0(WarBoardAI__Think_d__11_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
    sub_1C3E7C0(0, *(_QWORD *)&aiId);
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

  if ( (byte_4C546C1 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____78232792);
    sub_1C3E564(&System_Func_WarBoardAIRoute_RouteData__float__TypeInfo);
    sub_1C3E564(&Method_WarBoardAI___c__Think_b__11_7__);
    sub_1C3E564(&WarBoardAI___c_TypeInfo);
    byte_4C546C1 = 1;
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
    _9__11_7 = (System_Func_T__TResult__o *)sub_1C3E7B0(System_Func_WarBoardAIRoute_RouteData__float__TypeInfo);
    System_Func_object__float____ctor(_9__11_7, v8, Method_WarBoardAI___c__Think_b__11_7__, 0);
    static_fields = WarBoardAI___c_TypeInfo->static_fields;
    static_fields->__9__11_7 = (struct System_Func_WarBoardAIRoute_RouteData__float__o *)_9__11_7;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__11_7, (int32_t)_9__11_7, v10, v11);
  }
  v14 = System_Linq_Enumerable__Sum_object__51607784(
          (System_Collections_Generic_IEnumerable_TSource__o *)x,
          (System_Func_TSource__float__o *)_9__11_7,
          (const MethodInfo_31378E8 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____78232792);
  if ( !routeClass )
    sub_1C3E7C0(v12, v13);
  return !WarBoardAIRoute__IsThinkingThreshold(routeClass, v14, 0);
}


int32_t WarBoardAI__get_ForceId(WarBoardAI_o *this, const MethodInfo *method)
{
  struct WarBoardAIRoute_o *routeClass; // x8

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_1C3E7C0(this, method);
  return routeClass->fields.forceId;
}


int32_t WarBoardAI__get_GroupId(WarBoardAI_o *this, const MethodInfo *method)
{
  struct WarBoardAIRoute_o *routeClass; // x8

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_1C3E7C0(this, method);
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
  __int64 v92; // x1
  WarBoardAIRoute_RouteData_o *current; // x22
  WarBoardPieceData_o *actionPiece; // x0
  Il2CppClass *v95; // x8
  float v96; // s12
  _BOOL8 v97; // x0
  __int64 v98; // x1
  WarBoardTacticalTrendEntity_o *v99; // x22
  float BestMagnification; // s8
  float LowestMagnification; // s0
  int value; // w23
  float ImmobilityMagnification; // s0
  BalanceConfig_c *v104; // x0
  float v105; // s8
  System_Decimal_c *v106; // x8
  _BOOL4 v107; // w25
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *v108; // x8
  WarBoardAI__Think_d__11_o *v109; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v110; // x24
  WarBoardAI___c_c *v111; // x0
  System_Decimal_o *v112; // x23
  struct WarBoardAI___c_StaticFields *v113; // x8
  System_Func_T__TResult__o *_9__11_8; // x25
  System_Func_T__TResult__o *_9__11_9; // x25
  Il2CppObject *v116; // x26
  struct WarBoardAI___c_StaticFields *v117; // x0
  int32_t v118; // w2
  const MethodInfo *v119; // x3
  System_Decimal_o *v120; // x24
  System_Decimal_o *cctor_finished; // x8
  Il2CppObject *v122; // x26
  struct WarBoardAI___c_StaticFields *v123; // x0
  int32_t v124; // w2
  const MethodInfo *v125; // x3
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *v126; // x8
  System_Decimal_o *v127; // x8
  WarBoardAI__Think_d__11_o *v128; // x24
  int32_t flags; // w26
  System_Decimal_o *v130; // x25
  System_Decimal_o *v131; // x0
  System_Decimal_o *v132; // x8
  struct System_Decimal_array *items; // x9
  __int64 size; // x11
  Il2CppObject *v135; // x9
  int32_t v136; // w2
  const MethodInfo *v137; // x3
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v138; // x1
  WarBoardAI___c_c *v139; // x0
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x22
  System_Func_T__TResult__o *_9__11_3; // x23
  Il2CppObject *v142; // x24
  struct WarBoardAI___c_StaticFields *v143; // x0
  int32_t v144; // w2
  const MethodInfo *v145; // x3
  WarBoardAI_o *v146; // x0
  const MethodInfo *v147; // x2
  __int64 v148; // x2
  __int64 v149; // x3
  __int64 v150; // x4
  __int64 v151; // x5
  __int64 v152; // x6
  __int64 v153; // x7
  __int64 v154; // x0
  CGThumbnailListItem_o *v155; // x26
  int32_t v156; // w2
  const MethodInfo *v157; // x3
  int v158; // w8
  System_Collections_Generic_HashSet_T__o *v159; // x21
  int32_t v160; // w2
  const MethodInfo *v161; // x3
  int32_t v162; // w22
  WarBoardAI__Think_d__11_o *v163; // x23
  int32_t v164; // w2
  const MethodInfo *v165; // x3
  __int64 v166; // x2
  __int64 v167; // x3
  __int64 v168; // x4
  __int64 v169; // x5
  __int64 v170; // x6
  __int64 v171; // x7
  __int64 v172; // x0
  CGThumbnailListItem_o *v173; // x26
  int32_t v174; // w2
  const MethodInfo *v175; // x3
  __int64 v176; // x0
  int32_t v177; // w2
  const MethodInfo *v178; // x3
  __int64 v179; // x0
  int32_t v180; // w2
  const MethodInfo *v181; // x3
  __int64 v182; // x0
  int32_t v183; // w2
  const MethodInfo *v184; // x3
  WarBoardAI__Think_d__11_o **v186; // [xsp+10h] [xbp-110h]
  Il2CppObject *object; // [xsp+18h] [xbp-108h]
  System_Collections_Generic_HashSet_T__o **v188; // [xsp+20h] [xbp-100h]
  System_Collections_Generic_List_Decimal__o *v189; // [xsp+20h] [xbp-100h]
  Il2CppObject *v190; // [xsp+28h] [xbp-F8h]
  WarBoardAI__Think_d__11_o *v191; // [xsp+30h] [xbp-F0h]
  System_Collections_Generic_List_Enumerator_object__o v192; // [xsp+38h] [xbp-E8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v193; // [xsp+50h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v194; // [xsp+70h] [xbp-B0h] BYREF

  v4 = this;
  if ( (byte_4C546CA & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
    sub_1C3E564(&bool_TypeInfo);
    sub_1C3E564(&System_Decimal_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_OrderByDescending_List_WarBoardAIRoute_RouteData___Decimal___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____78232792);
    sub_1C3E564(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Take_List_WarBoardAIRoute_RouteData____);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_List_WarBoardAIRoute_RouteData____);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__get_Current__);
    sub_1C3E564(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
    sub_1C3E564(&System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo);
    sub_1C3E564(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    sub_1C3E564(&System_Func_WarBoardAIRoute_RouteData__float__TypeInfo);
    sub_1C3E564(&System_Func_List_WarBoardAIRoute_RouteData___bool__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__);
    sub_1C3E564(&System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Decimal__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Decimal___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
    sub_1C3E564(&System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_Decimal__TypeInfo);
    sub_1C3E564(&Method_WarBoardAI___c__Think_b__11_0__);
    sub_1C3E564(&Method_WarBoardAI___c__Think_b__11_1__);
    sub_1C3E564(&Method_WarBoardAI___c__Think_b__11_3__);
    sub_1C3E564(&Method_WarBoardAI___c__Think_b__11_8__);
    sub_1C3E564(&Method_WarBoardAI___c__Think_b__11_9__);
    sub_1C3E564(&Method_WarBoardAI___c__DisplayClass11_0__Think_b__6__);
    sub_1C3E564(&WarBoardAI___c__DisplayClass11_0_TypeInfo);
    sub_1C3E564(&WarBoardAI___c_TypeInfo);
    this = (WarBoardAI__Think_d__11_o *)sub_1C3E564(&Method_WarBoardAI__Think_b__11_2__);
    byte_4C546CA = 1;
  }
  memset(&v194, 0, sizeof(v194));
  memset(&v193, 0, sizeof(v193));
  _4__this = v4->fields.__4__this;
  v190 = (Il2CppObject *)_4__this;
  v191 = v4;
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
      v9 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v9,
        (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor__);
      RouteData = WarBoardAIRoute__CreateRouteData(
                    routeClass,
                    placePieceData,
                    0,
                    (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v9,
                    0);
      v4->fields.__2__current = (Il2CppObject *)RouteData;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C3E508(p__2__current, (int32_t)RouteData, v12, v13);
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
      sub_1C3E508((CGThumbnailListItem_o *)&v4->fields._allRouteList_5__2, (int32_t)allRouteList, v2, v3);
      allRouteList_5__2 = v4->fields._allRouteList_5__2;
      if ( !allRouteList_5__2 )
        goto LABEL_164;
      if ( !allRouteList_5__2->fields._size )
      {
        v14 = 1;
        LOBYTE(v192.fields._list) = 1;
        v182 = j_il2cpp_value_box_0(bool_TypeInfo, &v192, v19, v20, v21, v22, v23, v24);
        v4->fields.__2__current = (Il2CppObject *)v182;
        v155 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C3E508(v155, v182, v183, v184);
        v158 = 2;
        goto LABEL_169;
      }
LABEL_16:
      v26 = sub_1C3E7B0(WarBoardAI___c__DisplayClass11_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v26, 0);
      if ( !v190 )
        goto LABEL_164;
      klass = v190[1].klass;
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
        _9__11_0 = (System_Func_T__TResult__o *)sub_1C3E7B0(System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo);
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
        _9__11_0 = (System_Func_T__TResult__o *)sub_1C3E7B0(System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo);
        System_Func_object__Decimal____ctor(_9__11_0, v40, Method_WarBoardAI___c__Think_b__11_1__, 0);
        v41 = WarBoardAI___c_TypeInfo->static_fields;
        v41->__9__11_1 = (struct System_Func_List_WarBoardAIRoute_RouteData___Decimal__o *)_9__11_0;
        p__9__11_0 = (CGThumbnailListItem_o *)&v41->__9__11_1;
      }
      sub_1C3E508(p__9__11_0, (int32_t)_9__11_0, v36, v37);
LABEL_39:
      v42 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__Decimal_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v28,
                                                                   (System_Func_TSource__TKey__o *)_9__11_0,
                                                                   (const MethodInfo_31297B4 *)Method_System_Linq_Enumerable_OrderByDescending_List_WarBoardAIRoute_RouteData___Decimal___);
      v43 = System_Linq_Enumerable__ToArray_object_(
              v42,
              (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____);
      v44 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v44,
        (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
      v4->fields._availableRouteList_5__4 = (struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *)v44;
      p_availableRouteList_5__4 = (WarBoardAI__Think_d__11_o **)&v4->fields._availableRouteList_5__4;
      sub_1C3E508((CGThumbnailListItem_o *)&v4->fields._availableRouteList_5__4, (int32_t)v44, v46, v47);
      v48 = (System_Collections_Generic_HashSet_T__o *)sub_1C3E7B0(System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo);
      System_Collections_Generic_HashSet_object____ctor(
        v48,
        (const MethodInfo_366C4CC *)Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__);
      if ( !v26 )
        goto LABEL_164;
      object = (Il2CppObject *)v26;
      *(_QWORD *)(v26 + 16) = v48;
      v188 = (System_Collections_Generic_HashSet_T__o **)(v26 + 16);
      sub_1C3E508((CGThumbnailListItem_o *)(v26 + 16), (int32_t)v48, v49, v50);
      if ( !v43 )
        goto LABEL_164;
      max_length = v43->max_length;
      if ( (int)max_length >= 1 )
      {
        v58 = 0;
        pickValue_5__3 = v4->fields._pickValue_5__3;
        v60 = (CGThumbnailListItem_o *)(v26 + 24);
        v186 = (WarBoardAI__Think_d__11_o **)&v4->fields._availableRouteList_5__4;
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
                                                    (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
              if ( !this )
                goto LABEL_164;
              if ( WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)this, 0) )
              {
                v62 = *v188;
                this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_List_object___get_Item(
                                                      (System_Collections_Generic_List_object__o *)v61,
                                                      0,
                                                      (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
                if ( !this || !v62 )
                  goto LABEL_164;
                this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_HashSet_object___Add(
                                                      v62,
                                                      *(Il2CppObject **)&this->fields._pickValue_5__3,
                                                      (const MethodInfo_366D6B0 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__);
                goto LABEL_69;
              }
              v63 = (System_Func_object__bool__o *)v60->klass;
              if ( !v60->klass )
              {
                v63 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo);
                System_Func_object__bool____ctor(v63, object, Method_WarBoardAI___c__DisplayClass11_0__Think_b__6__, 0);
                object[1].monitor = v63;
                p_availableRouteList_5__4 = v186;
                sub_1C3E508(v60, (int32_t)v63, v64, v65);
              }
              this = (WarBoardAI__Think_d__11_o *)BasicHelper__Any_object_(
                                                    (System_Collections_Generic_List_T__o *)v61,
                                                    (System_Func_T__bool__o *)v63,
                                                    (const MethodInfo_30E2E10 *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
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
                  *(const MethodInfo_37B5460 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
              }
              else
              {
                v69 = v66 + 8 * _2__current_low;
                LODWORD(this->fields.__2__current) = _2__current_low + 1;
                *(_QWORD *)(v69 + 32) = v61;
                sub_1C3E508((CGThumbnailListItem_o *)(v69 + 32), (int32_t)v61, (int32_t)v51, v52);
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
      v15 = v191;
      if ( SLODWORD(availableRouteList_5__4->fields.__2__current) <= 0 )
      {
        v14 = 1;
        LOBYTE(v192.fields._list) = 1;
        v179 = j_il2cpp_value_box_0(bool_TypeInfo, &v192, v51, v52, v53, v54, v55, v56);
        v191->fields.__2__current = (Il2CppObject *)v179;
        sub_1C3E508((CGThumbnailListItem_o *)&v191->fields.__2__current, v179, v180, v181);
        v191->fields.__1__state = 3;
      }
      else
      {
LABEL_72:
        v70 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_List_WarBoardAIRoute_RouteData___bool__TypeInfo);
        System_Func_object__bool____ctor(v70, v190, Method_WarBoardAI__Think_b__11_2__, 0);
        v71 = System_Linq_Enumerable__Where_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)availableRouteList_5__4,
                (System_Func_TSource__bool__o *)v70,
                (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_List_WarBoardAIRoute_RouteData____);
        v72 = System_Linq_Enumerable__Take_object_(
                v71,
                v15->fields._pickValue_5__3,
                (const MethodInfo_3137AD4 *)Method_System_Linq_Enumerable_Take_List_WarBoardAIRoute_RouteData____);
        v73 = System_Linq_Enumerable__ToArray_object_(
                v72,
                (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____);
        v15->fields._evalValueSortList_5__5 = (struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *)v73;
        sub_1C3E508((CGThumbnailListItem_o *)&v15->fields._evalValueSortList_5__5, (int32_t)v73, v74, v75);
        evalValueSortList_5__5 = v15->fields._evalValueSortList_5__5;
        if ( !evalValueSortList_5__5 )
          goto LABEL_164;
        v4 = v15;
        if ( !evalValueSortList_5__5->max_length )
        {
          v14 = 1;
          LOBYTE(v192.fields._list) = 1;
          v176 = j_il2cpp_value_box_0(bool_TypeInfo, &v192, v76, v77, v78, v79, v80, v81);
          v15->fields.__2__current = (Il2CppObject *)v176;
          v155 = (CGThumbnailListItem_o *)&v15->fields.__2__current;
          sub_1C3E508((CGThumbnailListItem_o *)&v15->fields.__2__current, v176, v177, v178);
          v158 = 4;
          goto LABEL_169;
        }
LABEL_74:
        v83 = (System_Collections_Generic_List_Decimal__o *)sub_1C3E7B0(System_Collections_Generic_List_Decimal__TypeInfo);
        System_Collections_Generic_List_Decimal____ctor(
          v83,
          (const MethodInfo_37883AC *)Method_System_Collections_Generic_List_Decimal___ctor__);
        v85 = v4->fields._evalValueSortList_5__5;
        if ( !v85 )
          goto LABEL_164;
        v86 = 0;
        v189 = v83;
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
            (System_Collections_Generic_List_Enumerator_T__o *)&v192,
            (System_Collections_Generic_List_object__o *)this,
            (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
          v88 = 0;
          v89 = 0;
          v90 = 0;
          v194 = v192;
          while ( 1 )
          {
            v91 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v194,
                    (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
            if ( !v91 )
              break;
            current = (WarBoardAIRoute_RouteData_o *)v194.fields._current;
            if ( !v194.fields._current )
              sub_1C3E7C0(v91, v92);
            if ( WarBoardAIRoute_RouteData__HasFlag((WarBoardAIRoute_RouteData_o *)v194.fields._current, 4, 0) )
            {
              actionPiece = current->fields.actionPiece;
              if ( actionPiece )
                v89 |= WarBoardPieceData__get_isMaster(actionPiece, 0);
              v90 = 1;
            }
            v88 |= WarBoardAIRoute_RouteData__HasFlag(current, 8, 0);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v194,
            (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
          if ( !v190 )
            goto LABEL_164;
          v95 = v190[1].klass;
          if ( !v95 )
            goto LABEL_164;
          this = (WarBoardAI__Think_d__11_o *)v95->_1.klass;
          if ( !this )
            goto LABEL_164;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v192,
            (System_Collections_Generic_List_object__o *)this,
            (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__GetEnumerator__);
          v96 = 0.0;
          v193 = v192;
          while ( 1 )
          {
            v97 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v193,
                    (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__MoveNext__);
            if ( !v97 )
              break;
            v99 = (WarBoardTacticalTrendEntity_o *)v193.fields._current;
            if ( !v193.fields._current )
              sub_1C3E7C0(v97, v98);
            switch ( HIDWORD(v193.fields._current[1].klass) )
            {
              case 0:
                if ( v86 < SLODWORD(v193.fields._current[1].monitor) )
                {
                  BestMagnification = WarBoardTacticalTrendEntity__GetBestMagnification(
                                        (WarBoardTacticalTrendEntity_o *)v193.fields._current,
                                        0);
                  LowestMagnification = WarBoardTacticalTrendEntity__GetLowestMagnification(v99, 0);
                  value = v99->fields.value;
                  ImmobilityMagnification = WarBoardTacticalTrendEntity__GetBestMagnification(v99, 0)
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
                                              (WarBoardTacticalTrendEntity_o *)v193.fields._current,
                                              0);
LABEL_102:
                  v96 = v96 + ImmobilityMagnification;
                }
                break;
              default:
                continue;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v193,
            (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__Dispose__);
          v4 = v191;
          v104 = BalanceConfig_TypeInfo;
          if ( v96 == 0.0 )
            v105 = 1.0;
          else
            v105 = v96;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v104 = BalanceConfig_TypeInfo;
          }
          v106 = System_Decimal_TypeInfo;
          v107 = v104->static_fields->IsWarBoardAiCalcEvalSum;
          if ( !System_Decimal_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
          this = (WarBoardAI__Think_d__11_o *)System_Decimal__op_Explicit((System_Decimal_o *)v106, v105, 0);
          v108 = v191->fields._evalValueSortList_5__5;
          if ( !v108 )
            goto LABEL_164;
          if ( (unsigned int)v86 >= LODWORD(v108->max_length) )
            goto LABEL_171;
          v109 = this;
          v110 = (System_Collections_Generic_IEnumerable_TSource__o *)v108->m_Items[v86];
          v111 = WarBoardAI___c_TypeInfo;
          v112 = (System_Decimal_o *)method;
          if ( !WarBoardAI___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
            v111 = WarBoardAI___c_TypeInfo;
          }
          v113 = v111->static_fields;
          if ( v107 )
          {
            _9__11_8 = (System_Func_T__TResult__o *)v113->__9__11_8;
            if ( !_9__11_8 )
            {
              if ( !v111->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v111);
                v111 = WarBoardAI___c_TypeInfo;
              }
              v116 = (Il2CppObject *)v111->static_fields->__9;
              _9__11_8 = (System_Func_T__TResult__o *)sub_1C3E7B0(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
              System_Func_object__Decimal____ctor(_9__11_8, v116, Method_WarBoardAI___c__Think_b__11_8__, 0);
              v117 = WarBoardAI___c_TypeInfo->static_fields;
              v117->__9__11_8 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_8;
              sub_1C3E508((CGThumbnailListItem_o *)&v117->__9__11_8, (int32_t)_9__11_8, v118, v119);
              v4 = v191;
            }
            v120 = System_Linq_Enumerable__Sum_object__51607640(
                     (System_Decimal_o *)&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___,
                     v110,
                     (System_Func_TSource__Decimal__o *)_9__11_8,
                     (const MethodInfo_3137858 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
            cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
            if ( !(_DWORD)cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
          }
          else
          {
            _9__11_9 = (System_Func_T__TResult__o *)v113->__9__11_9;
            if ( !_9__11_9 )
            {
              if ( !v111->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v111);
                v111 = WarBoardAI___c_TypeInfo;
              }
              v122 = (Il2CppObject *)v111->static_fields->__9;
              _9__11_9 = (System_Func_T__TResult__o *)sub_1C3E7B0(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
              System_Func_object__Decimal____ctor(_9__11_9, v122, Method_WarBoardAI___c__Think_b__11_9__, 0);
              v123 = WarBoardAI___c_TypeInfo->static_fields;
              v123->__9__11_9 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_9;
              sub_1C3E508((CGThumbnailListItem_o *)&v123->__9__11_9, (int32_t)_9__11_9, v124, v125);
              v4 = v191;
            }
            this = (WarBoardAI__Think_d__11_o *)System_Linq_Enumerable__Sum_object__51607640(
                                                  (System_Decimal_o *)&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___,
                                                  v110,
                                                  (System_Func_TSource__Decimal__o *)_9__11_9,
                                                  (const MethodInfo_3137858 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
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
            v130 = (System_Decimal_o *)method;
            if ( !System_Decimal_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
            v131 = System_Decimal__op_Implicit_65547520(v127, flags, 0);
            v4 = v191;
            v120 = System_Decimal__op_Division(v132, (System_Decimal_o *)v128, v130, (const MethodInfo *)v131);
          }
          this = (WarBoardAI__Think_d__11_o *)System_Decimal__op_Multiply(
                                                cctor_finished,
                                                (System_Decimal_o *)v109,
                                                v112,
                                                (const MethodInfo *)v120);
          v83 = v189;
          if ( v189 )
          {
            items = v189->fields._items;
            ++v189->fields._version;
            if ( items )
            {
              size = v189->fields._size;
              v84 = method;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_Decimal___AddWithResize(
                  v189,
                  (System_Decimal_o *)this,
                  (const MethodInfo_3788C3C *)method);
              }
              else
              {
                v135 = &items->obj + size;
                v189->fields._size = size + 1;
                v135[2].klass = (Il2CppClass *)this;
                v135[2].monitor = (void *)method;
              }
              v85 = v4->fields._evalValueSortList_5__5;
              ++v86;
              if ( v85 )
                continue;
            }
          }
          goto LABEL_164;
        }
        if ( !v190 )
          goto LABEL_164;
        this = (WarBoardAI__Think_d__11_o *)WarBoardAI__GetRandomIndex((WarBoardAI_o *)this, v83, v84);
        if ( (unsigned int)this >= LODWORD(v85->max_length) )
LABEL_171:
          sub_1C3E7C8(this, method);
        v138 = v85->m_Items[(int)this];
        v190[1].monitor = v138;
        sub_1C3E508((CGThumbnailListItem_o *)&v190[1].monitor, (int32_t)v138, v136, v137);
        v139 = WarBoardAI___c_TypeInfo;
        monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v190[1].monitor;
        if ( !WarBoardAI___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo);
          v139 = WarBoardAI___c_TypeInfo;
        }
        _9__11_3 = (System_Func_T__TResult__o *)v139->static_fields->__9__11_3;
        if ( !_9__11_3 )
        {
          if ( !v139->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v139);
            v139 = WarBoardAI___c_TypeInfo;
          }
          v142 = (Il2CppObject *)v139->static_fields->__9;
          _9__11_3 = (System_Func_T__TResult__o *)sub_1C3E7B0(System_Func_WarBoardAIRoute_RouteData__float__TypeInfo);
          System_Func_object__float____ctor(_9__11_3, v142, Method_WarBoardAI___c__Think_b__11_3__, 0);
          v143 = WarBoardAI___c_TypeInfo->static_fields;
          v143->__9__11_3 = (struct System_Func_WarBoardAIRoute_RouteData__float__o *)_9__11_3;
          sub_1C3E508((CGThumbnailListItem_o *)&v143->__9__11_3, (int32_t)_9__11_3, v144, v145);
        }
        System_Linq_Enumerable__Sum_object__51607784(
          monitor,
          (System_Func_TSource__float__o *)_9__11_3,
          (const MethodInfo_31378E8 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____78232792);
        if ( WarBoardAI__CheckWasteRoute(
               v146,
               (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v190[1].monitor,
               v147) )
        {
          v14 = 1;
          LOBYTE(v192.fields._list) = 1;
          v154 = j_il2cpp_value_box_0(bool_TypeInfo, &v192, v148, v149, v150, v151, v152, v153);
          v4->fields.__2__current = (Il2CppObject *)v154;
          v155 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1C3E508(v155, v154, v156, v157);
          v158 = 5;
LABEL_169:
          LODWORD(v155[-1].fields._ThumbnailSpritePath_k__BackingField) = v158;
          return v14;
        }
LABEL_152:
        v159 = (System_Collections_Generic_HashSet_T__o *)sub_1C3E7B0(System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo);
        System_Collections_Generic_HashSet_object____ctor(
          v159,
          (const MethodInfo_366C4CC *)Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__);
        if ( !v190 || (this = (WarBoardAI__Think_d__11_o *)v190[1].monitor) == 0 )
LABEL_164:
          sub_1C3E7C0(this, method);
        v162 = LODWORD(this->fields.__2__current) - 1;
        if ( v162 >= 0 )
        {
          while ( 1 )
          {
            this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)this,
                                                  v162,
                                                  (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
            if ( !this )
              goto LABEL_164;
            method = *(const MethodInfo **)&this->fields._pickValue_5__3;
            v163 = this;
            if ( method )
            {
              if ( !v159 )
                goto LABEL_164;
              if ( !System_Collections_Generic_HashSet_object___Contains(
                      v159,
                      (Il2CppObject *)method,
                      (const MethodInfo_366CBC0 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__)
                && !WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)v163, 0) )
              {
                System_Collections_Generic_HashSet_object___Add(
                  v159,
                  *(Il2CppObject **)&v163->fields._pickValue_5__3,
                  (const MethodInfo_366D6B0 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__);
                this = *(WarBoardAI__Think_d__11_o **)&v163->fields._pickValue_5__3;
                if ( !this )
                  goto LABEL_164;
                WarBoardPieceData__SetPrevAiRoute((WarBoardPieceData_o *)this, (WarBoardAIRoute_RouteData_o *)v163, 0);
              }
            }
            if ( --v162 < 0 )
              break;
            this = (WarBoardAI__Think_d__11_o *)v190[1].monitor;
            if ( !this )
              goto LABEL_164;
          }
        }
        v4->fields._availableRouteList_5__4 = 0;
        sub_1C3E508((CGThumbnailListItem_o *)&v4->fields._availableRouteList_5__4, 0, v160, v161);
        v4->fields._evalValueSortList_5__5 = 0;
        sub_1C3E508((CGThumbnailListItem_o *)&v4->fields._evalValueSortList_5__5, 0, v164, v165);
        LOBYTE(v192.fields._list) = 0;
        v172 = j_il2cpp_value_box_0(bool_TypeInfo, &v192, v166, v167, v168, v169, v170, v171);
        v4->fields.__2__current = (Il2CppObject *)v172;
        v173 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C3E508(v173, v172, v174, v175);
        LODWORD(v173[-1].fields._ThumbnailSpritePath_k__BackingField) = 6;
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

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_WarBoardAI__Think_d__11_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
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

  if ( (byte_4C546C2 & 1) == 0 )
  {
    sub_1C3E564(&WarBoardAI___c_TypeInfo);
    byte_4C546C2 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(WarBoardAI___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardAI___c_TypeInfo->static_fields->__9 = (struct WarBoardAI___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)WarBoardAI___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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

  if ( (byte_4C546C3 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
    sub_1C3E564(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    sub_1C3E564(&Method_WarBoardAI___c__Think_b__11_4__);
    sub_1C3E564(&WarBoardAI___c_TypeInfo);
    byte_4C546C3 = 1;
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
    _9__11_4 = (System_Func_T__TResult__o *)sub_1C3E7B0(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    System_Func_object__Decimal____ctor(_9__11_4, v8, Method_WarBoardAI___c__Think_b__11_4__, 0);
    v9 = WarBoardAI___c_TypeInfo->static_fields;
    v9->__9__11_4 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_4;
    sub_1C3E508((CGThumbnailListItem_o *)&v9->__9__11_4, (int32_t)_9__11_4, v10, v11);
  }
  return System_Linq_Enumerable__Sum_object__51607640(
           (System_Decimal_o *)static_fields,
           (System_Collections_Generic_IEnumerable_TSource__o *)x,
           (System_Func_TSource__Decimal__o *)_9__11_4,
           (const MethodInfo_3137858 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
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

  if ( (byte_4C546C5 & 1) == 0 )
  {
    sub_1C3E564(&System_Decimal_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
    sub_1C3E564(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__);
    sub_1C3E564(&Method_WarBoardAI___c__Think_b__11_5__);
    sub_1C3E564(&WarBoardAI___c_TypeInfo);
    byte_4C546C5 = 1;
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
    _9__11_5 = (System_Func_T__TResult__o *)sub_1C3E7B0(System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo);
    System_Func_object__Decimal____ctor(_9__11_5, v8, Method_WarBoardAI___c__Think_b__11_5__, 0);
    v9 = WarBoardAI___c_TypeInfo->static_fields;
    v9->__9__11_5 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_5;
    sub_1C3E508((CGThumbnailListItem_o *)&v9->__9__11_5, (int32_t)_9__11_5, v10, v11);
  }
  v12 = System_Linq_Enumerable__Sum_object__51607640(
          (System_Decimal_o *)static_fields,
          (System_Collections_Generic_IEnumerable_TSource__o *)x,
          (System_Func_TSource__Decimal__o *)_9__11_5,
          (const MethodInfo_3137858 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
  if ( !x )
    sub_1C3E7C0(v12, v13);
  v14 = v12;
  size = x->fields._size;
  v16 = v13;
  cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
  if ( !(_DWORD)cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  v18 = System_Decimal__op_Implicit_65547520(cctor_finished, size, 0);
  return System_Decimal__op_Division(v19, v14, v16, (const MethodInfo *)v18);
}


float WarBoardAI___c___Think_b__11_3(WarBoardAI___c_o *this, WarBoardAIRoute_RouteData_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
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

  if ( (byte_4C546C4 & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_1C3E564(&System_Decimal_TypeInfo);
    byte_4C546C4 = 1;
  }
  if ( !y )
    sub_1C3E7C0(this, y);
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

  if ( (byte_4C546C6 & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_1C3E564(&System_Decimal_TypeInfo);
    byte_4C546C6 = 1;
  }
  if ( !y )
    sub_1C3E7C0(this, y);
  evalValue = y->fields.evalValue;
  cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
  if ( !(_DWORD)cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo);
  return System_Decimal__op_Explicit(cctor_finished, evalValue, 0);
}


float WarBoardAI___c___Think_b__11_7(WarBoardAI___c_o *this, WarBoardAIRoute_RouteData_o *y, const MethodInfo *method)
{
  if ( !y )
    sub_1C3E7C0(this, 0);
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

  if ( (byte_4C546C7 & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_1C3E564(&System_Decimal_TypeInfo);
    byte_4C546C7 = 1;
  }
  if ( !y )
    sub_1C3E7C0(this, y);
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

  if ( (byte_4C546C8 & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_1C3E564(&System_Decimal_TypeInfo);
    byte_4C546C8 = 1;
  }
  if ( !y )
    sub_1C3E7C0(this, y);
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
  if ( (byte_4C546C9 & 1) == 0 )
  {
    this = (WarBoardAI___c__DisplayClass11_0_o *)sub_1C3E564(&Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__);
    byte_4C546C9 = 1;
  }
  if ( !x || (this = (WarBoardAI___c__DisplayClass11_0_o *)v4->fields.notActionPieceHash) == 0 )
    sub_1C3E7C0(this, x);
  return System_Collections_Generic_HashSet_object___Contains(
           (System_Collections_Generic_HashSet_T__o *)this,
           (Il2CppObject *)x->fields.basePiece,
           (const MethodInfo_366CBC0 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__);
}