void __fastcall WarBoardControlUiDataComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_49FC644 & 1) == 0 )
  {
    sub_1B64A00(&WarBoardControlUiDataComponent_TypeInfo, v1);
    sub_1B64A00(&StringLiteral_3154/*"Barrier"*/, v4);
    byte_49FC644 = 1;
  }
  WarBoardControlUiDataComponent_TypeInfo->static_fields->UI_DATA_KEY_BARRIER = (struct System_String_o *)StringLiteral_3154/*"Barrier"*/;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)WarBoardControlUiDataComponent_TypeInfo->static_fields,
    StringLiteral_3154/*"Barrier"*/,
    v2,
    v3);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_List_object__o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_List_object__o *v15; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  System_RuntimeFieldHandle_o v18; // 0:w1.4

  if ( (byte_49FC643 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData___ctor__, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_string___ctor__, v3);
    sub_1B64A00(&System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__TypeInfo, v4);
    sub_1B64A00(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_1B64A00(&float___TypeInfo, v6);
    sub_1B64A00(
      &Field__PrivateImplementationDetails__64464566F592BAB0A74DD80EB47024C0ECA2BB914D37B27E78F5532363736E1B,
      v7);
    byte_49FC643 = 1;
  }
  v8 = (System_Array_o *)sub_1B64AA8(float___TypeInfo, 7LL);
  v18.fields.value = Field__PrivateImplementationDetails__64464566F592BAB0A74DD80EB47024C0ECA2BB914D37B27E78F5532363736E1B;
  v9 = (struct System_Single_array *)v8;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61293216(v8, v18, 0LL);
  this->fields.AdjustOffsetY = v9;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.AdjustOffsetY, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData___ctor__);
  this->fields.listUiData = (struct System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__o *)v12;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.listUiData, (int32_t)v12, v13, v14);
  v15 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.listUiDataKey = (struct System_Collections_Generic_List_string__o *)v15;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.listUiDataKey, (int32_t)v15, v16, v17);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardControlUiDataComponent__Awake(WarBoardControlUiDataComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  Il2CppObject *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FC62D & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_Component_GetComponent_WarBoardPieceBaseComponent___, method);
    sub_1B64A00(&Method_UnityEngine_Component_GetComponent_WarBoardSquareComponent___, v3);
    byte_49FC62D = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E32784 *)Method_UnityEngine_Component_GetComponent_WarBoardPieceBaseComponent___);
  this->fields.pieceComponent = (struct WarBoardPieceBaseComponent_o *)Component_object;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.pieceComponent, (int32_t)Component_object, v5, v6);
  v7 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_2E32784 *)Method_UnityEngine_Component_GetComponent_WarBoardSquareComponent___);
  this->fields.squareComponent = (struct WarBoardSquareComponent_o *)v7;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.squareComponent, (int32_t)v7, v8, v9);
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
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t current; // w1
  System_Collections_Generic_List_object__o *listUiData; // x22
  System_Predicate_object__o *v21; // x23
  __int64 v22; // x0
  __int64 v23; // x1
  Il2CppObject *v24; // x0
  __int64 v25; // x1
  Il2CppObject *v26; // x21
  _QWORD *monitor; // x23
  __int64 v28; // x8
  unsigned __int64 v29; // x26
  UnityEngine_Object_o *v30; // x22
  Il2CppClass *klass; // x22
  const char *namespaze; // x8
  unsigned __int64 v33; // x23
  UnityEngine_Object_o *v34; // x21
  int32_t v35; // w19
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49FC638 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, targetObject);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_string__GetEnumerator__, v8);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v9);
    sub_1B64A00(&System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo, v10);
    sub_1B64A00(&Method_WarBoardControlUiDataComponent___c__DisplayClass34_0__CheckCorrectActiveObject_b__0__, v11);
    sub_1B64A00(&WarBoardControlUiDataComponent___c__DisplayClass34_0_TypeInfo, v12);
    byte_49FC638 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  listUiDataKey = this->fields.listUiDataKey;
  if ( !listUiDataKey )
    sub_1B64C5C(0LL, targetObject);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v37,
    (System_Collections_Generic_List_object__o *)listUiDataKey,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v38 = v37;
  while ( 1 )
  {
    do
    {
LABEL_5:
      if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v38,
              (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
      {
        v35 = -1;
        goto LABEL_28;
      }
      v14 = sub_1B64C4C(WarBoardControlUiDataComponent___c__DisplayClass34_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v14, 0LL);
      if ( !v14 )
        sub_1B64C5C(v15, v16);
      current = (int32_t)v38.fields._current;
      *(_QWORD *)(v14 + 16) = v38.fields._current;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v14 + 16), current, v17, v18);
      listUiData = (System_Collections_Generic_List_object__o *)this->fields.listUiData;
      v21 = (System_Predicate_object__o *)sub_1B64C4C(System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo);
      System_Predicate_object____ctor(
        v21,
        (Il2CppObject *)v14,
        Method_WarBoardControlUiDataComponent___c__DisplayClass34_0__CheckCorrectActiveObject_b__0__,
        0LL);
      if ( !listUiData )
        sub_1B64C5C(v22, v23);
      v24 = System_Collections_Generic_List_object___Find(
              listUiData,
              (System_Predicate_T__o *)v21,
              (const MethodInfo_34B0630 *)Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__);
      v26 = v24;
    }
    while ( !v24 );
    monitor = v24[1].monitor;
    if ( !monitor )
      sub_1B64C5C(v24, v25);
    v28 = monitor[3];
    if ( (int)v28 >= 1 )
      break;
LABEL_17:
    klass = v26[2].klass;
    if ( !klass )
      sub_1B64C5C(v24, v25);
    namespaze = klass->_1.namespaze;
    if ( (int)namespaze >= 1 )
    {
      v33 = 0LL;
      while ( 1 )
      {
        if ( v33 >= (unsigned int)namespaze )
          sub_1B64C64(v24, v25);
        v34 = (UnityEngine_Object_o *)*((_QWORD *)&klass->_1.byval_arg.data + v33);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v24 = (Il2CppObject *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)targetObject, v34, 0LL);
        if ( ((unsigned __int8)v24 & 1) != 0 )
          break;
        LODWORD(namespaze) = klass->_1.namespaze;
        if ( (__int64)++v33 >= (int)namespaze )
          goto LABEL_5;
      }
      v35 = 0;
      goto LABEL_28;
    }
  }
  v29 = 0LL;
  while ( 1 )
  {
    if ( v29 >= (unsigned int)v28 )
      sub_1B64C64(v24, v25);
    v30 = (UnityEngine_Object_o *)monitor[v29 + 4];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v24 = (Il2CppObject *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)targetObject, v30, 0LL);
    if ( ((unsigned __int8)v24 & 1) != 0 )
      break;
    LODWORD(v28) = *((_DWORD *)monitor + 6);
    if ( (__int64)++v29 >= (int)v28 )
      goto LABEL_17;
  }
  v35 = 1;
LABEL_28:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v38,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  return v35;
}


