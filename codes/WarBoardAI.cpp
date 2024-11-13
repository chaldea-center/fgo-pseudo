void __fastcall WarBoardAI___ctor(WarBoardAI_o *this, WarBoardStageNpcEntity_o *npc, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  WarBoardAIRoute_o *v8; // x21
  const MethodInfo *v9; // x2
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B13C83 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardAIRoute_TypeInfo, npc, method);
    byte_4B13C83 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v8 = (WarBoardAIRoute_o *)sub_1BCAA2C(WarBoardAIRoute_TypeInfo, v5, v6, v7);
  WarBoardAIRoute___ctor(v8, npc, v9);
  this->fields.routeClass = v8;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v8, v10, v11, v12, v13, v14, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardAI__AddRoutePiecePersonalityDic(
        WarBoardAI_o *this,
        int32_t aiId,
        int32_t pieceIndex,
        const MethodInfo *method)
{
  WarBoardAIRoute_o *routeClass; // x0

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_1BCAA3C(0LL, *(_QWORD *)&aiId);
  WarBoardAIRoute__AddPiecePersonalityDic(routeClass, aiId, pieceIndex, method);
}


bool __fastcall WarBoardAI__CheckWasteRoute(
        WarBoardAI_o *this,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *checkRoute,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_Dictionary_int__object__o *v17; // x20
  Il2CppObject *Item; // x0
  __int64 v19; // x1
  int32_t size; // w8
  bool v21; // w24
  IWarBoardAIRouteWaste_c **v22; // x28
  int32_t v23; // w21
  Il2CppObject *v24; // x23
  Il2CppClass *klass; // x8
  Il2CppObject *methods; // x22
  Il2CppClass *v27; // x9
  Il2CppClass *v28; // x8
  Il2CppClass *v29; // x8
  Il2CppClass *v30; // x8
  Il2CppClass *v31; // x8
  IWarBoardAIRouteWaste_c *v32; // x1
  __int64 v33; // x9
  IWarBoardAIRouteWaste_c **p_offset; // x10
  __int64 p_method; // x0
  Il2CppClass *v36; // x8
  IWarBoardAIRouteWaste_c *v37; // x1
  __int64 v38; // x9
  IWarBoardAIRouteWaste_c **v39; // x10
  __int64 v40; // x0
  Il2CppClass *v41; // x8
  IWarBoardAIRouteWaste_c **v42; // x10
  int monitor_high; // w28
  IWarBoardAIRouteWaste_c *v44; // x1
  __int64 v45; // x9
  IWarBoardAIRouteWaste_c **v46; // x29
  int *v47; // x10
  __int64 v48; // x0
  bool v49; // zf
  Il2CppClass *v50; // x8
  int monitor; // w28
  IWarBoardAIRouteWaste_c *v52; // x1
  __int64 v53; // x9
  IWarBoardAIRouteWaste_c **v54; // x10
  __int64 v55; // x0
  Il2CppClass *v56; // x8
  IWarBoardAIRouteWaste_c *v57; // x1
  __int64 v58; // x9
  IWarBoardAIRouteWaste_c **v59; // x10
  __int64 v60; // x0
  int32_t v61; // w8

  if ( (byte_4B13C85 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__ContainsKey__,
      checkRoute,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ctor__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__set_Item__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__TypeInfo, v9, v10);
    sub_1BCA7E0(&IWarBoardAIRouteWaste_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__, v15, v16);
    byte_4B13C85 = 1;
  }
  v17 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__TypeInfo,
                                                                  checkRoute,
                                                                  method,
                                                                  v3);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v17,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ctor__);
  if ( !checkRoute )
    goto LABEL_65;
  size = checkRoute->fields._size;
  v21 = size > 0;
  if ( size >= 1 )
  {
    v22 = &IWarBoardAIRouteWaste_TypeInfo;
    v23 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)checkRoute,
               v23,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
      if ( !Item )
        break;
      v24 = Item;
      if ( Item[3].klass )
      {
        Item = (Il2CppObject *)WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)Item, 0LL);
        if ( ((unsigned __int8)Item & 1) == 0 )
        {
          v19 = (unsigned int)(v23 - 1);
          if ( v23 < 1 )
            goto LABEL_15;
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)checkRoute,
                   v19,
                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
          if ( !Item )
            goto LABEL_15;
          klass = Item[3].klass;
          methods = Item;
          if ( !klass )
            break;
          v27 = v24[3].klass;
          if ( !v27 )
            break;
          if ( *(&klass->_1.byval_arg.bits + 1) != *(&v27->_1.byval_arg.bits + 1)
            || (Item = (Il2CppObject *)WarBoardAIRoute_RouteData__get_notAction(
                                         (WarBoardAIRoute_RouteData_o *)Item,
                                         0LL),
                ((unsigned __int8)Item & 1) != 0) )
          {
LABEL_15:
            v28 = v24[3].klass;
            if ( !v28 || !v17 )
              break;
            Item = (Il2CppObject *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                     v17,
                                     HIDWORD(v28->_1.namespaze),
                                     (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__ContainsKey__);
            if ( ((unsigned __int8)Item & 1) != 0 )
            {
              methods = 0LL;
            }
            else
            {
              v29 = v24[3].klass;
              if ( !v29 )
                break;
              methods = (Il2CppObject *)v29->_1.methods;
            }
          }
          v30 = v24[3].klass;
          if ( !v30 || !v17 )
            break;
          System_Collections_Generic_Dictionary_int__object___set_Item(
            v17,
            HIDWORD(v30->_1.namespaze),
            v24,
            (const MethodInfo_3205ED0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__set_Item__);
          if ( methods && ((__int64)v24[1].klass & 0x10000002) == 0 )
          {
            v31 = methods->klass;
            v32 = *v22;
            v33 = *(unsigned __int16 *)(&methods->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&methods->klass->_2.bitflags2 + 3) )
            {
              p_offset = (IWarBoardAIRouteWaste_c **)&v31->_1.interfaceOffsets->offset;
              while ( *(p_offset - 1) != v32 )
              {
                --v33;
                p_offset += 2;
                if ( !v33 )
                  goto LABEL_29;
              }
              p_method = (__int64)&v31->vtable[*(_DWORD *)p_offset + 2].method;
            }
            else
            {
LABEL_29:
              p_method = sub_1C1C7C0(methods, v32, 2LL);
            }
            if ( ((*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))p_method)(methods, *(_QWORD *)(p_method + 8)) & 2) == 0 )
            {
              v36 = methods->klass;
              v37 = *v22;
              v38 = *(unsigned __int16 *)(&methods->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&methods->klass->_2.bitflags2 + 3) )
              {
                v39 = (IWarBoardAIRouteWaste_c **)&v36->_1.interfaceOffsets->offset;
                while ( *(v39 - 1) != v37 )
                {
                  --v38;
                  v39 += 2;
                  if ( !v38 )
                    goto LABEL_36;
                }
                v40 = (__int64)&v36->vtable[*(_DWORD *)v39 + 2].method;
              }
              else
              {
LABEL_36:
                v40 = sub_1C1C7C0(methods, v37, 2LL);
              }
              if ( ((*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v40)(methods, *(_QWORD *)(v40 + 8)) & 0x10000000) == 0 )
              {
                v41 = methods->klass;
                v42 = v22;
                monitor_high = HIDWORD(v24[1].monitor);
                v44 = *v42;
                v45 = *(unsigned __int16 *)(&methods->klass->_2.bitflags2 + 3);
                v46 = v42;
                if ( *(_WORD *)(&methods->klass->_2.bitflags2 + 3) )
                {
                  v47 = &v41->_1.interfaceOffsets->offset;
                  while ( *((IWarBoardAIRouteWaste_c **)v47 - 1) != v44 )
                  {
                    --v45;
                    v47 += 4;
                    if ( !v45 )
                      goto LABEL_43;
                  }
                  v48 = (__int64)&v41->vtable[*v47].method;
                }
                else
                {
LABEL_43:
                  v48 = sub_1C1C7C0(methods, v44, 0LL);
                }
                v49 = monitor_high == (*(unsigned int (__fastcall **)(Il2CppObject *, _QWORD))v48)(
                                        methods,
                                        *(_QWORD *)(v48 + 8));
                v22 = v46;
                if ( v49 )
                {
                  v50 = methods->klass;
                  monitor = (int)v24[1].monitor;
                  v52 = *v46;
                  v53 = *(unsigned __int16 *)(&methods->klass->_2.bitflags2 + 3);
                  if ( *(_WORD *)(&methods->klass->_2.bitflags2 + 3) )
                  {
                    v54 = (IWarBoardAIRouteWaste_c **)&v50->_1.interfaceOffsets->offset;
                    while ( *(v54 - 1) != v52 )
                    {
                      --v53;
                      v54 += 2;
                      if ( !v53 )
                        goto LABEL_51;
                    }
                    v55 = (__int64)&v50->vtable[*(_DWORD *)v54 + 1].method;
                  }
                  else
                  {
LABEL_51:
                    v55 = sub_1C1C7C0(methods, v52, 1LL);
                  }
                  v49 = monitor == (*(unsigned int (__fastcall **)(Il2CppObject *, _QWORD))v55)(
                                     methods,
                                     *(_QWORD *)(v55 + 8));
                  v22 = v46;
                  if ( v49 && !WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)v24, 0LL) )
                  {
                    v56 = methods->klass;
                    v57 = *v46;
                    v58 = *(unsigned __int16 *)(&methods->klass->_2.bitflags2 + 3);
                    if ( *(_WORD *)(&methods->klass->_2.bitflags2 + 3) )
                    {
                      v59 = (IWarBoardAIRouteWaste_c **)&v56->_1.interfaceOffsets->offset;
                      while ( *(v59 - 1) != v57 )
                      {
                        --v58;
                        v59 += 2;
                        if ( !v58 )
                          goto LABEL_60;
                      }
                      v60 = (__int64)&v56->vtable[*(_DWORD *)v59 + 3].method;
                    }
                    else
                    {
LABEL_60:
                      v60 = sub_1C1C7C0(methods, v57, 3LL);
                    }
                    if ( ((*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v60)(methods, *(_QWORD *)(v60 + 8)) & 1) == 0 )
                      return v21;
                  }
                }
              }
            }
          }
        }
      }
      v61 = checkRoute->fields._size;
      v21 = ++v23 < v61;
      if ( v23 >= v61 )
        return v21;
    }
