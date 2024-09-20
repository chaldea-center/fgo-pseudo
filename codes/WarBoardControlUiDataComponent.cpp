void __fastcall WarBoardControlUiDataComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3

  if ( (byte_4A58C47 & 1) == 0 )
  {
    sub_1B885B0(&WarBoardControlUiDataComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_3174/*"Barrier"*/);
    byte_4A58C47 = 1;
  }
  WarBoardControlUiDataComponent_TypeInfo->static_fields->UI_DATA_KEY_BARRIER = (struct System_String_o *)StringLiteral_3174/*"Barrier"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)WarBoardControlUiDataComponent_TypeInfo->static_fields,
    StringLiteral_3174/*"Barrier"*/,
    v1,
    v2);
}


void __fastcall WarBoardControlUiDataComponent___ctor(WarBoardControlUiDataComponent_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x0
  struct System_Single_array *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_RuntimeFieldHandle_o v13; // 0:w1.4

  if ( (byte_4A58C46 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&float___TypeInfo);
    sub_1B885B0(&Field__PrivateImplementationDetails__64464566F592BAB0A74DD80EB47024C0ECA2BB914D37B27E78F5532363736E1B);
    byte_4A58C46 = 1;
  }
  v3 = (System_Array_o *)sub_1B88658(float___TypeInfo, 7LL);
  v13.fields.value = Field__PrivateImplementationDetails__64464566F592BAB0A74DD80EB47024C0ECA2BB914D37B27E78F5532363736E1B;
  v4 = (struct System_Single_array *)v3;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112(v3, v13, 0LL);
  this->fields.AdjustOffsetY = v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.AdjustOffsetY, (int32_t)v4, v5, v6);
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData___ctor__);
  this->fields.listUiData = (struct System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__o *)v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.listUiData, (int32_t)v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.listUiDataKey = (struct System_Collections_Generic_List_string__o *)v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.listUiDataKey, (int32_t)v10, v11, v12);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardControlUiDataComponent__Awake(WarBoardControlUiDataComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  Il2CppObject *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A58C30 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_WarBoardPieceBaseComponent___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_WarBoardSquareComponent___);
    byte_4A58C30 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_WarBoardPieceBaseComponent___);
  this->fields.pieceComponent = (struct WarBoardPieceBaseComponent_o *)Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.pieceComponent, (int32_t)Component_object, v4, v5);
  v6 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_WarBoardSquareComponent___);
  this->fields.squareComponent = (struct WarBoardSquareComponent_o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.squareComponent, (int32_t)v6, v7, v8);
}


int32_t __fastcall WarBoardControlUiDataComponent__CheckCorrectActiveObject(
        WarBoardControlUiDataComponent_o *this,
        UnityEngine_GameObject_o *targetObject,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *listUiDataKey; // x0
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t current; // w1
  System_Collections_Generic_List_object__o *listUiData; // x22
  System_Predicate_object__o *v13; // x23
  __int64 v14; // x0
  __int64 v15; // x1
  Il2CppObject *v16; // x0
  __int64 v17; // x1
  Il2CppObject *v18; // x21
  _QWORD *monitor; // x23
  __int64 v20; // x8
  unsigned __int64 v21; // x26
  UnityEngine_Object_o *v22; // x22
  Il2CppClass *klass; // x22
  const char *namespaze; // x8
  unsigned __int64 v25; // x23
  UnityEngine_Object_o *v26; // x21
  int32_t v27; // w19
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A58C3B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo);
    sub_1B885B0(&Method_WarBoardControlUiDataComponent___c__DisplayClass34_0__CheckCorrectActiveObject_b__0__);
    sub_1B885B0(&WarBoardControlUiDataComponent___c__DisplayClass34_0_TypeInfo);
    byte_4A58C3B = 1;
  }
  memset(&v30, 0, sizeof(v30));
  listUiDataKey = this->fields.listUiDataKey;
  if ( !listUiDataKey )
    sub_1B8880C(0LL, targetObject);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)listUiDataKey,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v30 = v29;
  while ( 1 )
  {
    do
    {
LABEL_5:
      if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v30,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
      {
        v27 = -1;
        goto LABEL_28;
      }
      v6 = sub_1B887FC(WarBoardControlUiDataComponent___c__DisplayClass34_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v6, 0LL);
      if ( !v6 )
        sub_1B8880C(v7, v8);
      current = (int32_t)v30.fields._current;
      *(_QWORD *)(v6 + 16) = v30.fields._current;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v6 + 16), current, v9, v10);
      listUiData = (System_Collections_Generic_List_object__o *)this->fields.listUiData;
      v13 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo);
      System_Predicate_object____ctor(
        v13,
        (Il2CppObject *)v6,
        Method_WarBoardControlUiDataComponent___c__DisplayClass34_0__CheckCorrectActiveObject_b__0__,
        0LL);
      if ( !listUiData )
        sub_1B8880C(v14, v15);
      v16 = System_Collections_Generic_List_object___Find(
              listUiData,
              (System_Predicate_T__o *)v13,
              (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__);
      v18 = v16;
    }
    while ( !v16 );
    monitor = v16[1].monitor;
    if ( !monitor )
      sub_1B8880C(v16, v17);
    v20 = monitor[3];
    if ( (int)v20 >= 1 )
      break;
LABEL_17:
    klass = v18[2].klass;
    if ( !klass )
      sub_1B8880C(v16, v17);
    namespaze = klass->_1.namespaze;
    if ( (int)namespaze >= 1 )
    {
      v25 = 0LL;
      while ( 1 )
      {
        if ( v25 >= (unsigned int)namespaze )
          sub_1B88814(v16, v17);
        v26 = (UnityEngine_Object_o *)*((_QWORD *)&klass->_1.byval_arg.data + v25);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v16 = (Il2CppObject *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)targetObject, v26, 0LL);
        if ( ((unsigned __int8)v16 & 1) != 0 )
          break;
        LODWORD(namespaze) = klass->_1.namespaze;
        if ( (__int64)++v25 >= (int)namespaze )
          goto LABEL_5;
      }
      v27 = 0;
      goto LABEL_28;
    }
  }
  v21 = 0LL;
  while ( 1 )
  {
    if ( v21 >= (unsigned int)v20 )
      sub_1B88814(v16, v17);
    v22 = (UnityEngine_Object_o *)monitor[v21 + 4];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v16 = (Il2CppObject *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)targetObject, v22, 0LL);
    if ( ((unsigned __int8)v16 & 1) != 0 )
      break;
    LODWORD(v20) = *((_DWORD *)monitor + 6);
    if ( (__int64)++v21 >= (int)v20 )
      goto LABEL_17;
  }
  v27 = 1;
LABEL_28:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  return v27;
}