int32_t __fastcall WarBoardControlUiDataComponent__GetAdjustType(
        WarBoardControlUiDataComponent_o *this,
        const MethodInfo *method)
{
  void *Instance; // x0
  const MethodInfo *v4; // x1
  WarBoardData_o *v5; // x20
  WarBoardPieceData_o *Piece_35065340; // x0
  WarBoardData_o *v8; // x20
  __int64 v9; // x8
  WarBoardControlUiDataComponent_o *v10; // x0
  WarBoardData_o *v11; // x20
  WarBoardData_o *v12; // x20
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardData_o *v14; // x20
  WarBoardItemData_o *Item; // x0

  if ( (byte_49FC63B & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_49FC63B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  v5 = (WarBoardData_o *)*((_QWORD *)Instance + 55);
  Instance = (void *)WarBoardControlUiDataComponent__get_SquareIndex(this, v4);
  if ( !v5 )
    goto LABEL_31;
  Piece_35065340 = WarBoardData__GetPiece_35065340(v5, (int32_t)Instance, 0LL);
  if ( Piece_35065340 )
  {
    if ( WarBoardPieceData__get_isMaster(Piece_35065340, 0LL) )
      return 6;
    else
      return 5;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  v11 = (WarBoardData_o *)*((_QWORD *)Instance + 55);
  Instance = (void *)WarBoardControlUiDataComponent__get_SquareIndex(this, v4);
  if ( !v11 )
    goto LABEL_31;
  if ( WarBoardData__GetWall(v11, (int32_t)Instance, 0, 0LL) )
    return 3;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  v12 = (WarBoardData_o *)*((_QWORD *)Instance + 55);
  Instance = (void *)WarBoardControlUiDataComponent__get_SquareIndex(this, v4);
  if ( !v12 )
    goto LABEL_31;
  Treasure = WarBoardData__GetTreasure(v12, (int32_t)Instance, 0LL);
  if ( Treasure && !Treasure->fields._isUse_k__BackingField )
    return 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (v14 = (WarBoardData_o *)*((_QWORD *)Instance + 55),
        Instance = (void *)WarBoardControlUiDataComponent__get_SquareIndex(this, v4),
        !v14) )
  {
LABEL_31:
    sub_1B64C5C(Instance, v4);
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

  if ( (byte_49FC641 & 1) == 0 )
  {
    sub_1B64A00(&System_IDisposable_TypeInfo, animation);
    sub_1B64A00(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v6);
    sub_1B64A00(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v7);
    sub_1B64A00(&System_Collections_IEnumerator_TypeInfo, v8);
    this = (WarBoardControlUiDataComponent_o *)sub_1B64A00(&SimpleAnimation_State_TypeInfo, v9);
    byte_49FC641 = 1;
  }
  if ( !animation || (this = (WarBoardControlUiDataComponent_o *)SimpleAnimation__GetStates(animation, 0LL)) == 0LL )
    sub_1B64C5C(this, animation);
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
    v14 = sub_1BB69E0(this, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
  }
  v16 = (*(__int64 (__fastcall **)(WarBoardControlUiDataComponent_o *, _QWORD))v14)(v11, *(_QWORD *)(v14 + 8));
  if ( !v16 )
    sub_1B64C5C(0LL, v15);
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
      v20 = sub_1BB69E0(v16, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v24 = sub_1BB69E0(v16, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
    }
    v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v16, *(_QWORD *)(v24 + 8));
    v27 = v25;
    if ( !v25 )
      sub_1B64C5C(0LL, v26);
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
      v31 = sub_1BB69E0(v25, SimpleAnimation_State_TypeInfo, 9LL);
    }
    v32 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v27, *(_QWORD *)(v31 + 8));
    if ( !v32 )
      sub_1B64C5C(0LL, v33);
    v34 = System_String__ToLower(v32, 0LL);
    if ( !v34 )
      sub_1B64C5C(0LL, v35);
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
    v39 = sub_1BB69E0(v27, SimpleAnimation_State_TypeInfo, 9LL);
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
    v44 = sub_1BB69E0(v16, System_IDisposable_TypeInfo, 0LL);
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
          sub_1B64C64(this, method);
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
      sub_1B64C5C(this, method);
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
          sub_1B64C64(this, method);
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
      sub_1B64C5C(this, method);
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

  if ( (byte_49FC639 & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&squareIndex);
    byte_49FC639 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (monitor = (WarBoardData_o *)Instance[27].monitor) == 0LL )
    sub_1B64C5C(Instance, v5);
  return WarBoardData__GetPiece_35065340((WarBoardData_o *)Instance[27].monitor, squareIndex, 0LL)
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

  if ( (byte_49FC640 & 1) == 0 )
  {
    this = (WarBoardControlUiDataComponent_o *)sub_1B64A00(&SimpleAnimation_State_TypeInfo, animation);
    byte_49FC640 = 1;
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
    sub_1B64C5C(IsNullOrEmpty, v8);
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
    p_method = sub_1BB69E0(IsNullOrEmpty, SimpleAnimation_State_TypeInfo, 5LL);
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

  if ( (byte_49FC642 & 1) == 0 )
  {
    sub_1B64A00(&int___TypeInfo, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_string__ToArray__, v3);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v4);
    sub_1B64A00(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5);
    byte_49FC642 = 1;
  }
  compType = this->fields.compType;
  if ( !compType )
  {
    squareComponent = (UnityEngine_Object_o *)this->fields.squareComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(squareComponent, 0LL, 0LL) )
    {
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
                                (const MethodInfo_34B1BC0 *)Method_System_Collections_Generic_List_string__ToArray__);
          if ( v10 )
          {
            WarBoardData__UpdateUiData(v10, v12, (System_String_array *)Instance, 0LL);
            return;
          }
        }
      }
LABEL_27:
      sub_1B64C5C(Instance, v9);
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
      Instance = sub_1B64AA8(int___TypeInfo, 3LL);
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
        sub_1B64C64(Instance, v9);
      }
      *(_DWORD *)(Instance + 40) = pieceData->fields._index_k__BackingField;
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !Instance )
        goto LABEL_27;
      v18 = Instance;
      Instance = (__int64)this->fields.listUiDataKey;
      if ( !Instance )
        goto LABEL_27;
      v19 = *(WarBoardData_o **)(v18 + 440);
      Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                            (System_Collections_Generic_List_object__o *)Instance,
                            (const MethodInfo_34B1BC0 *)Method_System_Collections_Generic_List_string__ToArray__);
      if ( !v19 )
        goto LABEL_27;
      WarBoardData__UpdateUiData_35097452(v19, v16, (System_String_array *)Instance, 0LL);
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
      sub_1B64C5C(0LL, v6);
    SimpleAnimation__Play_63522800(animation, AnimationStateName, 0LL);
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
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FC63E & 1) == 0 )
  {
    sub_1B64A00(&WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_TypeInfo, animation);
    byte_49FC63E = 1;
  }
  v7 = sub_1B64C4C(WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 40) = animation;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)animation, v10, v11);
  *(_QWORD *)(v7 + 48) = uiData;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)uiData, v12, v13);
  return (System_Collections_IEnumerator_o *)v7;
}


