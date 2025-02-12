void __fastcall WarBoardControlUiDataComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1

  if ( (byte_4BC540D & 1) == 0 )
  {
    sub_1C1ABD4(&WarBoardControlUiDataComponent_TypeInfo, v1);
    sub_1C1ABD4(&StringLiteral_3211/*"Barrier"*/, v8);
    byte_4BC540D = 1;
  }
  WarBoardControlUiDataComponent_TypeInfo->static_fields->UI_DATA_KEY_BARRIER = (struct System_String_o *)StringLiteral_3211/*"Barrier"*/;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)WarBoardControlUiDataComponent_TypeInfo->static_fields,
    StringLiteral_3211/*"Barrier"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall WarBoardControlUiDataComponent___ctor(WarBoardControlUiDataComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Array_o *v8; // x0
  struct System_Single_array *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_Collections_Generic_List_object__o *v16; // x20
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Collections_Generic_List_object__o *v23; // x20
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_RuntimeFieldHandle_o v30; // 0:w1.4

  if ( (byte_4BC540C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData___ctor__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string___ctor__, v3);
    sub_1C1ABD4(&System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__TypeInfo, v4);
    sub_1C1ABD4(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_1C1ABD4(&float___TypeInfo, v6);
    sub_1C1ABD4(
      &Field__PrivateImplementationDetails__64464566F592BAB0A74DD80EB47024C0ECA2BB914D37B27E78F5532363736E1B,
      v7);
    byte_4BC540C = 1;
  }
  v8 = (System_Array_o *)sub_1C1AC7C(float___TypeInfo, 7LL);
  v30.fields.value = Field__PrivateImplementationDetails__64464566F592BAB0A74DD80EB47024C0ECA2BB914D37B27E78F5532363736E1B;
  v9 = (struct System_Single_array *)v8;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62947704(v8, v30, 0LL);
  this->fields.AdjustOffsetY = v9;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.AdjustOffsetY, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData___ctor__);
  this->fields.listUiData = (struct System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__o *)v16;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.listUiData, (int64_t)v16, v17, v18, v19, v20, v21, v22);
  v23 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.listUiDataKey = (struct System_Collections_Generic_List_string__o *)v23;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.listUiDataKey, (int64_t)v23, v24, v25, v26, v27, v28, v29);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardControlUiDataComponent__Awake(WarBoardControlUiDataComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Component_object; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  Il2CppObject *v11; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BC53F6 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_WarBoardPieceBaseComponent___, method);
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_WarBoardSquareComponent___, v3);
    byte_4BC53F6 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_WarBoardPieceBaseComponent___);
  this->fields.pieceComponent = (struct WarBoardPieceBaseComponent_o *)Component_object;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.pieceComponent,
    (int64_t)Component_object,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_WarBoardSquareComponent___);
  this->fields.squareComponent = (struct WarBoardSquareComponent_o *)v11;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.squareComponent, (int64_t)v11, v12, v13, v14, v15, v16, v17);
}


int32_t __fastcall WarBoardControlUiDataComponent__CheckCorrectActiveObject(
        WarBoardControlUiDataComponent_o *this,
        UnityEngine_GameObject_o *targetObject,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_Collections_Generic_List_string__o *listUiDataKey; // x0
  __int64 v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  Il2CppObject *current; // x1
  System_Collections_Generic_List_object__o *listUiData; // x22
  System_Predicate_object__o *v25; // x23
  __int64 v26; // x0
  __int64 v27; // x1
  Il2CppObject *v28; // x0
  __int64 v29; // x1
  Il2CppObject *v30; // x21
  _QWORD *monitor; // x23
  __int64 v32; // x8
  unsigned __int64 v33; // x26
  UnityEngine_Object_o *v34; // x22
  Il2CppClass *klass; // x22
  const char *namespaze; // x8
  unsigned __int64 v37; // x23
  UnityEngine_Object_o *v38; // x21
  int32_t v39; // w19
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BC5401 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, targetObject);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v8);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v9);
    sub_1C1ABD4(&System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo, v10);
    sub_1C1ABD4(&Method_WarBoardControlUiDataComponent___c__DisplayClass34_0__CheckCorrectActiveObject_b__0__, v11);
    sub_1C1ABD4(&WarBoardControlUiDataComponent___c__DisplayClass34_0_TypeInfo, v12);
    byte_4BC5401 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  listUiDataKey = this->fields.listUiDataKey;
  if ( !listUiDataKey )
    sub_1C1AE30(0LL, targetObject);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)listUiDataKey,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v42 = v41;
  while ( 1 )
  {
    do
    {
LABEL_5:
      if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v42,
              (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
      {
        v39 = -1;
        goto LABEL_28;
      }
      v14 = sub_1C1AE20(WarBoardControlUiDataComponent___c__DisplayClass34_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v14, 0LL);
      if ( !v14 )
        sub_1C1AE30(v15, v16);
      current = v42.fields._current;
      *(_QWORD *)(v14 + 16) = v42.fields._current;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)current, v17, v18, v19, v20, v21, v22);
      listUiData = (System_Collections_Generic_List_object__o *)this->fields.listUiData;
      v25 = (System_Predicate_object__o *)sub_1C1AE20(System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo);
      System_Predicate_object____ctor(
        v25,
        (Il2CppObject *)v14,
        Method_WarBoardControlUiDataComponent___c__DisplayClass34_0__CheckCorrectActiveObject_b__0__,
        0LL);
      if ( !listUiData )
        sub_1C1AE30(v26, v27);
      v28 = System_Collections_Generic_List_object___Find(
              listUiData,
              (System_Predicate_T__o *)v25,
              (const MethodInfo_363CEF8 *)Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__);
      v30 = v28;
    }
    while ( !v28 );
    monitor = v28[1].monitor;
    if ( !monitor )
      sub_1C1AE30(v28, v29);
    v32 = monitor[3];
    if ( (int)v32 >= 1 )
      break;
LABEL_17:
    klass = v30[2].klass;
    if ( !klass )
      sub_1C1AE30(v28, v29);
    namespaze = klass->_1.namespaze;
    if ( (int)namespaze >= 1 )
    {
      v37 = 0LL;
      while ( 1 )
      {
        if ( v37 >= (unsigned int)namespaze )
          sub_1C1AE38(v28, v29);
        v38 = (UnityEngine_Object_o *)*((_QWORD *)&klass->_1.byval_arg.data + v37);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v28 = (Il2CppObject *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)targetObject, v38, 0LL);
        if ( ((unsigned __int8)v28 & 1) != 0 )
          break;
        LODWORD(namespaze) = klass->_1.namespaze;
        if ( (__int64)++v37 >= (int)namespaze )
          goto LABEL_5;
      }
      v39 = 0;
      goto LABEL_28;
    }
  }
  v33 = 0LL;
  while ( 1 )
  {
    if ( v33 >= (unsigned int)v32 )
      sub_1C1AE38(v28, v29);
    v34 = (UnityEngine_Object_o *)monitor[v33 + 4];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v28 = (Il2CppObject *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)targetObject, v34, 0LL);
    if ( ((unsigned __int8)v28 & 1) != 0 )
      break;
    LODWORD(v32) = *((_DWORD *)monitor + 6);
    if ( (__int64)++v33 >= (int)v32 )
      goto LABEL_17;
  }
  v39 = 1;
LABEL_28:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  return v39;
}


int32_t __fastcall WarBoardControlUiDataComponent__GetAdjustType(
        WarBoardControlUiDataComponent_o *this,
        const MethodInfo *method)
{
  void *Instance; // x0
  const MethodInfo *v4; // x1
  WarBoardData_o *v5; // x20
  WarBoardPieceData_o *Piece_36443868; // x0
  WarBoardData_o *v8; // x20
  __int64 v9; // x8
  WarBoardControlUiDataComponent_o *v10; // x0
  WarBoardData_o *v11; // x20
  WarBoardData_o *v12; // x20
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardData_o *v14; // x20
  WarBoardItemData_o *Item; // x0

  if ( (byte_4BC5404 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4BC5404 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  v5 = (WarBoardData_o *)*((_QWORD *)Instance + 55);
  Instance = (void *)WarBoardControlUiDataComponent__get_SquareIndex(this, v4);
  if ( !v5 )
    goto LABEL_31;
  Piece_36443868 = WarBoardData__GetPiece_36443868(v5, (int32_t)Instance, 0LL);
  if ( Piece_36443868 )
  {
    if ( WarBoardPieceData__get_isMaster(Piece_36443868, 0LL) )
      return 6;
    else
      return 5;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  v8 = (WarBoardData_o *)*((_QWORD *)Instance + 55);
  Instance = (void *)WarBoardControlUiDataComponent__get_SquareIndex(this, v4);
  if ( !v8 )
    goto LABEL_31;
  Instance = WarBoardData__GetSquare(v8, (int32_t)Instance, 0LL);
  if ( Instance )
  {
    v9 = *((_QWORD *)Instance + 6);
    if ( !v9 )
      goto LABEL_31;
    v10 = *(WarBoardControlUiDataComponent_o **)(v9 + 184);
    if ( v10 && WarBoardControlUiDataComponent__IsDispFlagObjects(v10, v4) )
      return 4;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  v11 = (WarBoardData_o *)*((_QWORD *)Instance + 55);
  Instance = (void *)WarBoardControlUiDataComponent__get_SquareIndex(this, v4);
  if ( !v11 )
    goto LABEL_31;
  if ( WarBoardData__GetWall(v11, (int32_t)Instance, 0, 0LL) )
    return 3;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  v12 = (WarBoardData_o *)*((_QWORD *)Instance + 55);
  Instance = (void *)WarBoardControlUiDataComponent__get_SquareIndex(this, v4);
  if ( !v12 )
    goto LABEL_31;
  Treasure = WarBoardData__GetTreasure(v12, (int32_t)Instance, 0LL);
  if ( Treasure && !Treasure->fields._isUse_k__BackingField )
    return 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (v14 = (WarBoardData_o *)*((_QWORD *)Instance + 55),
        Instance = (void *)WarBoardControlUiDataComponent__get_SquareIndex(this, v4),
        !v14) )
  {
LABEL_31:
    sub_1C1AE30(Instance, v4);
  }
  Item = WarBoardData__GetItem(v14, (int32_t)Instance, 0LL);
  if ( Item && !Item->fields._isUse_k__BackingField )
    return 2;
  else
    return 0;
}


System_String_o *__fastcall WarBoardControlUiDataComponent__GetAnimationStateName(
        WarBoardControlUiDataComponent_o *this,
        SimpleAnimation_o *animation,
        System_String_o *suffix,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WarBoardControlUiDataComponent_c *klass; // x8
  WarBoardControlUiDataComponent_o *v11; // x19
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x19
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x21
  __int64 v28; // x8
  __int64 v29; // x9
  SimpleAnimation_State_c **v30; // x10
  __int64 v31; // x0
  System_String_o *v32; // x0
  __int64 v33; // x1
  System_String_o *v34; // x0
  __int64 v35; // x1
  __int64 v36; // x8
  __int64 v37; // x9
  SimpleAnimation_State_c **v38; // x10
  __int64 v39; // x0
  System_String_o *v40; // x21
  __int64 v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0

  if ( (byte_4BC540A & 1) == 0 )
  {
    sub_1C1ABD4(&System_IDisposable_TypeInfo, animation);
    sub_1C1ABD4(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v6);
    sub_1C1ABD4(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v7);
    sub_1C1ABD4(&System_Collections_IEnumerator_TypeInfo, v8);
    this = (WarBoardControlUiDataComponent_o *)sub_1C1ABD4(&SimpleAnimation_State_TypeInfo, v9);
    byte_4BC540A = 1;
  }
  if ( !animation || (this = (WarBoardControlUiDataComponent_o *)SimpleAnimation__GetStates(animation, 0LL)) == 0LL )
    sub_1C1AE30(this, animation);
  klass = this->klass;
  v11 = this;
  v12 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
    {
      --v12;
      p_offset += 4;
      if ( !v12 )
        goto LABEL_9;
    }
    v14 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v14 = sub_1C6CBB4(this, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
  }
  v16 = (*(__int64 (__fastcall **)(WarBoardControlUiDataComponent_o *, _QWORD))v14)(v11, *(_QWORD *)(v14 + 8));
  if ( !v16 )
    sub_1C1AE30(0LL, v15);
  do
  {
    v17 = *(_QWORD *)v16;
    v18 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
    {
      v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v19 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_16;
      }
      v20 = v17 + 16LL * *v19 + 312;
    }
    else
    {
LABEL_16:
      v20 = sub_1C6CBB4(v16, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v16, *(_QWORD *)(v20 + 8)) & 1) == 0 )
    {
      v40 = 0LL;
      goto LABEL_43;
    }
    v21 = *(_QWORD *)v16;
    v22 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
    {
      v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v23 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_23;
      }
      v24 = v21 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_23:
      v24 = sub_1C6CBB4(v16, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
    }
    v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v16, *(_QWORD *)(v24 + 8));
    v27 = v25;
    if ( !v25 )
      sub_1C1AE30(0LL, v26);
    v28 = *(_QWORD *)v25;
    v29 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
    {
      v30 = (SimpleAnimation_State_c **)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *(v30 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v29;
        v30 += 2;
        if ( !v29 )
          goto LABEL_30;
      }
      v31 = v28 + 16LL * (*(_DWORD *)v30 + 9) + 312;
    }
    else
    {
LABEL_30:
      v31 = sub_1C6CBB4(v25, SimpleAnimation_State_TypeInfo, 9LL);
    }
    v32 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v27, *(_QWORD *)(v31 + 8));
    if ( !v32 )
      sub_1C1AE30(0LL, v33);
    v34 = System_String__ToLower(v32, 0LL);
    if ( !v34 )
      sub_1C1AE30(0LL, v35);
  }
  while ( !System_String__EndsWith(v34, suffix, 0LL) );
  v36 = *(_QWORD *)v27;
  v37 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
  {
    v38 = (SimpleAnimation_State_c **)(*(_QWORD *)(v36 + 176) + 8LL);
    while ( *(v38 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v37;
      v38 += 2;
      if ( !v37 )
        goto LABEL_39;
    }
    v39 = v36 + 16LL * (*(_DWORD *)v38 + 9) + 312;
  }
  else
  {
LABEL_39:
    v39 = sub_1C6CBB4(v27, SimpleAnimation_State_TypeInfo, 9LL);
  }
  v40 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v27, *(_QWORD *)(v39 + 8));
LABEL_43:
  v41 = *(_QWORD *)v16;
  v42 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
  {
    v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
    {
      --v42;
      v43 += 4;
      if ( !v42 )
        goto LABEL_47;
    }
    v44 = v41 + 16LL * *v43 + 312;
  }
  else
  {
LABEL_47:
    v44 = sub_1C6CBB4(v16, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v44)(v16, *(_QWORD *)(v44 + 8));
  return v40;
}


bool __fastcall WarBoardControlUiDataComponent__IsDispFlagObjects(
        WarBoardControlUiDataComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *flagObjects; // x19
  int max_length; // w8
  unsigned int v4; // w20

  if ( this->fields.compType != 1 )
  {
    flagObjects = this->fields.flagObjects;
    if ( !flagObjects )
      goto LABEL_13;
    max_length = flagObjects->max_length;
    if ( max_length >= 1 )
    {
      v4 = 0;
      while ( 1 )
      {
        if ( v4 >= max_length )
          sub_1C1AE38(this, method);
        this = (WarBoardControlUiDataComponent_o *)flagObjects->m_Items[v4];
        if ( !this )
          break;
        this = (WarBoardControlUiDataComponent_o *)UnityEngine_GameObject__get_activeInHierarchy(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          max_length = flagObjects->max_length;
          if ( (int)++v4 < max_length )
            continue;
        }
        return (unsigned __int8)this & 1;
      }
LABEL_13:
      sub_1C1AE30(this, method);
    }
  }
  LOBYTE(this) = 0;
  return (unsigned __int8)this & 1;
}


bool __fastcall WarBoardControlUiDataComponent__IsDispOverlapObjects(
        WarBoardControlUiDataComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *onOverlapObjects; // x19
  int max_length; // w8
  unsigned int v4; // w20

  if ( this->fields.compType != 1 )
  {
    onOverlapObjects = this->fields.onOverlapObjects;
    if ( !onOverlapObjects )
      goto LABEL_13;
    max_length = onOverlapObjects->max_length;
    if ( max_length >= 1 )
    {
      v4 = 0;
      while ( 1 )
      {
        if ( v4 >= max_length )
          sub_1C1AE38(this, method);
        this = (WarBoardControlUiDataComponent_o *)onOverlapObjects->m_Items[v4];
        if ( !this )
          break;
        this = (WarBoardControlUiDataComponent_o *)UnityEngine_GameObject__get_activeInHierarchy(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          max_length = onOverlapObjects->max_length;
          if ( (int)++v4 < max_length )
            continue;
        }
        return (unsigned __int8)this & 1;
      }
LABEL_13:
      sub_1C1AE30(this, method);
    }
  }
  LOBYTE(this) = 0;
  return (unsigned __int8)this & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardControlUiDataComponent__IsExistsOther(
        WarBoardControlUiDataComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  WarBoardData_o *monitor; // x20
  WarBoardItemData_o *Item; // x0
  WarBoardTreasureData_o *Treasure; // x0

  if ( (byte_4BC5402 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&squareIndex);
    byte_4BC5402 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (monitor = (WarBoardData_o *)Instance[27].monitor) == 0LL )
    sub_1C1AE30(Instance, v5);
  return WarBoardData__GetPiece_36443868((WarBoardData_o *)Instance[27].monitor, squareIndex, 0LL)
      || (Item = WarBoardData__GetItem(monitor, squareIndex, 0LL)) != 0LL && !Item->fields._isUse_k__BackingField
      || WarBoardData__GetEffect(monitor, squareIndex, 0LL)
      || (Treasure = WarBoardData__GetTreasure(monitor, squareIndex, 0LL)) != 0LL
      && !Treasure->fields._isUse_k__BackingField
      || WarBoardData__GetWall(monitor, squareIndex, 0, 0LL) != 0LL;
}


bool __fastcall WarBoardControlUiDataComponent__IsPlayingAnimation(
        WarBoardControlUiDataComponent_o *this,
        SimpleAnimation_o *animation,
        System_String_o *suffix,
        const MethodInfo *method)
{
  System_String_o *AnimationStateName; // x20
  SimpleAnimation_State_o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v10; // x19
  __int64 v11; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4BC5409 & 1) == 0 )
  {
    this = (WarBoardControlUiDataComponent_o *)sub_1C1ABD4(&SimpleAnimation_State_TypeInfo, animation);
    byte_4BC5409 = 1;
  }
  AnimationStateName = WarBoardControlUiDataComponent__GetAnimationStateName(this, animation, suffix, method);
  IsNullOrEmpty = (SimpleAnimation_State_o *)System_String__IsNullOrEmpty(AnimationStateName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return 0;
  if ( !animation )
    goto LABEL_15;
  if ( !SimpleAnimation__IsPlaying(animation, AnimationStateName, 0LL) )
    return 0;
  IsNullOrEmpty = SimpleAnimation__GetState(animation, AnimationStateName, 0LL);
  if ( !IsNullOrEmpty )
LABEL_15:
    sub_1C1AE30(IsNullOrEmpty, v8);
  klass = IsNullOrEmpty->klass;
  v10 = IsNullOrEmpty;
  v11 = *(unsigned __int16 *)(&IsNullOrEmpty->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&IsNullOrEmpty->klass->_2.bitflags2 + 3) )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v11;
      p_offset += 2;
      if ( !v11 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5].method;
  }
  else
  {
LABEL_11:
    p_method = sub_1C6CBB4(IsNullOrEmpty, SimpleAnimation_State_TypeInfo, 5LL);
  }
  return (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(v10, *(_QWORD *)(p_method + 8)) < 1.0;
}


void __fastcall WarBoardControlUiDataComponent__LocalSave(
        WarBoardControlUiDataComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t compType; // w8
  UnityEngine_Object_o *squareComponent; // x20
  __int64 Instance; // x0
  const MethodInfo *v9; // x1
  WarBoardData_o *v10; // x20
  struct System_Collections_Generic_List_string__o *listUiDataKey; // x8
  int32_t v12; // w19
  UnityEngine_Object_o *pieceComponent; // x20
  struct WarBoardPieceBaseComponent_o *v14; // x8
  struct WarBoardPieceData_o *pieceData; // x21
  System_Int32_array *v16; // x20
  unsigned int v17; // w8
  __int64 v18; // x8
  WarBoardData_o *v19; // x19

  if ( (byte_4BC540B & 1) == 0 )
  {
    sub_1C1ABD4(&int___TypeInfo, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__ToArray__, v3);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5);
    byte_4BC540B = 1;
  }
  compType = this->fields.compType;
  if ( !compType )
  {
    squareComponent = (UnityEngine_Object_o *)this->fields.squareComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(squareComponent, 0LL, 0LL) )
    {
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        v10 = *(WarBoardData_o **)(Instance + 440);
        Instance = WarBoardControlUiDataComponent__get_SquareIndex(this, v9);
        listUiDataKey = this->fields.listUiDataKey;
        if ( listUiDataKey )
        {
          v12 = Instance;
          Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                                (System_Collections_Generic_List_object__o *)listUiDataKey,
                                (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_string__ToArray__);
          if ( v10 )
          {
            WarBoardData__UpdateUiData(v10, v12, (System_String_array *)Instance, 0LL);
            return;
          }
        }
      }
LABEL_27:
      sub_1C1AE30(Instance, v9);
    }
    compType = this->fields.compType;
  }
  if ( compType == 1 )
  {
    pieceComponent = (UnityEngine_Object_o *)this->fields.pieceComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = UnityEngine_Object__op_Inequality(pieceComponent, 0LL, 0LL);
    if ( (Instance & 1) != 0 )
    {
      v14 = this->fields.pieceComponent;
      if ( !v14 )
        goto LABEL_27;
      pieceData = v14->fields.pieceData;
      Instance = sub_1C1AC7C(int___TypeInfo, 3LL);
      if ( !pieceData )
        goto LABEL_27;
      v16 = (System_Int32_array *)Instance;
      if ( !Instance )
        goto LABEL_27;
      v17 = *(_DWORD *)(Instance + 24);
      if ( !v17
        || (*(_DWORD *)(Instance + 32) = pieceData->fields._forceId_k__BackingField, v17 == 1)
        || (*(_DWORD *)(Instance + 36) = pieceData->fields._groupId_k__BackingField, v17 <= 2) )
      {
        sub_1C1AE38(Instance, v9);
      }
      *(_DWORD *)(Instance + 40) = pieceData->fields._index_k__BackingField;
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !Instance )
        goto LABEL_27;
      v18 = Instance;
      Instance = (__int64)this->fields.listUiDataKey;
      if ( !Instance )
        goto LABEL_27;
      v19 = *(WarBoardData_o **)(v18 + 440);
      Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                            (System_Collections_Generic_List_object__o *)Instance,
                            (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_string__ToArray__);
      if ( !v19 )
        goto LABEL_27;
      WarBoardData__UpdateUiData_36534360(v19, v16, (System_String_array *)Instance, 0LL);
    }
  }
}


System_String_o *__fastcall WarBoardControlUiDataComponent__PlayAnimation(
        WarBoardControlUiDataComponent_o *this,
        SimpleAnimation_o *animation,
        System_String_o *suffix,
        const MethodInfo *method)
{
  System_String_o *AnimationStateName; // x20
  __int64 v6; // x1
  bool IsNullOrEmpty; // w8
  System_String_o *result; // x0

  AnimationStateName = WarBoardControlUiDataComponent__GetAnimationStateName(this, animation, suffix, method);
  IsNullOrEmpty = System_String__IsNullOrEmpty(AnimationStateName, 0LL);
  result = 0LL;
  if ( !IsNullOrEmpty )
  {
    if ( !animation )
      sub_1C1AE30(0LL, v6);
    SimpleAnimation__Play_65178652(animation, AnimationStateName, 0LL);
    return AnimationStateName;
  }
  return result;
}


System_Collections_IEnumerator_o *__fastcall WarBoardControlUiDataComponent__PlayEndUiDataAnim(
        WarBoardControlUiDataComponent_o *this,
        SimpleAnimation_o *animation,
        WarBoardControlUiDataComponent_UiData_o *uiData,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4BC5407 & 1) == 0 )
  {
    sub_1C1ABD4(&WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_TypeInfo, animation);
    byte_4BC5407 = 1;
  }
  v7 = sub_1C1AE20(WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = animation;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)animation, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 48) = uiData;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)uiData, v20, v21, v22, v23, v24, v25);
  return (System_Collections_IEnumerator_o *)v7;
}


System_Collections_IEnumerator_o *__fastcall WarBoardControlUiDataComponent__PlayStartUiDataAnim(
        WarBoardControlUiDataComponent_o *this,
        SimpleAnimation_o *animation,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BC5406 & 1) == 0 )
  {
    sub_1C1ABD4(&WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_TypeInfo, animation);
    byte_4BC5406 = 1;
  }
  v5 = sub_1C1AE20(WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = animation;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)animation, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall WarBoardControlUiDataComponent__ResumeUiData(
        WarBoardControlUiDataComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct System_Collections_Generic_List_string__o *listUiDataKey; // x0
  __int64 v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  Il2CppObject *current; // x1
  System_String_o **v25; // x20
  System_Collections_Generic_List_object__o *listUiData; // x22
  System_Predicate_object__o *v27; // x23
  __int64 v28; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x3
  WarBoardControlUiDataComponent_UiData_o *v31; // x21
  System_String_o *v32; // x20
  WarBoardControlUiDataComponent_c *v33; // x0
  WarBoardServantPieceBuffTurnComponent_o *v34; // x0
  __int64 v35; // x1
  WarBoardServantPieceBuffTurnComponent_o *v36; // x20
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x22
  struct UnityEngine_GameObject_array *animationObjects; // x23
  int max_length; // w8
  int i; // w22
  UnityEngine_GameObject_o *v41; // x0
  Il2CppObject *Component_object; // x21
  const MethodInfo *v43; // x3
  struct WarBoardPieceBaseComponent_o *v44; // [xsp+8h] [xbp-A8h]
  WarBoardServantPieceBuffTurnComponent_o *v45; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4BC53FE & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v4);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v7);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v8);
    sub_1C1ABD4(&System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo, v9);
    sub_1C1ABD4(&Method_WarBoardControlUiDataComponent___c__DisplayClass26_0__ResumeUiData_b__0__, v10);
    sub_1C1ABD4(&WarBoardControlUiDataComponent___c__DisplayClass26_0_TypeInfo, v11);
    sub_1C1ABD4(&WarBoardControlUiDataComponent_TypeInfo, v12);
    sub_1C1ABD4(&StringLiteral_21573/*"loop"*/, v13);
    byte_4BC53FE = 1;
  }
  memset(&v47, 0, sizeof(v47));
  listUiDataKey = this->fields.listUiDataKey;
  if ( !listUiDataKey )
    sub_1C1AE30(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
    (System_Collections_Generic_List_object__o *)listUiDataKey,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v44 = 0LL;
  v45 = 0LL;
  v47 = v46;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v47,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    v15 = sub_1C1AE20(WarBoardControlUiDataComponent___c__DisplayClass26_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v15, 0LL);
    if ( !v15 )
      sub_1C1AE30(v16, v17);
    current = v47.fields._current;
    *(_QWORD *)(v15 + 16) = v47.fields._current;
    v25 = (System_String_o **)(v15 + 16);
    sub_1C1AB78((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)current, v18, v19, v20, v21, v22, v23);
    listUiData = (System_Collections_Generic_List_object__o *)this->fields.listUiData;
    v27 = (System_Predicate_object__o *)sub_1C1AE20(System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo);
    System_Predicate_object____ctor(
      v27,
      (Il2CppObject *)v15,
      Method_WarBoardControlUiDataComponent___c__DisplayClass26_0__ResumeUiData_b__0__,
      0LL);
    if ( !listUiData )
      sub_1C1AE30(v28, v29);
    v31 = (WarBoardControlUiDataComponent_UiData_o *)System_Collections_Generic_List_object___Find(
                                                       listUiData,
                                                       (System_Predicate_T__o *)v27,
                                                       (const MethodInfo_363CEF8 *)Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__);
    if ( v31 )
    {
      WarBoardControlUiDataComponent__SetUiDataTurnObjects(this, 1, v31, v30);
      v32 = *v25;
      v33 = WarBoardControlUiDataComponent_TypeInfo;
      if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
        v33 = WarBoardControlUiDataComponent_TypeInfo;
      }
      v34 = (WarBoardServantPieceBuffTurnComponent_o *)System_String__op_Equality(
                                                         v32,
                                                         v33->static_fields->UI_DATA_KEY_BARRIER,
                                                         0LL);
      v36 = v45;
      if ( ((unsigned __int8)v34 & 1) != 0
        && ((pieceComponent = this->fields.pieceComponent) != 0LL
          ? (v34 = (WarBoardServantPieceBuffTurnComponent_o *)this->fields.pieceComponent)
          : (v34 = (WarBoardServantPieceBuffTurnComponent_o *)v44),
            pieceComponent) )
      {
        if ( !v34 )
          sub_1C1AE30(0LL, v35);
        v34 = (WarBoardServantPieceBuffTurnComponent_o *)((__int64 (__fastcall *)(WarBoardServantPieceBuffTurnComponent_o *, const char *))v34->klass[1]._1.gc_desc)(
                                                           v34,
                                                           v34->klass[1]._1.name);
        v36 = v34;
        if ( !v34 )
          v34 = v45;
        if ( v36 )
        {
          if ( !v34 )
            sub_1C1AE30(0LL, v35);
          WarBoardServantPieceBuffTurnComponent__UpdateDisp(v34, 1, 0LL);
        }
        else
        {
          v36 = v45;
        }
      }
      else
      {
        pieceComponent = v44;
      }
      animationObjects = v31->fields.animationObjects;
      if ( !animationObjects )
        sub_1C1AE30(v34, v35);
      max_length = animationObjects->max_length;
      v44 = pieceComponent;
      v45 = v36;
      if ( max_length >= 1 )
      {
        v44 = pieceComponent;
        for ( i = 0; i < max_length; ++i )
        {
          if ( i >= (unsigned int)max_length )
            sub_1C1AE38(v34, v35);
          v41 = animationObjects->m_Items[i];
          if ( !v41 )
            sub_1C1AE30(0LL, v35);
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               v41,
                               (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v34 = (WarBoardServantPieceBuffTurnComponent_o *)UnityEngine_Object__op_Equality(
                                                             (UnityEngine_Object_o *)Component_object,
                                                             0LL,
                                                             0LL);
          if ( ((unsigned __int8)v34 & 1) == 0 )
            v34 = (WarBoardServantPieceBuffTurnComponent_o *)WarBoardControlUiDataComponent__PlayAnimation(
                                                               this,
                                                               (SimpleAnimation_o *)Component_object,
                                                               (System_String_o *)StringLiteral_21573/*"loop"*/,
                                                               v43);
          max_length = animationObjects->max_length;
        }
        v45 = v36;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v47,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


void __fastcall WarBoardControlUiDataComponent__ResumeUiDataAll(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1
  _QWORD *monitor; // x8
  __int64 v6; // x20
  int v7; // w8
  unsigned int v8; // w21
  __int64 v9; // x8
  int32_t v10; // w19

  if ( (byte_4BC53FB & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v1);
    sub_1C1ABD4(&WarBoardControlUiDataComponent_TypeInfo, v2);
    byte_4BC53FB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  monitor = Instance[27].monitor;
  if ( !monitor )
    goto LABEL_14;
  v6 = monitor[7];
  if ( !v6 )
    goto LABEL_14;
  v7 = *(_DWORD *)(v6 + 24);
  if ( v7 >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= v7 )
        sub_1C1AE38(Instance, v4);
      v9 = *(_QWORD *)(v6 + 8LL * (int)v8 + 32);
      if ( !v9 )
        break;
      v10 = *(_DWORD *)(v9 + 16);
      if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
      WarBoardControlUiDataComponent__ResumeUiDataAll_36185212(v10, v4);
      v7 = *(_DWORD *)(v6 + 24);
      if ( (int)++v8 >= v7 )
        return;
    }
LABEL_14:
    sub_1C1AE30(Instance, v4);
  }
}


void __fastcall WarBoardControlUiDataComponent__ResumeUiDataAll_36185212(int32_t squareIndex, const MethodInfo *method)
{
  __int64 v3; // x1
  WarBoardData_o *Instance; // x0
  const MethodInfo *v5; // x1
  struct WarBoardStageNpcMaster_o *stageNpcMaster; // x8
  WarBoardControlUiDataComponent_o *list; // x0
  const MethodInfo *v8; // x2
  struct WarBoardPieceData_array *pieces; // x8
  WarBoardControlUiDataComponent_o *v10; // x0

  if ( (byte_4BC53FC & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_1C1ABD4(&WarBoardControlUiDataComponent_TypeInfo, v3);
    byte_4BC53FC = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_18;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_36443868(Instance, squareIndex, 0LL);
  if ( Instance )
  {
    stageNpcMaster = Instance[1].fields.stageNpcMaster;
    if ( !stageNpcMaster )
      goto LABEL_18;
    list = (WarBoardControlUiDataComponent_o *)stageNpcMaster[2].fields.list;
    if ( list )
      WarBoardControlUiDataComponent__ResumeUiData(list, v5);
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_18;
  Instance = (WarBoardData_o *)WarBoardData__GetSquare(Instance, squareIndex, 0LL);
  if ( !Instance )
    goto LABEL_15;
  pieces = Instance->fields.pieces;
  if ( !pieces )
LABEL_18:
    sub_1C1AE30(Instance, v5);
  v10 = (WarBoardControlUiDataComponent_o *)pieces->m_Items[19];
  if ( v10 )
    WarBoardControlUiDataComponent__ResumeUiData(v10, v5);
LABEL_15:
  if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  WarBoardControlUiDataComponent__UpdateAdjustSituationAll_36184748(squareIndex, 1, v8);
}


void __fastcall WarBoardControlUiDataComponent__SetUiData(
        WarBoardControlUiDataComponent_o *this,
        System_String_o *key,
        bool isDisp,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x23
  System_Collections_Generic_List_object__o *listUiDataKey; // x0
  Il2CppObject *v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  Il2CppObject **v25; // x22
  System_Collections_Generic_List_object__o *listUiData; // x21
  System_Predicate_object__o *v27; // x24
  Il2CppObject *v28; // x0
  WarBoardControlUiDataComponent_UiData_o *v29; // x21
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x8
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x1
  const MethodInfo *v42; // x2
  int32_t SquareIndex; // w23
  System_String_o *v44; // x22
  WarBoardControlUiDataComponent_c *v45; // x0
  const MethodInfo *v46; // x1
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0
  WarBoardServantPieceBuffTurnComponent_o *v48; // x0
  struct UnityEngine_GameObject_array *animationObjects; // x23
  int max_length; // w8
  unsigned int v51; // w24
  Il2CppObject *Component_object; // x22
  const MethodInfo *v53; // x2
  const MethodInfo *v54; // x3
  System_Collections_IEnumerator_o *started; // x0

  if ( (byte_4BC53FD & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, key);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__Add__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__Contains__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__Remove__, v10);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v11);
    sub_1C1ABD4(&System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo, v12);
    sub_1C1ABD4(&Method_WarBoardControlUiDataComponent___c__DisplayClass25_0__SetUiData_b__0__, v13);
    sub_1C1ABD4(&WarBoardControlUiDataComponent___c__DisplayClass25_0_TypeInfo, v14);
    sub_1C1ABD4(&WarBoardControlUiDataComponent_TypeInfo, v15);
    byte_4BC53FD = 1;
  }
  v16 = sub_1C1AE20(WarBoardControlUiDataComponent___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_38;
  *(_QWORD *)(v16 + 16) = key;
  v25 = (Il2CppObject **)(v16 + 16);
  sub_1C1AB78((PartyOrganizationUtility_o *)(v16 + 16), (int64_t)key, v19, v20, v21, v22, v23, v24);
  listUiData = (System_Collections_Generic_List_object__o *)this->fields.listUiData;
  v27 = (System_Predicate_object__o *)sub_1C1AE20(System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo);
  System_Predicate_object____ctor(
    v27,
    (Il2CppObject *)v16,
    Method_WarBoardControlUiDataComponent___c__DisplayClass25_0__SetUiData_b__0__,
    0LL);
  if ( !listUiData )
    goto LABEL_38;
  v28 = System_Collections_Generic_List_object___Find(
          listUiData,
          (System_Predicate_T__o *)v27,
          (const MethodInfo_363CEF8 *)Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__);
  if ( v28 )
  {
    v29 = (WarBoardControlUiDataComponent_UiData_o *)v28;
    listUiDataKey = (System_Collections_Generic_List_object__o *)this->fields.listUiDataKey;
    if ( !listUiDataKey )
      goto LABEL_38;
    if ( System_Collections_Generic_List_object___Contains(
           listUiDataKey,
           *v25,
           (const MethodInfo_363CC20 *)Method_System_Collections_Generic_List_string__Contains__) != isDisp )
    {
      listUiDataKey = (System_Collections_Generic_List_object__o *)this->fields.listUiDataKey;
      if ( !listUiDataKey )
        goto LABEL_38;
      v18 = *v25;
      if ( isDisp )
      {
        items = listUiDataKey->fields._items;
        v37 = Method_System_Collections_Generic_List_string__Add__;
        ++listUiDataKey->fields._version;
        if ( !items )
          goto LABEL_38;
        size = listUiDataKey->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            listUiDataKey,
            v18,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
        }
        else
        {
          v39 = &items->obj.klass + size;
          listUiDataKey->fields._size = size + 1;
          v39[4] = (Il2CppClass *)v18;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v39 + 4), (int64_t)v18, v30, v31, v32, v33, v34, v35);
        }
        WarBoardControlUiDataComponent__SetUiDataTurnObjects(this, 1, v29, v40);
        SquareIndex = WarBoardControlUiDataComponent__get_SquareIndex(this, v41);
        if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
        WarBoardControlUiDataComponent__UpdateAdjustSituationAll_36184748(SquareIndex, 1, v42);
      }
      else
      {
        System_Collections_Generic_List_object___Remove(
          listUiDataKey,
          v18,
          (const MethodInfo_363DDB8 *)Method_System_Collections_Generic_List_string__Remove__);
      }
      v44 = (System_String_o *)*v25;
      v45 = WarBoardControlUiDataComponent_TypeInfo;
      if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
        v45 = WarBoardControlUiDataComponent_TypeInfo;
      }
      if ( System_String__op_Equality(v44, v45->static_fields->UI_DATA_KEY_BARRIER, 0LL) )
      {
        pieceComponent = this->fields.pieceComponent;
        if ( pieceComponent )
        {
          v48 = (WarBoardServantPieceBuffTurnComponent_o *)((__int64 (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))pieceComponent->klass->vtable._4_get_BuffTrunNotice.method)(
                                                             pieceComponent,
                                                             pieceComponent->klass->vtable._5_Initialize.methodPtr);
          if ( v48 )
            WarBoardServantPieceBuffTurnComponent__UpdateDisp(v48, 1, 0LL);
        }
      }
      WarBoardControlUiDataComponent__LocalSave(this, v46);
      animationObjects = v29->fields.animationObjects;
      if ( !animationObjects )
LABEL_38:
        sub_1C1AE30(listUiDataKey, v18);
      max_length = animationObjects->max_length;
      if ( max_length >= 1 )
      {
        v51 = 0;
        while ( 1 )
        {
          if ( v51 >= max_length )
            sub_1C1AE38(listUiDataKey, v18);
          listUiDataKey = (System_Collections_Generic_List_object__o *)animationObjects->m_Items[v51];
          if ( !listUiDataKey )
            break;
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)listUiDataKey,
                               (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          listUiDataKey = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Equality(
                                                                         (UnityEngine_Object_o *)Component_object,
                                                                         0LL,
                                                                         0LL);
          if ( ((unsigned __int8)listUiDataKey & 1) == 0 )
          {
            if ( isDisp )
              started = WarBoardControlUiDataComponent__PlayStartUiDataAnim(
                          this,
                          (SimpleAnimation_o *)Component_object,
                          v53);
            else
              started = WarBoardControlUiDataComponent__PlayEndUiDataAnim(
                          this,
                          (SimpleAnimation_o *)Component_object,
                          v29,
                          v54);
            listUiDataKey = (System_Collections_Generic_List_object__o *)UnityEngine_MonoBehaviour__StartCoroutine_70779684(
                                                                           (UnityEngine_MonoBehaviour_o *)this,
                                                                           started,
                                                                           0LL);
          }
          max_length = animationObjects->max_length;
          if ( (int)++v51 >= max_length )
            return;
        }
        goto LABEL_38;
      }
    }
  }
}


