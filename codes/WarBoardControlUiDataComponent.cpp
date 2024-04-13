void __fastcall WarBoardControlUiDataComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42E774E & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardControlUiDataComponent_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_2779/*"Barrier"*/, v8, v9, v10);
    byte_42E774E = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarBoardControlUiDataComponent_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_2779/*"Barrier"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_2779/*"Barrier"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
}


void __fastcall WarBoardControlUiDataComponent___ctor(WarBoardControlUiDataComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Array_o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_RuntimeFieldHandle_o v41; // 0:w1.4

  if ( (byte_42E774D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&float___TypeInfo, v14, v15, v16);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__64464566F592BAB0A74DD80EB47024C0ECA2BB914D37B27E78F5532363736E1B,
      v17,
      v18,
      v19);
    byte_42E774D = 1;
  }
  v20 = (System_Array_o *)sub_B5D5DC(float___TypeInfo, 7LL);
  v41.fields.value = Field__PrivateImplementationDetails__64464566F592BAB0A74DD80EB47024C0ECA2BB914D37B27E78F5532363736E1B;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v20, v41, 0LL);
  this->fields.AdjustOffsetY = (struct System_Single_array *)v20;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.AdjustOffsetY,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData___ctor__);
  this->fields.listUiData = (struct System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__o *)v27;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.listUiData,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v34,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.listUiDataKey = (struct System_Collections_Generic_List_string__o *)v34;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.listUiDataKey,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardControlUiDataComponent__Awake(WarBoardControlUiDataComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  WebViewObject_o *Component_WebViewObject; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  WebViewObject_o *v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_42E7737 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_WarBoardPieceBaseComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_WarBoardSquareComponent___, v5, v6, v7);
    byte_42E7737 = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_WarBoardPieceBaseComponent___);
  this->fields.pieceComponent = (struct WarBoardPieceBaseComponent_o *)Component_WebViewObject;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.pieceComponent,
    (System_Int32_array **)Component_WebViewObject,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = UnityEngine_Component__GetComponent_WebViewObject_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_WarBoardSquareComponent___);
  this->fields.squareComponent = (struct WarBoardSquareComponent_o *)v15;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.squareComponent,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
}


int32_t __fastcall WarBoardControlUiDataComponent__CheckCorrectActiveObject(
        WarBoardControlUiDataComponent_o *this,
        UnityEngine_GameObject_o *targetObject,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  struct System_Collections_Generic_List_string__o *listUiDataKey; // x0
  __int64 v34; // x21
  __int64 v35; // x0
  __int64 v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **current; // x1
  struct System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__o *listUiData; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v45; // x23
  __int64 v46; // x0
  __int64 v47; // x1
  peRenderTexture_ChangeLayerObject_o *v48; // x0
  __int64 v49; // x1
  peRenderTexture_ChangeLayerObject_o *v50; // x21
  struct UnityEngine_Renderer_o *renderer; // x23
  UnityEngine_Renderer_c *klass; // x8
  unsigned __int64 v53; // x27
  UnityEngine_Object_o *v54; // x22
  struct UnityEngine_Material_o *orgMaterial; // x22
  UnityEngine_Material_c *v56; // x8
  unsigned __int64 v57; // x23
  UnityEngine_Object_o *v58; // x21
  int32_t v59; // w19
  int v60; // w20
  __int64 v62; // x0
  __int64 v63; // x0
  System_Collections_Generic_List_Enumerator_T__o v64; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v65; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42E7742 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_string__Dispose__,
      (_DWORD)targetObject,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v15, v16, v17);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Predicate_WarBoardControlUiDataComponent_UiData___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo, v24, v25, v26);
    sub_B5D5C4(
      &Method_WarBoardControlUiDataComponent___c__DisplayClass34_0__CheckCorrectActiveObject_b__0__,
      v27,
      v28,
      v29);
    sub_B5D5C4(&WarBoardControlUiDataComponent___c__DisplayClass34_0_TypeInfo, v30, v31, v32);
    byte_42E7742 = 1;
  }
  memset(&v65, 0, sizeof(v65));
  listUiDataKey = this->fields.listUiDataKey;
  if ( !listUiDataKey )
    sub_B5D69C(0LL, targetObject);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v64,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)listUiDataKey,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v65 = v64;
  while ( 1 )
  {
    do
    {
LABEL_26:
      if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v65,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
      {
        v59 = 0;
        v60 = 7;
        goto LABEL_31;
      }
      v34 = sub_B5D694(WarBoardControlUiDataComponent___c__DisplayClass34_0_TypeInfo);
      WarBoardControlUiDataComponent___c__DisplayClass34_0___ctor(
        (WarBoardControlUiDataComponent___c__DisplayClass34_0_o *)v34,
        0LL);
      if ( !v34 )
        sub_B5D69C(v35, v36);
      current = (System_Int32_array **)v65.fields.current;
      *(_QWORD *)(v34 + 16) = v65.fields.current;
      sub_B5D560((BattleServantConfConponent_o *)(v34 + 16), current, v37, v38, v39, v40, v41, v42);
      listUiData = this->fields.listUiData;
      v45 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v45,
        (Il2CppObject *)v34,
        Method_WarBoardControlUiDataComponent___c__DisplayClass34_0__CheckCorrectActiveObject_b__0__,
        (const MethodInfo_2B9320C *)Method_System_Predicate_WarBoardControlUiDataComponent_UiData___ctor__);
      if ( !listUiData )
        sub_B5D69C(v46, v47);
      v48 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
              (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)listUiData,
              (System_Predicate_T__o *)v45,
              (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__);
      v50 = v48;
    }
    while ( !v48 );
    renderer = v48->fields.renderer;
    if ( !renderer )
      sub_B5D69C(v48, v49);
    klass = renderer[1].klass;
    if ( (int)klass >= 1 )
      break;
LABEL_17:
    orgMaterial = v50->fields.orgMaterial;
    if ( !orgMaterial )
      sub_B5D69C(v48, v49);
    v56 = orgMaterial[1].klass;
    if ( (int)v56 >= 1 )
    {
      v57 = 0LL;
      while ( 1 )
      {
        if ( v57 >= (unsigned int)v56 )
        {
          v63 = sub_B5D6C8(v48);
          sub_B5D668(v63, 0LL);
        }
        v58 = (UnityEngine_Object_o *)*((_QWORD *)&orgMaterial[1].monitor + v57);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v48 = (peRenderTexture_ChangeLayerObject_o *)UnityEngine_Object__op_Equality(
                                                       (UnityEngine_Object_o *)targetObject,
                                                       v58,
                                                       0LL);
        if ( ((unsigned __int8)v48 & 1) != 0 )
          break;
        LODWORD(v56) = orgMaterial[1].klass;
        if ( (__int64)++v57 >= (int)v56 )
          goto LABEL_26;
      }
      v59 = 0;
      goto LABEL_30;
    }
  }
  v53 = 0LL;
  while ( 1 )
  {
    if ( v53 >= (unsigned int)klass )
    {
      v62 = sub_B5D6C8(v48);
      sub_B5D668(v62, 0LL);
    }
    v54 = (UnityEngine_Object_o *)*((_QWORD *)&renderer[1].monitor + v53);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v48 = (peRenderTexture_ChangeLayerObject_o *)UnityEngine_Object__op_Equality(
                                                   (UnityEngine_Object_o *)targetObject,
                                                   v54,
                                                   0LL);
    if ( ((unsigned __int8)v48 & 1) != 0 )
      break;
    LODWORD(klass) = renderer[1].klass;
    if ( (__int64)++v53 >= (int)klass )
      goto LABEL_17;
  }
  v59 = 1;
LABEL_30:
  v60 = 9;
LABEL_31:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v65,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  if ( v60 == 9 )
    return v59;
  else
    return -1;
}


int32_t __fastcall WarBoardControlUiDataComponent__GetAdjustType(
        WarBoardControlUiDataComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  void *Instance; // x0
  const MethodInfo *v6; // x1
  WarBoardData_o *v7; // x20
  const MethodInfo *v8; // x2
  WarBoardPieceData_o *Piece_23181536; // x0
  WarBoardData_o *v11; // x20
  const MethodInfo *v12; // x2
  __int64 v13; // x8
  WarBoardControlUiDataComponent_o *v14; // x0
  WarBoardData_o *v15; // x20
  const MethodInfo *v16; // x3
  WarBoardData_o *v17; // x20
  const MethodInfo *v18; // x2
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardData_o *v20; // x20
  const MethodInfo *v21; // x2
  WarBoardItemData_o *Item; // x0

  if ( (byte_42E7745 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E7745 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  v7 = (WarBoardData_o *)*((_QWORD *)Instance + 54);
  Instance = (void *)WarBoardControlUiDataComponent__get_SquareIndex(this, v6);
  if ( !v7 )
    goto LABEL_31;
  Piece_23181536 = WarBoardData__GetPiece_23181536(v7, (int32_t)Instance, v8);
  if ( Piece_23181536 )
  {
    if ( WarBoardPieceData__get_isMaster(Piece_23181536, 0LL) )
      return 6;
    else
      return 5;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  v11 = (WarBoardData_o *)*((_QWORD *)Instance + 54);
  Instance = (void *)WarBoardControlUiDataComponent__get_SquareIndex(this, v6);
  if ( !v11 )
    goto LABEL_31;
  Instance = WarBoardData__GetSquare(v11, (int32_t)Instance, v12);
  if ( Instance )
  {
    v13 = *((_QWORD *)Instance + 6);
    if ( !v13 )
      goto LABEL_31;
    v14 = *(WarBoardControlUiDataComponent_o **)(v13 + 176);
    if ( v14 && WarBoardControlUiDataComponent__IsDispFlagObjects(v14, v6) )
      return 4;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  v15 = (WarBoardData_o *)*((_QWORD *)Instance + 54);
  Instance = (void *)WarBoardControlUiDataComponent__get_SquareIndex(this, v6);
  if ( !v15 )
    goto LABEL_31;
  if ( WarBoardData__GetWall(v15, (int32_t)Instance, 0, v16) )
    return 3;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  v17 = (WarBoardData_o *)*((_QWORD *)Instance + 54);
  Instance = (void *)WarBoardControlUiDataComponent__get_SquareIndex(this, v6);
  if ( !v17 )
    goto LABEL_31;
  Treasure = WarBoardData__GetTreasure(v17, (int32_t)Instance, v18);
  if ( Treasure && !Treasure->fields._isUse_k__BackingField )
    return 1;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (v20 = (WarBoardData_o *)*((_QWORD *)Instance + 54),
        Instance = (void *)WarBoardControlUiDataComponent__get_SquareIndex(this, v6),
        !v20) )
  {
LABEL_31:
    sub_B5D69C(Instance, v6);
  }
  Item = WarBoardData__GetItem(v20, (int32_t)Instance, v21);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x3
  WarBoardControlUiDataComponent_c *klass; // x8
  WarBoardControlUiDataComponent_o *v20; // x19
  unsigned __int64 v21; // x10
  int32_t *p_offset; // x11
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x3
  __int64 v26; // x19
  __int64 v27; // x8
  unsigned __int64 v28; // x10
  int *v29; // x11
  __int64 v30; // x0
  __int64 v31; // x3
  __int64 v32; // x8
  unsigned __int64 v33; // x10
  int *v34; // x11
  __int64 v35; // x0
  __int64 v36; // x0
  __int64 v37; // x1
  __int64 v38; // x3
  __int64 v39; // x21
  __int64 v40; // x8
  unsigned __int64 v41; // x10
  SimpleAnimation_State_c **v42; // x11
  __int64 v43; // x0
  System_String_o *v44; // x0
  __int64 v45; // x1
  System_String_o *v46; // x0
  __int64 v47; // x1
  __int64 v48; // x8
  unsigned __int64 v49; // x10
  SimpleAnimation_State_c **v50; // x11
  __int64 v51; // x0
  System_String_o *v52; // x20
  int v53; // w8
  __int64 v54; // x8
  unsigned __int64 v55; // x10
  int *v56; // x11
  __int64 v57; // x0
  int v59; // [xsp+0h] [xbp-40h]

  if ( (byte_42E774B & 1) == 0 )
  {
    sub_B5D5C4(&System_IDisposable_TypeInfo, (_DWORD)animation, (_DWORD)suffix, method);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v12, v13, v14);
    this = (WarBoardControlUiDataComponent_o *)sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v15, v16, v17);
    byte_42E774B = 1;
  }
  if ( !animation || (this = (WarBoardControlUiDataComponent_o *)SimpleAnimation__GetStates(animation, 0LL)) == 0LL )
    sub_B5D69C(this, animation);
  klass = this->klass;
  v20 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v21 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
    {
      ++v21;
      p_offset += 4;
      if ( v21 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    v23 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v23 = sub_AF54C0(this, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL, v18);
  }
  v26 = (*(__int64 (__fastcall **)(WarBoardControlUiDataComponent_o *, _QWORD))v23)(v20, *(_QWORD *)(v23 + 8));
  if ( !v26 )
    sub_B5D69C(0LL, v24);
  do
  {
    v27 = *(_QWORD *)v26;
    if ( *(_WORD *)(*(_QWORD *)v26 + 298LL) )
    {
      v28 = 0LL;
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v29 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v28;
        v29 += 4;
        if ( v28 >= *(unsigned __int16 *)(*(_QWORD *)v26 + 298LL) )
          goto LABEL_16;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_16:
      v30 = sub_AF54C0(v26, System_Collections_IEnumerator_TypeInfo, 0LL, v25);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v26, *(_QWORD *)(v30 + 8)) & 1) == 0 )
    {
      v52 = 0LL;
      v53 = 69;
      goto LABEL_43;
    }
    v32 = *(_QWORD *)v26;
    if ( *(_WORD *)(*(_QWORD *)v26 + 298LL) )
    {
      v33 = 0LL;
      v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v34 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
      {
        ++v33;
        v34 += 4;
        if ( v33 >= *(unsigned __int16 *)(*(_QWORD *)v26 + 298LL) )
          goto LABEL_23;
      }
      v35 = v32 + 16LL * *v34 + 312;
    }
    else
    {
LABEL_23:
      v35 = sub_AF54C0(v26, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL, v31);
    }
    v36 = (*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v26, *(_QWORD *)(v35 + 8));
    v39 = v36;
    if ( !v36 )
      sub_B5D69C(0LL, v37);
    v40 = *(_QWORD *)v36;
    if ( *(_WORD *)(*(_QWORD *)v36 + 298LL) )
    {
      v41 = 0LL;
      v42 = (SimpleAnimation_State_c **)(*(_QWORD *)(v40 + 176) + 8LL);
      while ( *(v42 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v41;
        v42 += 2;
        if ( v41 >= *(unsigned __int16 *)(*(_QWORD *)v36 + 298LL) )
          goto LABEL_30;
      }
      v43 = v40 + 16LL * (*(_DWORD *)v42 + 9) + 312;
    }
    else
    {
LABEL_30:
      v43 = sub_AF54C0(v36, SimpleAnimation_State_TypeInfo, 9LL, v38);
    }
    v44 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v39, *(_QWORD *)(v43 + 8));
    if ( !v44 )
      sub_B5D69C(0LL, v45);
    v46 = System_String__ToLower(v44, 0LL);
    if ( !v46 )
      sub_B5D69C(0LL, v47);
  }
  while ( !System_String__EndsWith(v46, suffix, 0LL) );
  v48 = *(_QWORD *)v39;
  if ( *(_WORD *)(*(_QWORD *)v39 + 298LL) )
  {
    v49 = 0LL;
    v50 = (SimpleAnimation_State_c **)(*(_QWORD *)(v48 + 176) + 8LL);
    while ( *(v50 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v49;
      v50 += 2;
      if ( v49 >= *(unsigned __int16 *)(*(_QWORD *)v39 + 298LL) )
        goto LABEL_39;
    }
    v51 = v48 + 16LL * (*(_DWORD *)v50 + 9) + 312;
  }
  else
  {
LABEL_39:
    v51 = sub_AF54C0(v39, SimpleAnimation_State_TypeInfo, 9LL, v25);
  }
  v52 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v39, *(_QWORD *)(v51 + 8));
  v53 = 71;
LABEL_43:
  v59 = v53;
  v54 = *(_QWORD *)v26;
  if ( *(_WORD *)(*(_QWORD *)v26 + 298LL) )
  {
    v55 = 0LL;
    v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v56 - 1) != System_IDisposable_TypeInfo )
    {
      ++v55;
      v56 += 4;
      if ( v55 >= *(unsigned __int16 *)(*(_QWORD *)v26 + 298LL) )
        goto LABEL_47;
    }
    v57 = v54 + 16LL * *v56 + 312;
  }
  else
  {
LABEL_47:
    v57 = sub_AF54C0(v26, System_IDisposable_TypeInfo, 0LL, v31);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v57)(v26, *(_QWORD *)(v57 + 8));
  if ( v59 == 69 )
    return 0LL;
  return v52;
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
    sub_B5D69C(this, method);
  max_length = flagObjects->max_length;
  if ( max_length < 1 )
    return 0;
  v4 = 0;
  while ( 1 )
  {
    if ( v4 >= max_length )
    {
      v6 = sub_B5D6C8(this);
      sub_B5D668(v6, 0LL);
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
    sub_B5D69C(this, method);
  max_length = onOverlapObjects->max_length;
  if ( max_length < 1 )
    return 0;
  v4 = 0;
  while ( 1 )
  {
    if ( v4 >= max_length )
    {
      v6 = sub_B5D6C8(this);
      sub_B5D668(v6, 0LL);
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
  __int64 v3; // x3
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  WarBoardData_o *v8; // x20
  const MethodInfo *v9; // x2
  WarBoardItemData_o *Item; // x0
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  WarBoardTreasureData_o *Treasure; // x0
  const MethodInfo *v15; // x3

  if ( (byte_42E7743 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, squareIndex, (_DWORD)method, v3);
    byte_42E7743 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (v8 = *(WarBoardData_o **)&Instance[4].fields.m_CachedPtr) == 0LL )
    sub_B5D69C(Instance, v6);
  return WarBoardData__GetPiece_23181536(*(WarBoardData_o **)&Instance[4].fields.m_CachedPtr, squareIndex, v7)
      || (Item = WarBoardData__GetItem(v8, squareIndex, v9)) != 0LL && !Item->fields._isUse_k__BackingField
      || WarBoardData__GetEffect(v8, squareIndex, v11)
      || (Treasure = WarBoardData__GetTreasure(v8, squareIndex, v12)) != 0LL && !Treasure->fields._isUse_k__BackingField
      || WarBoardData__GetWall(v8, squareIndex, 0, v15) != 0LL;
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

  if ( (byte_42E774A & 1) == 0 )
  {
    this = (WarBoardControlUiDataComponent_o *)sub_B5D5C4(
                                                 &SimpleAnimation_State_TypeInfo,
                                                 (_DWORD)animation,
                                                 (_DWORD)suffix,
                                                 method);
    byte_42E774A = 1;
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
    sub_B5D69C(IsNullOrEmpty, v8);
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
    p_method = sub_AF54C0(IsNullOrEmpty, SimpleAnimation_State_TypeInfo, 5LL, v9);
  }
  return (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(v11, *(_QWORD *)(p_method + 8)) < 1.0;
}


void __fastcall WarBoardControlUiDataComponent__LocalSave(
        WarBoardControlUiDataComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int32_t compType; // w8
  UnityEngine_Object_o *squareComponent; // x20
  __int64 Instance; // x0
  const MethodInfo *v17; // x1
  WarBoardData_o *v18; // x20
  struct System_Collections_Generic_List_string__o *listUiDataKey; // x8
  int32_t v20; // w19
  const MethodInfo *v21; // x3
  UnityEngine_Object_o *pieceComponent; // x20
  struct WarBoardPieceBaseComponent_o *v23; // x8
  struct WarBoardPieceData_o *pieceData; // x21
  System_Int32_array *v25; // x20
  unsigned int v26; // w8
  __int64 v27; // x8
  WarBoardData_o *v28; // x19
  const MethodInfo *v29; // x3
  __int64 v30; // x0

  if ( (byte_42E774C & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__ToArray__, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11, v12, v13);
    byte_42E774C = 1;
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
      Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        v18 = *(WarBoardData_o **)(Instance + 432);
        Instance = WarBoardControlUiDataComponent__get_SquareIndex(this, v17);
        listUiDataKey = this->fields.listUiDataKey;
        if ( listUiDataKey )
        {
          v20 = Instance;
          Instance = (__int64)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)listUiDataKey,
                                (const MethodInfo_305910C *)Method_System_Collections_Generic_List_string__ToArray__);
          if ( v18 )
          {
            WarBoardData__UpdateUiData(v18, v20, (System_String_array *)Instance, v21);
            return;
          }
        }
      }
LABEL_29:
      sub_B5D69C(Instance, v17);
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
      v23 = this->fields.pieceComponent;
      if ( !v23 )
        goto LABEL_29;
      pieceData = v23->fields.pieceData;
      Instance = sub_B5D5DC(int___TypeInfo, 3LL);
      if ( !pieceData )
        goto LABEL_29;
      v25 = (System_Int32_array *)Instance;
      if ( !Instance )
        goto LABEL_29;
      v26 = *(_DWORD *)(Instance + 24);
      if ( !v26
        || (*(_DWORD *)(Instance + 32) = pieceData->fields._forceId_k__BackingField, v26 == 1)
        || (*(_DWORD *)(Instance + 36) = pieceData->fields._groupId_k__BackingField, v26 <= 2) )
      {
        v30 = sub_B5D6C8(Instance);
        sub_B5D668(v30, 0LL);
      }
      *(_DWORD *)(Instance + 40) = pieceData->fields._index_k__BackingField;
      Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !Instance )
        goto LABEL_29;
      v27 = Instance;
      Instance = (__int64)this->fields.listUiDataKey;
      if ( !Instance )
        goto LABEL_29;
      v28 = *(WarBoardData_o **)(v27 + 432);
      Instance = (__int64)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)Instance,
                            (const MethodInfo_305910C *)Method_System_Collections_Generic_List_string__ToArray__);
      if ( !v28 )
        goto LABEL_29;
      WarBoardData__UpdateUiData_23203000(v28, v25, (System_String_array *)Instance, v29);
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
      sub_B5D69C(0LL, v6);
    SimpleAnimation__Play_16676044(animation, AnimationStateName, 0LL);
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

  if ( (byte_42E7748 & 1) == 0 )
  {
    sub_B5D5C4(
      &WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_TypeInfo,
      (_DWORD)animation,
      (_DWORD)uiData,
      method);
    byte_42E7748 = 1;
  }
  v7 = sub_B5D694(WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_TypeInfo);
  WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42___ctor(
    (WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B5D69C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = animation;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)animation, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 48) = uiData;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 48), (System_Int32_array **)uiData, v22, v23, v24, v25, v26, v27);
  return (System_Collections_IEnumerator_o *)v7;
}


System_Collections_IEnumerator_o *__fastcall WarBoardControlUiDataComponent__PlayStartUiDataAnim(
        WarBoardControlUiDataComponent_o *this,
        SimpleAnimation_o *animation,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
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

  if ( (byte_42E7747 & 1) == 0 )
  {
    sub_B5D5C4(
      &WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_TypeInfo,
      (_DWORD)animation,
      (_DWORD)method,
      v3);
    byte_42E7747 = 1;
  }
  v6 = sub_B5D694(WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_TypeInfo);
  WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41___ctor(
    (WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 40) = animation;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 40), (System_Int32_array **)animation, v15, v16, v17, v18, v19, v20);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall WarBoardControlUiDataComponent__ResumeUiData(
        WarBoardControlUiDataComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  struct System_Collections_Generic_List_string__o *listUiDataKey; // x0
  WarBoardServantPieceBuffTurnComponent_o *v42; // x9
  struct WarBoardPieceBaseComponent_o *v43; // x10
  __int64 v44; // x21
  __int64 v45; // x0
  __int64 v46; // x1
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **current; // x1
  System_String_o **v54; // x20
  struct System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__o *listUiData; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v56; // x23
  __int64 v57; // x0
  __int64 v58; // x1
  const MethodInfo *v59; // x3
  WarBoardControlUiDataComponent_UiData_o *v60; // x21
  System_String_o *v61; // x20
  WarBoardControlUiDataComponent_c *v62; // x0
  WarBoardServantPieceBuffTurnComponent_o *v63; // x0
  __int64 v64; // x1
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x22
  WarBoardServantPieceBuffTurnComponent_o *v66; // x20
  struct UnityEngine_GameObject_array *animationObjects; // x23
  int max_length; // w8
  int i; // w22
  UnityEngine_GameObject_o *v70; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  const MethodInfo *v72; // x3
  __int64 v73; // x0
  WarBoardServantPieceBuffTurnComponent_o *v74; // [xsp+8h] [xbp-98h]
  struct WarBoardPieceBaseComponent_o *v75; // [xsp+10h] [xbp-90h]
  struct WarBoardPieceBaseComponent_o *v76; // [xsp+10h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v77; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v78; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_42E773F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_System_Predicate_WarBoardControlUiDataComponent_UiData___ctor__, v23, v24, v25);
    sub_B5D5C4(&System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_WarBoardControlUiDataComponent___c__DisplayClass26_0__ResumeUiData_b__0__, v29, v30, v31);
    sub_B5D5C4(&WarBoardControlUiDataComponent___c__DisplayClass26_0_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&WarBoardControlUiDataComponent_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_20581/*"loop"*/, v38, v39, v40);
    byte_42E773F = 1;
  }
  memset(&v78, 0, sizeof(v78));
  listUiDataKey = this->fields.listUiDataKey;
  if ( !listUiDataKey )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v77,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)listUiDataKey,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v42 = 0LL;
  v43 = 0LL;
  v78 = v77;