System_Collections_IEnumerator_o *__fastcall WarBoardControlUiDataComponent__PlayStartUiDataAnim(
        WarBoardControlUiDataComponent_o *this,
        SimpleAnimation_o *animation,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FC63D & 1) == 0 )
  {
    sub_1B64A00(&WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_TypeInfo, animation);
    byte_49FC63D = 1;
  }
  v5 = sub_1B64C4C(WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = animation;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)animation, v8, v9);
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
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t current; // w1
  System_String_o **v21; // x20
  System_Collections_Generic_List_object__o *listUiData; // x22
  System_Predicate_object__o *v23; // x23
  __int64 v24; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x3
  WarBoardControlUiDataComponent_UiData_o *v27; // x21
  System_String_o *v28; // x20
  WarBoardControlUiDataComponent_c *v29; // x0
  WarBoardServantPieceBuffTurnComponent_o *v30; // x0
  __int64 v31; // x1
  WarBoardServantPieceBuffTurnComponent_o *v32; // x20
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x22
  const MethodInfo *v34; // x2
  struct UnityEngine_GameObject_array *animationObjects; // x23
  int max_length; // w8
  int i; // w22
  UnityEngine_GameObject_o *v38; // x0
  Il2CppObject *Component_object; // x21
  const MethodInfo *v40; // x3
  struct WarBoardPieceBaseComponent_o *v41; // [xsp+8h] [xbp-A8h]
  WarBoardServantPieceBuffTurnComponent_o *v42; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_49FC635 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v4);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_string__GetEnumerator__, v7);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v8);
    sub_1B64A00(&System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo, v9);
    sub_1B64A00(&Method_WarBoardControlUiDataComponent___c__DisplayClass26_0__ResumeUiData_b__0__, v10);
    sub_1B64A00(&WarBoardControlUiDataComponent___c__DisplayClass26_0_TypeInfo, v11);
    sub_1B64A00(&WarBoardControlUiDataComponent_TypeInfo, v12);
    sub_1B64A00(&StringLiteral_21134/*"loop"*/, v13);
    byte_49FC635 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  listUiDataKey = this->fields.listUiDataKey;
  if ( !listUiDataKey )
    sub_1B64C5C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v43,
    (System_Collections_Generic_List_object__o *)listUiDataKey,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v41 = 0LL;
  v42 = 0LL;
  v44 = v43;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v44,
            (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    v15 = sub_1B64C4C(WarBoardControlUiDataComponent___c__DisplayClass26_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v15, 0LL);
    if ( !v15 )
      sub_1B64C5C(v16, v17);
    current = (int32_t)v44.fields._current;
    *(_QWORD *)(v15 + 16) = v44.fields._current;
    v21 = (System_String_o **)(v15 + 16);
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v15 + 16), current, v18, v19);
    listUiData = (System_Collections_Generic_List_object__o *)this->fields.listUiData;
    v23 = (System_Predicate_object__o *)sub_1B64C4C(System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo);
    System_Predicate_object____ctor(
      v23,
      (Il2CppObject *)v15,
      Method_WarBoardControlUiDataComponent___c__DisplayClass26_0__ResumeUiData_b__0__,
      0LL);
    if ( !listUiData )
      sub_1B64C5C(v24, v25);
    v27 = (WarBoardControlUiDataComponent_UiData_o *)System_Collections_Generic_List_object___Find(
                                                       listUiData,
                                                       (System_Predicate_T__o *)v23,
                                                       (const MethodInfo_34B0630 *)Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__);
    if ( v27 )
    {
      WarBoardControlUiDataComponent__SetUiDataTurnObjects(this, 1, v27, v26);
      v28 = *v21;
      v29 = WarBoardControlUiDataComponent_TypeInfo;
      if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
        v29 = WarBoardControlUiDataComponent_TypeInfo;
      }
      v30 = (WarBoardServantPieceBuffTurnComponent_o *)System_String__op_Equality(
                                                         v28,
                                                         v29->static_fields->UI_DATA_KEY_BARRIER,
                                                         0LL);
      v32 = v42;
      if ( ((unsigned __int8)v30 & 1) != 0
        && ((pieceComponent = this->fields.pieceComponent) != 0LL
          ? (v30 = (WarBoardServantPieceBuffTurnComponent_o *)this->fields.pieceComponent)
          : (v30 = (WarBoardServantPieceBuffTurnComponent_o *)v41),
            pieceComponent) )
      {
        if ( !v30 )
          sub_1B64C5C(0LL, v31);
        v30 = (WarBoardServantPieceBuffTurnComponent_o *)((__int64 (__fastcall *)(WarBoardServantPieceBuffTurnComponent_o *, const char *))v30->klass[1]._1.gc_desc)(
                                                           v30,
                                                           v30->klass[1]._1.name);
        v32 = v30;
        if ( !v30 )
          v30 = v42;
        if ( v32 )
        {
          if ( !v30 )
            sub_1B64C5C(0LL, v31);
          WarBoardServantPieceBuffTurnComponent__UpdateDisp(v30, 1, v34);
        }
        else
        {
          v32 = v42;
        }
      }
      else
      {
        pieceComponent = v41;
      }
      animationObjects = v27->fields.animationObjects;
      if ( !animationObjects )
        sub_1B64C5C(v30, v31);
      max_length = animationObjects->max_length;
      v41 = pieceComponent;
      v42 = v32;
      if ( max_length >= 1 )
      {
        v41 = pieceComponent;
        for ( i = 0; i < max_length; ++i )
        {
          if ( i >= (unsigned int)max_length )
            sub_1B64C64(v30, v31);
          v38 = animationObjects->m_Items[i];
          if ( !v38 )
            sub_1B64C5C(0LL, v31);
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               v38,
                               (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v30 = (WarBoardServantPieceBuffTurnComponent_o *)UnityEngine_Object__op_Equality(
                                                             (UnityEngine_Object_o *)Component_object,
                                                             0LL,
                                                             0LL);
          if ( ((unsigned __int8)v30 & 1) == 0 )
            v30 = (WarBoardServantPieceBuffTurnComponent_o *)WarBoardControlUiDataComponent__PlayAnimation(
                                                               this,
                                                               (SimpleAnimation_o *)Component_object,
                                                               (System_String_o *)StringLiteral_21134/*"loop"*/,
                                                               v40);
          max_length = animationObjects->max_length;
        }
        v42 = v32;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v44,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
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

  if ( (byte_49FC632 & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v1);
    sub_1B64A00(&WarBoardControlUiDataComponent_TypeInfo, v2);
    byte_49FC632 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        sub_1B64C64(Instance, v4);
      v9 = *(_QWORD *)(v6 + 8LL * (int)v8 + 32);
      if ( !v9 )
        break;
      v10 = *(_DWORD *)(v9 + 16);
      if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
      WarBoardControlUiDataComponent__ResumeUiDataAll_34829396(v10, v4);
      v7 = *(_DWORD *)(v6 + 24);
      if ( (int)++v8 >= v7 )
        return;
    }
LABEL_14:
    sub_1B64C5C(Instance, v4);
  }
}


