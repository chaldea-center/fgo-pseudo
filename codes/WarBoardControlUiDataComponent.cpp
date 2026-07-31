void WarBoardControlUiDataComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_5935E4C & 1) == 0 )
  {
    sub_21FFC50(&WarBoardControlUiDataComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_3170/*"Barrier"*/);
    byte_5935E4C = 1;
  }
  v7 = StringLiteral_3170/*"Barrier"*/;
  WarBoardControlUiDataComponent_TypeInfo->static_fields->UI_DATA_KEY_BARRIER = (struct System_String_o *)StringLiteral_3170/*"Barrier"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)WarBoardControlUiDataComponent_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void WarBoardControlUiDataComponent___ctor(WarBoardControlUiDataComponent_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x0
  System_RuntimeFieldHandle_o v4; // x1
  struct System_Single_array *v5; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Collections_Generic_List_object__o *v12; // x20
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Collections_Generic_List_object__o *v19; // x20
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( (byte_5935E4B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    sub_21FFC50(&float___TypeInfo);
    sub_21FFC50(&Field__PrivateImplementationDetails__64464566F592BAB0A74DD80EB47024C0ECA2BB914D37B27E78F5532363736E1B);
    byte_5935E4B = 1;
  }
  v3 = (System_Array_o *)sub_21FFD10(float___TypeInfo, 7);
  v4.fields.value = Field__PrivateImplementationDetails__64464566F592BAB0A74DD80EB47024C0ECA2BB914D37B27E78F5532363736E1B;
  v5 = (struct System_Single_array *)v3;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v3, v4, 0);
  this->fields.AdjustOffsetY = v5;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.AdjustOffsetY, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData___ctor__);
  this->fields.listUiData = (struct System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__o *)v12;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.listUiData, (int32_t)v12, v13, v14, v15, v16, v17, v18);
  v19 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.listUiDataKey = (struct System_Collections_Generic_List_string__o *)v19;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.listUiDataKey,
    (int32_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void WarBoardControlUiDataComponent__Awake(WarBoardControlUiDataComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  Il2CppObject *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5935E35 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_WarBoardPieceBaseComponent___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_WarBoardSquareComponent___);
    byte_5935E35 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_WarBoardPieceBaseComponent___);
  this->fields.pieceComponent = (struct WarBoardPieceBaseComponent_o *)Component_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.pieceComponent,
    (int32_t)Component_object,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_WarBoardSquareComponent___);
  this->fields.squareComponent = (struct WarBoardSquareComponent_o *)v10;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.squareComponent,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


int32_t WarBoardControlUiDataComponent__CheckCorrectActiveObject(
        WarBoardControlUiDataComponent_o *this,
        UnityEngine_GameObject_o *targetObject,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *listUiDataKey; // x0
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  int32_t current; // w1
  System_Collections_Generic_List_object__o *listUiData; // x22
  System_Predicate_object__o *v17; // x23
  __int64 v18; // x0
  __int64 v19; // x1
  Il2CppObject *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  Il2CppObject *v23; // x21
  _QWORD *monitor; // x23
  __int64 v25; // x8
  unsigned __int64 v26; // x26
  UnityEngine_Object_o *v27; // x22
  Il2CppClass *klass; // x22
  const char *namespaze; // x8
  unsigned __int64 v30; // x23
  UnityEngine_Object_o *v31; // x21
  int32_t v32; // w19
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_5935E40 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo);
    sub_21FFC50(&Method_WarBoardControlUiDataComponent___c__DisplayClass34_0__CheckCorrectActiveObject_b__0__);
    sub_21FFC50(&WarBoardControlUiDataComponent___c__DisplayClass34_0_TypeInfo);
    byte_5935E40 = 1;
  }
  listUiDataKey = this->fields.listUiDataKey;
  memset(&v35, 0, sizeof(v35));
  if ( !listUiDataKey )
    sub_21FFECC(0, targetObject);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    (System_Collections_Generic_List_object__o *)listUiDataKey,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v35 = v34;
  v34.fields._list = 0;
  *(_QWORD *)&v34.fields._index = &v35;
  while ( 1 )
  {
    do
    {
LABEL_5:
      if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v35,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
      {
        v32 = -1;
        goto LABEL_28;
      }
      v6 = sub_21FFEBC(WarBoardControlUiDataComponent___c__DisplayClass34_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v6, 0);
      if ( !v6 )
        sub_21FFECC(v7, v8);
      current = (int32_t)v35.fields._current;
      *(_QWORD *)(v6 + 16) = v35.fields._current;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v6 + 16), current, v9, v10, v11, v12, v13, v14);
      listUiData = (System_Collections_Generic_List_object__o *)this->fields.listUiData;
      v17 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo);
      System_Predicate_object____ctor(
        v17,
        (Il2CppObject *)v6,
        Method_WarBoardControlUiDataComponent___c__DisplayClass34_0__CheckCorrectActiveObject_b__0__,
        0);
      if ( !listUiData )
        sub_21FFECC(v18, v19);
      v20 = System_Collections_Generic_List_object___Find(
              listUiData,
              (System_Predicate_T__o *)v17,
              (const MethodInfo_4450188 *)Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__);
      v23 = v20;
    }
    while ( !v20 );
    monitor = v20[1].monitor;
    if ( !monitor )
      sub_21FFECC(v20, v21);
    v25 = monitor[3];
    if ( (int)v25 >= 1 )
      break;
LABEL_17:
    klass = v23[2].klass;
    if ( !klass )
      sub_21FFECC(v20, v21);
    namespaze = klass->_1.namespaze;
    if ( (int)namespaze >= 1 )
    {
      v30 = 0;
      while ( 1 )
      {
        if ( v30 >= (unsigned int)namespaze )
          sub_21FFED4(v20);
        v31 = (UnityEngine_Object_o *)*((_QWORD *)&klass->_1.byval_arg.data + v30);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
        v20 = (Il2CppObject *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)targetObject, v31, 0);
        if ( ((unsigned __int8)v20 & 1) != 0 )
          break;
        LODWORD(namespaze) = klass->_1.namespaze;
        if ( (__int64)++v30 >= (int)namespaze )
          goto LABEL_5;
      }
      v32 = 0;
      goto LABEL_28;
    }
  }
  v26 = 0;
  while ( 1 )
  {
    if ( v26 >= (unsigned int)v25 )
      sub_21FFED4(v20);
    v27 = (UnityEngine_Object_o *)monitor[v26 + 4];
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
    v20 = (Il2CppObject *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)targetObject, v27, 0);
    if ( ((unsigned __int8)v20 & 1) != 0 )
      break;
    LODWORD(v25) = *((_DWORD *)monitor + 6);
    if ( (__int64)++v26 >= (int)v25 )
      goto LABEL_17;
  }
  v32 = 1;
LABEL_28:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v35,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  return v32;
}


int32_t WarBoardControlUiDataComponent__GetAdjustType(WarBoardControlUiDataComponent_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  const MethodInfo *v4; // x1
  WarBoardData_o *v5; // x20
  WarBoardPieceData_o *Piece_44763860; // x0
  WarBoardData_o *v8; // x20
  __int64 v9; // x8
  WarBoardControlUiDataComponent_o *v10; // x0
  WarBoardData_o *v11; // x20
  WarBoardData_o *v12; // x20
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardData_o *v14; // x20
  WarBoardItemData_o *Item; // x0

  if ( (byte_5935E43 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_5935E43 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  v5 = (WarBoardData_o *)*((_QWORD *)Instance + 55);
  Instance = (void *)WarBoardControlUiDataComponent__get_SquareIndex(this, v4);
  if ( !v5 )
    goto LABEL_31;
  Piece_44763860 = WarBoardData__GetPiece_44763860(v5, (int32_t)Instance, 0);
  if ( Piece_44763860 )
  {
    if ( WarBoardPieceData__get_isMaster(Piece_44763860, 0) )
      return 6;
    else
      return 5;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  v8 = (WarBoardData_o *)*((_QWORD *)Instance + 55);
  Instance = (void *)WarBoardControlUiDataComponent__get_SquareIndex(this, v4);
  if ( !v8 )
    goto LABEL_31;
  Instance = WarBoardData__GetSquare(v8, (int32_t)Instance, 0);
  if ( Instance )
  {
    v9 = *((_QWORD *)Instance + 6);
    if ( !v9 )
      goto LABEL_31;
    v10 = *(WarBoardControlUiDataComponent_o **)(v9 + 184);
    if ( v10 && WarBoardControlUiDataComponent__IsDispFlagObjects(v10, v4) )
      return 4;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  v11 = (WarBoardData_o *)*((_QWORD *)Instance + 55);
  Instance = (void *)WarBoardControlUiDataComponent__get_SquareIndex(this, v4);
  if ( !v11 )
    goto LABEL_31;
  if ( WarBoardData__GetWall(v11, (int32_t)Instance, 0, 0) )
    return 3;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  v12 = (WarBoardData_o *)*((_QWORD *)Instance + 55);
  Instance = (void *)WarBoardControlUiDataComponent__get_SquareIndex(this, v4);
  if ( !v12 )
    goto LABEL_31;
  Treasure = WarBoardData__GetTreasure(v12, (int32_t)Instance, 0);
  if ( Treasure && !Treasure->fields._isUse_k__BackingField )
    return 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (v14 = (WarBoardData_o *)*((_QWORD *)Instance + 55),
        Instance = (void *)WarBoardControlUiDataComponent__get_SquareIndex(this, v4),
        !v14) )
  {
LABEL_31:
    sub_21FFECC(Instance, v4);
  }
  Item = WarBoardData__GetItem(v14, (int32_t)Instance, 0);
  if ( Item && !Item->fields._isUse_k__BackingField )
    return 2;
  else
    return 0;
}


System_String_o *WarBoardControlUiDataComponent__GetAnimationStateName(
        WarBoardControlUiDataComponent_o *this,
        SimpleAnimation_o *animation,
        System_String_o *suffix,
        const MethodInfo *method)
{
  WarBoardControlUiDataComponent_c *klass; // x8
  WarBoardControlUiDataComponent_o *v7; // x20
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x20
  __int64 v24; // x8
  __int64 v25; // x9
  SimpleAnimation_State_c **v26; // x10
  __int64 v27; // x0
  System_String_o *v28; // x0
  __int64 v29; // x1
  System_String_o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x8
  __int64 v33; // x9
  SimpleAnimation_State_c **v34; // x10
  __int64 v35; // x0
  System_String_o *v36; // x20
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  __int64 v42; // [xsp+18h] [xbp-38h]

  if ( (byte_5935E49 & 1) == 0 )
  {
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    this = (WarBoardControlUiDataComponent_o *)sub_21FFC50(&SimpleAnimation_State_TypeInfo);
    byte_5935E49 = 1;
  }
  if ( !animation || (this = (WarBoardControlUiDataComponent_o *)SimpleAnimation__GetStates(animation, 0)) == 0 )
    sub_21FFECC(this, animation);
  klass = this->klass;
  v7 = this;
  v8 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
    {
      --v8;
      p_offset += 4;
      if ( !v8 )
        goto LABEL_9;
    }
    v10 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_9:
    v10 = sub_2237E2C(this, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0);
  }
  v11 = (*(__int64 (__fastcall **)(WarBoardControlUiDataComponent_o *, _QWORD))v10)(v7, *(_QWORD *)(v10 + 8));
  v42 = v11;
  do
  {
    if ( !v42 )
      sub_21FFECC(v11, v12);
    v13 = *(_QWORD *)v42;
    v14 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
    {
      v15 = (int *)(*(_QWORD *)(v13 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_17;
      }
      v16 = v13 + 16LL * *v15 + 312;
    }
    else
    {
LABEL_17:
      v16 = sub_2237E2C(v42, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v16)(v42, *(_QWORD *)(v16 + 8)) & 1) == 0 )
    {
      v36 = 0;
      goto LABEL_44;
    }
    v17 = *(_QWORD *)v42;
    v18 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
    {
      v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v19 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_24;
      }
      v20 = v17 + 16LL * *v19 + 312;
    }
    else
    {
LABEL_24:
      v20 = sub_2237E2C(v42, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v42, *(_QWORD *)(v20 + 8));
    v23 = v21;
    if ( !v21 )
      sub_21FFECC(0, v22);
    v24 = *(_QWORD *)v21;
    v25 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v26 = (SimpleAnimation_State_c **)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *(v26 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v25;
        v26 += 2;
        if ( !v25 )
          goto LABEL_31;
      }
      v27 = v24 + 16LL * (*(_DWORD *)v26 + 9) + 312;
    }
    else
    {
LABEL_31:
      v27 = sub_2237E2C(v21, SimpleAnimation_State_TypeInfo, 9);
    }
    v28 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8));
    if ( !v28 )
      sub_21FFECC(0, v29);
    v30 = System_String__ToLower(v28, 0);
    if ( !v30 )
      sub_21FFECC(0, v31);
    v11 = System_String__EndsWith(v30, suffix, 0);
  }
  while ( (v11 & 1) == 0 );
  v32 = *(_QWORD *)v23;
  v33 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
  {
    v34 = (SimpleAnimation_State_c **)(*(_QWORD *)(v32 + 176) + 8LL);
    while ( *(v34 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v33;
      v34 += 2;
      if ( !v33 )
        goto LABEL_40;
    }
    v35 = v32 + 16LL * (*(_DWORD *)v34 + 9) + 312;
  }
  else
  {
LABEL_40:
    v35 = sub_2237E2C(v23, SimpleAnimation_State_TypeInfo, 9);
  }
  v36 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v23, *(_QWORD *)(v35 + 8));
LABEL_44:
  v37 = *(_QWORD *)v42;
  v38 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
  {
    v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_48;
    }
    v40 = v37 + 16LL * *v39 + 312;
  }
  else
  {
LABEL_48:
    v40 = sub_2237E2C(v42, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v40)(v42, *(_QWORD *)(v40 + 8));
  return v36;
}


bool WarBoardControlUiDataComponent__IsDispFlagObjects(
        WarBoardControlUiDataComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *flagObjects; // x19
  int max_length; // w8
  __int64 v4; // x20

  if ( this->fields.compType != 1 )
  {
    flagObjects = this->fields.flagObjects;
    if ( !flagObjects )
      goto LABEL_12;
    max_length = flagObjects->max_length;
    if ( max_length >= 1 )
    {
      v4 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v4 >= max_length )
          sub_21FFED4(this);
        this = (WarBoardControlUiDataComponent_o *)flagObjects->m_Items[v4];
        if ( !this )
          break;
        this = (WarBoardControlUiDataComponent_o *)UnityEngine_GameObject__get_activeInHierarchy(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          max_length = flagObjects->max_length;
          if ( (int)++v4 < max_length )
            continue;
        }
        return (unsigned __int8)this & 1;
      }
LABEL_12:
      sub_21FFECC(this, method);
    }
  }
  LOBYTE(this) = 0;
  return (unsigned __int8)this & 1;
}


bool WarBoardControlUiDataComponent__IsDispOverlapObjects(
        WarBoardControlUiDataComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *onOverlapObjects; // x19
  int max_length; // w8
  __int64 v4; // x20

  if ( this->fields.compType != 1 )
  {
    onOverlapObjects = this->fields.onOverlapObjects;
    if ( !onOverlapObjects )
      goto LABEL_12;
    max_length = onOverlapObjects->max_length;
    if ( max_length >= 1 )
    {
      v4 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v4 >= max_length )
          sub_21FFED4(this);
        this = (WarBoardControlUiDataComponent_o *)onOverlapObjects->m_Items[v4];
        if ( !this )
          break;
        this = (WarBoardControlUiDataComponent_o *)UnityEngine_GameObject__get_activeInHierarchy(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          max_length = onOverlapObjects->max_length;
          if ( (int)++v4 < max_length )
            continue;
        }
        return (unsigned __int8)this & 1;
      }
LABEL_12:
      sub_21FFECC(this, method);
    }
  }
  LOBYTE(this) = 0;
  return (unsigned __int8)this & 1;
}


bool WarBoardControlUiDataComponent__IsExistsOther(
        WarBoardControlUiDataComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  WarBoardData_o *monitor; // x20
  WarBoardItemData_o *Item; // x0
  WarBoardTreasureData_o *Treasure; // x0

  if ( (byte_5935E41 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_5935E41 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (monitor = (WarBoardData_o *)Instance[27].monitor) == 0 )
    sub_21FFECC(Instance, v5);
  return WarBoardData__GetPiece_44763860((WarBoardData_o *)Instance[27].monitor, squareIndex, 0)
      || (Item = WarBoardData__GetItem(monitor, squareIndex, 0)) != 0 && !Item->fields._isUse_k__BackingField
      || WarBoardData__GetEffect(monitor, squareIndex, 0)
      || (Treasure = WarBoardData__GetTreasure(monitor, squareIndex, 0)) != 0
      && !Treasure->fields._isUse_k__BackingField
      || WarBoardData__GetWall(monitor, squareIndex, 0, 0) != 0;
}


bool WarBoardControlUiDataComponent__IsPlayingAnimation(
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
  __int64 v13; // x0

  if ( (byte_5935E48 & 1) == 0 )
  {
    this = (WarBoardControlUiDataComponent_o *)sub_21FFC50(&SimpleAnimation_State_TypeInfo);
    byte_5935E48 = 1;
  }
  AnimationStateName = WarBoardControlUiDataComponent__GetAnimationStateName(this, animation, suffix, method);
  IsNullOrEmpty = (SimpleAnimation_State_o *)System_String__IsNullOrEmpty(AnimationStateName, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return 0;
  if ( !animation )
    goto LABEL_15;
  if ( !SimpleAnimation__IsPlaying(animation, AnimationStateName, 0) )
    return 0;
  IsNullOrEmpty = SimpleAnimation__GetState(animation, AnimationStateName, 0);
  if ( !IsNullOrEmpty )
LABEL_15:
    sub_21FFECC(IsNullOrEmpty, v8);
  klass = IsNullOrEmpty->klass;
  v10 = IsNullOrEmpty;
  v11 = *(unsigned __int16 *)&IsNullOrEmpty->klass->_2.rank;
  if ( *(_WORD *)&IsNullOrEmpty->klass->_2.rank )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v11;
      p_offset += 2;
      if ( !v11 )
        goto LABEL_11;
    }
    v13 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5];
  }
  else
  {
LABEL_11:
    v13 = sub_2237E2C(IsNullOrEmpty, SimpleAnimation_State_TypeInfo, 5);
  }
  return (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v13)(v10, *(_QWORD *)(v13 + 8)) < 1.0;
}


void WarBoardControlUiDataComponent__LocalSave(WarBoardControlUiDataComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t compType; // w8
  UnityEngine_Object_o *squareComponent; // x20
  System_Object_array *Instance; // x0
  const MethodInfo *v7; // x1
  WarBoardData_o *v8; // x20
  struct System_Collections_Generic_List_string__o *listUiDataKey; // x8
  int32_t v10; // w19
  UnityEngine_Object_o *pieceComponent; // x20
  struct WarBoardPieceBaseComponent_o *v12; // x8
  struct WarBoardPieceData_o *pieceData; // x21
  System_Int32_array *v14; // x20
  unsigned int max_length; // w8
  const MethodInfo_476E8C0 *v16; // x0
  struct System_Collections_Generic_List_string__o *v17; // x8
  WarBoardData_o *v18; // x19

  if ( (byte_5935E4A & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_5935E4A = 1;
  }
  compType = this->fields.compType;
  if ( !compType )
  {
    squareComponent = (UnityEngine_Object_o *)this->fields.squareComponent;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
    if ( UnityEngine_Object__op_Inequality(squareComponent, 0, 0) )
    {
      Instance = (System_Object_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        v8 = (WarBoardData_o *)Instance->m_Items[51];
        Instance = (System_Object_array *)WarBoardControlUiDataComponent__get_SquareIndex(this, v7);
        listUiDataKey = this->fields.listUiDataKey;
        if ( listUiDataKey )
        {
          v10 = (int)Instance;
          Instance = System_Collections_Generic_List_object___ToArray(
                       (System_Collections_Generic_List_object__o *)listUiDataKey,
                       (const MethodInfo_445164C *)Method_System_Collections_Generic_List_string__ToArray__);
          if ( v8 )
          {
            WarBoardData__UpdateUiData(v8, v10, (System_String_array *)Instance, 0);
            return;
          }
        }
      }
LABEL_27:
      sub_21FFECC(Instance, v7);
    }
    compType = this->fields.compType;
  }
  if ( compType == 1 )
  {
    pieceComponent = (UnityEngine_Object_o *)this->fields.pieceComponent;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
    Instance = (System_Object_array *)UnityEngine_Object__op_Inequality(pieceComponent, 0, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v12 = this->fields.pieceComponent;
      if ( !v12 )
        goto LABEL_27;
      pieceData = v12->fields.pieceData;
      Instance = (System_Object_array *)sub_21FFD10(int___TypeInfo, 3);
      if ( !pieceData )
        goto LABEL_27;
      v14 = (System_Int32_array *)Instance;
      if ( !Instance )
        goto LABEL_27;
      max_length = Instance->max_length;
      if ( !max_length
        || (LODWORD(Instance->m_Items[0]) = pieceData->fields._forceId_k__BackingField, max_length == 1)
        || (HIDWORD(Instance->m_Items[0]) = pieceData->fields._groupId_k__BackingField, max_length <= 2) )
      {
        sub_21FFED4(Instance);
      }
      v16 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__;
      v14->m_Items[2] = pieceData->fields._index_k__BackingField;
      Instance = (System_Object_array *)SingletonMonoBehaviour_object___get_Instance(v16);
      if ( !Instance )
        goto LABEL_27;
      v17 = this->fields.listUiDataKey;
      if ( !v17 )
        goto LABEL_27;
      v18 = (WarBoardData_o *)Instance->m_Items[51];
      Instance = System_Collections_Generic_List_object___ToArray(
                   (System_Collections_Generic_List_object__o *)v17,
                   (const MethodInfo_445164C *)Method_System_Collections_Generic_List_string__ToArray__);
      if ( !v18 )
        goto LABEL_27;
      WarBoardData__UpdateUiData_44852964(v18, v14, (System_String_array *)Instance, 0);
    }
  }
}


System_String_o *WarBoardControlUiDataComponent__PlayAnimation(
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
  IsNullOrEmpty = System_String__IsNullOrEmpty(AnimationStateName, 0);
  result = 0;
  if ( !IsNullOrEmpty )
  {
    if ( !animation )
      sub_21FFECC(0, v6);
    SimpleAnimation__Play_78338864(animation, AnimationStateName, 0);
    return AnimationStateName;
  }
  return result;
}


System_Collections_IEnumerator_o *WarBoardControlUiDataComponent__PlayEndUiDataAnim(
        WarBoardControlUiDataComponent_o *this,
        SimpleAnimation_o *animation,
        WarBoardControlUiDataComponent_UiData_o *uiData,
        const MethodInfo *method)
{
  __int64 v7; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( (byte_5935E46 & 1) == 0 )
  {
    sub_21FFC50(&WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_TypeInfo);
    byte_5935E46 = 1;
  }
  v7 = sub_21FFEBC(WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = animation;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 40), (int32_t)animation, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 48) = uiData;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 48), (int32_t)uiData, v20, v21, v22, v23, v24, v25);
  return (System_Collections_IEnumerator_o *)v7;
}


System_Collections_IEnumerator_o *WarBoardControlUiDataComponent__PlayStartUiDataAnim(
        WarBoardControlUiDataComponent_o *this,
        SimpleAnimation_o *animation,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5935E45 & 1) == 0 )
  {
    sub_21FFC50(&WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_TypeInfo);
    byte_5935E45 = 1;
  }
  v5 = sub_21FFEBC(WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = animation;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)animation, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void WarBoardControlUiDataComponent__ResumeUiData(WarBoardControlUiDataComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *listUiDataKey; // x0
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  int32_t current; // w1
  System_String_o **v14; // x21
  System_Collections_Generic_List_object__o *listUiData; // x22
  System_Predicate_object__o *v16; // x23
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  WarBoardControlUiDataComponent_UiData_o *v20; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  System_String_o *v23; // x21
  WarBoardControlUiDataComponent_c *v24; // x0
  WarBoardServantPieceBuffTurnComponent_o *pieceComponent; // x0
  __int64 v26; // x1
  struct UnityEngine_GameObject_array *animationObjects; // x21
  int max_length; // w8
  int i; // w22
  UnityEngine_GameObject_o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  Il2CppObject *Component_object; // x20
  const MethodInfo *v34; // x3
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_5935E3D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo);
    sub_21FFC50(&Method_WarBoardControlUiDataComponent___c__DisplayClass26_0__ResumeUiData_b__0__);
    sub_21FFC50(&WarBoardControlUiDataComponent___c__DisplayClass26_0_TypeInfo);
    sub_21FFC50(&WarBoardControlUiDataComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_22389/*"loop"*/);
    byte_5935E3D = 1;
  }
  listUiDataKey = this->fields.listUiDataKey;
  memset(&v36, 0, sizeof(v36));
  if ( !listUiDataKey )
    sub_21FFECC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)listUiDataKey,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v36 = v35;
  v35.fields._list = 0;
  *(_QWORD *)&v35.fields._index = &v36;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    v4 = sub_21FFEBC(WarBoardControlUiDataComponent___c__DisplayClass26_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    if ( !v4 )
      sub_21FFECC(v5, v6);
    current = (int32_t)v36.fields._current;
    *(_QWORD *)(v4 + 16) = v36.fields._current;
    v14 = (System_String_o **)(v4 + 16);
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 16), current, v7, v8, v9, v10, v11, v12);
    listUiData = (System_Collections_Generic_List_object__o *)this->fields.listUiData;
    v16 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo);
    System_Predicate_object____ctor(
      v16,
      (Il2CppObject *)v4,
      Method_WarBoardControlUiDataComponent___c__DisplayClass26_0__ResumeUiData_b__0__,
      0);
    if ( !listUiData )
      sub_21FFECC(v17, v18);
    v20 = (WarBoardControlUiDataComponent_UiData_o *)System_Collections_Generic_List_object___Find(
                                                       listUiData,
                                                       (System_Predicate_T__o *)v16,
                                                       (const MethodInfo_4450188 *)Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__);
    if ( v20 )
    {
      WarBoardControlUiDataComponent__SetUiDataTurnObjects(this, 1, v20, v19);
      v23 = *v14;
      v24 = WarBoardControlUiDataComponent_TypeInfo;
      if ( !*(&WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo, v21, v22);
        v24 = WarBoardControlUiDataComponent_TypeInfo;
      }
      pieceComponent = (WarBoardServantPieceBuffTurnComponent_o *)System_String__op_Equality(
                                                                    v23,
                                                                    v24->static_fields->UI_DATA_KEY_BARRIER,
                                                                    0);
      if ( ((unsigned __int8)pieceComponent & 1) != 0 )
      {
        pieceComponent = (WarBoardServantPieceBuffTurnComponent_o *)this->fields.pieceComponent;
        if ( pieceComponent )
        {
          pieceComponent = (WarBoardServantPieceBuffTurnComponent_o *)((__int64 (__fastcall *)(WarBoardServantPieceBuffTurnComponent_o *, void *))pieceComponent->klass[1]._1.image)(
                                                                        pieceComponent,
                                                                        pieceComponent->klass[1]._1.gc_desc);
          if ( pieceComponent )
            WarBoardServantPieceBuffTurnComponent__UpdateDisp(pieceComponent, 1, 0);
        }
      }
      animationObjects = v20->fields.animationObjects;
      if ( !animationObjects )
        sub_21FFECC(pieceComponent, v26);
      max_length = animationObjects->max_length;
      if ( max_length >= 1 )
      {
        for ( i = 0; i < max_length; ++i )
        {
          if ( i >= (unsigned int)max_length )
            sub_21FFED4(pieceComponent);
          v30 = animationObjects->m_Items[i];
          if ( !v30 )
            sub_21FFECC(0, v26);
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               v30,
                               (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31, v32);
          pieceComponent = (WarBoardServantPieceBuffTurnComponent_o *)UnityEngine_Object__op_Equality(
                                                                        (UnityEngine_Object_o *)Component_object,
                                                                        0,
                                                                        0);
          if ( ((unsigned __int8)pieceComponent & 1) == 0 )
            pieceComponent = (WarBoardServantPieceBuffTurnComponent_o *)WarBoardControlUiDataComponent__PlayAnimation(
                                                                          this,
                                                                          (SimpleAnimation_o *)Component_object,
                                                                          (System_String_o *)StringLiteral_22389/*"loop"*/,
                                                                          v34);
          max_length = animationObjects->max_length;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


void WarBoardControlUiDataComponent__ResumeUiDataAll(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v2; // x1
  __int64 v3; // x2
  _QWORD *monitor; // x8
  __int64 v5; // x20
  int v6; // w8
  unsigned int v7; // w22
  __int64 v8; // x8
  int32_t v9; // w19

  if ( (byte_5935E3A & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&WarBoardControlUiDataComponent_TypeInfo);
    byte_5935E3A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  monitor = Instance[27].monitor;
  if ( !monitor )
    goto LABEL_14;
  v5 = monitor[7];
  if ( !v5 )
    goto LABEL_14;
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= v6 )
        sub_21FFED4(Instance);
      v8 = *(_QWORD *)(v5 + 8LL * (int)v7 + 32);
      if ( !v8 )
        break;
      v9 = *(_DWORD *)(v8 + 16);
      if ( !*(&WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo, v2, v3);
      WarBoardControlUiDataComponent__ResumeUiDataAll_44586356(v9, v2);
      v6 = *(_DWORD *)(v5 + 24);
      if ( (int)++v7 >= v6 )
        return;
    }
LABEL_14:
    sub_21FFECC(Instance, v2);
  }
}


void WarBoardControlUiDataComponent__ResumeUiDataAll_44586356(int32_t squareIndex, const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  const MethodInfo *v4; // x1
  struct WarBoardStageNpcMaster_o *stageNpcMaster; // x8
  WarBoardControlUiDataComponent_o *list; // x0
  const MethodInfo *v7; // x2
  struct WarBoardPieceData_array *pieces; // x8
  WarBoardControlUiDataComponent_o *v9; // x0

  if ( (byte_5935E3B & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&WarBoardControlUiDataComponent_TypeInfo);
    byte_5935E3B = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_18;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_44763860(Instance, squareIndex, 0);
  if ( Instance )
  {
    stageNpcMaster = Instance[1].fields.stageNpcMaster;
    if ( !stageNpcMaster )
      goto LABEL_18;
    list = (WarBoardControlUiDataComponent_o *)stageNpcMaster[2].fields.list;
    if ( list )
      WarBoardControlUiDataComponent__ResumeUiData(list, v4);
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_18;
  Instance = (WarBoardData_o *)WarBoardData__GetSquare(Instance, squareIndex, 0);
  if ( !Instance )
    goto LABEL_15;
  pieces = Instance->fields.pieces;
  if ( !pieces )
LABEL_18:
    sub_21FFECC(Instance, v4);
  v9 = (WarBoardControlUiDataComponent_o *)pieces->m_Items[19];
  if ( v9 )
    WarBoardControlUiDataComponent__ResumeUiData(v9, v4);
LABEL_15:
  if ( !*(&WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo, v4, v7);
  WarBoardControlUiDataComponent__UpdateAdjustSituationAll_44585892(squareIndex, 1, v7);
}


void WarBoardControlUiDataComponent__SetUiData(
        WarBoardControlUiDataComponent_o *this,
        System_String_o *key,
        bool isDisp,
        const MethodInfo *method)
{
  __int64 v7; // x23
  System_Collections_Generic_List_object__o *listUiDataKey; // x0
  Il2CppObject *v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  Il2CppObject **v16; // x22
  System_Collections_Generic_List_object__o *listUiData; // x21
  System_Predicate_object__o *v18; // x24
  Il2CppObject *v19; // x0
  WarBoardControlUiDataComponent_UiData_o *v20; // x21
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x8
  const MethodInfo *v31; // x3
  __int64 v32; // x1
  __int64 v33; // x2
  const MethodInfo *v34; // x1
  __int64 v35; // x1
  const MethodInfo *v36; // x2
  int32_t SquareIndex; // w23
  Il2CppObject *v38; // x22
  WarBoardControlUiDataComponent_c *v39; // x0
  const MethodInfo *v40; // x1
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0
  WarBoardServantPieceBuffTurnComponent_o *v42; // x0
  struct UnityEngine_GameObject_array *animationObjects; // x23
  int max_length; // w8
  unsigned int v45; // w26
  __int64 v46; // x1
  __int64 v47; // x2
  Il2CppObject *Component_object; // x22
  const MethodInfo *v49; // x2
  const MethodInfo *v50; // x3
  System_Collections_IEnumerator_o *started; // x0

  if ( (byte_5935E3C & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Remove__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo);
    sub_21FFC50(&Method_WarBoardControlUiDataComponent___c__DisplayClass25_0__SetUiData_b__0__);
    sub_21FFC50(&WarBoardControlUiDataComponent___c__DisplayClass25_0_TypeInfo);
    sub_21FFC50(&WarBoardControlUiDataComponent_TypeInfo);
    byte_5935E3C = 1;
  }
  v7 = sub_21FFEBC(WarBoardControlUiDataComponent___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_39;
  *(_QWORD *)(v7 + 16) = key;
  v16 = (Il2CppObject **)(v7 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)key, v10, v11, v12, v13, v14, v15);
  listUiData = (System_Collections_Generic_List_object__o *)this->fields.listUiData;
  v18 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo);
  System_Predicate_object____ctor(
    v18,
    (Il2CppObject *)v7,
    Method_WarBoardControlUiDataComponent___c__DisplayClass25_0__SetUiData_b__0__,
    0);
  if ( !listUiData )
    goto LABEL_39;
  v19 = System_Collections_Generic_List_object___Find(
          listUiData,
          (System_Predicate_T__o *)v18,
          (const MethodInfo_4450188 *)Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__);
  if ( v19 )
  {
    v20 = (WarBoardControlUiDataComponent_UiData_o *)v19;
    listUiDataKey = (System_Collections_Generic_List_object__o *)this->fields.listUiDataKey;
    if ( !listUiDataKey )
      goto LABEL_39;
    if ( System_Collections_Generic_List_object___Contains(
           listUiDataKey,
           *v16,
           (const MethodInfo_444FEC8 *)Method_System_Collections_Generic_List_string__Contains__) != isDisp )
    {
      listUiDataKey = (System_Collections_Generic_List_object__o *)this->fields.listUiDataKey;
      if ( isDisp )
      {
        if ( !listUiDataKey )
          goto LABEL_39;
        items = listUiDataKey->fields._items;
        v9 = *v16;
        v28 = Method_System_Collections_Generic_List_string__Add__;
        ++listUiDataKey->fields._version;
        if ( !items )
          goto LABEL_39;
        size = listUiDataKey->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            listUiDataKey,
            v9,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v30 = &items->obj.klass + size;
          listUiDataKey->fields._size = size + 1;
          v30[4] = (Il2CppClass *)v9;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v30 + 4), (int32_t)v9, v21, v22, v23, v24, v25, v26);
        }
        WarBoardControlUiDataComponent__SetUiDataTurnObjects(this, 1, v20, v31);
        SquareIndex = WarBoardControlUiDataComponent__get_SquareIndex(this, v34);
        if ( !*(&WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo, v35, v36);
        WarBoardControlUiDataComponent__UpdateAdjustSituationAll_44585892(SquareIndex, 1, v36);
      }
      else
      {
        if ( !listUiDataKey )
          goto LABEL_39;
        System_Collections_Generic_List_object___Remove(
          listUiDataKey,
          *v16,
          (const MethodInfo_445101C *)Method_System_Collections_Generic_List_string__Remove__);
      }
      v38 = *v16;
      v39 = WarBoardControlUiDataComponent_TypeInfo;
      if ( !*(&WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo, v32, v33);
        v39 = WarBoardControlUiDataComponent_TypeInfo;
      }
      if ( System_String__op_Equality((System_String_o *)v38, v39->static_fields->UI_DATA_KEY_BARRIER, 0) )
      {
        pieceComponent = this->fields.pieceComponent;
        if ( pieceComponent )
        {
          v42 = (WarBoardServantPieceBuffTurnComponent_o *)((__int64 (__fastcall *)(struct WarBoardPieceBaseComponent_o *, const MethodInfo *))pieceComponent->klass->vtable._4_get_BuffTrunNotice.methodPtr)(
                                                             pieceComponent,
                                                             pieceComponent->klass->vtable._4_get_BuffTrunNotice.method);
          if ( v42 )
            WarBoardServantPieceBuffTurnComponent__UpdateDisp(v42, 1, 0);
        }
      }
      WarBoardControlUiDataComponent__LocalSave(this, v40);
      animationObjects = v20->fields.animationObjects;
      if ( !animationObjects )
LABEL_39:
        sub_21FFECC(listUiDataKey, v9);
      max_length = animationObjects->max_length;
      if ( max_length >= 1 )
      {
        v45 = 0;
        while ( 1 )
        {
          if ( v45 >= max_length )
            sub_21FFED4(listUiDataKey);
          listUiDataKey = (System_Collections_Generic_List_object__o *)animationObjects->m_Items[v45];
          if ( !listUiDataKey )
            break;
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)listUiDataKey,
                               (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v46, v47);
          listUiDataKey = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Equality(
                                                                         (UnityEngine_Object_o *)Component_object,
                                                                         0,
                                                                         0);
          if ( ((unsigned __int8)listUiDataKey & 1) == 0 )
          {
            if ( isDisp )
              started = WarBoardControlUiDataComponent__PlayStartUiDataAnim(
                          this,
                          (SimpleAnimation_o *)Component_object,
                          v49);
            else
              started = WarBoardControlUiDataComponent__PlayEndUiDataAnim(
                          this,
                          (SimpleAnimation_o *)Component_object,
                          v20,
                          v50);
            listUiDataKey = (System_Collections_Generic_List_object__o *)UnityEngine_MonoBehaviour__StartCoroutine_83231452(
                                                                           (UnityEngine_MonoBehaviour_o *)this,
                                                                           started,
                                                                           0);
          }
          max_length = animationObjects->max_length;
          if ( (int)++v45 >= max_length )
            return;
        }
        goto LABEL_39;
      }
    }
  }
}


void WarBoardControlUiDataComponent__SetUiDataFromLocalData(
        WarBoardControlUiDataComponent_o *this,
        System_String_array *keys,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *listUiDataKey; // x0
  int32_t size; // w2
  int v7; // w8

  if ( (byte_5935E3E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Clear__);
    byte_5935E3E = 1;
  }
  listUiDataKey = this->fields.listUiDataKey;
  if ( !listUiDataKey
    || (size = listUiDataKey->fields._size,
        v7 = listUiDataKey->fields._version + 1,
        listUiDataKey->fields._size = 0,
        listUiDataKey->fields._version = v7,
        size >= 1)
    && (System_Array__Clear((System_Array_o *)listUiDataKey->fields._items, 0, size, 0),
        (listUiDataKey = this->fields.listUiDataKey) == 0) )
  {
    sub_21FFECC(listUiDataKey, keys);
  }
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)listUiDataKey,
    (System_Collections_Generic_IEnumerable_T__o *)keys,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_string__AddRange__);
}


