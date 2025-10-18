void WarBoardControlUiDataComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C4083C & 1) == 0 )
  {
    sub_1C37058(&WarBoardControlUiDataComponent_TypeInfo);
    sub_1C37058(&StringLiteral_3051/*"Barrier"*/);
    byte_4C4083C = 1;
  }
  WarBoardControlUiDataComponent_TypeInfo->static_fields->UI_DATA_KEY_BARRIER = (struct System_String_o *)StringLiteral_3051/*"Barrier"*/;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)WarBoardControlUiDataComponent_TypeInfo->static_fields,
    StringLiteral_3051/*"Barrier"*/,
    v1,
    v2);
}


void WarBoardControlUiDataComponent___ctor(WarBoardControlUiDataComponent_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x0
  System_RuntimeFieldHandle_o v4; // x1
  struct System_Single_array *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Collections_Generic_List_object__o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_object__o *v11; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C4083B & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C37058(&System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C37058(&float___TypeInfo);
    sub_1C37058(&Field__PrivateImplementationDetails__64464566F592BAB0A74DD80EB47024C0ECA2BB914D37B27E78F5532363736E1B);
    byte_4C4083B = 1;
  }
  v3 = (System_Array_o *)sub_1C37100(float___TypeInfo, 7);
  v4.fields.value = Field__PrivateImplementationDetails__64464566F592BAB0A74DD80EB47024C0ECA2BB914D37B27E78F5532363736E1B;
  v5 = (struct System_Single_array *)v3;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64262432(v3, v4, 0);
  this->fields.AdjustOffsetY = v5;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.AdjustOffsetY, (int32_t)v5, v6, v7);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData___ctor__);
  this->fields.listUiData = (struct System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__o *)v8;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.listUiData, (int32_t)v8, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.listUiDataKey = (struct System_Collections_Generic_List_string__o *)v11;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.listUiDataKey, (int32_t)v11, v12, v13);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void WarBoardControlUiDataComponent__Awake(WarBoardControlUiDataComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  Il2CppObject *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C40825 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_WarBoardPieceBaseComponent___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_WarBoardSquareComponent___);
    byte_4C40825 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_WarBoardPieceBaseComponent___);
  this->fields.pieceComponent = (struct WarBoardPieceBaseComponent_o *)Component_object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.pieceComponent, (int32_t)Component_object, v4, v5);
  v6 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_WarBoardSquareComponent___);
  this->fields.squareComponent = (struct WarBoardSquareComponent_o *)v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.squareComponent, (int32_t)v6, v7, v8);
}


int32_t WarBoardControlUiDataComponent__CheckCorrectActiveObject(
        WarBoardControlUiDataComponent_o *this,
        UnityEngine_GameObject_o *targetObject,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *listUiDataKey; // x0
  __int64 v6; // x21
  __int64 v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t current; // w1
  System_Collections_Generic_List_object__o *listUiData; // x22
  System_Predicate_object__o *v12; // x23
  __int64 v13; // x0
  Il2CppObject *v14; // x0
  Il2CppObject *v15; // x21
  _QWORD *monitor; // x23
  __int64 v17; // x8
  unsigned __int64 v18; // x26
  UnityEngine_Object_o *v19; // x22
  Il2CppClass *klass; // x22
  const char *namespaze; // x8
  unsigned __int64 v22; // x23
  UnityEngine_Object_o *v23; // x21
  int32_t v24; // w19
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C40830 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo);
    sub_1C37058(&Method_WarBoardControlUiDataComponent___c__DisplayClass34_0__CheckCorrectActiveObject_b__0__);
    sub_1C37058(&WarBoardControlUiDataComponent___c__DisplayClass34_0_TypeInfo);
    byte_4C40830 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  listUiDataKey = this->fields.listUiDataKey;
  if ( !listUiDataKey )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)listUiDataKey,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v27 = v26;
  while ( 1 )
  {
    do
    {
LABEL_5:
      if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v27,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
      {
        v24 = -1;
        goto LABEL_28;
      }
      v6 = sub_1C372A4(WarBoardControlUiDataComponent___c__DisplayClass34_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v6, 0);
      if ( !v6 )
        sub_1C372B4(v7);
      current = (int32_t)v27.fields._current;
      *(_QWORD *)(v6 + 16) = v27.fields._current;
      sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 16), current, v8, v9);
      listUiData = (System_Collections_Generic_List_object__o *)this->fields.listUiData;
      v12 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo);
      System_Predicate_object____ctor(
        v12,
        (Il2CppObject *)v6,
        Method_WarBoardControlUiDataComponent___c__DisplayClass34_0__CheckCorrectActiveObject_b__0__,
        0);
      if ( !listUiData )
        sub_1C372B4(v13);
      v14 = System_Collections_Generic_List_object___Find(
              listUiData,
              (System_Predicate_T__o *)v12,
              (const MethodInfo_37A368C *)Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__);
      v15 = v14;
    }
    while ( !v14 );
    monitor = v14[1].monitor;
    if ( !monitor )
      sub_1C372B4(v14);
    v17 = monitor[3];
    if ( (int)v17 >= 1 )
      break;
LABEL_17:
    klass = v15[2].klass;
    if ( !klass )
      sub_1C372B4(v14);
    namespaze = klass->_1.namespaze;
    if ( (int)namespaze >= 1 )
    {
      v22 = 0;
      while ( 1 )
      {
        if ( v22 >= (unsigned int)namespaze )
          sub_1C372BC(v14);
        v23 = (UnityEngine_Object_o *)*((_QWORD *)&klass->_1.byval_arg.data + v22);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v14 = (Il2CppObject *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)targetObject, v23, 0);
        if ( ((unsigned __int8)v14 & 1) != 0 )
          break;
        LODWORD(namespaze) = klass->_1.namespaze;
        if ( (__int64)++v22 >= (int)namespaze )
          goto LABEL_5;
      }
      v24 = 0;
      goto LABEL_28;
    }
  }
  v18 = 0;
  while ( 1 )
  {
    if ( v18 >= (unsigned int)v17 )
      sub_1C372BC(v14);
    v19 = (UnityEngine_Object_o *)monitor[v18 + 4];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v14 = (Il2CppObject *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)targetObject, v19, 0);
    if ( ((unsigned __int8)v14 & 1) != 0 )
      break;
    LODWORD(v17) = *((_DWORD *)monitor + 6);
    if ( (__int64)++v18 >= (int)v17 )
      goto LABEL_17;
  }
  v24 = 1;
LABEL_28:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  return v24;
}


