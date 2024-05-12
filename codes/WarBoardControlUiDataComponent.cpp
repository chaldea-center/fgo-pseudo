void __fastcall WarBoardControlUiDataComponent___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_4389A46 & 1) == 0 )
  {
    sub_B775C4(&WarBoardControlUiDataComponent_TypeInfo);
    sub_B775C4(&StringLiteral_2833/*"Barrier"*/);
    byte_4389A46 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarBoardControlUiDataComponent_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_2833/*"Barrier"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_2833/*"Barrier"*/;
  sub_B77560(static_fields, v8, v1, v2, v3, v4, v5, v6);
}


void __fastcall WarBoardControlUiDataComponent___ctor(WarBoardControlUiDataComponent_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_RuntimeFieldHandle_o v24; // 0:w1.4

  if ( (byte_4389A45 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_string___ctor___69407008);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData___ctor__);
    sub_B775C4(&System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_string__TypeInfo);
    sub_B775C4(&float___TypeInfo);
    sub_B775C4(&Field__PrivateImplementationDetails__64464566F592BAB0A74DD80EB47024C0ECA2BB914D37B27E78F5532363736E1B);
    byte_4389A45 = 1;
  }
  v3 = (System_Array_o *)sub_B775DC(float___TypeInfo, 7LL);
  v24.fields.value = Field__PrivateImplementationDetails__64464566F592BAB0A74DD80EB47024C0ECA2BB914D37B27E78F5532363736E1B;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43528236(v3, v24, 0LL);
  this->fields.AdjustOffsetY = (struct System_Single_array *)v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.AdjustOffsetY,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData___ctor__);
  this->fields.listUiData = (struct System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__o *)v10;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.listUiData,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_string___ctor___69407008);
  this->fields.listUiDataKey = (struct System_Collections_Generic_List_string__o *)v17;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.listUiDataKey,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardControlUiDataComponent__Awake(WarBoardControlUiDataComponent_o *this, const MethodInfo *method)
{
  WebViewObject_o *Component_WebViewObject; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  WebViewObject_o *v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_4389A2F & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_WarBoardPieceBaseComponent___);
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_WarBoardSquareComponent___);
    byte_4389A2F = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_WarBoardPieceBaseComponent___);
  this->fields.pieceComponent = (struct WarBoardPieceBaseComponent_o *)Component_WebViewObject;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.pieceComponent,
    (System_Int32_array **)Component_WebViewObject,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = UnityEngine_Component__GetComponent_WebViewObject_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_WarBoardSquareComponent___);
  this->fields.squareComponent = (struct WarBoardSquareComponent_o *)v10;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.squareComponent,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
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
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **current; // x1
  struct System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__o *listUiData; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v17; // x23
  __int64 v18; // x0
  __int64 v19; // x1
  peRenderTexture_ChangeLayerObject_o *v20; // x0
  __int64 v21; // x1
  peRenderTexture_ChangeLayerObject_o *v22; // x21
  struct UnityEngine_Renderer_o *renderer; // x23
  UnityEngine_Renderer_c *klass; // x8
  unsigned __int64 v25; // x27
  UnityEngine_Object_o *v26; // x22
  struct UnityEngine_Material_o *orgMaterial; // x22
  UnityEngine_Material_c *v28; // x8
  unsigned __int64 v29; // x23
  UnityEngine_Object_o *v30; // x21
  int32_t v31; // w19
  int v32; // w20
  __int64 v34; // x0
  __int64 v35; // x0
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4389A3A & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_System_Predicate_WarBoardControlUiDataComponent_UiData___ctor__);
    sub_B775C4(&System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo);
    sub_B775C4(&Method_WarBoardControlUiDataComponent___c__DisplayClass34_0__CheckCorrectActiveObject_b__0__);
    sub_B775C4(&WarBoardControlUiDataComponent___c__DisplayClass34_0_TypeInfo);
    byte_4389A3A = 1;
  }
  memset(&v37, 0, sizeof(v37));
  listUiDataKey = this->fields.listUiDataKey;
  if ( !listUiDataKey )
    sub_B7769C(0LL, targetObject);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v36,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)listUiDataKey,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v37 = v36;
  while ( 1 )
  {
    do
    {
LABEL_26:
      if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v37,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
      {
        v31 = 0;
        v32 = 7;
        goto LABEL_31;
      }
      v6 = sub_B77694(WarBoardControlUiDataComponent___c__DisplayClass34_0_TypeInfo);
      WarBoardControlUiDataComponent___c__DisplayClass34_0___ctor(
        (WarBoardControlUiDataComponent___c__DisplayClass34_0_o *)v6,
        0LL);
      if ( !v6 )
        sub_B7769C(v7, v8);
      current = (System_Int32_array **)v37.fields.current;
      *(_QWORD *)(v6 + 16) = v37.fields.current;
      sub_B77560((BattleServantConfConponent_o *)(v6 + 16), current, v9, v10, v11, v12, v13, v14);
      listUiData = this->fields.listUiData;
      v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v17,
        (Il2CppObject *)v6,
        Method_WarBoardControlUiDataComponent___c__DisplayClass34_0__CheckCorrectActiveObject_b__0__,
        (const MethodInfo_2C3248C *)Method_System_Predicate_WarBoardControlUiDataComponent_UiData___ctor__);
      if ( !listUiData )
        sub_B7769C(v18, v19);
      v20 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
              (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)listUiData,
              (System_Predicate_T__o *)v17,
              (const MethodInfo_3053B58 *)Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__);
      v22 = v20;
    }
    while ( !v20 );
    renderer = v20->fields.renderer;
    if ( !renderer )
      sub_B7769C(v20, v21);
    klass = renderer[1].klass;
    if ( (int)klass >= 1 )
      break;
LABEL_17:
    orgMaterial = v22->fields.orgMaterial;
    if ( !orgMaterial )
      sub_B7769C(v20, v21);
    v28 = orgMaterial[1].klass;
    if ( (int)v28 >= 1 )
    {
      v29 = 0LL;
      while ( 1 )
      {
        if ( v29 >= (unsigned int)v28 )
        {
          v35 = sub_B776C8(v20);
          sub_B77668(v35, 0LL);
        }
        v30 = (UnityEngine_Object_o *)*((_QWORD *)&orgMaterial[1].monitor + v29);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v20 = (peRenderTexture_ChangeLayerObject_o *)UnityEngine_Object__op_Equality(
                                                       (UnityEngine_Object_o *)targetObject,
                                                       v30,
                                                       0LL);
        if ( ((unsigned __int8)v20 & 1) != 0 )
          break;
        LODWORD(v28) = orgMaterial[1].klass;
        if ( (__int64)++v29 >= (int)v28 )
          goto LABEL_26;
      }
      v31 = 0;
      goto LABEL_30;
    }
  }
  v25 = 0LL;
  while ( 1 )
  {
    if ( v25 >= (unsigned int)klass )
    {
      v34 = sub_B776C8(v20);
      sub_B77668(v34, 0LL);
    }
    v26 = (UnityEngine_Object_o *)*((_QWORD *)&renderer[1].monitor + v25);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v20 = (peRenderTexture_ChangeLayerObject_o *)UnityEngine_Object__op_Equality(
                                                   (UnityEngine_Object_o *)targetObject,
                                                   v26,
                                                   0LL);
    if ( ((unsigned __int8)v20 & 1) != 0 )
      break;
    LODWORD(klass) = renderer[1].klass;
    if ( (__int64)++v25 >= (int)klass )
      goto LABEL_17;
  }
  v31 = 1;
LABEL_30:
  v32 = 9;
LABEL_31:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v37,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  if ( v32 == 9 )
    return v31;
  else
    return -1;
}