void WarBoardControlUiDataComponent__SetUiDataOnBattle(
        WarBoardControlUiDataComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *onEnterBattleTurnOffObjects; // x19
  int max_length; // w8
  __int64 v4; // x20

  onEnterBattleTurnOffObjects = this->fields.onEnterBattleTurnOffObjects;
  if ( !onEnterBattleTurnOffObjects )
    goto LABEL_8;
  max_length = onEnterBattleTurnOffObjects->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v4 >= max_length )
        sub_21FFED4(this);
      this = (WarBoardControlUiDataComponent_o *)onEnterBattleTurnOffObjects->m_Items[v4];
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      max_length = onEnterBattleTurnOffObjects->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_8:
    sub_21FFECC(this, method);
  }
}


void WarBoardControlUiDataComponent__SetUiDataOnBattleAll(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v2; // x1
  __int64 v3; // x2
  _QWORD *monitor; // x8
  __int64 v5; // x20
  int v6; // w8
  unsigned int v7; // w22
  __int64 v8; // x8
  int32_t v9; // w19

  if ( (byte_5935E36 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&WarBoardControlUiDataComponent_TypeInfo);
    byte_5935E36 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  monitor = Instance[27].monitor;
  if ( !monitor )
    goto LABEL_14;
  v5 = monitor[7];
  if ( !v5 )
    goto LABEL_14;
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= v6 )
        sub_21FFED4(Instance);
      v8 = *(_QWORD *)(v5 + 8LL * (int)v7 + 32);
      if ( !v8 )
        break;
      v9 = *(_DWORD *)(v8 + 16);
      if ( !*(&WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo, v2, v3);
      WarBoardControlUiDataComponent__SetUiDataOnBattleAll_44585428(v9, v2);
      v6 = *(_DWORD *)(v5 + 24);
      if ( (int)++v7 >= v6 )
        return;
    }
LABEL_14:
    sub_21FFECC(Instance, v2);
  }
}