LABEL_65:
    sub_1BCAA3C(Item, v19);
  }
  return v21;
}


void __fastcall WarBoardAI__Clear(WarBoardAI_o *this, const MethodInfo *method)
{
  WarBoardAIRoute_o *routeClass; // x0

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_1BCAA3C(0LL, method);
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
  __int64 v9; // x2
  Il2CppObject *v10; // x21
  Il2CppObject *v11; // x20
  Il2CppObject *v12; // x0
  int32_t v14; // [xsp+Ch] [xbp-44h] BYREF
  int32_t v15; // [xsp+18h] [xbp-38h] BYREF
  int32_t v16; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4B13C88 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&forceId, *(_QWORD *)&groupId);
    sub_1BCA7E0(&StringLiteral_25288/*"{0},{1},{2}"*/, v8, v9);
    byte_4B13C88 = 1;
  }
  v16 = forceId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v15 = groupId;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
  v14 = index;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return System_String__Format_62415660((System_String_o *)StringLiteral_25288/*"{0},{1},{2}"*/, v10, v11, v12, 0LL);
}


bool __fastcall WarBoardAI__Execute(WarBoardAI_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_object__o *executeRoute; // x0
  int32_t routeIndex; // w1
  System_Collections_Generic_List_object__o *Item; // x0
  const MethodInfo *v13; // x1
  System_Collections_Generic_List_object__o *v14; // x8
  WarBoardPieceData_o *monitor; // x20
  int32_t v16; // w8
  int32_t v17; // w8
  bool v18; // w22
  WarBoardManager_o *v20; // x21
  int32_t version; // w22
  int32_t v22; // w21
  WarBoardPieceData_o *Piece_36054544; // x0
  System_Int32_array *v24; // x21
  WarBoardManager_o *v25; // x21
  int32_t v26; // w8
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v27; // x9

  if ( (byte_4B13C86 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6, v7);
    sub_1BCA7E0(&WarBoardAIManager_TypeInfo, v8, v9);
    byte_4B13C86 = 1;
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
                                                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
  if ( !Item )
    goto LABEL_40;
  v14 = Item;
  Item = (System_Collections_Generic_List_object__o *)this->fields.executeRoute;
  if ( !Item )
    goto LABEL_40;
  monitor = (WarBoardPieceData_o *)v14[1].monitor;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                        Item,
                                                        this->fields.routeIndex,
                                                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
  if ( !Item )
    goto LABEL_40;
  Item = (System_Collections_Generic_List_object__o *)WarBoardAIRoute_RouteData__get_notAction(
                                                        (WarBoardAIRoute_RouteData_o *)Item,
                                                        0LL);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    v16 = this->fields.routeIndex;
    this->fields.isEndPhase = 0;
    v17 = v16 + 1;
    this->fields.routeIndex = v17;
    goto LABEL_37;
  }
  Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this->fields.executeRoute )
    goto LABEL_40;
  v20 = (WarBoardManager_o *)Item;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)this->fields.executeRoute,
                                                        this->fields.routeIndex,
                                                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
  if ( !Item )
    goto LABEL_40;
  version = Item->fields._version;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v13);
  Item = (System_Collections_Generic_List_object__o *)WarBoardAIManager__GetSquare(version, v13);
  if ( !v20 )
    goto LABEL_40;
  WarBoardManager__CheckSelectSquare(v20, monitor, (WarBoardSquareData_o *)Item, 1, 0LL);
  Item = (System_Collections_Generic_List_object__o *)this->fields.executeRoute;
  if ( !Item )
    goto LABEL_40;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                        Item,
                                                        this->fields.routeIndex,
                                                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
                                                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
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
                                                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
    if ( !Item )
      goto LABEL_40;
    v22 = Item->fields._version;
    Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Item )
      goto LABEL_40;
    Item = (System_Collections_Generic_List_object__o *)Item[11].klass;
    if ( !Item )
      goto LABEL_40;
    Piece_36054544 = WarBoardData__GetPiece_36054544((WarBoardData_o *)Item, v22, 0LL);
    if ( Piece_36054544 )
    {
      if ( WarBoardPieceData__get_isServant(Piece_36054544, 0LL) )
      {
        Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( Item )
        {
          Item = (System_Collections_Generic_List_object__o *)Item[11].klass;
          if ( Item )
          {
            v24 = WarBoardData__GetInRangeSquareIndecies((WarBoardData_o *)Item, v22, 1, 0, 0LL);
            Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
            if ( Item )
            {
              WarBoardManager__DispPartyBuff((WarBoardManager_o *)Item, v24, 0LL);
              goto LABEL_33;
            }
          }
        }
LABEL_40:
        sub_1BCAA3C(Item, v13);
      }
    }
  }
LABEL_33:
  Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this->fields.executeRoute )
    goto LABEL_40;
  v25 = (WarBoardManager_o *)Item;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)this->fields.executeRoute,
                                                        this->fields.routeIndex,
                                                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
  if ( !Item || !v25 )
    goto LABEL_40;
  v18 = 1;
  Item = (System_Collections_Generic_List_object__o *)WarBoardManager__PieceAction_36195828(
                                                        v25,
                                                        monitor,
                                                        Item->fields._version,
                                                        0LL,
                                                        1,
                                                        0LL);
  v26 = this->fields.routeIndex;
  this->fields.isEndPhase = (unsigned __int8)Item & 1;
  v17 = v26 + 1;
  this->fields.routeIndex = v17;
  if ( ((unsigned __int8)Item & 1) != 0 )
    return v18;
LABEL_37:
  v27 = this->fields.executeRoute;
  if ( !v27 )
    goto LABEL_40;
  v18 = 1;
  if ( v27->fields._size <= v17 )
    this->fields.isEndRoute = 1;
  return v18;
}