void __fastcall WarBoardControlUiDataComponent__SetUiDataFromLocalData(
        WarBoardControlUiDataComponent_o *this,
        System_String_array *keys,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_string__o *listUiDataKey; // x0
  int32_t size; // w2
  int v8; // w8

  if ( (byte_4BC53FF & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__AddRange__, keys);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__Clear__, v5);
    byte_4BC53FF = 1;
  }
  listUiDataKey = this->fields.listUiDataKey;
  if ( !listUiDataKey
    || (size = listUiDataKey->fields._size,
        v8 = listUiDataKey->fields._version + 1,
        listUiDataKey->fields._size = 0,
        listUiDataKey->fields._version = v8,
        size >= 1)
    && (System_Array__Clear((System_Array_o *)listUiDataKey->fields._items, 0, size, 0LL),
        (listUiDataKey = this->fields.listUiDataKey) == 0LL) )
  {
    sub_1C1AE30(listUiDataKey, keys);
  }
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)listUiDataKey,
    (System_Collections_Generic_IEnumerable_T__o *)keys,
    (const MethodInfo_363CA9C *)Method_System_Collections_Generic_List_string__AddRange__);
}


void __fastcall WarBoardControlUiDataComponent__SetUiDataOnBattle(
        WarBoardControlUiDataComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *onEnterBattleTurnOffObjects; // x19
  int max_length; // w8
  unsigned int v4; // w20

  onEnterBattleTurnOffObjects = this->fields.onEnterBattleTurnOffObjects;
  if ( !onEnterBattleTurnOffObjects )
    goto LABEL_9;
  max_length = onEnterBattleTurnOffObjects->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      if ( v4 >= max_length )
        sub_1C1AE38(this, method);
      this = (WarBoardControlUiDataComponent_o *)onEnterBattleTurnOffObjects->m_Items[v4];
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      max_length = onEnterBattleTurnOffObjects->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1C1AE30(this, method);
  }
}


