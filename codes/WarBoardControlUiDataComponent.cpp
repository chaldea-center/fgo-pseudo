void __fastcall WarBoardControlUiDataComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_418664C & 1) == 0 )
  {
    sub_B2C35C(&WarBoardControlUiDataComponent_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_2725/*"Barrier"*/, v8);
    byte_418664C = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarBoardControlUiDataComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_2725/*"Barrier"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_2725/*"Barrier"*/;
  sub_B2C2F8(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall WarBoardControlUiDataComponent___ctor(WarBoardControlUiDataComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Array_o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_RuntimeFieldHandle_o v29; // 0:w1.4

  if ( (byte_418664B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__TypeInfo, v4);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_B2C35C(&float___TypeInfo, v6);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__64464566F592BAB0A74DD80EB47024C0ECA2BB914D37B27E78F5532363736E1B,
      v7);
    byte_418664B = 1;
  }
  v8 = (System_Array_o *)sub_B2C374(float___TypeInfo, 7LL);
  v29.fields.value = Field__PrivateImplementationDetails__64464566F592BAB0A74DD80EB47024C0ECA2BB914D37B27E78F5532363736E1B;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v8, v29, 0LL);
  this->fields.AdjustOffsetY = (struct System_Single_array *)v8;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.AdjustOffsetY,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData___ctor__);
  this->fields.listUiData = (struct System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__o *)v15;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.listUiData,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  this->fields.listUiDataKey = (struct System_Collections_Generic_List_string__o *)v22;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.listUiDataKey,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardControlUiDataComponent__Awake(WarBoardControlUiDataComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewObject_o *Component_WebViewObject; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  WebViewObject_o *v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_4186635 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_WarBoardPieceBaseComponent___, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_WarBoardSquareComponent___, v3);
    byte_4186635 = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_WarBoardPieceBaseComponent___);
  this->fields.pieceComponent = (struct WarBoardPieceBaseComponent_o *)Component_WebViewObject;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.pieceComponent,
    (System_Int32_array **)Component_WebViewObject,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = UnityEngine_Component__GetComponent_WebViewObject_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_WarBoardSquareComponent___);
  this->fields.squareComponent = (struct WarBoardSquareComponent_o *)v11;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.squareComponent,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
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
  __int64 v13; // x1
  struct System_Collections_Generic_List_string__o *listUiDataKey; // x0
  __int64 v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **current; // x1
  struct System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__o *listUiData; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v26; // x23
  __int64 v27; // x0
  __int64 v28; // x1
  peRenderTexture_ChangeLayerObject_o *v29; // x0
  __int64 v30; // x1
  peRenderTexture_ChangeLayerObject_o *v31; // x21
  struct UnityEngine_Renderer_o *renderer; // x23
  UnityEngine_Renderer_c *klass; // x8
  unsigned __int64 v34; // x27
  UnityEngine_Object_o *v35; // x22
  struct UnityEngine_Material_o *orgMaterial; // x22
  UnityEngine_Material_c *v37; // x8
  unsigned __int64 v38; // x23
  UnityEngine_Object_o *v39; // x21
  int32_t v40; // w19
  int v41; // w20
  __int64 v43; // x0
  __int64 v44; // x0
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v46; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4186640 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, targetObject);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__GetEnumerator__, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&Method_System_Predicate_WarBoardControlUiDataComponent_UiData___ctor__, v10);
    sub_B2C35C(&System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo, v11);
    sub_B2C35C(&Method_WarBoardControlUiDataComponent___c__DisplayClass34_0__CheckCorrectActiveObject_b__0__, v12);
    sub_B2C35C(&WarBoardControlUiDataComponent___c__DisplayClass34_0_TypeInfo, v13);
    byte_4186640 = 1;
  }
  memset(&v46, 0, sizeof(v46));
  listUiDataKey = this->fields.listUiDataKey;
  if ( !listUiDataKey )
    sub_B2C434(0LL, targetObject);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v45,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)listUiDataKey,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v46 = v45;
  while ( 1 )
  {
    do
    {
LABEL_26:
      if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v46,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
      {
        v40 = 0;
        v41 = 7;
        goto LABEL_31;
      }
      v15 = sub_B2C42C(WarBoardControlUiDataComponent___c__DisplayClass34_0_TypeInfo);
      WarBoardControlUiDataComponent___c__DisplayClass34_0___ctor(
        (WarBoardControlUiDataComponent___c__DisplayClass34_0_o *)v15,
        0LL);
      if ( !v15 )
        sub_B2C434(v16, v17);
      current = (System_Int32_array **)v46.fields.current;
      *(_QWORD *)(v15 + 16) = v46.fields.current;
      sub_B2C2F8((BattleServantConfConponent_o *)(v15 + 16), current, v18, v19, v20, v21, v22, v23);
      listUiData = this->fields.listUiData;
      v26 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v26,
        (Il2CppObject *)v15,
        Method_WarBoardControlUiDataComponent___c__DisplayClass34_0__CheckCorrectActiveObject_b__0__,
        (const MethodInfo_2952BE4 *)Method_System_Predicate_WarBoardControlUiDataComponent_UiData___ctor__);
      if ( !listUiData )
        sub_B2C434(v27, v28);
      v29 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
              (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)listUiData,
              (System_Predicate_T__o *)v26,
              (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__);
      v31 = v29;
    }
    while ( !v29 );
    renderer = v29->fields.renderer;
    if ( !renderer )
      sub_B2C434(v29, v30);
    klass = renderer[1].klass;
    if ( (int)klass >= 1 )
      break;
LABEL_17:
    orgMaterial = v31->fields.orgMaterial;
    if ( !orgMaterial )
      sub_B2C434(v29, v30);
    v37 = orgMaterial[1].klass;
    if ( (int)v37 >= 1 )
    {
      v38 = 0LL;
      while ( 1 )
      {
        if ( v38 >= (unsigned int)v37 )
        {
          v44 = sub_B2C460(v29);
          sub_B2C400(v44, 0LL);
        }
        v39 = (UnityEngine_Object_o *)*((_QWORD *)&orgMaterial[1].monitor + v38);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v29 = (peRenderTexture_ChangeLayerObject_o *)UnityEngine_Object__op_Equality(
                                                       (UnityEngine_Object_o *)targetObject,
                                                       v39,
                                                       0LL);
        if ( ((unsigned __int8)v29 & 1) != 0 )
          break;
        LODWORD(v37) = orgMaterial[1].klass;
        if ( (__int64)++v38 >= (int)v37 )
          goto LABEL_26;
      }
      v40 = 0;
      goto LABEL_30;
    }
  }
  v34 = 0LL;
  while ( 1 )
  {
    if ( v34 >= (unsigned int)klass )
    {
      v43 = sub_B2C460(v29);
      sub_B2C400(v43, 0LL);
    }
    v35 = (UnityEngine_Object_o *)*((_QWORD *)&renderer[1].monitor + v34);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v29 = (peRenderTexture_ChangeLayerObject_o *)UnityEngine_Object__op_Equality(
                                                   (UnityEngine_Object_o *)targetObject,
                                                   v35,
                                                   0LL);
    if ( ((unsigned __int8)v29 & 1) != 0 )
      break;
    LODWORD(klass) = renderer[1].klass;
    if ( (__int64)++v34 >= (int)klass )
      goto LABEL_17;
  }
  v40 = 1;
LABEL_30:
  v41 = 9;