void WarBoardControlUiDataComponent__SetUiDataOnBattleAll_44585428(int32_t squareIndex, const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  const MethodInfo *v4; // x1
  struct WarBoardStageNpcMaster_o *stageNpcMaster; // x8
  WarBoardControlUiDataComponent_o *list; // x0
  struct WarBoardPieceData_array *pieces; // x8
  WarBoardControlUiDataComponent_o *v8; // x0

  if ( (byte_5935E37 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_5935E37 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_44763860(Instance, squareIndex, 0);
  if ( Instance )
  {
    stageNpcMaster = Instance[1].fields.stageNpcMaster;
    if ( !stageNpcMaster )
      goto LABEL_16;
    list = (WarBoardControlUiDataComponent_o *)stageNpcMaster[2].fields.list;
    if ( list )
      WarBoardControlUiDataComponent__SetUiDataOnBattle(list, v4);
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)WarBoardData__GetSquare(Instance, squareIndex, 0);
  if ( !Instance )
    return;
  pieces = Instance->fields.pieces;
  if ( !pieces )
LABEL_16:
    sub_21FFECC(Instance, v4);
  v8 = (WarBoardControlUiDataComponent_o *)pieces->m_Items[19];
  if ( v8 )
    WarBoardControlUiDataComponent__SetUiDataOnBattle(v8, v4);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardControlUiDataComponent__SetUiDataTurnObjects(
        WarBoardControlUiDataComponent_o *this,
        bool isDisp,
        WarBoardControlUiDataComponent_UiData_o *uiData,
        const MethodInfo *method)
{
  WarBoardControlUiDataComponent_o *v6; // x19
  struct UnityEngine_GameObject_array *turnOnObjects; // x22
  int max_length; // w8
  __int64 v9; // x23
  struct UnityEngine_GameObject_array *turnOffObjects; // x22
  int v11; // w8
  bool v12; // w21
  __int64 v13; // x20
  UnityEngine_Object_o *squareComponent; // x20

  v6 = this;
  if ( (byte_5935E44 & 1) == 0 )
  {
    this = (WarBoardControlUiDataComponent_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935E44 = 1;
  }
  if ( !uiData )
    goto LABEL_22;
  turnOnObjects = uiData->fields.turnOnObjects;
  if ( !turnOnObjects )
    goto LABEL_22;
  max_length = turnOnObjects->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( (unsigned int)v9 < max_length )
    {
      this = (WarBoardControlUiDataComponent_o *)turnOnObjects->m_Items[v9];
      if ( !this )
        goto LABEL_22;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isDisp, 0);
      max_length = turnOnObjects->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_10;
    }
LABEL_23:
    sub_21FFED4(this);
  }
LABEL_10:
  turnOffObjects = uiData->fields.turnOffObjects;
  if ( !turnOffObjects )
    goto LABEL_22;
  v11 = turnOffObjects->max_length;
  v12 = !isDisp;
  if ( v11 >= 1 )
  {
    v13 = 0;
    while ( (unsigned int)v13 < v11 )
    {
      this = (WarBoardControlUiDataComponent_o *)turnOffObjects->m_Items[v13];
      if ( !this )
        goto LABEL_22;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v12, 0);
      v11 = turnOffObjects->max_length;
      if ( (int)++v13 >= v11 )
        goto LABEL_16;
    }
    goto LABEL_23;
  }
LABEL_16:
  squareComponent = (UnityEngine_Object_o *)v6->fields.squareComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp, uiData);
  if ( UnityEngine_Object__op_Inequality(squareComponent, 0, 0) )
  {
    this = (WarBoardControlUiDataComponent_o *)v6->fields.squareComponent;
    if ( this )
    {
      WarBoardSquareComponent__SetMovePoint((WarBoardSquareComponent_o *)this, v12, 0);
      return;
    }
LABEL_22:
    sub_21FFECC(this, isDisp);
  }
}