void __fastcall WarBoardControlUiDataComponent__SetUiDataOnBattleAll(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1
  _QWORD *monitor; // x8
  __int64 v6; // x20
  int v7; // w8
  unsigned int v8; // w21
  __int64 v9; // x8
  int32_t v10; // w19

  if ( (byte_4BC53F7 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v1);
    sub_1C1ABD4(&WarBoardControlUiDataComponent_TypeInfo, v2);
    byte_4BC53F7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  monitor = Instance[27].monitor;
  if ( !monitor )
    goto LABEL_14;
  v6 = monitor[7];
  if ( !v6 )
    goto LABEL_14;
  v7 = *(_DWORD *)(v6 + 24);
  if ( v7 >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= v7 )
        sub_1C1AE38(Instance, v4);
      v9 = *(_QWORD *)(v6 + 8LL * (int)v8 + 32);
      if ( !v9 )
        break;
      v10 = *(_DWORD *)(v9 + 16);
      if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
      WarBoardControlUiDataComponent__SetUiDataOnBattleAll_36184280(v10, v4);
      v7 = *(_DWORD *)(v6 + 24);
      if ( (int)++v8 >= v7 )
        return;
    }
LABEL_14:
    sub_1C1AE30(Instance, v4);
  }
}


void __fastcall WarBoardControlUiDataComponent__SetUiDataOnBattleAll_36184280(
        int32_t squareIndex,
        const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  const MethodInfo *v4; // x1
  struct WarBoardStageNpcMaster_o *stageNpcMaster; // x8
  WarBoardControlUiDataComponent_o *list; // x0
  struct WarBoardPieceData_array *pieces; // x8
  WarBoardControlUiDataComponent_o *v8; // x0

  if ( (byte_4BC53F8 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4BC53F8 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_36443868(Instance, squareIndex, 0LL);
  if ( Instance )
  {
    stageNpcMaster = Instance[1].fields.stageNpcMaster;
    if ( !stageNpcMaster )
      goto LABEL_16;
    list = (WarBoardControlUiDataComponent_o *)stageNpcMaster[2].fields.list;
    if ( list )
      WarBoardControlUiDataComponent__SetUiDataOnBattle(list, v4);
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)WarBoardData__GetSquare(Instance, squareIndex, 0LL);
  if ( !Instance )
    return;
  pieces = Instance->fields.pieces;
  if ( !pieces )
LABEL_16:
    sub_1C1AE30(Instance, v4);
  v8 = (WarBoardControlUiDataComponent_o *)pieces->m_Items[19];
  if ( v8 )
    WarBoardControlUiDataComponent__SetUiDataOnBattle(v8, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardControlUiDataComponent__SetUiDataTurnObjects(
        WarBoardControlUiDataComponent_o *this,
        bool isDisp,
        WarBoardControlUiDataComponent_UiData_o *uiData,
        const MethodInfo *method)
{
  WarBoardControlUiDataComponent_o *v6; // x19
  struct UnityEngine_GameObject_array *turnOnObjects; // x22
  int max_length; // w8
  unsigned int v9; // w23
  struct UnityEngine_GameObject_array *turnOffObjects; // x22
  int v11; // w8
  bool v12; // w21
  unsigned int v13; // w20
  UnityEngine_Object_o *squareComponent; // x20

  v6 = this;
  if ( (byte_4BC5405 & 1) == 0 )
  {
    this = (WarBoardControlUiDataComponent_o *)sub_1C1ABD4(&UnityEngine_Object_TypeInfo, isDisp);
    byte_4BC5405 = 1;
  }
  if ( !uiData )
    goto LABEL_23;
  turnOnObjects = uiData->fields.turnOnObjects;
  if ( !turnOnObjects )
    goto LABEL_23;
  max_length = turnOnObjects->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( v9 < max_length )
    {
      this = (WarBoardControlUiDataComponent_o *)turnOnObjects->m_Items[v9];
      if ( !this )
        goto LABEL_23;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isDisp, 0LL);
      max_length = turnOnObjects->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_10;
    }
LABEL_22:
    sub_1C1AE38(this, isDisp);
  }
LABEL_10:
  turnOffObjects = uiData->fields.turnOffObjects;
  if ( !turnOffObjects )
    goto LABEL_23;
  v11 = turnOffObjects->max_length;
  v12 = !isDisp;
  if ( v11 >= 1 )
  {
    v13 = 0;
    while ( v13 < v11 )
    {
      this = (WarBoardControlUiDataComponent_o *)turnOffObjects->m_Items[v13];
      if ( !this )
        goto LABEL_23;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v12, 0LL);
      v11 = turnOffObjects->max_length;
      if ( (int)++v13 >= v11 )
        goto LABEL_16;
    }
    goto LABEL_22;
  }
LABEL_16:
  squareComponent = (UnityEngine_Object_o *)v6->fields.squareComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(squareComponent, 0LL, 0LL) )
  {
    this = (WarBoardControlUiDataComponent_o *)v6->fields.squareComponent;
    if ( this )
    {
      WarBoardSquareComponent__SetMovePoint((WarBoardSquareComponent_o *)this, v12, 0LL);
      return;
    }
LABEL_23:
    sub_1C1AE30(this, isDisp);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation(
        WarBoardControlUiDataComponent_o *this,
        bool isDisp,
        UnityEngine_GameObject_o *targetObject,
        bool immediatelyWhenOff,
        const MethodInfo *method)
{
  bool v9; // w23
  __int64 v10; // x21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4BC5403 & 1) == 0 )
  {
    sub_1C1ABD4(&WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_TypeInfo, isDisp);
    byte_4BC5403 = 1;
  }
  v9 = immediatelyWhenOff;
  v10 = sub_1C1AE20(WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  *(_DWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 32) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v10 + 32), (int64_t)this, v11, v12, v13, v14, v15, v16);
  *(_BYTE *)(v10 + 48) = isDisp;
  *(_QWORD *)(v10 + 40) = targetObject;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v10 + 40), (int64_t)targetObject, v17, v18, v19, v20, v21, v22);
  *(_BYTE *)(v10 + 49) = v9;
  return (System_Collections_IEnumerator_o *)v10;
}


