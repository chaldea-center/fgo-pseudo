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

  if ( (byte_40F899B & 1) == 0 )
  {
    sub_B16FFC(&WarBoardControlUiDataComponent_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_2714/*"Barrier"*/, v8);
    byte_40F899B = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarBoardControlUiDataComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_2714/*"Barrier"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_2714/*"Barrier"*/;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall WarBoardControlUiDataComponent___ctor(WarBoardControlUiDataComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Array_o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_RuntimeFieldHandle_o v38; // 0:w1.4

  if ( (byte_40F899A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData___ctor__, v4);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__TypeInfo, v5);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v6);
    sub_B16FFC(&float___TypeInfo, v7);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__64464566F592BAB0A74DD80EB47024C0ECA2BB914D37B27E78F5532363736E1B,
      v8);
    byte_40F899A = 1;
  }
  v9 = (System_Array_o *)sub_B17014(float___TypeInfo, 7LL, v2);
  v38.fields.value = Field__PrivateImplementationDetails__64464566F592BAB0A74DD80EB47024C0ECA2BB914D37B27E78F5532363736E1B;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v9, v38, 0LL);
  this->fields.AdjustOffsetY = (struct System_Single_array *)v9;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.AdjustOffsetY,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__TypeInfo,
                                                                                                  v16,
                                                                                                  v17,
                                                                                                  v18,
                                                                                                  v19);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData___ctor__);
  this->fields.listUiData = (struct System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__o *)v20;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.listUiData,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v27,
                                                                                                  v28,
                                                                                                  v29,
                                                                                                  v30);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v31,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.listUiDataKey = (struct System_Collections_Generic_List_string__o *)v31;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.listUiDataKey,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
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

  if ( (byte_40F8984 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_WarBoardPieceBaseComponent___, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_WarBoardSquareComponent___, v3);
    byte_40F8984 = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_WarBoardPieceBaseComponent___);
  this->fields.pieceComponent = (struct WarBoardPieceBaseComponent_o *)Component_WebViewObject;
  sub_B16F98(
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
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_WarBoardSquareComponent___);
  this->fields.squareComponent = (struct WarBoardSquareComponent_o *)v11;
  sub_B16F98(
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
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **current; // x1
  struct System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__o *listUiData; // x22
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v28; // x23
  peRenderTexture_ChangeLayerObject_o *v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  peRenderTexture_ChangeLayerObject_o *v32; // x21
  struct UnityEngine_Renderer_o *renderer; // x23
  UnityEngine_Renderer_c *klass; // x8
  unsigned __int64 v35; // x27
  UnityEngine_Object_o *v36; // x22
  struct UnityEngine_Material_o *orgMaterial; // x22
  UnityEngine_Material_c *v38; // x8
  unsigned __int64 v39; // x23
  UnityEngine_Object_o *v40; // x21
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  int32_t v45; // w19
  int v46; // w20
  System_Collections_Generic_List_Enumerator_T__o v48; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v49; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40F898F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, targetObject);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__GetEnumerator__, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&Method_System_Predicate_WarBoardControlUiDataComponent_UiData___ctor__, v10);
    sub_B16FFC(&System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo, v11);
    sub_B16FFC(&Method_WarBoardControlUiDataComponent___c__DisplayClass34_0__CheckCorrectActiveObject_b__0__, v12);
    sub_B16FFC(&WarBoardControlUiDataComponent___c__DisplayClass34_0_TypeInfo, v13);
    byte_40F898F = 1;
  }
  memset(&v49, 0, sizeof(v49));
  listUiDataKey = this->fields.listUiDataKey;
  if ( !listUiDataKey )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v48,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)listUiDataKey,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v49 = v48;
  while ( 1 )
  {
    do
    {
LABEL_26:
      if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v49,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
      {
        v45 = 0;
        v46 = 7;
        goto LABEL_31;
      }
      v15 = sub_B170CC(WarBoardControlUiDataComponent___c__DisplayClass34_0_TypeInfo, v41, v42, v43, v44);
      WarBoardControlUiDataComponent___c__DisplayClass34_0___ctor(
        (WarBoardControlUiDataComponent___c__DisplayClass34_0_o *)v15,
        0LL);
      if ( !v15 )
        sub_B170D4();
      current = (System_Int32_array **)v49.fields.current;
      *(_QWORD *)(v15 + 16) = v49.fields.current;
      sub_B16F98((BattleServantConfConponent_o *)(v15 + 16), current, v16, v17, v18, v19, v20, v21);
      listUiData = this->fields.listUiData;
      v28 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                       System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo,
                                                                       v24,
                                                                       v25,
                                                                       v26,
                                                                       v27);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v28,
        (Il2CppObject *)v15,
        Method_WarBoardControlUiDataComponent___c__DisplayClass34_0__CheckCorrectActiveObject_b__0__,
        (const MethodInfo_2B0B204 *)Method_System_Predicate_WarBoardControlUiDataComponent_UiData___ctor__);
      if ( !listUiData )
        sub_B170D4();
      v29 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
              (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)listUiData,
              (System_Predicate_T__o *)v28,
              (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__);
      v32 = v29;
    }
    while ( !v29 );
    renderer = v29->fields.renderer;
    if ( !renderer )
      sub_B170D4();
    klass = renderer[1].klass;
    if ( (int)klass >= 1 )
      break;
LABEL_17:
    orgMaterial = v32->fields.orgMaterial;
    if ( !orgMaterial )
      sub_B170D4();
    v38 = orgMaterial[1].klass;
    if ( (int)v38 >= 1 )
    {
      v39 = 0LL;
      while ( 1 )
      {
        if ( v39 >= (unsigned int)v38 )
        {
          sub_B17100(v29, v30, v31);
          sub_B170A0();
        }
        v40 = (UnityEngine_Object_o *)*((_QWORD *)&orgMaterial[1].monitor + v39);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v29 = (peRenderTexture_ChangeLayerObject_o *)UnityEngine_Object__op_Equality(
                                                       (UnityEngine_Object_o *)targetObject,
                                                       v40,
                                                       0LL);
        if ( ((unsigned __int8)v29 & 1) != 0 )
          break;
        LODWORD(v38) = orgMaterial[1].klass;
        if ( (__int64)++v39 >= (int)v38 )
          goto LABEL_26;
      }
      v45 = 0;
      goto LABEL_30;
    }
  }
  v35 = 0LL;
  while ( 1 )
  {
    if ( v35 >= (unsigned int)klass )
    {
      sub_B17100(v29, v30, v31);
      sub_B170A0();
    }
    v36 = (UnityEngine_Object_o *)*((_QWORD *)&renderer[1].monitor + v35);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v29 = (peRenderTexture_ChangeLayerObject_o *)UnityEngine_Object__op_Equality(
                                                   (UnityEngine_Object_o *)targetObject,
                                                   v36,
                                                   0LL);
    if ( ((unsigned __int8)v29 & 1) != 0 )
      break;
    LODWORD(klass) = renderer[1].klass;
    if ( (__int64)++v35 >= (int)klass )
      goto LABEL_17;
  }
  v45 = 1;
LABEL_30:
  v46 = 9;
LABEL_31:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v49,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  if ( v46 == 9 )
    return v45;
  else
    return -1;
}