int32_t __fastcall WarBoardAI__GetRandomIndex(
        WarBoardAI_o *this,
        System_Collections_Generic_List_Decimal__o *weightTable,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  WarBoardAI___c_c *v19; // x0
  struct WarBoardAI___c_StaticFields *static_fields; // x8
  System_Func_Decimal__Decimal__o *_9__14_0; // x20
  Il2CppObject *v22; // x21
  struct WarBoardAI___c_StaticFields *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  const MethodInfo *v30; // x1
  __int64 v31; // x2
  System_Decimal_o *v32; // x20
  const MethodInfo *v33; // x21
  System_Decimal_o *cctor_finished; // x8
  const MethodInfo *v35; // x1
  System_Decimal_o *v36; // x20
  const MethodInfo *v37; // x21
  float v38; // s0
  float v39; // s0
  System_Decimal_o *v40; // x8
  System_Decimal_o *v41; // x0
  System_Decimal_o *v42; // x1
  System_Decimal_o *size; // x8
  MethodInfo *v44; // x21
  System_Decimal_o *v45; // x22
  int32_t v46; // w20
  System_Decimal_o *v47; // x1
  System_Decimal_o *Item; // x23
  System_Decimal_o *v49; // x24
  System_Decimal_o *v50; // x8
  __int64 v51; // x1
  System_Decimal_o *v52; // x23
  System_Decimal_o *v53; // x8
  System_Decimal_o *v54; // x0
  System_Decimal_o *v55; // x1

  if ( (byte_4B13C87 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Decimal_TypeInfo, weightTable, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Sum_Decimal___, v5, v6);
    sub_1BCA7E0(&System_Func_Decimal__Decimal__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Decimal__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Decimal__get_Item__, v11, v12);
    sub_1BCA7E0(&System_Math_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_WarBoardAI___c__GetRandomIndex_b__14_0__, v15, v16);
    sub_1BCA7E0(&WarBoardAI___c_TypeInfo, v17, v18);
    byte_4B13C87 = 1;
  }
  v19 = WarBoardAI___c_TypeInfo;
  if ( !WarBoardAI___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo, weightTable);
    v19 = WarBoardAI___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__14_0 = static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19, weightTable);
      v19 = WarBoardAI___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__14_0 = (System_Func_Decimal__Decimal__o *)sub_1BCAA2C(
                                                    System_Func_Decimal__Decimal__TypeInfo,
                                                    weightTable,
                                                    method,
                                                    v3);
    System_Func_Decimal__Decimal____ctor(_9__14_0, v22, Method_WarBoardAI___c__GetRandomIndex_b__14_0__, 0LL);
    v23 = WarBoardAI___c_TypeInfo->static_fields;
    v23->__9__14_0 = _9__14_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&v23->__9__14_0, (int64_t)_9__14_0, v24, v25, v26, v27, v28, v29);
  }
  v32 = System_Linq_Enumerable__Sum_Decimal_(
          (System_Decimal_o *)static_fields,
          (System_Collections_Generic_IEnumerable_TSource__o *)weightTable,
          (System_Func_TSource__Decimal__o *)_9__14_0,
          (const MethodInfo_2F4A4F8 *)Method_System_Linq_Enumerable_Sum_Decimal___);
  v33 = v30;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v30);
  if ( !byte_4B13CDB )
  {
    sub_1BCA7E0(&System_Decimal_TypeInfo, v30, v31);
    byte_4B13CDB = 1;
  }
  cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
  if ( !(_DWORD)cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, v30);
  v36 = System_Decimal__Floor(cctor_finished, v32, v33);
  v37 = v35;
  if ( !System_Decimal_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, v35);
  v38 = System_Decimal__op_Explicit_63609544(v36, v37);
  v39 = UnityEngine_Random__Range(0.0, v38, 0LL);
  v41 = System_Decimal__op_Explicit(v40, v39, 0LL);
  if ( !weightTable )
    sub_1BCAA3C(v41, v42);
  size = (System_Decimal_o *)(unsigned int)weightTable->fields._size;
  if ( (int)size < 1 )
    return 0;
  v44 = (MethodInfo *)v41;
  v45 = v42;
  v46 = 0;
  while ( 1 )
  {
    Item = System_Collections_Generic_List_Decimal___get_Item(
             size,
             weightTable,
             v46,
             (const MethodInfo_357510C *)Method_System_Collections_Generic_List_Decimal__get_Item__);
    v49 = v47;
    if ( !System_Decimal_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, v47);
    if ( System_Decimal__op_GreaterThanOrEqual(Item, v49, v44) )
      break;
    v52 = System_Collections_Generic_List_Decimal___get_Item(
            v50,
            weightTable,
            v46,
            (const MethodInfo_357510C *)Method_System_Collections_Generic_List_Decimal__get_Item__);
    v53 = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
    if ( !(_DWORD)v53 )
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, v51);
    v54 = System_Decimal__op_Subtraction(v53, (System_Decimal_o *)v44, v45, (const MethodInfo *)v52);
    size = (System_Decimal_o *)(unsigned int)weightTable->fields._size;
    ++v46;
    v44 = (MethodInfo *)v54;
    v45 = v55;
    if ( v46 >= (int)size )
      return 0;
  }
  return v46;
}


System_Collections_IEnumerator_o *__fastcall WarBoardAI__Think(WarBoardAI_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B13C84 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardAI__Think_d__11_TypeInfo, method, v2);
    byte_4B13C84 = 1;
  }
  v5 = sub_1BCAA2C(WarBoardAI__Think_d__11_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardAI__UpdateRoutePiecePersonalityDic(
        WarBoardAI_o *this,
        int32_t aiId,
        int32_t pieceIndex,
        const MethodInfo *method)
{
  WarBoardAIRoute_o *routeClass; // x0

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_1BCAA3C(0LL, *(_QWORD *)&aiId);
  WarBoardAIRoute__UpdatePiecePersonalityDic(routeClass, aiId, pieceIndex, method);
}


bool __fastcall WarBoardAI___Think_b__11_2(
        WarBoardAI_o *this,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  WarBoardAI___c_c *v12; // x0
  struct WarBoardAIRoute_o *routeClass; // x23
  System_Func_T__TResult__o *_9__11_7; // x20
  Il2CppObject *v15; // x21
  struct WarBoardAI___c_StaticFields *static_fields; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x0
  __int64 v24; // x1
  float v25; // s0
  struct WarBoardStageNpcEntity_o *npcData; // x8

  if ( (byte_4B13C89 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____76884528, x, method);
    sub_1BCA7E0(&System_Func_WarBoardAIRoute_RouteData__float__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_WarBoardAI___c__Think_b__11_7__, v8, v9);
    sub_1BCA7E0(&WarBoardAI___c_TypeInfo, v10, v11);
    byte_4B13C89 = 1;
  }
  v12 = WarBoardAI___c_TypeInfo;
  routeClass = this->fields.routeClass;
  if ( !WarBoardAI___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo, x);
    v12 = WarBoardAI___c_TypeInfo;
  }
  _9__11_7 = (System_Func_T__TResult__o *)v12->static_fields->__9__11_7;
  if ( !_9__11_7 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12, x);
      v12 = WarBoardAI___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__11_7 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                              System_Func_WarBoardAIRoute_RouteData__float__TypeInfo,
                                              x,
                                              method,
                                              v3);
    System_Func_object__float____ctor(_9__11_7, v15, Method_WarBoardAI___c__Think_b__11_7__, 0LL);
    static_fields = WarBoardAI___c_TypeInfo->static_fields;
    static_fields->__9__11_7 = (struct System_Func_WarBoardAIRoute_RouteData__float__o *)_9__11_7;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__11_7,
      (int64_t)_9__11_7,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  v25 = System_Linq_Enumerable__Sum_object__49587664(
          (System_Collections_Generic_IEnumerable_TSource__o *)x,
          (System_Func_TSource__float__o *)_9__11_7,
          (const MethodInfo_2F4A5D0 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____76884528);
  if ( !routeClass || (npcData = routeClass->fields.npcData) == 0LL )
    sub_1BCAA3C(v23, v24);
  return (float)((float)npcData->fields.lowerThinkingValue / 100.0) <= v25;
}


int32_t __fastcall WarBoardAI__get_ForceId(WarBoardAI_o *this, const MethodInfo *method)
{
  struct WarBoardAIRoute_o *routeClass; // x8

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_1BCAA3C(this, method);
  return routeClass->fields.forceId;
}