LABEL_5:
  v74 = v42;
  v75 = v43;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v78,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    v44 = sub_B5D694(WarBoardControlUiDataComponent___c__DisplayClass26_0_TypeInfo);
    WarBoardControlUiDataComponent___c__DisplayClass26_0___ctor(
      (WarBoardControlUiDataComponent___c__DisplayClass26_0_o *)v44,
      0LL);
    if ( !v44 )
      sub_B5D69C(v45, v46);
    current = (System_Int32_array **)v78.fields.current;
    *(_QWORD *)(v44 + 16) = v78.fields.current;
    v54 = (System_String_o **)(v44 + 16);
    sub_B5D560((BattleServantConfConponent_o *)(v44 + 16), current, v47, v48, v49, v50, v51, v52);
    listUiData = this->fields.listUiData;
    v56 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v56,
      (Il2CppObject *)v44,
      Method_WarBoardControlUiDataComponent___c__DisplayClass26_0__ResumeUiData_b__0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_WarBoardControlUiDataComponent_UiData___ctor__);
    if ( !listUiData )
      sub_B5D69C(v57, v58);
    v60 = (WarBoardControlUiDataComponent_UiData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                       (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)listUiData,
                                                       (System_Predicate_T__o *)v56,
                                                       (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__);
    if ( v60 )
    {
      WarBoardControlUiDataComponent__SetUiDataTurnObjects(this, 1, v60, v59);
      v61 = *v54;
      v62 = WarBoardControlUiDataComponent_TypeInfo;
      if ( (BYTE3(WarBoardControlUiDataComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
        v62 = WarBoardControlUiDataComponent_TypeInfo;
      }
      v63 = (WarBoardServantPieceBuffTurnComponent_o *)System_String__op_Equality(
                                                         v61,
                                                         v62->static_fields->UI_DATA_KEY_BARRIER,
                                                         0LL);
      if ( ((unsigned __int8)v63 & 1) != 0
        && ((pieceComponent = this->fields.pieceComponent) != 0LL
          ? (v63 = (WarBoardServantPieceBuffTurnComponent_o *)this->fields.pieceComponent)
          : (v63 = (WarBoardServantPieceBuffTurnComponent_o *)v75),
            pieceComponent) )
      {
        if ( !v63 )
          sub_B5D69C(0LL, v64);
        v63 = (WarBoardServantPieceBuffTurnComponent_o *)((__int64 (__fastcall *)(WarBoardServantPieceBuffTurnComponent_o *, const char *))v63->klass[1]._1.gc_desc)(
                                                           v63,
                                                           v63->klass[1]._1.name);
        v66 = v63;
        if ( !v63 )
          v63 = v74;
        if ( v66 )
        {
          if ( !v63 )
            sub_B5D69C(0LL, v64);
          WarBoardServantPieceBuffTurnComponent__UpdateDisp(v63, 1, 0LL);
        }
        else
        {
          v66 = v74;
        }
      }
      else
      {
        v66 = v74;
        pieceComponent = v75;
      }
      animationObjects = v60->fields.animationObjects;
      if ( !animationObjects )
        sub_B5D69C(v63, v64);
      max_length = animationObjects->max_length;
      v42 = v66;
      v43 = pieceComponent;
      if ( max_length >= 1 )
      {
        v76 = pieceComponent;
        for ( i = 0; i < max_length; ++i )
        {
          if ( i >= (unsigned int)max_length )
          {
            v73 = sub_B5D6C8(v63);
            sub_B5D668(v73, 0LL);
          }
          v70 = animationObjects->m_Items[i];
          if ( !v70 )
            sub_B5D69C(0LL, v64);
          Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              v70,
                                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v63 = (WarBoardServantPieceBuffTurnComponent_o *)UnityEngine_Object__op_Equality(
                                                             Component_srcLineSprite,
                                                             0LL,
                                                             0LL);
          if ( ((unsigned __int8)v63 & 1) == 0 )
            v63 = (WarBoardServantPieceBuffTurnComponent_o *)WarBoardControlUiDataComponent__PlayAnimation(
                                                               this,
                                                               (SimpleAnimation_o *)Component_srcLineSprite,
                                                               (System_String_o *)StringLiteral_20581/*"loop"*/,
                                                               v72);
          max_length = animationObjects->max_length;
        }
        v43 = v76;
        v42 = v66;
      }
      goto LABEL_5;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v78,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


void __fastcall WarBoardControlUiDataComponent__ResumeUiDataAll(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WebViewManager_o *Instance; // x0
  const MethodInfo *v8; // x1
  __int64 v9; // x8
  __int64 v10; // x20
  int v11; // w8
  unsigned int v12; // w21
  __int64 v13; // x8
  int32_t v14; // w19
  __int64 v15; // x0

  if ( (byte_42E773C & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v1, v2, v3);
    sub_B5D5C4(&WarBoardControlUiDataComponent_TypeInfo, v4, v5, v6);
    byte_42E773C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  v9 = *(_QWORD *)&Instance[4].fields.m_CachedPtr;
  if ( !v9 )
    goto LABEL_15;
  v10 = *(_QWORD *)(v9 + 56);
  if ( !v10 )
    goto LABEL_15;
  v11 = *(_DWORD *)(v10 + 24);
  if ( v11 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= v11 )
      {
        v15 = sub_B5D6C8(Instance);
        sub_B5D668(v15, 0LL);
      }
      v13 = *(_QWORD *)(v10 + 8LL * (int)v12 + 32);
      if ( !v13 )
        break;
      v14 = *(_DWORD *)(v13 + 16);
      if ( (BYTE3(WarBoardControlUiDataComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
      }
      WarBoardControlUiDataComponent__ResumeUiDataAll_23194048(v14, v8);
      v11 = *(_DWORD *)(v10 + 24);
      if ( (int)++v12 >= v11 )
        return;
    }
LABEL_15:
    sub_B5D69C(Instance, v8);
  }
}


void __fastcall WarBoardControlUiDataComponent__ResumeUiDataAll_23194048(int32_t squareIndex, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  WarBoardData_o *Instance; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  struct WarBoardStageEntity_o *stageEntity; // x8
  WarBoardControlUiDataComponent_o *boardMessage; // x0
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  struct WarBoardPieceData_array *pieces; // x8
  WarBoardControlUiDataComponent_o *v16; // x0

  if ( (byte_42E773D & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&WarBoardControlUiDataComponent_TypeInfo, v5, v6, v7);
    byte_42E773D = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList;
  if ( !Instance )
    goto LABEL_19;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_23181536(Instance, squareIndex, v10);
  if ( Instance )
  {
    stageEntity = Instance[1].fields.stageEntity;
    if ( !stageEntity )
      goto LABEL_19;
    boardMessage = (WarBoardControlUiDataComponent_o *)stageEntity[2].fields.boardMessage;
    if ( boardMessage )
      WarBoardControlUiDataComponent__ResumeUiData(boardMessage, v9);
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList;
  if ( !Instance )
    goto LABEL_19;
  Instance = (WarBoardData_o *)WarBoardData__GetSquare(Instance, squareIndex, v13);
  if ( !Instance )
    goto LABEL_15;
  pieces = Instance->fields.pieces;
  if ( !pieces )
LABEL_19:
    sub_B5D69C(Instance, v9);
  v16 = (WarBoardControlUiDataComponent_o *)pieces->m_Items[18];
  if ( v16 )
    WarBoardControlUiDataComponent__ResumeUiData(v16, v9);
LABEL_15:
  if ( (BYTE3(WarBoardControlUiDataComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  }
  WarBoardControlUiDataComponent__UpdateAdjustSituationAll_23193564(squareIndex, 1, v14);
}


void __fastcall WarBoardControlUiDataComponent__SetUiData(
        WarBoardControlUiDataComponent_o *this,
        System_String_o *key,
        bool isDisp,
        const MethodInfo *method)
{
  _BOOL4 v4; // w19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  __int64 v37; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *listUiDataKey; // x0
  __int64 v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  WarBoardManager_TaskList_o **v46; // x22
  struct System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__o *listUiData; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v48; // x24
  peRenderTexture_ChangeLayerObject_o *v49; // x0
  WarBoardControlUiDataComponent_UiData_o *v50; // x21
  WarBoardManager_TaskList_o *v51; // x1
  const MethodInfo *v52; // x3
  const MethodInfo *v53; // x1
  const MethodInfo *v54; // x2
  int32_t SquareIndex; // w23
  System_String_o *v56; // x22
  WarBoardControlUiDataComponent_c *v57; // x0
  const MethodInfo *v58; // x1
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0
  WarBoardServantPieceBuffTurnComponent_o *v60; // x0
  struct UnityEngine_GameObject_array *animationObjects; // x23
  int max_length; // w8
  unsigned int v63; // w24
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  const MethodInfo *v65; // x2
  const MethodInfo *v66; // x3
  System_Collections_IEnumerator_o *started; // x0
  __int64 v68; // x0

  v4 = isDisp;
  if ( (byte_42E773E & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, (_DWORD)key, isDisp, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Contains__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Remove__, v16, v17, v18);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_System_Predicate_WarBoardControlUiDataComponent_UiData___ctor__, v22, v23, v24);
    sub_B5D5C4(&System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_WarBoardControlUiDataComponent___c__DisplayClass25_0__SetUiData_b__0__, v28, v29, v30);
    sub_B5D5C4(&WarBoardControlUiDataComponent___c__DisplayClass25_0_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&WarBoardControlUiDataComponent_TypeInfo, v34, v35, v36);
    byte_42E773E = 1;
  }
  v37 = sub_B5D694(WarBoardControlUiDataComponent___c__DisplayClass25_0_TypeInfo);
  WarBoardControlUiDataComponent___c__DisplayClass25_0___ctor(
    (WarBoardControlUiDataComponent___c__DisplayClass25_0_o *)v37,
    0LL);
  if ( !v37 )
    goto LABEL_37;
  *(_QWORD *)(v37 + 16) = key;
  v46 = (WarBoardManager_TaskList_o **)(v37 + 16);
  sub_B5D560((BattleServantConfConponent_o *)(v37 + 16), (System_Int32_array **)key, v40, v41, v42, v43, v44, v45);
  listUiData = this->fields.listUiData;
  v48 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v48,
    (Il2CppObject *)v37,
    Method_WarBoardControlUiDataComponent___c__DisplayClass25_0__SetUiData_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_WarBoardControlUiDataComponent_UiData___ctor__);
  if ( !listUiData )
    goto LABEL_37;
  v49 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)listUiData,
          (System_Predicate_T__o *)v48,
          (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__);
  if ( v49 )
  {
    v50 = (WarBoardControlUiDataComponent_UiData_o *)v49;
    listUiDataKey = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.listUiDataKey;
    if ( !listUiDataKey )
      goto LABEL_37;
    if ( ((System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
             (System_Collections_Generic_List_WarBoardManager_TaskList__o *)listUiDataKey,
             *v46,
             (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_string__Contains__) ^ v4) & 1) != 0 )
    {
      listUiDataKey = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.listUiDataKey;
      if ( !listUiDataKey )
        goto LABEL_37;
      v51 = *v46;
      if ( v4 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          listUiDataKey,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v51,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
        WarBoardControlUiDataComponent__SetUiDataTurnObjects(this, 1, v50, v52);
        SquareIndex = WarBoardControlUiDataComponent__get_SquareIndex(this, v53);
        if ( (BYTE3(WarBoardControlUiDataComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
        }
        WarBoardControlUiDataComponent__UpdateAdjustSituationAll_23193564(SquareIndex, 1, v54);
      }
      else
      {
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)listUiDataKey,
          v51,
          (const MethodInfo_305896C *)Method_System_Collections_Generic_List_string__Remove__);
      }
      v56 = (System_String_o *)*v46;
      v57 = WarBoardControlUiDataComponent_TypeInfo;
      if ( (BYTE3(WarBoardControlUiDataComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
        v57 = WarBoardControlUiDataComponent_TypeInfo;
      }
      if ( System_String__op_Equality(v56, v57->static_fields->UI_DATA_KEY_BARRIER, 0LL) )
      {
        pieceComponent = this->fields.pieceComponent;
        if ( pieceComponent )
        {
          v60 = (WarBoardServantPieceBuffTurnComponent_o *)((__int64 (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))pieceComponent->klass->vtable._4_get_BuffTrunNotice.method)(
                                                             pieceComponent,
                                                             pieceComponent->klass->vtable._5_Initialize.methodPtr);
          if ( v60 )
            WarBoardServantPieceBuffTurnComponent__UpdateDisp(v60, 1, 0LL);
        }
      }
      WarBoardControlUiDataComponent__LocalSave(this, v58);
      animationObjects = v50->fields.animationObjects;
      if ( !animationObjects )
        goto LABEL_37;
      max_length = animationObjects->max_length;
      if ( max_length >= 1 )
      {
        v63 = 0;
        while ( 1 )
        {
          if ( v63 >= max_length )
          {
            v68 = sub_B5D6C8(listUiDataKey);
            sub_B5D668(v68, 0LL);
          }
          listUiDataKey = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)animationObjects->m_Items[v63];
          if ( !listUiDataKey )
            break;
          Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              (UnityEngine_GameObject_o *)listUiDataKey,
                                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
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
                          v65);
            else
              started = WarBoardControlUiDataComponent__PlayEndUiDataAnim(
                          this,
                          (SimpleAnimation_o *)Component_srcLineSprite,
                          v50,
                          v66);
            listUiDataKey = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
          }
          max_length = animationObjects->max_length;
          if ( (int)++v63 >= max_length )
            return;
        }
LABEL_37:
        sub_B5D69C(listUiDataKey, v39);
      }
    }
  }
}


void __fastcall WarBoardControlUiDataComponent__SetUiDataFromLocalData(
        WarBoardControlUiDataComponent_o *this,
        System_String_array *keys,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_string__o *listUiDataKey; // x0

  if ( (byte_42E7740 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__AddRange__, (_DWORD)keys, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Clear__, v6, v7, v8);
    byte_42E7740 = 1;
  }
  listUiDataKey = this->fields.listUiDataKey;
  if ( !listUiDataKey
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)listUiDataKey,
          (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_string__Clear__),
        (listUiDataKey = this->fields.listUiDataKey) == 0LL) )
  {
    sub_B5D69C(listUiDataKey, keys);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)listUiDataKey,
    (System_Collections_Generic_IEnumerable_T__o *)keys,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_string__AddRange__);
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
        v5 = sub_B5D6C8(this);
        sub_B5D668(v5, 0LL);
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
    sub_B5D69C(this, method);
  }
}


void __fastcall WarBoardControlUiDataComponent__SetUiDataOnBattleAll(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WebViewManager_o *Instance; // x0
  const MethodInfo *v8; // x1
  __int64 v9; // x8
  __int64 v10; // x20
  int v11; // w8
  unsigned int v12; // w21
  __int64 v13; // x8
  int32_t v14; // w19
  __int64 v15; // x0

  if ( (byte_42E7738 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v1, v2, v3);
    sub_B5D5C4(&WarBoardControlUiDataComponent_TypeInfo, v4, v5, v6);
    byte_42E7738 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  v9 = *(_QWORD *)&Instance[4].fields.m_CachedPtr;
  if ( !v9 )
    goto LABEL_15;
  v10 = *(_QWORD *)(v9 + 56);
  if ( !v10 )
    goto LABEL_15;
  v11 = *(_DWORD *)(v10 + 24);
  if ( v11 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= v11 )
      {
        v15 = sub_B5D6C8(Instance);
        sub_B5D668(v15, 0LL);
      }
      v13 = *(_QWORD *)(v10 + 8LL * (int)v12 + 32);
      if ( !v13 )
        break;
      v14 = *(_DWORD *)(v13 + 16);
      if ( (BYTE3(WarBoardControlUiDataComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
      }
      WarBoardControlUiDataComponent__SetUiDataOnBattleAll_23192832(v14, v8);
      v11 = *(_DWORD *)(v10 + 24);
      if ( (int)++v12 >= v11 )
        return;
    }
LABEL_15:
    sub_B5D69C(Instance, v8);
  }
}


void __fastcall WarBoardControlUiDataComponent__SetUiDataOnBattleAll_23192832(
        int32_t squareIndex,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WarBoardData_o *Instance; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  struct WarBoardStageEntity_o *stageEntity; // x8
  WarBoardControlUiDataComponent_o *boardMessage; // x0
  const MethodInfo *v10; // x2
  struct WarBoardPieceData_array *pieces; // x8
  WarBoardControlUiDataComponent_o *v12; // x0

  if ( (byte_42E7739 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E7739 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList;
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_23181536(Instance, squareIndex, v7);
  if ( Instance )
  {
    stageEntity = Instance[1].fields.stageEntity;
    if ( !stageEntity )
      goto LABEL_16;
    boardMessage = (WarBoardControlUiDataComponent_o *)stageEntity[2].fields.boardMessage;
    if ( boardMessage )
      WarBoardControlUiDataComponent__SetUiDataOnBattle(boardMessage, v6);
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList;
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)WarBoardData__GetSquare(Instance, squareIndex, v10);
  if ( !Instance )
    return;
  pieces = Instance->fields.pieces;
  if ( !pieces )
LABEL_16:
    sub_B5D69C(Instance, v6);
  v12 = (WarBoardControlUiDataComponent_o *)pieces->m_Items[18];
  if ( v12 )
    WarBoardControlUiDataComponent__SetUiDataOnBattle(v12, v6);
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
  if ( (byte_42E7746 & 1) == 0 )
  {
    this = (WarBoardControlUiDataComponent_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, isDisp, (_DWORD)uiData, method);
    byte_42E7746 = 1;
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
    v15 = sub_B5D6C8(this);
    sub_B5D668(v15, 0LL);
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
    sub_B5D69C(this, isDisp);
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

  if ( (byte_42E7744 & 1) == 0 )
  {
    sub_B5D5C4(
      &WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_TypeInfo,
      isDisp,
      (_DWORD)targetObject,
      immediatelyWhenOff);
    byte_42E7744 = 1;
  }
  v9 = sub_B5D694(WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_TypeInfo);
  WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37___ctor(
    (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)v9,
    0,
    0LL);
  if ( !v9 )
    sub_B5D69C(v10, v11);
  *(_QWORD *)(v9 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_BYTE *)(v9 + 48) = isDisp;
  *(_QWORD *)(v9 + 40) = targetObject;
  sub_B5D560(
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
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
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

  if ( (byte_42E7749 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardControlUiDataComponent__StartSyncAnimation_d__43_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    byte_42E7749 = 1;
  }
  v6 = sub_B5D694(WarBoardControlUiDataComponent__StartSyncAnimation_d__43_TypeInfo);
  WarBoardControlUiDataComponent__StartSyncAnimation_d__43___ctor(
    (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 40) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 40), (System_Int32_array **)callback, v15, v16, v17, v18, v19, v20);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall WarBoardControlUiDataComponent__SyncAnimation(
        WarBoardControlUiDataComponent_o *this,
        System_Action_o *syncCallback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *started; // x1

  started = WarBoardControlUiDataComponent__StartSyncAnimation(this, syncCallback, method);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
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
    sub_B5D69C(AdjustType, v4);
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
    v14 = sub_B5D6C8(AdjustType);
    sub_B5D668(v14, 0LL);
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
  __int64 v3; // x3
  System_Int32_array *v5; // x19
  __int64 v6; // x8
  unsigned __int64 v7; // x22
  bool v8; // w20
  int32_t v9; // w21
  __int64 v10; // x0

  v5 = squareIndexes;
  if ( (byte_42E773A & 1) == 0 )
  {
    squareIndexes = (System_Int32_array *)sub_B5D5C4(
                                            &WarBoardControlUiDataComponent_TypeInfo,
                                            immediatelyWhenOff,
                                            (_DWORD)method,
                                            v3);
    byte_42E773A = 1;
  }
  if ( !v5 )
    sub_B5D69C(squareIndexes, immediatelyWhenOff);
  v6 = *(_QWORD *)&v5->max_length;
  if ( (int)v6 >= 1 )
  {
    v7 = 0LL;
    v8 = immediatelyWhenOff;
    do
    {
      if ( v7 >= (unsigned int)v6 )
      {
        v10 = sub_B5D6C8(squareIndexes);
        sub_B5D668(v10, 0LL);
      }
      v9 = v5->m_Items[v7 + 1];
      if ( (BYTE3(WarBoardControlUiDataComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
      }
      WarBoardControlUiDataComponent__UpdateAdjustSituationAll_23193564(v9, v8, method);
      LODWORD(v6) = v5->max_length;
      ++v7;
    }
    while ( (__int64)v7 < (int)v6 );
  }
}


void __fastcall WarBoardControlUiDataComponent__UpdateAdjustSituationAll_23193564(
        int32_t squareIndex,
        bool immediatelyWhenOff,
        const MethodInfo *method)
{
  __int64 v3; // x3
  WarBoardData_o *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  struct WarBoardStageEntity_o *stageEntity; // x8
  WarBoardControlUiDataComponent_o *boardMessage; // x0
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2
  struct WarBoardPieceData_array *pieces; // x8
  WarBoardControlUiDataComponent_o *v15; // x0

  if ( (byte_42E773B & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, immediatelyWhenOff, (_DWORD)method, v3);
    byte_42E773B = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList;
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_23181536(Instance, squareIndex, v8);
  if ( Instance )
  {
    stageEntity = Instance[1].fields.stageEntity;
    if ( !stageEntity )
      goto LABEL_16;
    boardMessage = (WarBoardControlUiDataComponent_o *)stageEntity[2].fields.boardMessage;
    if ( boardMessage )
      WarBoardControlUiDataComponent__UpdateAdjustSituation(boardMessage, immediatelyWhenOff, v9);
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList;
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)WarBoardData__GetSquare(Instance, squareIndex, v12);
  if ( !Instance )
    return;
  pieces = Instance->fields.pieces;
  if ( !pieces )
LABEL_16:
    sub_B5D69C(Instance, v7);
  v15 = (WarBoardControlUiDataComponent_o *)pieces->m_Items[18];
  if ( v15 )
    WarBoardControlUiDataComponent__UpdateAdjustSituation(v15, immediatelyWhenOff, v13);
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
      sub_B5D69C(IsExistsOther, v8);
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
          v16 = sub_B5D6C8(IsExistsOther);
          sub_B5D668(v16, 0LL);
        }
        v15 = WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation(
                this,
                v13,
                onExistsOtherTurnOffObjects->m_Items[v12],
                v14,
                v9);
        IsExistsOther = UnityEngine_MonoBehaviour__StartCoroutine_35615088(
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
  int v2; // w2
  __int64 v3; // x3
  WarBoardControlUiDataComponent_o *Instance; // x0
  const MethodInfo *v6; // x1
  WarBoardData_o *flagObjects; // x20
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  struct UnityEngine_GameObject_array *onEnterBattleTurnOffObjects; // x8
  char v11; // w21
  struct UnityEngine_GameObject_array *onOverlapObjects; // x22
  __int64 v13; // x8
  unsigned __int64 v14; // x23
  UnityEngine_GameObject_o *v15; // x20
  bool v16; // w1
  __int64 v17; // x0

  if ( (byte_42E7741 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E7741 = 1;
  }
  if ( !this->fields.compType )
    return;
  Instance = (WarBoardControlUiDataComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  flagObjects = (WarBoardData_o *)Instance[3].fields.flagObjects;
  Instance = (WarBoardControlUiDataComponent_o *)WarBoardControlUiDataComponent__get_SquareIndex(this, v6);
  if ( !flagObjects )
    goto LABEL_22;
  Instance = (WarBoardControlUiDataComponent_o *)WarBoardData__GetSquare(flagObjects, (int32_t)Instance, v8);
  if ( !Instance )
    goto LABEL_10;
  onEnterBattleTurnOffObjects = Instance->fields.onEnterBattleTurnOffObjects;
  if ( !onEnterBattleTurnOffObjects )
    goto LABEL_22;
  Instance = (WarBoardControlUiDataComponent_o *)onEnterBattleTurnOffObjects->m_Items[18];
  if ( Instance )
  {
    Instance = (WarBoardControlUiDataComponent_o *)WarBoardControlUiDataComponent__IsDispOverlapObjects(Instance, v6);
    v11 = (unsigned __int8)Instance ^ 1;
  }
  else
  {
LABEL_10:
    v11 = 1;
  }
  onOverlapObjects = this->fields.onOverlapObjects;
  if ( !onOverlapObjects )
LABEL_22:
    sub_B5D69C(Instance, v6);
  v13 = *(_QWORD *)&onOverlapObjects->max_length;
  if ( (int)v13 >= 1 )
  {
    v14 = 0LL;
    do
    {
      if ( v14 >= (unsigned int)v13 )
      {
        v17 = sub_B5D6C8(Instance);
        sub_B5D668(v17, 0LL);
      }
      v15 = onOverlapObjects->m_Items[v14];
      Instance = (WarBoardControlUiDataComponent_o *)WarBoardControlUiDataComponent__CheckCorrectActiveObject(
                                                       this,
                                                       v15,
                                                       v9);
      if ( ((unsigned int)Instance & 0x80000000) != 0 )
      {
        if ( !v15 )
          goto LABEL_22;
        v16 = v11 & 1;
      }
      else
      {
        if ( !v15 )
          goto LABEL_22;
        v16 = ((_DWORD)Instance == 1) & v11;
      }
      UnityEngine_GameObject__SetActive(v15, v16, 0LL);
      LODWORD(v13) = onOverlapObjects->max_length;
      ++v14;
    }
    while ( (__int64)v14 < (int)v13 );
  }
}


int32_t __fastcall WarBoardControlUiDataComponent__get_SquareIndex(
        WarBoardControlUiDataComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *pieceComponent; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct WarBoardPieceBaseComponent_o *v8; // x8
  struct WarBoardPieceData_o *pieceData; // x8
  int32_t *p_nowSquareIndex_k__BackingField; // x8
  UnityEngine_Object_o *squareComponent; // x20
  struct WarBoardSquareComponent_o *v12; // x8
  struct WarBoardSquareData_o *squareData; // x8

  if ( (byte_42E7736 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7736 = 1;
  }
  pieceComponent = (UnityEngine_Object_o *)this->fields.pieceComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(pieceComponent, 0LL, 0LL);
  if ( v6 )
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
    goto LABEL_19;
  }
  squareComponent = (UnityEngine_Object_o *)this->fields.squareComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(squareComponent, 0LL, 0LL);
  if ( v6 )
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
LABEL_19:
    sub_B5D69C(v6, v7);
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
  int v2; // w2
  __int64 v3; // x3
  WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int32_t _1__state; // w8
  WarBoardControlUiDataComponent_o *_4__this; // x20
  WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o **p_animation; // x21
  System_Int32_array **v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x3
  WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_c *klass; // x8
  WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *v29; // x21
  unsigned __int64 v30; // x10
  int32_t *p_offset; // x11
  __int64 v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  BattleServantConfConponent_o *p__2__current; // x19
  bool result; // w0
  struct WarBoardControlUiDataComponent_UiData_o *uiData; // x8
  struct UnityEngine_GameObject_array *animationObjects; // x22
  int max_length; // w8
  unsigned int v44; // w23
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  int32_t SquareIndex; // w19
  __int64 v47; // x0

  v4 = this;
  if ( (byte_42E7651 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&WarBoardControlUiDataComponent_TypeInfo, v11, v12, v13);
    this = (WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *)sub_B5D5C4(&StringLiteral_18571/*"end"*/, v14, v15, v16);
    byte_42E7651 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    p_animation = (WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o **)&v4->fields.animation;
    goto LABEL_9;
  }
  if ( !_1__state )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_38;
    p_animation = (WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o **)&v4->fields.animation;
    v20 = (System_Int32_array **)WarBoardControlUiDataComponent__PlayAnimation(
                                   _4__this,
                                   v4->fields.animation,
                                   (System_String_o *)StringLiteral_18571/*"end"*/,
                                   0LL);
    v4->fields._stateName_5__2 = (struct System_String_o *)v20;
    sub_B5D560((BattleServantConfConponent_o *)&v4->fields._stateName_5__2, v20, v21, v22, v23, v24, v25, v26);
    this = (WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *)System_String__IsNullOrEmpty(
                                                                          v4->fields._stateName_5__2,
                                                                          0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
LABEL_19:
      uiData = v4->fields.uiData;
      if ( !uiData )
        goto LABEL_38;
      animationObjects = uiData->fields.animationObjects;
      if ( !animationObjects )
        goto LABEL_38;
      max_length = animationObjects->max_length;
      if ( max_length >= 1 )
      {
        v44 = 0;
        while ( 1 )
        {
          if ( v44 >= max_length )
          {
            v47 = sub_B5D6C8(this);
            sub_B5D668(v47, 0LL);
          }
          this = (WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *)animationObjects->m_Items[v44];
          if ( !this )
            break;
          Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              (UnityEngine_GameObject_o *)this,
                                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
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
                                                                                  (System_String_o *)StringLiteral_18571/*"end"*/,
                                                                                  0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
              return 0;
          }
          max_length = animationObjects->max_length;
          if ( (int)++v44 >= max_length )
            goto LABEL_32;
        }
LABEL_38:
        sub_B5D69C(this, method);
      }
LABEL_32:
      if ( !_4__this )
        goto LABEL_38;
      WarBoardControlUiDataComponent__SetUiDataTurnObjects(_4__this, 0, v4->fields.uiData, 0LL);
      SquareIndex = WarBoardControlUiDataComponent__get_SquareIndex(_4__this, 0LL);
      if ( (BYTE3(WarBoardControlUiDataComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
      }
      WarBoardControlUiDataComponent__UpdateAdjustSituationAll_23193564(SquareIndex, 0, 0LL);
      return 0;
    }
LABEL_9:
    this = *p_animation;
    if ( !*p_animation )
      goto LABEL_38;
    this = (WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *)SimpleAnimation__GetState(
                                                                          (SimpleAnimation_o *)this,
                                                                          v4->fields._stateName_5__2,
                                                                          0LL);
    if ( !this )
      goto LABEL_38;
    klass = this->klass;
    v29 = this;
    if ( *(_WORD *)&this->klass->_2.bitflags1 )
    {
      v30 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v30;
        p_offset += 4;
        if ( v30 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
          goto LABEL_15;
      }
      v32 = (__int64)(&klass->vtable._5_System_IDisposable_Dispose.method + 2 * *p_offset);
    }
    else
    {
LABEL_15:
      v32 = sub_AF54C0(this, SimpleAnimation_State_TypeInfo, 5LL, v27);
    }
    if ( (*(float (__fastcall **)(WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *, _QWORD))v32)(
           v29,
           *(_QWORD *)(v32 + 8)) < 1.0 )
    {
      v4->fields.__2__current = 0LL;
      p__2__current = (BattleServantConfConponent_o *)&v4->fields.__2__current;
      sub_B5D560(p__2__current, 0LL, v33, v34, v35, v36, v37, v38);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t _1__state; // w8
  WarBoardControlUiDataComponent_o *_4__this; // x20
  WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o **p_animation; // x21
  System_Int32_array **v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x3
  WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_c *klass; // x8
  WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *v23; // x21
  unsigned __int64 v24; // x10
  int32_t *p_offset; // x11
  __int64 v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  BattleServantConfConponent_o *p__2__current; // x19
  bool result; // w0

  v4 = this;
  if ( (byte_42E7652 & 1) == 0 )
  {
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_22568/*"start"*/, v5, v6, v7);
    this = (WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *)sub_B5D5C4(&StringLiteral_20581/*"loop"*/, v8, v9, v10);
    byte_42E7652 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    p_animation = (WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o **)&v4->fields.animation;
    goto LABEL_9;
  }
  if ( !_1__state )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_22;
    p_animation = (WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o **)&v4->fields.animation;
    v14 = (System_Int32_array **)WarBoardControlUiDataComponent__PlayAnimation(
                                   _4__this,
                                   v4->fields.animation,
                                   (System_String_o *)StringLiteral_22568/*"start"*/,
                                   0LL);
    v4->fields._stateName_5__2 = (struct System_String_o *)v14;
    sub_B5D560((BattleServantConfConponent_o *)&v4->fields._stateName_5__2, v14, v15, v16, v17, v18, v19, v20);
    if ( System_String__IsNullOrEmpty(v4->fields._stateName_5__2, 0LL) )
    {
LABEL_20:
      WarBoardControlUiDataComponent__PlayAnimation(
        _4__this,
        v4->fields.animation,
        (System_String_o *)StringLiteral_20581/*"loop"*/,
        0LL);
      return 0;
    }
LABEL_9:
    this = *p_animation;
    if ( *p_animation )
    {
      this = (WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *)SimpleAnimation__GetState(
                                                                              (SimpleAnimation_o *)this,
                                                                              v4->fields._stateName_5__2,
                                                                              0LL);
      if ( this )
      {
        klass = this->klass;
        v23 = this;
        if ( *(_WORD *)&this->klass->_2.bitflags1 )
        {
          v24 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v24;
            p_offset += 4;
            if ( v24 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
              goto LABEL_15;
          }
          v26 = (__int64)(&klass->vtable._5_System_IDisposable_Dispose.method + 2 * *p_offset);
        }
        else
        {
LABEL_15:
          v26 = sub_AF54C0(this, SimpleAnimation_State_TypeInfo, 5LL, v21);
        }
        if ( (*(float (__fastcall **)(WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *, _QWORD))v26)(
               v23,
               *(_QWORD *)(v26 + 8)) < 1.0 )
        {
          v4->fields.__2__current = 0LL;
          p__2__current = (BattleServantConfConponent_o *)&v4->fields.__2__current;
          sub_B5D560(p__2__current, 0LL, v27, v28, v29, v30, v31, v32);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
          return result;
        }
        if ( _4__this )
          goto LABEL_20;
      }
    }
LABEL_22:
    sub_B5D69C(this, method);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int32_t _1__state; // w8
  WarBoardControlUiDataComponent_o *_4__this; // x20
  int32_t v22; // w0
  System_Int32_array **Component_srcLineSprite; // x0
  SimpleAnimation_o **p_simpleAnimation_5__2; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  bool *p_isDisp; // x23
  SimpleAnimation_o *v32; // x22
  SimpleAnimation_o *v33; // x22
  struct UnityEngine_GameObject_o *targetObject; // x8
  bool v35; // w1
  __int64 v36; // x3
  WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_c *klass; // x8
  WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *v38; // x21
  unsigned __int64 v39; // x10
  int32_t *p_offset; // x11
  __int64 v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  BattleServantConfConponent_o *p__2__current; // x19
  bool result; // w0
  __int64 *v50; // x8
  System_Int32_array **v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7

  v4 = this;
  if ( (byte_42E7653 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_22568/*"start"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_18571/*"end"*/, v14, v15, v16);
    this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)sub_B5D5C4(
                                                                                        &StringLiteral_20581/*"loop"*/,
                                                                                        v17,
                                                                                        v18,
                                                                                        v19);
    byte_42E7653 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    p_simpleAnimation_5__2 = &v4->fields._simpleAnimation_5__2;
    goto LABEL_31;
  }
  if ( !_1__state )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_59;
    v22 = WarBoardControlUiDataComponent__CheckCorrectActiveObject(_4__this, v4->fields.targetObject, 0LL);
    if ( (v22 & 0x80000000) == 0 )
      v4->fields.isDisp = v22 == 1 && v4->fields.isDisp;
    this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)v4->fields.targetObject;
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
      this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)v4->fields.targetObject;
      if ( !this )
        goto LABEL_59;
      Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         (UnityEngine_GameObject_o *)this,
                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
      v4->fields._simpleAnimation_5__2 = (struct SimpleAnimation_o *)Component_srcLineSprite;
      p_simpleAnimation_5__2 = &v4->fields._simpleAnimation_5__2;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v4->fields._simpleAnimation_5__2,
        Component_srcLineSprite,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
      p_isDisp = &v4->fields.isDisp;
      if ( v4->fields.isDisp )
      {
        this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)v4->fields.targetObject;
        if ( !this )
          goto LABEL_59;
        if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)this, 0LL) )
        {
          v32 = *p_simpleAnimation_5__2;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v32, 0LL, 0LL)
            && (WarBoardControlUiDataComponent__IsPlayingAnimation(
                  _4__this,
                  *p_simpleAnimation_5__2,
                  (System_String_o *)StringLiteral_22568/*"start"*/,
                  0LL)
             || WarBoardControlUiDataComponent__IsPlayingAnimation(
                  _4__this,
                  *p_simpleAnimation_5__2,
                  (System_String_o *)StringLiteral_20581/*"loop"*/,
                  0LL)) )
          {
            return 0;
          }
        }
        if ( *p_isDisp )
          goto LABEL_24;
      }
      this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)v4->fields.targetObject;
      if ( !this )
        goto LABEL_59;
      if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)this, 0LL) )
      {
        if ( !v4->fields.isDisp && v4->fields.immediatelyWhenOff )
          goto LABEL_49;
LABEL_24:
        v33 = *p_simpleAnimation_5__2;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)UnityEngine_Object__op_Equality(
                                                                                            (UnityEngine_Object_o *)v33,
                                                                                            0LL,
                                                                                            0LL);
        targetObject = v4->fields.targetObject;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( targetObject )
          {
            v35 = *p_isDisp;
            this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)v4->fields.targetObject;
LABEL_51:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v35, 0LL);
            return 0;
          }
          goto LABEL_59;
        }
        if ( !targetObject )
          goto LABEL_59;
        UnityEngine_GameObject__SetActive(v4->fields.targetObject, 1, 0LL);
        if ( v4->fields.isDisp )
          v50 = &StringLiteral_22568/*"start"*/;
        else
          v50 = &StringLiteral_18571/*"end"*/;
        v51 = (System_Int32_array **)WarBoardControlUiDataComponent__PlayAnimation(
                                       _4__this,
                                       v4->fields._simpleAnimation_5__2,
                                       (System_String_o *)*v50,
                                       0LL);
        v4->fields._stateName_5__3 = (struct System_String_o *)v51;
        sub_B5D560((BattleServantConfConponent_o *)&v4->fields._stateName_5__3, v51, v52, v53, v54, v55, v56, v57);
        this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)System_String__IsNullOrEmpty(
                                                                                            v4->fields._stateName_5__3,
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
              v4->fields._simpleAnimation_5__2,
              (System_String_o *)StringLiteral_20581/*"loop"*/,
              0LL);
            return 0;
          }