int32_t WarBoardControlUiDataComponent__GetAdjustType(WarBoardControlUiDataComponent_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  const MethodInfo *v4; // x1
  WarBoardData_o *v5; // x20
  WarBoardPieceData_o *Piece_37884744; // x0
  const MethodInfo *v8; // x1
  WarBoardData_o *v9; // x20
  const MethodInfo *v10; // x1
  __int64 v11; // x8
  WarBoardControlUiDataComponent_o *v12; // x0
  const MethodInfo *v13; // x1
  WarBoardData_o *v14; // x20
  const MethodInfo *v15; // x1
  WarBoardData_o *v16; // x20
  WarBoardTreasureData_o *Treasure; // x0
  const MethodInfo *v18; // x1
  WarBoardData_o *v19; // x20
  WarBoardItemData_o *Item; // x0

  if ( (byte_4C40833 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C40833 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  v5 = (WarBoardData_o *)*((_QWORD *)Instance + 55);
  Instance = (void *)WarBoardControlUiDataComponent__get_SquareIndex(this, v4);
  if ( !v5 )
    goto LABEL_31;
  Piece_37884744 = WarBoardData__GetPiece_37884744(v5, (int32_t)Instance, 0);
  if ( Piece_37884744 )
  {
    if ( WarBoardPieceData__get_isMaster(Piece_37884744, 0) )
      return 6;
    else
      return 5;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  v9 = (WarBoardData_o *)*((_QWORD *)Instance + 55);
  Instance = (void *)WarBoardControlUiDataComponent__get_SquareIndex(this, v8);
  if ( !v9 )
    goto LABEL_31;
  Instance = WarBoardData__GetSquare(v9, (int32_t)Instance, 0);
  if ( Instance )
  {
    v11 = *((_QWORD *)Instance + 6);
    if ( !v11 )
      goto LABEL_31;
    v12 = *(WarBoardControlUiDataComponent_o **)(v11 + 184);
    if ( v12 && WarBoardControlUiDataComponent__IsDispFlagObjects(v12, v10) )
      return 4;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  v14 = (WarBoardData_o *)*((_QWORD *)Instance + 55);
  Instance = (void *)WarBoardControlUiDataComponent__get_SquareIndex(this, v13);
  if ( !v14 )
    goto LABEL_31;
  if ( WarBoardData__GetWall(v14, (int32_t)Instance, 0, 0) )
    return 3;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  v16 = (WarBoardData_o *)*((_QWORD *)Instance + 55);
  Instance = (void *)WarBoardControlUiDataComponent__get_SquareIndex(this, v15);
  if ( !v16 )
    goto LABEL_31;
  Treasure = WarBoardData__GetTreasure(v16, (int32_t)Instance, 0);
  if ( Treasure && !Treasure->fields._isUse_k__BackingField )
    return 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (v19 = (WarBoardData_o *)*((_QWORD *)Instance + 55),
        Instance = (void *)WarBoardControlUiDataComponent__get_SquareIndex(this, v18),
        !v19) )
  {
LABEL_31:
    sub_1C372B4(Instance);
  }
  Item = WarBoardData__GetItem(v19, (int32_t)Instance, 0);
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
  WarBoardControlUiDataComponent_o *v7; // x19
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  __int64 v11; // x19
  __int64 v12; // x8
  __int64 v13; // x9
  int *v14; // x10
  __int64 v15; // x0
  __int64 v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x21
  __int64 v22; // x8
  __int64 v23; // x9
  SimpleAnimation_State_c **v24; // x10
  __int64 v25; // x0
  System_String_o *v26; // x0
  System_String_o *v27; // x0
  __int64 v28; // x8
  __int64 v29; // x9
  SimpleAnimation_State_c **v30; // x10
  __int64 v31; // x0
  System_String_o *v32; // x21
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0

  if ( (byte_4C40839 & 1) == 0 )
  {
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    this = (WarBoardControlUiDataComponent_o *)sub_1C37058(&SimpleAnimation_State_TypeInfo);
    byte_4C40839 = 1;
  }
  if ( !animation || (this = (WarBoardControlUiDataComponent_o *)SimpleAnimation__GetStates(animation, 0)) == 0 )
    sub_1C372B4(this);
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
    v10 = sub_1C87870(this, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0);
  }
  v11 = (*(__int64 (__fastcall **)(WarBoardControlUiDataComponent_o *, _QWORD))v10)(v7, *(_QWORD *)(v10 + 8));
  if ( !v11 )
    sub_1C372B4(0);
  do
  {
    v12 = *(_QWORD *)v11;
    v13 = *(unsigned __int16 *)(*(_QWORD *)v11 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v11 + 302LL) )
    {
      v14 = (int *)(*(_QWORD *)(v12 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v14 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_16;
      }
      v15 = v12 + 16LL * *v14 + 312;
    }
    else
    {
LABEL_16:
      v15 = sub_1C87870(v11, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v15)(v11, *(_QWORD *)(v15 + 8)) & 1) == 0 )
    {
      v32 = 0;
      goto LABEL_43;
    }
    v16 = *(_QWORD *)v11;
    v17 = *(unsigned __int16 *)(*(_QWORD *)v11 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v11 + 302LL) )
    {
      v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v18 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_23;
      }
      v19 = v16 + 16LL * *v18 + 312;
    }
    else
    {
LABEL_23:
      v19 = sub_1C87870(v11, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(__int64, _QWORD))v19)(v11, *(_QWORD *)(v19 + 8));
    v21 = v20;
    if ( !v20 )
      sub_1C372B4(0);
    v22 = *(_QWORD *)v20;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
    {
      v24 = (SimpleAnimation_State_c **)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *(v24 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v23;
        v24 += 2;
        if ( !v23 )
          goto LABEL_30;
      }
      v25 = v22 + 16LL * (*(_DWORD *)v24 + 9) + 312;
    }
    else
    {
LABEL_30:
      v25 = sub_1C87870(v20, SimpleAnimation_State_TypeInfo, 9);
    }
    v26 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v21, *(_QWORD *)(v25 + 8));
    if ( !v26 )
      sub_1C372B4(0);
    v27 = System_String__ToLower(v26, 0);
    if ( !v27 )
      sub_1C372B4(0);
  }
  while ( !System_String__EndsWith(v27, suffix, 0) );
  v28 = *(_QWORD *)v21;
  v29 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
  {
    v30 = (SimpleAnimation_State_c **)(*(_QWORD *)(v28 + 176) + 8LL);
    while ( *(v30 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v29;
      v30 += 2;
      if ( !v29 )
        goto LABEL_39;
    }
    v31 = v28 + 16LL * (*(_DWORD *)v30 + 9) + 312;
  }
  else
  {
LABEL_39:
    v31 = sub_1C87870(v21, SimpleAnimation_State_TypeInfo, 9);
  }
  v32 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v21, *(_QWORD *)(v31 + 8));
LABEL_43:
  v33 = *(_QWORD *)v11;
  v34 = *(unsigned __int16 *)(*(_QWORD *)v11 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v11 + 302LL) )
  {
    v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_47;
    }
    v36 = v33 + 16LL * *v35 + 312;
  }
  else
  {
LABEL_47:
    v36 = sub_1C87870(v11, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v36)(v11, *(_QWORD *)(v36 + 8));
  return v32;
}


bool WarBoardControlUiDataComponent__IsDispFlagObjects(
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
          sub_1C372BC(this);
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
LABEL_13:
      sub_1C372B4(this);
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
          sub_1C372BC(this);
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
LABEL_13:
      sub_1C372B4(this);
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
  WarBoardData_o *monitor; // x20
  WarBoardItemData_o *Item; // x0
  WarBoardTreasureData_o *Treasure; // x0

  if ( (byte_4C40831 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C40831 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (monitor = (WarBoardData_o *)Instance[27].monitor) == 0 )
    sub_1C372B4(Instance);
  return WarBoardData__GetPiece_37884744((WarBoardData_o *)Instance[27].monitor, squareIndex, 0)
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
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v9; // x19
  __int64 v10; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v12; // x0

  if ( (byte_4C40838 & 1) == 0 )
  {
    this = (WarBoardControlUiDataComponent_o *)sub_1C37058(&SimpleAnimation_State_TypeInfo);
    byte_4C40838 = 1;
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
    sub_1C372B4(IsNullOrEmpty);
  klass = IsNullOrEmpty->klass;
  v9 = IsNullOrEmpty;
  v10 = *(unsigned __int16 *)&IsNullOrEmpty->klass->_2.rank;
  if ( *(_WORD *)&IsNullOrEmpty->klass->_2.rank )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v10;
      p_offset += 2;
      if ( !v10 )
        goto LABEL_11;
    }
    v12 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5];
  }
  else
  {
LABEL_11:
    v12 = sub_1C87870(IsNullOrEmpty, SimpleAnimation_State_TypeInfo, 5);
  }
  return (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v12)(v9, *(_QWORD *)(v12 + 8)) < 1.0;
}


void WarBoardControlUiDataComponent__LocalSave(WarBoardControlUiDataComponent_o *this, const MethodInfo *method)
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

  if ( (byte_4C4083A & 1) == 0 )
  {
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C4083A = 1;
  }
  compType = this->fields.compType;
  if ( !compType )
  {
    squareComponent = (UnityEngine_Object_o *)this->fields.squareComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(squareComponent, 0, 0) )
    {
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
                                (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_string__ToArray__);
          if ( v7 )
          {
            WarBoardData__UpdateUiData(v7, v9, (System_String_array *)Instance, 0);
            return;
          }
        }
      }