int32_t __fastcall WarBoardControlUiDataComponent__GetAdjustType(
        WarBoardControlUiDataComponent_o *this,
        const MethodInfo *method)
{
  void *Instance; // x0
  const MethodInfo *v4; // x1
  WarBoardData_o *v5; // x20
  const MethodInfo *v6; // x2
  WarBoardPieceData_o *Piece_22695252; // x0
  WarBoardData_o *v9; // x20
  const MethodInfo *v10; // x2
  __int64 v11; // x8
  WarBoardControlUiDataComponent_o *v12; // x0
  WarBoardData_o *v13; // x20
  const MethodInfo *v14; // x3
  WarBoardData_o *v15; // x20
  const MethodInfo *v16; // x2
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardData_o *v18; // x20
  const MethodInfo *v19; // x2
  WarBoardItemData_o *Item; // x0

  if ( (byte_4389A3D & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4389A3D = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  v5 = (WarBoardData_o *)*((_QWORD *)Instance + 54);
  Instance = (void *)WarBoardControlUiDataComponent__get_SquareIndex(this, v4);
  if ( !v5 )
    goto LABEL_31;
  Piece_22695252 = WarBoardData__GetPiece_22695252(v5, (int32_t)Instance, v6);
  if ( Piece_22695252 )
  {
    if ( WarBoardPieceData__get_isMaster(Piece_22695252, 0LL) )
      return 6;
    else
      return 5;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  v9 = (WarBoardData_o *)*((_QWORD *)Instance + 54);
  Instance = (void *)WarBoardControlUiDataComponent__get_SquareIndex(this, v4);
  if ( !v9 )
    goto LABEL_31;
  Instance = WarBoardData__GetSquare(v9, (int32_t)Instance, v10);
  if ( Instance )
  {
    v11 = *((_QWORD *)Instance + 6);
    if ( !v11 )
      goto LABEL_31;
    v12 = *(WarBoardControlUiDataComponent_o **)(v11 + 176);
    if ( v12 && WarBoardControlUiDataComponent__IsDispFlagObjects(v12, v4) )
      return 4;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  v13 = (WarBoardData_o *)*((_QWORD *)Instance + 54);
  Instance = (void *)WarBoardControlUiDataComponent__get_SquareIndex(this, v4);
  if ( !v13 )
    goto LABEL_31;
  if ( WarBoardData__GetWall(v13, (int32_t)Instance, 0, v14) )
    return 3;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  v15 = (WarBoardData_o *)*((_QWORD *)Instance + 54);
  Instance = (void *)WarBoardControlUiDataComponent__get_SquareIndex(this, v4);
  if ( !v15 )
    goto LABEL_31;
  Treasure = WarBoardData__GetTreasure(v15, (int32_t)Instance, v16);
  if ( Treasure && !Treasure->fields._isUse_k__BackingField )
    return 1;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (v18 = (WarBoardData_o *)*((_QWORD *)Instance + 54),
        Instance = (void *)WarBoardControlUiDataComponent__get_SquareIndex(this, v4),
        !v18) )
  {
LABEL_31:
    sub_B7769C(Instance, v4);
  }
  Item = WarBoardData__GetItem(v18, (int32_t)Instance, v19);
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
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x19
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  int *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x8
  unsigned __int64 v18; // x10
  int *v19; // x11
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x21
  __int64 v24; // x8
  unsigned __int64 v25; // x10
  SimpleAnimation_State_c **v26; // x11
  __int64 v27; // x0
  System_String_o *v28; // x0
  __int64 v29; // x1
  System_String_o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x8
  unsigned __int64 v33; // x10
  SimpleAnimation_State_c **v34; // x11
  __int64 v35; // x0
  System_String_o *v36; // x20
  int v37; // w8
  __int64 v38; // x8
  unsigned __int64 v39; // x10
  int *v40; // x11
  __int64 v41; // x0
  int v43; // [xsp+0h] [xbp-40h]

  if ( (byte_4389A43 & 1) == 0 )
  {
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    this = (WarBoardControlUiDataComponent_o *)sub_B775C4(&SimpleAnimation_State_TypeInfo);
    byte_4389A43 = 1;
  }
  if ( !animation || (this = (WarBoardControlUiDataComponent_o *)SimpleAnimation__GetStates(animation, 0LL)) == 0LL )
    sub_B7769C(this, animation);
  klass = this->klass;
  v7 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v8 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
    {
      ++v8;
      p_offset += 4;
      if ( v8 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    v10 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v10 = sub_B0F4C0(this, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
  }
  v12 = (*(__int64 (__fastcall **)(WarBoardControlUiDataComponent_o *, _QWORD))v10)(v7, *(_QWORD *)(v10 + 8));
  if ( !v12 )
    sub_B7769C(0LL, v11);
  do
  {
    v13 = *(_QWORD *)v12;
    if ( *(_WORD *)(*(_QWORD *)v12 + 298LL) )
    {
      v14 = 0LL;
      v15 = (int *)(*(_QWORD *)(v13 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v14;
        v15 += 4;
        if ( v14 >= *(unsigned __int16 *)(*(_QWORD *)v12 + 298LL) )
          goto LABEL_16;
      }
      v16 = v13 + 16LL * *v15 + 312;
    }
    else
    {
LABEL_16:
      v16 = sub_B0F4C0(v12, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v16)(v12, *(_QWORD *)(v16 + 8)) & 1) == 0 )
    {
      v36 = 0LL;
      v37 = 69;
      goto LABEL_43;
    }
    v17 = *(_QWORD *)v12;
    if ( *(_WORD *)(*(_QWORD *)v12 + 298LL) )
    {
      v18 = 0LL;
      v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v19 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
      {
        ++v18;
        v19 += 4;
        if ( v18 >= *(unsigned __int16 *)(*(_QWORD *)v12 + 298LL) )
          goto LABEL_23;
      }
      v20 = v17 + 16LL * *v19 + 312;
    }
    else
    {
LABEL_23:
      v20 = sub_B0F4C0(v12, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
    }
    v21 = (*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v12, *(_QWORD *)(v20 + 8));
    v23 = v21;
    if ( !v21 )
      sub_B7769C(0LL, v22);
    v24 = *(_QWORD *)v21;
    if ( *(_WORD *)(*(_QWORD *)v21 + 298LL) )
    {
      v25 = 0LL;
      v26 = (SimpleAnimation_State_c **)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *(v26 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v25;
        v26 += 2;
        if ( v25 >= *(unsigned __int16 *)(*(_QWORD *)v21 + 298LL) )
          goto LABEL_30;
      }
      v27 = v24 + 16LL * (*(_DWORD *)v26 + 9) + 312;
    }
    else
    {
LABEL_30:
      v27 = sub_B0F4C0(v21, SimpleAnimation_State_TypeInfo, 9LL);
    }
    v28 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8));
    if ( !v28 )
      sub_B7769C(0LL, v29);
    v30 = System_String__ToLower(v28, 0LL);
    if ( !v30 )
      sub_B7769C(0LL, v31);
  }
  while ( !System_String__EndsWith(v30, suffix, 0LL) );
  v32 = *(_QWORD *)v23;
  if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
  {
    v33 = 0LL;
    v34 = (SimpleAnimation_State_c **)(*(_QWORD *)(v32 + 176) + 8LL);
    while ( *(v34 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v33;
      v34 += 2;
      if ( v33 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
        goto LABEL_39;
    }
    v35 = v32 + 16LL * (*(_DWORD *)v34 + 9) + 312;
  }
  else
  {
LABEL_39:
    v35 = sub_B0F4C0(v23, SimpleAnimation_State_TypeInfo, 9LL);
  }
  v36 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v23, *(_QWORD *)(v35 + 8));
  v37 = 71;
LABEL_43:
  v43 = v37;
  v38 = *(_QWORD *)v12;
  if ( *(_WORD *)(*(_QWORD *)v12 + 298LL) )
  {
    v39 = 0LL;
    v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      ++v39;
      v40 += 4;
      if ( v39 >= *(unsigned __int16 *)(*(_QWORD *)v12 + 298LL) )
        goto LABEL_47;
    }
    v41 = v38 + 16LL * *v40 + 312;
  }
  else
  {
LABEL_47:
    v41 = sub_B0F4C0(v12, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v41)(v12, *(_QWORD *)(v41 + 8));
  if ( v43 == 69 )
    return 0LL;
  return v36;
}


bool __fastcall WarBoardControlUiDataComponent__IsDispFlagObjects(
        WarBoardControlUiDataComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *flagObjects; // x19
  int max_length; // w8
  unsigned int v4; // w20
  __int64 v6; // x0

  if ( this->fields.compType == 1 )
    return 0;
  flagObjects = this->fields.flagObjects;
  if ( !flagObjects )
LABEL_12:
    sub_B7769C(this, method);
  max_length = flagObjects->max_length;
  if ( max_length < 1 )
    return 0;
  v4 = 0;
  while ( 1 )
  {
    if ( v4 >= max_length )
    {
      v6 = sub_B776C8(this);
      sub_B77668(v6, 0LL);
    }
    this = (WarBoardControlUiDataComponent_o *)flagObjects->m_Items[v4];
    if ( !this )
      goto LABEL_12;
    this = (WarBoardControlUiDataComponent_o *)UnityEngine_GameObject__get_activeInHierarchy(
                                                 (UnityEngine_GameObject_o *)this,
                                                 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 1;
    max_length = flagObjects->max_length;
    if ( (int)++v4 >= max_length )
      return 0;
  }
}


bool __fastcall WarBoardControlUiDataComponent__IsDispOverlapObjects(
        WarBoardControlUiDataComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *onOverlapObjects; // x19
  int max_length; // w8
  unsigned int v4; // w20
  __int64 v6; // x0

  if ( this->fields.compType == 1 )
    return 0;
  onOverlapObjects = this->fields.onOverlapObjects;
  if ( !onOverlapObjects )
LABEL_12:
    sub_B7769C(this, method);
  max_length = onOverlapObjects->max_length;
  if ( max_length < 1 )
    return 0;
  v4 = 0;
  while ( 1 )
  {
    if ( v4 >= max_length )
    {
      v6 = sub_B776C8(this);
      sub_B77668(v6, 0LL);
    }
    this = (WarBoardControlUiDataComponent_o *)onOverlapObjects->m_Items[v4];
    if ( !this )
      goto LABEL_12;
    this = (WarBoardControlUiDataComponent_o *)UnityEngine_GameObject__get_activeInHierarchy(
                                                 (UnityEngine_GameObject_o *)this,
                                                 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 1;
    max_length = onOverlapObjects->max_length;
    if ( (int)++v4 >= max_length )
      return 0;
  }
}


bool __fastcall WarBoardControlUiDataComponent__IsExistsOther(
        WarBoardControlUiDataComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  WarBoardData_o *v7; // x20
  const MethodInfo *v8; // x2
  WarBoardItemData_o *Item; // x0
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2
  WarBoardTreasureData_o *Treasure; // x0
  const MethodInfo *v14; // x3

  if ( (byte_4389A3B & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4389A3B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (v7 = *(WarBoardData_o **)&Instance[4].fields.m_CachedPtr) == 0LL )
    sub_B7769C(Instance, v5);
  return WarBoardData__GetPiece_22695252(*(WarBoardData_o **)&Instance[4].fields.m_CachedPtr, squareIndex, v6)
      || (Item = WarBoardData__GetItem(v7, squareIndex, v8)) != 0LL && !Item->fields._isUse_k__BackingField
      || WarBoardData__GetEffect(v7, squareIndex, v10)
      || (Treasure = WarBoardData__GetTreasure(v7, squareIndex, v11)) != 0LL && !Treasure->fields._isUse_k__BackingField
      || WarBoardData__GetWall(v7, squareIndex, 0, v14) != 0LL;
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
  unsigned __int64 v11; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_4389A42 & 1) == 0 )
  {
    this = (WarBoardControlUiDataComponent_o *)sub_B775C4(&SimpleAnimation_State_TypeInfo);
    byte_4389A42 = 1;
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
    sub_B7769C(IsNullOrEmpty, v8);
  klass = IsNullOrEmpty->klass;
  v10 = IsNullOrEmpty;
  if ( *(_WORD *)&IsNullOrEmpty->klass->_2.bitflags1 )
  {
    v11 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v11;
      p_offset += 2;
      if ( v11 >= *(unsigned __int16 *)&IsNullOrEmpty->klass->_2.bitflags1 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5].method;
  }
  else
  {
LABEL_11:
    p_method = sub_B0F4C0(IsNullOrEmpty, SimpleAnimation_State_TypeInfo, 5LL);
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
  const MethodInfo *v10; // x3
  UnityEngine_Object_o *pieceComponent; // x20
  struct WarBoardPieceBaseComponent_o *v12; // x8
  struct WarBoardPieceData_o *pieceData; // x21
  System_Int32_array *v14; // x20
  unsigned int v15; // w8
  __int64 v16; // x8
  WarBoardData_o *v17; // x19
  const MethodInfo *v18; // x3
  __int64 v19; // x0

  if ( (byte_4389A44 & 1) == 0 )
  {
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4389A44 = 1;
  }
  compType = this->fields.compType;
  if ( !compType )
  {
    squareComponent = (UnityEngine_Object_o *)this->fields.squareComponent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(squareComponent, 0LL, 0LL) )
    {
      Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        v7 = *(WarBoardData_o **)(Instance + 432);
        Instance = WarBoardControlUiDataComponent__get_SquareIndex(this, v6);
        listUiDataKey = this->fields.listUiDataKey;
        if ( listUiDataKey )
        {
          v9 = Instance;
          Instance = (__int64)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)listUiDataKey,
                                (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_string__ToArray__);
          if ( v7 )
          {
            WarBoardData__UpdateUiData(v7, v9, (System_String_array *)Instance, v10);
            return;
          }
        }
      }
LABEL_29:
      sub_B7769C(Instance, v6);
    }
    compType = this->fields.compType;
  }
  if ( compType == 1 )
  {
    pieceComponent = (UnityEngine_Object_o *)this->fields.pieceComponent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Instance = UnityEngine_Object__op_Inequality(pieceComponent, 0LL, 0LL);
    if ( (Instance & 1) != 0 )
    {
      v12 = this->fields.pieceComponent;
      if ( !v12 )
        goto LABEL_29;
      pieceData = v12->fields.pieceData;
      Instance = sub_B775DC(int___TypeInfo, 3LL);
      if ( !pieceData )
        goto LABEL_29;
      v14 = (System_Int32_array *)Instance;
      if ( !Instance )
        goto LABEL_29;
      v15 = *(_DWORD *)(Instance + 24);
      if ( !v15
        || (*(_DWORD *)(Instance + 32) = pieceData->fields._forceId_k__BackingField, v15 == 1)
        || (*(_DWORD *)(Instance + 36) = pieceData->fields._groupId_k__BackingField, v15 <= 2) )
      {
        v19 = sub_B776C8(Instance);
        sub_B77668(v19, 0LL);
      }
      *(_DWORD *)(Instance + 40) = pieceData->fields._index_k__BackingField;
      Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !Instance )
        goto LABEL_29;
      v16 = Instance;
      Instance = (__int64)this->fields.listUiDataKey;
      if ( !Instance )
        goto LABEL_29;
      v17 = *(WarBoardData_o **)(v16 + 432);
      Instance = (__int64)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)Instance,
                            (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_string__ToArray__);
      if ( !v17 )
        goto LABEL_29;
      WarBoardData__UpdateUiData_22716716(v17, v14, (System_String_array *)Instance, v18);
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
      sub_B7769C(0LL, v6);
    SimpleAnimation__Play_16815192(animation, AnimationStateName, 0LL);
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
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_4389A40 & 1) == 0 )
  {
    sub_B775C4(&WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_TypeInfo);
    byte_4389A40 = 1;
  }
  v7 = sub_B77694(WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_TypeInfo);
  WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42___ctor(
    (WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B7769C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = animation;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)animation, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 48) = uiData;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 48), (System_Int32_array **)uiData, v22, v23, v24, v25, v26, v27);
  return (System_Collections_IEnumerator_o *)v7;
}


System_Collections_IEnumerator_o *__fastcall WarBoardControlUiDataComponent__PlayStartUiDataAnim(
        WarBoardControlUiDataComponent_o *this,
        SimpleAnimation_o *animation,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4389A3F & 1) == 0 )
  {
    sub_B775C4(&WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_TypeInfo);
    byte_4389A3F = 1;
  }
  v5 = sub_B77694(WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_TypeInfo);
  WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41___ctor(
    (WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B7769C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = animation;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)animation, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall WarBoardControlUiDataComponent__ResumeUiData(
        WarBoardControlUiDataComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *listUiDataKey; // x0
  WarBoardServantPieceBuffTurnComponent_o *v4; // x9
  struct WarBoardPieceBaseComponent_o *v5; // x10
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **current; // x1
  System_String_o **v16; // x20
  struct System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__o *listUiData; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v18; // x23
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  WarBoardControlUiDataComponent_UiData_o *v22; // x21
  System_String_o *v23; // x20
  WarBoardControlUiDataComponent_c *v24; // x0
  WarBoardServantPieceBuffTurnComponent_o *v25; // x0
  __int64 v26; // x1
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x22
  WarBoardServantPieceBuffTurnComponent_o *v28; // x20
  struct UnityEngine_GameObject_array *animationObjects; // x23
  int max_length; // w8
  int i; // w22
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  const MethodInfo *v34; // x3
  __int64 v35; // x0
  WarBoardServantPieceBuffTurnComponent_o *v36; // [xsp+8h] [xbp-98h]
  struct WarBoardPieceBaseComponent_o *v37; // [xsp+10h] [xbp-90h]
  struct WarBoardPieceBaseComponent_o *v38; // [xsp+10h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4389A37 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_System_Predicate_WarBoardControlUiDataComponent_UiData___ctor__);
    sub_B775C4(&System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo);
    sub_B775C4(&Method_WarBoardControlUiDataComponent___c__DisplayClass26_0__ResumeUiData_b__0__);
    sub_B775C4(&WarBoardControlUiDataComponent___c__DisplayClass26_0_TypeInfo);
    sub_B775C4(&WarBoardControlUiDataComponent_TypeInfo);
    sub_B775C4(&StringLiteral_20737/*"loop"*/);
    byte_4389A37 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  listUiDataKey = this->fields.listUiDataKey;
  if ( !listUiDataKey )
    sub_B7769C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v39,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)listUiDataKey,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v4 = 0LL;
  v5 = 0LL;
  v40 = v39;
LABEL_5:
  v36 = v4;
  v37 = v5;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v40,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    v6 = sub_B77694(WarBoardControlUiDataComponent___c__DisplayClass26_0_TypeInfo);
    WarBoardControlUiDataComponent___c__DisplayClass26_0___ctor(
      (WarBoardControlUiDataComponent___c__DisplayClass26_0_o *)v6,
      0LL);
    if ( !v6 )
      sub_B7769C(v7, v8);
    current = (System_Int32_array **)v40.fields.current;
    *(_QWORD *)(v6 + 16) = v40.fields.current;
    v16 = (System_String_o **)(v6 + 16);
    sub_B77560((BattleServantConfConponent_o *)(v6 + 16), current, v9, v10, v11, v12, v13, v14);
    listUiData = this->fields.listUiData;
    v18 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v18,
      (Il2CppObject *)v6,
      Method_WarBoardControlUiDataComponent___c__DisplayClass26_0__ResumeUiData_b__0__,
      (const MethodInfo_2C3248C *)Method_System_Predicate_WarBoardControlUiDataComponent_UiData___ctor__);
    if ( !listUiData )
      sub_B7769C(v19, v20);
    v22 = (WarBoardControlUiDataComponent_UiData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                       (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)listUiData,
                                                       (System_Predicate_T__o *)v18,
                                                       (const MethodInfo_3053B58 *)Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__);
    if ( v22 )
    {
      WarBoardControlUiDataComponent__SetUiDataTurnObjects(this, 1, v22, v21);
      v23 = *v16;
      v24 = WarBoardControlUiDataComponent_TypeInfo;
      if ( (BYTE3(WarBoardControlUiDataComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
        v24 = WarBoardControlUiDataComponent_TypeInfo;
      }
      v25 = (WarBoardServantPieceBuffTurnComponent_o *)System_String__op_Equality(
                                                         v23,
                                                         v24->static_fields->UI_DATA_KEY_BARRIER,
                                                         0LL);
      if ( ((unsigned __int8)v25 & 1) != 0
        && ((pieceComponent = this->fields.pieceComponent) != 0LL
          ? (v25 = (WarBoardServantPieceBuffTurnComponent_o *)this->fields.pieceComponent)
          : (v25 = (WarBoardServantPieceBuffTurnComponent_o *)v37),
            pieceComponent) )
      {
        if ( !v25 )
          sub_B7769C(0LL, v26);
        v25 = (WarBoardServantPieceBuffTurnComponent_o *)((__int64 (__fastcall *)(WarBoardServantPieceBuffTurnComponent_o *, const char *))v25->klass[1]._1.gc_desc)(
                                                           v25,
                                                           v25->klass[1]._1.name);
        v28 = v25;
        if ( !v25 )
          v25 = v36;
        if ( v28 )
        {
          if ( !v25 )
            sub_B7769C(0LL, v26);
          WarBoardServantPieceBuffTurnComponent__UpdateDisp(v25, 1, 0LL);
        }
        else
        {
          v28 = v36;
        }
      }
      else
      {
        v28 = v36;
        pieceComponent = v37;
      }
      animationObjects = v22->fields.animationObjects;
      if ( !animationObjects )
        sub_B7769C(v25, v26);
      max_length = animationObjects->max_length;
      v4 = v28;
      v5 = pieceComponent;
      if ( max_length >= 1 )
      {
        v38 = pieceComponent;
        for ( i = 0; i < max_length; ++i )
        {
          if ( i >= (unsigned int)max_length )
          {
            v35 = sub_B776C8(v25);
            sub_B77668(v35, 0LL);
          }
          v32 = animationObjects->m_Items[i];
          if ( !v32 )
            sub_B7769C(0LL, v26);
          Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              v32,
                                                              (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v25 = (WarBoardServantPieceBuffTurnComponent_o *)UnityEngine_Object__op_Equality(
                                                             Component_srcLineSprite,
                                                             0LL,
                                                             0LL);
          if ( ((unsigned __int8)v25 & 1) == 0 )
            v25 = (WarBoardServantPieceBuffTurnComponent_o *)WarBoardControlUiDataComponent__PlayAnimation(
                                                               this,
                                                               (SimpleAnimation_o *)Component_srcLineSprite,
                                                               (System_String_o *)StringLiteral_20737/*"loop"*/,
                                                               v34);
          max_length = animationObjects->max_length;
        }
        v5 = v38;
        v4 = v28;
      }
      goto LABEL_5;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v40,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


void __fastcall WarBoardControlUiDataComponent__ResumeUiDataAll(const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  const MethodInfo *v2; // x1
  __int64 v3; // x8
  __int64 v4; // x20
  int v5; // w8
  unsigned int v6; // w21
  __int64 v7; // x8
  int32_t v8; // w19
  __int64 v9; // x0

  if ( (byte_4389A34 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B775C4(&WarBoardControlUiDataComponent_TypeInfo);
    byte_4389A34 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  v3 = *(_QWORD *)&Instance[4].fields.m_CachedPtr;
  if ( !v3 )
    goto LABEL_15;
  v4 = *(_QWORD *)(v3 + 56);
  if ( !v4 )
    goto LABEL_15;
  v5 = *(_DWORD *)(v4 + 24);
  if ( v5 >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= v5 )
      {
        v9 = sub_B776C8(Instance);
        sub_B77668(v9, 0LL);
      }
      v7 = *(_QWORD *)(v4 + 8LL * (int)v6 + 32);
      if ( !v7 )
        break;
      v8 = *(_DWORD *)(v7 + 16);
      if ( (BYTE3(WarBoardControlUiDataComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
      }
      WarBoardControlUiDataComponent__ResumeUiDataAll_22707764(v8, v2);
      v5 = *(_DWORD *)(v4 + 24);
      if ( (int)++v6 >= v5 )
        return;
    }
LABEL_15:
    sub_B7769C(Instance, v2);
  }
}


void __fastcall WarBoardControlUiDataComponent__ResumeUiDataAll_22707764(int32_t squareIndex, const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  struct WarBoardStageEntity_o *stageEntity; // x8
  WarBoardControlUiDataComponent_o *boardMessage; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  struct WarBoardPieceData_array *pieces; // x8
  WarBoardControlUiDataComponent_o *v11; // x0

  if ( (byte_4389A35 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B775C4(&WarBoardControlUiDataComponent_TypeInfo);
    byte_4389A35 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList;
  if ( !Instance )
    goto LABEL_19;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_22695252(Instance, squareIndex, v5);
  if ( Instance )
  {
    stageEntity = Instance[1].fields.stageEntity;
    if ( !stageEntity )
      goto LABEL_19;
    boardMessage = (WarBoardControlUiDataComponent_o *)stageEntity[2].fields.boardMessage;
    if ( boardMessage )
      WarBoardControlUiDataComponent__ResumeUiData(boardMessage, v4);
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList;
  if ( !Instance )
    goto LABEL_19;
  Instance = (WarBoardData_o *)WarBoardData__GetSquare(Instance, squareIndex, v8);
  if ( !Instance )
    goto LABEL_15;
  pieces = Instance->fields.pieces;
  if ( !pieces )
LABEL_19:
    sub_B7769C(Instance, v4);
  v11 = (WarBoardControlUiDataComponent_o *)pieces->m_Items[18];
  if ( v11 )
    WarBoardControlUiDataComponent__ResumeUiData(v11, v4);
LABEL_15:
  if ( (BYTE3(WarBoardControlUiDataComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  }
  WarBoardControlUiDataComponent__UpdateAdjustSituationAll_22707280(squareIndex, 1, v9);
}


void __fastcall WarBoardControlUiDataComponent__SetUiData(
        WarBoardControlUiDataComponent_o *this,
        System_String_o *key,
        bool isDisp,
        const MethodInfo *method)
{
  _BOOL4 v4; // w19
  __int64 v7; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *listUiDataKey; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  WarBoardManager_TaskList_o **v16; // x22
  struct System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__o *listUiData; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v18; // x24
  peRenderTexture_ChangeLayerObject_o *v19; // x0
  WarBoardControlUiDataComponent_UiData_o *v20; // x21
  WarBoardManager_TaskList_o *v21; // x1
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x2
  int32_t SquareIndex; // w23
  System_String_o *v26; // x22
  WarBoardControlUiDataComponent_c *v27; // x0
  const MethodInfo *v28; // x1
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0
  WarBoardServantPieceBuffTurnComponent_o *v30; // x0
  struct UnityEngine_GameObject_array *animationObjects; // x23
  int max_length; // w8
  unsigned int v33; // w24
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x3
  System_Collections_IEnumerator_o *started; // x0
  __int64 v38; // x0

  v4 = isDisp;
  if ( (byte_4389A36 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_B775C4(&Method_System_Collections_Generic_List_string__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__Contains__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__Remove__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_System_Predicate_WarBoardControlUiDataComponent_UiData___ctor__);
    sub_B775C4(&System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo);
    sub_B775C4(&Method_WarBoardControlUiDataComponent___c__DisplayClass25_0__SetUiData_b__0__);
    sub_B775C4(&WarBoardControlUiDataComponent___c__DisplayClass25_0_TypeInfo);
    sub_B775C4(&WarBoardControlUiDataComponent_TypeInfo);
    byte_4389A36 = 1;
  }
  v7 = sub_B77694(WarBoardControlUiDataComponent___c__DisplayClass25_0_TypeInfo);
  WarBoardControlUiDataComponent___c__DisplayClass25_0___ctor(
    (WarBoardControlUiDataComponent___c__DisplayClass25_0_o *)v7,
    0LL);
  if ( !v7 )
    goto LABEL_37;
  *(_QWORD *)(v7 + 16) = key;
  v16 = (WarBoardManager_TaskList_o **)(v7 + 16);
  sub_B77560((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)key, v10, v11, v12, v13, v14, v15);
  listUiData = this->fields.listUiData;
  v18 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v18,
    (Il2CppObject *)v7,
    Method_WarBoardControlUiDataComponent___c__DisplayClass25_0__SetUiData_b__0__,
    (const MethodInfo_2C3248C *)Method_System_Predicate_WarBoardControlUiDataComponent_UiData___ctor__);
  if ( !listUiData )
    goto LABEL_37;
  v19 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)listUiData,
          (System_Predicate_T__o *)v18,
          (const MethodInfo_3053B58 *)Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__);
  if ( v19 )
  {
    v20 = (WarBoardControlUiDataComponent_UiData_o *)v19;
    listUiDataKey = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.listUiDataKey;
    if ( !listUiDataKey )
      goto LABEL_37;
    if ( ((System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
             (System_Collections_Generic_List_WarBoardManager_TaskList__o *)listUiDataKey,
             *v16,
             (const MethodInfo_30536E8 *)Method_System_Collections_Generic_List_string__Contains__) ^ v4) & 1) != 0 )
    {
      listUiDataKey = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.listUiDataKey;
      if ( !listUiDataKey )
        goto LABEL_37;
      v21 = *v16;
      if ( v4 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          listUiDataKey,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
        WarBoardControlUiDataComponent__SetUiDataTurnObjects(this, 1, v20, v22);
        SquareIndex = WarBoardControlUiDataComponent__get_SquareIndex(this, v23);
        if ( (BYTE3(WarBoardControlUiDataComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
        }
        WarBoardControlUiDataComponent__UpdateAdjustSituationAll_22707280(SquareIndex, 1, v24);
      }
      else
      {
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)listUiDataKey,
          v21,
          (const MethodInfo_3054C44 *)Method_System_Collections_Generic_List_string__Remove__);
      }
      v26 = (System_String_o *)*v16;
      v27 = WarBoardControlUiDataComponent_TypeInfo;
      if ( (BYTE3(WarBoardControlUiDataComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
        v27 = WarBoardControlUiDataComponent_TypeInfo;
      }
      if ( System_String__op_Equality(v26, v27->static_fields->UI_DATA_KEY_BARRIER, 0LL) )
      {
        pieceComponent = this->fields.pieceComponent;
        if ( pieceComponent )
        {
          v30 = (WarBoardServantPieceBuffTurnComponent_o *)((__int64 (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))pieceComponent->klass->vtable._4_get_BuffTrunNotice.method)(
                                                             pieceComponent,
                                                             pieceComponent->klass->vtable._5_Initialize.methodPtr);
          if ( v30 )
            WarBoardServantPieceBuffTurnComponent__UpdateDisp(v30, 1, 0LL);
        }
      }
      WarBoardControlUiDataComponent__LocalSave(this, v28);
      animationObjects = v20->fields.animationObjects;
      if ( !animationObjects )
        goto LABEL_37;
      max_length = animationObjects->max_length;
      if ( max_length >= 1 )
      {
        v33 = 0;
        while ( 1 )
        {
          if ( v33 >= max_length )
          {
            v38 = sub_B776C8(listUiDataKey);
            sub_B77668(v38, 0LL);
          }
          listUiDataKey = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)animationObjects->m_Items[v33];
          if ( !listUiDataKey )
            break;
          Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              (UnityEngine_GameObject_o *)listUiDataKey,
                                                              (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          listUiDataKey = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
          if ( ((unsigned __int8)listUiDataKey & 1) == 0 )
          {
            if ( v4 )
              started = WarBoardControlUiDataComponent__PlayStartUiDataAnim(
                          this,
                          (SimpleAnimation_o *)Component_srcLineSprite,
                          v35);
            else
              started = WarBoardControlUiDataComponent__PlayEndUiDataAnim(
                          this,
                          (SimpleAnimation_o *)Component_srcLineSprite,
                          v20,
                          v36);
            listUiDataKey = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UnityEngine_MonoBehaviour__StartCoroutine_36304832((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
          }
          max_length = animationObjects->max_length;
          if ( (int)++v33 >= max_length )
            return;
        }
LABEL_37:
        sub_B7769C(listUiDataKey, v9);
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

  if ( (byte_4389A38 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__Clear__);
    byte_4389A38 = 1;
  }
  listUiDataKey = this->fields.listUiDataKey;
  if ( !listUiDataKey
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)listUiDataKey,
          (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_string__Clear__),
        (listUiDataKey = this->fields.listUiDataKey) == 0LL) )
  {
    sub_B7769C(listUiDataKey, keys);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)listUiDataKey,
    (System_Collections_Generic_IEnumerable_T__o *)keys,
    (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_string__AddRange__);
}


void __fastcall WarBoardControlUiDataComponent__SetUiDataOnBattle(
        WarBoardControlUiDataComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *onEnterBattleTurnOffObjects; // x19
  int max_length; // w8
  unsigned int v4; // w20
  __int64 v5; // x0

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
      {
        v5 = sub_B776C8(this);
        sub_B77668(v5, 0LL);
      }
      this = (WarBoardControlUiDataComponent_o *)onEnterBattleTurnOffObjects->m_Items[v4];
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      max_length = onEnterBattleTurnOffObjects->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_9:
    sub_B7769C(this, method);
  }
}


void __fastcall WarBoardControlUiDataComponent__SetUiDataOnBattleAll(const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  const MethodInfo *v2; // x1
  __int64 v3; // x8
  __int64 v4; // x20
  int v5; // w8
  unsigned int v6; // w21
  __int64 v7; // x8
  int32_t v8; // w19
  __int64 v9; // x0

  if ( (byte_4389A30 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B775C4(&WarBoardControlUiDataComponent_TypeInfo);
    byte_4389A30 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  v3 = *(_QWORD *)&Instance[4].fields.m_CachedPtr;
  if ( !v3 )
    goto LABEL_15;
  v4 = *(_QWORD *)(v3 + 56);
  if ( !v4 )
    goto LABEL_15;
  v5 = *(_DWORD *)(v4 + 24);
  if ( v5 >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= v5 )
      {
        v9 = sub_B776C8(Instance);
        sub_B77668(v9, 0LL);
      }
      v7 = *(_QWORD *)(v4 + 8LL * (int)v6 + 32);
      if ( !v7 )
        break;
      v8 = *(_DWORD *)(v7 + 16);
      if ( (BYTE3(WarBoardControlUiDataComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
      }
      WarBoardControlUiDataComponent__SetUiDataOnBattleAll_22706548(v8, v2);
      v5 = *(_DWORD *)(v4 + 24);
      if ( (int)++v6 >= v5 )
        return;
    }
LABEL_15:
    sub_B7769C(Instance, v2);
  }
}


void __fastcall WarBoardControlUiDataComponent__SetUiDataOnBattleAll_22706548(
        int32_t squareIndex,
        const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  struct WarBoardStageEntity_o *stageEntity; // x8
  WarBoardControlUiDataComponent_o *boardMessage; // x0
  const MethodInfo *v8; // x2
  struct WarBoardPieceData_array *pieces; // x8
  WarBoardControlUiDataComponent_o *v10; // x0

  if ( (byte_4389A31 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4389A31 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList;
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_22695252(Instance, squareIndex, v5);
  if ( Instance )
  {
    stageEntity = Instance[1].fields.stageEntity;
    if ( !stageEntity )
      goto LABEL_16;
    boardMessage = (WarBoardControlUiDataComponent_o *)stageEntity[2].fields.boardMessage;
    if ( boardMessage )
      WarBoardControlUiDataComponent__SetUiDataOnBattle(boardMessage, v4);
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList;
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)WarBoardData__GetSquare(Instance, squareIndex, v8);
  if ( !Instance )
    return;
  pieces = Instance->fields.pieces;
  if ( !pieces )
LABEL_16:
    sub_B7769C(Instance, v4);
  v10 = (WarBoardControlUiDataComponent_o *)pieces->m_Items[18];
  if ( v10 )
    WarBoardControlUiDataComponent__SetUiDataOnBattle(v10, v4);
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
  __int64 v15; // x0

  v6 = this;
  if ( (byte_4389A3E & 1) == 0 )
  {
    this = (WarBoardControlUiDataComponent_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4389A3E = 1;
  }
  if ( !uiData )
    goto LABEL_24;
  turnOnObjects = uiData->fields.turnOnObjects;
  if ( !turnOnObjects )
    goto LABEL_24;
  max_length = turnOnObjects->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( v9 < max_length )
    {
      this = (WarBoardControlUiDataComponent_o *)turnOnObjects->m_Items[v9];
      if ( !this )
        goto LABEL_24;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isDisp, 0LL);
      max_length = turnOnObjects->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_10;
    }
LABEL_23:
    v15 = sub_B776C8(this);
    sub_B77668(v15, 0LL);
  }
LABEL_10:
  turnOffObjects = uiData->fields.turnOffObjects;
  if ( !turnOffObjects )
    goto LABEL_24;
  v11 = turnOffObjects->max_length;
  v12 = !isDisp;
  if ( v11 >= 1 )
  {
    v13 = 0;
    while ( v13 < v11 )
    {
      this = (WarBoardControlUiDataComponent_o *)turnOffObjects->m_Items[v13];
      if ( !this )
        goto LABEL_24;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v12, 0LL);
      v11 = turnOffObjects->max_length;
      if ( (int)++v13 >= v11 )
        goto LABEL_16;
    }
    goto LABEL_23;
  }
LABEL_16:
  squareComponent = (UnityEngine_Object_o *)v6->fields.squareComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(squareComponent, 0LL, 0LL) )
  {
    this = (WarBoardControlUiDataComponent_o *)v6->fields.squareComponent;
    if ( this )
    {
      WarBoardSquareComponent__SetMovePoint((WarBoardSquareComponent_o *)this, v12, 0LL);
      return;
    }
LABEL_24:
    sub_B7769C(this, isDisp);
  }
}


System_Collections_IEnumerator_o *__fastcall WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation(
        WarBoardControlUiDataComponent_o *this,
        bool isDisp,
        UnityEngine_GameObject_o *targetObject,
        bool immediatelyWhenOff,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_4389A3C & 1) == 0 )
  {
    sub_B775C4(&WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_TypeInfo);
    byte_4389A3C = 1;
  }
  v9 = sub_B77694(WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_TypeInfo);
  WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37___ctor(
    (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)v9,
    0,
    0LL);
  if ( !v9 )
    sub_B7769C(v10, v11);
  *(_QWORD *)(v9 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_BYTE *)(v9 + 48) = isDisp;
  *(_QWORD *)(v9 + 40) = targetObject;
  sub_B77560(
    (BattleServantConfConponent_o *)(v9 + 40),
    (System_Int32_array **)targetObject,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  *(_BYTE *)(v9 + 49) = immediatelyWhenOff;
  return (System_Collections_IEnumerator_o *)v9;
}


System_Collections_IEnumerator_o *__fastcall WarBoardControlUiDataComponent__StartSyncAnimation(
        WarBoardControlUiDataComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4389A41 & 1) == 0 )
  {
    sub_B775C4(&WarBoardControlUiDataComponent__StartSyncAnimation_d__43_TypeInfo);
    byte_4389A41 = 1;
  }
  v5 = sub_B77694(WarBoardControlUiDataComponent__StartSyncAnimation_d__43_TypeInfo);
  WarBoardControlUiDataComponent__StartSyncAnimation_d__43___ctor(
    (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B7769C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = callback;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)callback, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall WarBoardControlUiDataComponent__SyncAnimation(
        WarBoardControlUiDataComponent_o *this,
        System_Action_o *syncCallback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *started; // x1

  started = WarBoardControlUiDataComponent__StartSyncAnimation(this, syncCallback, method);
  UnityEngine_MonoBehaviour__StartCoroutine_36304832((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
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
  __int64 v14; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  AdjustType = (UnityEngine_Transform_o *)WarBoardControlUiDataComponent__GetAdjustType(this, method);
  AdjustOffsetY = this->fields.AdjustOffsetY;
  if ( !AdjustOffsetY )
    goto LABEL_12;
  if ( (unsigned int)AdjustType >= AdjustOffsetY->max_length )
    goto LABEL_13;
  adjustObjects = this->fields.adjustObjects;
  if ( !adjustObjects )
LABEL_12:
    sub_B7769C(AdjustType, v4);
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
      v16.fields.x = x;
      v16.fields.y = v8;
      v16.fields.z = z;
      UnityEngine_Transform__set_localPosition(AdjustType, v16, 0LL);
      max_length = adjustObjects->max_length;
      if ( (int)++v9 >= max_length )
        return;
    }
LABEL_13:
    v14 = sub_B776C8(AdjustType);
    sub_B77668(v14, 0LL);
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
  __int64 v9; // x0

  v4 = squareIndexes;
  if ( (byte_4389A32 & 1) == 0 )
  {
    squareIndexes = (System_Int32_array *)sub_B775C4(&WarBoardControlUiDataComponent_TypeInfo);
    byte_4389A32 = 1;
  }
  if ( !v4 )
    sub_B7769C(squareIndexes, immediatelyWhenOff);
  v5 = *(_QWORD *)&v4->max_length;
  if ( (int)v5 >= 1 )
  {
    v6 = 0LL;
    v7 = immediatelyWhenOff;
    do
    {
      if ( v6 >= (unsigned int)v5 )
      {
        v9 = sub_B776C8(squareIndexes);
        sub_B77668(v9, 0LL);
      }
      v8 = v4->m_Items[v6 + 1];
      if ( (BYTE3(WarBoardControlUiDataComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
      }
      WarBoardControlUiDataComponent__UpdateAdjustSituationAll_22707280(v8, v7, method);
      LODWORD(v5) = v4->max_length;
      ++v6;
    }
    while ( (__int64)v6 < (int)v5 );
  }
}


void __fastcall WarBoardControlUiDataComponent__UpdateAdjustSituationAll_22707280(
        int32_t squareIndex,
        bool immediatelyWhenOff,
        const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2
  struct WarBoardStageEntity_o *stageEntity; // x8
  WarBoardControlUiDataComponent_o *boardMessage; // x0
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  struct WarBoardPieceData_array *pieces; // x8
  WarBoardControlUiDataComponent_o *v14; // x0

  if ( (byte_4389A33 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4389A33 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList;
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_22695252(Instance, squareIndex, v7);
  if ( Instance )
  {
    stageEntity = Instance[1].fields.stageEntity;
    if ( !stageEntity )
      goto LABEL_16;
    boardMessage = (WarBoardControlUiDataComponent_o *)stageEntity[2].fields.boardMessage;
    if ( boardMessage )
      WarBoardControlUiDataComponent__UpdateAdjustSituation(boardMessage, immediatelyWhenOff, v8);
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList;
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)WarBoardData__GetSquare(Instance, squareIndex, v11);
  if ( !Instance )
    return;
  pieces = Instance->fields.pieces;
  if ( !pieces )
LABEL_16:
    sub_B7769C(Instance, v6);
  v14 = (WarBoardControlUiDataComponent_o *)pieces->m_Items[18];
  if ( v14 )
    WarBoardControlUiDataComponent__UpdateAdjustSituation(v14, immediatelyWhenOff, v12);
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
  __int64 v16; // x0

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
      sub_B7769C(IsExistsOther, v8);
    v11 = *(_QWORD *)&onExistsOtherTurnOffObjects->max_length;
    if ( (int)v11 >= 1 )
    {
      v12 = 0LL;
      v13 = ((unsigned __int8)IsExistsOther ^ 1) & 1;
      v14 = immediatelyWhenOff;
      do
      {
        if ( v12 >= (unsigned int)v11 )
        {
          v16 = sub_B776C8(IsExistsOther);
          sub_B77668(v16, 0LL);
        }
        v15 = WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation(
                this,
                v13,
                onExistsOtherTurnOffObjects->m_Items[v12],
                v14,
                v9);
        IsExistsOther = UnityEngine_MonoBehaviour__StartCoroutine_36304832(
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
  WarBoardData_o *flagObjects; // x20
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2
  struct UnityEngine_GameObject_array *onEnterBattleTurnOffObjects; // x8
  char v9; // w21
  struct UnityEngine_GameObject_array *onOverlapObjects; // x22
  __int64 v11; // x8
  unsigned __int64 v12; // x23
  UnityEngine_GameObject_o *v13; // x20
  bool v14; // w1
  __int64 v15; // x0

  if ( (byte_4389A39 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4389A39 = 1;
  }
  if ( !this->fields.compType )
    return;
  Instance = (WarBoardControlUiDataComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  flagObjects = (WarBoardData_o *)Instance[3].fields.flagObjects;
  Instance = (WarBoardControlUiDataComponent_o *)WarBoardControlUiDataComponent__get_SquareIndex(this, v4);
  if ( !flagObjects )
    goto LABEL_22;
  Instance = (WarBoardControlUiDataComponent_o *)WarBoardData__GetSquare(flagObjects, (int32_t)Instance, v6);
  if ( !Instance )
    goto LABEL_10;
  onEnterBattleTurnOffObjects = Instance->fields.onEnterBattleTurnOffObjects;
  if ( !onEnterBattleTurnOffObjects )
    goto LABEL_22;
  Instance = (WarBoardControlUiDataComponent_o *)onEnterBattleTurnOffObjects->m_Items[18];
  if ( Instance )
  {
    Instance = (WarBoardControlUiDataComponent_o *)WarBoardControlUiDataComponent__IsDispOverlapObjects(Instance, v4);
    v9 = (unsigned __int8)Instance ^ 1;
  }
  else
  {
LABEL_10:
    v9 = 1;
  }
  onOverlapObjects = this->fields.onOverlapObjects;
  if ( !onOverlapObjects )
LABEL_22:
    sub_B7769C(Instance, v4);
  v11 = *(_QWORD *)&onOverlapObjects->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = 0LL;
    do
    {
      if ( v12 >= (unsigned int)v11 )
      {
        v15 = sub_B776C8(Instance);
        sub_B77668(v15, 0LL);
      }
      v13 = onOverlapObjects->m_Items[v12];
      Instance = (WarBoardControlUiDataComponent_o *)WarBoardControlUiDataComponent__CheckCorrectActiveObject(
                                                       this,
                                                       v13,
                                                       v7);
      if ( ((unsigned int)Instance & 0x80000000) != 0 )
      {
        if ( !v13 )
          goto LABEL_22;
        v14 = v9 & 1;
      }
      else
      {
        if ( !v13 )
          goto LABEL_22;
        v14 = ((_DWORD)Instance == 1) & v9;
      }
      UnityEngine_GameObject__SetActive(v13, v14, 0LL);
      LODWORD(v11) = onOverlapObjects->max_length;
      ++v12;
    }
    while ( (__int64)v12 < (int)v11 );
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

  if ( (byte_4389A2E & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4389A2E = 1;
  }
  pieceComponent = (UnityEngine_Object_o *)this->fields.pieceComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
    goto LABEL_19;
  }
  squareComponent = (UnityEngine_Object_o *)this->fields.squareComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
LABEL_19:
    sub_B7769C(v4, v5);
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
  WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *v2; // x19
  int32_t _1__state; // w8
  WarBoardControlUiDataComponent_o *_4__this; // x20
  WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o **p_animation; // x21
  System_Int32_array **v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_c *klass; // x8
  WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *v14; // x21
  unsigned __int64 v15; // x10
  int32_t *p_offset; // x11
  __int64 v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  BattleServantConfConponent_o *p__2__current; // x19
  bool result; // w0
  struct WarBoardControlUiDataComponent_UiData_o *uiData; // x8
  struct UnityEngine_GameObject_array *animationObjects; // x22
  int max_length; // w8
  unsigned int v29; // w23
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  int32_t SquareIndex; // w19
  __int64 v32; // x0

  v2 = this;
  if ( (byte_4388F41 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&SimpleAnimation_State_TypeInfo);
    sub_B775C4(&WarBoardControlUiDataComponent_TypeInfo);
    this = (WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *)sub_B775C4(&StringLiteral_18709/*"end"*/);
    byte_4388F41 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    p_animation = (WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o **)&v2->fields.animation;
    goto LABEL_9;
  }
  if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_38;
    p_animation = (WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o **)&v2->fields.animation;
    v6 = (System_Int32_array **)WarBoardControlUiDataComponent__PlayAnimation(
                                  _4__this,
                                  v2->fields.animation,
                                  (System_String_o *)StringLiteral_18709/*"end"*/,
                                  0LL);
    v2->fields._stateName_5__2 = (struct System_String_o *)v6;
    sub_B77560((BattleServantConfConponent_o *)&v2->fields._stateName_5__2, v6, v7, v8, v9, v10, v11, v12);
    this = (WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *)System_String__IsNullOrEmpty(
                                                                          v2->fields._stateName_5__2,
                                                                          0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
LABEL_19:
      uiData = v2->fields.uiData;
      if ( !uiData )
        goto LABEL_38;
      animationObjects = uiData->fields.animationObjects;
      if ( !animationObjects )
        goto LABEL_38;
      max_length = animationObjects->max_length;
      if ( max_length >= 1 )
      {
        v29 = 0;
        while ( 1 )
        {
          if ( v29 >= max_length )
          {
            v32 = sub_B776C8(this);
            sub_B77668(v32, 0LL);
          }
          this = (WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *)animationObjects->m_Items[v29];
          if ( !this )
            break;
          Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              (UnityEngine_GameObject_o *)this,
                                                              (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          this = (WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *)UnityEngine_Object__op_Equality(
                                                                                Component_srcLineSprite,
                                                                                0LL,
                                                                                0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !_4__this )
              break;
            this = (WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *)WarBoardControlUiDataComponent__IsPlayingAnimation(
                                                                                  _4__this,
                                                                                  (SimpleAnimation_o *)Component_srcLineSprite,
                                                                                  (System_String_o *)StringLiteral_18709/*"end"*/,
                                                                                  0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
              return 0;
          }
          max_length = animationObjects->max_length;
          if ( (int)++v29 >= max_length )
            goto LABEL_32;
        }
LABEL_38:
        sub_B7769C(this, method);
      }
LABEL_32:
      if ( !_4__this )
        goto LABEL_38;
      WarBoardControlUiDataComponent__SetUiDataTurnObjects(_4__this, 0, v2->fields.uiData, 0LL);
      SquareIndex = WarBoardControlUiDataComponent__get_SquareIndex(_4__this, 0LL);
      if ( (BYTE3(WarBoardControlUiDataComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
      }
      WarBoardControlUiDataComponent__UpdateAdjustSituationAll_22707280(SquareIndex, 0, 0LL);
      return 0;
    }
LABEL_9:
    this = *p_animation;
    if ( !*p_animation )
      goto LABEL_38;
    this = (WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *)SimpleAnimation__GetState(
                                                                          (SimpleAnimation_o *)this,
                                                                          v2->fields._stateName_5__2,
                                                                          0LL);
    if ( !this )
      goto LABEL_38;
    klass = this->klass;
    v14 = this;
    if ( *(_WORD *)&this->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v15;
        p_offset += 4;
        if ( v15 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
          goto LABEL_15;
      }
      v17 = (__int64)(&klass->vtable._5_System_IDisposable_Dispose.method + 2 * *p_offset);
    }
    else
    {
LABEL_15:
      v17 = sub_B0F4C0(this, SimpleAnimation_State_TypeInfo, 5LL);
    }
    if ( (*(float (__fastcall **)(WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *, _QWORD))v17)(
           v14,
           *(_QWORD *)(v17 + 8)) < 1.0 )
    {
      v2->fields.__2__current = 0LL;
      p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
      sub_B77560(p__2__current, 0LL, v18, v19, v20, v21, v22, v23);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
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

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
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
  WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *v2; // x19
  int32_t _1__state; // w8
  WarBoardControlUiDataComponent_o *_4__this; // x20
  WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o **p_animation; // x21
  System_Int32_array **v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_c *klass; // x8
  WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *v14; // x21
  unsigned __int64 v15; // x10
  int32_t *p_offset; // x11
  __int64 v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  BattleServantConfConponent_o *p__2__current; // x19
  bool result; // w0

  v2 = this;
  if ( (byte_4388F42 & 1) == 0 )
  {
    sub_B775C4(&SimpleAnimation_State_TypeInfo);
    sub_B775C4(&StringLiteral_22739/*"start"*/);
    this = (WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *)sub_B775C4(&StringLiteral_20737/*"loop"*/);
    byte_4388F42 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    p_animation = (WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o **)&v2->fields.animation;
    goto LABEL_9;
  }
  if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_22;
    p_animation = (WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o **)&v2->fields.animation;
    v6 = (System_Int32_array **)WarBoardControlUiDataComponent__PlayAnimation(
                                  _4__this,
                                  v2->fields.animation,
                                  (System_String_o *)StringLiteral_22739/*"start"*/,
                                  0LL);
    v2->fields._stateName_5__2 = (struct System_String_o *)v6;
    sub_B77560((BattleServantConfConponent_o *)&v2->fields._stateName_5__2, v6, v7, v8, v9, v10, v11, v12);
    if ( System_String__IsNullOrEmpty(v2->fields._stateName_5__2, 0LL) )
    {
LABEL_20:
      WarBoardControlUiDataComponent__PlayAnimation(
        _4__this,
        v2->fields.animation,
        (System_String_o *)StringLiteral_20737/*"loop"*/,
        0LL);
      return 0;
    }
LABEL_9:
    this = *p_animation;
    if ( *p_animation )
    {
      this = (WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *)SimpleAnimation__GetState(
                                                                              (SimpleAnimation_o *)this,
                                                                              v2->fields._stateName_5__2,
                                                                              0LL);
      if ( this )
      {
        klass = this->klass;
        v14 = this;
        if ( *(_WORD *)&this->klass->_2.bitflags1 )
        {
          v15 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v15;
            p_offset += 4;
            if ( v15 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
              goto LABEL_15;
          }
          v17 = (__int64)(&klass->vtable._5_System_IDisposable_Dispose.method + 2 * *p_offset);
        }
        else
        {
LABEL_15:
          v17 = sub_B0F4C0(this, SimpleAnimation_State_TypeInfo, 5LL);
        }
        if ( (*(float (__fastcall **)(WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *, _QWORD))v17)(
               v14,
               *(_QWORD *)(v17 + 8)) < 1.0 )
        {
          v2->fields.__2__current = 0LL;
          p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
          sub_B77560(p__2__current, 0LL, v18, v19, v20, v21, v22, v23);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
          return result;
        }
        if ( _4__this )
          goto LABEL_20;
      }
    }
LABEL_22:
    sub_B7769C(this, method);
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

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
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
  WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *v2; // x19
  int32_t _1__state; // w8
  WarBoardControlUiDataComponent_o *_4__this; // x20
  int32_t v5; // w0
  System_Int32_array **Component_srcLineSprite; // x0
  SimpleAnimation_o **p_simpleAnimation_5__2; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  bool *p_isDisp; // x23
  SimpleAnimation_o *v15; // x22
  SimpleAnimation_o *v16; // x22
  struct UnityEngine_GameObject_o *targetObject; // x8
  bool v18; // w1
  WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_c *klass; // x8
  WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *v20; // x21
  unsigned __int64 v21; // x10
  int32_t *p_offset; // x11
  __int64 v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  BattleServantConfConponent_o *p__2__current; // x19
  bool result; // w0
  __int64 *v32; // x8
  System_Int32_array **v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  v2 = this;
  if ( (byte_4388F43 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&SimpleAnimation_State_TypeInfo);
    sub_B775C4(&StringLiteral_22739/*"start"*/);
    sub_B775C4(&StringLiteral_18709/*"end"*/);
    this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)sub_B775C4(&StringLiteral_20737/*"loop"*/);
    byte_4388F43 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    p_simpleAnimation_5__2 = &v2->fields._simpleAnimation_5__2;
    goto LABEL_31;
  }
  if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_59;
    v5 = WarBoardControlUiDataComponent__CheckCorrectActiveObject(_4__this, v2->fields.targetObject, 0LL);
    if ( (v5 & 0x80000000) == 0 )
      v2->fields.isDisp = v5 == 1 && v2->fields.isDisp;
    this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)v2->fields.targetObject;
    if ( !this )
      goto LABEL_59;
    this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)UnityEngine_GameObject__get_transform(
                                                                                        (UnityEngine_GameObject_o *)this,
                                                                                        0LL);
    if ( !this )
      goto LABEL_59;
    this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)UnityEngine_Transform__get_parent(
                                                                                        (UnityEngine_Transform_o *)this,
                                                                                        0LL);
    if ( !this )
      goto LABEL_59;
    this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)UnityEngine_Component__get_gameObject(
                                                                                        (UnityEngine_Component_o *)this,
                                                                                        0LL);
    if ( !this )
      goto LABEL_59;
    if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)this, 0LL) )
    {
      this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)v2->fields.targetObject;
      if ( !this )
        goto LABEL_59;
      Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         (UnityEngine_GameObject_o *)this,
                                                         (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
      v2->fields._simpleAnimation_5__2 = (struct SimpleAnimation_o *)Component_srcLineSprite;
      p_simpleAnimation_5__2 = &v2->fields._simpleAnimation_5__2;
      sub_B77560(
        (BattleServantConfConponent_o *)&v2->fields._simpleAnimation_5__2,
        Component_srcLineSprite,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      p_isDisp = &v2->fields.isDisp;
      if ( v2->fields.isDisp )
      {
        this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)v2->fields.targetObject;
        if ( !this )
          goto LABEL_59;
        if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)this, 0LL) )
        {
          v15 = *p_simpleAnimation_5__2;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL)
            && (WarBoardControlUiDataComponent__IsPlayingAnimation(
                  _4__this,
                  *p_simpleAnimation_5__2,
                  (System_String_o *)StringLiteral_22739/*"start"*/,
                  0LL)
             || WarBoardControlUiDataComponent__IsPlayingAnimation(
                  _4__this,
                  *p_simpleAnimation_5__2,
                  (System_String_o *)StringLiteral_20737/*"loop"*/,
                  0LL)) )
          {
            return 0;
          }
        }
        if ( *p_isDisp )
          goto LABEL_24;
      }
      this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)v2->fields.targetObject;
      if ( !this )
        goto LABEL_59;
      if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)this, 0LL) )
      {
        if ( !v2->fields.isDisp && v2->fields.immediatelyWhenOff )
          goto LABEL_49;
LABEL_24:
        v16 = *p_simpleAnimation_5__2;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)UnityEngine_Object__op_Equality(
                                                                                            (UnityEngine_Object_o *)v16,
                                                                                            0LL,
                                                                                            0LL);
        targetObject = v2->fields.targetObject;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( targetObject )
          {
            v18 = *p_isDisp;
            this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)v2->fields.targetObject;
LABEL_51:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v18, 0LL);
            return 0;
          }
          goto LABEL_59;
        }
        if ( !targetObject )
          goto LABEL_59;
        UnityEngine_GameObject__SetActive(v2->fields.targetObject, 1, 0LL);
        if ( v2->fields.isDisp )
          v32 = &StringLiteral_22739/*"start"*/;
        else
          v32 = &StringLiteral_18709/*"end"*/;
        v33 = (System_Int32_array **)WarBoardControlUiDataComponent__PlayAnimation(
                                       _4__this,
                                       v2->fields._simpleAnimation_5__2,
                                       (System_String_o *)*v32,
                                       0LL);
        v2->fields._stateName_5__3 = (struct System_String_o *)v33;
        sub_B77560((BattleServantConfConponent_o *)&v2->fields._stateName_5__3, v33, v34, v35, v36, v37, v38, v39);
        this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)System_String__IsNullOrEmpty(
                                                                                            v2->fields._stateName_5__3,
                                                                                            0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
LABEL_42:
          if ( *p_isDisp )
          {
            if ( !_4__this )
              goto LABEL_59;
            WarBoardControlUiDataComponent__PlayAnimation(
              _4__this,
              v2->fields._simpleAnimation_5__2,
              (System_String_o *)StringLiteral_20737/*"loop"*/,
              0LL);
            return 0;
          }
LABEL_49:
          this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)v2->fields.targetObject;
          if ( this )
          {
            v18 = 0;
            goto LABEL_51;
          }
LABEL_59:
          sub_B7769C(this, method);
        }
LABEL_31:
        this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)*p_simpleAnimation_5__2;
        if ( !*p_simpleAnimation_5__2 )
          goto LABEL_59;
        this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)SimpleAnimation__GetState(
                                                                                            (SimpleAnimation_o *)this,
                                                                                            v2->fields._stateName_5__3,
                                                                                            0LL);
        if ( !this )
          goto LABEL_59;
        klass = this->klass;
        v20 = this;
        if ( *(_WORD *)&this->klass->_2.bitflags1 )
        {
          v21 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v21;
            p_offset += 4;
            if ( v21 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
              goto LABEL_37;
          }
          v23 = (__int64)(&klass->vtable._5_System_IDisposable_Dispose.method + 2 * *p_offset);
        }
        else
        {
LABEL_37:
          v23 = sub_B0F4C0(this, SimpleAnimation_State_TypeInfo, 5LL);
        }
        if ( (*(float (__fastcall **)(WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *, _QWORD))v23)(
               v20,
               *(_QWORD *)(v23 + 8)) < 1.0 )
        {
          v2->fields.__2__current = 0LL;
          p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
          sub_B77560(p__2__current, 0LL, v24, v25, v26, v27, v28, v29);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
          return result;
        }
        p_isDisp = &v2->fields.isDisp;
        goto LABEL_42;
      }
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

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *v8; // x19
  int32_t _1__state; // w8
  bool result; // w0
  struct WarBoardControlUiDataComponent_o *_4__this; // x21
  UnityEngine_Object_o **p_targetSimpleAnimation_5__2; // x20
  struct UnityEngine_GameObject_array *syncAnimationObjects; // x23
  int max_length; // w8
  unsigned int v15; // w24
  __int64 v16; // x8
  UnityEngine_GameObject_o *v17; // x22
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_Object_o *v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_Object_o *v26; // x22
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o **p_animState_5__3; // x20
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v35; // x1
  System_Collections_IEnumerator_o *v36; // x21
  System_Collections_IEnumerator_c *v37; // x8
  unsigned __int64 v38; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  BattleServantConfConponent_o *p_state_5__6; // x20
  System_Collections_IEnumerator_c *v42; // x8
  unsigned __int64 v43; // x10
  System_Collections_IEnumerator_c **v44; // x11
  __int64 v45; // x0
  System_Int32_array **v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  __int64 v53; // x23
  __int64 v54; // x22
  __int64 v55; // x0
  __int64 v56; // x8
  __int64 v57; // x21
  unsigned __int64 v58; // x10
  int *v59; // x11
  __int64 v60; // x0
  float v61; // s0
  float normalizedTime; // s0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  UnityEngine_Object_o *v69; // x20
  System_Collections_Generic_IEnumerable_TSource__o *States; // x0
  System_Int32_array **StonePurchaseNotificationMenu_DialogOpenQueue; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  BattleServantConfConponent_c *klass; // x21
  _QWORD *image; // x8
  unsigned __int64 v80; // x10
  SimpleAnimation_State_c **v81; // x11
  __int64 v82; // x0
  BattleServantConfConponent_o *v83; // x19
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  float v90; // s0
  Il2CppObject **p__2__current; // x19
  __int64 v92; // x0
  void *v93; // x0
  int v94; // w1
  int v95[2]; // [xsp+0h] [xbp-60h]
  int v96; // [xsp+8h] [xbp-58h]

  v8 = this;
  if ( (byte_4388F44 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_AnimationState_TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_First_SimpleAnimation_State___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)sub_B775C4(&SimpleAnimation_State_TypeInfo);
    byte_4388F44 = 1;
  }
  v96 = 0;
  _1__state = v8->fields.__1__state;
  if ( _1__state == 2 )
  {
    v8->fields.__1__state = -1;
    p_state_5__6 = (BattleServantConfConponent_o *)&v8->fields._state_5__6;
LABEL_84:
    klass = p_state_5__6->klass;
    if ( !p_state_5__6->klass )
      goto LABEL_100;
    image = klass->_1.image;
    if ( *((_WORD *)klass->_1.image + 149) )
    {
      v80 = 0LL;
      v81 = (SimpleAnimation_State_c **)(image[22] + 8LL);
      while ( *(v81 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v80;
        v81 += 2;
        if ( v80 >= *((unsigned __int16 *)klass->_1.image + 149) )
          goto LABEL_89;
      }
      v82 = (__int64)&image[2 * *(_DWORD *)v81 + 49];
    }
    else
    {
LABEL_89:
      v82 = sub_B0F4C0(p_state_5__6->klass, SimpleAnimation_State_TypeInfo, 5LL);
    }
    v90 = (*(float (__fastcall **)(BattleServantConfConponent_c *, _QWORD))v82)(klass, *(_QWORD *)(v82 + 8));
    if ( v90 > 0.0 && v90 < 1.0 && v8->fields._time_5__5 <= v90 )
    {
      v8->fields.__2__current = 0LL;
      p__2__current = &v8->fields.__2__current;
      *((float *)p__2__current + 11) = v90;
      sub_B77560((BattleServantConfConponent_o *)p__2__current, 0LL, v84, v85, v86, v87, v88, v89);
      *((_DWORD *)p__2__current - 2) = 2;
      return 1;
    }
    p_state_5__6->klass = 0LL;
    sub_B77560(p_state_5__6, 0LL, v84, v85, v86, v87, v88, v89);
    goto LABEL_96;
  }
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
    p_animState_5__3 = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o **)&v8->fields._animState_5__3;
LABEL_75:
    this = *p_animState_5__3;
    if ( !*p_animState_5__3 )
      goto LABEL_100;
    normalizedTime = UnityEngine_AnimationState__get_normalizedTime((UnityEngine_AnimationState_o *)this, 0LL);
    if ( v8->fields._startNormalizedTime_5__4 >= UnityEngine_Mathf__FloorToInt(normalizedTime, 0LL) )
    {
      v8->fields.__2__current = 0LL;
      v83 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B77560(v83, 0LL, v63, v64, v65, v66, v67, v68);
      result = 1;
      *(_DWORD *)&v83[-1].fields.isOpenAfter = 1;
      return result;
    }
    v8->fields._animState_5__3 = 0LL;
    sub_B77560((BattleServantConfConponent_o *)p_animState_5__3, 0LL, v63, v64, v65, v66, v67, v68);
    p_targetSimpleAnimation_5__2 = (UnityEngine_Object_o **)&v8->fields._targetSimpleAnimation_5__2;
    goto LABEL_78;
  }
  result = 0;
  if ( _1__state )
    return result;
  _4__this = v8->fields.__4__this;
  v8->fields._targetSimpleAnimation_5__2 = 0LL;
  p_targetSimpleAnimation_5__2 = (UnityEngine_Object_o **)&v8->fields._targetSimpleAnimation_5__2;
  v8->fields.__1__state = -1;
  sub_B77560((BattleServantConfConponent_o *)&v8->fields._targetSimpleAnimation_5__2, 0LL, v2, v3, v4, v5, v6, v7);
  if ( !_4__this )
    goto LABEL_100;
  syncAnimationObjects = _4__this->fields.syncAnimationObjects;
  if ( !syncAnimationObjects )
    goto LABEL_100;
  max_length = syncAnimationObjects->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
      {
        v92 = sub_B776C8(this);
        sub_B77668(v92, 0LL);
      }
      v16 = (__int64)syncAnimationObjects + 8 * (int)v15;
      v17 = *(UnityEngine_GameObject_o **)(v16 + 32);
      if ( !v17 )
        break;
      this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)UnityEngine_GameObject__get_activeInHierarchy(
                                                                             *(UnityEngine_GameObject_o **)(v16 + 32),
                                                                             0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            v17,
                                                            (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)UnityEngine_Object__op_Inequality(
                                                                               Component_srcLineSprite,
                                                                               0LL,
                                                                               0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !Component_srcLineSprite )
            break;
          if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)Component_srcLineSprite, 0LL) )
            goto LABEL_28;
        }
        v19 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        v17,
                                        (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)UnityEngine_Object__op_Inequality(
                                                                               v19,
                                                                               0LL,
                                                                               0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v19 )
            break;
          this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)SimpleAnimation__get_isPlaying(
                                                                                 (SimpleAnimation_o *)v19,
                                                                                 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            *p_targetSimpleAnimation_5__2 = v19;
            sub_B77560(
              (BattleServantConfConponent_o *)&v8->fields._targetSimpleAnimation_5__2,
              (System_Int32_array **)v19,
              v20,
              v21,
              v22,
              v23,
              v24,
              v25);
          }
        }
      }
      max_length = syncAnimationObjects->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_27;
    }