int32_t __fastcall WarBoardControlUiDataComponent__GetAdjustType(
        WarBoardControlUiDataComponent_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  const MethodInfo *v4; // x1
  WarBoardData_o *monitor; // x20
  int32_t SquareIndex; // w0
  const MethodInfo *v7; // x2
  WarBoardPieceData_o *Piece_22604968; // x0
  WebViewManager_o *v10; // x0
  const MethodInfo *v11; // x1
  WarBoardData_o *v12; // x20
  int32_t v13; // w0
  const MethodInfo *v14; // x2
  WarBoardSquareData_o *Square; // x0
  const MethodInfo *v16; // x1
  struct WarBoardSquareComponent_o *squareComponent; // x8
  WarBoardControlUiDataComponent_o *uiDataComp; // x0
  WebViewManager_o *v19; // x0
  const MethodInfo *v20; // x1
  WarBoardData_o *v21; // x20
  int32_t v22; // w0
  const MethodInfo *v23; // x3
  WebViewManager_o *v24; // x0
  const MethodInfo *v25; // x1
  WarBoardData_o *v26; // x20
  int32_t v27; // w0
  const MethodInfo *v28; // x2
  WarBoardTreasureData_o *Treasure; // x0
  WebViewManager_o *v30; // x0
  const MethodInfo *v31; // x1
  WarBoardData_o *v32; // x20
  int32_t v33; // w0
  const MethodInfo *v34; // x2
  WarBoardItemData_o *Item; // x0

  if ( (byte_40F8992 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_40F8992 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  monitor = (WarBoardData_o *)Instance[4].monitor;
  SquareIndex = WarBoardControlUiDataComponent__get_SquareIndex(this, v4);
  if ( !monitor )
    goto LABEL_31;
  Piece_22604968 = WarBoardData__GetPiece_22604968(monitor, SquareIndex, v7);
  if ( Piece_22604968 )
  {
    if ( WarBoardPieceData__get_isMaster(Piece_22604968, 0LL) )
      return 6;
    else
      return 5;
  }
  v10 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v10 )
    goto LABEL_31;
  v12 = (WarBoardData_o *)v10[4].monitor;
  v13 = WarBoardControlUiDataComponent__get_SquareIndex(this, v11);
  if ( !v12 )
    goto LABEL_31;
  Square = WarBoardData__GetSquare(v12, v13, v14);
  if ( Square )
  {
    squareComponent = Square->fields.squareComponent;
    if ( !squareComponent )
      goto LABEL_31;
    uiDataComp = squareComponent->fields.uiDataComp;
    if ( uiDataComp && WarBoardControlUiDataComponent__IsDispFlagObjects(uiDataComp, v16) )
      return 4;
  }
  v19 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v19 )
    goto LABEL_31;
  v21 = (WarBoardData_o *)v19[4].monitor;
  v22 = WarBoardControlUiDataComponent__get_SquareIndex(this, v20);
  if ( !v21 )
    goto LABEL_31;
  if ( WarBoardData__GetWall(v21, v22, 0, v23) )
    return 3;
  v24 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v24 )
    goto LABEL_31;
  v26 = (WarBoardData_o *)v24[4].monitor;
  v27 = WarBoardControlUiDataComponent__get_SquareIndex(this, v25);
  if ( !v26 )
    goto LABEL_31;
  Treasure = WarBoardData__GetTreasure(v26, v27, v28);
  if ( Treasure && !Treasure->fields._isUse_k__BackingField )
    return 1;
  v30 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v30
    || (v32 = (WarBoardData_o *)v30[4].monitor, v33 = WarBoardControlUiDataComponent__get_SquareIndex(this, v31), !v32) )
  {
LABEL_31:
    sub_B170D4();
  }
  Item = WarBoardData__GetItem(v32, v33, v34);
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
  System_Collections_Generic_IEnumerable_SimpleAnimation_State__o *States; // x0
  System_Collections_Generic_IEnumerable_SimpleAnimation_State__c *klass; // x8
  System_Collections_Generic_IEnumerable_SimpleAnimation_State__o *v12; // x19
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v16; // x19
  __int64 v17; // x8
  unsigned __int64 v18; // x10
  int *v19; // x11
  __int64 v20; // x0
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  int *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x21
  __int64 v27; // x8
  unsigned __int64 v28; // x10
  SimpleAnimation_State_c **v29; // x11
  __int64 v30; // x0
  System_String_o *v31; // x0
  System_String_o *v32; // x0
  __int64 v33; // x8
  unsigned __int64 v34; // x10
  SimpleAnimation_State_c **v35; // x11
  __int64 v36; // x0
  System_String_o *v37; // x20
  int v38; // w8
  __int64 v39; // x8
  unsigned __int64 v40; // x10
  int *v41; // x11
  __int64 v42; // x0
  int v44; // [xsp+0h] [xbp-40h]

  if ( (byte_40F8998 & 1) == 0 )
  {
    sub_B16FFC(&System_IDisposable_TypeInfo, animation);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v6);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v7);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v9);
    byte_40F8998 = 1;
  }
  if ( !animation || (States = SimpleAnimation__GetStates(animation, 0LL)) == 0LL )
    sub_B170D4();
  klass = States->klass;
  v12 = States;
  if ( *(_WORD *)&States->klass->_2.bitflags1 )
  {
    v13 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
    {
      ++v13;
      p_offset += 4;
      if ( v13 >= *(unsigned __int16 *)&States->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_9:
    p_method = sub_AAFEF8(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
  }
  v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_SimpleAnimation_State__o *, _QWORD))p_method)(
          v12,
          *(_QWORD *)(p_method + 8));
  if ( !v16 )
    sub_B170D4();
  do
  {
    v17 = *(_QWORD *)v16;
    if ( *(_WORD *)(*(_QWORD *)v16 + 298LL) )
    {
      v18 = 0LL;
      v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v19 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v18;
        v19 += 4;
        if ( v18 >= *(unsigned __int16 *)(*(_QWORD *)v16 + 298LL) )
          goto LABEL_16;
      }
      v20 = v17 + 16LL * *v19 + 312;
    }
    else
    {
LABEL_16:
      v20 = sub_AAFEF8(v16, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v16, *(_QWORD *)(v20 + 8)) & 1) == 0 )
    {
      v37 = 0LL;
      v38 = 69;
      goto LABEL_43;
    }
    v21 = *(_QWORD *)v16;
    if ( *(_WORD *)(*(_QWORD *)v16 + 298LL) )
    {
      v22 = 0LL;
      v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v23 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
      {
        ++v22;
        v23 += 4;
        if ( v22 >= *(unsigned __int16 *)(*(_QWORD *)v16 + 298LL) )
          goto LABEL_23;
      }
      v24 = v21 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_23:
      v24 = sub_AAFEF8(v16, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
    }
    v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v16, *(_QWORD *)(v24 + 8));
    v26 = v25;
    if ( !v25 )
      sub_B170D4();
    v27 = *(_QWORD *)v25;
    if ( *(_WORD *)(*(_QWORD *)v25 + 298LL) )
    {
      v28 = 0LL;
      v29 = (SimpleAnimation_State_c **)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *(v29 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v28;
        v29 += 2;
        if ( v28 >= *(unsigned __int16 *)(*(_QWORD *)v25 + 298LL) )
          goto LABEL_30;
      }
      v30 = v27 + 16LL * (*(_DWORD *)v29 + 9) + 312;
    }
    else
    {
LABEL_30:
      v30 = sub_AAFEF8(v25, SimpleAnimation_State_TypeInfo, 9LL);
    }
    v31 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v26, *(_QWORD *)(v30 + 8));
    if ( !v31 )
      sub_B170D4();
    v32 = System_String__ToLower(v31, 0LL);
    if ( !v32 )
      sub_B170D4();
  }
  while ( !System_String__EndsWith(v32, suffix, 0LL) );
  v33 = *(_QWORD *)v26;
  if ( *(_WORD *)(*(_QWORD *)v26 + 298LL) )
  {
    v34 = 0LL;
    v35 = (SimpleAnimation_State_c **)(*(_QWORD *)(v33 + 176) + 8LL);
    while ( *(v35 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v34;
      v35 += 2;
      if ( v34 >= *(unsigned __int16 *)(*(_QWORD *)v26 + 298LL) )
        goto LABEL_39;
    }
    v36 = v33 + 16LL * (*(_DWORD *)v35 + 9) + 312;
  }
  else
  {
LABEL_39:
    v36 = sub_AAFEF8(v26, SimpleAnimation_State_TypeInfo, 9LL);
  }
  v37 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v26, *(_QWORD *)(v36 + 8));
  v38 = 71;
LABEL_43:
  v44 = v38;
  v39 = *(_QWORD *)v16;
  if ( *(_WORD *)(*(_QWORD *)v16 + 298LL) )
  {
    v40 = 0LL;
    v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
    {
      ++v40;
      v41 += 4;
      if ( v40 >= *(unsigned __int16 *)(*(_QWORD *)v16 + 298LL) )
        goto LABEL_47;
    }
    v42 = v39 + 16LL * *v41 + 312;
  }
  else
  {
LABEL_47:
    v42 = sub_AAFEF8(v16, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v42)(v16, *(_QWORD *)(v42 + 8));
  if ( v44 == 69 )
    return 0LL;
  return v37;
}


bool __fastcall WarBoardControlUiDataComponent__IsDispFlagObjects(
        WarBoardControlUiDataComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct UnityEngine_GameObject_array *flagObjects; // x19
  int max_length; // w8
  unsigned int v5; // w20
  UnityEngine_GameObject_o *v6; // x0

  if ( this->fields.compType == 1 )
    return 0;
  flagObjects = this->fields.flagObjects;
  if ( !flagObjects )
LABEL_12:
    sub_B170D4();
  max_length = flagObjects->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    v6 = flagObjects->m_Items[v5];
    if ( !v6 )
      goto LABEL_12;
    this = (WarBoardControlUiDataComponent_o *)UnityEngine_GameObject__get_activeInHierarchy(v6, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 1;
    max_length = flagObjects->max_length;
    if ( (int)++v5 >= max_length )
      return 0;
  }
}


bool __fastcall WarBoardControlUiDataComponent__IsDispOverlapObjects(
        WarBoardControlUiDataComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct UnityEngine_GameObject_array *onOverlapObjects; // x19
  int max_length; // w8
  unsigned int v5; // w20
  UnityEngine_GameObject_o *v6; // x0

  if ( this->fields.compType == 1 )
    return 0;
  onOverlapObjects = this->fields.onOverlapObjects;
  if ( !onOverlapObjects )
LABEL_12:
    sub_B170D4();
  max_length = onOverlapObjects->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    v6 = onOverlapObjects->m_Items[v5];
    if ( !v6 )
      goto LABEL_12;
    this = (WarBoardControlUiDataComponent_o *)UnityEngine_GameObject__get_activeInHierarchy(v6, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 1;
    max_length = onOverlapObjects->max_length;
    if ( (int)++v5 >= max_length )
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
  const MethodInfo *v5; // x2
  WarBoardData_o *monitor; // x20
  const MethodInfo *v7; // x2
  WarBoardItemData_o *Item; // x0
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2
  WarBoardTreasureData_o *Treasure; // x0
  const MethodInfo *v13; // x3

  if ( (byte_40F8990 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&squareIndex);
    byte_40F8990 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (monitor = (WarBoardData_o *)Instance[4].monitor) == 0LL )
    sub_B170D4();
  return WarBoardData__GetPiece_22604968((WarBoardData_o *)Instance[4].monitor, squareIndex, v5)
      || (Item = WarBoardData__GetItem(monitor, squareIndex, v7)) != 0LL && !Item->fields._isUse_k__BackingField
      || WarBoardData__GetEffect(monitor, squareIndex, v9)
      || (Treasure = WarBoardData__GetTreasure(monitor, squareIndex, v10)) != 0LL
      && !Treasure->fields._isUse_k__BackingField
      || WarBoardData__GetWall(monitor, squareIndex, 0, v13) != 0LL;
}


bool __fastcall WarBoardControlUiDataComponent__IsPlayingAnimation(
        WarBoardControlUiDataComponent_o *this,
        SimpleAnimation_o *animation,
        System_String_o *suffix,
        const MethodInfo *method)
{
  System_String_o *AnimationStateName; // x20
  SimpleAnimation_State_o *State; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v9; // x19
  unsigned __int64 v10; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_40F8997 & 1) == 0 )
  {
    this = (WarBoardControlUiDataComponent_o *)sub_B16FFC(&SimpleAnimation_State_TypeInfo, animation);
    byte_40F8997 = 1;
  }
  AnimationStateName = WarBoardControlUiDataComponent__GetAnimationStateName(this, animation, suffix, method);
  if ( System_String__IsNullOrEmpty(AnimationStateName, 0LL) )
    return 0;
  if ( !animation )
    goto LABEL_15;
  if ( !SimpleAnimation__IsPlaying(animation, AnimationStateName, 0LL) )
    return 0;
  State = SimpleAnimation__GetState(animation, AnimationStateName, 0LL);
  if ( !State )