LABEL_27:
      sub_1C372B4(Instance);
    }
    compType = this->fields.compType;
  }
  if ( compType == 1 )
  {
    pieceComponent = (UnityEngine_Object_o *)this->fields.pieceComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = UnityEngine_Object__op_Inequality(pieceComponent, 0, 0);
    if ( (Instance & 1) != 0 )
    {
      v11 = this->fields.pieceComponent;
      if ( !v11 )
        goto LABEL_27;
      pieceData = v11->fields.pieceData;
      Instance = sub_1C37100(int___TypeInfo, 3);
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
        sub_1C372BC(Instance);
      }
      *(_DWORD *)(Instance + 40) = pieceData->fields._index_k__BackingField;
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !Instance )
        goto LABEL_27;
      v15 = Instance;
      Instance = (__int64)this->fields.listUiDataKey;
      if ( !Instance )
        goto LABEL_27;
      v16 = *(WarBoardData_o **)(v15 + 440);
      Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                            (System_Collections_Generic_List_object__o *)Instance,
                            (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_string__ToArray__);
      if ( !v16 )
        goto LABEL_27;
      WarBoardData__UpdateUiData_37975252(v16, v13, (System_String_array *)Instance, 0);
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
  bool IsNullOrEmpty; // w8
  System_String_o *result; // x0

  AnimationStateName = WarBoardControlUiDataComponent__GetAnimationStateName(this, animation, suffix, method);
  IsNullOrEmpty = System_String__IsNullOrEmpty(AnimationStateName, 0);
  result = 0;
  if ( !IsNullOrEmpty )
  {
    if ( !animation )
      sub_1C372B4(0);
    SimpleAnimation__Play_66507412(animation, AnimationStateName, 0);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C40836 & 1) == 0 )
  {
    sub_1C37058(&WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_TypeInfo);
    byte_4C40836 = 1;
  }
  v7 = sub_1C372A4(WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 40) = animation;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 40), (int32_t)animation, v10, v11);
  *(_QWORD *)(v7 + 48) = uiData;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 48), (int32_t)uiData, v12, v13);
  return (System_Collections_IEnumerator_o *)v7;
}