void __fastcall WarBoardControlUiDataComponent__ResumeUiDataAll_34829396(int32_t squareIndex, const MethodInfo *method)
{
  __int64 v3; // x1
  WarBoardData_o *Instance; // x0
  const MethodInfo *v5; // x1
  struct WarBoardStageNpcMaster_o *stageNpcMaster; // x8
  WarBoardControlUiDataComponent_o *lookup; // x0
  const MethodInfo *v8; // x2
  struct WarBoardPieceData_array *pieces; // x8
  WarBoardControlUiDataComponent_o *v10; // x0

  if ( (byte_49FC633 & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_1B64A00(&WarBoardControlUiDataComponent_TypeInfo, v3);
    byte_49FC633 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_18;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_35065340(Instance, squareIndex, 0LL);
  if ( Instance )
  {
    stageNpcMaster = Instance[1].fields.stageNpcMaster;
    if ( !stageNpcMaster )
      goto LABEL_18;
    lookup = (WarBoardControlUiDataComponent_o *)stageNpcMaster[2].fields._lookup;
    if ( lookup )
      WarBoardControlUiDataComponent__ResumeUiData(lookup, v5);
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1B64C5C(Instance, v5);
  v10 = (WarBoardControlUiDataComponent_o *)pieces->m_Items[19];
  if ( v10 )
    WarBoardControlUiDataComponent__ResumeUiData(v10, v5);
LABEL_15:
  if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  WarBoardControlUiDataComponent__UpdateAdjustSituationAll_34828932(squareIndex, 1, v8);
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
  int32_t v19; // w2
  int32_t v20; // w3
  Il2CppObject **v21; // x22
  System_Collections_Generic_List_object__o *listUiData; // x21
  System_Predicate_object__o *v23; // x24
  Il2CppObject *v24; // x0
  WarBoardControlUiDataComponent_UiData_o *v25; // x21
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x8
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x2
  int32_t SquareIndex; // w23
  System_String_o *v36; // x22
  WarBoardControlUiDataComponent_c *v37; // x0
  const MethodInfo *v38; // x1
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0
  WarBoardServantPieceBuffTurnComponent_o *v40; // x0
  const MethodInfo *v41; // x2
  struct UnityEngine_GameObject_array *animationObjects; // x23
  int max_length; // w8
  unsigned int v44; // w24
  Il2CppObject *Component_object; // x22
  const MethodInfo *v46; // x2
  const MethodInfo *v47; // x3
  System_Collections_IEnumerator_o *started; // x0

  if ( (byte_49FC634 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, key);
    sub_1B64A00(&Method_System_Collections_Generic_List_string__Add__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_string__Contains__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_string__Remove__, v10);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v11);
    sub_1B64A00(&System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo, v12);
    sub_1B64A00(&Method_WarBoardControlUiDataComponent___c__DisplayClass25_0__SetUiData_b__0__, v13);
    sub_1B64A00(&WarBoardControlUiDataComponent___c__DisplayClass25_0_TypeInfo, v14);
    sub_1B64A00(&WarBoardControlUiDataComponent_TypeInfo, v15);
    byte_49FC634 = 1;
  }
  v16 = sub_1B64C4C(WarBoardControlUiDataComponent___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_38;
  *(_QWORD *)(v16 + 16) = key;
  v21 = (Il2CppObject **)(v16 + 16);
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v16 + 16), (int32_t)key, v19, v20);
  listUiData = (System_Collections_Generic_List_object__o *)this->fields.listUiData;
  v23 = (System_Predicate_object__o *)sub_1B64C4C(System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo);
  System_Predicate_object____ctor(
    v23,
    (Il2CppObject *)v16,
    Method_WarBoardControlUiDataComponent___c__DisplayClass25_0__SetUiData_b__0__,
    0LL);
  if ( !listUiData )
    goto LABEL_38;
  v24 = System_Collections_Generic_List_object___Find(
          listUiData,
          (System_Predicate_T__o *)v23,
          (const MethodInfo_34B0630 *)Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__);
  if ( v24 )
  {
    v25 = (WarBoardControlUiDataComponent_UiData_o *)v24;
    listUiDataKey = (System_Collections_Generic_List_object__o *)this->fields.listUiDataKey;
    if ( !listUiDataKey )
      goto LABEL_38;
    if ( System_Collections_Generic_List_object___Contains(
           listUiDataKey,
           *v21,
           (const MethodInfo_34B0358 *)Method_System_Collections_Generic_List_string__Contains__) != isDisp )
    {
      listUiDataKey = (System_Collections_Generic_List_object__o *)this->fields.listUiDataKey;
      if ( !listUiDataKey )
        goto LABEL_38;
      v18 = *v21;
      if ( isDisp )
      {
        items = listUiDataKey->fields._items;
        v29 = Method_System_Collections_Generic_List_string__Add__;
        ++listUiDataKey->fields._version;
        if ( !items )
          goto LABEL_38;
        size = listUiDataKey->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            listUiDataKey,
            v18,
            *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = &items->obj.klass + size;
          listUiDataKey->fields._size = size + 1;
          v31[4] = (Il2CppClass *)v18;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)v18, v26, v27);
        }
        WarBoardControlUiDataComponent__SetUiDataTurnObjects(this, 1, v25, v32);
        SquareIndex = WarBoardControlUiDataComponent__get_SquareIndex(this, v33);
        if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
        WarBoardControlUiDataComponent__UpdateAdjustSituationAll_34828932(SquareIndex, 1, v34);
      }
      else
      {
        System_Collections_Generic_List_object___Remove(
          listUiDataKey,
          v18,
          (const MethodInfo_34B1590 *)Method_System_Collections_Generic_List_string__Remove__);
      }
      v36 = (System_String_o *)*v21;
      v37 = WarBoardControlUiDataComponent_TypeInfo;
      if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
        v37 = WarBoardControlUiDataComponent_TypeInfo;
      }
      if ( System_String__op_Equality(v36, v37->static_fields->UI_DATA_KEY_BARRIER, 0LL) )
      {
        pieceComponent = this->fields.pieceComponent;
        if ( pieceComponent )
        {
          v40 = (WarBoardServantPieceBuffTurnComponent_o *)((__int64 (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))pieceComponent->klass->vtable._4_get_BuffTrunNotice.method)(
                                                             pieceComponent,
                                                             pieceComponent->klass->vtable._5_Initialize.methodPtr);
          if ( v40 )
            WarBoardServantPieceBuffTurnComponent__UpdateDisp(v40, 1, v41);
        }
      }
      WarBoardControlUiDataComponent__LocalSave(this, v38);
      animationObjects = v25->fields.animationObjects;
      if ( !animationObjects )
LABEL_38:
        sub_1B64C5C(listUiDataKey, v18);
      max_length = animationObjects->max_length;
      if ( max_length >= 1 )
      {
        v44 = 0;
        while ( 1 )
        {
          if ( v44 >= max_length )
            sub_1B64C64(listUiDataKey, v18);
          listUiDataKey = (System_Collections_Generic_List_object__o *)animationObjects->m_Items[v44];
          if ( !listUiDataKey )
            break;
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)listUiDataKey,
                               (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
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
                          v46);
            else
              started = WarBoardControlUiDataComponent__PlayEndUiDataAnim(
                          this,
                          (SimpleAnimation_o *)Component_object,
                          v25,
                          v47);
            listUiDataKey = (System_Collections_Generic_List_object__o *)UnityEngine_MonoBehaviour__StartCoroutine_69122748(
                                                                           (UnityEngine_MonoBehaviour_o *)this,
                                                                           started,
                                                                           0LL);
          }
          max_length = animationObjects->max_length;
          if ( (int)++v44 >= max_length )
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

  if ( (byte_49FC636 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_string__AddRange__, keys);
    sub_1B64A00(&Method_System_Collections_Generic_List_string__Clear__, v5);
    byte_49FC636 = 1;
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
    sub_1B64C5C(listUiDataKey, keys);
  }
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)listUiDataKey,
    (System_Collections_Generic_IEnumerable_T__o *)keys,
    (const MethodInfo_34B01D4 *)Method_System_Collections_Generic_List_string__AddRange__);
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
        sub_1B64C64(this, method);
      this = (WarBoardControlUiDataComponent_o *)onEnterBattleTurnOffObjects->m_Items[v4];
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      max_length = onEnterBattleTurnOffObjects->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1B64C5C(this, method);
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

  if ( (byte_49FC62E & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v1);
    sub_1B64A00(&WarBoardControlUiDataComponent_TypeInfo, v2);
    byte_49FC62E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        sub_1B64C64(Instance, v4);
      v9 = *(_QWORD *)(v6 + 8LL * (int)v8 + 32);
      if ( !v9 )
        break;
      v10 = *(_DWORD *)(v9 + 16);
      if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
      WarBoardControlUiDataComponent__SetUiDataOnBattleAll_34828464(v10, v4);
      v7 = *(_DWORD *)(v6 + 24);
      if ( (int)++v8 >= v7 )
        return;
    }