LABEL_31:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v46,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  if ( v41 == 9 )
    return v40;
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
  WarBoardPieceData_o *Piece_22512764; // x0
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

  if ( (byte_4186643 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4186643 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  v5 = (WarBoardData_o *)*((_QWORD *)Instance + 54);
  Instance = (void *)WarBoardControlUiDataComponent__get_SquareIndex(this, v4);
  if ( !v5 )
    goto LABEL_31;
  Piece_22512764 = WarBoardData__GetPiece_22512764(v5, (int32_t)Instance, v6);
  if ( Piece_22512764 )
  {
    if ( WarBoardPieceData__get_isMaster(Piece_22512764, 0LL) )
      return 6;
    else
      return 5;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  v13 = (WarBoardData_o *)*((_QWORD *)Instance + 54);
  Instance = (void *)WarBoardControlUiDataComponent__get_SquareIndex(this, v4);
  if ( !v13 )
    goto LABEL_31;
  if ( WarBoardData__GetWall(v13, (int32_t)Instance, 0, v14) )
    return 3;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  v15 = (WarBoardData_o *)*((_QWORD *)Instance + 54);
  Instance = (void *)WarBoardControlUiDataComponent__get_SquareIndex(this, v4);
  if ( !v15 )
    goto LABEL_31;
  Treasure = WarBoardData__GetTreasure(v15, (int32_t)Instance, v16);
  if ( Treasure && !Treasure->fields._isUse_k__BackingField )
    return 1;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (v18 = (WarBoardData_o *)*((_QWORD *)Instance + 54),
        Instance = (void *)WarBoardControlUiDataComponent__get_SquareIndex(this, v4),
        !v18) )
  {
LABEL_31:
    sub_B2C434(Instance, v4);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x3
  WarBoardControlUiDataComponent_c *klass; // x8
  WarBoardControlUiDataComponent_o *v12; // x19
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x3
  __int64 v18; // x19
  __int64 v19; // x8
  unsigned __int64 v20; // x10
  int *v21; // x11
  __int64 v22; // x0
  __int64 v23; // x3
  __int64 v24; // x8
  unsigned __int64 v25; // x10
  int *v26; // x11
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x3
  __int64 v31; // x21
  __int64 v32; // x8
  unsigned __int64 v33; // x10
  SimpleAnimation_State_c **v34; // x11
  __int64 v35; // x0
  System_String_o *v36; // x0
  __int64 v37; // x1
  System_String_o *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x8
  unsigned __int64 v41; // x10
  SimpleAnimation_State_c **v42; // x11
  __int64 v43; // x0
  System_String_o *v44; // x20
  int v45; // w8
  __int64 v46; // x8
  unsigned __int64 v47; // x10
  int *v48; // x11
  __int64 v49; // x0
  int v51; // [xsp+0h] [xbp-40h]

  if ( (byte_4186649 & 1) == 0 )
  {
    sub_B2C35C(&System_IDisposable_TypeInfo, animation);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v7);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v8);
    this = (WarBoardControlUiDataComponent_o *)sub_B2C35C(&SimpleAnimation_State_TypeInfo, v9);
    byte_4186649 = 1;
  }
  if ( !animation || (this = (WarBoardControlUiDataComponent_o *)SimpleAnimation__GetStates(animation, 0LL)) == 0LL )
    sub_B2C434(this, animation);
  klass = this->klass;
  v12 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v13 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
    {
      ++v13;
      p_offset += 4;
      if ( v13 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    v15 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v15 = sub_AC5258(this, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL, v10);
  }
  v18 = (*(__int64 (__fastcall **)(WarBoardControlUiDataComponent_o *, _QWORD))v15)(v12, *(_QWORD *)(v15 + 8));
  if ( !v18 )
    sub_B2C434(0LL, v16);
  do
  {
    v19 = *(_QWORD *)v18;
    if ( *(_WORD *)(*(_QWORD *)v18 + 298LL) )
    {
      v20 = 0LL;
      v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v21 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v20;
        v21 += 4;
        if ( v20 >= *(unsigned __int16 *)(*(_QWORD *)v18 + 298LL) )
          goto LABEL_16;
      }
      v22 = v19 + 16LL * *v21 + 312;
    }
    else
    {
LABEL_16:
      v22 = sub_AC5258(v18, System_Collections_IEnumerator_TypeInfo, 0LL, v17);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v18, *(_QWORD *)(v22 + 8)) & 1) == 0 )
    {
      v44 = 0LL;
      v45 = 69;
      goto LABEL_43;
    }
    v24 = *(_QWORD *)v18;
    if ( *(_WORD *)(*(_QWORD *)v18 + 298LL) )
    {
      v25 = 0LL;
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v26 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
      {
        ++v25;
        v26 += 4;
        if ( v25 >= *(unsigned __int16 *)(*(_QWORD *)v18 + 298LL) )
          goto LABEL_23;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_23:
      v27 = sub_AC5258(v18, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL, v23);
    }
    v28 = (*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v18, *(_QWORD *)(v27 + 8));
    v31 = v28;
    if ( !v28 )
      sub_B2C434(0LL, v29);
    v32 = *(_QWORD *)v28;
    if ( *(_WORD *)(*(_QWORD *)v28 + 298LL) )
    {
      v33 = 0LL;
      v34 = (SimpleAnimation_State_c **)(*(_QWORD *)(v32 + 176) + 8LL);
      while ( *(v34 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v33;
        v34 += 2;
        if ( v33 >= *(unsigned __int16 *)(*(_QWORD *)v28 + 298LL) )
          goto LABEL_30;
      }
      v35 = v32 + 16LL * (*(_DWORD *)v34 + 9) + 312;
    }
    else
    {
LABEL_30:
      v35 = sub_AC5258(v28, SimpleAnimation_State_TypeInfo, 9LL, v30);
    }
    v36 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v31, *(_QWORD *)(v35 + 8));
    if ( !v36 )
      sub_B2C434(0LL, v37);
    v38 = System_String__ToLower(v36, 0LL);
    if ( !v38 )
      sub_B2C434(0LL, v39);
  }
  while ( !System_String__EndsWith(v38, suffix, 0LL) );
  v40 = *(_QWORD *)v31;
  if ( *(_WORD *)(*(_QWORD *)v31 + 298LL) )
  {
    v41 = 0LL;
    v42 = (SimpleAnimation_State_c **)(*(_QWORD *)(v40 + 176) + 8LL);
    while ( *(v42 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v41;
      v42 += 2;
      if ( v41 >= *(unsigned __int16 *)(*(_QWORD *)v31 + 298LL) )
        goto LABEL_39;
    }
    v43 = v40 + 16LL * (*(_DWORD *)v42 + 9) + 312;
  }
  else
  {
LABEL_39:
    v43 = sub_AC5258(v31, SimpleAnimation_State_TypeInfo, 9LL, v17);
  }
  v44 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v31, *(_QWORD *)(v43 + 8));
  v45 = 71;