LABEL_15:
    sub_B170D4();
  klass = State->klass;
  v9 = State;
  if ( *(_WORD *)&State->klass->_2.bitflags1 )
  {
    v10 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v10;
      p_offset += 2;
      if ( v10 >= *(unsigned __int16 *)&State->klass->_2.bitflags1 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5].method;
  }
  else
  {
LABEL_11:
    p_method = sub_AAFEF8(State, SimpleAnimation_State_TypeInfo, 5LL);
  }
  return (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(v9, *(_QWORD *)(p_method + 8)) < 1.0;
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
  WebViewManager_o *Instance; // x0
  const MethodInfo *v9; // x1
  WarBoardData_o *monitor; // x20
  int32_t SquareIndex; // w0
  struct System_Collections_Generic_List_string__o *listUiDataKey; // x8
  int32_t v13; // w19
  System_String_array *v14; // x0
  const MethodInfo *v15; // x3
  UnityEngine_Object_o *pieceComponent; // x20
  __int64 v17; // x2
  struct WarBoardPieceBaseComponent_o *v18; // x8
  struct WarBoardPieceData_o *pieceData; // x21
  System_Int32_array *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  System_Int32_array *v23; // x20
  unsigned int max_length; // w8
  WebViewManager_o *v25; // x0
  WebViewManager_o *v26; // x8
  struct System_Collections_Generic_List_string__o *v27; // x0
  WarBoardData_o *v28; // x19
  System_String_array *v29; // x0
  const MethodInfo *v30; // x3

  if ( (byte_40F8999 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__ToArray__, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5);
    byte_40F8999 = 1;
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
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        monitor = (WarBoardData_o *)Instance[4].monitor;
        SquareIndex = WarBoardControlUiDataComponent__get_SquareIndex(this, v9);
        listUiDataKey = this->fields.listUiDataKey;
        if ( listUiDataKey )
        {
          v13 = SquareIndex;
          v14 = (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)listUiDataKey,
                                         (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_string__ToArray__);
          if ( monitor )
          {
            WarBoardData__UpdateUiData(monitor, v13, v14, v15);
            return;
          }
        }
      }
LABEL_29:
      sub_B170D4();
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
    if ( UnityEngine_Object__op_Inequality(pieceComponent, 0LL, 0LL) )
    {
      v18 = this->fields.pieceComponent;
      if ( !v18 )
        goto LABEL_29;
      pieceData = v18->fields.pieceData;
      v20 = (System_Int32_array *)sub_B17014(int___TypeInfo, 3LL, v17);
      if ( !pieceData )
        goto LABEL_29;
      v23 = v20;
      if ( !v20 )
        goto LABEL_29;
      max_length = v20->max_length;
      if ( !max_length
        || (v20->m_Items[1] = pieceData->fields._forceId_k__BackingField, max_length == 1)
        || (v20->m_Items[2] = pieceData->fields._groupId_k__BackingField, max_length <= 2) )
      {
        sub_B17100(v20, v21, v22);
        sub_B170A0();
      }
      v20->m_Items[3] = pieceData->fields._index_k__BackingField;
      v25 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !v25 )
        goto LABEL_29;
      v26 = v25;
      v27 = this->fields.listUiDataKey;
      if ( !v27 )
        goto LABEL_29;
      v28 = (WarBoardData_o *)v26[4].monitor;
      v29 = (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v27,
                                     (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_string__ToArray__);
      if ( !v28 )
        goto LABEL_29;
      WarBoardData__UpdateUiData_22626432(v28, v23, v29, v30);
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
  bool IsNullOrEmpty; // w8
  System_String_o *result; // x0

  AnimationStateName = WarBoardControlUiDataComponent__GetAnimationStateName(this, animation, suffix, method);
  IsNullOrEmpty = System_String__IsNullOrEmpty(AnimationStateName, 0LL);
  result = 0LL;
  if ( !IsNullOrEmpty )
  {
    if ( !animation )
      sub_B170D4();
    SimpleAnimation__Play_16380456(animation, AnimationStateName, 0LL);
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
  __int64 v4; // x4
  __int64 v8; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_40F8995 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_TypeInfo, animation);
    byte_40F8995 = 1;
  }
  v8 = sub_B170CC(WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_TypeInfo, animation, uiData, method, v4);
  WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42___ctor(
    (WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *)v8,
    0,
    0LL);
  if ( !v8 )
    sub_B170D4();
  *(_QWORD *)(v8 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v8 + 40) = animation;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 40), (System_Int32_array **)animation, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v8 + 48) = uiData;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 48), (System_Int32_array **)uiData, v21, v22, v23, v24, v25, v26);
  return (System_Collections_IEnumerator_o *)v8;
}


System_Collections_IEnumerator_o *__fastcall WarBoardControlUiDataComponent__PlayStartUiDataAnim(
        WarBoardControlUiDataComponent_o *this,
        SimpleAnimation_o *animation,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x21
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

  if ( (byte_40F8994 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_TypeInfo, animation);
    byte_40F8994 = 1;
  }
  v7 = sub_B170CC(WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_TypeInfo, animation, method, v3, v4);
  WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41___ctor(
    (WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = animation;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)animation, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v7;
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
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **current; // x1
  System_String_o **v30; // x20
  struct System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__o *listUiData; // x22
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v36; // x23
  const MethodInfo *v37; // x3
  WarBoardControlUiDataComponent_UiData_o *v38; // x21
  System_String_o *v39; // x20
  WarBoardControlUiDataComponent_c *v40; // x0
  WarBoardServantPieceBuffTurnComponent_o *v41; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x22
  WarBoardServantPieceBuffTurnComponent_o *v45; // x20
  struct UnityEngine_GameObject_array *animationObjects; // x23
  int max_length; // w8
  int i; // w22
  UnityEngine_GameObject_o *v49; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  const MethodInfo *v51; // x3
  WarBoardServantPieceBuffTurnComponent_o *v52; // [xsp+8h] [xbp-98h]
  struct WarBoardPieceBaseComponent_o *v53; // [xsp+10h] [xbp-90h]
  struct WarBoardPieceBaseComponent_o *v54; // [xsp+10h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v55; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v56; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_40F898C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v4);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__GetEnumerator__, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&Method_System_Predicate_WarBoardControlUiDataComponent_UiData___ctor__, v9);
    sub_B16FFC(&System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo, v10);
    sub_B16FFC(&Method_WarBoardControlUiDataComponent___c__DisplayClass26_0__ResumeUiData_b__0__, v11);
    sub_B16FFC(&WarBoardControlUiDataComponent___c__DisplayClass26_0_TypeInfo, v12);
    sub_B16FFC(&WarBoardControlUiDataComponent_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_20239/*"loop"*/, v14);
    byte_40F898C = 1;
  }
  memset(&v56, 0, sizeof(v56));
  listUiDataKey = this->fields.listUiDataKey;
  if ( !listUiDataKey )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v55,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)listUiDataKey,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v16 = 0LL;
  v17 = 0LL;
  v56 = v55;