int32_t __fastcall WarBoardAI__get_GroupId(WarBoardAI_o *this, const MethodInfo *method)
{
  struct WarBoardAIRoute_o *routeClass; // x8

  routeClass = this->fields.routeClass;
  if ( !routeClass )
    sub_1BCAA3C(this, method);
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
  __int64 v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  WarBoardAI__Think_d__11_o *v8; // x26
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x1
  __int64 v100; // x2
  struct WarBoardAI_o *_4__this; // x12
  struct WarBoardAI_o *v102; // x19
  __int64 v103; // x2
  __int64 v104; // x3
  WarBoardAIRoute_o *routeClass; // x20
  System_Collections_Generic_Dictionary_int__uint__o *placePieceData; // x21
  System_Collections_Generic_List_object__o *v107; // x22
  const MethodInfo *v108; // x4
  System_Collections_IEnumerator_o *RouteData; // x0
  PartyOrganizationUtility_o *p__2__current; // x26
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  bool v117; // w20
  WarBoardAI__Think_d__11_o *v118; // x19
  WarBoardAI__Think_d__11_o *availableRouteList_5__4; // x26
  struct WarBoardAIRoute_o *v120; // x8
  int64_t allRouteList; // x1
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *allRouteList_5__2; // x8
  __int64 v123; // x27
  __int64 v124; // x2
  __int64 v125; // x3
  Il2CppClass *klass; // x8
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *v127; // x22
  int32_t namespaze_high; // w8
  BalanceConfig_c *v129; // x8
  WarBoardAI___c_c *v130; // x0
  _BOOL4 IsWarBoardAiCalcEvalSum; // w21
  struct WarBoardAI___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__11_0; // x23
  Il2CppObject *v134; // x24
  int64_t v135; // x2
  int32_t v136; // w3
  System_String_o *v137; // x4
  BattleSetupInfo_o *v138; // x5
  FollowerInfo_o *v139; // x6
  PartyListViewItem_o *v140; // x7
  struct WarBoardAI___c_StaticFields *v141; // x0
  PartyOrganizationUtility_o *p__9__11_0; // x0
  Il2CppObject *v143; // x24
  struct WarBoardAI___c_StaticFields *v144; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v145; // x0
  System_Object_array *v146; // x22
  __int64 v147; // x1
  __int64 v148; // x2
  __int64 v149; // x3
  System_Collections_Generic_List_object__o *v150; // x24
  WarBoardAI__Think_d__11_o **p_availableRouteList_5__4; // x23
  int64_t v152; // x2
  int32_t v153; // w3
  System_String_o *v154; // x4
  BattleSetupInfo_o *v155; // x5
  FollowerInfo_o *v156; // x6
  PartyListViewItem_o *v157; // x7
  __int64 v158; // x1
  __int64 v159; // x2
  __int64 v160; // x3
  System_Collections_Generic_HashSet_T__o *v161; // x25
  int64_t v162; // x2
  int32_t v163; // w3
  System_String_o *v164; // x4
  BattleSetupInfo_o *v165; // x5
  FollowerInfo_o *v166; // x6
  PartyListViewItem_o *v167; // x7
  __int64 v168; // x8
  unsigned __int64 v169; // x20
  int32_t pickValue_5__3; // w28
  PartyOrganizationUtility_o *v171; // x25
  System_Collections_ICollection_o *v172; // x26
  System_String_o *v173; // x4
  BattleSetupInfo_o *v174; // x5
  FollowerInfo_o *v175; // x6
  PartyListViewItem_o *v176; // x7
  __int64 v177; // x1
  __int64 v178; // x2
  __int64 v179; // x3
  System_Collections_Generic_HashSet_T__o *v180; // x27
  System_Func_object__bool__o *v181; // x27
  int64_t v182; // x2
  int32_t v183; // w3
  System_String_o *v184; // x4
  BattleSetupInfo_o *v185; // x5
  FollowerInfo_o *v186; // x6
  PartyListViewItem_o *v187; // x7
  __int64 v188; // x8
  _QWORD *v189; // x9
  __int64 _2__current_low; // x10
  __int64 v191; // x8
  System_Func_object__bool__o *v192; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v193; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v194; // x0
  System_Object_array *v195; // x0
  int64_t v196; // x2
  int32_t v197; // w3
  System_String_o *v198; // x4
  BattleSetupInfo_o *v199; // x5
  FollowerInfo_o *v200; // x6
  PartyListViewItem_o *v201; // x7
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *evalValueSortList_5__5; // x8
  System_Collections_Generic_List_Decimal__o *v203; // x21
  const MethodInfo *v204; // x2
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *v205; // x22
  int v206; // w29
  int max_length; // w8
  int v208; // w24
  int v209; // w25
  char v210; // w26
  _BOOL8 v211; // x0
  __int64 v212; // x1
  WarBoardAIRoute_RouteData_o *current; // x22
  WarBoardPieceData_o *actionPiece; // x0
  Il2CppClass *v215; // x8
  float v216; // s12
  _BOOL8 v217; // x0
  __int64 v218; // x1
  WarBoardTacticalTrendEntity_o *v219; // x22
  float BestMagnification; // s8
  float LowestMagnification; // s0
  int value; // w23
  float ImmobilityMagnification; // s0
  __int64 v224; // x1
  BalanceConfig_c *v225; // x0
  float v226; // s8
  System_Decimal_c *v227; // x8
  _BOOL4 v228; // w25
  __int64 v229; // x2
  __int64 v230; // x3
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *v231; // x8
  WarBoardAI__Think_d__11_o *v232; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v233; // x24
  WarBoardAI___c_c *v234; // x0
  System_Decimal_o *v235; // x23
  struct WarBoardAI___c_StaticFields *v236; // x8
  System_Func_T__TResult__o *_9__11_8; // x25
  System_Func_T__TResult__o *_9__11_9; // x25
  Il2CppObject *v239; // x26
  struct WarBoardAI___c_StaticFields *v240; // x0
  int64_t v241; // x2
  int32_t v242; // w3
  System_String_o *v243; // x4
  BattleSetupInfo_o *v244; // x5
  FollowerInfo_o *v245; // x6
  PartyListViewItem_o *v246; // x7
  __int64 v247; // x1
  System_Decimal_o *v248; // x24
  System_Decimal_o *cctor_finished; // x8
  Il2CppObject *v250; // x26
  struct WarBoardAI___c_StaticFields *v251; // x0
  int64_t v252; // x2
  int32_t v253; // w3
  System_String_o *v254; // x4
  BattleSetupInfo_o *v255; // x5
  FollowerInfo_o *v256; // x6
  PartyListViewItem_o *v257; // x7
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *v258; // x8
  System_Decimal_o *v259; // x8
  WarBoardAI__Think_d__11_o *v260; // x24
  int32_t flags; // w26
  System_Decimal_o *v262; // x25
  System_Decimal_o *v263; // x0
  System_Decimal_o *v264; // x8
  struct System_Decimal_array *items; // x9
  __int64 size; // x11
  Il2CppObject *v267; // x9
  int64_t v268; // x2
  int32_t v269; // w3
  System_String_o *v270; // x4
  BattleSetupInfo_o *v271; // x5
  FollowerInfo_o *v272; // x6
  PartyListViewItem_o *v273; // x7
  int64_t v274; // x1
  __int64 v275; // x1
  __int64 v276; // x2
  __int64 v277; // x3
  WarBoardAI___c_c *v278; // x0
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x22
  System_Func_T__TResult__o *_9__11_3; // x23
  Il2CppObject *v281; // x24
  struct WarBoardAI___c_StaticFields *v282; // x0
  int64_t v283; // x2
  int32_t v284; // w3
  System_String_o *v285; // x4
  BattleSetupInfo_o *v286; // x5
  FollowerInfo_o *v287; // x6
  PartyListViewItem_o *v288; // x7
  WarBoardAI_o *v289; // x0
  const MethodInfo *v290; // x2
  int64_t v291; // x0
  PartyOrganizationUtility_o *v292; // x26
  int64_t v293; // x2
  int32_t v294; // w3
  System_String_o *v295; // x4
  BattleSetupInfo_o *v296; // x5
  FollowerInfo_o *v297; // x6
  PartyListViewItem_o *v298; // x7
  int v299; // w8
  System_Collections_Generic_HashSet_T__o *v300; // x21
  int64_t v301; // x2
  int32_t v302; // w3
  System_String_o *v303; // x4
  BattleSetupInfo_o *v304; // x5
  FollowerInfo_o *v305; // x6
  PartyListViewItem_o *v306; // x7
  int32_t v307; // w22
  WarBoardAI__Think_d__11_o *v308; // x23
  int64_t v309; // x2
  int32_t v310; // w3
  System_String_o *v311; // x4
  BattleSetupInfo_o *v312; // x5
  FollowerInfo_o *v313; // x6
  PartyListViewItem_o *v314; // x7
  int64_t v315; // x0
  PartyOrganizationUtility_o *v316; // x26
  int64_t v317; // x2
  int32_t v318; // w3
  System_String_o *v319; // x4
  BattleSetupInfo_o *v320; // x5
  FollowerInfo_o *v321; // x6
  PartyListViewItem_o *v322; // x7
  int64_t v323; // x0
  int64_t v324; // x2
  int32_t v325; // w3
  System_String_o *v326; // x4
  BattleSetupInfo_o *v327; // x5
  FollowerInfo_o *v328; // x6
  PartyListViewItem_o *v329; // x7
  int64_t v330; // x0
  int64_t v331; // x2
  int32_t v332; // w3
  System_String_o *v333; // x4
  BattleSetupInfo_o *v334; // x5
  FollowerInfo_o *v335; // x6
  PartyListViewItem_o *v336; // x7
  int64_t v337; // x0
  int64_t v338; // x2
  int32_t v339; // w3
  System_String_o *v340; // x4
  BattleSetupInfo_o *v341; // x5
  FollowerInfo_o *v342; // x6
  PartyListViewItem_o *v343; // x7
  WarBoardAI__Think_d__11_o **v345; // [xsp+10h] [xbp-110h]
  Il2CppObject *object; // [xsp+18h] [xbp-108h]
  System_Collections_Generic_HashSet_T__o **v347; // [xsp+20h] [xbp-100h]
  System_Collections_Generic_List_Decimal__o *v348; // [xsp+20h] [xbp-100h]
  Il2CppObject *v349; // [xsp+28h] [xbp-F8h]
  WarBoardAI__Think_d__11_o *v350; // [xsp+30h] [xbp-F0h]
  System_Collections_Generic_List_Enumerator_object__o v351; // [xsp+38h] [xbp-E8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v352; // [xsp+50h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v353; // [xsp+70h] [xbp-B0h] BYREF

  v8 = this;
  if ( (byte_4B13C92 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___, v9, v10);
    sub_1BCA7E0(&bool_TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Decimal_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderByDescending_List_WarBoardAIRoute_RouteData___Decimal___, v15, v16);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____76884528, v17, v18);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___, v19, v20);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Take_List_WarBoardAIRoute_RouteData____, v21, v22);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____, v23, v24);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_List_WarBoardAIRoute_RouteData____, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__Dispose__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__MoveNext__, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__, v35, v36);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__get_Current__, v37, v38);
    sub_1BCA7E0(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v39, v40);
    sub_1BCA7E0(&System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo, v41, v42);
    sub_1BCA7E0(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo, v43, v44);
    sub_1BCA7E0(&System_Func_WarBoardAIRoute_RouteData__float__TypeInfo, v45, v46);
    sub_1BCA7E0(&System_Func_List_WarBoardAIRoute_RouteData___bool__TypeInfo, v47, v48);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__, v49, v50);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__, v51, v52);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__, v53, v54);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo, v55, v56);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Decimal__Add__, v57, v58);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__, v59, v60);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__, v61, v62);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__GetEnumerator__, v63, v64);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor__, v65, v66);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__, v67, v68);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Decimal___ctor__, v69, v70);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___get_Count__, v71, v72);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__, v73, v74);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__, v75, v76);
    sub_1BCA7E0(&System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo, v77, v78);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo, v79, v80);
    sub_1BCA7E0(&System_Collections_Generic_List_Decimal__TypeInfo, v81, v82);
    sub_1BCA7E0(&Method_WarBoardAI___c__Think_b__11_0__, v83, v84);
    sub_1BCA7E0(&Method_WarBoardAI___c__Think_b__11_1__, v85, v86);
    sub_1BCA7E0(&Method_WarBoardAI___c__Think_b__11_3__, v87, v88);
    sub_1BCA7E0(&Method_WarBoardAI___c__Think_b__11_8__, v89, v90);
    sub_1BCA7E0(&Method_WarBoardAI___c__Think_b__11_9__, v91, v92);
    sub_1BCA7E0(&Method_WarBoardAI___c__DisplayClass11_0__Think_b__6__, v93, v94);
    sub_1BCA7E0(&WarBoardAI___c__DisplayClass11_0_TypeInfo, v95, v96);
    sub_1BCA7E0(&WarBoardAI___c_TypeInfo, v97, v98);
    this = (WarBoardAI__Think_d__11_o *)sub_1BCA7E0(&Method_WarBoardAI__Think_b__11_2__, v99, v100);
    byte_4B13C92 = 1;
  }
  memset(&v353, 0, sizeof(v353));
  memset(&v352, 0, sizeof(v352));
  _4__this = v8->fields.__4__this;
  v349 = (Il2CppObject *)_4__this;
  v350 = v8;
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
      v102 = _4__this;
      WarBoardAIRoute__BeforeCreateRouteData((WarBoardAIRoute_o *)this, method);
      routeClass = v102->fields.routeClass;
      if ( !routeClass )
        goto LABEL_164;
      placePieceData = routeClass->fields.placePieceData;
      v107 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                            System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo,
                                                            method,
                                                            v103,
                                                            v104);
      System_Collections_Generic_List_object____ctor(
        v107,
        (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor__);
      RouteData = WarBoardAIRoute__CreateRouteData(
                    routeClass,
                    placePieceData,
                    0,
                    (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v107,
                    v108);
      v8->fields.__2__current = (Il2CppObject *)RouteData;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BCA784(p__2__current, (int64_t)RouteData, v111, v112, v113, v114, v115, v116);
      v117 = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return v117;
    case 1:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_164;
      v120 = _4__this->fields.routeClass;
      if ( !v120 )
        goto LABEL_164;
      allRouteList = (int64_t)v120->fields.allRouteList;
      v8->fields._allRouteList_5__2 = (struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *)allRouteList;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v8->fields._allRouteList_5__2,
        allRouteList,
        (int64_t)v2,
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
        v117 = 1;
        LOBYTE(v351.fields._list) = 1;
        v337 = j_il2cpp_value_box_0(bool_TypeInfo, &v351);
        v8->fields.__2__current = (Il2CppObject *)v337;
        v292 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1BCA784(v292, v337, v338, v339, v340, v341, v342, v343);
        v299 = 2;
        goto LABEL_169;
      }
LABEL_16:
      v123 = sub_1BCAA2C(WarBoardAI___c__DisplayClass11_0_TypeInfo, method, v2, v3);
      System_Object___ctor((Il2CppObject *)v123, 0LL);
      if ( !v349 )
        goto LABEL_164;
      klass = v349[1].klass;
      if ( !klass )
        goto LABEL_164;
      v127 = v8->fields._allRouteList_5__2;
      if ( !v127 )
        goto LABEL_164;
      namespaze_high = HIDWORD(klass->_1.namespaze);
      if ( namespaze_high >= v127->fields._size )
        namespaze_high = v127->fields._size;
      if ( !namespaze_high )
        namespaze_high = v127->fields._size;
      v8->fields._pickValue_5__3 = namespaze_high;
      v129 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
        v129 = BalanceConfig_TypeInfo;
        v127 = v8->fields._allRouteList_5__2;
      }
      v130 = WarBoardAI___c_TypeInfo;
      IsWarBoardAiCalcEvalSum = v129->static_fields->IsWarBoardAiCalcEvalSum;
      if ( !WarBoardAI___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo, method);
        v130 = WarBoardAI___c_TypeInfo;
      }
      static_fields = v130->static_fields;
      if ( IsWarBoardAiCalcEvalSum )
      {
        _9__11_0 = (System_Func_T__TResult__o *)static_fields->__9__11_0;
        if ( _9__11_0 )
          goto LABEL_39;
        if ( !v130->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v130, method);
          v130 = WarBoardAI___c_TypeInfo;
        }
        v134 = (Il2CppObject *)v130->static_fields->__9;
        _9__11_0 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                                  System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo,
                                                  method,
                                                  v124,
                                                  v125);
        System_Func_object__Decimal____ctor(_9__11_0, v134, Method_WarBoardAI___c__Think_b__11_0__, 0LL);
        v141 = WarBoardAI___c_TypeInfo->static_fields;
        v141->__9__11_0 = (struct System_Func_List_WarBoardAIRoute_RouteData___Decimal__o *)_9__11_0;
        p__9__11_0 = (PartyOrganizationUtility_o *)&v141->__9__11_0;
      }
      else
      {
        _9__11_0 = (System_Func_T__TResult__o *)static_fields->__9__11_1;
        if ( _9__11_0 )
          goto LABEL_39;
        if ( !v130->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v130, method);
          v130 = WarBoardAI___c_TypeInfo;
        }
        v143 = (Il2CppObject *)v130->static_fields->__9;
        _9__11_0 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                                  System_Func_List_WarBoardAIRoute_RouteData___Decimal__TypeInfo,
                                                  method,
                                                  v124,
                                                  v125);
        System_Func_object__Decimal____ctor(_9__11_0, v143, Method_WarBoardAI___c__Think_b__11_1__, 0LL);
        v144 = WarBoardAI___c_TypeInfo->static_fields;
        v144->__9__11_1 = (struct System_Func_List_WarBoardAIRoute_RouteData___Decimal__o *)_9__11_0;
        p__9__11_0 = (PartyOrganizationUtility_o *)&v144->__9__11_1;
      }
      sub_1BCA784(p__9__11_0, (int64_t)_9__11_0, v135, v136, v137, v138, v139, v140);