int32_t __fastcall WarBoardControlUiDataComponent__GetAdjustType(
        WarBoardControlUiDataComponent_o *this,
        const MethodInfo *method)
{
  void *Instance; // x0
  const MethodInfo *v4; // x1
  WarBoardData_o *v5; // x20
  WarBoardPieceData_o *Piece_35359972; // x0
  WarBoardData_o *v8; // x20
  __int64 v9; // x8
  WarBoardControlUiDataComponent_o *v10; // x0
  WarBoardData_o *v11; // x20
  WarBoardData_o *v12; // x20
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardData_o *v14; // x20
  WarBoardItemData_o *Item; // x0

  if ( (byte_4A58C3E & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4A58C3E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  v5 = (WarBoardData_o *)*((_QWORD *)Instance + 55);
  Instance = (void *)WarBoardControlUiDataComponent__get_SquareIndex(this, v4);
  if ( !v5 )
    goto LABEL_31;
  Piece_35359972 = WarBoardData__GetPiece_35359972(v5, (int32_t)Instance, 0LL);
  if ( Piece_35359972 )
  {
    if ( WarBoardPieceData__get_isMaster(Piece_35359972, 0LL) )
      return 6;
    else
      return 5;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  v11 = (WarBoardData_o *)*((_QWORD *)Instance + 55);
  Instance = (void *)WarBoardControlUiDataComponent__get_SquareIndex(this, v4);
  if ( !v11 )
    goto LABEL_31;
  if ( WarBoardData__GetWall(v11, (int32_t)Instance, 0, 0LL) )
    return 3;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  v12 = (WarBoardData_o *)*((_QWORD *)Instance + 55);
  Instance = (void *)WarBoardControlUiDataComponent__get_SquareIndex(this, v4);
  if ( !v12 )
    goto LABEL_31;
  Treasure = WarBoardData__GetTreasure(v12, (int32_t)Instance, 0LL);
  if ( Treasure && !Treasure->fields._isUse_k__BackingField )
    return 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (v14 = (WarBoardData_o *)*((_QWORD *)Instance + 55),
        Instance = (void *)WarBoardControlUiDataComponent__get_SquareIndex(this, v4),
        !v14) )
  {
LABEL_31:
    sub_1B8880C(Instance, v4);
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
  WarBoardControlUiDataComponent_c *klass; // x8
  WarBoardControlUiDataComponent_o *v7; // x19
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x19
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
  __int64 v23; // x21
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
  System_String_o *v36; // x21
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0

  if ( (byte_4A58C44 & 1) == 0 )
  {
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    this = (WarBoardControlUiDataComponent_o *)sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    byte_4A58C44 = 1;
  }
  if ( !animation || (this = (WarBoardControlUiDataComponent_o *)SimpleAnimation__GetStates(animation, 0LL)) == 0LL )
    sub_1B8880C(this, animation);
  klass = this->klass;
  v7 = this;
  v8 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
    {
      --v8;
      p_offset += 4;
      if ( !v8 )
        goto LABEL_9;
    }
    v10 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v10 = sub_1BDA590(this, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
  }
  v12 = (*(__int64 (__fastcall **)(WarBoardControlUiDataComponent_o *, _QWORD))v10)(v7, *(_QWORD *)(v10 + 8));
  if ( !v12 )
    sub_1B8880C(0LL, v11);
  do
  {
    v13 = *(_QWORD *)v12;
    v14 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v15 = (int *)(*(_QWORD *)(v13 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_16;
      }
      v16 = v13 + 16LL * *v15 + 312;
    }
    else
    {
LABEL_16:
      v16 = sub_1BDA590(v12, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v16)(v12, *(_QWORD *)(v16 + 8)) & 1) == 0 )
    {
      v36 = 0LL;
      goto LABEL_43;
    }
    v17 = *(_QWORD *)v12;
    v18 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v19 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_23;
      }
      v20 = v17 + 16LL * *v19 + 312;
    }
    else
    {
LABEL_23:
      v20 = sub_1BDA590(v12, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
    }
    v21 = (*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v12, *(_QWORD *)(v20 + 8));
    v23 = v21;
    if ( !v21 )
      sub_1B8880C(0LL, v22);
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
          goto LABEL_30;
      }
      v27 = v24 + 16LL * (*(_DWORD *)v26 + 9) + 312;
    }
    else
    {
LABEL_30:
      v27 = sub_1BDA590(v21, SimpleAnimation_State_TypeInfo, 9LL);
    }
    v28 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8));
    if ( !v28 )
      sub_1B8880C(0LL, v29);
    v30 = System_String__ToLower(v28, 0LL);
    if ( !v30 )
      sub_1B8880C(0LL, v31);
  }
  while ( !System_String__EndsWith(v30, suffix, 0LL) );
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
        goto LABEL_39;
    }
    v35 = v32 + 16LL * (*(_DWORD *)v34 + 9) + 312;
  }
  else
  {
LABEL_39:
    v35 = sub_1BDA590(v23, SimpleAnimation_State_TypeInfo, 9LL);
  }
  v36 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v23, *(_QWORD *)(v35 + 8));