System_Collections_IEnumerator_o *__fastcall WarBoardControlUiDataComponent__StartSyncAnimation(
        WarBoardControlUiDataComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BC5408 & 1) == 0 )
  {
    sub_1C1ABD4(&WarBoardControlUiDataComponent__StartSyncAnimation_d__43_TypeInfo, callback);
    byte_4BC5408 = 1;
  }
  v5 = sub_1C1AE20(WarBoardControlUiDataComponent__StartSyncAnimation_d__43_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)callback, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall WarBoardControlUiDataComponent__SyncAnimation(
        WarBoardControlUiDataComponent_o *this,
        System_Action_o *syncCallback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *started; // x1

  started = WarBoardControlUiDataComponent__StartSyncAnimation(this, syncCallback, method);
  UnityEngine_MonoBehaviour__StartCoroutine_70779684((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
}


void __fastcall WarBoardControlUiDataComponent__UpdateAdjustObjects(
        WarBoardControlUiDataComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *AdjustType; // x0
  __int64 v4; // x1
  struct System_Single_array *AdjustOffsetY; // x9
  struct UnityEngine_GameObject_array *adjustObjects; // x20
  int max_length; // w8
  float v8; // s8
  unsigned int v9; // w21
  Il2CppClass **v10; // x8
  UnityEngine_GameObject_o *v11; // x19
  float x; // s10
  float z; // s9
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  AdjustType = (UnityEngine_Transform_o *)WarBoardControlUiDataComponent__GetAdjustType(this, method);
  AdjustOffsetY = this->fields.AdjustOffsetY;
  if ( !AdjustOffsetY )
    goto LABEL_12;
  if ( (unsigned int)AdjustType >= AdjustOffsetY->max_length )
    goto LABEL_13;
  adjustObjects = this->fields.adjustObjects;
  if ( !adjustObjects )
LABEL_12:
    sub_1C1AE30(AdjustType, v4);
  max_length = adjustObjects->max_length;
  if ( max_length >= 1 )
  {
    v8 = AdjustOffsetY->m_Items[(int)AdjustType + 1];
    v9 = 0;
    while ( v9 < max_length )
    {
      v10 = &adjustObjects->obj.klass + (int)v9;
      v11 = (UnityEngine_GameObject_o *)v10[4];
      if ( !v11 )
        goto LABEL_12;
      AdjustType = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v10[4], 0LL);
      if ( !AdjustType )
        goto LABEL_12;
      localPosition = UnityEngine_Transform__get_localPosition(AdjustType, 0LL);
      x = localPosition.fields.x;
      z = localPosition.fields.z;
      AdjustType = UnityEngine_GameObject__get_transform(v11, 0LL);
      if ( !AdjustType )
        goto LABEL_12;
      v15.fields.x = x;
      v15.fields.y = v8;
      v15.fields.z = z;
      UnityEngine_Transform__set_localPosition(AdjustType, v15, 0LL);
      max_length = adjustObjects->max_length;
      if ( (int)++v9 >= max_length )
        return;
    }
LABEL_13:
    sub_1C1AE38(AdjustType, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardControlUiDataComponent__UpdateAdjustSituation(
        WarBoardControlUiDataComponent_o *this,
        bool immediatelyWhenOff,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1

  WarBoardControlUiDataComponent__UpdateOverlapObjects(this, (const MethodInfo *)immediatelyWhenOff);
  WarBoardControlUiDataComponent__UpdateOnExistsOtherTurnOffObjects(this, immediatelyWhenOff, v5);
  WarBoardControlUiDataComponent__UpdateAdjustObjects(this, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardControlUiDataComponent__UpdateAdjustSituationAll(
        System_Int32_array *squareIndexes,
        bool immediatelyWhenOff,
        const MethodInfo *method)
{
  System_Int32_array *v4; // x19
  __int64 v5; // x8
  unsigned __int64 v6; // x22
  bool v7; // w20
  int32_t v8; // w21

  v4 = squareIndexes;
  if ( (byte_4BC53F9 & 1) == 0 )
  {
    squareIndexes = (System_Int32_array *)sub_1C1ABD4(&WarBoardControlUiDataComponent_TypeInfo, immediatelyWhenOff);
    byte_4BC53F9 = 1;
  }
  if ( !v4 )
    sub_1C1AE30(squareIndexes, immediatelyWhenOff);
  v5 = *(_QWORD *)&v4->max_length;
  if ( (int)v5 >= 1 )
  {
    v6 = 0LL;
    v7 = immediatelyWhenOff;
    do
    {
      if ( v6 >= (unsigned int)v5 )
        sub_1C1AE38(squareIndexes, immediatelyWhenOff);
      v8 = v4->m_Items[v6 + 1];
      if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
      WarBoardControlUiDataComponent__UpdateAdjustSituationAll_36184748(v8, v7, method);
      LODWORD(v5) = v4->max_length;
      ++v6;
    }
    while ( (__int64)v6 < (int)v5 );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardControlUiDataComponent__UpdateAdjustSituationAll_36184748(
        int32_t squareIndex,
        bool immediatelyWhenOff,
        const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct WarBoardStageNpcMaster_o *stageNpcMaster; // x8
  WarBoardControlUiDataComponent_o *list; // x0
  const MethodInfo *v10; // x2
  struct WarBoardPieceData_array *pieces; // x8
  WarBoardControlUiDataComponent_o *v12; // x0

  if ( (byte_4BC53FA & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, immediatelyWhenOff);
    byte_4BC53FA = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_36443868(Instance, squareIndex, 0LL);
  if ( Instance )
  {
    stageNpcMaster = Instance[1].fields.stageNpcMaster;
    if ( !stageNpcMaster )
      goto LABEL_16;
    list = (WarBoardControlUiDataComponent_o *)stageNpcMaster[2].fields.list;
    if ( list )
      WarBoardControlUiDataComponent__UpdateAdjustSituation(list, immediatelyWhenOff, v7);
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)WarBoardData__GetSquare(Instance, squareIndex, 0LL);
  if ( !Instance )
    return;
  pieces = Instance->fields.pieces;
  if ( !pieces )
LABEL_16:
    sub_1C1AE30(Instance, v6);
  v12 = (WarBoardControlUiDataComponent_o *)pieces->m_Items[19];
  if ( v12 )
    WarBoardControlUiDataComponent__UpdateAdjustSituation(v12, immediatelyWhenOff, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardControlUiDataComponent__UpdateOnExistsOtherTurnOffObjects(
        WarBoardControlUiDataComponent_o *this,
        bool immediatelyWhenOff,
        const MethodInfo *method)
{
  WarBoardControlUiDataComponent_o *SquareIndex; // x0
  const MethodInfo *v6; // x2
  UnityEngine_Coroutine_o *IsExistsOther; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4
  struct UnityEngine_GameObject_array *onExistsOtherTurnOffObjects; // x22
  __int64 v11; // x8
  unsigned __int64 v12; // x23
  bool v13; // w20
  bool v14; // w21
  System_Collections_IEnumerator_o *v15; // x0

  if ( this->fields.compType != 1 )
  {
    SquareIndex = (WarBoardControlUiDataComponent_o *)WarBoardControlUiDataComponent__get_SquareIndex(
                                                        this,
                                                        (const MethodInfo *)immediatelyWhenOff);
    IsExistsOther = (UnityEngine_Coroutine_o *)WarBoardControlUiDataComponent__IsExistsOther(
                                                 SquareIndex,
                                                 (int32_t)SquareIndex,
                                                 v6);
    onExistsOtherTurnOffObjects = this->fields.onExistsOtherTurnOffObjects;
    if ( !onExistsOtherTurnOffObjects )
      sub_1C1AE30(IsExistsOther, v8);
    v11 = *(_QWORD *)&onExistsOtherTurnOffObjects->max_length;
    if ( (int)v11 >= 1 )
    {
      v12 = 0LL;
      v13 = ((unsigned __int8)IsExistsOther ^ 1) & 1;
      v14 = immediatelyWhenOff;
      do
      {
        if ( v12 >= (unsigned int)v11 )
          sub_1C1AE38(IsExistsOther, v8);
        v15 = WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation(
                this,
                v13,
                onExistsOtherTurnOffObjects->m_Items[v12],
                v14,
                v9);
        IsExistsOther = UnityEngine_MonoBehaviour__StartCoroutine_70779684(
                          (UnityEngine_MonoBehaviour_o *)this,
                          v15,
                          0LL);
        LODWORD(v11) = onExistsOtherTurnOffObjects->max_length;
        ++v12;
      }
      while ( (__int64)v12 < (int)v11 );
    }
  }
}


void __fastcall WarBoardControlUiDataComponent__UpdateOverlapObjects(
        WarBoardControlUiDataComponent_o *this,
        const MethodInfo *method)
{
  WarBoardControlUiDataComponent_o *Instance; // x0
  const MethodInfo *v4; // x1
  WarBoardData_o *onEnterBattleTurnOffObjects; // x20
  const MethodInfo *v6; // x2
  struct System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__o *listUiData; // x8
  char v8; // w21
  struct UnityEngine_GameObject_array *onOverlapObjects; // x22
  __int64 v10; // x8
  unsigned __int64 v11; // x23
  UnityEngine_GameObject_o *v12; // x20
  char v13; // w8

  if ( (byte_4BC5400 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4BC5400 = 1;
  }
  if ( !this->fields.compType )
    return;
  Instance = (WarBoardControlUiDataComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  onEnterBattleTurnOffObjects = (WarBoardData_o *)Instance[3].fields.onEnterBattleTurnOffObjects;
  Instance = (WarBoardControlUiDataComponent_o *)WarBoardControlUiDataComponent__get_SquareIndex(this, v4);
  if ( !onEnterBattleTurnOffObjects )
    goto LABEL_21;
  Instance = (WarBoardControlUiDataComponent_o *)WarBoardData__GetSquare(
                                                   onEnterBattleTurnOffObjects,
                                                   (int32_t)Instance,
                                                   0LL);
  if ( !Instance )
    goto LABEL_10;
  listUiData = Instance->fields.listUiData;
  if ( !listUiData )
    goto LABEL_21;
  Instance = *(WarBoardControlUiDataComponent_o **)&listUiData[4].fields._size;
  if ( Instance )
  {
    Instance = (WarBoardControlUiDataComponent_o *)WarBoardControlUiDataComponent__IsDispOverlapObjects(Instance, v4);
    v8 = (unsigned __int8)Instance ^ 1;
  }
  else
  {
LABEL_10:
    v8 = 1;
  }
  onOverlapObjects = this->fields.onOverlapObjects;
  if ( !onOverlapObjects )
LABEL_21:
    sub_1C1AE30(Instance, v4);
  v10 = *(_QWORD *)&onOverlapObjects->max_length;
  if ( (int)v10 >= 1 )
  {
    v11 = 0LL;
    do
    {
      if ( v11 >= (unsigned int)v10 )
        sub_1C1AE38(Instance, v4);
      v12 = onOverlapObjects->m_Items[v11];
      Instance = (WarBoardControlUiDataComponent_o *)WarBoardControlUiDataComponent__CheckCorrectActiveObject(
                                                       this,
                                                       v12,
                                                       v6);
      if ( ((unsigned int)Instance & 0x80000000) != 0 )
      {
        v13 = v8;
        if ( !v12 )
          goto LABEL_21;
      }
      else
      {
        if ( !v12 )
          goto LABEL_21;
        v13 = ((_DWORD)Instance == 1) & v8;
      }
      UnityEngine_GameObject__SetActive(v12, v13 & 1, 0LL);
      LODWORD(v10) = onOverlapObjects->max_length;
      ++v11;
    }
    while ( (__int64)v11 < (int)v10 );
  }
}


int32_t __fastcall WarBoardControlUiDataComponent__get_SquareIndex(
        WarBoardControlUiDataComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *pieceComponent; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct WarBoardPieceBaseComponent_o *v6; // x8
  struct WarBoardPieceData_o *pieceData; // x8
  int32_t *p_nowSquareIndex_k__BackingField; // x8
  UnityEngine_Object_o *squareComponent; // x20
  struct WarBoardSquareComponent_o *v10; // x8
  struct WarBoardSquareData_o *squareData; // x8

  if ( (byte_4BC53F5 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BC53F5 = 1;
  }
  pieceComponent = (UnityEngine_Object_o *)this->fields.pieceComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(pieceComponent, 0LL, 0LL);
  if ( v4 )
  {
    v6 = this->fields.pieceComponent;
    if ( v6 )
    {
      pieceData = v6->fields.pieceData;
      if ( pieceData )
      {
        p_nowSquareIndex_k__BackingField = &pieceData->fields._nowSquareIndex_k__BackingField;
        return *p_nowSquareIndex_k__BackingField;
      }
    }
    goto LABEL_17;
  }
  squareComponent = (UnityEngine_Object_o *)this->fields.squareComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(squareComponent, 0LL, 0LL);
  if ( v4 )
  {
    v10 = this->fields.squareComponent;
    if ( v10 )
    {
      squareData = v10->fields.squareData;
      if ( squareData )
      {
        p_nowSquareIndex_k__BackingField = &squareData->fields._squareIndex_k__BackingField;
        return *p_nowSquareIndex_k__BackingField;
      }
    }
LABEL_17:
    sub_1C1AE30(v4, v5);
  }
  return -1;
}


void __fastcall WarBoardControlUiDataComponent_UiData___ctor(
        WarBoardControlUiDataComponent_UiData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42___ctor(
        WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42__MoveNext(
        WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t _1__state; // w8
  WarBoardControlUiDataComponent_o *_4__this; // x20
  System_String_o *v10; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  const MethodInfo *v17; // x3
  WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_c *klass; // x8
  WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *v19; // x21
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 v22; // x0
  int64_t v23; // x2
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0
  struct WarBoardControlUiDataComponent_UiData_o *uiData; // x8
  struct UnityEngine_GameObject_array *animationObjects; // x22
  int max_length; // w8
  unsigned int v33; // w23
  Il2CppObject *Component_object; // x21
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x2
  int32_t SquareIndex; // w19

  v3 = this;
  if ( (byte_4BC540E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, method);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v4);
    sub_1C1ABD4(&SimpleAnimation_State_TypeInfo, v5);
    sub_1C1ABD4(&WarBoardControlUiDataComponent_TypeInfo, v6);
    this = (WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *)sub_1C1ABD4(&StringLiteral_19309/*"end"*/, v7);
    byte_4BC540E = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    goto LABEL_9;
  }
  if ( !_1__state )
  {
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_36;
    v10 = WarBoardControlUiDataComponent__PlayAnimation(
            _4__this,
            v3->fields.animation,
            (System_String_o *)StringLiteral_19309/*"end"*/,
            v2);
    v3->fields._stateName_5__2 = v10;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v3->fields._stateName_5__2, (int64_t)v10, v11, v12, v13, v14, v15, v16);
    this = (WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *)System_String__IsNullOrEmpty(
                                                                          v3->fields._stateName_5__2,
                                                                          0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
LABEL_19:
      uiData = v3->fields.uiData;
      if ( !uiData )
        goto LABEL_36;
      animationObjects = uiData->fields.animationObjects;
      if ( !animationObjects )
        goto LABEL_36;
      max_length = animationObjects->max_length;
      if ( max_length >= 1 )
      {
        v33 = 0;
        while ( 1 )
        {
          if ( v33 >= max_length )
            sub_1C1AE38(this, method);
          this = (WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *)animationObjects->m_Items[v33];
          if ( !this )
            break;
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)this,
                               (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *)UnityEngine_Object__op_Equality(
                                                                                (UnityEngine_Object_o *)Component_object,
                                                                                0LL,
                                                                                0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !_4__this )
              break;
            this = (WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *)WarBoardControlUiDataComponent__IsPlayingAnimation(
                                                                                  (WarBoardControlUiDataComponent_o *)this,
                                                                                  (SimpleAnimation_o *)Component_object,
                                                                                  (System_String_o *)StringLiteral_19309/*"end"*/,
                                                                                  v17);
            if ( ((unsigned __int8)this & 1) != 0 )
              return 0;
          }
          max_length = animationObjects->max_length;
          if ( (int)++v33 >= max_length )
            goto LABEL_31;
        }
LABEL_36:
        sub_1C1AE30(this, method);
      }
LABEL_31:
      if ( !_4__this )
        goto LABEL_36;
      WarBoardControlUiDataComponent__SetUiDataTurnObjects(_4__this, 0, v3->fields.uiData, v17);
      SquareIndex = WarBoardControlUiDataComponent__get_SquareIndex(_4__this, v35);
      if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
      WarBoardControlUiDataComponent__UpdateAdjustSituationAll_36184748(SquareIndex, 0, v36);
      return 0;
    }
LABEL_9:
    this = (WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *)v3->fields.animation;
    if ( !this )
      goto LABEL_36;
    this = (WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *)SimpleAnimation__GetState(
                                                                          (SimpleAnimation_o *)this,
                                                                          v3->fields._stateName_5__2,
                                                                          0LL);
    if ( !this )
      goto LABEL_36;
    klass = this->klass;
    v19 = this;
    v20 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v20;
        p_offset += 4;
        if ( !v20 )
          goto LABEL_15;
      }
      v22 = (__int64)(&klass->vtable._5_System_IDisposable_Dispose.method + 2 * *p_offset);
    }
    else
    {
LABEL_15:
      v22 = sub_1C6CBB4(this, SimpleAnimation_State_TypeInfo, 5LL);
    }
    if ( (*(float (__fastcall **)(WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *, _QWORD))v22)(
           v19,
           *(_QWORD *)(v22 + 8)) < 1.0 )
    {
      v3->fields.__2__current = 0LL;
      p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
      sub_1C1AB78(p__2__current, 0LL, v23, (int32_t)v17, v24, v25, v26, v27);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    }
    goto LABEL_19;
  }
  return 0;
}


Il2CppObject *__fastcall WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42__System_Collections_IEnumerator_Reset(
        WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C1ABE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C1AE20(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C1ABE8(&Method_WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_System_Collections_IEnumerator_Reset__);
  sub_1C1ACFC(v3, v4);
}


Il2CppObject *__fastcall WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42__System_Collections_IEnumerator_get_Current(
        WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42__System_IDisposable_Dispose(
        WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41___ctor(
        WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41__MoveNext(
        WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  WarBoardControlUiDataComponent_o *_4__this; // x20
  System_String_o *v8; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  const MethodInfo *v15; // x3
  WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_c *klass; // x8
  WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *v17; // x21
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 v20; // x0
  int64_t v21; // x2
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0

  v3 = this;
  if ( (byte_4BC540F & 1) == 0 )
  {
    sub_1C1ABD4(&SimpleAnimation_State_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_23888/*"start"*/, v4);
    this = (WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *)sub_1C1ABD4(&StringLiteral_21573/*"loop"*/, v5);
    byte_4BC540F = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    goto LABEL_9;
  }
  if ( !_1__state )
  {
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_22;
    v8 = WarBoardControlUiDataComponent__PlayAnimation(
           _4__this,
           v3->fields.animation,
           (System_String_o *)StringLiteral_23888/*"start"*/,
           v2);
    v3->fields._stateName_5__2 = v8;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v3->fields._stateName_5__2, (int64_t)v8, v9, v10, v11, v12, v13, v14);
    if ( System_String__IsNullOrEmpty(v3->fields._stateName_5__2, 0LL) )
    {
LABEL_20:
      WarBoardControlUiDataComponent__PlayAnimation(
        _4__this,
        v3->fields.animation,
        (System_String_o *)StringLiteral_21573/*"loop"*/,
        v15);
      return 0;
    }
LABEL_9:
    this = (WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *)v3->fields.animation;
    if ( this )
    {
      this = (WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *)SimpleAnimation__GetState(
                                                                              (SimpleAnimation_o *)this,
                                                                              v3->fields._stateName_5__2,
                                                                              0LL);
      if ( this )
      {
        klass = this->klass;
        v17 = this;
        v18 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v18;
            p_offset += 4;
            if ( !v18 )
              goto LABEL_15;
          }
          v20 = (__int64)(&klass->vtable._5_System_IDisposable_Dispose.method + 2 * *p_offset);
        }
        else
        {
LABEL_15:
          v20 = sub_1C6CBB4(this, SimpleAnimation_State_TypeInfo, 5LL);
        }
        if ( (*(float (__fastcall **)(WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *, _QWORD))v20)(
               v17,
               *(_QWORD *)(v20 + 8)) < 1.0 )
        {
          v3->fields.__2__current = 0LL;
          p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
          sub_1C1AB78(p__2__current, 0LL, v21, (int32_t)v15, v22, v23, v24, v25);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
          return result;
        }
        if ( _4__this )
          goto LABEL_20;
      }
    }
LABEL_22:
    sub_1C1AE30(this, method);
  }
  return 0;
}


Il2CppObject *__fastcall WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41__System_Collections_IEnumerator_Reset(
        WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C1ABE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C1AE20(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C1ABE8(&Method_WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_System_Collections_IEnumerator_Reset__);
  sub_1C1ACFC(v3, v4);
}


Il2CppObject *__fastcall WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41__System_Collections_IEnumerator_get_Current(
        WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41__System_IDisposable_Dispose(
        WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37___ctor(
        WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37__MoveNext(
        WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t _1__state; // w8
  WarBoardControlUiDataComponent_o *_4__this; // x20
  int32_t v11; // w0
  Il2CppObject *Component_object; // x0
  SimpleAnimation_o **p_simpleAnimation_5__2; // x21
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  SimpleAnimation_o *v20; // x22
  _BOOL8 v21; // x0
  const MethodInfo *v22; // x3
  _BOOL8 IsPlayingAnimation; // x0
  const MethodInfo *v24; // x3
  _BOOL4 isDisp; // w8
  SimpleAnimation_o *v26; // x21
  struct UnityEngine_GameObject_o *targetObject; // x8
  bool v28; // w1
  WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_c *klass; // x8
  WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *v30; // x21
  __int64 v31; // x9
  int32_t *p_offset; // x10
  __int64 v33; // x0
  int64_t v34; // x2
  const MethodInfo *v35; // x3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0
  const MethodInfo *v42; // x3
  __int64 *v43; // x8
  System_String_o *v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7

  v3 = this;
  if ( (byte_4BC5410 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, method);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v4);
    sub_1C1ABD4(&SimpleAnimation_State_TypeInfo, v5);
    sub_1C1ABD4(&StringLiteral_23888/*"start"*/, v6);
    sub_1C1ABD4(&StringLiteral_19309/*"end"*/, v7);
    this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)sub_1C1ABD4(
                                                                                        &StringLiteral_21573/*"loop"*/,
                                                                                        v8);
    byte_4BC5410 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    goto LABEL_33;
  }
  if ( !_1__state )
  {
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_55;
    v11 = WarBoardControlUiDataComponent__CheckCorrectActiveObject(_4__this, v3->fields.targetObject, v2);
    if ( (v11 & 0x80000000) == 0 )
      v3->fields.isDisp = v11 == 1 && v3->fields.isDisp;
    this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)v3->fields.targetObject;
    if ( !this )
      goto LABEL_55;
    this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)UnityEngine_GameObject__get_transform(
                                                                                        (UnityEngine_GameObject_o *)this,
                                                                                        0LL);
    if ( !this )
      goto LABEL_55;
    this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)UnityEngine_Transform__get_parent(
                                                                                        (UnityEngine_Transform_o *)this,
                                                                                        0LL);
    if ( !this )
      goto LABEL_55;
    this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)UnityEngine_Component__get_gameObject(
                                                                                        (UnityEngine_Component_o *)this,
                                                                                        0LL);
    if ( !this )
      goto LABEL_55;
    if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)this, 0LL) )
    {
      this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)v3->fields.targetObject;
      if ( !this )
        goto LABEL_55;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
      v3->fields._simpleAnimation_5__2 = (struct SimpleAnimation_o *)Component_object;
      p_simpleAnimation_5__2 = &v3->fields._simpleAnimation_5__2;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&v3->fields._simpleAnimation_5__2,
        (int64_t)Component_object,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
      if ( !v3->fields.isDisp )
        goto LABEL_23;
      this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)v3->fields.targetObject;
      if ( !this )
        goto LABEL_55;
      if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)this, 0LL) )
      {
        v20 = *p_simpleAnimation_5__2;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v21 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v20, 0LL, 0LL);
        if ( v21 )
        {
          IsPlayingAnimation = WarBoardControlUiDataComponent__IsPlayingAnimation(
                                 (WarBoardControlUiDataComponent_o *)v21,
                                 *p_simpleAnimation_5__2,
                                 (System_String_o *)StringLiteral_23888/*"start"*/,
                                 v22);
          if ( IsPlayingAnimation
            || WarBoardControlUiDataComponent__IsPlayingAnimation(
                 (WarBoardControlUiDataComponent_o *)IsPlayingAnimation,
                 *p_simpleAnimation_5__2,
                 (System_String_o *)StringLiteral_21573/*"loop"*/,
                 v24) )
          {
            return 0;
          }
        }
      }
      isDisp = v3->fields.isDisp;
      if ( !v3->fields.isDisp )
      {
LABEL_23:
        this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)v3->fields.targetObject;
        if ( !this )
          goto LABEL_55;
        if ( !UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)this, 0LL) )
          return 0;
        isDisp = v3->fields.isDisp;
      }
      if ( (v3->fields.immediatelyWhenOff & (isDisp ^ 0xFF)) != 0 )
        goto LABEL_51;
      v26 = *p_simpleAnimation_5__2;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)UnityEngine_Object__op_Equality(
                                                                                          (UnityEngine_Object_o *)v26,
                                                                                          0LL,
                                                                                          0LL);
      targetObject = v3->fields.targetObject;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( targetObject )
        {
          v28 = v3->fields.isDisp;
          this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)v3->fields.targetObject;