LABEL_39:
      v145 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__Decimal_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)v127,
                                                                    (System_Func_TSource__TKey__o *)_9__11_0,
                                                                    (const MethodInfo_2F3B858 *)Method_System_Linq_Enumerable_OrderByDescending_List_WarBoardAIRoute_RouteData___Decimal___);
      v146 = System_Linq_Enumerable__ToArray_object_(
               v145,
               (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____);
      v150 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                            System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo,
                                                            v147,
                                                            v148,
                                                            v149);
      System_Collections_Generic_List_object____ctor(
        v150,
        (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
      v8->fields._availableRouteList_5__4 = (struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *)v150;
      p_availableRouteList_5__4 = (WarBoardAI__Think_d__11_o **)&v8->fields._availableRouteList_5__4;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v8->fields._availableRouteList_5__4,
        (int64_t)v150,
        v152,
        v153,
        v154,
        v155,
        v156,
        v157);
      v161 = (System_Collections_Generic_HashSet_T__o *)sub_1BCAA2C(
                                                          System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo,
                                                          v158,
                                                          v159,
                                                          v160);
      System_Collections_Generic_HashSet_object____ctor(
        v161,
        (const MethodInfo_345AFC8 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__);
      if ( !v123 )
        goto LABEL_164;
      object = (Il2CppObject *)v123;
      *(_QWORD *)(v123 + 16) = v161;
      v347 = (System_Collections_Generic_HashSet_T__o **)(v123 + 16);
      sub_1BCA784((PartyOrganizationUtility_o *)(v123 + 16), (int64_t)v161, v162, v163, v164, v165, v166, v167);
      if ( !v146 )
        goto LABEL_164;
      v168 = *(_QWORD *)&v146->max_length;
      if ( (int)v168 >= 1 )
      {
        v169 = 0LL;
        pickValue_5__3 = v8->fields._pickValue_5__3;
        v171 = (PartyOrganizationUtility_o *)(v123 + 24);
        v345 = (WarBoardAI__Think_d__11_o **)&v8->fields._availableRouteList_5__4;
        do
        {
          if ( v169 >= (unsigned int)v168 )
            goto LABEL_171;
          v172 = (System_Collections_ICollection_o *)v146->m_Items[v169];
          this = (WarBoardAI__Think_d__11_o *)BasicHelper__IsNullOrEmpty(v172, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            this = (WarBoardAI__Think_d__11_o *)BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
              this = (WarBoardAI__Think_d__11_o *)BalanceConfig_TypeInfo;
            }
            if ( LOBYTE(this[2].fields._allRouteList_5__2[22].fields._items) )
            {
              if ( !v172 )
                goto LABEL_164;
              this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)v172,
                                                    0,
                                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
              if ( !this )
                goto LABEL_164;
              if ( WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)this, 0LL) )
              {
                v180 = *v347;
                this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_List_object___get_Item(
                                                      (System_Collections_Generic_List_object__o *)v172,
                                                      0,
                                                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
                if ( !this || !v180 )
                  goto LABEL_164;
                this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_HashSet_object___Add(
                                                      v180,
                                                      *(Il2CppObject **)&this->fields._pickValue_5__3,
                                                      (const MethodInfo_345C1AC *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__);
                goto LABEL_69;
              }
              v181 = (System_Func_object__bool__o *)v171->klass;
              if ( !v171->klass )
              {
                v181 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                        System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo,
                                                        v177,
                                                        v178,
                                                        v179);
                System_Func_object__bool____ctor(
                  v181,
                  object,
                  Method_WarBoardAI___c__DisplayClass11_0__Think_b__6__,
                  0LL);
                object[1].monitor = v181;
                p_availableRouteList_5__4 = v345;
                sub_1BCA784(v171, (int64_t)v181, v182, v183, v184, v185, v186, v187);
              }
              this = (WarBoardAI__Think_d__11_o *)BasicHelper__Any_object_(
                                                    (System_Collections_Generic_List_T__o *)v172,
                                                    (System_Func_T__bool__o *)v181,
                                                    (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
              if ( ((unsigned __int8)this & 1) != 0 )
                goto LABEL_69;
              this = (WarBoardAI__Think_d__11_o *)BalanceConfig_TypeInfo;
            }
            if ( !LODWORD(this[3].monitor) )
            {
              j_il2cpp_runtime_class_init_0(this, method);
              this = (WarBoardAI__Think_d__11_o *)BalanceConfig_TypeInfo;
            }
            if ( !BYTE1(this[2].fields._allRouteList_5__2[22].fields._items)
              || (this = (WarBoardAI__Think_d__11_o *)WarBoardAI__CheckWasteRoute(
                                                        (WarBoardAI_o *)this,
                                                        (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v172,
                                                        v2),
                  ((unsigned __int8)this & 1) == 0) )
            {
              this = *p_availableRouteList_5__4;
              if ( !*p_availableRouteList_5__4 )
                goto LABEL_164;
              v188 = *(_QWORD *)&this->fields.__1__state;
              v189 = Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__;
              ++HIDWORD(this->fields.__2__current);
              if ( !v188 )
                goto LABEL_164;
              _2__current_low = SLODWORD(this->fields.__2__current);
              if ( (unsigned int)_2__current_low >= *(_DWORD *)(v188 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)v172,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v189[4] + 192LL) + 112LL));
              }
              else
              {
                v191 = v188 + 8 * _2__current_low;
                LODWORD(this->fields.__2__current) = _2__current_low + 1;
                *(_QWORD *)(v191 + 32) = v172;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)(v191 + 32),
                  (int64_t)v172,
                  (int64_t)v2,
                  v3,
                  v173,
                  v174,
                  v175,
                  v176);
              }
              availableRouteList_5__4 = *p_availableRouteList_5__4;
              if ( !*p_availableRouteList_5__4 )
                goto LABEL_164;
              if ( pickValue_5__3 <= SLODWORD(availableRouteList_5__4->fields.__2__current) )
                goto LABEL_71;
            }
          }