System_Collections_IEnumerator_o *WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation(
        WarBoardControlUiDataComponent_o *this,
        bool isDisp,
        UnityEngine_GameObject_o *targetObject,
        bool immediatelyWhenOff,
        const MethodInfo *method)
{
  bool v9; // w23
  __int64 v10; // x21
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Collections_IEnumerator_o *result; // x0

  if ( (byte_5935E42 & 1) == 0 )
  {
    sub_21FFC50(&WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_TypeInfo);
    byte_5935E42 = 1;
  }
  v9 = immediatelyWhenOff;
  v10 = sub_21FFEBC(WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  *(_DWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v10 + 32), (int32_t)this, v11, v12, v13, v14, v15, v16);
  *(_BYTE *)(v10 + 48) = isDisp;
  *(_QWORD *)(v10 + 40) = targetObject;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v10 + 40), (int32_t)targetObject, v17, v18, v19, v20, v21, v22);
  result = (System_Collections_IEnumerator_o *)v10;
  *(_BYTE *)(v10 + 49) = v9;
  return result;
}


System_Collections_IEnumerator_o *WarBoardControlUiDataComponent__StartSyncAnimation(
        WarBoardControlUiDataComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5935E47 & 1) == 0 )
  {
    sub_21FFC50(&WarBoardControlUiDataComponent__StartSyncAnimation_d__43_TypeInfo);
    byte_5935E47 = 1;
  }
  v5 = sub_21FFEBC(WarBoardControlUiDataComponent__StartSyncAnimation_d__43_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)callback, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void WarBoardControlUiDataComponent__SyncAnimation(
        WarBoardControlUiDataComponent_o *this,
        System_Action_o *syncCallback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *started; // x1

  started = WarBoardControlUiDataComponent__StartSyncAnimation(this, syncCallback, method);
  UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, started, 0);
}