System_Collections_IEnumerator_o *WarBoardControlUiDataComponent__PlayStartUiDataAnim(
        WarBoardControlUiDataComponent_o *this,
        SimpleAnimation_o *animation,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C40835 & 1) == 0 )
  {
    sub_1C37058(&WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_TypeInfo);
    byte_4C40835 = 1;
  }
  v5 = sub_1C372A4(WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = animation;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 40), (int32_t)animation, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void WarBoardControlUiDataComponent__ResumeUiData(WarBoardControlUiDataComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *listUiDataKey; // x0
  __int64 v4; // x21
  __int64 v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t current; // w1
  System_String_o **v9; // x20
  System_Collections_Generic_List_object__o *listUiData; // x22
  System_Predicate_object__o *v11; // x23
  __int64 v12; // x0
  const MethodInfo *v13; // x3
  WarBoardControlUiDataComponent_UiData_o *v14; // x21
  System_String_o *v15; // x20
  WarBoardControlUiDataComponent_c *v16; // x0
  WarBoardServantPieceBuffTurnComponent_o *v17; // x0
  WarBoardServantPieceBuffTurnComponent_o *v18; // x20
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x22
  struct UnityEngine_GameObject_array *animationObjects; // x23
  int max_length; // w8
  int i; // w22
  UnityEngine_GameObject_o *v23; // x0
  Il2CppObject *Component_object; // x21
  const MethodInfo *v25; // x3
  struct WarBoardPieceBaseComponent_o *v26; // [xsp+8h] [xbp-A8h]
  WarBoardServantPieceBuffTurnComponent_o *v27; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4C4082D & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo);
    sub_1C37058(&Method_WarBoardControlUiDataComponent___c__DisplayClass26_0__ResumeUiData_b__0__);
    sub_1C37058(&WarBoardControlUiDataComponent___c__DisplayClass26_0_TypeInfo);
    sub_1C37058(&WarBoardControlUiDataComponent_TypeInfo);
    sub_1C37058(&StringLiteral_21353/*"loop"*/);
    byte_4C4082D = 1;
  }
  memset(&v29, 0, sizeof(v29));
  listUiDataKey = this->fields.listUiDataKey;
  if ( !listUiDataKey )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)listUiDataKey,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v26 = 0;
  v27 = 0;
  v29 = v28;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    v4 = sub_1C372A4(WarBoardControlUiDataComponent___c__DisplayClass26_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    if ( !v4 )
      sub_1C372B4(v5);
    current = (int32_t)v29.fields._current;
    *(_QWORD *)(v4 + 16) = v29.fields._current;
    v9 = (System_String_o **)(v4 + 16);
    sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 16), current, v6, v7);
    listUiData = (System_Collections_Generic_List_object__o *)this->fields.listUiData;
    v11 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo);
    System_Predicate_object____ctor(
      v11,
      (Il2CppObject *)v4,
      Method_WarBoardControlUiDataComponent___c__DisplayClass26_0__ResumeUiData_b__0__,
      0);
    if ( !listUiData )
      sub_1C372B4(v12);
    v14 = (WarBoardControlUiDataComponent_UiData_o *)System_Collections_Generic_List_object___Find(
                                                       listUiData,
                                                       (System_Predicate_T__o *)v11,
                                                       (const MethodInfo_37A368C *)Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__);
    if ( v14 )
    {
      WarBoardControlUiDataComponent__SetUiDataTurnObjects(this, 1, v14, v13);
      v15 = *v9;
      v16 = WarBoardControlUiDataComponent_TypeInfo;
      if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
        v16 = WarBoardControlUiDataComponent_TypeInfo;
      }
      v17 = (WarBoardServantPieceBuffTurnComponent_o *)System_String__op_Equality(
                                                         v15,
                                                         v16->static_fields->UI_DATA_KEY_BARRIER,
                                                         0);
      v18 = v27;
      if ( ((unsigned __int8)v17 & 1) != 0
        && ((pieceComponent = this->fields.pieceComponent) != 0
          ? (v17 = (WarBoardServantPieceBuffTurnComponent_o *)this->fields.pieceComponent)
          : (v17 = (WarBoardServantPieceBuffTurnComponent_o *)v26),
            pieceComponent) )
      {
        if ( !v17 )
          sub_1C372B4(0);
        v17 = (WarBoardServantPieceBuffTurnComponent_o *)((__int64 (__fastcall *)(WarBoardServantPieceBuffTurnComponent_o *, void *))v17->klass[1]._1.image)(
                                                           v17,
                                                           v17->klass[1]._1.gc_desc);
        v18 = v17;
        if ( !v17 )
          v17 = v27;
        if ( v18 )
        {
          if ( !v17 )
            sub_1C372B4(0);
          WarBoardServantPieceBuffTurnComponent__UpdateDisp(v17, 1, 0);
        }
        else
        {
          v18 = v27;
        }
      }
      else
      {
        pieceComponent = v26;
      }
      animationObjects = v14->fields.animationObjects;
      if ( !animationObjects )
        sub_1C372B4(v17);
      max_length = animationObjects->max_length;
      v26 = pieceComponent;
      v27 = v18;
      if ( max_length >= 1 )
      {
        v26 = pieceComponent;
        for ( i = 0; i < max_length; ++i )
        {
          if ( i >= (unsigned int)max_length )
            sub_1C372BC(v17);
          v23 = animationObjects->m_Items[i];
          if ( !v23 )
            sub_1C372B4(0);
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               v23,
                               (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v17 = (WarBoardServantPieceBuffTurnComponent_o *)UnityEngine_Object__op_Equality(
                                                             (UnityEngine_Object_o *)Component_object,
                                                             0,
                                                             0);
          if ( ((unsigned __int8)v17 & 1) == 0 )
            v17 = (WarBoardServantPieceBuffTurnComponent_o *)WarBoardControlUiDataComponent__PlayAnimation(
                                                               this,
                                                               (SimpleAnimation_o *)Component_object,
                                                               (System_String_o *)StringLiteral_21353/*"loop"*/,
                                                               v25);
          max_length = animationObjects->max_length;
        }
        v27 = v18;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


void WarBoardControlUiDataComponent__ResumeUiDataAll(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v2; // x1
  _QWORD *monitor; // x8
  __int64 v4; // x20
  int v5; // w8
  unsigned int v6; // w21
  __int64 v7; // x8
  int32_t v8; // w19

  if ( (byte_4C4082A & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C37058(&WarBoardControlUiDataComponent_TypeInfo);
    byte_4C4082A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        sub_1C372BC(Instance);
      v7 = *(_QWORD *)(v4 + 8LL * (int)v6 + 32);
      if ( !v7 )
        break;
      v8 = *(_DWORD *)(v7 + 16);
      if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
      WarBoardControlUiDataComponent__ResumeUiDataAll_37706964(v8, v2);
      v5 = *(_DWORD *)(v4 + 24);
      if ( (int)++v6 >= v5 )
        return;
    }
LABEL_14:
    sub_1C372B4(Instance);
  }
}


void WarBoardControlUiDataComponent__ResumeUiDataAll_37706964(int32_t squareIndex, const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  const MethodInfo *v4; // x1
  struct WarBoardStageNpcMaster_o *stageNpcMaster; // x8
  WarBoardControlUiDataComponent_o *list; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2
  struct WarBoardPieceData_array *pieces; // x8
  WarBoardControlUiDataComponent_o *v10; // x0

  if ( (byte_4C4082B & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C37058(&WarBoardControlUiDataComponent_TypeInfo);
    byte_4C4082B = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_18;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_37884744(Instance, squareIndex, 0);
  if ( Instance )
  {
    stageNpcMaster = Instance[1].fields.stageNpcMaster;
    if ( !stageNpcMaster )
      goto LABEL_18;
    list = (WarBoardControlUiDataComponent_o *)stageNpcMaster[2].fields.list;
    if ( list )
      WarBoardControlUiDataComponent__ResumeUiData(list, v4);
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1C372B4(Instance);
  v10 = (WarBoardControlUiDataComponent_o *)pieces->m_Items[19];
  if ( v10 )
    WarBoardControlUiDataComponent__ResumeUiData(v10, v7);
LABEL_15:
  if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  WarBoardControlUiDataComponent__UpdateAdjustSituationAll_37706500(squareIndex, 1, v8);
}


void WarBoardControlUiDataComponent__SetUiData(
        WarBoardControlUiDataComponent_o *this,
        System_String_o *key,
        bool isDisp,
        const MethodInfo *method)
{
  __int64 v7; // x23
  System_Collections_Generic_List_object__o *listUiDataKey; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  Il2CppObject **v11; // x22
  System_Collections_Generic_List_object__o *listUiData; // x21
  System_Predicate_object__o *v13; // x24
  Il2CppObject *v14; // x0
  WarBoardControlUiDataComponent_UiData_o *v15; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  Il2CppObject *v18; // x1
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
  struct UnityEngine_GameObject_array *animationObjects; // x23
  int max_length; // w8
  unsigned int v34; // w24
  Il2CppObject *Component_object; // x22
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x3
  System_Collections_IEnumerator_o *started; // x0

  if ( (byte_4C4082C & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo);
    sub_1C37058(&Method_WarBoardControlUiDataComponent___c__DisplayClass25_0__SetUiData_b__0__);
    sub_1C37058(&WarBoardControlUiDataComponent___c__DisplayClass25_0_TypeInfo);
    sub_1C37058(&WarBoardControlUiDataComponent_TypeInfo);
    byte_4C4082C = 1;
  }
  v7 = sub_1C372A4(WarBoardControlUiDataComponent___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_38;
  *(_QWORD *)(v7 + 16) = key;
  v11 = (Il2CppObject **)(v7 + 16);
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)key, v9, v10);
  listUiData = (System_Collections_Generic_List_object__o *)this->fields.listUiData;
  v13 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo);
  System_Predicate_object____ctor(
    v13,
    (Il2CppObject *)v7,
    Method_WarBoardControlUiDataComponent___c__DisplayClass25_0__SetUiData_b__0__,
    0);
  if ( !listUiData )
    goto LABEL_38;
  v14 = System_Collections_Generic_List_object___Find(
          listUiData,
          (System_Predicate_T__o *)v13,
          (const MethodInfo_37A368C *)Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__);
  if ( v14 )
  {
    v15 = (WarBoardControlUiDataComponent_UiData_o *)v14;
    listUiDataKey = (System_Collections_Generic_List_object__o *)this->fields.listUiDataKey;
    if ( !listUiDataKey )
      goto LABEL_38;
    if ( System_Collections_Generic_List_object___Contains(
           listUiDataKey,
           *v11,
           (const MethodInfo_37A33B4 *)Method_System_Collections_Generic_List_string__Contains__) != isDisp )
    {
      listUiDataKey = (System_Collections_Generic_List_object__o *)this->fields.listUiDataKey;
      if ( !listUiDataKey )
        goto LABEL_38;
      v18 = *v11;
      if ( isDisp )
      {
        items = listUiDataKey->fields._items;
        v20 = Method_System_Collections_Generic_List_string__Add__;
        ++listUiDataKey->fields._version;
        if ( !items )
          goto LABEL_38;
        size = listUiDataKey->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            listUiDataKey,
            v18,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          listUiDataKey->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v18;
          sub_1C36FFC((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v18, v16, v17);
        }
        WarBoardControlUiDataComponent__SetUiDataTurnObjects(this, 1, v15, v23);
        SquareIndex = WarBoardControlUiDataComponent__get_SquareIndex(this, v24);
        if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
        WarBoardControlUiDataComponent__UpdateAdjustSituationAll_37706500(SquareIndex, 1, v25);
      }
      else
      {
        System_Collections_Generic_List_object___Remove(
          listUiDataKey,
          v18,
          (const MethodInfo_37A454C *)Method_System_Collections_Generic_List_string__Remove__);
      }
      v27 = (System_String_o *)*v11;
      v28 = WarBoardControlUiDataComponent_TypeInfo;
      if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
        v28 = WarBoardControlUiDataComponent_TypeInfo;
      }
      if ( System_String__op_Equality(v27, v28->static_fields->UI_DATA_KEY_BARRIER, 0) )
      {
        pieceComponent = this->fields.pieceComponent;
        if ( pieceComponent )
        {
          v31 = (WarBoardServantPieceBuffTurnComponent_o *)((__int64 (__fastcall *)(struct WarBoardPieceBaseComponent_o *, const MethodInfo *))pieceComponent->klass->vtable._4_get_BuffTrunNotice.methodPtr)(
                                                             pieceComponent,
                                                             pieceComponent->klass->vtable._4_get_BuffTrunNotice.method);
          if ( v31 )
            WarBoardServantPieceBuffTurnComponent__UpdateDisp(v31, 1, 0);
        }
      }
      WarBoardControlUiDataComponent__LocalSave(this, v29);
      animationObjects = v15->fields.animationObjects;
      if ( !animationObjects )
LABEL_38:
        sub_1C372B4(listUiDataKey);
      max_length = animationObjects->max_length;
      if ( max_length >= 1 )
      {
        v34 = 0;
        while ( 1 )
        {
          if ( v34 >= max_length )
            sub_1C372BC(listUiDataKey);
          listUiDataKey = (System_Collections_Generic_List_object__o *)animationObjects->m_Items[v34];
          if ( !listUiDataKey )
            break;
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)listUiDataKey,
                               (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
                          v36);
            else
              started = WarBoardControlUiDataComponent__PlayEndUiDataAnim(
                          this,
                          (SimpleAnimation_o *)Component_object,
                          v15,
                          v37);
            listUiDataKey = (System_Collections_Generic_List_object__o *)UnityEngine_MonoBehaviour__StartCoroutine_71252324(
                                                                           (UnityEngine_MonoBehaviour_o *)this,
                                                                           started,
                                                                           0);
          }
          max_length = animationObjects->max_length;
          if ( (int)++v34 >= max_length )
            return;
        }
        goto LABEL_38;
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

  if ( (byte_4C4082E & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Clear__);
    byte_4C4082E = 1;
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
    sub_1C372B4(listUiDataKey);
  }
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)listUiDataKey,
    (System_Collections_Generic_IEnumerable_T__o *)keys,
    (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_string__AddRange__);
}


void WarBoardControlUiDataComponent__SetUiDataOnBattle(
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
        sub_1C372BC(this);
      this = (WarBoardControlUiDataComponent_o *)onEnterBattleTurnOffObjects->m_Items[v4];
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      max_length = onEnterBattleTurnOffObjects->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1C372B4(this);
  }
}


void WarBoardControlUiDataComponent__SetUiDataOnBattleAll(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v2; // x1
  _QWORD *monitor; // x8
  __int64 v4; // x20
  int v5; // w8
  unsigned int v6; // w21
  __int64 v7; // x8
  int32_t v8; // w19

  if ( (byte_4C40826 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C37058(&WarBoardControlUiDataComponent_TypeInfo);
    byte_4C40826 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        sub_1C372BC(Instance);
      v7 = *(_QWORD *)(v4 + 8LL * (int)v6 + 32);
      if ( !v7 )
        break;
      v8 = *(_DWORD *)(v7 + 16);
      if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
      WarBoardControlUiDataComponent__SetUiDataOnBattleAll_37706032(v8, v2);
      v5 = *(_DWORD *)(v4 + 24);
      if ( (int)++v6 >= v5 )
        return;
    }
LABEL_14:
    sub_1C372B4(Instance);
  }
}


void WarBoardControlUiDataComponent__SetUiDataOnBattleAll_37706032(int32_t squareIndex, const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  const MethodInfo *v4; // x1
  struct WarBoardStageNpcMaster_o *stageNpcMaster; // x8
  WarBoardControlUiDataComponent_o *list; // x0
  const MethodInfo *v7; // x1
  struct WarBoardPieceData_array *pieces; // x8
  WarBoardControlUiDataComponent_o *v9; // x0

  if ( (byte_4C40827 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C40827 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_37884744(Instance, squareIndex, 0);
  if ( Instance )
  {
    stageNpcMaster = Instance[1].fields.stageNpcMaster;
    if ( !stageNpcMaster )
      goto LABEL_16;
    list = (WarBoardControlUiDataComponent_o *)stageNpcMaster[2].fields.list;
    if ( list )
      WarBoardControlUiDataComponent__SetUiDataOnBattle(list, v4);
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1C372B4(Instance);
  v9 = (WarBoardControlUiDataComponent_o *)pieces->m_Items[19];
  if ( v9 )
    WarBoardControlUiDataComponent__SetUiDataOnBattle(v9, v7);
}


void WarBoardControlUiDataComponent__SetUiDataTurnObjects(
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
  if ( (byte_4C40834 & 1) == 0 )
  {
    this = (WarBoardControlUiDataComponent_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C40834 = 1;
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
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isDisp, 0);
      max_length = turnOnObjects->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_10;
    }
LABEL_22:
    sub_1C372BC(this);
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
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v12, 0);
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
  if ( UnityEngine_Object__op_Inequality(squareComponent, 0, 0) )
  {
    this = (WarBoardControlUiDataComponent_o *)v6->fields.squareComponent;
    if ( this )
    {
      WarBoardSquareComponent__SetMovePoint((WarBoardSquareComponent_o *)this, v12, 0);
      return;
    }
LABEL_23:
    sub_1C372B4(this);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C40832 & 1) == 0 )
  {
    sub_1C37058(&WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_TypeInfo);
    byte_4C40832 = 1;
  }
  v9 = immediatelyWhenOff;
  v10 = sub_1C372A4(WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  *(_DWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v10 + 32), (int32_t)this, v11, v12);
  *(_BYTE *)(v10 + 48) = isDisp;
  *(_QWORD *)(v10 + 40) = targetObject;
  sub_1C36FFC((CGThumbnailListItem_o *)(v10 + 40), (int32_t)targetObject, v13, v14);
  *(_BYTE *)(v10 + 49) = v9;
  return (System_Collections_IEnumerator_o *)v10;
}


System_Collections_IEnumerator_o *WarBoardControlUiDataComponent__StartSyncAnimation(
        WarBoardControlUiDataComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C40837 & 1) == 0 )
  {
    sub_1C37058(&WarBoardControlUiDataComponent__StartSyncAnimation_d__43_TypeInfo);
    byte_4C40837 = 1;
  }
  v5 = sub_1C372A4(WarBoardControlUiDataComponent__StartSyncAnimation_d__43_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 40), (int32_t)callback, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void WarBoardControlUiDataComponent__SyncAnimation(
        WarBoardControlUiDataComponent_o *this,
        System_Action_o *syncCallback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *started; // x1

  started = WarBoardControlUiDataComponent__StartSyncAnimation(this, syncCallback, method);
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, started, 0);
}