LABEL_43:
  v51 = v45;
  v46 = *(_QWORD *)v18;
  if ( *(_WORD *)(*(_QWORD *)v18 + 298LL) )
  {
    v47 = 0LL;
    v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      ++v47;
      v48 += 4;
      if ( v47 >= *(unsigned __int16 *)(*(_QWORD *)v18 + 298LL) )
        goto LABEL_47;
    }
    v49 = v46 + 16LL * *v48 + 312;
  }
  else
  {
LABEL_47:
    v49 = sub_AC5258(v18, System_IDisposable_TypeInfo, 0LL, v23);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v49)(v18, *(_QWORD *)(v49 + 8));
  if ( v51 == 69 )
    return 0LL;
  return v44;
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
    sub_B2C434(this, method);
  max_length = flagObjects->max_length;
  if ( max_length < 1 )
    return 0;
  v4 = 0;
  while ( 1 )
  {
    if ( v4 >= max_length )
    {
      v6 = sub_B2C460(this);
      sub_B2C400(v6, 0LL);
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
    sub_B2C434(this, method);
  max_length = onOverlapObjects->max_length;
  if ( max_length < 1 )
    return 0;
  v4 = 0;
  while ( 1 )
  {
    if ( v4 >= max_length )
    {
      v6 = sub_B2C460(this);
      sub_B2C400(v6, 0LL);
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


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4186641 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&squareIndex);
    byte_4186641 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (v7 = *(WarBoardData_o **)&Instance[4].fields.m_CachedPtr) == 0LL )
    sub_B2C434(Instance, v5);
  return WarBoardData__GetPiece_22512764(*(WarBoardData_o **)&Instance[4].fields.m_CachedPtr, squareIndex, v6)
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
  __int64 v9; // x3
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v11; // x19
  unsigned __int64 v12; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_4186648 & 1) == 0 )
  {
    this = (WarBoardControlUiDataComponent_o *)sub_B2C35C(&SimpleAnimation_State_TypeInfo, animation);
    byte_4186648 = 1;
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
    sub_B2C434(IsNullOrEmpty, v8);
  klass = IsNullOrEmpty->klass;
  v11 = IsNullOrEmpty;
  if ( *(_WORD *)&IsNullOrEmpty->klass->_2.bitflags1 )
  {
    v12 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v12;
      p_offset += 2;
      if ( v12 >= *(unsigned __int16 *)&IsNullOrEmpty->klass->_2.bitflags1 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5].method;
  }
  else
  {
LABEL_11:
    p_method = sub_AC5258(IsNullOrEmpty, SimpleAnimation_State_TypeInfo, 5LL, v9);
  }
  return (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(v11, *(_QWORD *)(p_method + 8)) < 1.0;
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
  const MethodInfo *v13; // x3
  UnityEngine_Object_o *pieceComponent; // x20
  struct WarBoardPieceBaseComponent_o *v15; // x8
  struct WarBoardPieceData_o *pieceData; // x21
  System_Int32_array *v17; // x20
  unsigned int v18; // w8
  __int64 v19; // x8
  WarBoardData_o *v20; // x19
  const MethodInfo *v21; // x3
  __int64 v22; // x0

  if ( (byte_418664A & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__ToArray__, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5);
    byte_418664A = 1;
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
      Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        v10 = *(WarBoardData_o **)(Instance + 432);
        Instance = WarBoardControlUiDataComponent__get_SquareIndex(this, v9);
        listUiDataKey = this->fields.listUiDataKey;
        if ( listUiDataKey )
        {
          v12 = Instance;
          Instance = (__int64)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)listUiDataKey,
                                (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_string__ToArray__);
          if ( v10 )
          {
            WarBoardData__UpdateUiData(v10, v12, (System_String_array *)Instance, v13);
            return;
          }
        }
      }
LABEL_29:
      sub_B2C434(Instance, v9);
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
      v15 = this->fields.pieceComponent;
      if ( !v15 )
        goto LABEL_29;
      pieceData = v15->fields.pieceData;
      Instance = sub_B2C374(int___TypeInfo, 3LL);
      if ( !pieceData )
        goto LABEL_29;
      v17 = (System_Int32_array *)Instance;
      if ( !Instance )
        goto LABEL_29;
      v18 = *(_DWORD *)(Instance + 24);
      if ( !v18
        || (*(_DWORD *)(Instance + 32) = pieceData->fields._forceId_k__BackingField, v18 == 1)
        || (*(_DWORD *)(Instance + 36) = pieceData->fields._groupId_k__BackingField, v18 <= 2) )
      {
        v22 = sub_B2C460(Instance);
        sub_B2C400(v22, 0LL);
      }
      *(_DWORD *)(Instance + 40) = pieceData->fields._index_k__BackingField;
      Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !Instance )
        goto LABEL_29;
      v19 = Instance;
      Instance = (__int64)this->fields.listUiDataKey;
      if ( !Instance )
        goto LABEL_29;
      v20 = *(WarBoardData_o **)(v19 + 432);
      Instance = (__int64)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)Instance,
                            (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_string__ToArray__);
      if ( !v20 )
        goto LABEL_29;
      WarBoardData__UpdateUiData_22534228(v20, v17, (System_String_array *)Instance, v21);
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
      sub_B2C434(0LL, v6);
    SimpleAnimation__Play_16486620(animation, AnimationStateName, 0LL);
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

  if ( (byte_4186646 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_TypeInfo, animation);
    byte_4186646 = 1;
  }
  v7 = sub_B2C42C(WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_TypeInfo);
  WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42___ctor(
    (WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B2C434(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = animation;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)animation, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 48) = uiData;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 48), (System_Int32_array **)uiData, v22, v23, v24, v25, v26, v27);
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

  if ( (byte_4186645 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_TypeInfo, animation);
    byte_4186645 = 1;
  }
  v5 = sub_B2C42C(WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_TypeInfo);
  WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41___ctor(
    (WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = animation;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)animation, v14, v15, v16, v17, v18, v19);
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
  __int64 v14; // x1
  struct System_Collections_Generic_List_string__o *listUiDataKey; // x0
  WarBoardServantPieceBuffTurnComponent_o *v16; // x9
  struct WarBoardPieceBaseComponent_o *v17; // x10
  __int64 v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **current; // x1
  System_String_o **v28; // x20
  struct System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__o *listUiData; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v30; // x23
  __int64 v31; // x0
  __int64 v32; // x1
  const MethodInfo *v33; // x3
  WarBoardControlUiDataComponent_UiData_o *v34; // x21
  System_String_o *v35; // x20
  WarBoardControlUiDataComponent_c *v36; // x0
  WarBoardServantPieceBuffTurnComponent_o *v37; // x0
  __int64 v38; // x1
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x22
  WarBoardServantPieceBuffTurnComponent_o *v40; // x20
  struct UnityEngine_GameObject_array *animationObjects; // x23
  int max_length; // w8
  int i; // w22
  UnityEngine_GameObject_o *v44; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  const MethodInfo *v46; // x3
  __int64 v47; // x0
  WarBoardServantPieceBuffTurnComponent_o *v48; // [xsp+8h] [xbp-98h]
  struct WarBoardPieceBaseComponent_o *v49; // [xsp+10h] [xbp-90h]
  struct WarBoardPieceBaseComponent_o *v50; // [xsp+10h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v52; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_418663D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__GetEnumerator__, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&Method_System_Predicate_WarBoardControlUiDataComponent_UiData___ctor__, v9);
    sub_B2C35C(&System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo, v10);
    sub_B2C35C(&Method_WarBoardControlUiDataComponent___c__DisplayClass26_0__ResumeUiData_b__0__, v11);
    sub_B2C35C(&WarBoardControlUiDataComponent___c__DisplayClass26_0_TypeInfo, v12);
    sub_B2C35C(&WarBoardControlUiDataComponent_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_20322/*"loop"*/, v14);
    byte_418663D = 1;
  }
  memset(&v52, 0, sizeof(v52));
  listUiDataKey = this->fields.listUiDataKey;
  if ( !listUiDataKey )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v51,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)listUiDataKey,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v16 = 0LL;
  v17 = 0LL;
  v52 = v51;