LABEL_100:
    sub_B7769C(this, method);
  }
LABEL_27:
  Component_srcLineSprite = 0LL;
LABEL_28:
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
  {
    v26 = *p_targetSimpleAnimation_5__2;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(v26, 0LL, 0LL) )
      goto LABEL_96;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
  {
    v8->fields._animState_5__3 = 0LL;
    p_animState_5__3 = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o **)&v8->fields._animState_5__3;
    sub_B77560((BattleServantConfConponent_o *)&v8->fields._animState_5__3, 0LL, v27, v28, v29, v30, v31, v32);
    if ( !Component_srcLineSprite )
      goto LABEL_100;
    Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)Component_srcLineSprite, 0LL);
    v36 = Enumerator;
    if ( !Enumerator )
      sub_B7769C(0LL, v35);
    v37 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v38 = 0LL;
      p_offset = &v37->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v38;
        p_offset += 4;
        if ( v38 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_46;
      }
      p_method = (__int64)&v37->vtable[*p_offset].method;
    }
    else
    {
LABEL_46:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            v36,
            *(_QWORD *)(p_method + 8)) & 1) != 0 )
    {
      v42 = v36->klass;
      if ( *(_WORD *)&v36->klass->_2.bitflags1 )
      {
        v43 = 0LL;
        v44 = (System_Collections_IEnumerator_c **)&v42->_1.interfaceOffsets->offset;
        while ( *(v44 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v43;
          v44 += 2;
          if ( v43 >= *(unsigned __int16 *)&v36->klass->_2.bitflags1 )
            goto LABEL_55;
        }
        v45 = (__int64)&v42->vtable[*(_DWORD *)v44 + 1].method;
      }
      else
      {
LABEL_55:
        v45 = sub_B0F4C0(v36, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v46 = (System_Int32_array **)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v45)(
                                     v36,
                                     *(_QWORD *)(v45 + 8));
      if ( v46 && *v46 != (System_Int32_array *)UnityEngine_AnimationState_TypeInfo )
      {
        v93 = (void *)sub_B77990(v46);
        if ( v94 != 1 )
          _Unwind_Resume(v93);
        v54 = *(_QWORD *)__cxa_begin_catch(v93);
        __cxa_end_catch();
        v53 = 0LL;
        goto LABEL_61;
      }
      *p_animState_5__3 = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)v46;
      sub_B77560((BattleServantConfConponent_o *)&v8->fields._animState_5__3, v46, v47, v48, v49, v50, v51, v52);
    }
    v53 = 1LL;
    v54 = 0LL;
    v95[0] = 280;
    v96 = 1;
LABEL_61:
    v55 = sub_B77684(v36, System_IDisposable_TypeInfo);
    if ( v55 )
    {
      v56 = *(_QWORD *)v55;
      v57 = v55;
      if ( *(_WORD *)(*(_QWORD *)v55 + 298LL) )
      {
        v58 = 0LL;
        v59 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v59 - 1) != System_IDisposable_TypeInfo )
        {
          ++v58;
          v59 += 4;
          if ( v58 >= *(unsigned __int16 *)(*(_QWORD *)v55 + 298LL) )
            goto LABEL_66;
        }
        v60 = v56 + 16LL * *v59 + 312;
      }
      else
      {
LABEL_66:
        v60 = sub_B0F4C0(v55, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v60)(v57, *(_QWORD *)(v60 + 8));
    }
    if ( v54 )
      sub_B77668(v54, 0LL);
    if ( (_DWORD)v53 && v95[v53 - 1] == 280 )
      v96 = v53 - 1;
    this = *p_animState_5__3;
    if ( !*p_animState_5__3 )
      goto LABEL_100;
    v61 = UnityEngine_AnimationState__get_normalizedTime((UnityEngine_AnimationState_o *)this, 0LL);
    v8->fields._startNormalizedTime_5__4 = UnityEngine_Mathf__FloorToInt(v61, 0LL);
    goto LABEL_75;
  }