void WarBoardControlUiDataComponent__UpdateAdjustObjects(
        WarBoardControlUiDataComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *AdjustType; // x0
  struct System_Single_array *AdjustOffsetY; // x9
  struct UnityEngine_GameObject_array *adjustObjects; // x20
  int max_length; // w8
  float v7; // s8
  unsigned int v8; // w21
  Il2CppClass **v9; // x8
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
    sub_1C372B4(AdjustType);
  max_length = adjustObjects->max_length;
  if ( max_length >= 1 )
  {
    v7 = AdjustOffsetY->m_Items[(int)AdjustType];
    v8 = 0;
    while ( v8 < max_length )
    {
      v9 = &adjustObjects->obj.klass + (int)v8;
      v10 = (UnityEngine_GameObject_o *)v9[4];
      if ( !v10 )
        goto LABEL_12;
      AdjustType = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v9[4], 0);
      if ( !AdjustType )
        goto LABEL_12;
      localPosition = UnityEngine_Transform__get_localPosition(AdjustType, 0);
      x = localPosition.fields.x;
      z = localPosition.fields.z;
      AdjustType = UnityEngine_GameObject__get_transform(v10, 0);
      if ( !AdjustType )
        goto LABEL_12;
      v14.fields.x = x;
      v14.fields.y = v7;
      v14.fields.z = z;
      UnityEngine_Transform__set_localPosition(AdjustType, v14, 0);
      max_length = adjustObjects->max_length;
      if ( (int)++v8 >= max_length )
        return;
    }
LABEL_13:
    sub_1C372BC(AdjustType);
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


void WarBoardControlUiDataComponent__UpdateAdjustSituationAll(
        System_Int32_array *squareIndexes,
        bool immediatelyWhenOff,
        const MethodInfo *method)
{
  System_Int32_array *v4; // x19
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v6; // x22
  bool v7; // w20
  int32_t v8; // w21

  v4 = squareIndexes;
  if ( (byte_4C40828 & 1) == 0 )
  {
    squareIndexes = (System_Int32_array *)sub_1C37058(&WarBoardControlUiDataComponent_TypeInfo);
    byte_4C40828 = 1;
  }
  if ( !v4 )
    sub_1C372B4(squareIndexes);
  max_length = v4->max_length;
  if ( (int)max_length >= 1 )
  {
    v6 = 0;
    v7 = immediatelyWhenOff;
    do
    {
      if ( v6 >= (unsigned int)max_length )
        sub_1C372BC(squareIndexes);
      v8 = v4->m_Items[v6];
      if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
      WarBoardControlUiDataComponent__UpdateAdjustSituationAll_37706500(v8, v7, method);
      LODWORD(max_length) = v4->max_length;
      ++v6;
    }
    while ( (__int64)v6 < (int)max_length );
  }
}


void WarBoardControlUiDataComponent__UpdateAdjustSituationAll_37706500(
        int32_t squareIndex,
        bool immediatelyWhenOff,
        const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  const MethodInfo *v6; // x2
  struct WarBoardStageNpcMaster_o *stageNpcMaster; // x8
  WarBoardControlUiDataComponent_o *list; // x0
  const MethodInfo *v9; // x2
  struct WarBoardPieceData_array *pieces; // x8
  WarBoardControlUiDataComponent_o *v11; // x0

  if ( (byte_4C40829 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C40829 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_37884744(Instance, squareIndex, 0);
  if ( Instance )
  {
    stageNpcMaster = Instance[1].fields.stageNpcMaster;
    if ( !stageNpcMaster )
      goto LABEL_16;
    list = (WarBoardControlUiDataComponent_o *)stageNpcMaster[2].fields.list;
    if ( list )
      WarBoardControlUiDataComponent__UpdateAdjustSituation(list, immediatelyWhenOff, v6);
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1C372B4(Instance);
  v11 = (WarBoardControlUiDataComponent_o *)pieces->m_Items[19];
  if ( v11 )
    WarBoardControlUiDataComponent__UpdateAdjustSituation(v11, immediatelyWhenOff, v9);
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
  const MethodInfo *v8; // x4
  struct UnityEngine_GameObject_array *onExistsOtherTurnOffObjects; // x22
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v11; // x23
  bool v12; // w20
  bool v13; // w21
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
      sub_1C372B4(IsExistsOther);
    max_length = onExistsOtherTurnOffObjects->max_length;
    if ( (int)max_length >= 1 )
    {
      v11 = 0;
      v12 = ((unsigned __int8)IsExistsOther ^ 1) & 1;
      v13 = immediatelyWhenOff;
      do
      {
        if ( v11 >= (unsigned int)max_length )
          sub_1C372BC(IsExistsOther);
        v14 = WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation(
                this,
                v12,
                onExistsOtherTurnOffObjects->m_Items[v11],
                v13,
                v8);
        IsExistsOther = UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v14, 0);
        LODWORD(max_length) = onExistsOtherTurnOffObjects->max_length;
        ++v11;
      }
      while ( (__int64)v11 < (int)max_length );
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
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  struct System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__o *listUiData; // x8
  char v9; // w21
  struct UnityEngine_GameObject_array *onOverlapObjects; // x22
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v12; // x23
  UnityEngine_GameObject_o *v13; // x20
  char v14; // w8

  if ( (byte_4C4082F & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C4082F = 1;
  }
  if ( !this->fields.compType )
    return;
  Instance = (WarBoardControlUiDataComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    Instance = (WarBoardControlUiDataComponent_o *)WarBoardControlUiDataComponent__IsDispOverlapObjects(Instance, v6);
    v9 = (unsigned __int8)Instance ^ 1;
  }
  else
  {
LABEL_10:
    v9 = 1;
  }
  onOverlapObjects = this->fields.onOverlapObjects;
  if ( !onOverlapObjects )
LABEL_21:
    sub_1C372B4(Instance);
  max_length = onOverlapObjects->max_length;
  if ( (int)max_length >= 1 )
  {
    v12 = 0;
    do
    {
      if ( v12 >= (unsigned int)max_length )
        sub_1C372BC(Instance);
      v13 = onOverlapObjects->m_Items[v12];
      Instance = (WarBoardControlUiDataComponent_o *)WarBoardControlUiDataComponent__CheckCorrectActiveObject(
                                                       this,
                                                       v13,
                                                       v7);
      if ( ((unsigned int)Instance & 0x80000000) != 0 )
      {
        v14 = v9;
        if ( !v13 )
          goto LABEL_21;
      }
      else
      {
        if ( !v13 )
          goto LABEL_21;
        v14 = ((_DWORD)Instance == 1) & v9;
      }
      UnityEngine_GameObject__SetActive(v13, v14 & 1, 0);
      LODWORD(max_length) = onOverlapObjects->max_length;
      ++v12;
    }
    while ( (__int64)v12 < (int)max_length );
  }
}


int32_t WarBoardControlUiDataComponent__get_SquareIndex(
        WarBoardControlUiDataComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *pieceComponent; // x20
  _BOOL8 v4; // x0
  struct WarBoardPieceBaseComponent_o *v5; // x8
  struct WarBoardPieceData_o *pieceData; // x8
  int32_t *p_nowSquareIndex_k__BackingField; // x8
  UnityEngine_Object_o *squareComponent; // x20
  struct WarBoardSquareComponent_o *v9; // x8
  struct WarBoardSquareData_o *squareData; // x8

  if ( (byte_4C40824 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C40824 = 1;
  }
  pieceComponent = (UnityEngine_Object_o *)this->fields.pieceComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(pieceComponent, 0, 0);
  if ( v4 )
  {
    v5 = this->fields.pieceComponent;
    if ( v5 )
    {
      pieceData = v5->fields.pieceData;
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
  v4 = UnityEngine_Object__op_Inequality(squareComponent, 0, 0);
  if ( v4 )
  {
    v9 = this->fields.squareComponent;
    if ( v9 )
    {
      squareData = v9->fields.squareData;
      if ( squareData )
      {
        p_nowSquareIndex_k__BackingField = &squareData->fields._squareIndex_k__BackingField;
        return *p_nowSquareIndex_k__BackingField;
      }
    }
LABEL_17:
    sub_1C372B4(v4);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x3
  WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_c *klass; // x8
  WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *v11; // x21
  __int64 v12; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v14; // x0
  int32_t v15; // w2
  CGThumbnailListItem_o *p__2__current; // x19
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
  if ( (byte_4C4083D & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SimpleAnimation_State_TypeInfo);
    sub_1C37058(&WarBoardControlUiDataComponent_TypeInfo);
    this = (WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *)sub_1C37058(&StringLiteral_19007/*"end"*/);
    byte_4C4083D = 1;
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
           (System_String_o *)StringLiteral_19007/*"end"*/,
           v2);
    v3->fields._stateName_5__2 = v6;
    sub_1C36FFC((CGThumbnailListItem_o *)&v3->fields._stateName_5__2, (int32_t)v6, v7, v8);
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
        v21 = 0;
        while ( 1 )
        {
          if ( v21 >= max_length )
            sub_1C372BC(this);
          this = (WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *)animationObjects->m_Items[v21];
          if ( !this )
            break;
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)this,
                               (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
                                                                                  (System_String_o *)StringLiteral_19007/*"end"*/,
                                                                                  v9);
            if ( ((unsigned __int8)this & 1) != 0 )
              return 0;
          }
          max_length = animationObjects->max_length;
          if ( (int)++v21 >= max_length )
            goto LABEL_31;
        }
LABEL_36:
        sub_1C372B4(this);
      }
LABEL_31:
      if ( !_4__this )
        goto LABEL_36;
      WarBoardControlUiDataComponent__SetUiDataTurnObjects(_4__this, 0, v3->fields.uiData, v9);
      SquareIndex = WarBoardControlUiDataComponent__get_SquareIndex(_4__this, v23);
      if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
      WarBoardControlUiDataComponent__UpdateAdjustSituationAll_37706500(SquareIndex, 0, v24);
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
    v11 = this;
    v12 = *(unsigned __int16 *)&this->klass->_2.rank;
    if ( *(_WORD *)&this->klass->_2.rank )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v12;
        p_offset += 2;
        if ( !v12 )
          goto LABEL_15;
      }
      v14 = (__int64)(&klass->vtable._5_System_IDisposable_Dispose + *(_DWORD *)p_offset);
    }
    else
    {
LABEL_15:
      v14 = sub_1C87870(this, SimpleAnimation_State_TypeInfo, 5);
    }
    if ( (*(float (__fastcall **)(WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *, _QWORD))v14)(
           v11,
           *(_QWORD *)(v14 + 8)) < 1.0 )
    {
      v3->fields.__2__current = 0;
      p__2__current = (CGThumbnailListItem_o *)&v3->fields.__2__current;
      sub_1C36FFC(p__2__current, 0, v15, v9);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
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

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x3
  WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_c *klass; // x8
  WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *v11; // x21
  __int64 v12; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v14; // x0
  int32_t v15; // w2
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0

  v3 = this;
  if ( (byte_4C4083E & 1) == 0 )
  {
    sub_1C37058(&SimpleAnimation_State_TypeInfo);
    sub_1C37058(&StringLiteral_23651/*"start"*/);
    this = (WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *)sub_1C37058(&StringLiteral_21353/*"loop"*/);
    byte_4C4083E = 1;
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
           (System_String_o *)StringLiteral_23651/*"start"*/,
           v2);
    v3->fields._stateName_5__2 = v6;
    sub_1C36FFC((CGThumbnailListItem_o *)&v3->fields._stateName_5__2, (int32_t)v6, v7, v8);
    if ( System_String__IsNullOrEmpty(v3->fields._stateName_5__2, 0) )
    {
LABEL_20:
      WarBoardControlUiDataComponent__PlayAnimation(
        _4__this,
        v3->fields.animation,
        (System_String_o *)StringLiteral_21353/*"loop"*/,
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
                                                                              0);
      if ( this )
      {
        klass = this->klass;
        v11 = this;
        v12 = *(unsigned __int16 *)&this->klass->_2.rank;
        if ( *(_WORD *)&this->klass->_2.rank )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v12;
            p_offset += 2;
            if ( !v12 )
              goto LABEL_15;
          }
          v14 = (__int64)(&klass->vtable._5_System_IDisposable_Dispose + *(_DWORD *)p_offset);
        }
        else
        {
LABEL_15:
          v14 = sub_1C87870(this, SimpleAnimation_State_TypeInfo, 5);
        }
        if ( (*(float (__fastcall **)(WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *, _QWORD))v14)(
               v11,
               *(_QWORD *)(v14 + 8)) < 1.0 )
        {
          v3->fields.__2__current = 0;
          p__2__current = (CGThumbnailListItem_o *)&v3->fields.__2__current;
          sub_1C36FFC(p__2__current, 0, v15, v9);
          result = 1;
          LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
          return result;
        }
        if ( _4__this )
          goto LABEL_20;
      }
    }
LABEL_22:
    sub_1C372B4(this);
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

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
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
  Il2CppObject *Component_object; // x0
  SimpleAnimation_o **p_simpleAnimation_5__2; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
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
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0
  const MethodInfo *v29; // x3
  __int64 *v30; // x8
  System_String_o *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3

  v3 = this;
  if ( (byte_4C4083F & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SimpleAnimation_State_TypeInfo);
    sub_1C37058(&StringLiteral_23651/*"start"*/);
    sub_1C37058(&StringLiteral_19007/*"end"*/);
    this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)sub_1C37058(&StringLiteral_21353/*"loop"*/);
    byte_4C4083F = 1;
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
                                                                                        0);
    if ( !this )
      goto LABEL_55;
    this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)UnityEngine_Transform__get_parent(
                                                                                        (UnityEngine_Transform_o *)this,
                                                                                        0);
    if ( !this )
      goto LABEL_55;
    this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)UnityEngine_Component__get_gameObject(
                                                                                        (UnityEngine_Component_o *)this,
                                                                                        0);
    if ( !this )
      goto LABEL_55;
    if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)this, 0) )
    {
      this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)v3->fields.targetObject;
      if ( !this )
        goto LABEL_55;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
      v3->fields._simpleAnimation_5__2 = (struct SimpleAnimation_o *)Component_object;
      p_simpleAnimation_5__2 = &v3->fields._simpleAnimation_5__2;
      sub_1C36FFC((CGThumbnailListItem_o *)&v3->fields._simpleAnimation_5__2, (int32_t)Component_object, v9, v10);
      if ( !v3->fields.isDisp )
        goto LABEL_23;
      this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)v3->fields.targetObject;
      if ( !this )
        goto LABEL_55;
      if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)this, 0) )
      {
        v11 = *p_simpleAnimation_5__2;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v12 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0, 0);
        if ( v12 )
        {
          IsPlayingAnimation = WarBoardControlUiDataComponent__IsPlayingAnimation(
                                 (WarBoardControlUiDataComponent_o *)v12,
                                 *p_simpleAnimation_5__2,
                                 (System_String_o *)StringLiteral_23651/*"start"*/,
                                 v13);
          if ( IsPlayingAnimation
            || WarBoardControlUiDataComponent__IsPlayingAnimation(
                 (WarBoardControlUiDataComponent_o *)IsPlayingAnimation,
                 *p_simpleAnimation_5__2,
                 (System_String_o *)StringLiteral_21353/*"loop"*/,
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
        if ( !UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)this, 0) )
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
                                                                                          0,
                                                                                          0);
      targetObject = v3->fields.targetObject;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( targetObject )
        {
          v19 = v3->fields.isDisp;
          this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)v3->fields.targetObject;