LABEL_53:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v28, 0LL);
          return 0;
        }
        goto LABEL_55;
      }
      if ( !targetObject )
        goto LABEL_55;
      UnityEngine_GameObject__SetActive(v3->fields.targetObject, 1, 0LL);
      if ( v3->fields.isDisp )
        v43 = &StringLiteral_23888/*"start"*/;
      else
        v43 = &StringLiteral_19309/*"end"*/;
      v44 = WarBoardControlUiDataComponent__PlayAnimation(
              _4__this,
              v3->fields._simpleAnimation_5__2,
              (System_String_o *)*v43,
              v42);
      v3->fields._stateName_5__3 = v44;
      sub_1C1AB78((PartyOrganizationUtility_o *)&v3->fields._stateName_5__3, (int64_t)v44, v45, v46, v47, v48, v49, v50);
      this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)System_String__IsNullOrEmpty(
                                                                                          v3->fields._stateName_5__3,
                                                                                          0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
LABEL_48:
        if ( v3->fields.isDisp )
        {
          if ( !_4__this )
            goto LABEL_55;
          WarBoardControlUiDataComponent__PlayAnimation(
            _4__this,
            v3->fields._simpleAnimation_5__2,
            (System_String_o *)StringLiteral_21573/*"loop"*/,
            v35);
          return 0;
        }
LABEL_51:
        this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)v3->fields.targetObject;
        if ( this )
        {
          v28 = 0;
          goto LABEL_53;
        }