LABEL_43:
  v37 = *(_QWORD *)v12;
  v38 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
  {
    v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_47;
    }
    v40 = v37 + 16LL * *v39 + 312;
  }
  else
  {
LABEL_47:
    v40 = sub_1BDA590(v12, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v40)(v12, *(_QWORD *)(v40 + 8));
  return v36;
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
          sub_1B88814(this, method);
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
      sub_1B8880C(this, method);
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
          sub_1B88814(this, method);
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
      sub_1B8880C(this, method);
    }
  }
  LOBYTE(this) = 0;
  return (unsigned __int8)this & 1;
}


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

  if ( (byte_4A58C3C & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4A58C3C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (monitor = (WarBoardData_o *)Instance[27].monitor) == 0LL )
    sub_1B8880C(Instance, v5);
  return WarBoardData__GetPiece_35359972((WarBoardData_o *)Instance[27].monitor, squareIndex, 0LL)
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

  if ( (byte_4A58C43 & 1) == 0 )
  {
    this = (WarBoardControlUiDataComponent_o *)sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    byte_4A58C43 = 1;
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
    sub_1B8880C(IsNullOrEmpty, v8);
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
    p_method = sub_1BDA590(IsNullOrEmpty, SimpleAnimation_State_TypeInfo, 5LL);
  }
  return (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(v10, *(_QWORD *)(p_method + 8)) < 1.0;
}


void __fastcall WarBoardControlUiDataComponent__LocalSave(
        WarBoardControlUiDataComponent_o *this,
        const MethodInfo *method)
{
  int32_t compType; // w8
  UnityEngine_Object_o *squareComponent; // x20
  __int64 Instance; // x0
  const MethodInfo *v6; // x1
  WarBoardData_o *v7; // x20
  struct System_Collections_Generic_List_string__o *listUiDataKey; // x8
  int32_t v9; // w19
  UnityEngine_Object_o *pieceComponent; // x20
  struct WarBoardPieceBaseComponent_o *v11; // x8
  struct WarBoardPieceData_o *pieceData; // x21
  System_Int32_array *v13; // x20
  unsigned int v14; // w8
  __int64 v15; // x8
  WarBoardData_o *v16; // x19

  if ( (byte_4A58C45 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4A58C45 = 1;
  }
  compType = this->fields.compType;
  if ( !compType )
  {
    squareComponent = (UnityEngine_Object_o *)this->fields.squareComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(squareComponent, 0LL, 0LL) )
    {
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        v7 = *(WarBoardData_o **)(Instance + 440);
        Instance = WarBoardControlUiDataComponent__get_SquareIndex(this, v6);
        listUiDataKey = this->fields.listUiDataKey;
        if ( listUiDataKey )
        {
          v9 = Instance;
          Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                                (System_Collections_Generic_List_object__o *)listUiDataKey,
                                (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_string__ToArray__);
          if ( v7 )
          {
            WarBoardData__UpdateUiData(v7, v9, (System_String_array *)Instance, 0LL);
            return;
          }
        }
      }
LABEL_27:
      sub_1B8880C(Instance, v6);
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
      v11 = this->fields.pieceComponent;
      if ( !v11 )
        goto LABEL_27;
      pieceData = v11->fields.pieceData;
      Instance = sub_1B88658(int___TypeInfo, 3LL);
      if ( !pieceData )
        goto LABEL_27;
      v13 = (System_Int32_array *)Instance;
      if ( !Instance )
        goto LABEL_27;
      v14 = *(_DWORD *)(Instance + 24);
      if ( !v14
        || (*(_DWORD *)(Instance + 32) = pieceData->fields._forceId_k__BackingField, v14 == 1)
        || (*(_DWORD *)(Instance + 36) = pieceData->fields._groupId_k__BackingField, v14 <= 2) )
      {
        sub_1B88814(Instance, v6);
      }
      *(_DWORD *)(Instance + 40) = pieceData->fields._index_k__BackingField;
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !Instance )
        goto LABEL_27;
      v15 = Instance;
      Instance = (__int64)this->fields.listUiDataKey;
      if ( !Instance )
        goto LABEL_27;
      v16 = *(WarBoardData_o **)(v15 + 440);
      Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                            (System_Collections_Generic_List_object__o *)Instance,
                            (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_string__ToArray__);
      if ( !v16 )
        goto LABEL_27;
      WarBoardData__UpdateUiData_35392084(v16, v13, (System_String_array *)Instance, 0LL);
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
      sub_1B8880C(0LL, v6);
    SimpleAnimation__Play_63844704(animation, AnimationStateName, 0LL);
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

  if ( (byte_4A58C41 & 1) == 0 )
  {
    sub_1B885B0(&WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_TypeInfo);
    byte_4A58C41 = 1;
  }
  v7 = sub_1B887FC(WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 40) = animation;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)animation, v10, v11);
  *(_QWORD *)(v7 + 48) = uiData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)uiData, v12, v13);
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

  if ( (byte_4A58C40 & 1) == 0 )
  {
    sub_1B885B0(&WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_TypeInfo);
    byte_4A58C40 = 1;
  }
  v5 = sub_1B887FC(WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = animation;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)animation, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall WarBoardControlUiDataComponent__ResumeUiData(
        WarBoardControlUiDataComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *listUiDataKey; // x0
  __int64 v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t current; // w1
  System_String_o **v10; // x20
  System_Collections_Generic_List_object__o *listUiData; // x22
  System_Predicate_object__o *v12; // x23
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  WarBoardControlUiDataComponent_UiData_o *v16; // x21
  System_String_o *v17; // x20
  WarBoardControlUiDataComponent_c *v18; // x0
  WarBoardServantPieceBuffTurnComponent_o *v19; // x0
  __int64 v20; // x1
  WarBoardServantPieceBuffTurnComponent_o *v21; // x20
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x22
  const MethodInfo *v23; // x2
  struct UnityEngine_GameObject_array *animationObjects; // x23
  int max_length; // w8
  int i; // w22
  UnityEngine_GameObject_o *v27; // x0
  Il2CppObject *Component_object; // x21
  const MethodInfo *v29; // x3
  struct WarBoardPieceBaseComponent_o *v30; // [xsp+8h] [xbp-A8h]
  WarBoardServantPieceBuffTurnComponent_o *v31; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4A58C38 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo);
    sub_1B885B0(&Method_WarBoardControlUiDataComponent___c__DisplayClass26_0__ResumeUiData_b__0__);
    sub_1B885B0(&WarBoardControlUiDataComponent___c__DisplayClass26_0_TypeInfo);
    sub_1B885B0(&WarBoardControlUiDataComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_21213/*"loop"*/);
    byte_4A58C38 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  listUiDataKey = this->fields.listUiDataKey;
  if ( !listUiDataKey )
    sub_1B8880C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    (System_Collections_Generic_List_object__o *)listUiDataKey,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v30 = 0LL;
  v31 = 0LL;
  v33 = v32;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    v4 = sub_1B887FC(WarBoardControlUiDataComponent___c__DisplayClass26_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    if ( !v4 )
      sub_1B8880C(v5, v6);
    current = (int32_t)v33.fields._current;
    *(_QWORD *)(v4 + 16) = v33.fields._current;
    v10 = (System_String_o **)(v4 + 16);
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 16), current, v7, v8);
    listUiData = (System_Collections_Generic_List_object__o *)this->fields.listUiData;
    v12 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo);
    System_Predicate_object____ctor(
      v12,
      (Il2CppObject *)v4,
      Method_WarBoardControlUiDataComponent___c__DisplayClass26_0__ResumeUiData_b__0__,
      0LL);
    if ( !listUiData )
      sub_1B8880C(v13, v14);
    v16 = (WarBoardControlUiDataComponent_UiData_o *)System_Collections_Generic_List_object___Find(
                                                       listUiData,
                                                       (System_Predicate_T__o *)v12,
                                                       (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__);
    if ( v16 )
    {
      WarBoardControlUiDataComponent__SetUiDataTurnObjects(this, 1, v16, v15);
      v17 = *v10;
      v18 = WarBoardControlUiDataComponent_TypeInfo;
      if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
        v18 = WarBoardControlUiDataComponent_TypeInfo;
      }
      v19 = (WarBoardServantPieceBuffTurnComponent_o *)System_String__op_Equality(
                                                         v17,
                                                         v18->static_fields->UI_DATA_KEY_BARRIER,
                                                         0LL);
      v21 = v31;
      if ( ((unsigned __int8)v19 & 1) != 0
        && ((pieceComponent = this->fields.pieceComponent) != 0LL
          ? (v19 = (WarBoardServantPieceBuffTurnComponent_o *)this->fields.pieceComponent)
          : (v19 = (WarBoardServantPieceBuffTurnComponent_o *)v30),
            pieceComponent) )
      {
        if ( !v19 )
          sub_1B8880C(0LL, v20);
        v19 = (WarBoardServantPieceBuffTurnComponent_o *)((__int64 (__fastcall *)(WarBoardServantPieceBuffTurnComponent_o *, const char *))v19->klass[1]._1.gc_desc)(
                                                           v19,
                                                           v19->klass[1]._1.name);
        v21 = v19;
        if ( !v19 )
          v19 = v31;
        if ( v21 )
        {
          if ( !v19 )
            sub_1B8880C(0LL, v20);
          WarBoardServantPieceBuffTurnComponent__UpdateDisp(v19, 1, v23);
        }
        else
        {
          v21 = v31;
        }
      }
      else
      {
        pieceComponent = v30;
      }
      animationObjects = v16->fields.animationObjects;
      if ( !animationObjects )
        sub_1B8880C(v19, v20);
      max_length = animationObjects->max_length;
      v30 = pieceComponent;
      v31 = v21;
      if ( max_length >= 1 )
      {
        v30 = pieceComponent;
        for ( i = 0; i < max_length; ++i )
        {
          if ( i >= (unsigned int)max_length )
            sub_1B88814(v19, v20);
          v27 = animationObjects->m_Items[i];
          if ( !v27 )
            sub_1B8880C(0LL, v20);
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               v27,
                               (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v19 = (WarBoardServantPieceBuffTurnComponent_o *)UnityEngine_Object__op_Equality(
                                                             (UnityEngine_Object_o *)Component_object,
                                                             0LL,
                                                             0LL);
          if ( ((unsigned __int8)v19 & 1) == 0 )
            v19 = (WarBoardServantPieceBuffTurnComponent_o *)WarBoardControlUiDataComponent__PlayAnimation(
                                                               this,
                                                               (SimpleAnimation_o *)Component_object,
                                                               (System_String_o *)StringLiteral_21213/*"loop"*/,
                                                               v29);
          max_length = animationObjects->max_length;
        }
        v31 = v21;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


void __fastcall WarBoardControlUiDataComponent__ResumeUiDataAll(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v2; // x1
  _QWORD *monitor; // x8
  __int64 v4; // x20
  int v5; // w8
  unsigned int v6; // w21
  __int64 v7; // x8
  int32_t v8; // w19

  if ( (byte_4A58C35 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&WarBoardControlUiDataComponent_TypeInfo);
    byte_4A58C35 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  monitor = Instance[27].monitor;
  if ( !monitor )
    goto LABEL_14;
  v4 = monitor[7];
  if ( !v4 )
    goto LABEL_14;
  v5 = *(_DWORD *)(v4 + 24);
  if ( v5 >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= v5 )
        sub_1B88814(Instance, v2);
      v7 = *(_QWORD *)(v4 + 8LL * (int)v6 + 32);
      if ( !v7 )
        break;
      v8 = *(_DWORD *)(v7 + 16);
      if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
      WarBoardControlUiDataComponent__ResumeUiDataAll_35124028(v8, v2);
      v5 = *(_DWORD *)(v4 + 24);
      if ( (int)++v6 >= v5 )
        return;
    }
LABEL_14:
    sub_1B8880C(Instance, v2);
  }
}


void __fastcall WarBoardControlUiDataComponent__ResumeUiDataAll_35124028(int32_t squareIndex, const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  const MethodInfo *v4; // x1
  struct WarBoardStageNpcMaster_o *stageNpcMaster; // x8
  WarBoardControlUiDataComponent_o *lookup; // x0
  const MethodInfo *v7; // x2
  struct WarBoardPieceData_array *pieces; // x8
  WarBoardControlUiDataComponent_o *v9; // x0

  if ( (byte_4A58C36 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&WarBoardControlUiDataComponent_TypeInfo);
    byte_4A58C36 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_18;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_35359972(Instance, squareIndex, 0LL);
  if ( Instance )
  {
    stageNpcMaster = Instance[1].fields.stageNpcMaster;
    if ( !stageNpcMaster )
      goto LABEL_18;
    lookup = (WarBoardControlUiDataComponent_o *)stageNpcMaster[2].fields._lookup;
    if ( lookup )
      WarBoardControlUiDataComponent__ResumeUiData(lookup, v4);
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1B8880C(Instance, v4);
  v9 = (WarBoardControlUiDataComponent_o *)pieces->m_Items[19];
  if ( v9 )
    WarBoardControlUiDataComponent__ResumeUiData(v9, v4);
LABEL_15:
  if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  WarBoardControlUiDataComponent__UpdateAdjustSituationAll_35123564(squareIndex, 1, v7);
}


void __fastcall WarBoardControlUiDataComponent__SetUiData(
        WarBoardControlUiDataComponent_o *this,
        System_String_o *key,
        bool isDisp,
        const MethodInfo *method)
{
  __int64 v7; // x23
  System_Collections_Generic_List_object__o *listUiDataKey; // x0
  Il2CppObject *v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject **v12; // x22
  System_Collections_Generic_List_object__o *listUiData; // x21
  System_Predicate_object__o *v14; // x24
  Il2CppObject *v15; // x0
  WarBoardControlUiDataComponent_UiData_o *v16; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x8
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x2
  int32_t SquareIndex; // w23
  System_String_o *v27; // x22
  WarBoardControlUiDataComponent_c *v28; // x0
  const MethodInfo *v29; // x1
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0
  WarBoardServantPieceBuffTurnComponent_o *v31; // x0
  const MethodInfo *v32; // x2
  struct UnityEngine_GameObject_array *animationObjects; // x23
  int max_length; // w8
  unsigned int v35; // w24
  Il2CppObject *Component_object; // x22
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x3
  System_Collections_IEnumerator_o *started; // x0

  if ( (byte_4A58C37 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo);
    sub_1B885B0(&Method_WarBoardControlUiDataComponent___c__DisplayClass25_0__SetUiData_b__0__);
    sub_1B885B0(&WarBoardControlUiDataComponent___c__DisplayClass25_0_TypeInfo);
    sub_1B885B0(&WarBoardControlUiDataComponent_TypeInfo);
    byte_4A58C37 = 1;
  }
  v7 = sub_1B887FC(WarBoardControlUiDataComponent___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_38;
  *(_QWORD *)(v7 + 16) = key;
  v12 = (Il2CppObject **)(v7 + 16);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)key, v10, v11);
  listUiData = (System_Collections_Generic_List_object__o *)this->fields.listUiData;
  v14 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo);
  System_Predicate_object____ctor(
    v14,
    (Il2CppObject *)v7,
    Method_WarBoardControlUiDataComponent___c__DisplayClass25_0__SetUiData_b__0__,
    0LL);
  if ( !listUiData )
    goto LABEL_38;
  v15 = System_Collections_Generic_List_object___Find(
          listUiData,
          (System_Predicate_T__o *)v14,
          (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__);
  if ( v15 )
  {
    v16 = (WarBoardControlUiDataComponent_UiData_o *)v15;
    listUiDataKey = (System_Collections_Generic_List_object__o *)this->fields.listUiDataKey;
    if ( !listUiDataKey )
      goto LABEL_38;
    if ( System_Collections_Generic_List_object___Contains(
           listUiDataKey,
           *v12,
           (const MethodInfo_34FDBC4 *)Method_System_Collections_Generic_List_string__Contains__) != isDisp )
    {
      listUiDataKey = (System_Collections_Generic_List_object__o *)this->fields.listUiDataKey;
      if ( !listUiDataKey )
        goto LABEL_38;
      v9 = *v12;
      if ( isDisp )
      {
        items = listUiDataKey->fields._items;
        v20 = Method_System_Collections_Generic_List_string__Add__;
        ++listUiDataKey->fields._version;
        if ( !items )
          goto LABEL_38;
        size = listUiDataKey->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            listUiDataKey,
            v9,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          listUiDataKey->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v9;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v9, v17, v18);
        }
        WarBoardControlUiDataComponent__SetUiDataTurnObjects(this, 1, v16, v23);
        SquareIndex = WarBoardControlUiDataComponent__get_SquareIndex(this, v24);
        if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
        WarBoardControlUiDataComponent__UpdateAdjustSituationAll_35123564(SquareIndex, 1, v25);
      }
      else
      {
        System_Collections_Generic_List_object___Remove(
          listUiDataKey,
          v9,
          (const MethodInfo_34FED5C *)Method_System_Collections_Generic_List_string__Remove__);
      }
      v27 = (System_String_o *)*v12;
      v28 = WarBoardControlUiDataComponent_TypeInfo;
      if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
        v28 = WarBoardControlUiDataComponent_TypeInfo;
      }
      if ( System_String__op_Equality(v27, v28->static_fields->UI_DATA_KEY_BARRIER, 0LL) )
      {
        pieceComponent = this->fields.pieceComponent;
        if ( pieceComponent )
        {
          v31 = (WarBoardServantPieceBuffTurnComponent_o *)((__int64 (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))pieceComponent->klass->vtable._4_get_BuffTrunNotice.method)(
                                                             pieceComponent,
                                                             pieceComponent->klass->vtable._5_Initialize.methodPtr);
          if ( v31 )
            WarBoardServantPieceBuffTurnComponent__UpdateDisp(v31, 1, v32);
        }
      }
      WarBoardControlUiDataComponent__LocalSave(this, v29);
      animationObjects = v16->fields.animationObjects;
      if ( !animationObjects )
LABEL_38:
        sub_1B8880C(listUiDataKey, v9);
      max_length = animationObjects->max_length;
      if ( max_length >= 1 )
      {
        v35 = 0;
        while ( 1 )
        {
          if ( v35 >= max_length )
            sub_1B88814(listUiDataKey, v9);
          listUiDataKey = (System_Collections_Generic_List_object__o *)animationObjects->m_Items[v35];
          if ( !listUiDataKey )
            break;
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)listUiDataKey,
                               (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
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
                          v37);
            else
              started = WarBoardControlUiDataComponent__PlayEndUiDataAnim(
                          this,
                          (SimpleAnimation_o *)Component_object,
                          v16,
                          v38);
            listUiDataKey = (System_Collections_Generic_List_object__o *)UnityEngine_MonoBehaviour__StartCoroutine_69444652(
                                                                           (UnityEngine_MonoBehaviour_o *)this,
                                                                           started,
                                                                           0LL);
          }
          max_length = animationObjects->max_length;
          if ( (int)++v35 >= max_length )
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
  struct System_Collections_Generic_List_string__o *listUiDataKey; // x0
  int32_t size; // w2
  int v7; // w8

  if ( (byte_4A58C39 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Clear__);
    byte_4A58C39 = 1;
  }
  listUiDataKey = this->fields.listUiDataKey;
  if ( !listUiDataKey
    || (size = listUiDataKey->fields._size,
        v7 = listUiDataKey->fields._version + 1,
        listUiDataKey->fields._size = 0,
        listUiDataKey->fields._version = v7,
        size >= 1)
    && (System_Array__Clear((System_Array_o *)listUiDataKey->fields._items, 0, size, 0LL),
        (listUiDataKey = this->fields.listUiDataKey) == 0LL) )
  {
    sub_1B8880C(listUiDataKey, keys);
  }
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)listUiDataKey,
    (System_Collections_Generic_IEnumerable_T__o *)keys,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_string__AddRange__);
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
        sub_1B88814(this, method);
      this = (WarBoardControlUiDataComponent_o *)onEnterBattleTurnOffObjects->m_Items[v4];
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      max_length = onEnterBattleTurnOffObjects->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1B8880C(this, method);
  }
}