LABEL_5:
  v48 = v16;
  v49 = v17;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v52,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    v18 = sub_B2C42C(WarBoardControlUiDataComponent___c__DisplayClass26_0_TypeInfo);
    WarBoardControlUiDataComponent___c__DisplayClass26_0___ctor(
      (WarBoardControlUiDataComponent___c__DisplayClass26_0_o *)v18,
      0LL);
    if ( !v18 )
      sub_B2C434(v19, v20);
    current = (System_Int32_array **)v52.fields.current;
    *(_QWORD *)(v18 + 16) = v52.fields.current;
    v28 = (System_String_o **)(v18 + 16);
    sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 16), current, v21, v22, v23, v24, v25, v26);
    listUiData = this->fields.listUiData;
    v30 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v30,
      (Il2CppObject *)v18,
      Method_WarBoardControlUiDataComponent___c__DisplayClass26_0__ResumeUiData_b__0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_WarBoardControlUiDataComponent_UiData___ctor__);
    if ( !listUiData )
      sub_B2C434(v31, v32);
    v34 = (WarBoardControlUiDataComponent_UiData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                       (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)listUiData,
                                                       (System_Predicate_T__o *)v30,
                                                       (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__);
    if ( v34 )
    {
      WarBoardControlUiDataComponent__SetUiDataTurnObjects(this, 1, v34, v33);
      v35 = *v28;
      v36 = WarBoardControlUiDataComponent_TypeInfo;
      if ( (BYTE3(WarBoardControlUiDataComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
        v36 = WarBoardControlUiDataComponent_TypeInfo;
      }
      v37 = (WarBoardServantPieceBuffTurnComponent_o *)System_String__op_Equality(
                                                         v35,
                                                         v36->static_fields->UI_DATA_KEY_BARRIER,
                                                         0LL);
      if ( ((unsigned __int8)v37 & 1) != 0
        && ((pieceComponent = this->fields.pieceComponent) != 0LL
          ? (v37 = (WarBoardServantPieceBuffTurnComponent_o *)this->fields.pieceComponent)
          : (v37 = (WarBoardServantPieceBuffTurnComponent_o *)v49),
            pieceComponent) )
      {
        if ( !v37 )
          sub_B2C434(0LL, v38);
        v37 = (WarBoardServantPieceBuffTurnComponent_o *)((__int64 (__fastcall *)(WarBoardServantPieceBuffTurnComponent_o *, const char *))v37->klass[1]._1.gc_desc)(
                                                           v37,
                                                           v37->klass[1]._1.name);
        v40 = v37;
        if ( !v37 )
          v37 = v48;
        if ( v40 )
        {
          if ( !v37 )
            sub_B2C434(0LL, v38);
          WarBoardServantPieceBuffTurnComponent__UpdateDisp(v37, 1, 0LL);
        }
        else
        {
          v40 = v48;
        }
      }
      else
      {
        v40 = v48;
        pieceComponent = v49;
      }
      animationObjects = v34->fields.animationObjects;
      if ( !animationObjects )
        sub_B2C434(v37, v38);
      max_length = animationObjects->max_length;
      v16 = v40;
      v17 = pieceComponent;
      if ( max_length >= 1 )
      {
        v50 = pieceComponent;
        for ( i = 0; i < max_length; ++i )
        {
          if ( i >= (unsigned int)max_length )
          {
            v47 = sub_B2C460(v37);
            sub_B2C400(v47, 0LL);
          }
          v44 = animationObjects->m_Items[i];
          if ( !v44 )
            sub_B2C434(0LL, v38);
          Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              v44,
                                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v37 = (WarBoardServantPieceBuffTurnComponent_o *)UnityEngine_Object__op_Equality(
                                                             Component_srcLineSprite,
                                                             0LL,
                                                             0LL);
          if ( ((unsigned __int8)v37 & 1) == 0 )
            v37 = (WarBoardServantPieceBuffTurnComponent_o *)WarBoardControlUiDataComponent__PlayAnimation(
                                                               this,
                                                               (SimpleAnimation_o *)Component_srcLineSprite,
                                                               (System_String_o *)StringLiteral_20322/*"loop"*/,
                                                               v46);
          max_length = animationObjects->max_length;
        }
        v17 = v50;
        v16 = v40;
      }
      goto LABEL_5;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v52,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


void __fastcall WarBoardControlUiDataComponent__ResumeUiDataAll(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x8
  __int64 v6; // x20
  int v7; // w8
  unsigned int v8; // w21
  __int64 v9; // x8
  int32_t v10; // w19
  __int64 v11; // x0

  if ( (byte_418663A & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v1);
    sub_B2C35C(&WarBoardControlUiDataComponent_TypeInfo, v2);
    byte_418663A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  v5 = *(_QWORD *)&Instance[4].fields.m_CachedPtr;
  if ( !v5 )
    goto LABEL_15;
  v6 = *(_QWORD *)(v5 + 56);
  if ( !v6 )
    goto LABEL_15;
  v7 = *(_DWORD *)(v6 + 24);
  if ( v7 >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= v7 )
      {
        v11 = sub_B2C460(Instance);
        sub_B2C400(v11, 0LL);
      }
      v9 = *(_QWORD *)(v6 + 8LL * (int)v8 + 32);
      if ( !v9 )
        break;
      v10 = *(_DWORD *)(v9 + 16);
      if ( (BYTE3(WarBoardControlUiDataComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
      }
      WarBoardControlUiDataComponent__ResumeUiDataAll_22525276(v10, v4);
      v7 = *(_DWORD *)(v6 + 24);
      if ( (int)++v8 >= v7 )
        return;
    }
LABEL_15:
    sub_B2C434(Instance, v4);
  }
}


void __fastcall WarBoardControlUiDataComponent__ResumeUiDataAll_22525276(int32_t squareIndex, const MethodInfo *method)
{
  __int64 v3; // x1
  WarBoardData_o *Instance; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  struct WarBoardStageEntity_o *stageEntity; // x8
  WarBoardControlUiDataComponent_o *boardMessage; // x0
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2
  struct WarBoardPieceData_array *pieces; // x8
  WarBoardControlUiDataComponent_o *v12; // x0

  if ( (byte_418663B & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_B2C35C(&WarBoardControlUiDataComponent_TypeInfo, v3);
    byte_418663B = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList;
  if ( !Instance )
    goto LABEL_19;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_22512764(Instance, squareIndex, v6);
  if ( Instance )
  {
    stageEntity = Instance[1].fields.stageEntity;
    if ( !stageEntity )
      goto LABEL_19;
    boardMessage = (WarBoardControlUiDataComponent_o *)stageEntity[2].fields.boardMessage;
    if ( boardMessage )
      WarBoardControlUiDataComponent__ResumeUiData(boardMessage, v5);
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList;
  if ( !Instance )
    goto LABEL_19;
  Instance = (WarBoardData_o *)WarBoardData__GetSquare(Instance, squareIndex, v9);
  if ( !Instance )
    goto LABEL_15;
  pieces = Instance->fields.pieces;
  if ( !pieces )
LABEL_19:
    sub_B2C434(Instance, v5);
  v12 = (WarBoardControlUiDataComponent_o *)pieces->m_Items[18];
  if ( v12 )
    WarBoardControlUiDataComponent__ResumeUiData(v12, v5);
LABEL_15:
  if ( (BYTE3(WarBoardControlUiDataComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  }
  WarBoardControlUiDataComponent__UpdateAdjustSituationAll_22524792(squareIndex, 1, v10);
}


void __fastcall WarBoardControlUiDataComponent__SetUiData(
        WarBoardControlUiDataComponent_o *this,
        System_String_o *key,
        bool isDisp,
        const MethodInfo *method)
{
  _BOOL4 v4; // w19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *listUiDataKey; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  WarBoardManager_TaskList_o **v26; // x22
  struct System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__o *listUiData; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v28; // x24
  peRenderTexture_ChangeLayerObject_o *v29; // x0
  WarBoardControlUiDataComponent_UiData_o *v30; // x21
  WarBoardManager_TaskList_o *v31; // x1
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x2
  int32_t SquareIndex; // w23
  System_String_o *v36; // x22
  WarBoardControlUiDataComponent_c *v37; // x0
  const MethodInfo *v38; // x1
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0
  WarBoardServantPieceBuffTurnComponent_o *v40; // x0
  struct UnityEngine_GameObject_array *animationObjects; // x23
  int max_length; // w8
  unsigned int v43; // w24
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  const MethodInfo *v45; // x2
  const MethodInfo *v46; // x3
  System_Collections_IEnumerator_o *started; // x0
  __int64 v48; // x0

  v4 = isDisp;
  if ( (byte_418663C & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, key);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Contains__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Remove__, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    sub_B2C35C(&Method_System_Predicate_WarBoardControlUiDataComponent_UiData___ctor__, v12);
    sub_B2C35C(&System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo, v13);
    sub_B2C35C(&Method_WarBoardControlUiDataComponent___c__DisplayClass25_0__SetUiData_b__0__, v14);
    sub_B2C35C(&WarBoardControlUiDataComponent___c__DisplayClass25_0_TypeInfo, v15);
    sub_B2C35C(&WarBoardControlUiDataComponent_TypeInfo, v16);
    byte_418663C = 1;
  }
  v17 = sub_B2C42C(WarBoardControlUiDataComponent___c__DisplayClass25_0_TypeInfo);
  WarBoardControlUiDataComponent___c__DisplayClass25_0___ctor(
    (WarBoardControlUiDataComponent___c__DisplayClass25_0_o *)v17,
    0LL);
  if ( !v17 )
    goto LABEL_37;
  *(_QWORD *)(v17 + 16) = key;
  v26 = (WarBoardManager_TaskList_o **)(v17 + 16);
  sub_B2C2F8((BattleServantConfConponent_o *)(v17 + 16), (System_Int32_array **)key, v20, v21, v22, v23, v24, v25);
  listUiData = this->fields.listUiData;
  v28 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v28,
    (Il2CppObject *)v17,
    Method_WarBoardControlUiDataComponent___c__DisplayClass25_0__SetUiData_b__0__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_WarBoardControlUiDataComponent_UiData___ctor__);
  if ( !listUiData )
    goto LABEL_37;
  v29 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)listUiData,
          (System_Predicate_T__o *)v28,
          (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__);
  if ( v29 )
  {
    v30 = (WarBoardControlUiDataComponent_UiData_o *)v29;
    listUiDataKey = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.listUiDataKey;
    if ( !listUiDataKey )
      goto LABEL_37;
    if ( ((System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
             (System_Collections_Generic_List_WarBoardManager_TaskList__o *)listUiDataKey,
             *v26,
             (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_string__Contains__) ^ v4) & 1) != 0 )
    {
      listUiDataKey = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.listUiDataKey;
      if ( !listUiDataKey )
        goto LABEL_37;
      v31 = *v26;
      if ( v4 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          listUiDataKey,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
        WarBoardControlUiDataComponent__SetUiDataTurnObjects(this, 1, v30, v32);
        SquareIndex = WarBoardControlUiDataComponent__get_SquareIndex(this, v33);
        if ( (BYTE3(WarBoardControlUiDataComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
        }
        WarBoardControlUiDataComponent__UpdateAdjustSituationAll_22524792(SquareIndex, 1, v34);
      }
      else
      {
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)listUiDataKey,
          v31,
          (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_string__Remove__);
      }
      v36 = (System_String_o *)*v26;
      v37 = WarBoardControlUiDataComponent_TypeInfo;
      if ( (BYTE3(WarBoardControlUiDataComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
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
            WarBoardServantPieceBuffTurnComponent__UpdateDisp(v40, 1, 0LL);
        }
      }
      WarBoardControlUiDataComponent__LocalSave(this, v38);
      animationObjects = v30->fields.animationObjects;
      if ( !animationObjects )
        goto LABEL_37;
      max_length = animationObjects->max_length;
      if ( max_length >= 1 )
      {
        v43 = 0;
        while ( 1 )
        {
          if ( v43 >= max_length )
          {
            v48 = sub_B2C460(listUiDataKey);
            sub_B2C400(v48, 0LL);
          }
          listUiDataKey = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)animationObjects->m_Items[v43];
          if ( !listUiDataKey )
            break;
          Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              (UnityEngine_GameObject_o *)listUiDataKey,
                                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
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
                          v45);
            else
              started = WarBoardControlUiDataComponent__PlayEndUiDataAnim(
                          this,
                          (SimpleAnimation_o *)Component_srcLineSprite,
                          v30,
                          v46);
            listUiDataKey = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
          }
          max_length = animationObjects->max_length;
          if ( (int)++v43 >= max_length )
            return;
        }
LABEL_37:
        sub_B2C434(listUiDataKey, v19);
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

  if ( (byte_418663E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string__AddRange__, keys);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Clear__, v5);
    byte_418663E = 1;
  }
  listUiDataKey = this->fields.listUiDataKey;
  if ( !listUiDataKey
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)listUiDataKey,
          (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_string__Clear__),
        (listUiDataKey = this->fields.listUiDataKey) == 0LL) )
  {
    sub_B2C434(listUiDataKey, keys);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)listUiDataKey,
    (System_Collections_Generic_IEnumerable_T__o *)keys,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_string__AddRange__);
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
        v5 = sub_B2C460(this);
        sub_B2C400(v5, 0LL);
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
    sub_B2C434(this, method);
  }
}


void __fastcall WarBoardControlUiDataComponent__SetUiDataOnBattleAll(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x8
  __int64 v6; // x20
  int v7; // w8
  unsigned int v8; // w21
  __int64 v9; // x8
  int32_t v10; // w19
  __int64 v11; // x0

  if ( (byte_4186636 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v1);
    sub_B2C35C(&WarBoardControlUiDataComponent_TypeInfo, v2);
    byte_4186636 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  v5 = *(_QWORD *)&Instance[4].fields.m_CachedPtr;
  if ( !v5 )
    goto LABEL_15;
  v6 = *(_QWORD *)(v5 + 56);
  if ( !v6 )
    goto LABEL_15;
  v7 = *(_DWORD *)(v6 + 24);
  if ( v7 >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= v7 )
      {
        v11 = sub_B2C460(Instance);
        sub_B2C400(v11, 0LL);
      }
      v9 = *(_QWORD *)(v6 + 8LL * (int)v8 + 32);
      if ( !v9 )
        break;
      v10 = *(_DWORD *)(v9 + 16);
      if ( (BYTE3(WarBoardControlUiDataComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
      }
      WarBoardControlUiDataComponent__SetUiDataOnBattleAll_22524060(v10, v4);
      v7 = *(_DWORD *)(v6 + 24);
      if ( (int)++v8 >= v7 )
        return;
    }
LABEL_15:
    sub_B2C434(Instance, v4);
  }
}


void __fastcall WarBoardControlUiDataComponent__SetUiDataOnBattleAll_22524060(
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

  if ( (byte_4186637 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4186637 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList;
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_22512764(Instance, squareIndex, v5);
  if ( Instance )
  {
    stageEntity = Instance[1].fields.stageEntity;
    if ( !stageEntity )
      goto LABEL_16;
    boardMessage = (WarBoardControlUiDataComponent_o *)stageEntity[2].fields.boardMessage;
    if ( boardMessage )
      WarBoardControlUiDataComponent__SetUiDataOnBattle(boardMessage, v4);
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_B2C434(Instance, v4);
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
  if ( (byte_4186644 & 1) == 0 )
  {
    this = (WarBoardControlUiDataComponent_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, isDisp);
    byte_4186644 = 1;
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
    v15 = sub_B2C460(this);
    sub_B2C400(v15, 0LL);
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
    sub_B2C434(this, isDisp);
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

  if ( (byte_4186642 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_TypeInfo, isDisp);
    byte_4186642 = 1;
  }
  v9 = sub_B2C42C(WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_TypeInfo);
  WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37___ctor(
    (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)v9,
    0,
    0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  *(_QWORD *)(v9 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_BYTE *)(v9 + 48) = isDisp;
  *(_QWORD *)(v9 + 40) = targetObject;
  sub_B2C2F8(
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

  if ( (byte_4186647 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardControlUiDataComponent__StartSyncAnimation_d__43_TypeInfo, callback);
    byte_4186647 = 1;
  }
  v5 = sub_B2C42C(WarBoardControlUiDataComponent__StartSyncAnimation_d__43_TypeInfo);
  WarBoardControlUiDataComponent__StartSyncAnimation_d__43___ctor(
    (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)callback, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall WarBoardControlUiDataComponent__SyncAnimation(
        WarBoardControlUiDataComponent_o *this,
        System_Action_o *syncCallback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *started; // x1

  started = WarBoardControlUiDataComponent__StartSyncAnimation(this, syncCallback, method);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
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
    sub_B2C434(AdjustType, v4);
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
    v14 = sub_B2C460(AdjustType);
    sub_B2C400(v14, 0LL);
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
  if ( (byte_4186638 & 1) == 0 )
  {
    squareIndexes = (System_Int32_array *)sub_B2C35C(&WarBoardControlUiDataComponent_TypeInfo, immediatelyWhenOff);
    byte_4186638 = 1;
  }
  if ( !v4 )
    sub_B2C434(squareIndexes, immediatelyWhenOff);
  v5 = *(_QWORD *)&v4->max_length;
  if ( (int)v5 >= 1 )
  {
    v6 = 0LL;
    v7 = immediatelyWhenOff;
    do
    {
      if ( v6 >= (unsigned int)v5 )
      {
        v9 = sub_B2C460(squareIndexes);
        sub_B2C400(v9, 0LL);
      }
      v8 = v4->m_Items[v6 + 1];
      if ( (BYTE3(WarBoardControlUiDataComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
      }
      WarBoardControlUiDataComponent__UpdateAdjustSituationAll_22524792(v8, v7, method);
      LODWORD(v5) = v4->max_length;
      ++v6;
    }
    while ( (__int64)v6 < (int)v5 );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardControlUiDataComponent__UpdateAdjustSituationAll_22524792(
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

  if ( (byte_4186639 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, immediatelyWhenOff);
    byte_4186639 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList;
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_22512764(Instance, squareIndex, v7);
  if ( Instance )
  {
    stageEntity = Instance[1].fields.stageEntity;
    if ( !stageEntity )
      goto LABEL_16;
    boardMessage = (WarBoardControlUiDataComponent_o *)stageEntity[2].fields.boardMessage;
    if ( boardMessage )
      WarBoardControlUiDataComponent__UpdateAdjustSituation(boardMessage, immediatelyWhenOff, v8);
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_B2C434(Instance, v6);
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
      sub_B2C434(IsExistsOther, v8);
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
          v16 = sub_B2C460(IsExistsOther);
          sub_B2C400(v16, 0LL);
        }
        v15 = WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation(
                this,
                v13,
                onExistsOtherTurnOffObjects->m_Items[v12],
                v14,
                v9);
        IsExistsOther = UnityEngine_MonoBehaviour__StartCoroutine_35309748(
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

  if ( (byte_418663F & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_418663F = 1;
  }
  if ( !this->fields.compType )
    return;
  Instance = (WarBoardControlUiDataComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_B2C434(Instance, v4);
  v11 = *(_QWORD *)&onOverlapObjects->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = 0LL;
    do
    {
      if ( v12 >= (unsigned int)v11 )
      {
        v15 = sub_B2C460(Instance);
        sub_B2C400(v15, 0LL);
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

  if ( (byte_4186634 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4186634 = 1;
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
    sub_B2C434(v4, v5);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  WarBoardControlUiDataComponent_o *_4__this; // x20
  WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o **p_animation; // x21
  System_String_o *v10; // x0
  __int64 v11; // x3
  WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_c *klass; // x8
  WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *v13; // x21
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 v16; // x0
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct WarBoardControlUiDataComponent_UiData_o *uiData; // x8
  struct UnityEngine_GameObject_array *animationObjects; // x22
  int max_length; // w8
  unsigned int v22; // w23
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  int32_t SquareIndex; // w19
  __int64 v25; // x0

  v2 = this;
  if ( (byte_418572C & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v4);
    sub_B2C35C(&WarBoardControlUiDataComponent_TypeInfo, v5);
    this = (WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *)sub_B2C35C(&StringLiteral_18342/*"end"*/, v6);
    byte_418572C = 1;
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
    v10 = WarBoardControlUiDataComponent__PlayAnimation(
            _4__this,
            v2->fields.animation,
            (System_String_o *)StringLiteral_18342/*"end"*/,
            0LL);
    v2->fields._stateName_5__2 = v10;
    sub_B2C2F8(&v2->fields._stateName_5__2, v10);
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
        v22 = 0;
        while ( 1 )
        {
          if ( v22 >= max_length )
          {
            v25 = sub_B2C460(this);
            sub_B2C400(v25, 0LL);
          }
          this = (WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *)animationObjects->m_Items[v22];
          if ( !this )
            break;
          Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              (UnityEngine_GameObject_o *)this,
                                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
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
                                                                                  (System_String_o *)StringLiteral_18342/*"end"*/,
                                                                                  0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
              return 0;
          }
          max_length = animationObjects->max_length;
          if ( (int)++v22 >= max_length )
            goto LABEL_32;
        }
LABEL_38:
        sub_B2C434(this, method);
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
      WarBoardControlUiDataComponent__UpdateAdjustSituationAll_22524792(SquareIndex, 0, 0LL);
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
    v13 = this;
    if ( *(_WORD *)&this->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v14;
        p_offset += 4;
        if ( v14 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
          goto LABEL_15;
      }
      v16 = (__int64)(&klass->vtable._5_System_IDisposable_Dispose.method + 2 * *p_offset);
    }
    else
    {
LABEL_15:
      v16 = sub_AC5258(this, SimpleAnimation_State_TypeInfo, 5LL, v11);
    }
    if ( (*(float (__fastcall **)(WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *, _QWORD))v16)(
           v13,
           *(_QWORD *)(v16 + 8)) < 1.0 )
    {
      v2->fields.__2__current = 0LL;
      p__2__current = &v2->fields.__2__current;
      sub_B2C2F8(p__2__current, 0LL);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  WarBoardControlUiDataComponent_o *_4__this; // x20
  WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o **p_animation; // x21
  System_String_o *v8; // x0
  __int64 v9; // x3
  WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_c *klass; // x8
  WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *v11; // x21
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 v14; // x0
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  v2 = this;
  if ( (byte_418572D & 1) == 0 )
  {
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, method);
    sub_B2C35C(&StringLiteral_22266/*"start"*/, v3);
    this = (WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *)sub_B2C35C(&StringLiteral_20322/*"loop"*/, v4);
    byte_418572D = 1;
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
    v8 = WarBoardControlUiDataComponent__PlayAnimation(
           _4__this,
           v2->fields.animation,
           (System_String_o *)StringLiteral_22266/*"start"*/,
           0LL);
    v2->fields._stateName_5__2 = v8;
    sub_B2C2F8(&v2->fields._stateName_5__2, v8);
    if ( System_String__IsNullOrEmpty(v2->fields._stateName_5__2, 0LL) )
    {
LABEL_20:
      WarBoardControlUiDataComponent__PlayAnimation(
        _4__this,
        v2->fields.animation,
        (System_String_o *)StringLiteral_20322/*"loop"*/,
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
        v11 = this;
        if ( *(_WORD *)&this->klass->_2.bitflags1 )
        {
          v12 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v12;
            p_offset += 4;
            if ( v12 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
              goto LABEL_15;
          }
          v14 = (__int64)(&klass->vtable._5_System_IDisposable_Dispose.method + 2 * *p_offset);
        }
        else
        {
LABEL_15:
          v14 = sub_AC5258(this, SimpleAnimation_State_TypeInfo, 5LL, v9);
        }
        if ( (*(float (__fastcall **)(WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *, _QWORD))v14)(
               v11,
               *(_QWORD *)(v14 + 8)) < 1.0 )
        {
          v2->fields.__2__current = 0LL;
          p__2__current = &v2->fields.__2__current;
          sub_B2C2F8(p__2__current, 0LL);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
        if ( _4__this )
          goto LABEL_20;
      }
    }
LABEL_22:
    sub_B2C434(this, method);
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t _1__state; // w8
  WarBoardControlUiDataComponent_o *_4__this; // x20
  int32_t v10; // w0
  srcLineSprite_o *Component_srcLineSprite; // x0
  SimpleAnimation_o **p_simpleAnimation_5__2; // x21
  bool *p_isDisp; // x23
  SimpleAnimation_o *v14; // x22
  SimpleAnimation_o *v15; // x22
  struct UnityEngine_GameObject_o *targetObject; // x8
  bool v17; // w1
  __int64 v18; // x3
  WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_c *klass; // x8
  WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *v20; // x21
  unsigned __int64 v21; // x10
  int32_t *p_offset; // x11
  __int64 v23; // x0
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  __int64 *v26; // x8
  System_String_o *v27; // x0

  v2 = this;
  if ( (byte_418572E & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_22266/*"start"*/, v5);
    sub_B2C35C(&StringLiteral_18342/*"end"*/, v6);
    this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)sub_B2C35C(
                                                                                        &StringLiteral_20322/*"loop"*/,
                                                                                        v7);
    byte_418572E = 1;
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
    v10 = WarBoardControlUiDataComponent__CheckCorrectActiveObject(_4__this, v2->fields.targetObject, 0LL);
    if ( (v10 & 0x80000000) == 0 )
      v2->fields.isDisp = v10 == 1 && v2->fields.isDisp;
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
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)this,
                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
      v2->fields._simpleAnimation_5__2 = (struct SimpleAnimation_o *)Component_srcLineSprite;
      p_simpleAnimation_5__2 = &v2->fields._simpleAnimation_5__2;
      sub_B2C2F8(&v2->fields._simpleAnimation_5__2, Component_srcLineSprite);
      p_isDisp = &v2->fields.isDisp;
      if ( v2->fields.isDisp )
      {
        this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)v2->fields.targetObject;
        if ( !this )
          goto LABEL_59;
        if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)this, 0LL) )
        {
          v14 = *p_simpleAnimation_5__2;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0LL, 0LL)
            && (WarBoardControlUiDataComponent__IsPlayingAnimation(
                  _4__this,
                  *p_simpleAnimation_5__2,
                  (System_String_o *)StringLiteral_22266/*"start"*/,
                  0LL)
             || WarBoardControlUiDataComponent__IsPlayingAnimation(
                  _4__this,
                  *p_simpleAnimation_5__2,
                  (System_String_o *)StringLiteral_20322/*"loop"*/,
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
        v15 = *p_simpleAnimation_5__2;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)UnityEngine_Object__op_Equality(
                                                                                            (UnityEngine_Object_o *)v15,
                                                                                            0LL,
                                                                                            0LL);
        targetObject = v2->fields.targetObject;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( targetObject )
          {
            v17 = *p_isDisp;
            this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)v2->fields.targetObject;
LABEL_51:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v17, 0LL);
            return 0;
          }
          goto LABEL_59;
        }
        if ( !targetObject )
          goto LABEL_59;
        UnityEngine_GameObject__SetActive(v2->fields.targetObject, 1, 0LL);
        if ( v2->fields.isDisp )
          v26 = &StringLiteral_22266/*"start"*/;
        else
          v26 = &StringLiteral_18342/*"end"*/;
        v27 = WarBoardControlUiDataComponent__PlayAnimation(
                _4__this,
                v2->fields._simpleAnimation_5__2,
                (System_String_o *)*v26,
                0LL);
        v2->fields._stateName_5__3 = v27;
        sub_B2C2F8(&v2->fields._stateName_5__3, v27);
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
              (System_String_o *)StringLiteral_20322/*"loop"*/,
              0LL);
            return 0;
          }
LABEL_49:
          this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)v2->fields.targetObject;
          if ( this )
          {
            v17 = 0;
            goto LABEL_51;
          }
LABEL_59:
          sub_B2C434(this, method);
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
          v23 = sub_AC5258(this, SimpleAnimation_State_TypeInfo, 5LL, v18);
        }
        if ( (*(float (__fastcall **)(WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *, _QWORD))v23)(
               v20,
               *(_QWORD *)(v23 + 8)) < 1.0 )
        {
          v2->fields.__2__current = 0LL;
          p__2__current = &v2->fields.__2__current;
          sub_B2C2F8(p__2__current, 0LL);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  __int64 v2; // x3
  WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t _1__state; // w8
  bool result; // w0
  struct WarBoardControlUiDataComponent_o *_4__this; // x21
  UnityEngine_Object_o **p_targetSimpleAnimation_5__2; // x20
  struct UnityEngine_GameObject_array *syncAnimationObjects; // x23
  int max_length; // w8
  unsigned int v17; // w24
  __int64 v18; // x8
  UnityEngine_GameObject_o *v19; // x22
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_Object_o *v21; // x21
  UnityEngine_Object_o *v22; // x22
  WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o **p_animState_5__3; // x20
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v25; // x1
  __int64 v26; // x3
  System_Collections_IEnumerator_o *v27; // x21
  System_Collections_IEnumerator_c *v28; // x8
  unsigned __int64 v29; // x10
  int32_t *v30; // x11
  __int64 v31; // x0
  struct SimpleAnimation_State_o **p_state_5__6; // x20
  __int64 v33; // x3
  System_Collections_IEnumerator_c *v34; // x8
  unsigned __int64 v35; // x10
  System_Collections_IEnumerator_c **v36; // x11
  __int64 v37; // x0
  UnityEngine_AnimationState_c **v38; // x0
  __int64 v39; // x23
  __int64 v40; // x22
  __int64 v41; // x0
  __int64 v42; // x3
  __int64 v43; // x8
  __int64 v44; // x21
  unsigned __int64 v45; // x10
  int *v46; // x11
  __int64 v47; // x0
  float v48; // s0
  float normalizedTime; // s0
  UnityEngine_Object_o *v50; // x20
  System_Collections_Generic_IEnumerable_TSource__o *States; // x0
  StonePurchaseNotificationMenu_DialogOpenQueue_o *StonePurchaseNotificationMenu_DialogOpenQueue; // x0
  struct SimpleAnimation_State_o *v53; // x21
  SimpleAnimation_State_c *klass; // x8
  unsigned __int64 v55; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  Il2CppObject **v58; // x19
  float v59; // s0
  Il2CppObject **p__2__current; // x19
  __int64 v61; // x0
  void *v62; // x0
  int v63; // w1
  int v64[2]; // [xsp+0h] [xbp-60h]
  int v65; // [xsp+8h] [xbp-58h]

  v3 = this;
  if ( (byte_418572F & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_AnimationState_TypeInfo, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_First_SimpleAnimation_State___, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Animation___, v5);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v6);
    sub_B2C35C(&System_IDisposable_TypeInfo, v7);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)sub_B2C35C(
                                                                           &SimpleAnimation_State_TypeInfo,
                                                                           v10);
    byte_418572F = 1;
  }
  v65 = 0;
  _1__state = v3->fields.__1__state;
  if ( _1__state == 2 )
  {
    v3->fields.__1__state = -1;
    p_state_5__6 = &v3->fields._state_5__6;
LABEL_84:
    v53 = *p_state_5__6;
    if ( !*p_state_5__6 )
      goto LABEL_100;
    klass = v53->klass;
    if ( *(_WORD *)&v53->klass->_2.bitflags1 )
    {
      v55 = 0LL;
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v55;
        p_offset += 2;
        if ( v55 >= *(unsigned __int16 *)&v53->klass->_2.bitflags1 )
          goto LABEL_89;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5].method;
    }
    else
    {
LABEL_89:
      p_method = sub_AC5258(*p_state_5__6, SimpleAnimation_State_TypeInfo, 5LL, v2);
    }
    v59 = (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))p_method)(v53, *(_QWORD *)(p_method + 8));
    if ( v59 > 0.0 && v59 < 1.0 && v3->fields._time_5__5 <= v59 )
    {
      v3->fields.__2__current = 0LL;
      p__2__current = &v3->fields.__2__current;
      *((float *)p__2__current + 11) = v59;
      sub_B2C2F8(p__2__current, 0LL);
      *((_DWORD *)p__2__current - 2) = 2;
      return 1;
    }
    *p_state_5__6 = 0LL;
    sub_B2C2F8(p_state_5__6, 0LL);
    goto LABEL_96;
  }
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    p_animState_5__3 = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o **)&v3->fields._animState_5__3;
LABEL_75:
    this = *p_animState_5__3;
    if ( !*p_animState_5__3 )
      goto LABEL_100;
    normalizedTime = UnityEngine_AnimationState__get_normalizedTime((UnityEngine_AnimationState_o *)this, 0LL);
    if ( v3->fields._startNormalizedTime_5__4 >= UnityEngine_Mathf__FloorToInt(normalizedTime, 0LL) )
    {
      v3->fields.__2__current = 0LL;
      v58 = &v3->fields.__2__current;
      sub_B2C2F8(v58, 0LL);
      result = 1;
      *((_DWORD *)v58 - 2) = 1;
      return result;
    }
    v3->fields._animState_5__3 = 0LL;
    sub_B2C2F8(p_animState_5__3, 0LL);
    p_targetSimpleAnimation_5__2 = (UnityEngine_Object_o **)&v3->fields._targetSimpleAnimation_5__2;
    goto LABEL_78;
  }
  result = 0;
  if ( _1__state )
    return result;
  _4__this = v3->fields.__4__this;
  v3->fields._targetSimpleAnimation_5__2 = 0LL;
  p_targetSimpleAnimation_5__2 = (UnityEngine_Object_o **)&v3->fields._targetSimpleAnimation_5__2;
  v3->fields.__1__state = -1;
  sub_B2C2F8(&v3->fields._targetSimpleAnimation_5__2, 0LL);
  if ( !_4__this )
    goto LABEL_100;
  syncAnimationObjects = _4__this->fields.syncAnimationObjects;
  if ( !syncAnimationObjects )
    goto LABEL_100;
  max_length = syncAnimationObjects->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
      {
        v61 = sub_B2C460(this);
        sub_B2C400(v61, 0LL);
      }
      v18 = (__int64)syncAnimationObjects + 8 * (int)v17;
      v19 = *(UnityEngine_GameObject_o **)(v18 + 32);
      if ( !v19 )
        break;
      this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)UnityEngine_GameObject__get_activeInHierarchy(
                                                                             *(UnityEngine_GameObject_o **)(v18 + 32),
                                                                             0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            v19,
                                                            (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
        v21 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        v19,
                                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)UnityEngine_Object__op_Inequality(
                                                                               v21,
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
            *p_targetSimpleAnimation_5__2 = v21;
            sub_B2C2F8(&v3->fields._targetSimpleAnimation_5__2, v21);
          }
        }
      }
      max_length = syncAnimationObjects->max_length;
      if ( (int)++v17 >= max_length )
        goto LABEL_27;
    }
LABEL_100:
    sub_B2C434(this, method);
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
    v22 = *p_targetSimpleAnimation_5__2;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(v22, 0LL, 0LL) )
      goto LABEL_96;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
  {
    v3->fields._animState_5__3 = 0LL;
    p_animState_5__3 = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o **)&v3->fields._animState_5__3;
    sub_B2C2F8(&v3->fields._animState_5__3, 0LL);
    if ( !Component_srcLineSprite )
      goto LABEL_100;
    Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)Component_srcLineSprite, 0LL);
    v27 = Enumerator;
    if ( !Enumerator )
      sub_B2C434(0LL, v25);
    v28 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v29 = 0LL;
      v30 = &v28->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v30 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v29;
        v30 += 4;
        if ( v29 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_46;
      }
      v31 = (__int64)&v28->vtable[*v30].method;
    }
    else
    {
LABEL_46:
      v31 = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v26);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v31)(v27, *(_QWORD *)(v31 + 8)) & 1) != 0 )
    {
      v34 = v27->klass;
      if ( *(_WORD *)&v27->klass->_2.bitflags1 )
      {
        v35 = 0LL;
        v36 = (System_Collections_IEnumerator_c **)&v34->_1.interfaceOffsets->offset;
        while ( *(v36 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v35;
          v36 += 2;
          if ( v35 >= *(unsigned __int16 *)&v27->klass->_2.bitflags1 )
            goto LABEL_55;
        }
        v37 = (__int64)&v34->vtable[*(_DWORD *)v36 + 1].method;
      }
      else
      {
LABEL_55:
        v37 = sub_AC5258(v27, System_Collections_IEnumerator_TypeInfo, 1LL, v33);
      }
      v38 = (UnityEngine_AnimationState_c **)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v37)(
                                               v27,
                                               *(_QWORD *)(v37 + 8));
      if ( v38 && *v38 != UnityEngine_AnimationState_TypeInfo )
      {
        v62 = (void *)sub_B2C728(v38);
        if ( v63 != 1 )
          _Unwind_Resume(v62);
        v40 = *(_QWORD *)__cxa_begin_catch(v62);
        __cxa_end_catch();
        v39 = 0LL;
        goto LABEL_61;
      }
      *p_animState_5__3 = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)v38;
      sub_B2C2F8(&v3->fields._animState_5__3, v38);
    }
    v39 = 1LL;
    v40 = 0LL;
    v64[0] = 280;
    v65 = 1;
LABEL_61:
    v41 = sub_B2C41C(v27, System_IDisposable_TypeInfo);
    if ( v41 )
    {
      v43 = *(_QWORD *)v41;
      v44 = v41;
      if ( *(_WORD *)(*(_QWORD *)v41 + 298LL) )
      {
        v45 = 0LL;
        v46 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
        {
          ++v45;
          v46 += 4;
          if ( v45 >= *(unsigned __int16 *)(*(_QWORD *)v41 + 298LL) )
            goto LABEL_66;
        }
        v47 = v43 + 16LL * *v46 + 312;
      }
      else
      {
LABEL_66:
        v47 = sub_AC5258(v41, System_IDisposable_TypeInfo, 0LL, v42);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v47)(v44, *(_QWORD *)(v47 + 8));
    }
    if ( v40 )
      sub_B2C400(v40, 0LL);
    if ( (_DWORD)v39 && v64[v39 - 1] == 280 )
      v65 = v39 - 1;
    this = *p_animState_5__3;
    if ( !*p_animState_5__3 )
      goto LABEL_100;
    v48 = UnityEngine_AnimationState__get_normalizedTime((UnityEngine_AnimationState_o *)this, 0LL);
    v3->fields._startNormalizedTime_5__4 = UnityEngine_Mathf__FloorToInt(v48, 0LL);
    goto LABEL_75;
  }
LABEL_78:
  v50 = *p_targetSimpleAnimation_5__2;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v50, 0LL, 0LL) )
  {
    this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)v3->fields._targetSimpleAnimation_5__2;
    v3->fields._time_5__5 = -1.0;
    if ( !this )
      goto LABEL_100;
    States = (System_Collections_Generic_IEnumerable_TSource__o *)SimpleAnimation__GetStates(
                                                                    (SimpleAnimation_o *)this,
                                                                    0LL);
    StonePurchaseNotificationMenu_DialogOpenQueue = System_Linq_Enumerable__First_StonePurchaseNotificationMenu_DialogOpenQueue_(
                                                      States,
                                                      (const MethodInfo_1A8F68C *)Method_System_Linq_Enumerable_First_SimpleAnimation_State___);
    v3->fields._state_5__6 = (struct SimpleAnimation_State_o *)StonePurchaseNotificationMenu_DialogOpenQueue;
    p_state_5__6 = &v3->fields._state_5__6;
    sub_B2C2F8(&v3->fields._state_5__6, StonePurchaseNotificationMenu_DialogOpenQueue);
    goto LABEL_84;
  }
LABEL_96:
  this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)v3->fields.callback;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_WarBoardControlUiDataComponent__StartSyncAnimation_d__43_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
  return System_String__op_Equality(a->fields.key, this->fields.key, 0LL);
}