LABEL_55:
        sub_1C1AE30(this, method);
      }
LABEL_33:
      this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)v3->fields._simpleAnimation_5__2;
      if ( !this )
        goto LABEL_55;
      this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)SimpleAnimation__GetState(
                                                                                          (SimpleAnimation_o *)this,
                                                                                          v3->fields._stateName_5__3,
                                                                                          0LL);
      if ( !this )
        goto LABEL_55;
      klass = this->klass;
      v30 = this;
      v31 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v31;
          p_offset += 4;
          if ( !v31 )
            goto LABEL_39;
        }
        v33 = (__int64)(&klass->vtable._5_System_IDisposable_Dispose.method + 2 * *p_offset);
      }
      else
      {
LABEL_39:
        v33 = sub_1C6CBB4(this, SimpleAnimation_State_TypeInfo, 5LL);
      }
      if ( (*(float (__fastcall **)(WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *, _QWORD))v33)(
             v30,
             *(_QWORD *)(v33 + 8)) < 1.0 )
      {
        v3->fields.__2__current = 0LL;
        p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
        sub_1C1AB78(p__2__current, 0LL, v34, (int32_t)v35, v36, v37, v38, v39);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
        return result;
      }
      goto LABEL_48;
    }
  }
  return 0;
}


Il2CppObject *__fastcall WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37__System_Collections_IEnumerator_Reset(
        WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C1ABE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C1AE20(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C1ABE8(&Method_WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_System_Collections_IEnumerator_Reset__);
  sub_1C1ACFC(v3, v4);
}


Il2CppObject *__fastcall WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37__System_Collections_IEnumerator_get_Current(
        WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37__System_IDisposable_Dispose(
        WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall WarBoardControlUiDataComponent__StartSyncAnimation_d__43___ctor(
        WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall WarBoardControlUiDataComponent__StartSyncAnimation_d__43__MoveNext(
        WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int32_t _1__state; // w8
  struct WarBoardControlUiDataComponent_o *_4__this; // x21
  UnityEngine_Object_o **p_targetSimpleAnimation_5__2; // x20
  struct UnityEngine_GameObject_array *syncAnimationObjects; // x23
  int max_length; // w8
  unsigned int v21; // w24
  __int64 v22; // x8
  UnityEngine_GameObject_o *v23; // x22
  Il2CppObject *Component_object; // x21
  Il2CppObject *v25; // x21
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  UnityEngine_Object_o *v32; // x20
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o **p_animState_5__3; // x20
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v41; // x1
  System_Collections_IEnumerator_o *v42; // x21
  System_Collections_IEnumerator_c *v43; // x8
  __int64 v44; // x9
  int32_t *v45; // x10
  __int64 v46; // x0
  __int64 v47; // x1
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  float v54; // s8
  signed int v55; // w8
  UnityEngine_Object_o *targetSimpleAnimation_5__2; // x20
  System_Collections_Generic_IEnumerable_TSource__o *States; // x0
  Il2CppObject *object; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  struct SimpleAnimation_State_o *state_5__6; // x21
  SimpleAnimation_State_c *klass; // x8
  __int64 v67; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  PartyOrganizationUtility_o *v70; // x19
  char v71; // w8
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  float v78; // s0
  struct System_Action_o *callback; // x8
  Il2CppObject **p__2__current; // x19
  System_Collections_IEnumerator_c *v82; // x8
  __int64 v83; // x9
  System_Collections_IEnumerator_c **v84; // x10
  __int64 v85; // x0
  UnityEngine_AnimationState_c **v86; // x0
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  __int64 v93; // x22
  __int64 v94; // x0
  __int64 v95; // x8
  __int64 v96; // x21
  __int64 v97; // x9
  int *v98; // x10
  __int64 v99; // x0
  float normalizedTime; // s8
  unsigned int v101; // w9
  unsigned int v102; // w8
  void *v103; // x0
  void *v104; // x23
  int v105; // w1
  __int64 v106; // x0
  __int64 v107; // x19
  __int64 v108; // x8
  __int64 v109; // x9
  int *v110; // x10
  __int64 v111; // x0

  v8 = this;
  if ( (byte_4BC5411 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_AnimationState_TypeInfo, method);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_First_SimpleAnimation_State___, v9);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_Animation___, v10);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v11);
    sub_1C1ABD4(&System_IDisposable_TypeInfo, v12);
    sub_1C1ABD4(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v14);
    this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)sub_1C1ABD4(
                                                                           &SimpleAnimation_State_TypeInfo,
                                                                           v15);
    byte_4BC5411 = 1;
  }
  _1__state = v8->fields.__1__state;
  if ( _1__state == 2 )
  {
    v8->fields.__1__state = -1;
LABEL_58:
    state_5__6 = v8->fields._state_5__6;
    if ( !state_5__6 )
      goto LABEL_105;
    klass = state_5__6->klass;
    v67 = *(unsigned __int16 *)(&state_5__6->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&state_5__6->klass->_2.bitflags2 + 3) )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v67;
        p_offset += 2;
        if ( !v67 )
          goto LABEL_63;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5].method;
    }
    else
    {
LABEL_63:
      p_method = sub_1C6CBB4(v8->fields._state_5__6, SimpleAnimation_State_TypeInfo, 5LL);
    }
    v78 = (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))p_method)(
            state_5__6,
            *(_QWORD *)(p_method + 8));
    if ( v78 > 0.0 && v78 < 1.0 && v8->fields._time_5__5 <= v78 )
    {
      v8->fields.__2__current = 0LL;
      p__2__current = &v8->fields.__2__current;
      *((float *)p__2__current + 11) = v78;
      sub_1C1AB78((PartyOrganizationUtility_o *)p__2__current, 0LL, v72, v73, v74, v75, v76, v77);
      *((_DWORD *)p__2__current - 2) = 2;
      v71 = 1;
      return v71 & 1;
    }
    v8->fields._state_5__6 = 0LL;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v8->fields._state_5__6, 0LL, v72, v73, v74, v75, v76, v77);
    goto LABEL_70;
  }
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
    goto LABEL_43;
  }
  if ( _1__state )
  {
LABEL_72:
    v71 = 0;
    return v71 & 1;
  }
  _4__this = v8->fields.__4__this;
  v8->fields._targetSimpleAnimation_5__2 = 0LL;
  p_targetSimpleAnimation_5__2 = (UnityEngine_Object_o **)&v8->fields._targetSimpleAnimation_5__2;
  v8->fields.__1__state = -1;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v8->fields._targetSimpleAnimation_5__2, 0LL, v2, v3, v4, v5, v6, v7);
  if ( !_4__this )
    goto LABEL_105;
  syncAnimationObjects = _4__this->fields.syncAnimationObjects;
  if ( !syncAnimationObjects )
    goto LABEL_105;
  max_length = syncAnimationObjects->max_length;
  if ( max_length >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= max_length )
        sub_1C1AE38(this, method);
      v22 = (__int64)syncAnimationObjects + 8 * (int)v21;
      v23 = *(UnityEngine_GameObject_o **)(v22 + 32);
      if ( !v23 )
        break;
      this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)UnityEngine_GameObject__get_activeInHierarchy(
                                                                             *(UnityEngine_GameObject_o **)(v22 + 32),
                                                                             0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             v23,
                             (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)UnityEngine_Object__op_Inequality(
                                                                               (UnityEngine_Object_o *)Component_object,
                                                                               0LL,
                                                                               0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !Component_object )
            break;
          if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)Component_object, 0LL) )
            goto LABEL_26;
        }
        v25 = UnityEngine_GameObject__GetComponent_object_(
                v23,
                (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)UnityEngine_Object__op_Inequality(
                                                                               (UnityEngine_Object_o *)v25,
                                                                               0LL,
                                                                               0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v25 )
            break;
          this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)SimpleAnimation__get_isPlaying(
                                                                                 (SimpleAnimation_o *)v25,
                                                                                 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            *p_targetSimpleAnimation_5__2 = (UnityEngine_Object_o *)v25;
            sub_1C1AB78(
              (PartyOrganizationUtility_o *)&v8->fields._targetSimpleAnimation_5__2,
              (int64_t)v25,
              v26,
              v27,
              v28,
              v29,
              v30,
              v31);
          }
        }
      }
      max_length = syncAnimationObjects->max_length;
      if ( (int)++v21 >= max_length )
        goto LABEL_25;
    }