LABEL_53:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v19, 0);
          return 0;
        }
        goto LABEL_55;
      }
      if ( !targetObject )
        goto LABEL_55;
      UnityEngine_GameObject__SetActive(v3->fields.targetObject, 1, 0);
      if ( v3->fields.isDisp )
        v30 = &StringLiteral_23651/*"start"*/;
      else
        v30 = &StringLiteral_19007/*"end"*/;
      v31 = WarBoardControlUiDataComponent__PlayAnimation(
              _4__this,
              v3->fields._simpleAnimation_5__2,
              (System_String_o *)*v30,
              v29);
      v3->fields._stateName_5__3 = v31;
      sub_1C36FFC((CGThumbnailListItem_o *)&v3->fields._stateName_5__3, (int32_t)v31, v32, v33);
      this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)System_String__IsNullOrEmpty(
                                                                                          v3->fields._stateName_5__3,
                                                                                          0);
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
            (System_String_o *)StringLiteral_21353/*"loop"*/,
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
        sub_1C372B4(this);
      }
LABEL_33:
      this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)v3->fields._simpleAnimation_5__2;
      if ( !this )
        goto LABEL_55;
      this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)SimpleAnimation__GetState(
                                                                                          (SimpleAnimation_o *)this,
                                                                                          v3->fields._stateName_5__3,
                                                                                          0);
      if ( !this )
        goto LABEL_55;
      klass = this->klass;
      v21 = this;
      v22 = *(unsigned __int16 *)&this->klass->_2.rank;
      if ( *(_WORD *)&this->klass->_2.rank )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v22;
          p_offset += 2;
          if ( !v22 )
            goto LABEL_39;
        }
        v24 = (__int64)(&klass->vtable._5_System_IDisposable_Dispose + *(_DWORD *)p_offset);
      }
      else
      {
LABEL_39:
        v24 = sub_1C87870(this, SimpleAnimation_State_TypeInfo, 5);
      }
      if ( (*(float (__fastcall **)(WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *, _QWORD))v24)(
             v21,
             *(_QWORD *)(v24 + 8)) < 1.0 )
      {
        v3->fields.__2__current = 0;
        p__2__current = (CGThumbnailListItem_o *)&v3->fields.__2__current;
        sub_1C36FFC(p__2__current, 0, v25, v26);
        result = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return result;
      }
      goto LABEL_48;
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

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
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
  const MethodInfo *v16; // x3
  UnityEngine_Object_o *v17; // x20
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o **p_animState_5__3; // x20
  System_Collections_IEnumerator_o *Enumerator; // x0
  System_Collections_IEnumerator_o *v22; // x21
  System_Collections_IEnumerator_c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  float v29; // s8
  signed int v30; // w8
  UnityEngine_Object_o *targetSimpleAnimation_5__2; // x20
  System_Collections_Generic_IEnumerable_TSource__o *States; // x0
  Il2CppObject *object; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct SimpleAnimation_State_o *state_5__6; // x21
  SimpleAnimation_State_c *klass; // x8
  __int64 v38; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v40; // x0
  CGThumbnailListItem_o *v41; // x19
  char v42; // w8
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  float v45; // s0
  struct System_Action_o *callback; // x8
  Il2CppObject **p__2__current; // x19
  System_Collections_IEnumerator_c *v49; // x8
  __int64 v50; // x9
  System_Collections_IEnumerator_c **v51; // x10
  __int64 v52; // x0
  UnityEngine_AnimationState_c **v53; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  __int64 v56; // x22
  __int64 v57; // x0
  __int64 v58; // x8
  __int64 v59; // x21
  __int64 v60; // x9
  int *v61; // x10
  __int64 v62; // x0
  float normalizedTime; // s8
  unsigned int v64; // w9
  unsigned int v65; // w8
  void *v66; // x0
  void *v67; // x23
  int v68; // w1
  __int64 v69; // x0
  __int64 v70; // x19
  __int64 v71; // x8
  __int64 v72; // x9
  int *v73; // x10
  __int64 v74; // x0

  v4 = this;
  if ( (byte_4C40840 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_AnimationState_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_First_SimpleAnimation_State___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)sub_1C37058(&SimpleAnimation_State_TypeInfo);
    byte_4C40840 = 1;
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
    v38 = *(unsigned __int16 *)&state_5__6->klass->_2.rank;
    if ( *(_WORD *)&state_5__6->klass->_2.rank )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v38;
        p_offset += 2;
        if ( !v38 )
          goto LABEL_63;
      }
      v40 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5];
    }
    else
    {
LABEL_63:
      v40 = sub_1C87870(v4->fields._state_5__6, SimpleAnimation_State_TypeInfo, 5);
    }
    v45 = (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))v40)(state_5__6, *(_QWORD *)(v40 + 8));
    if ( v45 > 0.0 && v45 < 1.0 && v4->fields._time_5__5 <= v45 )
    {
      v4->fields.__2__current = 0;
      p__2__current = &v4->fields.__2__current;
      *((float *)p__2__current + 11) = v45;
      sub_1C36FFC((CGThumbnailListItem_o *)p__2__current, 0, v43, v44);
      *((_DWORD *)p__2__current - 2) = 2;
      v42 = 1;
      return v42 & 1;
    }
    v4->fields._state_5__6 = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields._state_5__6, 0, v43, v44);
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
    v42 = 0;
    return v42 & 1;
  }
  _4__this = v4->fields.__4__this;
  v4->fields._targetSimpleAnimation_5__2 = 0;
  p_targetSimpleAnimation_5__2 = (UnityEngine_Object_o **)&v4->fields._targetSimpleAnimation_5__2;
  v4->fields.__1__state = -1;
  sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields._targetSimpleAnimation_5__2, 0, v2, v3);
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
        sub_1C372BC(this);
      v11 = (__int64)syncAnimationObjects + 8 * (int)v10;
      v12 = *(UnityEngine_GameObject_o **)(v11 + 32);
      if ( !v12 )
        break;
      this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)UnityEngine_GameObject__get_activeInHierarchy(
                                                                             *(UnityEngine_GameObject_o **)(v11 + 32),
                                                                             0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             v12,
                             (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        v14 = UnityEngine_GameObject__GetComponent_object_(
                v12,
                (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)UnityEngine_Object__op_Inequality(
                                                                               (UnityEngine_Object_o *)v14,
                                                                               0,
                                                                               0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v14 )
            break;
          this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)SimpleAnimation__get_isPlaying(
                                                                                 (SimpleAnimation_o *)v14,
                                                                                 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            *p_targetSimpleAnimation_5__2 = (UnityEngine_Object_o *)v14;
            sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields._targetSimpleAnimation_5__2, (int32_t)v14, v15, v16);
          }
        }
      }
      max_length = syncAnimationObjects->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_25;
    }