LABEL_69:
          LODWORD(v168) = v146->max_length;
        }
        while ( (__int64)++v169 < (int)v168 );
      }
      availableRouteList_5__4 = *p_availableRouteList_5__4;
      if ( !*p_availableRouteList_5__4 )
        goto LABEL_164;
LABEL_71:
      v118 = v350;
      if ( SLODWORD(availableRouteList_5__4->fields.__2__current) <= 0 )
      {
        v117 = 1;
        LOBYTE(v351.fields._list) = 1;
        v330 = j_il2cpp_value_box_0(bool_TypeInfo, &v351);
        v350->fields.__2__current = (Il2CppObject *)v330;
        sub_1BCA784((PartyOrganizationUtility_o *)&v350->fields.__2__current, v330, v331, v332, v333, v334, v335, v336);
        v350->fields.__1__state = 3;
      }
      else
      {
LABEL_72:
        v192 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                System_Func_List_WarBoardAIRoute_RouteData___bool__TypeInfo,
                                                method,
                                                v2,
                                                v3);
        System_Func_object__bool____ctor(v192, v349, Method_WarBoardAI__Think_b__11_2__, 0LL);
        v193 = System_Linq_Enumerable__Where_object_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)availableRouteList_5__4,
                 (System_Func_TSource__bool__o *)v192,
                 (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_List_WarBoardAIRoute_RouteData____);
        v194 = System_Linq_Enumerable__Take_object_(
                 v193,
                 v118->fields._pickValue_5__3,
                 (const MethodInfo_2F4A7BC *)Method_System_Linq_Enumerable_Take_List_WarBoardAIRoute_RouteData____);
        v195 = System_Linq_Enumerable__ToArray_object_(
                 v194,
                 (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_List_WarBoardAIRoute_RouteData____);
        v118->fields._evalValueSortList_5__5 = (struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__array *)v195;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v118->fields._evalValueSortList_5__5,
          (int64_t)v195,
          v196,
          v197,
          v198,
          v199,
          v200,
          v201);
        evalValueSortList_5__5 = v118->fields._evalValueSortList_5__5;
        if ( !evalValueSortList_5__5 )
          goto LABEL_164;
        v8 = v118;
        if ( !*(_QWORD *)&evalValueSortList_5__5->max_length )
        {
          v117 = 1;
          LOBYTE(v351.fields._list) = 1;
          v323 = j_il2cpp_value_box_0(bool_TypeInfo, &v351);
          v118->fields.__2__current = (Il2CppObject *)v323;
          v292 = (PartyOrganizationUtility_o *)&v118->fields.__2__current;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v118->fields.__2__current,
            v323,
            v324,
            v325,
            v326,
            v327,
            v328,
            v329);
          v299 = 4;
          goto LABEL_169;
        }