void __fastcall WarBoardControlUiDataComponent__SetUiDataOnBattleAll(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v2; // x1
  _QWORD *monitor; // x8
  __int64 v4; // x20
  int v5; // w8
  unsigned int v6; // w21
  __int64 v7; // x8
  int32_t v8; // w19

  if ( (byte_4A58C31 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&WarBoardControlUiDataComponent_TypeInfo);
    byte_4A58C31 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  monitor = Instance[27].monitor;
  if ( !monitor )
    goto LABEL_14;
  v4 = monitor[7];
  if ( !v4 )
    goto LABEL_14;
  v5 = *(_DWORD *)(v4 + 24);
  if ( v5 >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= v5 )
        sub_1B88814(Instance, v2);
      v7 = *(_QWORD *)(v4 + 8LL * (int)v6 + 32);
      if ( !v7 )
        break;
      v8 = *(_DWORD *)(v7 + 16);
      if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
      WarBoardControlUiDataComponent__SetUiDataOnBattleAll_35123096(v8, v2);
      v5 = *(_DWORD *)(v4 + 24);
      if ( (int)++v6 >= v5 )
        return;
    }
LABEL_14:
    sub_1B8880C(Instance, v2);
  }
}


void __fastcall WarBoardControlUiDataComponent__SetUiDataOnBattleAll_35123096(
        int32_t squareIndex,
        const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  const MethodInfo *v4; // x1
  struct WarBoardStageNpcMaster_o *stageNpcMaster; // x8
  WarBoardControlUiDataComponent_o *lookup; // x0
  struct WarBoardPieceData_array *pieces; // x8
  WarBoardControlUiDataComponent_o *v8; // x0

  if ( (byte_4A58C32 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4A58C32 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_35359972(Instance, squareIndex, 0LL);
  if ( Instance )
  {
    stageNpcMaster = Instance[1].fields.stageNpcMaster;
    if ( !stageNpcMaster )
      goto LABEL_16;
    lookup = (WarBoardControlUiDataComponent_o *)stageNpcMaster[2].fields._lookup;
    if ( lookup )
      WarBoardControlUiDataComponent__SetUiDataOnBattle(lookup, v4);
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1B8880C(Instance, v4);
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
  if ( (byte_4A58C3F & 1) == 0 )
  {
    this = (WarBoardControlUiDataComponent_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A58C3F = 1;
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
    sub_1B88814(this, isDisp);
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
    sub_1B8880C(this, isDisp);
  }
}


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

  if ( (byte_4A58C3D & 1) == 0 )
  {
    sub_1B885B0(&WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_TypeInfo);
    byte_4A58C3D = 1;
  }
  v9 = immediatelyWhenOff;
  v10 = sub_1B887FC(WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  *(_DWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 32), (int32_t)this, v11, v12);
  *(_BYTE *)(v10 + 48) = isDisp;
  *(_QWORD *)(v10 + 40) = targetObject;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 40), (int32_t)targetObject, v13, v14);
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

  if ( (byte_4A58C42 & 1) == 0 )
  {
    sub_1B885B0(&WarBoardControlUiDataComponent__StartSyncAnimation_d__43_TypeInfo);
    byte_4A58C42 = 1;
  }
  v5 = sub_1B887FC(WarBoardControlUiDataComponent__StartSyncAnimation_d__43_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)callback, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall WarBoardControlUiDataComponent__SyncAnimation(
        WarBoardControlUiDataComponent_o *this,
        System_Action_o *syncCallback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *started; // x1

  started = WarBoardControlUiDataComponent__StartSyncAnimation(this, syncCallback, method);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
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
    sub_1B8880C(AdjustType, v4);
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
    sub_1B88814(AdjustType, v4);
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
  if ( (byte_4A58C33 & 1) == 0 )
  {
    squareIndexes = (System_Int32_array *)sub_1B885B0(&WarBoardControlUiDataComponent_TypeInfo);
    byte_4A58C33 = 1;
  }
  if ( !v4 )
    sub_1B8880C(squareIndexes, immediatelyWhenOff);
  v5 = *(_QWORD *)&v4->max_length;
  if ( (int)v5 >= 1 )
  {
    v6 = 0LL;
    v7 = immediatelyWhenOff;
    do
    {
      if ( v6 >= (unsigned int)v5 )
        sub_1B88814(squareIndexes, immediatelyWhenOff);
      v8 = v4->m_Items[v6 + 1];
      if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
      WarBoardControlUiDataComponent__UpdateAdjustSituationAll_35123564(v8, v7, method);
      LODWORD(v5) = v4->max_length;
      ++v6;
    }
    while ( (__int64)v6 < (int)v5 );
  }
}


void __fastcall WarBoardControlUiDataComponent__UpdateAdjustSituationAll_35123564(
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

  if ( (byte_4A58C34 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4A58C34 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_35359972(Instance, squareIndex, 0LL);
  if ( Instance )
  {
    stageNpcMaster = Instance[1].fields.stageNpcMaster;
    if ( !stageNpcMaster )
      goto LABEL_16;
    lookup = (WarBoardControlUiDataComponent_o *)stageNpcMaster[2].fields._lookup;
    if ( lookup )
      WarBoardControlUiDataComponent__UpdateAdjustSituation(lookup, immediatelyWhenOff, v7);
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1B8880C(Instance, v6);
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
      sub_1B8880C(IsExistsOther, v8);
    v11 = *(_QWORD *)&onExistsOtherTurnOffObjects->max_length;
    if ( (int)v11 >= 1 )
    {
      v12 = 0LL;
      v13 = ((unsigned __int8)IsExistsOther ^ 1) & 1;
      v14 = immediatelyWhenOff;
      do
      {
        if ( v12 >= (unsigned int)v11 )
          sub_1B88814(IsExistsOther, v8);
        v15 = WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation(
                this,
                v13,
                onExistsOtherTurnOffObjects->m_Items[v12],
                v14,
                v9);
        IsExistsOther = UnityEngine_MonoBehaviour__StartCoroutine_69444652(
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

  if ( (byte_4A58C3A & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4A58C3A = 1;
  }
  if ( !this->fields.compType )
    return;
  Instance = (WarBoardControlUiDataComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1B8880C(Instance, v4);
  v10 = *(_QWORD *)&onOverlapObjects->max_length;
  if ( (int)v10 >= 1 )
  {
    v11 = 0LL;
    do
    {
      if ( v11 >= (unsigned int)v10 )
        sub_1B88814(Instance, v4);
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

  if ( (byte_4A58C2F & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A58C2F = 1;
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
    sub_1B8880C(v4, v5);
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
  int32_t _1__state; // w8
  WarBoardControlUiDataComponent_o *_4__this; // x20
  System_String_o *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  const MethodInfo *v9; // x3
  WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_c *klass; // x8
  WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *v11; // x21
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  int32_t v15; // w2
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0
  struct WarBoardControlUiDataComponent_UiData_o *uiData; // x8
  struct UnityEngine_GameObject_array *animationObjects; // x22
  int max_length; // w8
  unsigned int v21; // w23
  Il2CppObject *Component_object; // x21
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x2
  int32_t SquareIndex; // w19

  v3 = this;
  if ( (byte_4A58C48 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    sub_1B885B0(&WarBoardControlUiDataComponent_TypeInfo);
    this = (WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *)sub_1B885B0(&StringLiteral_18999/*"end"*/);
    byte_4A58C48 = 1;
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
           (System_String_o *)StringLiteral_18999/*"end"*/,
           v2);
    v3->fields._stateName_5__2 = v6;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v3->fields._stateName_5__2, (int32_t)v6, v7, v8);
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
        v21 = 0;
        while ( 1 )
        {
          if ( v21 >= max_length )
            sub_1B88814(this, method);
          this = (WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *)animationObjects->m_Items[v21];
          if ( !this )
            break;
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)this,
                               (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
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
                                                                                  (System_String_o *)StringLiteral_18999/*"end"*/,
                                                                                  v9);
            if ( ((unsigned __int8)this & 1) != 0 )
              return 0;
          }
          max_length = animationObjects->max_length;
          if ( (int)++v21 >= max_length )
            goto LABEL_31;
        }
LABEL_36:
        sub_1B8880C(this, method);
      }
LABEL_31:
      if ( !_4__this )
        goto LABEL_36;
      WarBoardControlUiDataComponent__SetUiDataTurnObjects(_4__this, 0, v3->fields.uiData, v9);
      SquareIndex = WarBoardControlUiDataComponent__get_SquareIndex(_4__this, v23);
      if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
      WarBoardControlUiDataComponent__UpdateAdjustSituationAll_35123564(SquareIndex, 0, v24);
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
    v11 = this;
    v12 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_15;
      }
      v14 = (__int64)(&klass->vtable._5_System_IDisposable_Dispose.method + 2 * *p_offset);
    }
    else
    {
LABEL_15:
      v14 = sub_1BDA590(this, SimpleAnimation_State_TypeInfo, 5LL);
    }
    if ( (*(float (__fastcall **)(WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *, _QWORD))v14)(
           v11,
           *(_QWORD *)(v14 + 8)) < 1.0 )
    {
      v3->fields.__2__current = 0LL;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
      sub_1B88554(p__2__current, 0, v15, (int32_t)v9);
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  int32_t _1__state; // w8
  WarBoardControlUiDataComponent_o *_4__this; // x20
  System_String_o *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  const MethodInfo *v9; // x3
  WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_c *klass; // x8
  WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *v11; // x21
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  int32_t v15; // w2
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0

  v3 = this;
  if ( (byte_4A58C49 & 1) == 0 )
  {
    sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    sub_1B885B0(&StringLiteral_23480/*"start"*/);
    this = (WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *)sub_1B885B0(&StringLiteral_21213/*"loop"*/);
    byte_4A58C49 = 1;
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
           (System_String_o *)StringLiteral_23480/*"start"*/,
           v2);
    v3->fields._stateName_5__2 = v6;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v3->fields._stateName_5__2, (int32_t)v6, v7, v8);
    if ( System_String__IsNullOrEmpty(v3->fields._stateName_5__2, 0LL) )
    {
LABEL_20:
      WarBoardControlUiDataComponent__PlayAnimation(
        _4__this,
        v3->fields.animation,
        (System_String_o *)StringLiteral_21213/*"loop"*/,
        v9);
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
        v11 = this;
        v12 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v12;
            p_offset += 4;
            if ( !v12 )
              goto LABEL_15;
          }
          v14 = (__int64)(&klass->vtable._5_System_IDisposable_Dispose.method + 2 * *p_offset);
        }
        else
        {
LABEL_15:
          v14 = sub_1BDA590(this, SimpleAnimation_State_TypeInfo, 5LL);
        }
        if ( (*(float (__fastcall **)(WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *, _QWORD))v14)(
               v11,
               *(_QWORD *)(v14 + 8)) < 1.0 )
        {
          v3->fields.__2__current = 0LL;
          p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
          sub_1B88554(p__2__current, 0, v15, (int32_t)v9);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
          return result;
        }
        if ( _4__this )
          goto LABEL_20;
      }
    }
LABEL_22:
    sub_1B8880C(this, method);
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  int32_t _1__state; // w8
  WarBoardControlUiDataComponent_o *_4__this; // x20
  int32_t v6; // w0
  Il2CppObject *Component_object; // x0
  SimpleAnimation_o **p_simpleAnimation_5__2; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  SimpleAnimation_o *v11; // x22
  _BOOL8 v12; // x0
  const MethodInfo *v13; // x3
  _BOOL8 IsPlayingAnimation; // x0
  const MethodInfo *v15; // x3
  _BOOL4 isDisp; // w8
  SimpleAnimation_o *v17; // x21
  struct UnityEngine_GameObject_o *targetObject; // x8
  bool v19; // w1
  WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_c *klass; // x8
  WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *v21; // x21
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0
  const MethodInfo *v29; // x3
  __int64 *v30; // x8
  System_String_o *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3

  v3 = this;
  if ( (byte_4A58C4A & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    sub_1B885B0(&StringLiteral_23480/*"start"*/);
    sub_1B885B0(&StringLiteral_18999/*"end"*/);
    this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)sub_1B885B0(&StringLiteral_21213/*"loop"*/);
    byte_4A58C4A = 1;
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
    v6 = WarBoardControlUiDataComponent__CheckCorrectActiveObject(_4__this, v3->fields.targetObject, v2);
    if ( (v6 & 0x80000000) == 0 )
      v3->fields.isDisp = v6 == 1 && v3->fields.isDisp;
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
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
      v3->fields._simpleAnimation_5__2 = (struct SimpleAnimation_o *)Component_object;
      p_simpleAnimation_5__2 = &v3->fields._simpleAnimation_5__2;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&v3->fields._simpleAnimation_5__2,
        (int32_t)Component_object,
        v9,
        v10);
      if ( !v3->fields.isDisp )
        goto LABEL_23;
      this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)v3->fields.targetObject;
      if ( !this )
        goto LABEL_55;
      if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)this, 0LL) )
      {
        v11 = *p_simpleAnimation_5__2;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v12 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL);
        if ( v12 )
        {
          IsPlayingAnimation = WarBoardControlUiDataComponent__IsPlayingAnimation(
                                 (WarBoardControlUiDataComponent_o *)v12,
                                 *p_simpleAnimation_5__2,
                                 (System_String_o *)StringLiteral_23480/*"start"*/,
                                 v13);
          if ( IsPlayingAnimation
            || WarBoardControlUiDataComponent__IsPlayingAnimation(
                 (WarBoardControlUiDataComponent_o *)IsPlayingAnimation,
                 *p_simpleAnimation_5__2,
                 (System_String_o *)StringLiteral_21213/*"loop"*/,
                 v15) )
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
      v17 = *p_simpleAnimation_5__2;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)UnityEngine_Object__op_Equality(
                                                                                          (UnityEngine_Object_o *)v17,
                                                                                          0LL,
                                                                                          0LL);
      targetObject = v3->fields.targetObject;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( targetObject )
        {
          v19 = v3->fields.isDisp;
          this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)v3->fields.targetObject;
LABEL_53:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v19, 0LL);
          return 0;
        }
        goto LABEL_55;
      }
      if ( !targetObject )
        goto LABEL_55;
      UnityEngine_GameObject__SetActive(v3->fields.targetObject, 1, 0LL);
      if ( v3->fields.isDisp )
        v30 = &StringLiteral_23480/*"start"*/;
      else
        v30 = &StringLiteral_18999/*"end"*/;
      v31 = WarBoardControlUiDataComponent__PlayAnimation(
              _4__this,
              v3->fields._simpleAnimation_5__2,
              (System_String_o *)*v30,
              v29);
      v3->fields._stateName_5__3 = v31;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v3->fields._stateName_5__3, (int32_t)v31, v32, v33);
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
            (System_String_o *)StringLiteral_21213/*"loop"*/,
            v26);
          return 0;
        }