LABEL_49:
          this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)v4->fields.targetObject;
          if ( this )
          {
            v35 = 0;
            goto LABEL_51;
          }
LABEL_59:
          sub_B5D69C(this, method);
        }
LABEL_31:
        this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)*p_simpleAnimation_5__2;
        if ( !*p_simpleAnimation_5__2 )
          goto LABEL_59;
        this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)SimpleAnimation__GetState(
                                                                                            (SimpleAnimation_o *)this,
                                                                                            v4->fields._stateName_5__3,
                                                                                            0LL);
        if ( !this )
          goto LABEL_59;
        klass = this->klass;
        v38 = this;
        if ( *(_WORD *)&this->klass->_2.bitflags1 )
        {
          v39 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v39;
            p_offset += 4;
            if ( v39 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
              goto LABEL_37;
          }
          v41 = (__int64)(&klass->vtable._5_System_IDisposable_Dispose.method + 2 * *p_offset);
        }
        else
        {
LABEL_37:
          v41 = sub_AF54C0(this, SimpleAnimation_State_TypeInfo, 5LL, v36);
        }
        if ( (*(float (__fastcall **)(WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *, _QWORD))v41)(
               v38,
               *(_QWORD *)(v41 + 8)) < 1.0 )
        {
          v4->fields.__2__current = 0LL;
          p__2__current = (BattleServantConfConponent_o *)&v4->fields.__2__current;
          sub_B5D560(p__2__current, 0LL, v42, v43, v44, v45, v46, v47);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
          return result;
        }
        p_isDisp = &v4->fields.isDisp;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int32_t _1__state; // w8
  bool result; // w0
  struct WarBoardControlUiDataComponent_o *_4__this; // x21
  UnityEngine_Object_o **p_targetSimpleAnimation_5__2; // x20
  struct UnityEngine_GameObject_array *syncAnimationObjects; // x23
  int max_length; // w8
  unsigned int v36; // w24
  __int64 v37; // x8
  UnityEngine_GameObject_o *v38; // x22
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_Object_o *v40; // x21
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  UnityEngine_Object_o *v47; // x22
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o **p_animState_5__3; // x20
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v56; // x1
  __int64 v57; // x3
  System_Collections_IEnumerator_o *v58; // x21
  System_Collections_IEnumerator_c *v59; // x8
  unsigned __int64 v60; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  BattleServantConfConponent_o *p_state_5__6; // x20
  __int64 v64; // x3
  System_Collections_IEnumerator_c *v65; // x8
  unsigned __int64 v66; // x10
  System_Collections_IEnumerator_c **v67; // x11
  __int64 v68; // x0
  System_Int32_array **v69; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  __int64 v76; // x23
  __int64 v77; // x22
  __int64 v78; // x0
  __int64 v79; // x3
  __int64 v80; // x8
  __int64 v81; // x21
  unsigned __int64 v82; // x10
  int *v83; // x11
  __int64 v84; // x0
  float v85; // s0
  float normalizedTime; // s0
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  UnityEngine_Object_o *v93; // x20
  System_Collections_Generic_IEnumerable_TSource__o *States; // x0
  System_Int32_array **StonePurchaseNotificationMenu_DialogOpenQueue; // x0
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  BattleServantConfConponent_c *klass; // x21
  _QWORD *image; // x8
  unsigned __int64 v104; // x10
  SimpleAnimation_State_c **v105; // x11
  __int64 v106; // x0
  BattleServantConfConponent_o *v107; // x19
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  float v114; // s0
  Il2CppObject **p__2__current; // x19
  __int64 v116; // x0
  void *v117; // x0
  int v118; // w1
  int v119[2]; // [xsp+0h] [xbp-60h]
  int v120; // [xsp+8h] [xbp-58h]

  v8 = this;
  if ( (byte_42E7654 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_AnimationState_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_First_SimpleAnimation_State___, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Animation___, v12, v13, v14);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v15, v16, v17);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v24, v25, v26);
    this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)sub_B5D5C4(
                                                                           &SimpleAnimation_State_TypeInfo,
                                                                           v27,
                                                                           v28,
                                                                           v29);
    byte_42E7654 = 1;
  }
  v120 = 0;
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
      v104 = 0LL;
      v105 = (SimpleAnimation_State_c **)(image[22] + 8LL);
      while ( *(v105 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v104;
        v105 += 2;
        if ( v104 >= *((unsigned __int16 *)klass->_1.image + 149) )
          goto LABEL_89;
      }
      v106 = (__int64)&image[2 * *(_DWORD *)v105 + 49];
    }
    else
    {
LABEL_89:
      v106 = sub_AF54C0(p_state_5__6->klass, SimpleAnimation_State_TypeInfo, 5LL, v3);
    }
    v114 = (*(float (__fastcall **)(BattleServantConfConponent_c *, _QWORD))v106)(klass, *(_QWORD *)(v106 + 8));
    if ( v114 > 0.0 && v114 < 1.0 && v8->fields._time_5__5 <= v114 )
    {
      v8->fields.__2__current = 0LL;
      p__2__current = &v8->fields.__2__current;
      *((float *)p__2__current + 11) = v114;
      sub_B5D560((BattleServantConfConponent_o *)p__2__current, 0LL, v108, v109, v110, v111, v112, v113);
      *((_DWORD *)p__2__current - 2) = 2;
      return 1;
    }
    p_state_5__6->klass = 0LL;
    sub_B5D560(p_state_5__6, 0LL, v108, v109, v110, v111, v112, v113);
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
      v107 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B5D560(v107, 0LL, v87, v88, v89, v90, v91, v92);
      result = 1;
      *(_DWORD *)&v107[-1].fields.isOpenAfter = 1;
      return result;
    }
    v8->fields._animState_5__3 = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)p_animState_5__3, 0LL, v87, v88, v89, v90, v91, v92);
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
  sub_B5D560((BattleServantConfConponent_o *)&v8->fields._targetSimpleAnimation_5__2, 0LL, v2, v3, v4, v5, v6, v7);
  if ( !_4__this )
    goto LABEL_100;
  syncAnimationObjects = _4__this->fields.syncAnimationObjects;
  if ( !syncAnimationObjects )
    goto LABEL_100;
  max_length = syncAnimationObjects->max_length;
  if ( max_length >= 1 )
  {
    v36 = 0;
    while ( 1 )
    {
      if ( v36 >= max_length )
      {
        v116 = sub_B5D6C8(this);
        sub_B5D668(v116, 0LL);
      }
      v37 = (__int64)syncAnimationObjects + 8 * (int)v36;
      v38 = *(UnityEngine_GameObject_o **)(v37 + 32);
      if ( !v38 )
        break;
      this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)UnityEngine_GameObject__get_activeInHierarchy(
                                                                             *(UnityEngine_GameObject_o **)(v37 + 32),
                                                                             0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            v38,
                                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
        v40 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        v38,
                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)UnityEngine_Object__op_Inequality(
                                                                               v40,
                                                                               0LL,
                                                                               0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v40 )
            break;
          this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)SimpleAnimation__get_isPlaying(
                                                                                 (SimpleAnimation_o *)v40,
                                                                                 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            *p_targetSimpleAnimation_5__2 = v40;
            sub_B5D560(
              (BattleServantConfConponent_o *)&v8->fields._targetSimpleAnimation_5__2,
              (System_Int32_array **)v40,
              v41,
              v42,
              v43,
              v44,
              v45,
              v46);
          }
        }
      }
      max_length = syncAnimationObjects->max_length;
      if ( (int)++v36 >= max_length )
        goto LABEL_27;
    }