LABEL_74:
        v203 = (System_Collections_Generic_List_Decimal__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_List_Decimal__TypeInfo,
                                                               method,
                                                               v2,
                                                               v3);
        System_Collections_Generic_List_Decimal____ctor(
          v203,
          (const MethodInfo_3574BA8 *)Method_System_Collections_Generic_List_Decimal___ctor__);
        v205 = v8->fields._evalValueSortList_5__5;
        if ( !v205 )
          goto LABEL_164;
        v206 = 0;
        v348 = v203;
        while ( 1 )
        {
          max_length = v205->max_length;
          if ( v206 >= max_length )
            break;
          if ( v206 >= (unsigned int)max_length )
            goto LABEL_171;
          this = (WarBoardAI__Think_d__11_o *)v205->m_Items[v206];
          if ( !this )
            goto LABEL_164;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v351,
            (System_Collections_Generic_List_object__o *)this,
            (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
          v208 = 0;
          v209 = 0;
          v210 = 0;
          v353 = v351;
          while ( 1 )
          {
            v211 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     &v353,
                     (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
            if ( !v211 )
              break;
            current = (WarBoardAIRoute_RouteData_o *)v353.fields._current;
            if ( !v353.fields._current )
              sub_1BCAA3C(v211, v212);
            if ( WarBoardAIRoute_RouteData__HasFlag((WarBoardAIRoute_RouteData_o *)v353.fields._current, 4LL, 0LL) )
            {
              actionPiece = current->fields.actionPiece;
              if ( actionPiece )
                v209 |= WarBoardPieceData__get_isMaster(actionPiece, 0LL);
              v210 = 1;
            }
            v208 |= WarBoardAIRoute_RouteData__HasFlag(current, 8LL, 0LL);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v353,
            (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
          if ( !v349 )
            goto LABEL_164;
          v215 = v349[1].klass;
          if ( !v215 )
            goto LABEL_164;
          this = (WarBoardAI__Think_d__11_o *)v215->_1.klass;
          if ( !this )
            goto LABEL_164;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v351,
            (System_Collections_Generic_List_object__o *)this,
            (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__GetEnumerator__);
          v216 = 0.0;
          v352 = v351;
          while ( 1 )
          {
            v217 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     &v352,
                     (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__MoveNext__);
            if ( !v217 )
              break;
            v219 = (WarBoardTacticalTrendEntity_o *)v352.fields._current;
            if ( !v352.fields._current )
              sub_1BCAA3C(v217, v218);
            switch ( HIDWORD(v352.fields._current[1].klass) )
            {
              case 0:
                if ( v206 < SLODWORD(v352.fields._current[1].monitor) )
                {
                  BestMagnification = WarBoardTacticalTrendEntity__GetBestMagnification(
                                        (WarBoardTacticalTrendEntity_o *)v352.fields._current,
                                        0LL);
                  LowestMagnification = WarBoardTacticalTrendEntity__GetLowestMagnification(v219, 0LL);
                  value = v219->fields.value;
                  ImmobilityMagnification = WarBoardTacticalTrendEntity__GetBestMagnification(v219, 0LL)
                                          - (float)((float)((float)(BestMagnification - LowestMagnification)
                                                          / (float)((float)value + -1.0))
                                                  * (float)v206);
                  goto LABEL_102;
                }
                break;
              case 1:
                if ( (v210 & 1) != 0 )
                  goto LABEL_101;
                break;
              case 4:
                if ( (v209 & 1) != 0 )
                  goto LABEL_101;
                break;
              case 5:
                if ( (v208 & 1) != 0 )
                {
LABEL_101:
                  ImmobilityMagnification = WarBoardTacticalTrendEntity__GetImmobilityMagnification(
                                              (WarBoardTacticalTrendEntity_o *)v352.fields._current,
                                              0LL);
LABEL_102:
                  v216 = v216 + ImmobilityMagnification;
                }
                break;
              default:
                continue;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v352,
            (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_WarBoardTacticalTrendEntity__Dispose__);
          v8 = v350;
          v225 = BalanceConfig_TypeInfo;
          if ( v216 == 0.0 )
            v226 = 1.0;
          else
            v226 = v216;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v224);
            v225 = BalanceConfig_TypeInfo;
          }
          v227 = System_Decimal_TypeInfo;
          v228 = v225->static_fields->IsWarBoardAiCalcEvalSum;
          if ( !System_Decimal_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, v224);
          this = (WarBoardAI__Think_d__11_o *)System_Decimal__op_Explicit((System_Decimal_o *)v227, v226, 0LL);
          v231 = v350->fields._evalValueSortList_5__5;
          if ( !v231 )
            goto LABEL_164;
          if ( v206 >= v231->max_length )
            goto LABEL_171;
          v232 = this;
          v233 = (System_Collections_Generic_IEnumerable_TSource__o *)v231->m_Items[v206];
          v234 = WarBoardAI___c_TypeInfo;
          v235 = (System_Decimal_o *)method;
          if ( !WarBoardAI___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo, method);
            v234 = WarBoardAI___c_TypeInfo;
          }
          v236 = v234->static_fields;
          if ( v228 )
          {
            _9__11_8 = (System_Func_T__TResult__o *)v236->__9__11_8;
            if ( !_9__11_8 )
            {
              if ( !v234->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v234, method);
                v234 = WarBoardAI___c_TypeInfo;
              }
              v239 = (Il2CppObject *)v234->static_fields->__9;
              _9__11_8 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                                        System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo,
                                                        method,
                                                        v229,
                                                        v230);
              System_Func_object__Decimal____ctor(_9__11_8, v239, Method_WarBoardAI___c__Think_b__11_8__, 0LL);
              v240 = WarBoardAI___c_TypeInfo->static_fields;
              v240->__9__11_8 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_8;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&v240->__9__11_8,
                (int64_t)_9__11_8,
                v241,
                v242,
                v243,
                v244,
                v245,
                v246);
              v8 = v350;
            }
            v248 = System_Linq_Enumerable__Sum_object__49587520(
                     (System_Decimal_o *)&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___,
                     v233,
                     (System_Func_TSource__Decimal__o *)_9__11_8,
                     (const MethodInfo_2F4A540 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
            cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
            if ( !(_DWORD)cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, v247);
          }
          else
          {
            _9__11_9 = (System_Func_T__TResult__o *)v236->__9__11_9;
            if ( !_9__11_9 )
            {
              if ( !v234->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v234, method);
                v234 = WarBoardAI___c_TypeInfo;
              }
              v250 = (Il2CppObject *)v234->static_fields->__9;
              _9__11_9 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                                        System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo,
                                                        method,
                                                        v229,
                                                        v230);
              System_Func_object__Decimal____ctor(_9__11_9, v250, Method_WarBoardAI___c__Think_b__11_9__, 0LL);
              v251 = WarBoardAI___c_TypeInfo->static_fields;
              v251->__9__11_9 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_9;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&v251->__9__11_9,
                (int64_t)_9__11_9,
                v252,
                v253,
                v254,
                v255,
                v256,
                v257);
              v8 = v350;
            }
            this = (WarBoardAI__Think_d__11_o *)System_Linq_Enumerable__Sum_object__49587520(
                                                  (System_Decimal_o *)&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___,
                                                  v233,
                                                  (System_Func_TSource__Decimal__o *)_9__11_9,
                                                  (const MethodInfo_2F4A540 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
            v258 = v8->fields._evalValueSortList_5__5;
            if ( !v258 )
              goto LABEL_164;
            if ( v206 >= v258->max_length )
              goto LABEL_171;
            v259 = (System_Decimal_o *)v258->m_Items[v206];
            if ( !v259 )
              goto LABEL_164;
            v260 = this;
            flags = v259[1].fields.flags;
            v262 = (System_Decimal_o *)method;
            if ( !System_Decimal_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, method);
            v263 = System_Decimal__op_Implicit_63609040(v259, flags, 0LL);
            v8 = v350;
            v248 = System_Decimal__op_Division(v264, (System_Decimal_o *)v260, v262, (const MethodInfo *)v263);
          }
          this = (WarBoardAI__Think_d__11_o *)System_Decimal__op_Multiply(
                                                cctor_finished,
                                                (System_Decimal_o *)v232,
                                                v235,
                                                (const MethodInfo *)v248);
          v203 = v348;
          if ( v348 )
          {
            items = v348->fields._items;
            ++v348->fields._version;
            if ( items )
            {
              size = v348->fields._size;
              v204 = method;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_Decimal___AddWithResize(
                  v348,
                  (System_Decimal_o *)this,
                  (const MethodInfo_3575438 *)method);
              }
              else
              {
                v267 = &items->obj + size;
                v348->fields._size = size + 1;
                v267[2].klass = (Il2CppClass *)this;
                v267[2].monitor = (void *)method;
              }
              v205 = v8->fields._evalValueSortList_5__5;
              ++v206;
              if ( v205 )
                continue;
            }
          }
          goto LABEL_164;
        }
        if ( !v349 )
          goto LABEL_164;
        this = (WarBoardAI__Think_d__11_o *)WarBoardAI__GetRandomIndex((WarBoardAI_o *)this, v203, v204);
        if ( (unsigned int)this >= v205->max_length )