void WarBoardControlUiDataComponent__UpdateAdjustObjects(
        WarBoardControlUiDataComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *AdjustType; // x0
  __int64 v4; // x1
  struct System_Single_array *AdjustOffsetY; // x9
  struct UnityEngine_GameObject_array *adjustObjects; // x20
  int max_length; // w8
  __int64 v8; // x21
  float v9; // s8
  UnityEngine_GameObject_o *v10; // x19
  float x; // s10
  float z; // s9
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  AdjustType = (UnityEngine_Transform_o *)WarBoardControlUiDataComponent__GetAdjustType(this, method);
  AdjustOffsetY = this->fields.AdjustOffsetY;
  if ( !AdjustOffsetY )
    goto LABEL_12;
  if ( (unsigned int)AdjustType >= LODWORD(AdjustOffsetY->max_length) )
    goto LABEL_13;
  adjustObjects = this->fields.adjustObjects;
  if ( !adjustObjects )
LABEL_12:
    sub_21FFECC(AdjustType, v4);
  max_length = adjustObjects->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    v9 = AdjustOffsetY->m_Items[(int)AdjustType];
    while ( (unsigned int)v8 < max_length )
    {
      v10 = adjustObjects->m_Items[v8];
      if ( !v10 )
        goto LABEL_12;
      AdjustType = UnityEngine_GameObject__get_transform(adjustObjects->m_Items[v8], 0);
      if ( !AdjustType )
        goto LABEL_12;
      localPosition = UnityEngine_Transform__get_localPosition(AdjustType, 0);
      x = localPosition.fields.x;
      z = localPosition.fields.z;
      AdjustType = UnityEngine_GameObject__get_transform(v10, 0);
      if ( !AdjustType )
        goto LABEL_12;
      v14.fields.x = x;
      v14.fields.y = v9;
      v14.fields.z = z;
      UnityEngine_Transform__set_localPosition(AdjustType, v14, 0);
      max_length = adjustObjects->max_length;
      if ( (int)++v8 >= max_length )
        return;
    }
LABEL_13:
    sub_21FFED4(AdjustType);
  }
}