LABEL_51:
        this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)v3->fields.targetObject;
        if ( this )
        {
          v19 = 0;
          goto LABEL_53;
        }
LABEL_55:
        sub_1B8880C(this, method);
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
      v21 = this;
      v22 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v22;
          p_offset += 4;
          if ( !v22 )
            goto LABEL_39;
        }
        v24 = (__int64)(&klass->vtable._5_System_IDisposable_Dispose.method + 2 * *p_offset);
      }
      else
      {
LABEL_39:
        v24 = sub_1BDA590(this, SimpleAnimation_State_TypeInfo, 5LL);
      }
      if ( (*(float (__fastcall **)(WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *, _QWORD))v24)(
             v21,
             *(_QWORD *)(v24 + 8)) < 1.0 )
      {
        v3->fields.__2__current = 0LL;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
        sub_1B88554(p__2__current, 0, v25, (int32_t)v26);
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  int32_t _1__state; // w8
  struct WarBoardControlUiDataComponent_o *_4__this; // x21
  UnityEngine_Object_o **p_targetSimpleAnimation_5__2; // x20
  struct UnityEngine_GameObject_array *syncAnimationObjects; // x23
  int max_length; // w8
  unsigned int v10; // w24
  __int64 v11; // x8
  UnityEngine_GameObject_o *v12; // x22
  Il2CppObject *Component_object; // x21
  Il2CppObject *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  UnityEngine_Object_o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o **p_animState_5__3; // x20
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v22; // x1
  System_Collections_IEnumerator_o *v23; // x21
  System_Collections_IEnumerator_c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  float v30; // s8
  signed int v31; // w8
  UnityEngine_Object_o *targetSimpleAnimation_5__2; // x20
  System_Collections_Generic_IEnumerable_TSource__o *States; // x0
  Il2CppObject *object; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  struct SimpleAnimation_State_o *state_5__6; // x21
  SimpleAnimation_State_c *klass; // x8
  __int64 v39; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  ServantStatusBattleListViewItem_o *v42; // x19
  char v43; // w8
  int32_t v44; // w2
  int32_t v45; // w3
  float v46; // s0
  struct System_Action_o *callback; // x8
  Il2CppObject **p__2__current; // x19
  System_Collections_IEnumerator_c *v50; // x8
  __int64 v51; // x9
  System_Collections_IEnumerator_c **v52; // x10
  __int64 v53; // x0
  UnityEngine_AnimationState_c **v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  __int64 v57; // x22
  __int64 v58; // x0
  __int64 v59; // x8
  __int64 v60; // x21
  __int64 v61; // x9
  int *v62; // x10
  __int64 v63; // x0
  float normalizedTime; // s8
  unsigned int v65; // w9
  unsigned int v66; // w8
  void *v67; // x0
  void *v68; // x23
  int v69; // w1
  __int64 v70; // x0
  __int64 v71; // x19
  __int64 v72; // x8
  __int64 v73; // x9
  int *v74; // x10
  __int64 v75; // x0

  v4 = this;
  if ( (byte_4A58C4B & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_AnimationState_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_First_SimpleAnimation_State___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    byte_4A58C4B = 1;
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
    v39 = *(unsigned __int16 *)(&state_5__6->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&state_5__6->klass->_2.bitflags2 + 3) )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v39;
        p_offset += 2;
        if ( !v39 )
          goto LABEL_63;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5].method;
    }
    else
    {
LABEL_63:
      p_method = sub_1BDA590(v4->fields._state_5__6, SimpleAnimation_State_TypeInfo, 5LL);
    }
    v46 = (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))p_method)(
            state_5__6,
            *(_QWORD *)(p_method + 8));
    if ( v46 > 0.0 && v46 < 1.0 && v4->fields._time_5__5 <= v46 )
    {
      v4->fields.__2__current = 0LL;
      p__2__current = &v4->fields.__2__current;
      *((float *)p__2__current + 11) = v46;
      sub_1B88554((ServantStatusBattleListViewItem_o *)p__2__current, 0, v44, v45);
      *((_DWORD *)p__2__current - 2) = 2;
      v43 = 1;
      return v43 & 1;
    }
    v4->fields._state_5__6 = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._state_5__6, 0, v44, v45);
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
    v43 = 0;
    return v43 & 1;
  }
  _4__this = v4->fields.__4__this;
  v4->fields._targetSimpleAnimation_5__2 = 0LL;
  p_targetSimpleAnimation_5__2 = (UnityEngine_Object_o **)&v4->fields._targetSimpleAnimation_5__2;
  v4->fields.__1__state = -1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._targetSimpleAnimation_5__2, 0, v2, v3);
  if ( !_4__this )
    goto LABEL_105;
  syncAnimationObjects = _4__this->fields.syncAnimationObjects;
  if ( !syncAnimationObjects )
    goto LABEL_105;
  max_length = syncAnimationObjects->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
        sub_1B88814(this, method);
      v11 = (__int64)syncAnimationObjects + 8 * (int)v10;
      v12 = *(UnityEngine_GameObject_o **)(v11 + 32);
      if ( !v12 )
        break;
      this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)UnityEngine_GameObject__get_activeInHierarchy(
                                                                             *(UnityEngine_GameObject_o **)(v11 + 32),
                                                                             0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             v12,
                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
        v14 = UnityEngine_GameObject__GetComponent_object_(
                v12,
                (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)UnityEngine_Object__op_Inequality(
                                                                               (UnityEngine_Object_o *)v14,
                                                                               0LL,
                                                                               0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v14 )
            break;
          this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)SimpleAnimation__get_isPlaying(
                                                                                 (SimpleAnimation_o *)v14,
                                                                                 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            *p_targetSimpleAnimation_5__2 = (UnityEngine_Object_o *)v14;
            sub_1B88554(
              (ServantStatusBattleListViewItem_o *)&v4->fields._targetSimpleAnimation_5__2,
              (int32_t)v14,
              v15,
              v16);
          }
        }
      }
      max_length = syncAnimationObjects->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_25;
    }