LABEL_78:
  v69 = *p_targetSimpleAnimation_5__2;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v69, 0LL, 0LL) )
  {
    this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)v8->fields._targetSimpleAnimation_5__2;
    v8->fields._time_5__5 = -1.0;
    if ( !this )
      goto LABEL_100;
    States = (System_Collections_Generic_IEnumerable_TSource__o *)SimpleAnimation__GetStates(
                                                                    (SimpleAnimation_o *)this,
                                                                    0LL);
    StonePurchaseNotificationMenu_DialogOpenQueue = (System_Int32_array **)System_Linq_Enumerable__First_StonePurchaseNotificationMenu_DialogOpenQueue_(
                                                                             States,
                                                                             (const MethodInfo_1D30534 *)Method_System_Linq_Enumerable_First_SimpleAnimation_State___);
    v8->fields._state_5__6 = (struct SimpleAnimation_State_o *)StonePurchaseNotificationMenu_DialogOpenQueue;
    p_state_5__6 = (BattleServantConfConponent_o *)&v8->fields._state_5__6;
    sub_B77560(
      (BattleServantConfConponent_o *)&v8->fields._state_5__6,
      StonePurchaseNotificationMenu_DialogOpenQueue,
      v72,
      v73,
      v74,
      v75,
      v76,
      v77);
    goto LABEL_84;
  }
LABEL_96:
  this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)v8->fields.callback;
  if ( !this )
    goto LABEL_100;
  System_Action__Invoke((System_Action_o *)this, 0LL);
  return 0;
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

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_WarBoardControlUiDataComponent__StartSyncAnimation_d__43_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
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
    sub_B7769C(this, 0LL);
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
    sub_B7769C(this, 0LL);
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
    sub_B7769C(this, 0LL);
  return System_String__op_Equality(a->fields.key, this->fields.key, 0LL);
}