// local variable allocation has failed, the output may be wrong!
void WarBoardControlUiDataComponent__UpdateAdjustSituation(
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
void WarBoardControlUiDataComponent__UpdateAdjustSituationAll(
        System_Int32_array *squareIndexes,
        bool immediatelyWhenOff,
        const MethodInfo *method)
{
  System_Int32_array *v4; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v6; // x22
  int32_t v7; // w21

  v4 = squareIndexes;
  if ( (byte_5935E38 & 1) == 0 )
  {
    squareIndexes = (System_Int32_array *)sub_21FFC50(&WarBoardControlUiDataComponent_TypeInfo);
    byte_5935E38 = 1;
  }
  if ( !v4 )
    sub_21FFECC(squareIndexes, immediatelyWhenOff);
  max_length = v4->max_length;
  if ( (int)max_length >= 1 )
  {
    v6 = 0;
    do
    {
      if ( v6 >= (unsigned int)max_length )
        sub_21FFED4(squareIndexes);
      v7 = v4->m_Items[v6];
      if ( !*(&WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo, immediatelyWhenOff, method);
      WarBoardControlUiDataComponent__UpdateAdjustSituationAll_44585892(v7, immediatelyWhenOff, method);
      LODWORD(max_length) = v4->max_length;
      ++v6;
    }
    while ( (__int64)v6 < (int)max_length );
  }
}


void WarBoardControlUiDataComponent__UpdateAdjustSituationAll_44585892(
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

  if ( (byte_5935E39 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_5935E39 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_44763860(Instance, squareIndex, 0);
  if ( Instance )
  {
    stageNpcMaster = Instance[1].fields.stageNpcMaster;
    if ( !stageNpcMaster )
      goto LABEL_16;
    list = (WarBoardControlUiDataComponent_o *)stageNpcMaster[2].fields.list;
    if ( list )
      WarBoardControlUiDataComponent__UpdateAdjustSituation(list, immediatelyWhenOff, v7);
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)WarBoardData__GetSquare(Instance, squareIndex, 0);
  if ( !Instance )
    return;
  pieces = Instance->fields.pieces;
  if ( !pieces )
LABEL_16:
    sub_21FFECC(Instance, v6);
  v12 = (WarBoardControlUiDataComponent_o *)pieces->m_Items[19];
  if ( v12 )
    WarBoardControlUiDataComponent__UpdateAdjustSituation(v12, immediatelyWhenOff, v10);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardControlUiDataComponent__UpdateOnExistsOtherTurnOffObjects(
        WarBoardControlUiDataComponent_o *this,
        bool immediatelyWhenOff,
        const MethodInfo *method)
{
  WarBoardControlUiDataComponent_o *SquareIndex; // x0
  const MethodInfo *v6; // x2
  UnityEngine_Coroutine_o *IsExistsOther; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4
  struct UnityEngine_GameObject_array *onExistsOtherTurnOffObjects; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v12; // x22
  char v13; // w23
  System_Collections_IEnumerator_o *v14; // x0

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
      sub_21FFECC(IsExistsOther, v8);
    max_length = onExistsOtherTurnOffObjects->max_length;
    if ( (int)max_length >= 1 )
    {
      v12 = 0;
      v13 = (unsigned __int8)IsExistsOther ^ 1;
      do
      {
        if ( v12 >= (unsigned int)max_length )
          sub_21FFED4(IsExistsOther);
        v14 = WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation(
                this,
                v13 & 1,
                onExistsOtherTurnOffObjects->m_Items[v12],
                immediatelyWhenOff,
                v9);
        IsExistsOther = UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, v14, 0);
        LODWORD(max_length) = onExistsOtherTurnOffObjects->max_length;
        ++v12;
      }
      while ( (__int64)v12 < (int)max_length );
    }
  }
}


void WarBoardControlUiDataComponent__UpdateOverlapObjects(
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
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v11; // x23
  UnityEngine_GameObject_o *v12; // x20
  char v13; // w8

  if ( (byte_5935E3F & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_5935E3F = 1;
  }
  if ( !this->fields.compType )
    return;
  Instance = (WarBoardControlUiDataComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  onEnterBattleTurnOffObjects = (WarBoardData_o *)Instance[3].fields.onEnterBattleTurnOffObjects;
  Instance = (WarBoardControlUiDataComponent_o *)WarBoardControlUiDataComponent__get_SquareIndex(this, v4);
  if ( !onEnterBattleTurnOffObjects )
    goto LABEL_21;
  Instance = (WarBoardControlUiDataComponent_o *)WarBoardData__GetSquare(
                                                   onEnterBattleTurnOffObjects,
                                                   (int32_t)Instance,
                                                   0);
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
    sub_21FFECC(Instance, v4);
  max_length = onOverlapObjects->max_length;
  if ( (int)max_length >= 1 )
  {
    v11 = 0;
    do
    {
      if ( v11 >= (unsigned int)max_length )
        sub_21FFED4(Instance);
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
      UnityEngine_GameObject__SetActive(v12, v13 & 1, 0);
      LODWORD(max_length) = onOverlapObjects->max_length;
      ++v11;
    }
    while ( (__int64)v11 < (int)max_length );
  }
}


int32_t WarBoardControlUiDataComponent__get_SquareIndex(
        WarBoardControlUiDataComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *pieceComponent; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct WarBoardPieceBaseComponent_o *v8; // x8
  struct WarBoardPieceData_o *pieceData; // x8
  int32_t *p_nowSquareIndex_k__BackingField; // x8
  UnityEngine_Object_o *squareComponent; // x20
  struct WarBoardSquareComponent_o *v12; // x8
  struct WarBoardSquareData_o *squareData; // x8

  if ( (byte_5935E34 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935E34 = 1;
  }
  pieceComponent = (UnityEngine_Object_o *)this->fields.pieceComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Inequality(pieceComponent, 0, 0);
  if ( v5 )
  {
    v8 = this->fields.pieceComponent;
    if ( v8 )
    {
      pieceData = v8->fields.pieceData;
      if ( pieceData )
      {
        p_nowSquareIndex_k__BackingField = &pieceData->fields._nowSquareIndex_k__BackingField;
        return *p_nowSquareIndex_k__BackingField;
      }
    }
    goto LABEL_17;
  }
  squareComponent = (UnityEngine_Object_o *)this->fields.squareComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  v5 = UnityEngine_Object__op_Inequality(squareComponent, 0, 0);
  if ( v5 )
  {
    v12 = this->fields.squareComponent;
    if ( v12 )
    {
      squareData = v12->fields.squareData;
      if ( squareData )
      {
        p_nowSquareIndex_k__BackingField = &squareData->fields._squareIndex_k__BackingField;
        return *p_nowSquareIndex_k__BackingField;
      }
    }
LABEL_17:
    sub_21FFECC(v5, v6);
  }
  return -1;
}


void WarBoardControlUiDataComponent_UiData___ctor(
        WarBoardControlUiDataComponent_UiData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42___ctor(
        WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42__MoveNext(
        WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *v3; // x19
  int32_t _1__state; // w8
  WarBoardControlUiDataComponent_o *_4__this; // x20
  System_String_o *v6; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  MethodInfo *v13; // x3
  WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_c *klass; // x8
  WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *v15; // x21
  __int64 v16; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v18; // x0
  System_String_o *v19; // x2
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  bool result; // w0
  struct WarBoardControlUiDataComponent_UiData_o *uiData; // x8
  struct UnityEngine_GameObject_array *animationObjects; // x22
  int max_length; // w8
  unsigned int v29; // w26
  __int64 v30; // x1
  __int64 v31; // x2
  Il2CppObject *Component_object; // x21
  const MethodInfo *v33; // x1
  __int64 v34; // x1
  const MethodInfo *v35; // x2
  int32_t SquareIndex; // w19

  v3 = this;
  if ( (byte_5935E4D & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SimpleAnimation_State_TypeInfo);
    sub_21FFC50(&WarBoardControlUiDataComponent_TypeInfo);
    this = (WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *)sub_21FFC50(&StringLiteral_19851/*"end"*/);
    byte_5935E4D = 1;
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
    v6 = WarBoardControlUiDataComponent__PlayAnimation(
           _4__this,
           v3->fields.animation,
           (System_String_o *)StringLiteral_19851/*"end"*/,
           v2);
    v3->fields._stateName_5__2 = v6;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v3->fields._stateName_5__2, (int32_t)v6, v7, v8, v9, v10, v11, v12);
    this = (WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *)System_String__IsNullOrEmpty(
                                                                          v3->fields._stateName_5__2,
                                                                          0);
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
        v29 = 0;
        while ( 1 )
        {
          if ( v29 >= max_length )
            sub_21FFED4(this);
          this = (WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *)animationObjects->m_Items[v29];
          if ( !this )
            break;
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)this,
                               (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30, v31);
          this = (WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *)UnityEngine_Object__op_Equality(
                                                                                (UnityEngine_Object_o *)Component_object,
                                                                                0,
                                                                                0);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !_4__this )
              break;
            this = (WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *)WarBoardControlUiDataComponent__IsPlayingAnimation(
                                                                                  (WarBoardControlUiDataComponent_o *)this,
                                                                                  (SimpleAnimation_o *)Component_object,
                                                                                  (System_String_o *)StringLiteral_19851/*"end"*/,
                                                                                  v13);
            if ( ((unsigned __int8)this & 1) != 0 )
              return 0;
          }
          max_length = animationObjects->max_length;
          if ( (int)++v29 >= max_length )
            goto LABEL_31;
        }
LABEL_36:
        sub_21FFECC(this, method);
      }
LABEL_31:
      if ( !_4__this )
        goto LABEL_36;
      WarBoardControlUiDataComponent__SetUiDataTurnObjects(_4__this, 0, v3->fields.uiData, v13);
      SquareIndex = WarBoardControlUiDataComponent__get_SquareIndex(_4__this, v33);
      if ( !*(&WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo, v34, v35);
      WarBoardControlUiDataComponent__UpdateAdjustSituationAll_44585892(SquareIndex, 0, v35);
      return 0;
    }
LABEL_9:
    this = (WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *)v3->fields.animation;
    if ( !this )
      goto LABEL_36;
    this = (WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *)SimpleAnimation__GetState(
                                                                          (SimpleAnimation_o *)this,
                                                                          v3->fields._stateName_5__2,
                                                                          0);
    if ( !this )
      goto LABEL_36;
    klass = this->klass;
    v15 = this;
    v16 = *(unsigned __int16 *)&this->klass->_2.rank;
    if ( *(_WORD *)&this->klass->_2.rank )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v16;
        p_offset += 2;
        if ( !v16 )
          goto LABEL_15;
      }
      v18 = (__int64)(&klass->vtable._5_System_IDisposable_Dispose + *(_DWORD *)p_offset);
    }
    else
    {
LABEL_15:
      v18 = sub_2237E2C(this, SimpleAnimation_State_TypeInfo, 5);
    }
    if ( (*(float (__fastcall **)(WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *, _QWORD))v18)(
           v15,
           *(_QWORD *)(v18 + 8)) < 1.0 )
    {
      v3->fields.__2__current = 0;
      p__2__current = (MissionNaviTransitionBoardItem_o *)&v3->fields.__2__current;
      sub_21FFBF4(p__2__current, 0, v19, (System_String_o *)v13, v20, v21, v22, v23);
      result = 1;
      p__2__current[-1].fields._BoardType_k__BackingField = 1;
      return result;
    }
    goto LABEL_19;
  }
  return 0;
}


Il2CppObject *WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42__System_Collections_IEnumerator_Reset(
        WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42__System_Collections_IEnumerator_get_Current(
        WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42__System_IDisposable_Dispose(
        WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *this,
        const MethodInfo *method)
{
  ;
}


void WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41___ctor(
        WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41__MoveNext(
        WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *v3; // x19
  int32_t _1__state; // w8
  WarBoardControlUiDataComponent_o *_4__this; // x20
  System_String_o *v6; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  MethodInfo *v13; // x3
  WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_c *klass; // x8
  WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *v15; // x21
  __int64 v16; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v18; // x0
  System_String_o *v19; // x2
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  bool result; // w0

  v3 = this;
  if ( (byte_5935E4E & 1) == 0 )
  {
    sub_21FFC50(&SimpleAnimation_State_TypeInfo);
    sub_21FFC50(&StringLiteral_24861/*"start"*/);
    this = (WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *)sub_21FFC50(&StringLiteral_22389/*"loop"*/);
    byte_5935E4E = 1;
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
    v6 = WarBoardControlUiDataComponent__PlayAnimation(
           _4__this,
           v3->fields.animation,
           (System_String_o *)StringLiteral_24861/*"start"*/,
           v2);
    v3->fields._stateName_5__2 = v6;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v3->fields._stateName_5__2, (int32_t)v6, v7, v8, v9, v10, v11, v12);
    if ( System_String__IsNullOrEmpty(v3->fields._stateName_5__2, 0) )
    {
LABEL_20:
      WarBoardControlUiDataComponent__PlayAnimation(
        _4__this,
        v3->fields.animation,
        (System_String_o *)StringLiteral_22389/*"loop"*/,
        v13);
      return 0;
    }
LABEL_9:
    this = (WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *)v3->fields.animation;
    if ( this )
    {
      this = (WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *)SimpleAnimation__GetState(
                                                                              (SimpleAnimation_o *)this,
                                                                              v3->fields._stateName_5__2,
                                                                              0);
      if ( this )
      {
        klass = this->klass;
        v15 = this;
        v16 = *(unsigned __int16 *)&this->klass->_2.rank;
        if ( *(_WORD *)&this->klass->_2.rank )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v16;
            p_offset += 2;
            if ( !v16 )
              goto LABEL_15;
          }
          v18 = (__int64)(&klass->vtable._5_System_IDisposable_Dispose + *(_DWORD *)p_offset);
        }
        else
        {
LABEL_15:
          v18 = sub_2237E2C(this, SimpleAnimation_State_TypeInfo, 5);
        }
        if ( (*(float (__fastcall **)(WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *, _QWORD))v18)(
               v15,
               *(_QWORD *)(v18 + 8)) < 1.0 )
        {
          v3->fields.__2__current = 0;
          p__2__current = (MissionNaviTransitionBoardItem_o *)&v3->fields.__2__current;
          sub_21FFBF4(p__2__current, 0, v19, (System_String_o *)v13, v20, v21, v22, v23);
          result = 1;
          p__2__current[-1].fields._BoardType_k__BackingField = 1;
          return result;
        }
        if ( _4__this )
          goto LABEL_20;
      }
    }
LABEL_22:
    sub_21FFECC(this, method);
  }
  return 0;
}


Il2CppObject *WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41__System_Collections_IEnumerator_Reset(
        WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41__System_Collections_IEnumerator_get_Current(
        WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41__System_IDisposable_Dispose(
        WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *this,
        const MethodInfo *method)
{
  ;
}


void WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37___ctor(
        WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37__MoveNext(
        WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *v3; // x19
  int32_t _1__state; // w8
  WarBoardControlUiDataComponent_o *_4__this; // x20
  int32_t v6; // w0
  bool v8; // w8
  Il2CppObject *Component_object; // x0
  SimpleAnimation_o **p_simpleAnimation_5__2; // x21
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x2
  SimpleAnimation_o *v18; // x22
  _BOOL8 v19; // x0
  const MethodInfo *v20; // x3
  _BOOL8 IsPlayingAnimation; // x0
  const MethodInfo *v22; // x3
  _BOOL4 isDisp; // w8
  SimpleAnimation_o *v24; // x21
  bool v25; // w8
  bool v26; // w1
  WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_c *klass; // x8
  WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *v28; // x21
  __int64 v29; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v31; // x0
  System_String_o *v32; // x2
  MethodInfo *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  bool result; // w0
  const MethodInfo *v40; // x3
  __int64 *v41; // x8
  System_String_o *v42; // x0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7

  v3 = this;
  if ( (byte_5935E4F & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SimpleAnimation_State_TypeInfo);
    sub_21FFC50(&StringLiteral_24861/*"start"*/);
    sub_21FFC50(&StringLiteral_19851/*"end"*/);
    this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)sub_21FFC50(&StringLiteral_22389/*"loop"*/);
    byte_5935E4F = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    goto LABEL_39;
  }
  if ( !_1__state )
  {
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_61;
    v6 = WarBoardControlUiDataComponent__CheckCorrectActiveObject(_4__this, v3->fields.targetObject, v2);
    if ( (v6 & 0x80000000) == 0 )
    {
      v8 = v6 == 1 && v3->fields.isDisp;
      v3->fields.isDisp = v8;
    }
    this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)v3->fields.targetObject;
    if ( !this )
      goto LABEL_61;
    this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)UnityEngine_GameObject__get_transform(
                                                                                        (UnityEngine_GameObject_o *)this,
                                                                                        0);
    if ( !this )
      goto LABEL_61;
    this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)UnityEngine_Transform__get_parent(
                                                                                        (UnityEngine_Transform_o *)this,
                                                                                        0);
    if ( !this )
      goto LABEL_61;
    this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)UnityEngine_Component__get_gameObject(
                                                                                        (UnityEngine_Component_o *)this,
                                                                                        0);
    if ( !this )
      goto LABEL_61;
    if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)this, 0) )
    {
      this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)v3->fields.targetObject;
      if ( !this )
        goto LABEL_61;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
      v3->fields._simpleAnimation_5__2 = (struct SimpleAnimation_o *)Component_object;
      p_simpleAnimation_5__2 = &v3->fields._simpleAnimation_5__2;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v3->fields._simpleAnimation_5__2,
        (int32_t)Component_object,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      if ( !v3->fields.isDisp )
        goto LABEL_29;
      this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)v3->fields.targetObject;
      if ( !this )
        goto LABEL_61;
      if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)this, 0) )
      {
        v18 = *p_simpleAnimation_5__2;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v17);
        v19 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0, 0);
        if ( v19 )
        {
          IsPlayingAnimation = WarBoardControlUiDataComponent__IsPlayingAnimation(
                                 (WarBoardControlUiDataComponent_o *)v19,
                                 *p_simpleAnimation_5__2,
                                 (System_String_o *)StringLiteral_24861/*"start"*/,
                                 v20);
          if ( IsPlayingAnimation
            || WarBoardControlUiDataComponent__IsPlayingAnimation(
                 (WarBoardControlUiDataComponent_o *)IsPlayingAnimation,
                 *p_simpleAnimation_5__2,
                 (System_String_o *)StringLiteral_22389/*"loop"*/,
                 v22) )
          {
            return 0;
          }
        }
      }
      isDisp = v3->fields.isDisp;
      if ( !v3->fields.isDisp )
      {
LABEL_29:
        this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)v3->fields.targetObject;
        if ( !this )
          goto LABEL_61;
        if ( !UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)this, 0) )
          return 0;
        isDisp = v3->fields.isDisp;
      }
      if ( (v3->fields.immediatelyWhenOff & (isDisp ^ 0xFF)) != 0 )
        goto LABEL_57;
      v24 = *p_simpleAnimation_5__2;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v17);
      v25 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v24, 0, 0);
      this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)v3->fields.targetObject;
      if ( v25 )
      {
        if ( this )
        {
          v26 = v3->fields.isDisp;
LABEL_59:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v26, 0);
          return 0;
        }
        goto LABEL_61;
      }
      if ( !this )
        goto LABEL_61;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      if ( v3->fields.isDisp )
        v41 = &StringLiteral_24861/*"start"*/;
      else
        v41 = &StringLiteral_19851/*"end"*/;
      v42 = WarBoardControlUiDataComponent__PlayAnimation(
              _4__this,
              v3->fields._simpleAnimation_5__2,
              (System_String_o *)*v41,
              v40);
      v3->fields._stateName_5__3 = v42;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v3->fields._stateName_5__3,
        (int32_t)v42,
        v43,
        v44,
        v45,
        v46,
        v47,
        v48);
      this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)System_String__IsNullOrEmpty(
                                                                                          v3->fields._stateName_5__3,
                                                                                          0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
LABEL_54:
        if ( v3->fields.isDisp )
        {
          if ( !_4__this )
            goto LABEL_61;
          WarBoardControlUiDataComponent__PlayAnimation(
            _4__this,
            v3->fields._simpleAnimation_5__2,
            (System_String_o *)StringLiteral_22389/*"loop"*/,
            v33);
          return 0;
        }
LABEL_57:
        this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)v3->fields.targetObject;
        if ( this )
        {
          v26 = 0;
          goto LABEL_59;
        }