LABEL_105:
    sub_1B8880C(this, method);
  }
LABEL_25:
  Component_object = 0LL;
LABEL_26:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    v17 = *p_targetSimpleAnimation_5__2;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)UnityEngine_Object__op_Equality(v17, 0LL, 0LL);
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
                 (const MethodInfo_2EA17D4 *)Method_System_Linq_Enumerable_First_SimpleAnimation_State___);
      v4->fields._state_5__6 = (struct SimpleAnimation_State_o *)object;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._state_5__6, (int32_t)object, v35, v36);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._animState_5__3, 0, v18, v19);
  if ( !Component_object )
    goto LABEL_105;
  Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)Component_object, 0LL);
  v23 = Enumerator;
  if ( !Enumerator )
    sub_1B8880C(0LL, v22);
  v24 = Enumerator->klass;
  v25 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)v26 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      --v25;
      v26 += 4;
      if ( !v25 )
        goto LABEL_41;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_41:
    v27 = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8)) & 1) != 0 )
  {
    v50 = v23->klass;
    v51 = *(unsigned __int16 *)(&v23->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v23->klass->_2.bitflags2 + 3) )
    {
      v52 = (System_Collections_IEnumerator_c **)&v50->_1.interfaceOffsets->offset;
      while ( *(v52 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v51;
        v52 += 2;
        if ( !v51 )
          goto LABEL_81;
      }
      v53 = (__int64)&v50->vtable[*(_DWORD *)v52 + 1].method;
    }
    else
    {
LABEL_81:
      v53 = sub_1BDA590(v23, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v54 = (UnityEngine_AnimationState_c **)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v53)(
                                             v23,
                                             *(_QWORD *)(v53 + 8));
    if ( v54 && *v54 != UnityEngine_AnimationState_TypeInfo )
    {
      sub_1B88ACC(v54);
      v68 = v67;
      if ( v69 != 1 )
      {
        v70 = sub_1B886EC(v23, System_IDisposable_TypeInfo);
        v71 = v70;
        if ( v70 )
        {
          v72 = *(_QWORD *)v70;
          v73 = *(unsigned __int16 *)(*(_QWORD *)v70 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v70 + 302LL) )
          {
            v74 = (int *)(*(_QWORD *)(v72 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v74 - 1) != System_IDisposable_TypeInfo )
            {
              --v73;
              v74 += 4;
              if ( !v73 )
                goto LABEL_116;
            }
            v75 = v72 + 16LL * *v74 + 312;
          }
          else
          {
LABEL_116:
            v75 = sub_1BDA590(v70, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v75)(v71, *(_QWORD *)(v75 + 8));
        }
        sub_1C73040(v68);
      }
      v57 = *(_QWORD *)__cxa_begin_catch(v67);
      __cxa_end_catch();
      goto LABEL_87;
    }
    *p_animState_5__3 = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)v54;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._animState_5__3, (int32_t)v54, v55, v56);
  }
  v57 = 0LL;