LABEL_100:
    sub_B5D69C(this, method);
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
    v47 = *p_targetSimpleAnimation_5__2;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(v47, 0LL, 0LL) )
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
    sub_B5D560((BattleServantConfConponent_o *)&v8->fields._animState_5__3, 0LL, v48, v49, v50, v51, v52, v53);
    if ( !Component_srcLineSprite )
      goto LABEL_100;
    Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)Component_srcLineSprite, 0LL);
    v58 = Enumerator;
    if ( !Enumerator )
      sub_B5D69C(0LL, v56);
    v59 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v60 = 0LL;
      p_offset = &v59->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v60;
        p_offset += 4;
        if ( v60 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_46;
      }
      p_method = (__int64)&v59->vtable[*p_offset].method;
    }
    else
    {
LABEL_46:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v57);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            v58,
            *(_QWORD *)(p_method + 8)) & 1) != 0 )
    {
      v65 = v58->klass;
      if ( *(_WORD *)&v58->klass->_2.bitflags1 )
      {
        v66 = 0LL;
        v67 = (System_Collections_IEnumerator_c **)&v65->_1.interfaceOffsets->offset;
        while ( *(v67 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v66;
          v67 += 2;
          if ( v66 >= *(unsigned __int16 *)&v58->klass->_2.bitflags1 )
            goto LABEL_55;
        }
        v68 = (__int64)&v65->vtable[*(_DWORD *)v67 + 1].method;
      }
      else
      {
LABEL_55:
        v68 = sub_AF54C0(v58, System_Collections_IEnumerator_TypeInfo, 1LL, v64);
      }
      v69 = (System_Int32_array **)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v68)(
                                     v58,
                                     *(_QWORD *)(v68 + 8));
      if ( v69 && *v69 != (System_Int32_array *)UnityEngine_AnimationState_TypeInfo )
      {
        v117 = (void *)sub_B5D990(v69);
        if ( v118 != 1 )
          _Unwind_Resume(v117);
        v77 = *(_QWORD *)__cxa_begin_catch(v117);
        __cxa_end_catch();
        v76 = 0LL;
        goto LABEL_61;
      }
      *p_animState_5__3 = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)v69;
      sub_B5D560((BattleServantConfConponent_o *)&v8->fields._animState_5__3, v69, v70, v71, v72, v73, v74, v75);
    }
    v76 = 1LL;
    v77 = 0LL;
    v119[0] = 280;
    v120 = 1;