LABEL_171:
          sub_1BCAA44(this, method);
        v274 = (int64_t)v205->m_Items[(int)this];
        v349[1].monitor = (void *)v274;
        sub_1BCA784((PartyOrganizationUtility_o *)&v349[1].monitor, v274, v268, v269, v270, v271, v272, v273);
        v278 = WarBoardAI___c_TypeInfo;
        monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v349[1].monitor;
        if ( !WarBoardAI___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo, v275);
          v278 = WarBoardAI___c_TypeInfo;
        }
        _9__11_3 = (System_Func_T__TResult__o *)v278->static_fields->__9__11_3;
        if ( !_9__11_3 )
        {
          if ( !v278->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v278, v275);
            v278 = WarBoardAI___c_TypeInfo;
          }
          v281 = (Il2CppObject *)v278->static_fields->__9;
          _9__11_3 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                                    System_Func_WarBoardAIRoute_RouteData__float__TypeInfo,
                                                    v275,
                                                    v276,
                                                    v277);
          System_Func_object__float____ctor(_9__11_3, v281, Method_WarBoardAI___c__Think_b__11_3__, 0LL);
          v282 = WarBoardAI___c_TypeInfo->static_fields;
          v282->__9__11_3 = (struct System_Func_WarBoardAIRoute_RouteData__float__o *)_9__11_3;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v282->__9__11_3,
            (int64_t)_9__11_3,
            v283,
            v284,
            v285,
            v286,
            v287,
            v288);
        }
        System_Linq_Enumerable__Sum_object__49587664(
          monitor,
          (System_Func_TSource__float__o *)_9__11_3,
          (const MethodInfo_2F4A5D0 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____76884528);
        if ( WarBoardAI__CheckWasteRoute(
               v289,
               (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v349[1].monitor,
               v290) )
        {
          v117 = 1;
          LOBYTE(v351.fields._list) = 1;
          v291 = j_il2cpp_value_box_0(bool_TypeInfo, &v351);
          v8->fields.__2__current = (Il2CppObject *)v291;
          v292 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1BCA784(v292, v291, v293, v294, v295, v296, v297, v298);
          v299 = 5;
LABEL_169:
          *(_DWORD *)&v292[-1].fields._IsQuestStartMenuMode_k__BackingField = v299;
          return v117;
        }
LABEL_152:
        v300 = (System_Collections_Generic_HashSet_T__o *)sub_1BCAA2C(
                                                            System_Collections_Generic_HashSet_WarBoardPieceData__TypeInfo,
                                                            method,
                                                            v2,
                                                            v3);
        System_Collections_Generic_HashSet_object____ctor(
          v300,
          (const MethodInfo_345AFC8 *)Method_System_Collections_Generic_HashSet_WarBoardPieceData___ctor__);
        if ( !v349 || (this = (WarBoardAI__Think_d__11_o *)v349[1].monitor) == 0LL )
LABEL_164:
          sub_1BCAA3C(this, method);
        v307 = LODWORD(this->fields.__2__current) - 1;
        if ( v307 >= 0 )
        {
          while ( 1 )
          {
            this = (WarBoardAI__Think_d__11_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)this,
                                                  v307,
                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Item__);
            if ( !this )
              goto LABEL_164;
            method = *(const MethodInfo **)&this->fields._pickValue_5__3;
            v308 = this;
            if ( method )
            {
              if ( !v300 )
                goto LABEL_164;
              if ( !System_Collections_Generic_HashSet_object___Contains(
                      v300,
                      (Il2CppObject *)method,
                      (const MethodInfo_345B6BC *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__)
                && !WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)v308, 0LL) )
              {
                System_Collections_Generic_HashSet_object___Add(
                  v300,
                  *(Il2CppObject **)&v308->fields._pickValue_5__3,
                  (const MethodInfo_345C1AC *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Add__);
                this = *(WarBoardAI__Think_d__11_o **)&v308->fields._pickValue_5__3;
                if ( !this )
                  goto LABEL_164;
                WarBoardPieceData__SetPrevAiRoute((WarBoardPieceData_o *)this, (WarBoardAIRoute_RouteData_o *)v308, 0LL);
              }
            }
            if ( --v307 < 0 )
              break;
            this = (WarBoardAI__Think_d__11_o *)v349[1].monitor;
            if ( !this )
              goto LABEL_164;
          }
        }
        v8->fields._availableRouteList_5__4 = 0LL;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v8->fields._availableRouteList_5__4,
          0LL,
          v301,
          v302,
          v303,
          v304,
          v305,
          v306);
        v8->fields._evalValueSortList_5__5 = 0LL;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v8->fields._evalValueSortList_5__5,
          0LL,
          v309,
          v310,
          v311,
          v312,
          v313,
          v314);
        LOBYTE(v351.fields._list) = 0;
        v315 = j_il2cpp_value_box_0(bool_TypeInfo, &v351);
        v8->fields.__2__current = (Il2CppObject *)v315;
        v316 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1BCA784(v316, v315, v317, v318, v319, v320, v321, v322);
        *(_DWORD *)&v316[-1].fields._IsQuestStartMenuMode_k__BackingField = 6;
        return 1;
      }
      return v117;
    case 2:
      v8->fields.__1__state = -1;
      goto LABEL_16;
    case 3:
      v118 = v8;
      availableRouteList_5__4 = (WarBoardAI__Think_d__11_o *)v8->fields._availableRouteList_5__4;
      v118->fields.__1__state = -1;
      goto LABEL_72;
    case 4:
      v8->fields.__1__state = -1;
      goto LABEL_74;
    case 5:
      v8->fields.__1__state = -1;
      goto LABEL_152;
    case 6:
      v117 = 0;
      v8->fields.__1__state = -1;
      return v117;
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
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_WarBoardAI__Think_d__11_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B13C8A & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardAI___c_TypeInfo, v1, v2);
    byte_4B13C8A = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(WarBoardAI___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  WarBoardAI___c_TypeInfo->static_fields->__9 = (struct WarBoardAI___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarBoardAI___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 v4; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  WarBoardAI___c_c *v12; // x0
  struct WarBoardAI___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__11_4; // x20
  Il2CppObject *v15; // x21
  struct WarBoardAI___c_StaticFields *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4B13C8B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___, x, method);
    sub_1BCA7E0(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_WarBoardAI___c__Think_b__11_4__, v8, v9);
    sub_1BCA7E0(&WarBoardAI___c_TypeInfo, v10, v11);
    byte_4B13C8B = 1;
  }
  v12 = WarBoardAI___c_TypeInfo;
  if ( !WarBoardAI___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo, x);
    v12 = WarBoardAI___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__11_4 = (System_Func_T__TResult__o *)static_fields->__9__11_4;
  if ( !_9__11_4 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12, x);
      v12 = WarBoardAI___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__11_4 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                              System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo,
                                              x,
                                              method,
                                              v4);
    System_Func_object__Decimal____ctor(_9__11_4, v15, Method_WarBoardAI___c__Think_b__11_4__, 0LL);
    v16 = WarBoardAI___c_TypeInfo->static_fields;
    v16->__9__11_4 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_4;
    sub_1BCA784((PartyOrganizationUtility_o *)&v16->__9__11_4, (int64_t)_9__11_4, v17, v18, v19, v20, v21, v22);
  }
  return System_Linq_Enumerable__Sum_object__49587520(
           (System_Decimal_o *)static_fields,
           (System_Collections_Generic_IEnumerable_TSource__o *)x,
           (System_Func_TSource__Decimal__o *)_9__11_4,
           (const MethodInfo_2F4A540 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
}


System_Decimal_o *__fastcall WarBoardAI___c___Think_b__11_1(
        System_Decimal_o *retstr,
        WarBoardAI___c_o *this,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *x,
        const MethodInfo *method)
{
  __int64 v4; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  WarBoardAI___c_c *v16; // x0
  struct WarBoardAI___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__11_5; // x20
  Il2CppObject *v19; // x21
  struct WarBoardAI___c_StaticFields *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_Decimal_o *v27; // x0
  System_Decimal_o *v28; // x1
  System_Decimal_o *v29; // x20
  int32_t size; // w19
  System_Decimal_o *v31; // x21
  System_Decimal_o *cctor_finished; // x8
  System_Decimal_o *v33; // x2
  System_Decimal_o *v34; // x8

  if ( (byte_4B13C8D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Decimal_TypeInfo, x, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___, v6, v7);
    sub_1BCA7E0(&System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__, v10, v11);
    sub_1BCA7E0(&Method_WarBoardAI___c__Think_b__11_5__, v12, v13);
    sub_1BCA7E0(&WarBoardAI___c_TypeInfo, v14, v15);
    byte_4B13C8D = 1;
  }
  v16 = WarBoardAI___c_TypeInfo;
  if ( !WarBoardAI___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAI___c_TypeInfo, x);
    v16 = WarBoardAI___c_TypeInfo;
  }
  static_fields = v16->static_fields;
  _9__11_5 = (System_Func_T__TResult__o *)static_fields->__9__11_5;
  if ( !_9__11_5 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16, x);
      v16 = WarBoardAI___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__11_5 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                              System_Func_WarBoardAIRoute_RouteData__Decimal__TypeInfo,
                                              x,
                                              method,
                                              v4);
    System_Func_object__Decimal____ctor(_9__11_5, v19, Method_WarBoardAI___c__Think_b__11_5__, 0LL);
    v20 = WarBoardAI___c_TypeInfo->static_fields;
    v20->__9__11_5 = (struct System_Func_WarBoardAIRoute_RouteData__Decimal__o *)_9__11_5;
    sub_1BCA784((PartyOrganizationUtility_o *)&v20->__9__11_5, (int64_t)_9__11_5, v21, v22, v23, v24, v25, v26);
  }
  v27 = System_Linq_Enumerable__Sum_object__49587520(
          (System_Decimal_o *)static_fields,
          (System_Collections_Generic_IEnumerable_TSource__o *)x,
          (System_Func_TSource__Decimal__o *)_9__11_5,
          (const MethodInfo_2F4A540 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData___);
  if ( !x )
    sub_1BCAA3C(v27, v28);
  v29 = v27;
  size = x->fields._size;
  v31 = v28;
  cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
  if ( !(_DWORD)cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, v28);
  v33 = System_Decimal__op_Implicit_63609040(cctor_finished, size, 0LL);
  return System_Decimal__op_Division(v34, v29, v31, (const MethodInfo *)v33);
}


float __fastcall WarBoardAI___c___Think_b__11_3(
        WarBoardAI___c_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
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

  if ( (byte_4B13C8C & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_1BCA7E0(&System_Decimal_TypeInfo, y, method);
    byte_4B13C8C = 1;
  }
  if ( !y )
    sub_1BCAA3C(this, y);
  evalValue = y->fields.evalValue;
  cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
  if ( !(_DWORD)cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, y);
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

  if ( (byte_4B13C8E & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_1BCA7E0(&System_Decimal_TypeInfo, y, method);
    byte_4B13C8E = 1;
  }
  if ( !y )
    sub_1BCAA3C(this, y);
  evalValue = y->fields.evalValue;
  cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
  if ( !(_DWORD)cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, y);
  return System_Decimal__op_Explicit(cctor_finished, evalValue, 0LL);
}


float __fastcall WarBoardAI___c___Think_b__11_7(
        WarBoardAI___c_o *this,
        WarBoardAIRoute_RouteData_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_1BCAA3C(this, 0LL);
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

  if ( (byte_4B13C8F & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_1BCA7E0(&System_Decimal_TypeInfo, y, method);
    byte_4B13C8F = 1;
  }
  if ( !y )
    sub_1BCAA3C(this, y);
  evalValue = y->fields.evalValue;
  cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
  if ( !(_DWORD)cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, y);
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

  if ( (byte_4B13C90 & 1) == 0 )
  {
    this = (WarBoardAI___c_o *)sub_1BCA7E0(&System_Decimal_TypeInfo, y, method);
    byte_4B13C90 = 1;
  }
  if ( !y )
    sub_1BCAA3C(this, y);
  evalValue = y->fields.evalValue;
  cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
  if ( !(_DWORD)cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, y);
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
  if ( (byte_4B13C91 & 1) == 0 )
  {
    this = (WarBoardAI___c__DisplayClass11_0_o *)sub_1BCA7E0(
                                                   &Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__,
                                                   x,
                                                   method);
    byte_4B13C91 = 1;
  }
  if ( !x || (this = (WarBoardAI___c__DisplayClass11_0_o *)v4->fields.notActionPieceHash) == 0LL )
    sub_1BCAA3C(this, x);
  return System_Collections_Generic_HashSet_object___Contains(
           (System_Collections_Generic_HashSet_T__o *)this,
           (Il2CppObject *)x->fields.basePiece,
           (const MethodInfo_345B6BC *)Method_System_Collections_Generic_HashSet_WarBoardPieceData__Contains__);
}