LABEL_14:
    sub_1B64C5C(Instance, v4);
  }
}


void __fastcall WarBoardControlUiDataComponent__SetUiDataOnBattleAll_34828464(
        int32_t squareIndex,
        const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  const MethodInfo *v4; // x1
  struct WarBoardStageNpcMaster_o *stageNpcMaster; // x8
  WarBoardControlUiDataComponent_o *lookup; // x0
  struct WarBoardPieceData_array *pieces; // x8
  WarBoardControlUiDataComponent_o *v8; // x0

  if ( (byte_49FC62F & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_49FC62F = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_35065340(Instance, squareIndex, 0LL);
  if ( Instance )
  {
    stageNpcMaster = Instance[1].fields.stageNpcMaster;
    if ( !stageNpcMaster )
      goto LABEL_16;
    lookup = (WarBoardControlUiDataComponent_o *)stageNpcMaster[2].fields._lookup;
    if ( lookup )
      WarBoardControlUiDataComponent__SetUiDataOnBattle(lookup, v4);
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1B64C5C(Instance, v4);
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
  if ( (byte_49FC63C & 1) == 0 )
  {
    this = (WarBoardControlUiDataComponent_o *)sub_1B64A00(&UnityEngine_Object_TypeInfo, isDisp);
    byte_49FC63C = 1;
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
    sub_1B64C64(this, isDisp);
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
    sub_1B64C5C(this, isDisp);
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
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49FC63A & 1) == 0 )
  {
    sub_1B64A00(&WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_TypeInfo, isDisp);
    byte_49FC63A = 1;
  }
  v9 = immediatelyWhenOff;
  v10 = sub_1B64C4C(WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  *(_DWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 32) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v10 + 32), (int32_t)this, v11, v12);
  *(_BYTE *)(v10 + 48) = isDisp;
  *(_QWORD *)(v10 + 40) = targetObject;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v10 + 40), (int32_t)targetObject, v13, v14);
  *(_BYTE *)(v10 + 49) = v9;
  return (System_Collections_IEnumerator_o *)v10;
}