LABEL_5:
  v52 = v16;
  v53 = v17;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v56,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    v22 = sub_B170CC(WarBoardControlUiDataComponent___c__DisplayClass26_0_TypeInfo, v18, v19, v20, v21);
    WarBoardControlUiDataComponent___c__DisplayClass26_0___ctor(
      (WarBoardControlUiDataComponent___c__DisplayClass26_0_o *)v22,
      0LL);
    if ( !v22 )
      sub_B170D4();
    current = (System_Int32_array **)v56.fields.current;
    *(_QWORD *)(v22 + 16) = v56.fields.current;
    v30 = (System_String_o **)(v22 + 16);
    sub_B16F98((BattleServantConfConponent_o *)(v22 + 16), current, v23, v24, v25, v26, v27, v28);
    listUiData = this->fields.listUiData;
    v36 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                     System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo,
                                                                     v32,
                                                                     v33,
                                                                     v34,
                                                                     v35);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v36,
      (Il2CppObject *)v22,
      Method_WarBoardControlUiDataComponent___c__DisplayClass26_0__ResumeUiData_b__0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_WarBoardControlUiDataComponent_UiData___ctor__);
    if ( !listUiData )
      sub_B170D4();
    v38 = (WarBoardControlUiDataComponent_UiData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                       (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)listUiData,
                                                       (System_Predicate_T__o *)v36,
                                                       (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__);
    if ( v38 )
    {
      WarBoardControlUiDataComponent__SetUiDataTurnObjects(this, 1, v38, v37);
      v39 = *v30;
      v40 = WarBoardControlUiDataComponent_TypeInfo;
      if ( (BYTE3(WarBoardControlUiDataComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
        v40 = WarBoardControlUiDataComponent_TypeInfo;
      }
      v41 = (WarBoardServantPieceBuffTurnComponent_o *)System_String__op_Equality(
                                                         v39,
                                                         v40->static_fields->UI_DATA_KEY_BARRIER,
                                                         0LL);
      if ( ((unsigned __int8)v41 & 1) != 0
        && ((pieceComponent = this->fields.pieceComponent) != 0LL
          ? (v41 = (WarBoardServantPieceBuffTurnComponent_o *)this->fields.pieceComponent)
          : (v41 = (WarBoardServantPieceBuffTurnComponent_o *)v53),
            pieceComponent) )
      {
        if ( !v41 )
          sub_B170D4();
        v41 = (WarBoardServantPieceBuffTurnComponent_o *)((__int64 (__fastcall *)(WarBoardServantPieceBuffTurnComponent_o *, const char *))v41->klass[1]._1.gc_desc)(
                                                           v41,
                                                           v41->klass[1]._1.name);
        v45 = v41;
        if ( !v41 )
          v41 = v52;
        if ( v45 )
        {
          if ( !v41 )
            sub_B170D4();
          WarBoardServantPieceBuffTurnComponent__UpdateDisp(v41, 1, 0LL);
        }
        else
        {
          v45 = v52;
        }
      }
      else
      {
        v45 = v52;
        pieceComponent = v53;
      }
      animationObjects = v38->fields.animationObjects;
      if ( !animationObjects )
        sub_B170D4();
      max_length = animationObjects->max_length;
      v16 = v45;
      v17 = pieceComponent;
      if ( max_length >= 1 )
      {
        v54 = pieceComponent;
        for ( i = 0; i < max_length; ++i )
        {
          if ( i >= (unsigned int)max_length )
          {
            sub_B17100(v41, v42, v43);
            sub_B170A0();
          }
          v49 = animationObjects->m_Items[i];
          if ( !v49 )
            sub_B170D4();
          Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              v49,
                                                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v41 = (WarBoardServantPieceBuffTurnComponent_o *)UnityEngine_Object__op_Equality(
                                                             Component_srcLineSprite,
                                                             0LL,
                                                             0LL);
          if ( ((unsigned __int8)v41 & 1) == 0 )
            v41 = (WarBoardServantPieceBuffTurnComponent_o *)WarBoardControlUiDataComponent__PlayAnimation(
                                                               this,
                                                               (SimpleAnimation_o *)Component_srcLineSprite,
                                                               (System_String_o *)StringLiteral_20239/*"loop"*/,
                                                               v51);
          max_length = animationObjects->max_length;
        }
        v17 = v54;
        v16 = v45;
      }
      goto LABEL_5;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v56,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


void __fastcall WarBoardControlUiDataComponent__ResumeUiDataAll(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x2
  _QWORD *monitor; // x8
  __int64 v7; // x20
  int v8; // w8
  unsigned int v9; // w21
  __int64 v10; // x8
  int32_t v11; // w19

  if ( (byte_40F8989 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v1);
    sub_B16FFC(&WarBoardControlUiDataComponent_TypeInfo, v2);
    byte_40F8989 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  monitor = Instance[4].monitor;
  if ( !monitor )
    goto LABEL_15;
  v7 = monitor[7];
  if ( !v7 )
    goto LABEL_15;
  v8 = *(_DWORD *)(v7 + 24);
  if ( v8 >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= v8 )
      {
        sub_B17100(Instance, v4, v5);
        sub_B170A0();
      }
      v10 = *(_QWORD *)(v7 + 8LL * (int)v9 + 32);
      if ( !v10 )
        break;
      v11 = *(_DWORD *)(v10 + 16);
      if ( (BYTE3(WarBoardControlUiDataComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
      }
      WarBoardControlUiDataComponent__ResumeUiDataAll_22617480(v11, v4);
      v8 = *(_DWORD *)(v7 + 24);
      if ( (int)++v9 >= v8 )
        return;
    }
LABEL_15:
    sub_B170D4();
  }
}


void __fastcall WarBoardControlUiDataComponent__ResumeUiDataAll_22617480(int32_t squareIndex, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  const MethodInfo *v5; // x2
  WarBoardData_o *monitor; // x0
  WarBoardPieceData_o *Piece_22604968; // x0
  const MethodInfo *v8; // x1
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x8
  WarBoardControlUiDataComponent_o *uiDataComp; // x0
  WebViewManager_o *v11; // x0
  const MethodInfo *v12; // x2
  WarBoardData_o *v13; // x0
  WarBoardSquareData_o *Square; // x0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  struct WarBoardSquareComponent_o *squareComponent; // x8
  WarBoardControlUiDataComponent_o *v18; // x0

  if ( (byte_40F898A & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_B16FFC(&WarBoardControlUiDataComponent_TypeInfo, v3);
    byte_40F898A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  monitor = (WarBoardData_o *)Instance[4].monitor;
  if ( !monitor )
    goto LABEL_19;
  Piece_22604968 = WarBoardData__GetPiece_22604968(monitor, squareIndex, v5);
  if ( Piece_22604968 )
  {
    pieceComponent = Piece_22604968->fields.pieceComponent;
    if ( !pieceComponent )
      goto LABEL_19;
    uiDataComp = pieceComponent->fields.uiDataComp;
    if ( uiDataComp )
      WarBoardControlUiDataComponent__ResumeUiData(uiDataComp, v8);
  }
  v11 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v11 )
    goto LABEL_19;
  v13 = (WarBoardData_o *)v11[4].monitor;
  if ( !v13 )
    goto LABEL_19;
  Square = WarBoardData__GetSquare(v13, squareIndex, v12);
  if ( !Square )
    goto LABEL_15;
  squareComponent = Square->fields.squareComponent;
  if ( !squareComponent )
LABEL_19:
    sub_B170D4();
  v18 = squareComponent->fields.uiDataComp;
  if ( v18 )
    WarBoardControlUiDataComponent__ResumeUiData(v18, v15);
LABEL_15:
  if ( (BYTE3(WarBoardControlUiDataComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  }
  WarBoardControlUiDataComponent__UpdateAdjustSituationAll_22616996(squareIndex, 1, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardControlUiDataComponent__SetUiData(
        WarBoardControlUiDataComponent_o *this,
        System_String_o *key,
        bool isDisp,
        const MethodInfo *method)
{
  __int64 v4; // x4
  _BOOL4 v5; // w19
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x23
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  WarBoardManager_TaskList_o **v25; // x22
  struct System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__o *listUiData; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v31; // x24
  peRenderTexture_ChangeLayerObject_o *v32; // x0
  WarBoardControlUiDataComponent_UiData_o *v33; // x21
  System_Collections_Generic_List_WarBoardManager_TaskList__o *listUiDataKey; // x0
  struct System_Collections_Generic_List_string__o *v35; // x0
  WarBoardManager_TaskList_o *v36; // x1
  const MethodInfo *v37; // x3
  const MethodInfo *v38; // x1
  const MethodInfo *v39; // x2
  int32_t SquareIndex; // w23
  System_String_o *v41; // x22
  WarBoardControlUiDataComponent_c *v42; // x0
  const MethodInfo *v43; // x1
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0
  WarBoardServantPieceBuffTurnComponent_o *v45; // x0
  UnityEngine_Coroutine_o *v46; // x0
  __int64 v47; // x1
  const MethodInfo *v48; // x2
  struct UnityEngine_GameObject_array *animationObjects; // x23
  int max_length; // w8
  unsigned int v51; // w24
  UnityEngine_GameObject_o *v52; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  const MethodInfo *v54; // x3
  System_Collections_IEnumerator_o *started; // x0

  v5 = isDisp;
  if ( (byte_40F898B & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, key);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Contains__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Remove__, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&Method_System_Predicate_WarBoardControlUiDataComponent_UiData___ctor__, v13);
    sub_B16FFC(&System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo, v14);
    sub_B16FFC(&Method_WarBoardControlUiDataComponent___c__DisplayClass25_0__SetUiData_b__0__, v15);
    sub_B16FFC(&WarBoardControlUiDataComponent___c__DisplayClass25_0_TypeInfo, v16);
    sub_B16FFC(&WarBoardControlUiDataComponent_TypeInfo, v17);
    byte_40F898B = 1;
  }
  v18 = sub_B170CC(WarBoardControlUiDataComponent___c__DisplayClass25_0_TypeInfo, key, isDisp, method, v4);
  WarBoardControlUiDataComponent___c__DisplayClass25_0___ctor(
    (WarBoardControlUiDataComponent___c__DisplayClass25_0_o *)v18,
    0LL);
  if ( !v18 )
    goto LABEL_37;
  *(_QWORD *)(v18 + 16) = key;
  v25 = (WarBoardManager_TaskList_o **)(v18 + 16);
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)key, v19, v20, v21, v22, v23, v24);
  listUiData = this->fields.listUiData;
  v31 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo,
                                                                   v27,
                                                                   v28,
                                                                   v29,
                                                                   v30);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v31,
    (Il2CppObject *)v18,
    Method_WarBoardControlUiDataComponent___c__DisplayClass25_0__SetUiData_b__0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_WarBoardControlUiDataComponent_UiData___ctor__);
  if ( !listUiData )
    goto LABEL_37;
  v32 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)listUiData,
          (System_Predicate_T__o *)v31,
          (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__);
  if ( v32 )
  {
    v33 = (WarBoardControlUiDataComponent_UiData_o *)v32;
    listUiDataKey = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.listUiDataKey;
    if ( !listUiDataKey )
      goto LABEL_37;
    if ( ((System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
             listUiDataKey,
             *v25,
             (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_string__Contains__) ^ v5) & 1) != 0 )
    {
      v35 = this->fields.listUiDataKey;
      if ( !v35 )
        goto LABEL_37;
      v36 = *v25;
      if ( v5 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v35,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v36,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
        WarBoardControlUiDataComponent__SetUiDataTurnObjects(this, 1, v33, v37);
        SquareIndex = WarBoardControlUiDataComponent__get_SquareIndex(this, v38);
        if ( (BYTE3(WarBoardControlUiDataComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
        }
        WarBoardControlUiDataComponent__UpdateAdjustSituationAll_22616996(SquareIndex, 1, v39);
      }
      else
      {
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v35,
          v36,
          (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_string__Remove__);
      }
      v41 = (System_String_o *)*v25;
      v42 = WarBoardControlUiDataComponent_TypeInfo;
      if ( (BYTE3(WarBoardControlUiDataComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
        v42 = WarBoardControlUiDataComponent_TypeInfo;
      }
      if ( System_String__op_Equality(v41, v42->static_fields->UI_DATA_KEY_BARRIER, 0LL) )
      {
        pieceComponent = this->fields.pieceComponent;
        if ( pieceComponent )
        {
          v45 = (WarBoardServantPieceBuffTurnComponent_o *)((__int64 (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))pieceComponent->klass->vtable._4_get_BuffTrunNotice.method)(
                                                             pieceComponent,
                                                             pieceComponent->klass->vtable._5_Initialize.methodPtr);
          if ( v45 )
            WarBoardServantPieceBuffTurnComponent__UpdateDisp(v45, 1, 0LL);
        }
      }
      WarBoardControlUiDataComponent__LocalSave(this, v43);
      animationObjects = v33->fields.animationObjects;
      if ( !animationObjects )
        goto LABEL_37;
      max_length = animationObjects->max_length;
      if ( max_length >= 1 )
      {
        v51 = 0;
        while ( 1 )
        {
          if ( v51 >= max_length )
          {
            sub_B17100(v46, v47, v48);
            sub_B170A0();
          }
          v52 = animationObjects->m_Items[v51];
          if ( !v52 )
            break;
          Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              v52,
                                                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v46 = (UnityEngine_Coroutine_o *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
          if ( ((unsigned __int8)v46 & 1) == 0 )
          {
            if ( v5 )
              started = WarBoardControlUiDataComponent__PlayStartUiDataAnim(
                          this,
                          (SimpleAnimation_o *)Component_srcLineSprite,
                          v48);
            else
              started = WarBoardControlUiDataComponent__PlayEndUiDataAnim(
                          this,
                          (SimpleAnimation_o *)Component_srcLineSprite,
                          v33,
                          v54);
            v46 = UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
          }
          max_length = animationObjects->max_length;
          if ( (int)++v51 >= max_length )
            return;
        }
LABEL_37:
        sub_B170D4();
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
  struct System_Collections_Generic_List_string__o *v7; // x0

  if ( (byte_40F898D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_string__AddRange__, keys);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Clear__, v5);
    byte_40F898D = 1;
  }
  listUiDataKey = this->fields.listUiDataKey;
  if ( !listUiDataKey
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)listUiDataKey,
          (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_string__Clear__),
        (v7 = this->fields.listUiDataKey) == 0LL) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v7,
    (System_Collections_Generic_IEnumerable_T__o *)keys,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_string__AddRange__);
}


void __fastcall WarBoardControlUiDataComponent__SetUiDataOnBattle(
        WarBoardControlUiDataComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct UnityEngine_GameObject_array *onEnterBattleTurnOffObjects; // x19
  int max_length; // w8
  unsigned int v5; // w20
  UnityEngine_GameObject_o *v6; // x0

  onEnterBattleTurnOffObjects = this->fields.onEnterBattleTurnOffObjects;
  if ( !onEnterBattleTurnOffObjects )
    goto LABEL_9;
  max_length = onEnterBattleTurnOffObjects->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= max_length )
      {
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v6 = onEnterBattleTurnOffObjects->m_Items[v5];
      if ( !v6 )
        break;
      UnityEngine_GameObject__SetActive(v6, 0, 0LL);
      max_length = onEnterBattleTurnOffObjects->max_length;
      if ( (int)++v5 >= max_length )
        return;
    }
LABEL_9:
    sub_B170D4();
  }
}


void __fastcall WarBoardControlUiDataComponent__SetUiDataOnBattleAll(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x2
  _QWORD *monitor; // x8
  __int64 v7; // x20
  int v8; // w8
  unsigned int v9; // w21
  __int64 v10; // x8
  int32_t v11; // w19

  if ( (byte_40F8985 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v1);
    sub_B16FFC(&WarBoardControlUiDataComponent_TypeInfo, v2);
    byte_40F8985 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  monitor = Instance[4].monitor;
  if ( !monitor )
    goto LABEL_15;
  v7 = monitor[7];
  if ( !v7 )
    goto LABEL_15;
  v8 = *(_DWORD *)(v7 + 24);
  if ( v8 >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= v8 )
      {
        sub_B17100(Instance, v4, v5);
        sub_B170A0();
      }
      v10 = *(_QWORD *)(v7 + 8LL * (int)v9 + 32);
      if ( !v10 )
        break;
      v11 = *(_DWORD *)(v10 + 16);
      if ( (BYTE3(WarBoardControlUiDataComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
      }
      WarBoardControlUiDataComponent__SetUiDataOnBattleAll_22616264(v11, v4);
      v8 = *(_DWORD *)(v7 + 24);
      if ( (int)++v9 >= v8 )
        return;
    }
LABEL_15:
    sub_B170D4();
  }
}


void __fastcall WarBoardControlUiDataComponent__SetUiDataOnBattleAll_22616264(
        int32_t squareIndex,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  const MethodInfo *v4; // x2
  WarBoardData_o *monitor; // x0
  WarBoardPieceData_o *Piece_22604968; // x0
  const MethodInfo *v7; // x1
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x8
  WarBoardControlUiDataComponent_o *uiDataComp; // x0
  WebViewManager_o *v10; // x0
  const MethodInfo *v11; // x2
  WarBoardData_o *v12; // x0
  WarBoardSquareData_o *Square; // x0
  const MethodInfo *v14; // x1
  struct WarBoardSquareComponent_o *squareComponent; // x8
  WarBoardControlUiDataComponent_o *v16; // x0

  if ( (byte_40F8986 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_40F8986 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  monitor = (WarBoardData_o *)Instance[4].monitor;
  if ( !monitor )
    goto LABEL_16;
  Piece_22604968 = WarBoardData__GetPiece_22604968(monitor, squareIndex, v4);
  if ( Piece_22604968 )
  {
    pieceComponent = Piece_22604968->fields.pieceComponent;
    if ( !pieceComponent )
      goto LABEL_16;
    uiDataComp = pieceComponent->fields.uiDataComp;
    if ( uiDataComp )
      WarBoardControlUiDataComponent__SetUiDataOnBattle(uiDataComp, v7);
  }
  v10 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v10 )
    goto LABEL_16;
  v12 = (WarBoardData_o *)v10[4].monitor;
  if ( !v12 )
    goto LABEL_16;
  Square = WarBoardData__GetSquare(v12, squareIndex, v11);
  if ( !Square )
    return;
  squareComponent = Square->fields.squareComponent;
  if ( !squareComponent )
LABEL_16:
    sub_B170D4();
  v16 = squareComponent->fields.uiDataComp;
  if ( v16 )
    WarBoardControlUiDataComponent__SetUiDataOnBattle(v16, v14);
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
  UnityEngine_GameObject_o *v10; // x0
  struct UnityEngine_GameObject_array *turnOffObjects; // x22
  int v12; // w8
  bool v13; // w21
  unsigned int v14; // w20
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_Object_o *squareComponent; // x20
  WarBoardSquareComponent_o *v17; // x0

  v6 = this;
  if ( (byte_40F8993 & 1) == 0 )
  {
    this = (WarBoardControlUiDataComponent_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, isDisp);
    byte_40F8993 = 1;
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
      v10 = turnOnObjects->m_Items[v9];
      if ( !v10 )
        goto LABEL_24;
      UnityEngine_GameObject__SetActive(v10, isDisp, 0LL);
      max_length = turnOnObjects->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_10;
    }
LABEL_23:
    sub_B17100(this, isDisp, uiData);
    sub_B170A0();
  }
LABEL_10:
  turnOffObjects = uiData->fields.turnOffObjects;
  if ( !turnOffObjects )
    goto LABEL_24;
  v12 = turnOffObjects->max_length;
  v13 = !isDisp;
  if ( v12 >= 1 )
  {
    v14 = 0;
    while ( v14 < v12 )
    {
      v15 = turnOffObjects->m_Items[v14];
      if ( !v15 )
        goto LABEL_24;
      UnityEngine_GameObject__SetActive(v15, v13, 0LL);
      v12 = turnOffObjects->max_length;
      if ( (int)++v14 >= v12 )
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
    v17 = v6->fields.squareComponent;
    if ( v17 )
    {
      WarBoardSquareComponent__SetMovePoint(v17, v13, 0LL);
      return;
    }
LABEL_24:
    sub_B170D4();
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

  if ( (byte_40F8991 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_TypeInfo, isDisp);
    byte_40F8991 = 1;
  }
  v9 = sub_B170CC(
         WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_TypeInfo,
         isDisp,
         targetObject,
         immediatelyWhenOff,
         method);
  WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37___ctor(
    (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)v9,
    0,
    0LL);
  if ( !v9 )
    sub_B170D4();
  *(_QWORD *)(v9 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_BYTE *)(v9 + 48) = isDisp;
  *(_QWORD *)(v9 + 40) = targetObject;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v9 + 40),
    (System_Int32_array **)targetObject,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  *(_BYTE *)(v9 + 49) = immediatelyWhenOff;
  return (System_Collections_IEnumerator_o *)v9;
}


System_Collections_IEnumerator_o *__fastcall WarBoardControlUiDataComponent__StartSyncAnimation(
        WarBoardControlUiDataComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x21
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

  if ( (byte_40F8996 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardControlUiDataComponent__StartSyncAnimation_d__43_TypeInfo, callback);
    byte_40F8996 = 1;
  }
  v7 = sub_B170CC(WarBoardControlUiDataComponent__StartSyncAnimation_d__43_TypeInfo, callback, method, v3, v4);
  WarBoardControlUiDataComponent__StartSyncAnimation_d__43___ctor(
    (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)callback, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall WarBoardControlUiDataComponent__SyncAnimation(
        WarBoardControlUiDataComponent_o *this,
        System_Action_o *syncCallback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *started; // x1

  started = WarBoardControlUiDataComponent__StartSyncAnimation(this, syncCallback, method);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
}


void __fastcall WarBoardControlUiDataComponent__UpdateAdjustObjects(
        WarBoardControlUiDataComponent_o *this,
        const MethodInfo *method)
{
  __int64 AdjustType; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Single_array *AdjustOffsetY; // x9
  struct UnityEngine_GameObject_array *adjustObjects; // x20
  int max_length; // w8
  float v9; // s8
  unsigned int v10; // w21
  Il2CppClass **v11; // x8
  UnityEngine_GameObject_o *v12; // x19
  UnityEngine_Transform_o *transform; // x0
  float x; // s10
  float z; // s9
  UnityEngine_Transform_o *v16; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  AdjustType = WarBoardControlUiDataComponent__GetAdjustType(this, method);
  AdjustOffsetY = this->fields.AdjustOffsetY;
  if ( !AdjustOffsetY )
    goto LABEL_12;
  if ( (unsigned int)AdjustType >= AdjustOffsetY->max_length )
    goto LABEL_13;
  adjustObjects = this->fields.adjustObjects;
  if ( !adjustObjects )
LABEL_12:
    sub_B170D4();
  max_length = adjustObjects->max_length;
  if ( max_length >= 1 )
  {
    v9 = AdjustOffsetY->m_Items[(int)AdjustType + 1];
    v10 = 0;
    while ( v10 < max_length )
    {
      v11 = &adjustObjects->obj.klass + (int)v10;
      v12 = (UnityEngine_GameObject_o *)v11[4];
      if ( !v12 )
        goto LABEL_12;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v11[4], 0LL);
      if ( !transform )
        goto LABEL_12;
      localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
      x = localPosition.fields.x;
      z = localPosition.fields.z;
      v16 = UnityEngine_GameObject__get_transform(v12, 0LL);
      if ( !v16 )
        goto LABEL_12;
      v18.fields.x = x;
      v18.fields.y = v9;
      v18.fields.z = z;
      UnityEngine_Transform__set_localPosition(v16, v18, 0LL);
      max_length = adjustObjects->max_length;
      if ( (int)++v10 >= max_length )
        return;
    }
LABEL_13:
    sub_B17100(AdjustType, v4, v5);
    sub_B170A0();
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
  if ( (byte_40F8987 & 1) == 0 )
  {
    squareIndexes = (System_Int32_array *)sub_B16FFC(&WarBoardControlUiDataComponent_TypeInfo, immediatelyWhenOff);
    byte_40F8987 = 1;
  }
  if ( !v4 )
    sub_B170D4();
  v5 = *(_QWORD *)&v4->max_length;
  if ( (int)v5 >= 1 )
  {
    v6 = 0LL;
    v7 = immediatelyWhenOff;
    do
    {
      if ( v6 >= (unsigned int)v5 )
      {
        sub_B17100(squareIndexes, immediatelyWhenOff, method);
        sub_B170A0();
      }
      v8 = v4->m_Items[v6 + 1];
      if ( (BYTE3(WarBoardControlUiDataComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
      }
      WarBoardControlUiDataComponent__UpdateAdjustSituationAll_22616996(v8, v7, method);
      LODWORD(v5) = v4->max_length;
      ++v6;
    }
    while ( (__int64)v6 < (int)v5 );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardControlUiDataComponent__UpdateAdjustSituationAll_22616996(
        int32_t squareIndex,
        bool immediatelyWhenOff,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  const MethodInfo *v6; // x2
  WarBoardData_o *monitor; // x0
  WarBoardPieceData_o *Piece_22604968; // x0
  const MethodInfo *v9; // x2
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x8
  WarBoardControlUiDataComponent_o *uiDataComp; // x0
  WebViewManager_o *v12; // x0
  const MethodInfo *v13; // x2
  WarBoardData_o *v14; // x0
  WarBoardSquareData_o *Square; // x0
  const MethodInfo *v16; // x2
  struct WarBoardSquareComponent_o *squareComponent; // x8
  WarBoardControlUiDataComponent_o *v18; // x0

  if ( (byte_40F8988 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, immediatelyWhenOff);
    byte_40F8988 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  monitor = (WarBoardData_o *)Instance[4].monitor;
  if ( !monitor )
    goto LABEL_16;
  Piece_22604968 = WarBoardData__GetPiece_22604968(monitor, squareIndex, v6);
  if ( Piece_22604968 )
  {
    pieceComponent = Piece_22604968->fields.pieceComponent;
    if ( !pieceComponent )
      goto LABEL_16;
    uiDataComp = pieceComponent->fields.uiDataComp;
    if ( uiDataComp )
      WarBoardControlUiDataComponent__UpdateAdjustSituation(uiDataComp, immediatelyWhenOff, v9);
  }
  v12 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v12 )
    goto LABEL_16;
  v14 = (WarBoardData_o *)v12[4].monitor;
  if ( !v14 )
    goto LABEL_16;
  Square = WarBoardData__GetSquare(v14, squareIndex, v13);
  if ( !Square )
    return;
  squareComponent = Square->fields.squareComponent;
  if ( !squareComponent )
LABEL_16:
    sub_B170D4();
  v18 = squareComponent->fields.uiDataComp;
  if ( v18 )
    WarBoardControlUiDataComponent__UpdateAdjustSituation(v18, immediatelyWhenOff, v16);
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
  __int64 v9; // x2
  const MethodInfo *v10; // x4
  struct UnityEngine_GameObject_array *onExistsOtherTurnOffObjects; // x22
  __int64 v12; // x8
  unsigned __int64 v13; // x23
  bool v14; // w20
  bool v15; // w21
  System_Collections_IEnumerator_o *v16; // x0

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
      sub_B170D4();
    v12 = *(_QWORD *)&onExistsOtherTurnOffObjects->max_length;
    if ( (int)v12 >= 1 )
    {
      v13 = 0LL;
      v14 = ((unsigned __int8)IsExistsOther ^ 1) & 1;
      v15 = immediatelyWhenOff;
      do
      {
        if ( v13 >= (unsigned int)v12 )
        {
          sub_B17100(IsExistsOther, v8, v9);
          sub_B170A0();
        }
        v16 = WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation(
                this,
                v14,
                onExistsOtherTurnOffObjects->m_Items[v13],
                v15,
                v10);
        IsExistsOther = UnityEngine_MonoBehaviour__StartCoroutine_34804316(
                          (UnityEngine_MonoBehaviour_o *)this,
                          v16,
                          0LL);
        LODWORD(v12) = onExistsOtherTurnOffObjects->max_length;
        ++v13;
      }
      while ( (__int64)v13 < (int)v12 );
    }
  }
}


void __fastcall WarBoardControlUiDataComponent__UpdateOverlapObjects(
        WarBoardControlUiDataComponent_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  const MethodInfo *v4; // x1
  WarBoardData_o *monitor; // x20
  int32_t SquareIndex; // w0
  const MethodInfo *v7; // x2
  WarBoardControlUiDataComponent_o *Square; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  struct WarBoardSquareComponent_o *onEnterBattleTurnOffObjects; // x8
  char v12; // w21
  struct UnityEngine_GameObject_array *onOverlapObjects; // x22
  __int64 v14; // x8
  unsigned __int64 v15; // x23
  UnityEngine_GameObject_o *v16; // x20
  int32_t v17; // w0
  bool v18; // w1

  if ( (byte_40F898E & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_40F898E = 1;
  }
  if ( !this->fields.compType )
    return;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  monitor = (WarBoardData_o *)Instance[4].monitor;
  SquareIndex = WarBoardControlUiDataComponent__get_SquareIndex(this, v4);
  if ( !monitor )
    goto LABEL_22;
  Square = (WarBoardControlUiDataComponent_o *)WarBoardData__GetSquare(monitor, SquareIndex, v7);
  if ( !Square )
    goto LABEL_10;
  onEnterBattleTurnOffObjects = (struct WarBoardSquareComponent_o *)Square->fields.onEnterBattleTurnOffObjects;
  if ( !onEnterBattleTurnOffObjects )
    goto LABEL_22;
  Square = onEnterBattleTurnOffObjects->fields.uiDataComp;
  if ( Square )
  {
    Square = (WarBoardControlUiDataComponent_o *)WarBoardControlUiDataComponent__IsDispOverlapObjects(Square, v9);
    v12 = (unsigned __int8)Square ^ 1;
  }
  else
  {
LABEL_10:
    v12 = 1;
  }
  onOverlapObjects = this->fields.onOverlapObjects;
  if ( !onOverlapObjects )
LABEL_22:
    sub_B170D4();
  v14 = *(_QWORD *)&onOverlapObjects->max_length;
  if ( (int)v14 >= 1 )
  {
    v15 = 0LL;
    do
    {
      if ( v15 >= (unsigned int)v14 )
      {
        sub_B17100(Square, v9, v10);
        sub_B170A0();
      }
      v16 = onOverlapObjects->m_Items[v15];
      v17 = WarBoardControlUiDataComponent__CheckCorrectActiveObject(this, v16, v10);
      if ( (v17 & 0x80000000) != 0 )
      {
        if ( !v16 )
          goto LABEL_22;
        v18 = v12 & 1;
      }
      else
      {
        if ( !v16 )
          goto LABEL_22;
        v18 = (v17 == 1) & v12;
      }
      UnityEngine_GameObject__SetActive(v16, v18, 0LL);
      LODWORD(v14) = onOverlapObjects->max_length;
      ++v15;
    }
    while ( (__int64)v15 < (int)v14 );
  }
}


int32_t __fastcall WarBoardControlUiDataComponent__get_SquareIndex(
        WarBoardControlUiDataComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *pieceComponent; // x20
  struct WarBoardPieceBaseComponent_o *v4; // x8
  struct WarBoardPieceData_o *pieceData; // x8
  int32_t *p_nowSquareIndex_k__BackingField; // x8
  UnityEngine_Object_o *squareComponent; // x20
  struct WarBoardSquareComponent_o *v8; // x8
  struct WarBoardSquareData_o *squareData; // x8

  if ( (byte_40F8983 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F8983 = 1;
  }
  pieceComponent = (UnityEngine_Object_o *)this->fields.pieceComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(pieceComponent, 0LL, 0LL) )
  {
    v4 = this->fields.pieceComponent;
    if ( v4 )
    {
      pieceData = v4->fields.pieceData;
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
  if ( UnityEngine_Object__op_Inequality(squareComponent, 0LL, 0LL) )
  {
    v8 = this->fields.squareComponent;
    if ( v8 )
    {
      squareData = v8->fields.squareData;
      if ( squareData )
      {
        p_nowSquareIndex_k__BackingField = &squareData->fields._squareIndex_k__BackingField;
        return *p_nowSquareIndex_k__BackingField;
      }
    }
LABEL_19:
    sub_B170D4();
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  WarBoardControlUiDataComponent_o *_4__this; // x20
  SimpleAnimation_o **p_animation; // x21
  struct System_String_o *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v18; // x1
  System_String_array **v19; // x2
  SimpleAnimation_State_o *State; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v22; // x21
  unsigned __int64 v23; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct WarBoardControlUiDataComponent_UiData_o *uiData; // x8
  struct UnityEngine_GameObject_array *animationObjects; // x22
  int max_length; // w8
  unsigned int v36; // w23
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  int32_t SquareIndex; // w19

  if ( (byte_40F7ACE & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v4);
    sub_B16FFC(&WarBoardControlUiDataComponent_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_18273/*"end"*/, v6);
    byte_40F7ACE = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    p_animation = &this->fields.animation;
    goto LABEL_9;
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_38;
    p_animation = &this->fields.animation;
    v10 = WarBoardControlUiDataComponent__PlayAnimation(
            _4__this,
            this->fields.animation,
            (System_String_o *)StringLiteral_18273/*"end"*/,
            0LL);
    this->fields._stateName_5__2 = v10;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._stateName_5__2,
      (System_Int32_array **)v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields._stateName_5__2, 0LL);
    if ( IsNullOrEmpty )
    {
LABEL_19:
      uiData = this->fields.uiData;
      if ( !uiData )
        goto LABEL_38;
      animationObjects = uiData->fields.animationObjects;
      if ( !animationObjects )
        goto LABEL_38;
      max_length = animationObjects->max_length;
      if ( max_length >= 1 )
      {
        v36 = 0;
        while ( 1 )
        {
          if ( v36 >= max_length )
          {
            sub_B17100(IsNullOrEmpty, v18, v19);
            sub_B170A0();
          }
          v37 = animationObjects->m_Items[v36];
          if ( !v37 )
            break;
          Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              v37,
                                                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          IsNullOrEmpty = UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
          if ( !IsNullOrEmpty )
          {
            if ( !_4__this )
              break;
            IsNullOrEmpty = WarBoardControlUiDataComponent__IsPlayingAnimation(
                              _4__this,
                              (SimpleAnimation_o *)Component_srcLineSprite,
                              (System_String_o *)StringLiteral_18273/*"end"*/,
                              0LL);
            if ( IsNullOrEmpty )
              return 0;
          }
          max_length = animationObjects->max_length;
          if ( (int)++v36 >= max_length )
            goto LABEL_32;
        }
LABEL_38:
        sub_B170D4();
      }
LABEL_32:
      if ( !_4__this )
        goto LABEL_38;
      WarBoardControlUiDataComponent__SetUiDataTurnObjects(_4__this, 0, this->fields.uiData, 0LL);
      SquareIndex = WarBoardControlUiDataComponent__get_SquareIndex(_4__this, 0LL);
      if ( (BYTE3(WarBoardControlUiDataComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
      }
      WarBoardControlUiDataComponent__UpdateAdjustSituationAll_22616996(SquareIndex, 0, 0LL);
      return 0;
    }
LABEL_9:
    if ( !*p_animation )
      goto LABEL_38;
    State = SimpleAnimation__GetState(*p_animation, this->fields._stateName_5__2, 0LL);
    if ( !State )
      goto LABEL_38;
    klass = State->klass;
    v22 = State;
    if ( *(_WORD *)&State->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v23;
        p_offset += 2;
        if ( v23 >= *(unsigned __int16 *)&State->klass->_2.bitflags1 )
          goto LABEL_15;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5].method;
    }
    else
    {
LABEL_15:
      p_method = sub_AAFEF8(State, SimpleAnimation_State_TypeInfo, 5LL);
    }
    if ( (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(v22, *(_QWORD *)(p_method + 8)) < 1.0 )
    {
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v19, v26, v27, v28, v29, v30);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  WarBoardControlUiDataComponent_o *_4__this; // x20
  SimpleAnimation_o **p_animation; // x21
  struct System_String_o *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  SimpleAnimation_State_o *State; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v17; // x21
  unsigned __int64 v18; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( (byte_40F7ACF & 1) == 0 )
  {
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, method);
    sub_B16FFC(&StringLiteral_22174/*"start"*/, v3);
    sub_B16FFC(&StringLiteral_20239/*"loop"*/, v4);
    byte_40F7ACF = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    p_animation = &this->fields.animation;
    goto LABEL_9;
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_22;
    p_animation = &this->fields.animation;
    v8 = WarBoardControlUiDataComponent__PlayAnimation(
           _4__this,
           this->fields.animation,
           (System_String_o *)StringLiteral_22174/*"start"*/,
           0LL);
    this->fields._stateName_5__2 = v8;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._stateName_5__2,
      (System_Int32_array **)v8,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    if ( System_String__IsNullOrEmpty(this->fields._stateName_5__2, 0LL) )
    {
LABEL_20:
      WarBoardControlUiDataComponent__PlayAnimation(
        _4__this,
        this->fields.animation,
        (System_String_o *)StringLiteral_20239/*"loop"*/,
        0LL);
      return 0;
    }
LABEL_9:
    if ( *p_animation )
    {
      State = SimpleAnimation__GetState(*p_animation, this->fields._stateName_5__2, 0LL);
      if ( State )
      {
        klass = State->klass;
        v17 = State;
        if ( *(_WORD *)&State->klass->_2.bitflags1 )
        {
          v18 = 0LL;
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v18;
            p_offset += 2;
            if ( v18 >= *(unsigned __int16 *)&State->klass->_2.bitflags1 )
              goto LABEL_15;
          }
          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5].method;
        }
        else
        {
LABEL_15:
          p_method = sub_AAFEF8(State, SimpleAnimation_State_TypeInfo, 5LL);
        }
        if ( (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(v17, *(_QWORD *)(p_method + 8)) < 1.0 )
        {
          this->fields.__2__current = 0LL;
          p__2__current = &this->fields.__2__current;
          sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v21, v22, v23, v24, v25, v26);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
        if ( _4__this )
          goto LABEL_20;
      }
    }
LABEL_22:
    sub_B170D4();
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(
    &Method_WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_System_Collections_IEnumerator_Reset__,
    v8);
  sub_B170A0();
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t _1__state; // w8
  WarBoardControlUiDataComponent_o *_4__this; // x20
  int32_t v10; // w0
  UnityEngine_GameObject_o *targetObject; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v15; // x0
  struct SimpleAnimation_o *Component_srcLineSprite; // x0
  SimpleAnimation_o **p_simpleAnimation_5__2; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  bool *p_isDisp; // x23
  UnityEngine_GameObject_o *v25; // x0
  SimpleAnimation_o *v26; // x22
  SimpleAnimation_o *v27; // x22
  bool v28; // w0
  struct UnityEngine_GameObject_o *v29; // x8
  bool v30; // w1
  UnityEngine_GameObject_o *v31; // x0
  SimpleAnimation_State_o *State; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v34; // x21
  unsigned __int64 v35; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  UnityEngine_GameObject_o *v46; // x0
  __int64 *v47; // x8
  struct System_String_o *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7

  if ( (byte_40F7AD0 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_22174/*"start"*/, v5);
    sub_B16FFC(&StringLiteral_18273/*"end"*/, v6);
    sub_B16FFC(&StringLiteral_20239/*"loop"*/, v7);
    byte_40F7AD0 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    p_simpleAnimation_5__2 = &this->fields._simpleAnimation_5__2;
    goto LABEL_31;
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_59;
    v10 = WarBoardControlUiDataComponent__CheckCorrectActiveObject(_4__this, this->fields.targetObject, 0LL);
    if ( (v10 & 0x80000000) == 0 )
      this->fields.isDisp = v10 == 1 && this->fields.isDisp;
    targetObject = this->fields.targetObject;
    if ( !targetObject )
      goto LABEL_59;
    transform = UnityEngine_GameObject__get_transform(targetObject, 0LL);
    if ( !transform )
      goto LABEL_59;
    parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
    if ( !parent )
      goto LABEL_59;
    gameObject = UnityEngine_Component__get_gameObject(parent, 0LL);
    if ( !gameObject )
      goto LABEL_59;
    if ( UnityEngine_GameObject__get_activeInHierarchy(gameObject, 0LL) )
    {
      v15 = this->fields.targetObject;
      if ( !v15 )
        goto LABEL_59;
      Component_srcLineSprite = (struct SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              v15,
                                                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
      this->fields._simpleAnimation_5__2 = Component_srcLineSprite;
      p_simpleAnimation_5__2 = &this->fields._simpleAnimation_5__2;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._simpleAnimation_5__2,
        (System_Int32_array **)Component_srcLineSprite,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
      p_isDisp = &this->fields.isDisp;
      if ( this->fields.isDisp )
      {
        v25 = this->fields.targetObject;
        if ( !v25 )
          goto LABEL_59;
        if ( UnityEngine_GameObject__get_activeInHierarchy(v25, 0LL) )
        {
          v26 = *p_simpleAnimation_5__2;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v26, 0LL, 0LL)
            && (WarBoardControlUiDataComponent__IsPlayingAnimation(
                  _4__this,
                  *p_simpleAnimation_5__2,
                  (System_String_o *)StringLiteral_22174/*"start"*/,
                  0LL)
             || WarBoardControlUiDataComponent__IsPlayingAnimation(
                  _4__this,
                  *p_simpleAnimation_5__2,
                  (System_String_o *)StringLiteral_20239/*"loop"*/,
                  0LL)) )
          {
            return 0;
          }
        }
        if ( *p_isDisp )
          goto LABEL_24;
      }
      v46 = this->fields.targetObject;
      if ( !v46 )
        goto LABEL_59;
      if ( UnityEngine_GameObject__get_activeInHierarchy(v46, 0LL) )
      {
        if ( !this->fields.isDisp && this->fields.immediatelyWhenOff )
          goto LABEL_49;
LABEL_24:
        v27 = *p_simpleAnimation_5__2;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v28 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v27, 0LL, 0LL);
        v29 = this->fields.targetObject;
        if ( v28 )
        {
          if ( v29 )
          {
            v30 = *p_isDisp;
            v31 = this->fields.targetObject;
LABEL_51:
            UnityEngine_GameObject__SetActive(v31, v30, 0LL);
            return 0;
          }
          goto LABEL_59;
        }
        if ( !v29 )
          goto LABEL_59;
        UnityEngine_GameObject__SetActive(this->fields.targetObject, 1, 0LL);
        if ( this->fields.isDisp )
          v47 = &StringLiteral_22174/*"start"*/;
        else
          v47 = &StringLiteral_18273/*"end"*/;
        v48 = WarBoardControlUiDataComponent__PlayAnimation(
                _4__this,
                this->fields._simpleAnimation_5__2,
                (System_String_o *)*v47,
                0LL);
        this->fields._stateName_5__3 = v48;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields._stateName_5__3,
          (System_Int32_array **)v48,
          v49,
          v50,
          v51,
          v52,
          v53,
          v54);
        if ( System_String__IsNullOrEmpty(this->fields._stateName_5__3, 0LL) )
        {
LABEL_42:
          if ( *p_isDisp )
          {
            if ( !_4__this )
              goto LABEL_59;
            WarBoardControlUiDataComponent__PlayAnimation(
              _4__this,
              this->fields._simpleAnimation_5__2,
              (System_String_o *)StringLiteral_20239/*"loop"*/,
              0LL);
            return 0;
          }
LABEL_49:
          v31 = this->fields.targetObject;
          if ( v31 )
          {
            v30 = 0;
            goto LABEL_51;
          }
LABEL_59:
          sub_B170D4();
        }
LABEL_31:
        if ( !*p_simpleAnimation_5__2 )
          goto LABEL_59;
        State = SimpleAnimation__GetState(*p_simpleAnimation_5__2, this->fields._stateName_5__3, 0LL);
        if ( !State )
          goto LABEL_59;
        klass = State->klass;
        v34 = State;
        if ( *(_WORD *)&State->klass->_2.bitflags1 )
        {
          v35 = 0LL;
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v35;
            p_offset += 2;
            if ( v35 >= *(unsigned __int16 *)&State->klass->_2.bitflags1 )
              goto LABEL_37;
          }
          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5].method;
        }
        else
        {
LABEL_37:
          p_method = sub_AAFEF8(State, SimpleAnimation_State_TypeInfo, 5LL);
        }
        if ( (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(v34, *(_QWORD *)(p_method + 8)) < 1.0 )
        {
          this->fields.__2__current = 0LL;
          p__2__current = &this->fields.__2__current;
          sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v38, v39, v40, v41, v42, v43);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
        p_isDisp = &this->fields.isDisp;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(
    &Method_WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_System_Collections_IEnumerator_Reset__,
    v8);
  sub_B170A0();
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int32_t _1__state; // w8
  bool result; // w0
  struct WarBoardControlUiDataComponent_o *_4__this; // x21
  struct SimpleAnimation_o **p_targetSimpleAnimation_5__2; // x20
  _BOOL8 activeInHierarchy; // x0
  __int64 v21; // x1
  System_String_array **v22; // x2
  struct UnityEngine_GameObject_array *syncAnimationObjects; // x23
  int max_length; // w8
  unsigned int v25; // w24
  Il2CppClass **v26; // x8
  UnityEngine_GameObject_o *v27; // x22
  UnityEngine_Animation_o *Component_srcLineSprite; // x21
  UnityEngine_Object_o *v29; // x21
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UnityEngine_Object_o *v35; // x22
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  UnityEngine_AnimationState_o **p_animState_5__3; // x20
  System_Collections_IEnumerator_o *Enumerator; // x0
  System_Collections_IEnumerator_o *v44; // x21
  System_Collections_IEnumerator_c *v45; // x8
  unsigned __int64 v46; // x10
  int32_t *v47; // x11
  __int64 v48; // x0
  struct SimpleAnimation_State_o **p_state_5__6; // x20
  System_Collections_IEnumerator_c *v50; // x8
  unsigned __int64 v51; // x10
  System_Collections_IEnumerator_c **v52; // x11
  __int64 v53; // x0
  System_Int32_array **v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  __int64 v61; // x23
  __int64 v62; // x22
  __int64 v63; // x0
  __int64 v64; // x8
  __int64 v65; // x21
  unsigned __int64 v66; // x10
  int *v67; // x11
  __int64 v68; // x0
  float v69; // s0
  float normalizedTime; // s0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  UnityEngine_Object_o *v77; // x20
  SimpleAnimation_o *targetSimpleAnimation_5__2; // x0
  System_Collections_Generic_IEnumerable_TSource__o *States; // x0
  struct SimpleAnimation_State_o *StonePurchaseNotificationMenu_DialogOpenQueue; // x0
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  struct SimpleAnimation_State_o *v87; // x21
  SimpleAnimation_State_c *klass; // x8
  unsigned __int64 v89; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  Il2CppObject **v92; // x19
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  float v99; // s0
  System_Action_o *callback; // x0
  Il2CppObject **p__2__current; // x19
  void *v102; // x0
  int v103; // w1
  int v104[2]; // [xsp+0h] [xbp-60h]
  int v105; // [xsp+8h] [xbp-58h]

  if ( (byte_40F7AD1 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_AnimationState_TypeInfo, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_First_SimpleAnimation_State___, v9);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Animation___, v10);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v11);
    sub_B16FFC(&System_IDisposable_TypeInfo, v12);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v15);
    byte_40F7AD1 = 1;
  }
  v105 = 0;
  _1__state = this->fields.__1__state;
  if ( _1__state == 2 )
  {
    this->fields.__1__state = -1;
    p_state_5__6 = &this->fields._state_5__6;
LABEL_84:
    v87 = *p_state_5__6;
    if ( !*p_state_5__6 )
      goto LABEL_100;
    klass = v87->klass;
    if ( *(_WORD *)&v87->klass->_2.bitflags1 )
    {
      v89 = 0LL;
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v89;
        p_offset += 2;
        if ( v89 >= *(unsigned __int16 *)&v87->klass->_2.bitflags1 )
          goto LABEL_89;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5].method;
    }
    else
    {
LABEL_89:
      p_method = sub_AAFEF8(*p_state_5__6, SimpleAnimation_State_TypeInfo, 5LL);
    }
    v99 = (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))p_method)(v87, *(_QWORD *)(p_method + 8));
    if ( v99 > 0.0 && v99 < 1.0 && this->fields._time_5__5 <= v99 )
    {
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      *((float *)p__2__current + 11) = v99;
      sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v93, v94, v95, v96, v97, v98);
      *((_DWORD *)p__2__current - 2) = 2;
      return 1;
    }
    *p_state_5__6 = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)p_state_5__6, 0LL, v93, v94, v95, v96, v97, v98);
    goto LABEL_96;
  }
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    p_animState_5__3 = &this->fields._animState_5__3;
LABEL_75:
    if ( !*p_animState_5__3 )
      goto LABEL_100;
    normalizedTime = UnityEngine_AnimationState__get_normalizedTime(*p_animState_5__3, 0LL);
    if ( this->fields._startNormalizedTime_5__4 >= UnityEngine_Mathf__FloorToInt(normalizedTime, 0LL) )
    {
      this->fields.__2__current = 0LL;
      v92 = &this->fields.__2__current;
      sub_B16F98((BattleServantConfConponent_o *)v92, 0LL, v71, v72, v73, v74, v75, v76);
      result = 1;
      *((_DWORD *)v92 - 2) = 1;
      return result;
    }
    this->fields._animState_5__3 = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)p_animState_5__3, 0LL, v71, v72, v73, v74, v75, v76);
    p_targetSimpleAnimation_5__2 = &this->fields._targetSimpleAnimation_5__2;
    goto LABEL_78;
  }
  result = 0;
  if ( _1__state )
    return result;
  _4__this = this->fields.__4__this;
  this->fields._targetSimpleAnimation_5__2 = 0LL;
  p_targetSimpleAnimation_5__2 = &this->fields._targetSimpleAnimation_5__2;
  this->fields.__1__state = -1;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields._targetSimpleAnimation_5__2, 0LL, v2, v3, v4, v5, v6, v7);
  if ( !_4__this )
    goto LABEL_100;
  syncAnimationObjects = _4__this->fields.syncAnimationObjects;
  if ( !syncAnimationObjects )
    goto LABEL_100;
  max_length = syncAnimationObjects->max_length;
  if ( max_length >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      if ( v25 >= max_length )
      {
        sub_B17100(activeInHierarchy, v21, v22);
        sub_B170A0();
      }
      v26 = &syncAnimationObjects->obj.klass + (int)v25;
      v27 = (UnityEngine_GameObject_o *)v26[4];
      if ( !v27 )
        break;
      activeInHierarchy = UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)v26[4], 0LL);
      if ( activeInHierarchy )
      {
        Component_srcLineSprite = (UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               v27,
                                                               (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
        {
          if ( !Component_srcLineSprite )
            break;
          if ( UnityEngine_Animation__get_isPlaying(Component_srcLineSprite, 0LL) )
            goto LABEL_28;
        }
        v29 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        v27,
                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        activeInHierarchy = UnityEngine_Object__op_Inequality(v29, 0LL, 0LL);
        if ( activeInHierarchy )
        {
          if ( !v29 )
            break;
          activeInHierarchy = SimpleAnimation__get_isPlaying((SimpleAnimation_o *)v29, 0LL);
          if ( activeInHierarchy )
          {
            *p_targetSimpleAnimation_5__2 = (struct SimpleAnimation_o *)v29;
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields._targetSimpleAnimation_5__2,
              (System_Int32_array **)v29,
              v22,
              v30,
              v31,
              v32,
              v33,
              v34);
          }
        }
      }
      max_length = syncAnimationObjects->max_length;
      if ( (int)++v25 >= max_length )
        goto LABEL_27;
    }
LABEL_100:
    sub_B170D4();
  }
LABEL_27:
  Component_srcLineSprite = 0LL;
LABEL_28:
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
  {
    v35 = (UnityEngine_Object_o *)*p_targetSimpleAnimation_5__2;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(v35, 0LL, 0LL) )
      goto LABEL_96;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
  {
    this->fields._animState_5__3 = 0LL;
    p_animState_5__3 = &this->fields._animState_5__3;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields._animState_5__3, 0LL, v36, v37, v38, v39, v40, v41);
    if ( !Component_srcLineSprite )
      goto LABEL_100;
    Enumerator = UnityEngine_Animation__GetEnumerator(Component_srcLineSprite, 0LL);
    v44 = Enumerator;
    if ( !Enumerator )
      sub_B170D4();
    v45 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v46 = 0LL;
      v47 = &v45->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v47 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v46;
        v47 += 4;
        if ( v46 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_46;
      }
      v48 = (__int64)&v45->vtable[*v47].method;
    }
    else
    {
LABEL_46:
      v48 = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v48)(v44, *(_QWORD *)(v48 + 8)) & 1) != 0 )
    {
      v50 = v44->klass;
      if ( *(_WORD *)&v44->klass->_2.bitflags1 )
      {
        v51 = 0LL;
        v52 = (System_Collections_IEnumerator_c **)&v50->_1.interfaceOffsets->offset;
        while ( *(v52 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v51;
          v52 += 2;
          if ( v51 >= *(unsigned __int16 *)&v44->klass->_2.bitflags1 )
            goto LABEL_55;
        }
        v53 = (__int64)&v50->vtable[*(_DWORD *)v52 + 1].method;
      }
      else
      {
LABEL_55:
        v53 = sub_AAFEF8(v44, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v54 = (System_Int32_array **)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v53)(
                                     v44,
                                     *(_QWORD *)(v53 + 8));
      if ( v54 && *v54 != (System_Int32_array *)UnityEngine_AnimationState_TypeInfo )
      {
        v102 = (void *)sub_B173C8(v54);
        if ( v103 != 1 )
          _Unwind_Resume(v102);
        v62 = *(_QWORD *)__cxa_begin_catch(v102);
        __cxa_end_catch();
        v61 = 0LL;
        goto LABEL_61;
      }
      *p_animState_5__3 = (UnityEngine_AnimationState_o *)v54;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields._animState_5__3, v54, v55, v56, v57, v58, v59, v60);
    }
    v61 = 1LL;
    v62 = 0LL;
    v104[0] = 280;
    v105 = 1;
LABEL_61:
    v63 = sub_B170BC(v44, System_IDisposable_TypeInfo);
    if ( v63 )
    {
      v64 = *(_QWORD *)v63;
      v65 = v63;
      if ( *(_WORD *)(*(_QWORD *)v63 + 298LL) )
      {
        v66 = 0LL;
        v67 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
        {
          ++v66;
          v67 += 4;
          if ( v66 >= *(unsigned __int16 *)(*(_QWORD *)v63 + 298LL) )
            goto LABEL_66;
        }
        v68 = v64 + 16LL * *v67 + 312;
      }
      else
      {
LABEL_66:
        v68 = sub_AAFEF8(v63, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v68)(v65, *(_QWORD *)(v68 + 8));
    }
    if ( v62 )
      sub_B170A0();
    if ( (_DWORD)v61 && v104[v61 - 1] == 280 )
      v105 = v61 - 1;
    if ( !*p_animState_5__3 )
      goto LABEL_100;
    v69 = UnityEngine_AnimationState__get_normalizedTime(*p_animState_5__3, 0LL);
    this->fields._startNormalizedTime_5__4 = UnityEngine_Mathf__FloorToInt(v69, 0LL);
    goto LABEL_75;
  }
LABEL_78:
  v77 = (UnityEngine_Object_o *)*p_targetSimpleAnimation_5__2;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v77, 0LL, 0LL) )
  {
    targetSimpleAnimation_5__2 = this->fields._targetSimpleAnimation_5__2;
    this->fields._time_5__5 = -1.0;
    if ( !targetSimpleAnimation_5__2 )
      goto LABEL_100;
    States = (System_Collections_Generic_IEnumerable_TSource__o *)SimpleAnimation__GetStates(
                                                                    targetSimpleAnimation_5__2,
                                                                    0LL);
    StonePurchaseNotificationMenu_DialogOpenQueue = (struct SimpleAnimation_State_o *)System_Linq_Enumerable__First_StonePurchaseNotificationMenu_DialogOpenQueue_(
                                                                                        States,
                                                                                        (const MethodInfo_18D6DD4 *)Method_System_Linq_Enumerable_First_SimpleAnimation_State___);
    this->fields._state_5__6 = StonePurchaseNotificationMenu_DialogOpenQueue;
    p_state_5__6 = &this->fields._state_5__6;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._state_5__6,
      (System_Int32_array **)StonePurchaseNotificationMenu_DialogOpenQueue,
      v81,
      v82,
      v83,
      v84,
      v85,
      v86);
    goto LABEL_84;
  }
LABEL_96:
  callback = this->fields.callback;
  if ( !callback )
    goto LABEL_100;
  System_Action__Invoke(callback, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(
    &Method_WarBoardControlUiDataComponent__StartSyncAnimation_d__43_System_Collections_IEnumerator_Reset__,
    v8);
  sub_B170A0();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
  return System_String__op_Equality(a->fields.key, this->fields.key, 0LL);
}