LABEL_105:
    sub_1C1AE30(this, method);
  }
LABEL_25:
  Component_object = 0LL;
LABEL_26:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    v32 = *p_targetSimpleAnimation_5__2;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)UnityEngine_Object__op_Equality(v32, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      goto LABEL_70;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
LABEL_52:
    targetSimpleAnimation_5__2 = (UnityEngine_Object_o *)v8->fields._targetSimpleAnimation_5__2;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)UnityEngine_Object__op_Inequality(
                                                                           targetSimpleAnimation_5__2,
                                                                           0LL,
                                                                           0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)v8->fields._targetSimpleAnimation_5__2;
      v8->fields._time_5__5 = -1.0;
      if ( !this )
        goto LABEL_105;
      States = (System_Collections_Generic_IEnumerable_TSource__o *)SimpleAnimation__GetStates(
                                                                      (SimpleAnimation_o *)this,
                                                                      0LL);
      object = System_Linq_Enumerable__First_object_(
                 States,
                 (const MethodInfo_2FBFF10 *)Method_System_Linq_Enumerable_First_SimpleAnimation_State___);
      v8->fields._state_5__6 = (struct SimpleAnimation_State_o *)object;
      sub_1C1AB78((PartyOrganizationUtility_o *)&v8->fields._state_5__6, (int64_t)object, v59, v60, v61, v62, v63, v64);
      goto LABEL_58;
    }