LABEL_61:
    v78 = sub_B5D684(v58, System_IDisposable_TypeInfo);
    if ( v78 )
    {
      v80 = *(_QWORD *)v78;
      v81 = v78;
      if ( *(_WORD *)(*(_QWORD *)v78 + 298LL) )
      {
        v82 = 0LL;
        v83 = (int *)(*(_QWORD *)(v80 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v83 - 1) != System_IDisposable_TypeInfo )
        {
          ++v82;
          v83 += 4;
          if ( v82 >= *(unsigned __int16 *)(*(_QWORD *)v78 + 298LL) )
            goto LABEL_66;
        }
        v84 = v80 + 16LL * *v83 + 312;
      }
      else
      {
LABEL_66:
        v84 = sub_AF54C0(v78, System_IDisposable_TypeInfo, 0LL, v79);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v84)(v81, *(_QWORD *)(v84 + 8));
    }
    if ( v77 )
      sub_B5D668(v77, 0LL);
    if ( (_DWORD)v76 && v119[v76 - 1] == 280 )
      v120 = v76 - 1;
    this = *p_animState_5__3;
    if ( !*p_animState_5__3 )
      goto LABEL_100;
    v85 = UnityEngine_AnimationState__get_normalizedTime((UnityEngine_AnimationState_o *)this, 0LL);
    v8->fields._startNormalizedTime_5__4 = UnityEngine_Mathf__FloorToInt(v85, 0LL);
    goto LABEL_75;
  }
LABEL_78:
  v93 = *p_targetSimpleAnimation_5__2;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v93, 0LL, 0LL) )
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
                                                                             (const MethodInfo_1CAADA0 *)Method_System_Linq_Enumerable_First_SimpleAnimation_State___);
    v8->fields._state_5__6 = (struct SimpleAnimation_State_o *)StonePurchaseNotificationMenu_DialogOpenQueue;
    p_state_5__6 = (BattleServantConfConponent_o *)&v8->fields._state_5__6;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v8->fields._state_5__6,
      StonePurchaseNotificationMenu_DialogOpenQueue,
      v96,
      v97,
      v98,
      v99,
      v100,
      v101);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_WarBoardControlUiDataComponent__StartSyncAnimation_d__43_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
  return System_String__op_Equality(a->fields.key, this->fields.key, 0LL);
}