LABEL_61:
        sub_21FFECC(this, method);
      }
LABEL_39:
      this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)v3->fields._simpleAnimation_5__2;
      if ( !this )
        goto LABEL_61;
      this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)SimpleAnimation__GetState(
                                                                                          (SimpleAnimation_o *)this,
                                                                                          v3->fields._stateName_5__3,
                                                                                          0);
      if ( !this )
        goto LABEL_61;
      klass = this->klass;
      v28 = this;
      v29 = *(unsigned __int16 *)&this->klass->_2.rank;
      if ( *(_WORD *)&this->klass->_2.rank )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v29;
          p_offset += 2;
          if ( !v29 )
            goto LABEL_45;
        }
        v31 = (__int64)(&klass->vtable._5_System_IDisposable_Dispose + *(_DWORD *)p_offset);
      }
      else
      {
LABEL_45:
        v31 = sub_2237E2C(this, SimpleAnimation_State_TypeInfo, 5);
      }
      if ( (*(float (__fastcall **)(WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *, _QWORD))v31)(
             v28,
             *(_QWORD *)(v31 + 8)) < 1.0 )
      {
        v3->fields.__2__current = 0;
        p__2__current = (MissionNaviTransitionBoardItem_o *)&v3->fields.__2__current;
        sub_21FFBF4(p__2__current, 0, v32, (System_String_o *)v33, v34, v35, v36, v37);
        result = 1;
        p__2__current[-1].fields._BoardType_k__BackingField = 1;
        return result;
      }
      goto LABEL_54;
    }
  }
  return 0;
}


Il2CppObject *WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37__System_Collections_IEnumerator_Reset(
        WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37__System_Collections_IEnumerator_get_Current(
        WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37__System_IDisposable_Dispose(
        WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *this,
        const MethodInfo *method)
{
  ;
}


void WarBoardControlUiDataComponent__StartSyncAnimation_d__43___ctor(
        WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool WarBoardControlUiDataComponent__StartSyncAnimation_d__43__MoveNext(
        WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *v8; // x19
  int32_t _1__state; // w8
  struct WarBoardControlUiDataComponent_o *_4__this; // x21
  UnityEngine_Object_o **p_targetSimpleAnimation_5__2; // x20
  System_String_o *v12; // x2
  struct UnityEngine_GameObject_array *syncAnimationObjects; // x23
  int max_length; // w8
  unsigned int v15; // w27
  __int64 v16; // x8
  UnityEngine_GameObject_o *v17; // x22
  __int64 v18; // x1
  __int64 v19; // x2
  Il2CppObject *Component_object; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  Il2CppObject *v23; // x21
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  __int64 v29; // x2
  UnityEngine_Object_o *v30; // x20
  __int64 v31; // x1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o **p_animState_5__3; // x20
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v40; // x1
  System_Collections_IEnumerator_c *v41; // x8
  System_Collections_IEnumerator_o *v42; // x21
  __int64 v43; // x9
  int32_t *v44; // x10
  __int64 v45; // x0
  __int64 v46; // x1
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  float v53; // s8
  UnityEngine_Object_o *targetSimpleAnimation_5__2; // x20
  System_Collections_Generic_IEnumerable_TSource__o *States; // x0
  Il2CppObject *object; // x0
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  struct SimpleAnimation_State_o *state_5__6; // x21
  SimpleAnimation_State_c *klass; // x8
  __int64 v65; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v67; // x0
  MissionNaviTransitionBoardItem_o *v68; // x19
  bool v69; // w8
  System_String_o *v70; // x2
  System_String_o *v71; // x3
  int32_t v72; // w4
  int32_t v73; // w5
  bool v74; // w6
  bool v75; // w7
  float v76; // s0
  bool v77; // nf
  struct System_Action_o *callback; // x8
  Il2CppObject **p__2__current; // x19
  __int64 v81; // x0
  __int64 v82; // x1
  System_Collections_IEnumerator_o *v83; // x21
  System_Collections_IEnumerator_c *v84; // x8
  __int64 v85; // x9
  System_Collections_IEnumerator_c **v86; // x10
  __int64 v87; // x0
  UnityEngine_AnimationState_c **v88; // x0
  System_String_o *v89; // x2
  System_String_o *v90; // x3
  int32_t v91; // w4
  int32_t v92; // w5
  bool v93; // w6
  bool v94; // w7
  __int64 v95; // x21
  System_Collections_IEnumerator_o **v96; // x8
  __int64 *v97; // x24
  __int64 v98; // x0
  __int64 v99; // x8
  __int64 v100; // x22
  __int64 v101; // x9
  int *v102; // x10
  __int64 v103; // x0
  __int64 v104; // x2
  float normalizedTime; // s8
  unsigned int v106; // w9
  unsigned int v107; // w8
  void *v108; // x0
  void *v109; // x21
  int v110; // w1
  __int64 v111; // [xsp+0h] [xbp-80h] BYREF
  System_Collections_IEnumerator_o **v112; // [xsp+8h] [xbp-78h]
  __int64 *v113; // [xsp+10h] [xbp-70h]
  __int64 v114; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_IEnumerator_o *v115; // [xsp+28h] [xbp-58h] BYREF

  v8 = this;
  if ( (byte_5935E50 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_AnimationState_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_First_SimpleAnimation_State___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)sub_21FFC50(&SimpleAnimation_State_TypeInfo);
    byte_5935E50 = 1;
  }
  _1__state = v8->fields.__1__state;
  v115 = 0;
  v114 = 0;
  if ( _1__state == 2 )
  {
    v8->fields.__1__state = -1;
LABEL_57:
    state_5__6 = v8->fields._state_5__6;
    if ( !state_5__6 )
      goto LABEL_108;
    klass = state_5__6->klass;
    v65 = *(unsigned __int16 *)&state_5__6->klass->_2.rank;
    if ( *(_WORD *)&state_5__6->klass->_2.rank )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v65;
        p_offset += 2;
        if ( !v65 )
          goto LABEL_62;
      }
      v67 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5];
    }
    else
    {
LABEL_62:
      v67 = sub_2237E2C(v8->fields._state_5__6, SimpleAnimation_State_TypeInfo, 5);
    }
    v76 = (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))v67)(state_5__6, *(_QWORD *)(v67 + 8));
    v77 = v76 > 0.0 && v76 < 1.0;
    if ( v77 && v8->fields._time_5__5 <= v76 )
    {
      v8->fields.__2__current = 0;
      p__2__current = &v8->fields.__2__current;
      *((float *)p__2__current + 11) = v76;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v70, v71, v72, v73, v74, v75);
      *((_DWORD *)p__2__current - 2) = 2;
      return 1;
    }
    v8->fields._state_5__6 = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->fields._state_5__6, 0, v70, v71, v72, v73, v74, v75);
    goto LABEL_72;
  }
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
    goto LABEL_43;
  }
  if ( _1__state )
    return 0;
  _4__this = v8->fields.__4__this;
  v8->fields._targetSimpleAnimation_5__2 = 0;
  p_targetSimpleAnimation_5__2 = (UnityEngine_Object_o **)&v8->fields._targetSimpleAnimation_5__2;
  v8->fields.__1__state = -1;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->fields._targetSimpleAnimation_5__2, 0, v2, v3, v4, v5, v6, v7);
  if ( !_4__this )
    goto LABEL_108;
  syncAnimationObjects = _4__this->fields.syncAnimationObjects;
  if ( !syncAnimationObjects )
    goto LABEL_108;
  max_length = syncAnimationObjects->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
        sub_21FFED4(this);
      v16 = (__int64)syncAnimationObjects + 8 * (int)v15;
      v17 = *(UnityEngine_GameObject_o **)(v16 + 32);
      if ( !v17 )
        break;
      this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)UnityEngine_GameObject__get_activeInHierarchy(
                                                                             *(UnityEngine_GameObject_o **)(v16 + 32),
                                                                             0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             v17,
                             (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
        this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)UnityEngine_Object__op_Inequality(
                                                                               (UnityEngine_Object_o *)Component_object,
                                                                               0,
                                                                               0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !Component_object )
            break;
          if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)Component_object, 0) )
            goto LABEL_26;
        }
        v23 = UnityEngine_GameObject__GetComponent_object_(
                v17,
                (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
        this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)UnityEngine_Object__op_Inequality(
                                                                               (UnityEngine_Object_o *)v23,
                                                                               0,
                                                                               0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v23 )
            break;
          this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)SimpleAnimation__get_isPlaying(
                                                                                 (SimpleAnimation_o *)v23,
                                                                                 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            *p_targetSimpleAnimation_5__2 = (UnityEngine_Object_o *)v23;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&v8->fields._targetSimpleAnimation_5__2,
              (int32_t)v23,
              v12,
              v24,
              v25,
              v26,
              v27,
              v28);
          }
        }
      }
      max_length = syncAnimationObjects->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_25;
    }