System_Collections_IEnumerator_o *__fastcall WarBoardControlUiDataComponent__StartSyncAnimation(
        WarBoardControlUiDataComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FC63F & 1) == 0 )
  {
    sub_1B64A00(&WarBoardControlUiDataComponent__StartSyncAnimation_d__43_TypeInfo, callback);
    byte_49FC63F = 1;
  }
  v5 = sub_1B64C4C(WarBoardControlUiDataComponent__StartSyncAnimation_d__43_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)callback, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall WarBoardControlUiDataComponent__SyncAnimation(
        WarBoardControlUiDataComponent_o *this,
        System_Action_o *syncCallback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *started; // x1

  started = WarBoardControlUiDataComponent__StartSyncAnimation(this, syncCallback, method);
  UnityEngine_MonoBehaviour__StartCoroutine_69122748((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
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
    sub_1B64C5C(AdjustType, v4);
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
    sub_1B64C64(AdjustType, v4);
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
  if ( (byte_49FC630 & 1) == 0 )
  {
    squareIndexes = (System_Int32_array *)sub_1B64A00(&WarBoardControlUiDataComponent_TypeInfo, immediatelyWhenOff);
    byte_49FC630 = 1;
  }
  if ( !v4 )
    sub_1B64C5C(squareIndexes, immediatelyWhenOff);
  v5 = *(_QWORD *)&v4->max_length;
  if ( (int)v5 >= 1 )
  {
    v6 = 0LL;
    v7 = immediatelyWhenOff;
    do
    {
      if ( v6 >= (unsigned int)v5 )
        sub_1B64C64(squareIndexes, immediatelyWhenOff);
      v8 = v4->m_Items[v6 + 1];
      if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
      WarBoardControlUiDataComponent__UpdateAdjustSituationAll_34828932(v8, v7, method);
      LODWORD(v5) = v4->max_length;
      ++v6;
    }
    while ( (__int64)v6 < (int)v5 );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardControlUiDataComponent__UpdateAdjustSituationAll_34828932(
        int32_t squareIndex,
        bool immediatelyWhenOff,
        const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct WarBoardStageNpcMaster_o *stageNpcMaster; // x8
  WarBoardControlUiDataComponent_o *lookup; // x0
  const MethodInfo *v10; // x2
  struct WarBoardPieceData_array *pieces; // x8
  WarBoardControlUiDataComponent_o *v12; // x0

  if ( (byte_49FC631 & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, immediatelyWhenOff);
    byte_49FC631 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_35065340(Instance, squareIndex, 0LL);
  if ( Instance )
  {
    stageNpcMaster = Instance[1].fields.stageNpcMaster;
    if ( !stageNpcMaster )
      goto LABEL_16;
    lookup = (WarBoardControlUiDataComponent_o *)stageNpcMaster[2].fields._lookup;
    if ( lookup )
      WarBoardControlUiDataComponent__UpdateAdjustSituation(lookup, immediatelyWhenOff, v7);
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1B64C5C(Instance, v6);
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
      sub_1B64C5C(IsExistsOther, v8);
    v11 = *(_QWORD *)&onExistsOtherTurnOffObjects->max_length;
    if ( (int)v11 >= 1 )
    {
      v12 = 0LL;
      v13 = ((unsigned __int8)IsExistsOther ^ 1) & 1;
      v14 = immediatelyWhenOff;
      do
      {
        if ( v12 >= (unsigned int)v11 )
          sub_1B64C64(IsExistsOther, v8);
        v15 = WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation(
                this,
                v13,
                onExistsOtherTurnOffObjects->m_Items[v12],
                v14,
                v9);
        IsExistsOther = UnityEngine_MonoBehaviour__StartCoroutine_69122748(
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

  if ( (byte_49FC637 & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_49FC637 = 1;
  }
  if ( !this->fields.compType )
    return;
  Instance = (WarBoardControlUiDataComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1B64C5C(Instance, v4);
  v10 = *(_QWORD *)&onOverlapObjects->max_length;
  if ( (int)v10 >= 1 )
  {
    v11 = 0LL;
    do
    {
      if ( v11 >= (unsigned int)v10 )
        sub_1B64C64(Instance, v4);
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

  if ( (byte_49FC62C & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    byte_49FC62C = 1;
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
    sub_1B64C5C(v4, v5);
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
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x3
  WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_c *klass; // x8
  WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *v15; // x21
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 v18; // x0
  int32_t v19; // w2
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0
  struct WarBoardControlUiDataComponent_UiData_o *uiData; // x8
  struct UnityEngine_GameObject_array *animationObjects; // x22
  int max_length; // w8
  unsigned int v25; // w23
  Il2CppObject *Component_object; // x21
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x2
  int32_t SquareIndex; // w19

  v3 = this;
  if ( (byte_49FC645 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, method);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v4);
    sub_1B64A00(&SimpleAnimation_State_TypeInfo, v5);
    sub_1B64A00(&WarBoardControlUiDataComponent_TypeInfo, v6);
    this = (WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *)sub_1B64A00(&StringLiteral_18929/*"end"*/, v7);
    byte_49FC645 = 1;
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
            (System_String_o *)StringLiteral_18929/*"end"*/,
            v2);
    v3->fields._stateName_5__2 = v10;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v3->fields._stateName_5__2, (int32_t)v10, v11, v12);
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
        v25 = 0;
        while ( 1 )
        {
          if ( v25 >= max_length )
            sub_1B64C64(this, method);
          this = (WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *)animationObjects->m_Items[v25];
          if ( !this )
            break;
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)this,
                               (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
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
                                                                                  (System_String_o *)StringLiteral_18929/*"end"*/,
                                                                                  v13);
            if ( ((unsigned __int8)this & 1) != 0 )
              return 0;
          }
          max_length = animationObjects->max_length;
          if ( (int)++v25 >= max_length )
            goto LABEL_31;
        }
LABEL_36:
        sub_1B64C5C(this, method);
      }
LABEL_31:
      if ( !_4__this )
        goto LABEL_36;
      WarBoardControlUiDataComponent__SetUiDataTurnObjects(_4__this, 0, v3->fields.uiData, v13);
      SquareIndex = WarBoardControlUiDataComponent__get_SquareIndex(_4__this, v27);
      if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
      WarBoardControlUiDataComponent__UpdateAdjustSituationAll_34828932(SquareIndex, 0, v28);
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
    v15 = this;
    v16 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_15;
      }
      v18 = (__int64)(&klass->vtable._5_System_IDisposable_Dispose.method + 2 * *p_offset);
    }
    else
    {
LABEL_15:
      v18 = sub_1BB69E0(this, SimpleAnimation_State_TypeInfo, 5LL);
    }
    if ( (*(float (__fastcall **)(WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *, _QWORD))v18)(
           v15,
           *(_QWORD *)(v18 + 8)) < 1.0 )
    {
      v3->fields.__2__current = 0LL;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
      sub_1B649A4(p__2__current, 0, v19, (int32_t)v13);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
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

  v2 = sub_1B64A14(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B64C4C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B64A14(&Method_WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_System_Collections_IEnumerator_Reset__);
  sub_1B64B28(v3, v4);
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
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x3
  WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_c *klass; // x8
  WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *v13; // x21
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 v16; // x0
  int32_t v17; // w2
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0

  v3 = this;
  if ( (byte_49FC646 & 1) == 0 )
  {
    sub_1B64A00(&SimpleAnimation_State_TypeInfo, method);
    sub_1B64A00(&StringLiteral_23387/*"start"*/, v4);
    this = (WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *)sub_1B64A00(&StringLiteral_21134/*"loop"*/, v5);
    byte_49FC646 = 1;
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
           (System_String_o *)StringLiteral_23387/*"start"*/,
           v2);
    v3->fields._stateName_5__2 = v8;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v3->fields._stateName_5__2, (int32_t)v8, v9, v10);
    if ( System_String__IsNullOrEmpty(v3->fields._stateName_5__2, 0LL) )
    {
LABEL_20:
      WarBoardControlUiDataComponent__PlayAnimation(
        _4__this,
        v3->fields.animation,
        (System_String_o *)StringLiteral_21134/*"loop"*/,
        v11);
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
        v13 = this;
        v14 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v14;
            p_offset += 4;
            if ( !v14 )
              goto LABEL_15;
          }
          v16 = (__int64)(&klass->vtable._5_System_IDisposable_Dispose.method + 2 * *p_offset);
        }
        else
        {
LABEL_15:
          v16 = sub_1BB69E0(this, SimpleAnimation_State_TypeInfo, 5LL);
        }
        if ( (*(float (__fastcall **)(WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *, _QWORD))v16)(
               v13,
               *(_QWORD *)(v16 + 8)) < 1.0 )
        {
          v3->fields.__2__current = 0LL;
          p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
          sub_1B649A4(p__2__current, 0, v17, (int32_t)v11);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
          return result;
        }
        if ( _4__this )
          goto LABEL_20;
      }
    }
LABEL_22:
    sub_1B64C5C(this, method);
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

  v2 = sub_1B64A14(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B64C4C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B64A14(&Method_WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_System_Collections_IEnumerator_Reset__);
  sub_1B64B28(v3, v4);
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
  int32_t v14; // w2
  int32_t v15; // w3
  SimpleAnimation_o *v16; // x22
  _BOOL8 v17; // x0
  const MethodInfo *v18; // x3
  _BOOL8 IsPlayingAnimation; // x0
  const MethodInfo *v20; // x3
  _BOOL4 isDisp; // w8
  SimpleAnimation_o *v22; // x21
  struct UnityEngine_GameObject_o *targetObject; // x8
  bool v24; // w1
  WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_c *klass; // x8
  WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *v26; // x21
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0
  const MethodInfo *v34; // x3
  __int64 *v35; // x8
  System_String_o *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3

  v3 = this;
  if ( (byte_49FC647 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, method);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v4);
    sub_1B64A00(&SimpleAnimation_State_TypeInfo, v5);
    sub_1B64A00(&StringLiteral_23387/*"start"*/, v6);
    sub_1B64A00(&StringLiteral_18929/*"end"*/, v7);
    this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)sub_1B64A00(
                                                                                        &StringLiteral_21134/*"loop"*/,
                                                                                        v8);
    byte_49FC647 = 1;
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
                           (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
      v3->fields._simpleAnimation_5__2 = (struct SimpleAnimation_o *)Component_object;
      p_simpleAnimation_5__2 = &v3->fields._simpleAnimation_5__2;
      sub_1B649A4(
        (ServantStatusBattleListViewItem_o *)&v3->fields._simpleAnimation_5__2,
        (int32_t)Component_object,
        v14,
        v15);
      if ( !v3->fields.isDisp )
        goto LABEL_23;
      this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)v3->fields.targetObject;
      if ( !this )
        goto LABEL_55;
      if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)this, 0LL) )
      {
        v16 = *p_simpleAnimation_5__2;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v17 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL);
        if ( v17 )
        {
          IsPlayingAnimation = WarBoardControlUiDataComponent__IsPlayingAnimation(
                                 (WarBoardControlUiDataComponent_o *)v17,
                                 *p_simpleAnimation_5__2,
                                 (System_String_o *)StringLiteral_23387/*"start"*/,
                                 v18);
          if ( IsPlayingAnimation
            || WarBoardControlUiDataComponent__IsPlayingAnimation(
                 (WarBoardControlUiDataComponent_o *)IsPlayingAnimation,
                 *p_simpleAnimation_5__2,
                 (System_String_o *)StringLiteral_21134/*"loop"*/,
                 v20) )
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
      v22 = *p_simpleAnimation_5__2;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)UnityEngine_Object__op_Equality(
                                                                                          (UnityEngine_Object_o *)v22,
                                                                                          0LL,
                                                                                          0LL);
      targetObject = v3->fields.targetObject;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( targetObject )
        {
          v24 = v3->fields.isDisp;
          this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)v3->fields.targetObject;
LABEL_53:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v24, 0LL);
          return 0;
        }
        goto LABEL_55;
      }
      if ( !targetObject )
        goto LABEL_55;
      UnityEngine_GameObject__SetActive(v3->fields.targetObject, 1, 0LL);
      if ( v3->fields.isDisp )
        v35 = &StringLiteral_23387/*"start"*/;
      else
        v35 = &StringLiteral_18929/*"end"*/;
      v36 = WarBoardControlUiDataComponent__PlayAnimation(
              _4__this,
              v3->fields._simpleAnimation_5__2,
              (System_String_o *)*v35,
              v34);
      v3->fields._stateName_5__3 = v36;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&v3->fields._stateName_5__3, (int32_t)v36, v37, v38);
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
            (System_String_o *)StringLiteral_21134/*"loop"*/,
            v31);
          return 0;
        }