LABEL_87:
  v58 = sub_1B886EC(v23, System_IDisposable_TypeInfo);
  if ( v58 )
  {
    v59 = *(_QWORD *)v58;
    v60 = v58;
    v61 = *(unsigned __int16 *)(*(_QWORD *)v58 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v58 + 302LL) )
    {
      v62 = (int *)(*(_QWORD *)(v59 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v62 - 1) != System_IDisposable_TypeInfo )
      {
        --v61;
        v62 += 4;
        if ( !v61 )
          goto LABEL_92;
      }
      v63 = v59 + 16LL * *v62 + 312;
    }
    else
    {
LABEL_92:
      v63 = sub_1BDA590(v58, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v63)(v60, *(_QWORD *)(v63 + 8));
  }
  if ( v57 )
    sub_1B88804(v57);
  this = *p_animState_5__3;
  if ( !*p_animState_5__3 )
    goto LABEL_105;
  normalizedTime = UnityEngine_AnimationState__get_normalizedTime((UnityEngine_AnimationState_o *)this, 0LL);
  if ( !byte_4A55CE0 )
  {
    sub_1B885B0(&System_Math_TypeInfo);
    byte_4A55CE0 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v65 = vcvtms_s32_f32(normalizedTime);
  if ( floorf(normalizedTime) == INFINITY )
    v66 = 0x80000000;
  else
    v66 = v65;
  v4->fields._startNormalizedTime_5__4 = v66;
LABEL_43:
  this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)v4->fields._animState_5__3;
  if ( !this )
    goto LABEL_105;
  v30 = UnityEngine_AnimationState__get_normalizedTime((UnityEngine_AnimationState_o *)this, 0LL);
  if ( !byte_4A55CE0 )
  {
    sub_1B885B0(&System_Math_TypeInfo);
    byte_4A55CE0 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v31 = vcvtms_s32_f32(v30);
  if ( floorf(v30) == INFINITY )
    v31 = 0x80000000;
  if ( v4->fields._startNormalizedTime_5__4 < v31 )
  {
    v4->fields._animState_5__3 = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._animState_5__3, 0, v28, v29);
    goto LABEL_52;
  }
  v4->fields.__2__current = 0LL;
  v42 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
  sub_1B88554(v42, 0, v28, v29);
  v43 = 1;
  *(_DWORD *)&v42[-1].fields.isMine = 1;
  return v43 & 1;
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_WarBoardControlUiDataComponent__StartSyncAnimation_d__43_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
  return System_String__op_Equality(a->fields.key, this->fields.key, 0LL);
}