LABEL_108:
    sub_21FFECC(this, method);
  }
LABEL_25:
  Component_object = 0;
LABEL_26:
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v12);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    v30 = *p_targetSimpleAnimation_5__2;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v29);
    this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)UnityEngine_Object__op_Equality(v30, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
      goto LABEL_72;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v29);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
LABEL_51:
    targetSimpleAnimation_5__2 = (UnityEngine_Object_o *)v8->fields._targetSimpleAnimation_5__2;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31, v32);
    this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)UnityEngine_Object__op_Inequality(
                                                                           targetSimpleAnimation_5__2,
                                                                           0,
                                                                           0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)v8->fields._targetSimpleAnimation_5__2;
      v8->fields._time_5__5 = -1.0;
      if ( !this )
        goto LABEL_108;
      States = (System_Collections_Generic_IEnumerable_TSource__o *)SimpleAnimation__GetStates(
                                                                      (SimpleAnimation_o *)this,
                                                                      0);
      object = System_Linq_Enumerable__First_object_(
                 States,
                 (const MethodInfo_384C73C *)Method_System_Linq_Enumerable_First_SimpleAnimation_State___);
      v8->fields._state_5__6 = (struct SimpleAnimation_State_o *)object;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v8->fields._state_5__6,
        (int32_t)object,
        v57,
        v58,
        v59,
        v60,
        v61,
        v62);
      goto LABEL_57;
    }
LABEL_72:
    callback = v8->fields.callback;
    if ( !callback )
      goto LABEL_108;
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
    return 0;
  }
  v8->fields._animState_5__3 = 0;
  p_animState_5__3 = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o **)&v8->fields._animState_5__3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->fields._animState_5__3, 0, v32, v33, v34, v35, v36, v37);
  if ( !Component_object )
    goto LABEL_108;
  Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)Component_object, 0);
  v115 = Enumerator;
  v111 = 0;
  v112 = &v115;
  v113 = &v114;
  if ( !Enumerator )
    sub_21FFECC(0, v40);
  v41 = Enumerator->klass;
  v42 = Enumerator;
  v43 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v44 = &v41->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)v44 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      --v43;
      v44 += 4;
      if ( !v43 )
        goto LABEL_41;
    }
    v45 = (__int64)&v41->vtable[*v44];
  }
  else
  {
LABEL_41:
    v45 = sub_2237E2C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
  }
  v81 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v45)(v42, *(_QWORD *)(v45 + 8));
  if ( (v81 & 1) != 0 )
  {
    v83 = v115;
    if ( !v115 )
      sub_21FFECC(v81, v82);
    v84 = v115->klass;
    v85 = *(unsigned __int16 *)&v115->klass->_2.rank;
    if ( *(_WORD *)&v115->klass->_2.rank )
    {
      v86 = (System_Collections_IEnumerator_c **)&v84->_1.interfaceOffsets->offset;
      while ( *(v86 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v85;
        v86 += 2;
        if ( !v85 )
          goto LABEL_84;
      }
      v87 = (__int64)&v84->vtable[*(_DWORD *)v86 + 1];
    }
    else
    {
LABEL_84:
      v87 = sub_2237E2C(v115, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v88 = (UnityEngine_AnimationState_c **)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v87)(
                                             v83,
                                             *(_QWORD *)(v87 + 8));
    if ( v88 && *v88 != UnityEngine_AnimationState_TypeInfo )
    {
      sub_220024C(v88, UnityEngine_AnimationState_TypeInfo, v89, v90);
      v109 = v108;
      if ( v110 != 1 )
      {
        sub_1FE698C(&v111);
        sub_22ED31C(v109);
      }
      v95 = *(_QWORD *)__cxa_begin_catch(v108);
      v111 = v95;
      __cxa_end_catch();
      v96 = v112;
      v97 = v113;
      goto LABEL_90;
    }
    *p_animState_5__3 = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)v88;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v8->fields._animState_5__3,
      (int32_t)v88,
      v89,
      v90,
      v91,
      v92,
      v93,
      v94);
  }
  v95 = 0;
  v96 = &v115;
  v97 = &v114;
LABEL_90:
  v98 = sub_21FFDA4(*v96, System_IDisposable_TypeInfo);
  *v97 = v98;
  if ( v98 )
  {
    v99 = *(_QWORD *)v98;
    v100 = v98;
    v101 = *(unsigned __int16 *)(*(_QWORD *)v98 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v98 + 302LL) )
    {
      v102 = (int *)(*(_QWORD *)(v99 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v102 - 1) != System_IDisposable_TypeInfo )
      {
        --v101;
        v102 += 4;
        if ( !v101 )
          goto LABEL_95;
      }
      v103 = v99 + 16LL * *v102 + 312;
    }
    else
    {
LABEL_95:
      v103 = sub_2237E2C(v98, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v103)(v100, *(_QWORD *)(v103 + 8));
  }
  if ( v95 )
    sub_21FFEC4(v95);
  this = *p_animState_5__3;
  if ( !*p_animState_5__3 )
    goto LABEL_108;
  normalizedTime = UnityEngine_AnimationState__get_normalizedTime((UnityEngine_AnimationState_o *)this, 0);
  if ( !byte_593193F )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593193F = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method, v104);
  v106 = vcvtms_s32_f32(normalizedTime);
  if ( floorf(normalizedTime) == INFINITY )
    v107 = 0x80000000;
  else
    v107 = v106;
  v8->fields._startNormalizedTime_5__4 = v107;
LABEL_43:
  this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)v8->fields._animState_5__3;
  if ( !this )
    goto LABEL_108;
  v53 = UnityEngine_AnimationState__get_normalizedTime((UnityEngine_AnimationState_o *)this, 0);
  if ( !byte_593193F )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593193F = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v46, v47);
  if ( floorf(v53) != INFINITY && v8->fields._startNormalizedTime_5__4 < (signed int)vcvtms_s32_f32(v53) )
  {
    v8->fields._animState_5__3 = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->fields._animState_5__3, 0, v47, v48, v49, v50, v51, v52);
    goto LABEL_51;
  }
  v8->fields.__2__current = 0;
  v68 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
  sub_21FFBF4(v68, 0, v47, v48, v49, v50, v51, v52);
  v69 = 1;
  v68[-1].fields._BoardType_k__BackingField = 1;
  return v69;
}


Il2CppObject *WarBoardControlUiDataComponent__StartSyncAnimation_d__43__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn WarBoardControlUiDataComponent__StartSyncAnimation_d__43__System_Collections_IEnumerator_Reset(
        WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_WarBoardControlUiDataComponent__StartSyncAnimation_d__43_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *WarBoardControlUiDataComponent__StartSyncAnimation_d__43__System_Collections_IEnumerator_get_Current(
        WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void WarBoardControlUiDataComponent__StartSyncAnimation_d__43__System_IDisposable_Dispose(
        WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *this,
        const MethodInfo *method)
{
  ;
}


void WarBoardControlUiDataComponent___c__DisplayClass25_0___ctor(
        WarBoardControlUiDataComponent___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardControlUiDataComponent___c__DisplayClass25_0___SetUiData_b__0(
        WarBoardControlUiDataComponent___c__DisplayClass25_0_o *this,
        WarBoardControlUiDataComponent_UiData_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_21FFECC(this, 0);
  return System_String__op_Equality(a->fields.key, this->fields.key, 0);
}


void WarBoardControlUiDataComponent___c__DisplayClass26_0___ctor(
        WarBoardControlUiDataComponent___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardControlUiDataComponent___c__DisplayClass26_0___ResumeUiData_b__0(
        WarBoardControlUiDataComponent___c__DisplayClass26_0_o *this,
        WarBoardControlUiDataComponent_UiData_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_21FFECC(this, 0);
  return System_String__op_Equality(a->fields.key, this->fields.key, 0);
}


void WarBoardControlUiDataComponent___c__DisplayClass34_0___ctor(
        WarBoardControlUiDataComponent___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardControlUiDataComponent___c__DisplayClass34_0___CheckCorrectActiveObject_b__0(
        WarBoardControlUiDataComponent___c__DisplayClass34_0_o *this,
        WarBoardControlUiDataComponent_UiData_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_21FFECC(this, 0);
  return System_String__op_Equality(a->fields.key, this->fields.key, 0);
}