LABEL_70:
    callback = v8->fields.callback;
    if ( !callback )
      goto LABEL_105;
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
    goto LABEL_72;
  }
  v8->fields._animState_5__3 = 0LL;
  p_animState_5__3 = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o **)&v8->fields._animState_5__3;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v8->fields._animState_5__3, 0LL, v33, v34, v35, v36, v37, v38);
  if ( !Component_object )
    goto LABEL_105;
  Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)Component_object, 0LL);
  v42 = Enumerator;
  if ( !Enumerator )
    sub_1C1AE30(0LL, v41);
  v43 = Enumerator->klass;
  v44 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v45 = &v43->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)v45 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      --v44;
      v45 += 4;
      if ( !v44 )
        goto LABEL_41;
    }
    v46 = (__int64)&v43->vtable[*v45].method;
  }
  else
  {
LABEL_41:
    v46 = sub_1C6CBB4(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v46)(v42, *(_QWORD *)(v46 + 8)) & 1) != 0 )
  {
    v82 = v42->klass;
    v83 = *(unsigned __int16 *)(&v42->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v42->klass->_2.bitflags2 + 3) )
    {
      v84 = (System_Collections_IEnumerator_c **)&v82->_1.interfaceOffsets->offset;
      while ( *(v84 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v83;
        v84 += 2;
        if ( !v83 )
          goto LABEL_81;
      }
      v85 = (__int64)&v82->vtable[*(_DWORD *)v84 + 1].method;
    }
    else
    {
LABEL_81:
      v85 = sub_1C6CBB4(v42, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v86 = (UnityEngine_AnimationState_c **)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v85)(
                                             v42,
                                             *(_QWORD *)(v85 + 8));
    if ( v86 && *v86 != UnityEngine_AnimationState_TypeInfo )
    {
      sub_1C1B0F0(v86);
      v104 = v103;
      if ( v105 != 1 )
      {
        v106 = sub_1C1AD10(v42, System_IDisposable_TypeInfo);
        v107 = v106;
        if ( v106 )
        {
          v108 = *(_QWORD *)v106;
          v109 = *(unsigned __int16 *)(*(_QWORD *)v106 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v106 + 302LL) )
          {
            v110 = (int *)(*(_QWORD *)(v108 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v110 - 1) != System_IDisposable_TypeInfo )
            {
              --v109;
              v110 += 4;
              if ( !v109 )
                goto LABEL_116;
            }
            v111 = v108 + 16LL * *v110 + 312;
          }
          else
          {
LABEL_116:
            v111 = sub_1C6CBB4(v106, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v111)(v107, *(_QWORD *)(v111 + 8));
        }
        sub_1D05664(v104);
      }
      v93 = *(_QWORD *)__cxa_begin_catch(v103);
      __cxa_end_catch();
      goto LABEL_87;
    }
    *p_animState_5__3 = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)v86;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v8->fields._animState_5__3, (int64_t)v86, v87, v88, v89, v90, v91, v92);
  }
  v93 = 0LL;
LABEL_87:
  v94 = sub_1C1AD10(v42, System_IDisposable_TypeInfo);
  if ( v94 )
  {
    v95 = *(_QWORD *)v94;
    v96 = v94;
    v97 = *(unsigned __int16 *)(*(_QWORD *)v94 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v94 + 302LL) )
    {
      v98 = (int *)(*(_QWORD *)(v95 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v98 - 1) != System_IDisposable_TypeInfo )
      {
        --v97;
        v98 += 4;
        if ( !v97 )
          goto LABEL_92;
      }
      v99 = v95 + 16LL * *v98 + 312;
    }
    else
    {
LABEL_92:
      v99 = sub_1C6CBB4(v94, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v99)(v96, *(_QWORD *)(v99 + 8));
  }
  if ( v93 )
    sub_1C1AE28(v93);
  this = *p_animState_5__3;
  if ( !*p_animState_5__3 )
    goto LABEL_105;
  normalizedTime = UnityEngine_AnimationState__get_normalizedTime((UnityEngine_AnimationState_o *)this, 0LL);
  if ( !byte_4BC2140 )
  {
    sub_1C1ABD4(&System_Math_TypeInfo, method);
    byte_4BC2140 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v101 = vcvtms_s32_f32(normalizedTime);
  if ( floorf(normalizedTime) == INFINITY )
    v102 = 0x80000000;
  else
    v102 = v101;
  v8->fields._startNormalizedTime_5__4 = v102;
LABEL_43:
  this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)v8->fields._animState_5__3;
  if ( !this )
    goto LABEL_105;
  v54 = UnityEngine_AnimationState__get_normalizedTime((UnityEngine_AnimationState_o *)this, 0LL);
  if ( !byte_4BC2140 )
  {
    sub_1C1ABD4(&System_Math_TypeInfo, v47);
    byte_4BC2140 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v55 = vcvtms_s32_f32(v54);
  if ( floorf(v54) == INFINITY )
    v55 = 0x80000000;
  if ( v8->fields._startNormalizedTime_5__4 < v55 )
  {
    v8->fields._animState_5__3 = 0LL;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v8->fields._animState_5__3, 0LL, v48, v49, v50, v51, v52, v53);
    goto LABEL_52;
  }
  v8->fields.__2__current = 0LL;
  v70 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
  sub_1C1AB78(v70, 0LL, v48, v49, v50, v51, v52, v53);
  v71 = 1;
  *(_DWORD *)&v70[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
  return v71 & 1;
}


Il2CppObject *__fastcall WarBoardControlUiDataComponent__StartSyncAnimation_d__43__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn WarBoardControlUiDataComponent__StartSyncAnimation_d__43__System_Collections_IEnumerator_Reset(
        WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C1ABE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C1AE20(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C1ABE8(&Method_WarBoardControlUiDataComponent__StartSyncAnimation_d__43_System_Collections_IEnumerator_Reset__);
  sub_1C1ACFC(v3, v4);
}


Il2CppObject *__fastcall WarBoardControlUiDataComponent__StartSyncAnimation_d__43__System_Collections_IEnumerator_get_Current(
        WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall WarBoardControlUiDataComponent__StartSyncAnimation_d__43__System_IDisposable_Dispose(
        WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall WarBoardControlUiDataComponent___c__DisplayClass25_0___ctor(
        WarBoardControlUiDataComponent___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardControlUiDataComponent___c__DisplayClass25_0___SetUiData_b__0(
        WarBoardControlUiDataComponent___c__DisplayClass25_0_o *this,
        WarBoardControlUiDataComponent_UiData_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C1AE30(this, 0LL);
  return System_String__op_Equality(a->fields.key, this->fields.key, 0LL);
}


void __fastcall WarBoardControlUiDataComponent___c__DisplayClass26_0___ctor(
        WarBoardControlUiDataComponent___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardControlUiDataComponent___c__DisplayClass26_0___ResumeUiData_b__0(
        WarBoardControlUiDataComponent___c__DisplayClass26_0_o *this,
        WarBoardControlUiDataComponent_UiData_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C1AE30(this, 0LL);
  return System_String__op_Equality(a->fields.key, this->fields.key, 0LL);
}


void __fastcall WarBoardControlUiDataComponent___c__DisplayClass34_0___ctor(
        WarBoardControlUiDataComponent___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardControlUiDataComponent___c__DisplayClass34_0___CheckCorrectActiveObject_b__0(
        WarBoardControlUiDataComponent___c__DisplayClass34_0_o *this,
        WarBoardControlUiDataComponent_UiData_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C1AE30(this, 0LL);
  return System_String__op_Equality(a->fields.key, this->fields.key, 0LL);
}