LABEL_51:
        this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)v3->fields.targetObject;
        if ( this )
        {
          v24 = 0;
          goto LABEL_53;
        }
LABEL_55:
        sub_1B64C5C(this, method);
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
      v26 = this;
      v27 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v27;
          p_offset += 4;
          if ( !v27 )
            goto LABEL_39;
        }
        v29 = (__int64)(&klass->vtable._5_System_IDisposable_Dispose.method + 2 * *p_offset);
      }
      else
      {
LABEL_39:
        v29 = sub_1BB69E0(this, SimpleAnimation_State_TypeInfo, 5LL);
      }
      if ( (*(float (__fastcall **)(WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *, _QWORD))v29)(
             v26,
             *(_QWORD *)(v29 + 8)) < 1.0 )
      {
        v3->fields.__2__current = 0LL;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
        sub_1B649A4(p__2__current, 0, v30, (int32_t)v31);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
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

  v2 = sub_1B64A14(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B64C4C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B64A14(&Method_WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_System_Collections_IEnumerator_Reset__);
  sub_1B64B28(v3, v4);
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
  int32_t v2; // w2
  int32_t v3; // w3
  WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t _1__state; // w8
  struct WarBoardControlUiDataComponent_o *_4__this; // x21
  UnityEngine_Object_o **p_targetSimpleAnimation_5__2; // x20
  struct UnityEngine_GameObject_array *syncAnimationObjects; // x23
  int max_length; // w8
  unsigned int v17; // w24
  __int64 v18; // x8
  UnityEngine_GameObject_o *v19; // x22
  Il2CppObject *Component_object; // x21
  Il2CppObject *v21; // x21
  int32_t v22; // w2
  int32_t v23; // w3
  UnityEngine_Object_o *v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o **p_animState_5__3; // x20
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v29; // x1
  System_Collections_IEnumerator_o *v30; // x21
  System_Collections_IEnumerator_c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x1
  int32_t v36; // w2
  int32_t v37; // w3
  float v38; // s8
  signed int v39; // w8
  UnityEngine_Object_o *targetSimpleAnimation_5__2; // x20
  System_Collections_Generic_IEnumerable_TSource__o *States; // x0
  Il2CppObject *object; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  struct SimpleAnimation_State_o *state_5__6; // x21
  SimpleAnimation_State_c *klass; // x8
  __int64 v47; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  ServantStatusBattleListViewItem_o *v50; // x19
  char v51; // w8
  int32_t v52; // w2
  int32_t v53; // w3
  float v54; // s0
  struct System_Action_o *callback; // x8
  Il2CppObject **p__2__current; // x19
  System_Collections_IEnumerator_c *v58; // x8
  __int64 v59; // x9
  System_Collections_IEnumerator_c **v60; // x10
  __int64 v61; // x0
  UnityEngine_AnimationState_c **v62; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  __int64 v65; // x22
  __int64 v66; // x0
  __int64 v67; // x8
  __int64 v68; // x21
  __int64 v69; // x9
  int *v70; // x10
  __int64 v71; // x0
  float normalizedTime; // s8
  unsigned int v73; // w9
  unsigned int v74; // w8
  void *v75; // x0
  void *v76; // x23
  int v77; // w1
  __int64 v78; // x0
  __int64 v79; // x19
  __int64 v80; // x8
  __int64 v81; // x9
  int *v82; // x10
  __int64 v83; // x0

  v4 = this;
  if ( (byte_49FC648 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_AnimationState_TypeInfo, method);
    sub_1B64A00(&Method_System_Linq_Enumerable_First_SimpleAnimation_State___, v5);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_Animation___, v6);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v7);
    sub_1B64A00(&System_IDisposable_TypeInfo, v8);
    sub_1B64A00(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v10);
    this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)sub_1B64A00(
                                                                           &SimpleAnimation_State_TypeInfo,
                                                                           v11);
    byte_49FC648 = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 2 )
  {
    v4->fields.__1__state = -1;
LABEL_58:
    state_5__6 = v4->fields._state_5__6;
    if ( !state_5__6 )
      goto LABEL_105;
    klass = state_5__6->klass;
    v47 = *(unsigned __int16 *)(&state_5__6->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&state_5__6->klass->_2.bitflags2 + 3) )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v47;
        p_offset += 2;
        if ( !v47 )
          goto LABEL_63;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5].method;
    }
    else
    {
LABEL_63:
      p_method = sub_1BB69E0(v4->fields._state_5__6, SimpleAnimation_State_TypeInfo, 5LL);
    }
    v54 = (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))p_method)(
            state_5__6,
            *(_QWORD *)(p_method + 8));
    if ( v54 > 0.0 && v54 < 1.0 && v4->fields._time_5__5 <= v54 )
    {
      v4->fields.__2__current = 0LL;
      p__2__current = &v4->fields.__2__current;
      *((float *)p__2__current + 11) = v54;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)p__2__current, 0, v52, v53);
      *((_DWORD *)p__2__current - 2) = 2;
      v51 = 1;
      return v51 & 1;
    }
    v4->fields._state_5__6 = 0LL;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v4->fields._state_5__6, 0, v52, v53);
    goto LABEL_70;
  }
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    goto LABEL_43;
  }
  if ( _1__state )
  {
LABEL_72:
    v51 = 0;
    return v51 & 1;
  }
  _4__this = v4->fields.__4__this;
  v4->fields._targetSimpleAnimation_5__2 = 0LL;
  p_targetSimpleAnimation_5__2 = (UnityEngine_Object_o **)&v4->fields._targetSimpleAnimation_5__2;
  v4->fields.__1__state = -1;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v4->fields._targetSimpleAnimation_5__2, 0, v2, v3);
  if ( !_4__this )
    goto LABEL_105;
  syncAnimationObjects = _4__this->fields.syncAnimationObjects;
  if ( !syncAnimationObjects )
    goto LABEL_105;
  max_length = syncAnimationObjects->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
        sub_1B64C64(this, method);
      v18 = (__int64)syncAnimationObjects + 8 * (int)v17;
      v19 = *(UnityEngine_GameObject_o **)(v18 + 32);
      if ( !v19 )
        break;
      this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)UnityEngine_GameObject__get_activeInHierarchy(
                                                                             *(UnityEngine_GameObject_o **)(v18 + 32),
                                                                             0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             v19,
                             (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
        v21 = UnityEngine_GameObject__GetComponent_object_(
                v19,
                (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)UnityEngine_Object__op_Inequality(
                                                                               (UnityEngine_Object_o *)v21,
                                                                               0LL,
                                                                               0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v21 )
            break;
          this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)SimpleAnimation__get_isPlaying(
                                                                                 (SimpleAnimation_o *)v21,
                                                                                 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            *p_targetSimpleAnimation_5__2 = (UnityEngine_Object_o *)v21;
            sub_1B649A4(
              (ServantStatusBattleListViewItem_o *)&v4->fields._targetSimpleAnimation_5__2,
              (int32_t)v21,
              v22,
              v23);
          }
        }
      }
      max_length = syncAnimationObjects->max_length;
      if ( (int)++v17 >= max_length )
        goto LABEL_25;
    }