LABEL_105:
    sub_1C372B4(this);
  }
LABEL_25:
  Component_object = 0;
LABEL_26:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    v17 = *p_targetSimpleAnimation_5__2;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)UnityEngine_Object__op_Equality(v17, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
      goto LABEL_70;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
LABEL_52:
    targetSimpleAnimation_5__2 = (UnityEngine_Object_o *)v4->fields._targetSimpleAnimation_5__2;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)UnityEngine_Object__op_Inequality(
                                                                           targetSimpleAnimation_5__2,
                                                                           0,
                                                                           0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)v4->fields._targetSimpleAnimation_5__2;
      v4->fields._time_5__5 = -1.0;
      if ( !this )
        goto LABEL_105;
      States = (System_Collections_Generic_IEnumerable_TSource__o *)SimpleAnimation__GetStates(
                                                                      (SimpleAnimation_o *)this,
                                                                      0);
      object = System_Linq_Enumerable__First_object_(
                 States,
                 (const MethodInfo_310E530 *)Method_System_Linq_Enumerable_First_SimpleAnimation_State___);
      v4->fields._state_5__6 = (struct SimpleAnimation_State_o *)object;
      sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields._state_5__6, (int32_t)object, v34, v35);
      goto LABEL_58;
    }
LABEL_70:
    callback = v4->fields.callback;
    if ( !callback )
      goto LABEL_105;
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
    goto LABEL_72;
  }
  v4->fields._animState_5__3 = 0;
  p_animState_5__3 = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o **)&v4->fields._animState_5__3;
  sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields._animState_5__3, 0, v18, v19);
  if ( !Component_object )
    goto LABEL_105;
  Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)Component_object, 0);
  v22 = Enumerator;
  if ( !Enumerator )
    sub_1C372B4(0);
  v23 = Enumerator->klass;
  v24 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)v25 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      --v24;
      v25 += 4;
      if ( !v24 )
        goto LABEL_41;
    }
    v26 = (__int64)&v23->vtable[*v25];
  }
  else
  {
LABEL_41:
    v26 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v26)(v22, *(_QWORD *)(v26 + 8)) & 1) != 0 )
  {
    v49 = v22->klass;
    v50 = *(unsigned __int16 *)&v22->klass->_2.rank;
    if ( *(_WORD *)&v22->klass->_2.rank )
    {
      v51 = (System_Collections_IEnumerator_c **)&v49->_1.interfaceOffsets->offset;
      while ( *(v51 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v50;
        v51 += 2;
        if ( !v50 )
          goto LABEL_81;
      }
      v52 = (__int64)&v49->vtable[*(_DWORD *)v51 + 1];
    }
    else
    {
LABEL_81:
      v52 = sub_1C87870(v22, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v53 = (UnityEngine_AnimationState_c **)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v52)(
                                             v22,
                                             *(_QWORD *)(v52 + 8));
    if ( v53 && *v53 != UnityEngine_AnimationState_TypeInfo )
    {
      sub_1C37574(v53);
      v67 = v66;
      if ( v68 != 1 )
      {
        v69 = sub_1C37194(v22, System_IDisposable_TypeInfo);
        v70 = v69;
        if ( v69 )
        {
          v71 = *(_QWORD *)v69;
          v72 = *(unsigned __int16 *)(*(_QWORD *)v69 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v69 + 302LL) )
          {
            v73 = (int *)(*(_QWORD *)(v71 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v73 - 1) != System_IDisposable_TypeInfo )
            {
              --v72;
              v73 += 4;
              if ( !v72 )
                goto LABEL_116;
            }
            v74 = v71 + 16LL * *v73 + 312;
          }
          else
          {
LABEL_116:
            v74 = sub_1C87870(v69, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v74)(v70, *(_QWORD *)(v74 + 8));
        }
        sub_1D2018C(v67);
      }
      v56 = *(_QWORD *)__cxa_begin_catch(v66);
      __cxa_end_catch();
      goto LABEL_87;
    }
    *p_animState_5__3 = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)v53;
    sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields._animState_5__3, (int32_t)v53, v54, v55);
  }
  v56 = 0;
LABEL_87:
  v57 = sub_1C37194(v22, System_IDisposable_TypeInfo);
  if ( v57 )
  {
    v58 = *(_QWORD *)v57;
    v59 = v57;
    v60 = *(unsigned __int16 *)(*(_QWORD *)v57 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v57 + 302LL) )
    {
      v61 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v61 - 1) != System_IDisposable_TypeInfo )
      {
        --v60;
        v61 += 4;
        if ( !v60 )
          goto LABEL_92;
      }
      v62 = v58 + 16LL * *v61 + 312;
    }
    else
    {
LABEL_92:
      v62 = sub_1C87870(v57, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v62)(v59, *(_QWORD *)(v62 + 8));
  }
  if ( v56 )
    sub_1C372AC(v56);
  this = *p_animState_5__3;
  if ( !*p_animState_5__3 )
    goto LABEL_105;
  normalizedTime = UnityEngine_AnimationState__get_normalizedTime((UnityEngine_AnimationState_o *)this, 0);
  if ( !byte_4C3C920 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3C920 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v64 = vcvtms_s32_f32(normalizedTime);
  if ( floorf(normalizedTime) == INFINITY )
    v65 = 0x80000000;
  else
    v65 = v64;
  v4->fields._startNormalizedTime_5__4 = v65;
LABEL_43:
  this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)v4->fields._animState_5__3;
  if ( !this )
    goto LABEL_105;
  v29 = UnityEngine_AnimationState__get_normalizedTime((UnityEngine_AnimationState_o *)this, 0);
  if ( !byte_4C3C920 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3C920 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v30 = vcvtms_s32_f32(v29);
  if ( floorf(v29) == INFINITY )
    v30 = 0x80000000;
  if ( v4->fields._startNormalizedTime_5__4 < v30 )
  {
    v4->fields._animState_5__3 = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields._animState_5__3, 0, v27, v28);
    goto LABEL_52;
  }
  v4->fields.__2__current = 0;
  v41 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
  sub_1C36FFC(v41, 0, v27, v28);
  v42 = 1;
  LODWORD(v41[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return v42 & 1;
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

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_WarBoardControlUiDataComponent__StartSyncAnimation_d__43_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
  return System_String__op_Equality(a->fields.key, this->fields.key, 0);
}