LABEL_105:
    sub_1B64C5C(this, method);
  }
LABEL_25:
  Component_object = 0LL;
LABEL_26:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    v24 = *p_targetSimpleAnimation_5__2;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)UnityEngine_Object__op_Equality(v24, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      goto LABEL_70;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
LABEL_52:
    targetSimpleAnimation_5__2 = (UnityEngine_Object_o *)v4->fields._targetSimpleAnimation_5__2;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)UnityEngine_Object__op_Inequality(
                                                                           targetSimpleAnimation_5__2,
                                                                           0LL,
                                                                           0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)v4->fields._targetSimpleAnimation_5__2;
      v4->fields._time_5__5 = -1.0;
      if ( !this )
        goto LABEL_105;
      States = (System_Collections_Generic_IEnumerable_TSource__o *)SimpleAnimation__GetStates(
                                                                      (SimpleAnimation_o *)this,
                                                                      0LL);
      object = System_Linq_Enumerable__First_object_(
                 States,
                 (const MethodInfo_2E5D35C *)Method_System_Linq_Enumerable_First_SimpleAnimation_State___);
      v4->fields._state_5__6 = (struct SimpleAnimation_State_o *)object;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&v4->fields._state_5__6, (int32_t)object, v43, v44);
      goto LABEL_58;
    }
LABEL_70:
    callback = v4->fields.callback;
    if ( !callback )
      goto LABEL_105;
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
    goto LABEL_72;
  }
  v4->fields._animState_5__3 = 0LL;
  p_animState_5__3 = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o **)&v4->fields._animState_5__3;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v4->fields._animState_5__3, 0, v25, v26);
  if ( !Component_object )
    goto LABEL_105;
  Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)Component_object, 0LL);
  v30 = Enumerator;
  if ( !Enumerator )
    sub_1B64C5C(0LL, v29);
  v31 = Enumerator->klass;
  v32 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)v33 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_41;
    }
    v34 = (__int64)&v31->vtable[*v33].method;
  }
  else
  {
LABEL_41:
    v34 = sub_1BB69E0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v34)(v30, *(_QWORD *)(v34 + 8)) & 1) != 0 )
  {
    v58 = v30->klass;
    v59 = *(unsigned __int16 *)(&v30->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v30->klass->_2.bitflags2 + 3) )
    {
      v60 = (System_Collections_IEnumerator_c **)&v58->_1.interfaceOffsets->offset;
      while ( *(v60 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v59;
        v60 += 2;
        if ( !v59 )
          goto LABEL_81;
      }
      v61 = (__int64)&v58->vtable[*(_DWORD *)v60 + 1].method;
    }
    else
    {
LABEL_81:
      v61 = sub_1BB69E0(v30, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v62 = (UnityEngine_AnimationState_c **)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v61)(
                                             v30,
                                             *(_QWORD *)(v61 + 8));
    if ( v62 && *v62 != UnityEngine_AnimationState_TypeInfo )
    {
      sub_1B64F1C(v62);
      v76 = v75;
      if ( v77 != 1 )
      {
        v78 = sub_1B64B3C(v30, System_IDisposable_TypeInfo);
        v79 = v78;
        if ( v78 )
        {
          v80 = *(_QWORD *)v78;
          v81 = *(unsigned __int16 *)(*(_QWORD *)v78 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v78 + 302LL) )
          {
            v82 = (int *)(*(_QWORD *)(v80 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v82 - 1) != System_IDisposable_TypeInfo )
            {
              --v81;
              v82 += 4;
              if ( !v81 )
                goto LABEL_116;
            }
            v83 = v80 + 16LL * *v82 + 312;
          }
          else
          {
LABEL_116:
            v83 = sub_1BB69E0(v78, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v83)(v79, *(_QWORD *)(v83 + 8));
        }
        sub_1C4F490(v76);
      }
      v65 = *(_QWORD *)__cxa_begin_catch(v75);
      __cxa_end_catch();
      goto LABEL_87;
    }
    *p_animState_5__3 = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)v62;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v4->fields._animState_5__3, (int32_t)v62, v63, v64);
  }
  v65 = 0LL;
LABEL_87:
  v66 = sub_1B64B3C(v30, System_IDisposable_TypeInfo);
  if ( v66 )
  {
    v67 = *(_QWORD *)v66;
    v68 = v66;
    v69 = *(unsigned __int16 *)(*(_QWORD *)v66 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v66 + 302LL) )
    {
      v70 = (int *)(*(_QWORD *)(v67 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v70 - 1) != System_IDisposable_TypeInfo )
      {
        --v69;
        v70 += 4;
        if ( !v69 )
          goto LABEL_92;
      }
      v71 = v67 + 16LL * *v70 + 312;
    }
    else
    {
LABEL_92:
      v71 = sub_1BB69E0(v66, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v71)(v68, *(_QWORD *)(v71 + 8));
  }
  if ( v65 )
    sub_1B64C54(v65);
  this = *p_animState_5__3;
  if ( !*p_animState_5__3 )
    goto LABEL_105;
  normalizedTime = UnityEngine_AnimationState__get_normalizedTime((UnityEngine_AnimationState_o *)this, 0LL);
  if ( !byte_49F9820 )
  {
    sub_1B64A00(&System_Math_TypeInfo, method);
    byte_49F9820 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v73 = vcvtms_s32_f32(normalizedTime);
  if ( floorf(normalizedTime) == INFINITY )
    v74 = 0x80000000;
  else
    v74 = v73;
  v4->fields._startNormalizedTime_5__4 = v74;
LABEL_43:
  this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)v4->fields._animState_5__3;
  if ( !this )
    goto LABEL_105;
  v38 = UnityEngine_AnimationState__get_normalizedTime((UnityEngine_AnimationState_o *)this, 0LL);
  if ( !byte_49F9820 )
  {
    sub_1B64A00(&System_Math_TypeInfo, v35);
    byte_49F9820 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v39 = vcvtms_s32_f32(v38);
  if ( floorf(v38) == INFINITY )
    v39 = 0x80000000;
  if ( v4->fields._startNormalizedTime_5__4 < v39 )
  {
    v4->fields._animState_5__3 = 0LL;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v4->fields._animState_5__3, 0, v36, v37);
    goto LABEL_52;
  }
  v4->fields.__2__current = 0LL;
  v50 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
  sub_1B649A4(v50, 0, v36, v37);
  v51 = 1;
  *(_DWORD *)&v50[-1].fields.isMine = 1;
  return v51 & 1;
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

  v2 = sub_1B64A14(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B64C4C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B64A14(&Method_WarBoardControlUiDataComponent__StartSyncAnimation_d__43_System_Collections_IEnumerator_Reset__);
  sub_1B64B28(v3, v4);
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
    sub_1B64C5C(this, 0LL);
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
    sub_1B64C5C(this, 0LL);
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
    sub_1B64C5C(this, 0LL);
  return System_String__op_Equality(a->fields.key, this->fields.key, 0LL);
}