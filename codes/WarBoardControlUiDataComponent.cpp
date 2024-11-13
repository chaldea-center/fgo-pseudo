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
  __int64 v9; // x2

  if ( (byte_4B13BA2 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardControlUiDataComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_3197/*"Barrier"*/, v8, v9);
    byte_4B13BA2 = 1;
  }
  WarBoardControlUiDataComponent_TypeInfo->static_fields->UI_DATA_KEY_BARRIER = (struct System_String_o *)StringLiteral_3197/*"Barrier"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarBoardControlUiDataComponent_TypeInfo->static_fields,
    StringLiteral_3197/*"Barrier"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall WarBoardControlUiDataComponent___ctor(WarBoardControlUiDataComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Array_o *v14; // x0
  struct System_Single_array *v15; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Collections_Generic_List_object__o *v25; // x20
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  System_Collections_Generic_List_object__o *v35; // x20
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  System_RuntimeFieldHandle_o v42; // 0:w1.4

  if ( (byte_4B13BA1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData___ctor__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v4, v5);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v8, v9);
    sub_1BCA7E0(&float___TypeInfo, v10, v11);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__64464566F592BAB0A74DD80EB47024C0ECA2BB914D37B27E78F5532363736E1B,
      v12,
      v13);
    byte_4B13BA1 = 1;
  }
  v14 = (System_Array_o *)sub_1BCA888(float___TypeInfo, 7LL);
  v42.fields.value = Field__PrivateImplementationDetails__64464566F592BAB0A74DD80EB47024C0ECA2BB914D37B27E78F5532363736E1B;
  v15 = (struct System_Single_array *)v14;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v14, v42, 0LL);
  this->fields.AdjustOffsetY = v15;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.AdjustOffsetY, (int64_t)v15, v16, v17, v18, v19, v20, v21);
  v25 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__TypeInfo,
                                                       v22,
                                                       v23,
                                                       v24);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData___ctor__);
  this->fields.listUiData = (struct System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__o *)v25;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.listUiData, (int64_t)v25, v26, v27, v28, v29, v30, v31);
  v35 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v32,
                                                       v33,
                                                       v34);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.listUiDataKey = (struct System_Collections_Generic_List_string__o *)v35;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.listUiDataKey, (int64_t)v35, v36, v37, v38, v39, v40, v41);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardControlUiDataComponent__Awake(WarBoardControlUiDataComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Component_object; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  Il2CppObject *v13; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B13B8B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_WarBoardPieceBaseComponent___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_WarBoardSquareComponent___, v4, v5);
    byte_4B13B8B = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_WarBoardPieceBaseComponent___);
  this->fields.pieceComponent = (struct WarBoardPieceBaseComponent_o *)Component_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.pieceComponent,
    (int64_t)Component_object,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_WarBoardSquareComponent___);
  this->fields.squareComponent = (struct WarBoardSquareComponent_o *)v13;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.squareComponent, (int64_t)v13, v14, v15, v16, v17, v18, v19);
}


int32_t __fastcall WarBoardControlUiDataComponent__CheckCorrectActiveObject(
        WarBoardControlUiDataComponent_o *this,
        UnityEngine_GameObject_o *targetObject,
        const MethodInfo *method)
{
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
  __int64 v19; // x1
  __int64 v20; // x2
  struct System_Collections_Generic_List_string__o *listUiDataKey; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x21
  __int64 v26; // x0
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  Il2CppObject *current; // x1
  System_Collections_Generic_List_object__o *listUiData; // x22
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Predicate_object__o *v39; // x23
  __int64 v40; // x0
  __int64 v41; // x1
  Il2CppObject *v42; // x0
  __int64 v43; // x1
  Il2CppObject *v44; // x21
  _QWORD *monitor; // x23
  __int64 v46; // x8
  unsigned __int64 v47; // x26
  UnityEngine_Object_o *v48; // x22
  Il2CppClass *klass; // x22
  const char *namespaze; // x8
  unsigned __int64 v51; // x23
  UnityEngine_Object_o *v52; // x21
  int32_t v53; // w19
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B13B96 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, targetObject, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_WarBoardControlUiDataComponent___c__DisplayClass34_0__CheckCorrectActiveObject_b__0__, v17, v18);
    sub_1BCA7E0(&WarBoardControlUiDataComponent___c__DisplayClass34_0_TypeInfo, v19, v20);
    byte_4B13B96 = 1;
  }
  memset(&v56, 0, sizeof(v56));
  listUiDataKey = this->fields.listUiDataKey;
  if ( !listUiDataKey )
    sub_1BCAA3C(0LL, targetObject);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v55,
    (System_Collections_Generic_List_object__o *)listUiDataKey,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v56 = v55;
  while ( 1 )
  {
    do
    {
LABEL_5:
      if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v56,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
      {
        v53 = -1;
        goto LABEL_28;
      }
      v25 = sub_1BCAA2C(WarBoardControlUiDataComponent___c__DisplayClass34_0_TypeInfo, v22, v23, v24);
      System_Object___ctor((Il2CppObject *)v25, 0LL);
      if ( !v25 )
        sub_1BCAA3C(v26, v27);
      current = v56.fields._current;
      *(_QWORD *)(v25 + 16) = v56.fields._current;
      sub_1BCA784((PartyOrganizationUtility_o *)(v25 + 16), (int64_t)current, v28, v29, v30, v31, v32, v33);
      listUiData = (System_Collections_Generic_List_object__o *)this->fields.listUiData;
      v39 = (System_Predicate_object__o *)sub_1BCAA2C(
                                            System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo,
                                            v36,
                                            v37,
                                            v38);
      System_Predicate_object____ctor(
        v39,
        (Il2CppObject *)v25,
        Method_WarBoardControlUiDataComponent___c__DisplayClass34_0__CheckCorrectActiveObject_b__0__,
        0LL);
      if ( !listUiData )
        sub_1BCAA3C(v40, v41);
      v42 = System_Collections_Generic_List_object___Find(
              listUiData,
              (System_Predicate_T__o *)v39,
              (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__);
      v44 = v42;
    }
    while ( !v42 );
    monitor = v42[1].monitor;
    if ( !monitor )
      sub_1BCAA3C(v42, v43);
    v46 = monitor[3];
    if ( (int)v46 >= 1 )
      break;
LABEL_17:
    klass = v44[2].klass;
    if ( !klass )
      sub_1BCAA3C(v42, v43);
    namespaze = klass->_1.namespaze;
    if ( (int)namespaze >= 1 )
    {
      v51 = 0LL;
      while ( 1 )
      {
        if ( v51 >= (unsigned int)namespaze )
          sub_1BCAA44(v42, v43);
        v52 = (UnityEngine_Object_o *)*((_QWORD *)&klass->_1.byval_arg.data + v51);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v43);
        v42 = (Il2CppObject *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)targetObject, v52, 0LL);
        if ( ((unsigned __int8)v42 & 1) != 0 )
          break;
        LODWORD(namespaze) = klass->_1.namespaze;
        if ( (__int64)++v51 >= (int)namespaze )
          goto LABEL_5;
      }
      v53 = 0;
      goto LABEL_28;
    }
  }
  v47 = 0LL;
  while ( 1 )
  {
    if ( v47 >= (unsigned int)v46 )
      sub_1BCAA44(v42, v43);
    v48 = (UnityEngine_Object_o *)monitor[v47 + 4];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v43);
    v42 = (Il2CppObject *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)targetObject, v48, 0LL);
    if ( ((unsigned __int8)v42 & 1) != 0 )
      break;
    LODWORD(v46) = *((_DWORD *)monitor + 6);
    if ( (__int64)++v47 >= (int)v46 )
      goto LABEL_17;
  }
  v53 = 1;
LABEL_28:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v56,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  return v53;
}


int32_t __fastcall WarBoardControlUiDataComponent__GetAdjustType(
        WarBoardControlUiDataComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  void *Instance; // x0
  const MethodInfo *v5; // x1
  WarBoardData_o *v6; // x20
  WarBoardPieceData_o *Piece_36054544; // x0
  WarBoardData_o *v9; // x20
  __int64 v10; // x8
  WarBoardControlUiDataComponent_o *v11; // x0
  WarBoardData_o *v12; // x20
  WarBoardData_o *v13; // x20
  WarBoardTreasureData_o *Treasure; // x0
  WarBoardData_o *v15; // x20
  WarBoardItemData_o *Item; // x0

  if ( (byte_4B13B99 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method, v2);
    byte_4B13B99 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  v6 = (WarBoardData_o *)*((_QWORD *)Instance + 55);
  Instance = (void *)WarBoardControlUiDataComponent__get_SquareIndex(this, v5);
  if ( !v6 )
    goto LABEL_31;
  Piece_36054544 = WarBoardData__GetPiece_36054544(v6, (int32_t)Instance, 0LL);
  if ( Piece_36054544 )
  {
    if ( WarBoardPieceData__get_isMaster(Piece_36054544, 0LL) )
      return 6;
    else
      return 5;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  v9 = (WarBoardData_o *)*((_QWORD *)Instance + 55);
  Instance = (void *)WarBoardControlUiDataComponent__get_SquareIndex(this, v5);
  if ( !v9 )
    goto LABEL_31;
  Instance = WarBoardData__GetSquare(v9, (int32_t)Instance, 0LL);
  if ( Instance )
  {
    v10 = *((_QWORD *)Instance + 6);
    if ( !v10 )
      goto LABEL_31;
    v11 = *(WarBoardControlUiDataComponent_o **)(v10 + 184);
    if ( v11 && WarBoardControlUiDataComponent__IsDispFlagObjects(v11, v5) )
      return 4;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  v12 = (WarBoardData_o *)*((_QWORD *)Instance + 55);
  Instance = (void *)WarBoardControlUiDataComponent__get_SquareIndex(this, v5);
  if ( !v12 )
    goto LABEL_31;
  if ( WarBoardData__GetWall(v12, (int32_t)Instance, 0, 0LL) )
    return 3;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  v13 = (WarBoardData_o *)*((_QWORD *)Instance + 55);
  Instance = (void *)WarBoardControlUiDataComponent__get_SquareIndex(this, v5);
  if ( !v13 )
    goto LABEL_31;
  Treasure = WarBoardData__GetTreasure(v13, (int32_t)Instance, 0LL);
  if ( Treasure && !Treasure->fields._isUse_k__BackingField )
    return 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (v15 = (WarBoardData_o *)*((_QWORD *)Instance + 55),
        Instance = (void *)WarBoardControlUiDataComponent__get_SquareIndex(this, v5),
        !v15) )
  {
LABEL_31:
    sub_1BCAA3C(Instance, v5);
  }
  Item = WarBoardData__GetItem(v15, (int32_t)Instance, 0LL);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  WarBoardControlUiDataComponent_c *klass; // x8
  WarBoardControlUiDataComponent_o *v15; // x19
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x19
  __int64 v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x21
  __int64 v32; // x8
  __int64 v33; // x9
  SimpleAnimation_State_c **v34; // x10
  __int64 v35; // x0
  System_String_o *v36; // x0
  __int64 v37; // x1
  System_String_o *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x8
  __int64 v41; // x9
  SimpleAnimation_State_c **v42; // x10
  __int64 v43; // x0
  System_String_o *v44; // x21
  __int64 v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0

  if ( (byte_4B13B9F & 1) == 0 )
  {
    sub_1BCA7E0(&System_IDisposable_TypeInfo, animation, suffix);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v10, v11);
    this = (WarBoardControlUiDataComponent_o *)sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v12, v13);
    byte_4B13B9F = 1;
  }
  if ( !animation || (this = (WarBoardControlUiDataComponent_o *)SimpleAnimation__GetStates(animation, 0LL)) == 0LL )
    sub_1BCAA3C(this, animation);
  klass = this->klass;
  v15 = this;
  v16 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
    {
      --v16;
      p_offset += 4;
      if ( !v16 )
        goto LABEL_9;
    }
    v18 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v18 = sub_1C1C7C0(this, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
  }
  v20 = (*(__int64 (__fastcall **)(WarBoardControlUiDataComponent_o *, _QWORD))v18)(v15, *(_QWORD *)(v18 + 8));
  if ( !v20 )
    sub_1BCAA3C(0LL, v19);
  do
  {
    v21 = *(_QWORD *)v20;
    v22 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
    {
      v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v23 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_16;
      }
      v24 = v21 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_16:
      v24 = sub_1C1C7C0(v20, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v20, *(_QWORD *)(v24 + 8)) & 1) == 0 )
    {
      v44 = 0LL;
      goto LABEL_43;
    }
    v25 = *(_QWORD *)v20;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
    {
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v27 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_23;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_23:
      v28 = sub_1C1C7C0(v20, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
    }
    v29 = (*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v20, *(_QWORD *)(v28 + 8));
    v31 = v29;
    if ( !v29 )
      sub_1BCAA3C(0LL, v30);
    v32 = *(_QWORD *)v29;
    v33 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
    {
      v34 = (SimpleAnimation_State_c **)(*(_QWORD *)(v32 + 176) + 8LL);
      while ( *(v34 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v33;
        v34 += 2;
        if ( !v33 )
          goto LABEL_30;
      }
      v35 = v32 + 16LL * (*(_DWORD *)v34 + 9) + 312;
    }
    else
    {
LABEL_30:
      v35 = sub_1C1C7C0(v29, SimpleAnimation_State_TypeInfo, 9LL);
    }
    v36 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v31, *(_QWORD *)(v35 + 8));
    if ( !v36 )
      sub_1BCAA3C(0LL, v37);
    v38 = System_String__ToLower(v36, 0LL);
    if ( !v38 )
      sub_1BCAA3C(0LL, v39);
  }
  while ( !System_String__EndsWith(v38, suffix, 0LL) );
  v40 = *(_QWORD *)v31;
  v41 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
  {
    v42 = (SimpleAnimation_State_c **)(*(_QWORD *)(v40 + 176) + 8LL);
    while ( *(v42 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v41;
      v42 += 2;
      if ( !v41 )
        goto LABEL_39;
    }
    v43 = v40 + 16LL * (*(_DWORD *)v42 + 9) + 312;
  }
  else
  {
LABEL_39:
    v43 = sub_1C1C7C0(v31, SimpleAnimation_State_TypeInfo, 9LL);
  }
  v44 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v31, *(_QWORD *)(v43 + 8));
LABEL_43:
  v45 = *(_QWORD *)v20;
  v46 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
  {
    v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
    {
      --v46;
      v47 += 4;
      if ( !v46 )
        goto LABEL_47;
    }
    v48 = v45 + 16LL * *v47 + 312;
  }
  else
  {
LABEL_47:
    v48 = sub_1C1C7C0(v20, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v48)(v20, *(_QWORD *)(v48 + 8));
  return v44;
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
          sub_1BCAA44(this, method);
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
      sub_1BCAA3C(this, method);
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
          sub_1BCAA44(this, method);
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
      sub_1BCAA3C(this, method);
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

  if ( (byte_4B13B97 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&squareIndex, method);
    byte_4B13B97 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (monitor = (WarBoardData_o *)Instance[27].monitor) == 0LL )
    sub_1BCAA3C(Instance, v5);
  return WarBoardData__GetPiece_36054544((WarBoardData_o *)Instance[27].monitor, squareIndex, 0LL)
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

  if ( (byte_4B13B9E & 1) == 0 )
  {
    this = (WarBoardControlUiDataComponent_o *)sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, animation, suffix);
    byte_4B13B9E = 1;
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
    sub_1BCAA3C(IsNullOrEmpty, v8);
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
    p_method = sub_1C1C7C0(IsNullOrEmpty, SimpleAnimation_State_TypeInfo, 5LL);
  }
  return (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(v10, *(_QWORD *)(p_method + 8)) < 1.0;
}


void __fastcall WarBoardControlUiDataComponent__LocalSave(
        WarBoardControlUiDataComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t compType; // w8
  UnityEngine_Object_o *squareComponent; // x20
  __int64 Instance; // x0
  const MethodInfo *v13; // x1
  WarBoardData_o *v14; // x20
  struct System_Collections_Generic_List_string__o *listUiDataKey; // x8
  int32_t v16; // w19
  UnityEngine_Object_o *pieceComponent; // x20
  struct WarBoardPieceBaseComponent_o *v18; // x8
  struct WarBoardPieceData_o *pieceData; // x21
  System_Int32_array *v20; // x20
  unsigned int v21; // w8
  __int64 v22; // x8
  WarBoardData_o *v23; // x19

  if ( (byte_4B13BA0 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__ToArray__, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8, v9);
    byte_4B13BA0 = 1;
  }
  compType = this->fields.compType;
  if ( !compType )
  {
    squareComponent = (UnityEngine_Object_o *)this->fields.squareComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(squareComponent, 0LL, 0LL) )
    {
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        v14 = *(WarBoardData_o **)(Instance + 440);
        Instance = WarBoardControlUiDataComponent__get_SquareIndex(this, v13);
        listUiDataKey = this->fields.listUiDataKey;
        if ( listUiDataKey )
        {
          v16 = Instance;
          Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                                (System_Collections_Generic_List_object__o *)listUiDataKey,
                                (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
          if ( v14 )
          {
            WarBoardData__UpdateUiData(v14, v16, (System_String_array *)Instance, 0LL);
            return;
          }
        }
      }
LABEL_27:
      sub_1BCAA3C(Instance, v13);
    }
    compType = this->fields.compType;
  }
  if ( compType == 1 )
  {
    pieceComponent = (UnityEngine_Object_o *)this->fields.pieceComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    Instance = UnityEngine_Object__op_Inequality(pieceComponent, 0LL, 0LL);
    if ( (Instance & 1) != 0 )
    {
      v18 = this->fields.pieceComponent;
      if ( !v18 )
        goto LABEL_27;
      pieceData = v18->fields.pieceData;
      Instance = sub_1BCA888(int___TypeInfo, 3LL);
      if ( !pieceData )
        goto LABEL_27;
      v20 = (System_Int32_array *)Instance;
      if ( !Instance )
        goto LABEL_27;
      v21 = *(_DWORD *)(Instance + 24);
      if ( !v21
        || (*(_DWORD *)(Instance + 32) = pieceData->fields._forceId_k__BackingField, v21 == 1)
        || (*(_DWORD *)(Instance + 36) = pieceData->fields._groupId_k__BackingField, v21 <= 2) )
      {
        sub_1BCAA44(Instance, v13);
      }
      *(_DWORD *)(Instance + 40) = pieceData->fields._index_k__BackingField;
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !Instance )
        goto LABEL_27;
      v22 = Instance;
      Instance = (__int64)this->fields.listUiDataKey;
      if ( !Instance )
        goto LABEL_27;
      v23 = *(WarBoardData_o **)(v22 + 440);
      Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                            (System_Collections_Generic_List_object__o *)Instance,
                            (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
      if ( !v23 )
        goto LABEL_27;
      WarBoardData__UpdateUiData_36086660(v23, v20, (System_String_array *)Instance, 0LL);
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
      sub_1BCAA3C(0LL, v6);
    SimpleAnimation__Play_64539336(animation, AnimationStateName, 0LL);
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

  if ( (byte_4B13B9C & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_TypeInfo, animation, uiData);
    byte_4B13B9C = 1;
  }
  v7 = sub_1BCAA2C(WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_TypeInfo, animation, uiData, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = animation;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)animation, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 48) = uiData;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)uiData, v20, v21, v22, v23, v24, v25);
  return (System_Collections_IEnumerator_o *)v7;
}


System_Collections_IEnumerator_o *__fastcall WarBoardControlUiDataComponent__PlayStartUiDataAnim(
        WarBoardControlUiDataComponent_o *this,
        SimpleAnimation_o *animation,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B13B9B & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_TypeInfo, animation, method);
    byte_4B13B9B = 1;
  }
  v6 = sub_1BCAA2C(WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_TypeInfo, animation, method, v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 40) = animation;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)animation, v13, v14, v15, v16, v17, v18);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall WarBoardControlUiDataComponent__ResumeUiData(
        WarBoardControlUiDataComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
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
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  struct System_Collections_Generic_List_string__o *listUiDataKey; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x21
  __int64 v31; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  Il2CppObject *current; // x1
  System_String_o **v40; // x20
  System_Collections_Generic_List_object__o *listUiData; // x22
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  System_Predicate_object__o *v45; // x23
  __int64 v46; // x0
  __int64 v47; // x1
  const MethodInfo *v48; // x3
  WarBoardControlUiDataComponent_UiData_o *v49; // x21
  __int64 v50; // x1
  System_String_o *v51; // x20
  WarBoardControlUiDataComponent_c *v52; // x0
  WarBoardServantPieceBuffTurnComponent_o *v53; // x0
  __int64 v54; // x1
  WarBoardServantPieceBuffTurnComponent_o *v55; // x20
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x22
  const MethodInfo *v57; // x2
  struct UnityEngine_GameObject_array *animationObjects; // x23
  int max_length; // w8
  int i; // w22
  UnityEngine_GameObject_o *v61; // x0
  __int64 v62; // x1
  Il2CppObject *Component_object; // x21
  const MethodInfo *v64; // x3
  struct WarBoardPieceBaseComponent_o *v65; // [xsp+8h] [xbp-A8h]
  WarBoardServantPieceBuffTurnComponent_o *v66; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v67; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v68; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4B13B93 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__GetEnumerator__, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    sub_1BCA7E0(&System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_WarBoardControlUiDataComponent___c__DisplayClass26_0__ResumeUiData_b__0__, v18, v19);
    sub_1BCA7E0(&WarBoardControlUiDataComponent___c__DisplayClass26_0_TypeInfo, v20, v21);
    sub_1BCA7E0(&WarBoardControlUiDataComponent_TypeInfo, v22, v23);
    sub_1BCA7E0(&StringLiteral_21439/*"loop"*/, v24, v25);
    byte_4B13B93 = 1;
  }
  memset(&v68, 0, sizeof(v68));
  listUiDataKey = this->fields.listUiDataKey;
  if ( !listUiDataKey )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v67,
    (System_Collections_Generic_List_object__o *)listUiDataKey,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v65 = 0LL;
  v66 = 0LL;
  v68 = v67;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v68,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    v30 = sub_1BCAA2C(WarBoardControlUiDataComponent___c__DisplayClass26_0_TypeInfo, v27, v28, v29);
    System_Object___ctor((Il2CppObject *)v30, 0LL);
    if ( !v30 )
      sub_1BCAA3C(v31, v32);
    current = v68.fields._current;
    *(_QWORD *)(v30 + 16) = v68.fields._current;
    v40 = (System_String_o **)(v30 + 16);
    sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 16), (int64_t)current, v33, v34, v35, v36, v37, v38);
    listUiData = (System_Collections_Generic_List_object__o *)this->fields.listUiData;
    v45 = (System_Predicate_object__o *)sub_1BCAA2C(
                                          System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo,
                                          v42,
                                          v43,
                                          v44);
    System_Predicate_object____ctor(
      v45,
      (Il2CppObject *)v30,
      Method_WarBoardControlUiDataComponent___c__DisplayClass26_0__ResumeUiData_b__0__,
      0LL);
    if ( !listUiData )
      sub_1BCAA3C(v46, v47);
    v49 = (WarBoardControlUiDataComponent_UiData_o *)System_Collections_Generic_List_object___Find(
                                                       listUiData,
                                                       (System_Predicate_T__o *)v45,
                                                       (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__);
    if ( v49 )
    {
      WarBoardControlUiDataComponent__SetUiDataTurnObjects(this, 1, v49, v48);
      v51 = *v40;
      v52 = WarBoardControlUiDataComponent_TypeInfo;
      if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo, v50);
        v52 = WarBoardControlUiDataComponent_TypeInfo;
      }
      v53 = (WarBoardServantPieceBuffTurnComponent_o *)System_String__op_Equality(
                                                         v51,
                                                         v52->static_fields->UI_DATA_KEY_BARRIER,
                                                         0LL);
      v55 = v66;
      if ( ((unsigned __int8)v53 & 1) != 0
        && ((pieceComponent = this->fields.pieceComponent) != 0LL
          ? (v53 = (WarBoardServantPieceBuffTurnComponent_o *)this->fields.pieceComponent)
          : (v53 = (WarBoardServantPieceBuffTurnComponent_o *)v65),
            pieceComponent) )
      {
        if ( !v53 )
          sub_1BCAA3C(0LL, v54);
        v53 = (WarBoardServantPieceBuffTurnComponent_o *)((__int64 (__fastcall *)(WarBoardServantPieceBuffTurnComponent_o *, const char *))v53->klass[1]._1.gc_desc)(
                                                           v53,
                                                           v53->klass[1]._1.name);
        v55 = v53;
        if ( !v53 )
          v53 = v66;
        if ( v55 )
        {
          if ( !v53 )
            sub_1BCAA3C(0LL, v54);
          WarBoardServantPieceBuffTurnComponent__UpdateDisp(v53, 1, v57);
        }
        else
        {
          v55 = v66;
        }
      }
      else
      {
        pieceComponent = v65;
      }
      animationObjects = v49->fields.animationObjects;
      if ( !animationObjects )
        sub_1BCAA3C(v53, v54);
      max_length = animationObjects->max_length;
      v65 = pieceComponent;
      v66 = v55;
      if ( max_length >= 1 )
      {
        v65 = pieceComponent;
        for ( i = 0; i < max_length; ++i )
        {
          if ( i >= (unsigned int)max_length )
            sub_1BCAA44(v53, v54);
          v61 = animationObjects->m_Items[i];
          if ( !v61 )
            sub_1BCAA3C(0LL, v54);
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               v61,
                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v62);
          v53 = (WarBoardServantPieceBuffTurnComponent_o *)UnityEngine_Object__op_Equality(
                                                             (UnityEngine_Object_o *)Component_object,
                                                             0LL,
                                                             0LL);
          if ( ((unsigned __int8)v53 & 1) == 0 )
            v53 = (WarBoardServantPieceBuffTurnComponent_o *)WarBoardControlUiDataComponent__PlayAnimation(
                                                               this,
                                                               (SimpleAnimation_o *)Component_object,
                                                               (System_String_o *)StringLiteral_21439/*"loop"*/,
                                                               v64);
          max_length = animationObjects->max_length;
        }
        v66 = v55;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v68,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


void __fastcall WarBoardControlUiDataComponent__ResumeUiDataAll(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x1
  _QWORD *monitor; // x8
  __int64 v8; // x20
  int v9; // w8
  unsigned int v10; // w21
  __int64 v11; // x8
  int32_t v12; // w19

  if ( (byte_4B13B90 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v1, v2);
    sub_1BCA7E0(&WarBoardControlUiDataComponent_TypeInfo, v3, v4);
    byte_4B13B90 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  monitor = Instance[27].monitor;
  if ( !monitor )
    goto LABEL_14;
  v8 = monitor[7];
  if ( !v8 )
    goto LABEL_14;
  v9 = *(_DWORD *)(v8 + 24);
  if ( v9 >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= v9 )
        sub_1BCAA44(Instance, v6);
      v11 = *(_QWORD *)(v8 + 8LL * (int)v10 + 32);
      if ( !v11 )
        break;
      v12 = *(_DWORD *)(v11 + 16);
      if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo, v6);
      WarBoardControlUiDataComponent__ResumeUiDataAll_35733452(v12, v6);
      v9 = *(_DWORD *)(v8 + 24);
      if ( (int)++v10 >= v9 )
        return;
    }
LABEL_14:
    sub_1BCAA3C(Instance, v6);
  }
}


void __fastcall WarBoardControlUiDataComponent__ResumeUiDataAll_35733452(int32_t squareIndex, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  WarBoardData_o *Instance; // x0
  const MethodInfo *v7; // x1
  struct WarBoardStageNpcMaster_o *stageNpcMaster; // x8
  WarBoardControlUiDataComponent_o *lookup; // x0
  const MethodInfo *v10; // x2
  struct WarBoardPieceData_array *pieces; // x8
  WarBoardControlUiDataComponent_o *v12; // x0

  if ( (byte_4B13B91 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method, v2);
    sub_1BCA7E0(&WarBoardControlUiDataComponent_TypeInfo, v4, v5);
    byte_4B13B91 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_18;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_36054544(Instance, squareIndex, 0LL);
  if ( Instance )
  {
    stageNpcMaster = Instance[1].fields.stageNpcMaster;
    if ( !stageNpcMaster )
      goto LABEL_18;
    lookup = (WarBoardControlUiDataComponent_o *)stageNpcMaster[2].fields._lookup;
    if ( lookup )
      WarBoardControlUiDataComponent__ResumeUiData(lookup, v7);
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1BCAA3C(Instance, v7);
  v12 = (WarBoardControlUiDataComponent_o *)pieces->m_Items[19];
  if ( v12 )
    WarBoardControlUiDataComponent__ResumeUiData(v12, v7);
LABEL_15:
  if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo, v7);
  WarBoardControlUiDataComponent__UpdateAdjustSituationAll_35732988(squareIndex, 1, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardControlUiDataComponent__SetUiData(
        WarBoardControlUiDataComponent_o *this,
        System_String_o *key,
        bool isDisp,
        const MethodInfo *method)
{
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
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x23
  System_Collections_Generic_List_object__o *listUiDataKey; // x0
  Il2CppObject *v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  Il2CppObject **v34; // x22
  System_Collections_Generic_List_object__o *listUiData; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Predicate_object__o *v39; // x24
  Il2CppObject *v40; // x0
  WarBoardControlUiDataComponent_UiData_o *v41; // x21
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x8
  const MethodInfo *v52; // x3
  __int64 v53; // x1
  const MethodInfo *v54; // x1
  __int64 v55; // x1
  const MethodInfo *v56; // x2
  int32_t SquareIndex; // w23
  System_String_o *v58; // x22
  WarBoardControlUiDataComponent_c *v59; // x0
  const MethodInfo *v60; // x1
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0
  WarBoardServantPieceBuffTurnComponent_o *v62; // x0
  const MethodInfo *v63; // x2
  struct UnityEngine_GameObject_array *animationObjects; // x23
  int max_length; // w8
  unsigned int v66; // w24
  __int64 v67; // x1
  Il2CppObject *Component_object; // x22
  const MethodInfo *v69; // x2
  const MethodInfo *v70; // x3
  System_Collections_IEnumerator_o *started; // x0

  if ( (byte_4B13B92 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, key, isDisp);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Contains__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Remove__, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_WarBoardControlUiDataComponent___c__DisplayClass25_0__SetUiData_b__0__, v19, v20);
    sub_1BCA7E0(&WarBoardControlUiDataComponent___c__DisplayClass25_0_TypeInfo, v21, v22);
    sub_1BCA7E0(&WarBoardControlUiDataComponent_TypeInfo, v23, v24);
    byte_4B13B92 = 1;
  }
  v25 = sub_1BCAA2C(WarBoardControlUiDataComponent___c__DisplayClass25_0_TypeInfo, key, isDisp, method);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  if ( !v25 )
    goto LABEL_38;
  *(_QWORD *)(v25 + 16) = key;
  v34 = (Il2CppObject **)(v25 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v25 + 16), (int64_t)key, v28, v29, v30, v31, v32, v33);
  listUiData = (System_Collections_Generic_List_object__o *)this->fields.listUiData;
  v39 = (System_Predicate_object__o *)sub_1BCAA2C(
                                        System_Predicate_WarBoardControlUiDataComponent_UiData__TypeInfo,
                                        v36,
                                        v37,
                                        v38);
  System_Predicate_object____ctor(
    v39,
    (Il2CppObject *)v25,
    Method_WarBoardControlUiDataComponent___c__DisplayClass25_0__SetUiData_b__0__,
    0LL);
  if ( !listUiData )
    goto LABEL_38;
  v40 = System_Collections_Generic_List_object___Find(
          listUiData,
          (System_Predicate_T__o *)v39,
          (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__Find__);
  if ( v40 )
  {
    v41 = (WarBoardControlUiDataComponent_UiData_o *)v40;
    listUiDataKey = (System_Collections_Generic_List_object__o *)this->fields.listUiDataKey;
    if ( !listUiDataKey )
      goto LABEL_38;
    if ( System_Collections_Generic_List_object___Contains(
           listUiDataKey,
           *v34,
           (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_string__Contains__) != isDisp )
    {
      listUiDataKey = (System_Collections_Generic_List_object__o *)this->fields.listUiDataKey;
      if ( !listUiDataKey )
        goto LABEL_38;
      v27 = *v34;
      if ( isDisp )
      {
        items = listUiDataKey->fields._items;
        v49 = Method_System_Collections_Generic_List_string__Add__;
        ++listUiDataKey->fields._version;
        if ( !items )
          goto LABEL_38;
        size = listUiDataKey->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            listUiDataKey,
            v27,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
        }
        else
        {
          v51 = &items->obj.klass + size;
          listUiDataKey->fields._size = size + 1;
          v51[4] = (Il2CppClass *)v27;
          sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 4), (int64_t)v27, v42, v43, v44, v45, v46, v47);
        }
        WarBoardControlUiDataComponent__SetUiDataTurnObjects(this, 1, v41, v52);
        SquareIndex = WarBoardControlUiDataComponent__get_SquareIndex(this, v54);
        if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo, v55);
        WarBoardControlUiDataComponent__UpdateAdjustSituationAll_35732988(SquareIndex, 1, v56);
      }
      else
      {
        System_Collections_Generic_List_object___Remove(
          listUiDataKey,
          v27,
          (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_string__Remove__);
      }
      v58 = (System_String_o *)*v34;
      v59 = WarBoardControlUiDataComponent_TypeInfo;
      if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo, v53);
        v59 = WarBoardControlUiDataComponent_TypeInfo;
      }
      if ( System_String__op_Equality(v58, v59->static_fields->UI_DATA_KEY_BARRIER, 0LL) )
      {
        pieceComponent = this->fields.pieceComponent;
        if ( pieceComponent )
        {
          v62 = (WarBoardServantPieceBuffTurnComponent_o *)((__int64 (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))pieceComponent->klass->vtable._4_get_BuffTrunNotice.method)(
                                                             pieceComponent,
                                                             pieceComponent->klass->vtable._5_Initialize.methodPtr);
          if ( v62 )
            WarBoardServantPieceBuffTurnComponent__UpdateDisp(v62, 1, v63);
        }
      }
      WarBoardControlUiDataComponent__LocalSave(this, v60);
      animationObjects = v41->fields.animationObjects;
      if ( !animationObjects )
LABEL_38:
        sub_1BCAA3C(listUiDataKey, v27);
      max_length = animationObjects->max_length;
      if ( max_length >= 1 )
      {
        v66 = 0;
        while ( 1 )
        {
          if ( v66 >= max_length )
            sub_1BCAA44(listUiDataKey, v27);
          listUiDataKey = (System_Collections_Generic_List_object__o *)animationObjects->m_Items[v66];
          if ( !listUiDataKey )
            break;
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)listUiDataKey,
                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v67);
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
                          v69);
            else
              started = WarBoardControlUiDataComponent__PlayEndUiDataAnim(
                          this,
                          (SimpleAnimation_o *)Component_object,
                          v41,
                          v70);
            listUiDataKey = (System_Collections_Generic_List_object__o *)UnityEngine_MonoBehaviour__StartCoroutine_70139516(
                                                                           (UnityEngine_MonoBehaviour_o *)this,
                                                                           started,
                                                                           0LL);
          }
          max_length = animationObjects->max_length;
          if ( (int)++v66 >= max_length )
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
  __int64 v6; // x2
  struct System_Collections_Generic_List_string__o *listUiDataKey; // x0
  int32_t size; // w2
  int v9; // w8

  if ( (byte_4B13B94 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__AddRange__, keys, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Clear__, v5, v6);
    byte_4B13B94 = 1;
  }
  listUiDataKey = this->fields.listUiDataKey;
  if ( !listUiDataKey
    || (size = listUiDataKey->fields._size,
        v9 = listUiDataKey->fields._version + 1,
        listUiDataKey->fields._size = 0,
        listUiDataKey->fields._version = v9,
        size >= 1)
    && (System_Array__Clear((System_Array_o *)listUiDataKey->fields._items, 0, size, 0LL),
        (listUiDataKey = this->fields.listUiDataKey) == 0LL) )
  {
    sub_1BCAA3C(listUiDataKey, keys);
  }
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)listUiDataKey,
    (System_Collections_Generic_IEnumerable_T__o *)keys,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_string__AddRange__);
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
        sub_1BCAA44(this, method);
      this = (WarBoardControlUiDataComponent_o *)onEnterBattleTurnOffObjects->m_Items[v4];
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      max_length = onEnterBattleTurnOffObjects->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1BCAA3C(this, method);
  }
}


void __fastcall WarBoardControlUiDataComponent__SetUiDataOnBattleAll(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x1
  _QWORD *monitor; // x8
  __int64 v8; // x20
  int v9; // w8
  unsigned int v10; // w21
  __int64 v11; // x8
  int32_t v12; // w19

  if ( (byte_4B13B8C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v1, v2);
    sub_1BCA7E0(&WarBoardControlUiDataComponent_TypeInfo, v3, v4);
    byte_4B13B8C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  monitor = Instance[27].monitor;
  if ( !monitor )
    goto LABEL_14;
  v8 = monitor[7];
  if ( !v8 )
    goto LABEL_14;
  v9 = *(_DWORD *)(v8 + 24);
  if ( v9 >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= v9 )
        sub_1BCAA44(Instance, v6);
      v11 = *(_QWORD *)(v8 + 8LL * (int)v10 + 32);
      if ( !v11 )
        break;
      v12 = *(_DWORD *)(v11 + 16);
      if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo, v6);
      WarBoardControlUiDataComponent__SetUiDataOnBattleAll_35732520(v12, v6);
      v9 = *(_DWORD *)(v8 + 24);
      if ( (int)++v10 >= v9 )
        return;
    }
LABEL_14:
    sub_1BCAA3C(Instance, v6);
  }
}


void __fastcall WarBoardControlUiDataComponent__SetUiDataOnBattleAll_35732520(
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardData_o *Instance; // x0
  const MethodInfo *v5; // x1
  struct WarBoardStageNpcMaster_o *stageNpcMaster; // x8
  WarBoardControlUiDataComponent_o *lookup; // x0
  struct WarBoardPieceData_array *pieces; // x8
  WarBoardControlUiDataComponent_o *v9; // x0

  if ( (byte_4B13B8D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method, v2);
    byte_4B13B8D = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_36054544(Instance, squareIndex, 0LL);
  if ( Instance )
  {
    stageNpcMaster = Instance[1].fields.stageNpcMaster;
    if ( !stageNpcMaster )
      goto LABEL_16;
    lookup = (WarBoardControlUiDataComponent_o *)stageNpcMaster[2].fields._lookup;
    if ( lookup )
      WarBoardControlUiDataComponent__SetUiDataOnBattle(lookup, v5);
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1BCAA3C(Instance, v5);
  v9 = (WarBoardControlUiDataComponent_o *)pieces->m_Items[19];
  if ( v9 )
    WarBoardControlUiDataComponent__SetUiDataOnBattle(v9, v5);
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
  if ( (byte_4B13B9A & 1) == 0 )
  {
    this = (WarBoardControlUiDataComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isDisp, uiData);
    byte_4B13B9A = 1;
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
    sub_1BCAA44(this, isDisp);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp);
  if ( UnityEngine_Object__op_Inequality(squareComponent, 0LL, 0LL) )
  {
    this = (WarBoardControlUiDataComponent_o *)v6->fields.squareComponent;
    if ( this )
    {
      WarBoardSquareComponent__SetMovePoint((WarBoardSquareComponent_o *)this, v12, 0LL);
      return;
    }
LABEL_23:
    sub_1BCAA3C(this, isDisp);
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

  if ( (byte_4B13B98 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_TypeInfo, isDisp, targetObject);
    byte_4B13B98 = 1;
  }
  v9 = immediatelyWhenOff;
  v10 = sub_1BCAA2C(
          WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_TypeInfo,
          isDisp,
          targetObject,
          immediatelyWhenOff);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  *(_DWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 32), (int64_t)this, v11, v12, v13, v14, v15, v16);
  *(_BYTE *)(v10 + 48) = isDisp;
  *(_QWORD *)(v10 + 40) = targetObject;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 40), (int64_t)targetObject, v17, v18, v19, v20, v21, v22);
  *(_BYTE *)(v10 + 49) = v9;
  return (System_Collections_IEnumerator_o *)v10;
}


System_Collections_IEnumerator_o *__fastcall WarBoardControlUiDataComponent__StartSyncAnimation(
        WarBoardControlUiDataComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B13B9D & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardControlUiDataComponent__StartSyncAnimation_d__43_TypeInfo, callback, method);
    byte_4B13B9D = 1;
  }
  v6 = sub_1BCAA2C(WarBoardControlUiDataComponent__StartSyncAnimation_d__43_TypeInfo, callback, method, v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 40) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)callback, v13, v14, v15, v16, v17, v18);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall WarBoardControlUiDataComponent__SyncAnimation(
        WarBoardControlUiDataComponent_o *this,
        System_Action_o *syncCallback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *started; // x1

  started = WarBoardControlUiDataComponent__StartSyncAnimation(this, syncCallback, method);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
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
    sub_1BCAA3C(AdjustType, v4);
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
    sub_1BCAA44(AdjustType, v4);
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
  if ( (byte_4B13B8E & 1) == 0 )
  {
    squareIndexes = (System_Int32_array *)sub_1BCA7E0(
                                            &WarBoardControlUiDataComponent_TypeInfo,
                                            immediatelyWhenOff,
                                            method);
    byte_4B13B8E = 1;
  }
  if ( !v4 )
    sub_1BCAA3C(squareIndexes, immediatelyWhenOff);
  v5 = *(_QWORD *)&v4->max_length;
  if ( (int)v5 >= 1 )
  {
    v6 = 0LL;
    v7 = immediatelyWhenOff;
    do
    {
      if ( v6 >= (unsigned int)v5 )
        sub_1BCAA44(squareIndexes, immediatelyWhenOff);
      v8 = v4->m_Items[v6 + 1];
      if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo, immediatelyWhenOff);
      WarBoardControlUiDataComponent__UpdateAdjustSituationAll_35732988(v8, v7, method);
      LODWORD(v5) = v4->max_length;
      ++v6;
    }
    while ( (__int64)v6 < (int)v5 );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardControlUiDataComponent__UpdateAdjustSituationAll_35732988(
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

  if ( (byte_4B13B8F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, immediatelyWhenOff, method);
    byte_4B13B8F = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_16;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_36054544(Instance, squareIndex, 0LL);
  if ( Instance )
  {
    stageNpcMaster = Instance[1].fields.stageNpcMaster;
    if ( !stageNpcMaster )
      goto LABEL_16;
    lookup = (WarBoardControlUiDataComponent_o *)stageNpcMaster[2].fields._lookup;
    if ( lookup )
      WarBoardControlUiDataComponent__UpdateAdjustSituation(lookup, immediatelyWhenOff, v7);
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1BCAA3C(Instance, v6);
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
      sub_1BCAA3C(IsExistsOther, v8);
    v11 = *(_QWORD *)&onExistsOtherTurnOffObjects->max_length;
    if ( (int)v11 >= 1 )
    {
      v12 = 0LL;
      v13 = ((unsigned __int8)IsExistsOther ^ 1) & 1;
      v14 = immediatelyWhenOff;
      do
      {
        if ( v12 >= (unsigned int)v11 )
          sub_1BCAA44(IsExistsOther, v8);
        v15 = WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation(
                this,
                v13,
                onExistsOtherTurnOffObjects->m_Items[v12],
                v14,
                v9);
        IsExistsOther = UnityEngine_MonoBehaviour__StartCoroutine_70139516(
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
  __int64 v2; // x2
  WarBoardControlUiDataComponent_o *Instance; // x0
  const MethodInfo *v5; // x1
  WarBoardData_o *onEnterBattleTurnOffObjects; // x20
  const MethodInfo *v7; // x2
  struct System_Collections_Generic_List_WarBoardControlUiDataComponent_UiData__o *listUiData; // x8
  char v9; // w21
  struct UnityEngine_GameObject_array *onOverlapObjects; // x22
  __int64 v11; // x8
  unsigned __int64 v12; // x23
  UnityEngine_GameObject_o *v13; // x20
  char v14; // w8

  if ( (byte_4B13B95 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method, v2);
    byte_4B13B95 = 1;
  }
  if ( !this->fields.compType )
    return;
  Instance = (WarBoardControlUiDataComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  onEnterBattleTurnOffObjects = (WarBoardData_o *)Instance[3].fields.onEnterBattleTurnOffObjects;
  Instance = (WarBoardControlUiDataComponent_o *)WarBoardControlUiDataComponent__get_SquareIndex(this, v5);
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
    Instance = (WarBoardControlUiDataComponent_o *)WarBoardControlUiDataComponent__IsDispOverlapObjects(Instance, v5);
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
    sub_1BCAA3C(Instance, v5);
  v11 = *(_QWORD *)&onOverlapObjects->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = 0LL;
    do
    {
      if ( v12 >= (unsigned int)v11 )
        sub_1BCAA44(Instance, v5);
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
      UnityEngine_GameObject__SetActive(v13, v14 & 1, 0LL);
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
  __int64 v2; // x2
  UnityEngine_Object_o *pieceComponent; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct WarBoardPieceBaseComponent_o *v7; // x8
  struct WarBoardPieceData_o *pieceData; // x8
  int32_t *p_nowSquareIndex_k__BackingField; // x8
  UnityEngine_Object_o *squareComponent; // x20
  struct WarBoardSquareComponent_o *v11; // x8
  struct WarBoardSquareData_o *squareData; // x8

  if ( (byte_4B13B8A & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B13B8A = 1;
  }
  pieceComponent = (UnityEngine_Object_o *)this->fields.pieceComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = UnityEngine_Object__op_Inequality(pieceComponent, 0LL, 0LL);
  if ( v5 )
  {
    v7 = this->fields.pieceComponent;
    if ( v7 )
    {
      pieceData = v7->fields.pieceData;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  v5 = UnityEngine_Object__op_Inequality(squareComponent, 0LL, 0LL);
  if ( v5 )
  {
    v11 = this->fields.squareComponent;
    if ( v11 )
    {
      squareData = v11->fields.squareData;
      if ( squareData )
      {
        p_nowSquareIndex_k__BackingField = &squareData->fields._squareIndex_k__BackingField;
        return *p_nowSquareIndex_k__BackingField;
      }
    }
LABEL_17:
    sub_1BCAA3C(v5, v6);
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
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t _1__state; // w8
  WarBoardControlUiDataComponent_o *_4__this; // x20
  System_String_o *v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  const MethodInfo *v22; // x3
  WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_c *klass; // x8
  WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *v24; // x21
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 v27; // x0
  int64_t v28; // x2
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0
  struct WarBoardControlUiDataComponent_UiData_o *uiData; // x8
  struct UnityEngine_GameObject_array *animationObjects; // x22
  int max_length; // w8
  unsigned int v38; // w23
  __int64 v39; // x1
  Il2CppObject *Component_object; // x21
  const MethodInfo *v41; // x1
  __int64 v42; // x1
  const MethodInfo *v43; // x2
  int32_t SquareIndex; // w19

  v4 = this;
  if ( (byte_4B13BA3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v7, v8);
    sub_1BCA7E0(&WarBoardControlUiDataComponent_TypeInfo, v9, v10);
    this = (WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *)sub_1BCA7E0(&StringLiteral_19193/*"end"*/, v11, v12);
    byte_4B13BA3 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    goto LABEL_9;
  }
  if ( !_1__state )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_36;
    v15 = WarBoardControlUiDataComponent__PlayAnimation(
            _4__this,
            v4->fields.animation,
            (System_String_o *)StringLiteral_19193/*"end"*/,
            v3);
    v4->fields._stateName_5__2 = v15;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields._stateName_5__2, (int64_t)v15, v16, v17, v18, v19, v20, v21);
    this = (WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *)System_String__IsNullOrEmpty(
                                                                          v4->fields._stateName_5__2,
                                                                          0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
LABEL_19:
      uiData = v4->fields.uiData;
      if ( !uiData )
        goto LABEL_36;
      animationObjects = uiData->fields.animationObjects;
      if ( !animationObjects )
        goto LABEL_36;
      max_length = animationObjects->max_length;
      if ( max_length >= 1 )
      {
        v38 = 0;
        while ( 1 )
        {
          if ( v38 >= max_length )
            sub_1BCAA44(this, method);
          this = (WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *)animationObjects->m_Items[v38];
          if ( !this )
            break;
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)this,
                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39);
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
                                                                                  (System_String_o *)StringLiteral_19193/*"end"*/,
                                                                                  v22);
            if ( ((unsigned __int8)this & 1) != 0 )
              return 0;
          }
          max_length = animationObjects->max_length;
          if ( (int)++v38 >= max_length )
            goto LABEL_31;
        }
LABEL_36:
        sub_1BCAA3C(this, method);
      }
LABEL_31:
      if ( !_4__this )
        goto LABEL_36;
      WarBoardControlUiDataComponent__SetUiDataTurnObjects(_4__this, 0, v4->fields.uiData, v22);
      SquareIndex = WarBoardControlUiDataComponent__get_SquareIndex(_4__this, v41);
      if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo, v42);
      WarBoardControlUiDataComponent__UpdateAdjustSituationAll_35732988(SquareIndex, 0, v43);
      return 0;
    }
LABEL_9:
    this = (WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *)v4->fields.animation;
    if ( !this )
      goto LABEL_36;
    this = (WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *)SimpleAnimation__GetState(
                                                                          (SimpleAnimation_o *)this,
                                                                          v4->fields._stateName_5__2,
                                                                          0LL);
    if ( !this )
      goto LABEL_36;
    klass = this->klass;
    v24 = this;
    v25 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v25;
        p_offset += 4;
        if ( !v25 )
          goto LABEL_15;
      }
      v27 = (__int64)(&klass->vtable._5_System_IDisposable_Dispose.method + 2 * *p_offset);
    }
    else
    {
LABEL_15:
      v27 = sub_1C1C7C0(this, SimpleAnimation_State_TypeInfo, 5LL);
    }
    if ( (*(float (__fastcall **)(WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_o *, _QWORD))v27)(
           v24,
           *(_QWORD *)(v27 + 8)) < 1.0 )
    {
      v4->fields.__2__current = 0LL;
      p__2__current = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
      sub_1BCA784(p__2__current, 0LL, v28, (int32_t)v22, v29, v30, v31, v32);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_WarBoardControlUiDataComponent__PlayEndUiDataAnim_d__42_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t _1__state; // w8
  WarBoardControlUiDataComponent_o *_4__this; // x20
  System_String_o *v11; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  const MethodInfo *v18; // x3
  WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_c *klass; // x8
  WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *v20; // x21
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 v23; // x0
  int64_t v24; // x2
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0

  v4 = this;
  if ( (byte_4B13BA4 & 1) == 0 )
  {
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_23728/*"start"*/, v5, v6);
    this = (WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *)sub_1BCA7E0(&StringLiteral_21439/*"loop"*/, v7, v8);
    byte_4B13BA4 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    goto LABEL_9;
  }
  if ( !_1__state )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_22;
    v11 = WarBoardControlUiDataComponent__PlayAnimation(
            _4__this,
            v4->fields.animation,
            (System_String_o *)StringLiteral_23728/*"start"*/,
            v3);
    v4->fields._stateName_5__2 = v11;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields._stateName_5__2, (int64_t)v11, v12, v13, v14, v15, v16, v17);
    if ( System_String__IsNullOrEmpty(v4->fields._stateName_5__2, 0LL) )
    {
LABEL_20:
      WarBoardControlUiDataComponent__PlayAnimation(
        _4__this,
        v4->fields.animation,
        (System_String_o *)StringLiteral_21439/*"loop"*/,
        v18);
      return 0;
    }
LABEL_9:
    this = (WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *)v4->fields.animation;
    if ( this )
    {
      this = (WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *)SimpleAnimation__GetState(
                                                                              (SimpleAnimation_o *)this,
                                                                              v4->fields._stateName_5__2,
                                                                              0LL);
      if ( this )
      {
        klass = this->klass;
        v20 = this;
        v21 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v21;
            p_offset += 4;
            if ( !v21 )
              goto LABEL_15;
          }
          v23 = (__int64)(&klass->vtable._5_System_IDisposable_Dispose.method + 2 * *p_offset);
        }
        else
        {
LABEL_15:
          v23 = sub_1C1C7C0(this, SimpleAnimation_State_TypeInfo, 5LL);
        }
        if ( (*(float (__fastcall **)(WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_o *, _QWORD))v23)(
               v20,
               *(_QWORD *)(v23 + 8)) < 1.0 )
        {
          v4->fields.__2__current = 0LL;
          p__2__current = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
          sub_1BCA784(p__2__current, 0LL, v24, (int32_t)v18, v25, v26, v27, v28);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
          return result;
        }
        if ( _4__this )
          goto LABEL_20;
      }
    }
LABEL_22:
    sub_1BCAA3C(this, method);
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
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_WarBoardControlUiDataComponent__PlayStartUiDataAnim_d__41_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  int32_t _1__state; // w8
  WarBoardControlUiDataComponent_o *_4__this; // x20
  int32_t v16; // w0
  Il2CppObject *Component_object; // x0
  SimpleAnimation_o **p_simpleAnimation_5__2; // x21
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  SimpleAnimation_o *v25; // x22
  _BOOL8 v26; // x0
  const MethodInfo *v27; // x3
  _BOOL8 IsPlayingAnimation; // x0
  const MethodInfo *v29; // x3
  _BOOL4 isDisp; // w8
  SimpleAnimation_o *v31; // x21
  struct UnityEngine_GameObject_o *targetObject; // x8
  bool v33; // w1
  WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_c *klass; // x8
  WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *v35; // x21
  __int64 v36; // x9
  int32_t *p_offset; // x10
  __int64 v38; // x0
  int64_t v39; // x2
  const MethodInfo *v40; // x3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0
  const MethodInfo *v47; // x3
  __int64 *v48; // x8
  System_String_o *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7

  v3 = this;
  if ( (byte_4B13BA5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_23728/*"start"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_19193/*"end"*/, v10, v11);
    this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)sub_1BCA7E0(
                                                                                        &StringLiteral_21439/*"loop"*/,
                                                                                        v12,
                                                                                        v13);
    byte_4B13BA5 = 1;
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
    v16 = WarBoardControlUiDataComponent__CheckCorrectActiveObject(_4__this, v3->fields.targetObject, v2);
    if ( (v16 & 0x80000000) == 0 )
      v3->fields.isDisp = v16 == 1 && v3->fields.isDisp;
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
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
      v3->fields._simpleAnimation_5__2 = (struct SimpleAnimation_o *)Component_object;
      p_simpleAnimation_5__2 = &v3->fields._simpleAnimation_5__2;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v3->fields._simpleAnimation_5__2,
        (int64_t)Component_object,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      if ( !v3->fields.isDisp )
        goto LABEL_23;
      this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)v3->fields.targetObject;
      if ( !this )
        goto LABEL_55;
      if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)this, 0LL) )
      {
        v25 = *p_simpleAnimation_5__2;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
        v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v25, 0LL, 0LL);
        if ( v26 )
        {
          IsPlayingAnimation = WarBoardControlUiDataComponent__IsPlayingAnimation(
                                 (WarBoardControlUiDataComponent_o *)v26,
                                 *p_simpleAnimation_5__2,
                                 (System_String_o *)StringLiteral_23728/*"start"*/,
                                 v27);
          if ( IsPlayingAnimation
            || WarBoardControlUiDataComponent__IsPlayingAnimation(
                 (WarBoardControlUiDataComponent_o *)IsPlayingAnimation,
                 *p_simpleAnimation_5__2,
                 (System_String_o *)StringLiteral_21439/*"loop"*/,
                 v29) )
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
      v31 = *p_simpleAnimation_5__2;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)UnityEngine_Object__op_Equality(
                                                                                          (UnityEngine_Object_o *)v31,
                                                                                          0LL,
                                                                                          0LL);
      targetObject = v3->fields.targetObject;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( targetObject )
        {
          v33 = v3->fields.isDisp;
          this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)v3->fields.targetObject;
LABEL_53:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v33, 0LL);
          return 0;
        }
        goto LABEL_55;
      }
      if ( !targetObject )
        goto LABEL_55;
      UnityEngine_GameObject__SetActive(v3->fields.targetObject, 1, 0LL);
      if ( v3->fields.isDisp )
        v48 = &StringLiteral_23728/*"start"*/;
      else
        v48 = &StringLiteral_19193/*"end"*/;
      v49 = WarBoardControlUiDataComponent__PlayAnimation(
              _4__this,
              v3->fields._simpleAnimation_5__2,
              (System_String_o *)*v48,
              v47);
      v3->fields._stateName_5__3 = v49;
      sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields._stateName_5__3, (int64_t)v49, v50, v51, v52, v53, v54, v55);
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
            (System_String_o *)StringLiteral_21439/*"loop"*/,
            v40);
          return 0;
        }
LABEL_51:
        this = (WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *)v3->fields.targetObject;
        if ( this )
        {
          v33 = 0;
          goto LABEL_53;
        }
LABEL_55:
        sub_1BCAA3C(this, method);
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
      v35 = this;
      v36 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v36;
          p_offset += 4;
          if ( !v36 )
            goto LABEL_39;
        }
        v38 = (__int64)(&klass->vtable._5_System_IDisposable_Dispose.method + 2 * *p_offset);
      }
      else
      {
LABEL_39:
        v38 = sub_1C1C7C0(this, SimpleAnimation_State_TypeInfo, 5LL);
      }
      if ( (*(float (__fastcall **)(WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_o *, _QWORD))v38)(
             v35,
             *(_QWORD *)(v38 + 8)) < 1.0 )
      {
        v3->fields.__2__current = 0LL;
        p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
        sub_1BCA784(p__2__current, 0LL, v39, (int32_t)v40, v41, v42, v43, v44);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_WarBoardControlUiDataComponent__StartOnExistsOtherTurnAnimation_d__37_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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
  int32_t _1__state; // w8
  struct WarBoardControlUiDataComponent_o *_4__this; // x21
  UnityEngine_Object_o **p_targetSimpleAnimation_5__2; // x20
  struct UnityEngine_GameObject_array *syncAnimationObjects; // x23
  int max_length; // w8
  unsigned int v28; // w24
  __int64 v29; // x8
  UnityEngine_GameObject_o *v30; // x22
  __int64 v31; // x1
  Il2CppObject *Component_object; // x21
  __int64 v33; // x1
  Il2CppObject *v34; // x21
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  UnityEngine_Object_o *v41; // x20
  __int64 v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o **p_animState_5__3; // x20
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v51; // x1
  System_Collections_IEnumerator_o *v52; // x21
  System_Collections_IEnumerator_c *v53; // x8
  __int64 v54; // x9
  int32_t *v55; // x10
  __int64 v56; // x0
  __int64 v57; // x1
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  float v64; // s8
  signed int v65; // w8
  UnityEngine_Object_o *targetSimpleAnimation_5__2; // x20
  System_Collections_Generic_IEnumerable_TSource__o *States; // x0
  Il2CppObject *object; // x0
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  struct SimpleAnimation_State_o *state_5__6; // x21
  SimpleAnimation_State_c *klass; // x8
  __int64 v77; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  PartyOrganizationUtility_o *v80; // x19
  char v81; // w8
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  float v88; // s0
  struct System_Action_o *callback; // x8
  Il2CppObject **p__2__current; // x19
  System_Collections_IEnumerator_c *v92; // x8
  __int64 v93; // x9
  System_Collections_IEnumerator_c **v94; // x10
  __int64 v95; // x0
  UnityEngine_AnimationState_c **v96; // x0
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  __int64 v103; // x22
  __int64 v104; // x0
  __int64 v105; // x8
  __int64 v106; // x21
  __int64 v107; // x9
  int *v108; // x10
  __int64 v109; // x0
  __int64 v110; // x2
  float normalizedTime; // s8
  unsigned int v112; // w9
  unsigned int v113; // w8
  void *v114; // x0
  void *v115; // x23
  int v116; // w1
  __int64 v117; // x0
  __int64 v118; // x19
  __int64 v119; // x8
  __int64 v120; // x9
  int *v121; // x10
  __int64 v122; // x0

  v8 = this;
  if ( (byte_4B13BA6 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_AnimationState_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_First_SimpleAnimation_State___, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Animation___, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v13, v14);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)sub_1BCA7E0(
                                                                           &SimpleAnimation_State_TypeInfo,
                                                                           v21,
                                                                           v22);
    byte_4B13BA6 = 1;
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
    v77 = *(unsigned __int16 *)(&state_5__6->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&state_5__6->klass->_2.bitflags2 + 3) )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v77;
        p_offset += 2;
        if ( !v77 )
          goto LABEL_63;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5].method;
    }
    else
    {
LABEL_63:
      p_method = sub_1C1C7C0(v8->fields._state_5__6, SimpleAnimation_State_TypeInfo, 5LL);
    }
    v88 = (*(float (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))p_method)(
            state_5__6,
            *(_QWORD *)(p_method + 8));
    if ( v88 > 0.0 && v88 < 1.0 && v8->fields._time_5__5 <= v88 )
    {
      v8->fields.__2__current = 0LL;
      p__2__current = &v8->fields.__2__current;
      *((float *)p__2__current + 11) = v88;
      sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, 0LL, v82, v83, v84, v85, v86, v87);
      *((_DWORD *)p__2__current - 2) = 2;
      v81 = 1;
      return v81 & 1;
    }
    v8->fields._state_5__6 = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._state_5__6, 0LL, v82, v83, v84, v85, v86, v87);
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
    v81 = 0;
    return v81 & 1;
  }
  _4__this = v8->fields.__4__this;
  v8->fields._targetSimpleAnimation_5__2 = 0LL;
  p_targetSimpleAnimation_5__2 = (UnityEngine_Object_o **)&v8->fields._targetSimpleAnimation_5__2;
  v8->fields.__1__state = -1;
  sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._targetSimpleAnimation_5__2, 0LL, v2, v3, v4, v5, v6, v7);
  if ( !_4__this )
    goto LABEL_105;
  syncAnimationObjects = _4__this->fields.syncAnimationObjects;
  if ( !syncAnimationObjects )
    goto LABEL_105;
  max_length = syncAnimationObjects->max_length;
  if ( max_length >= 1 )
  {
    v28 = 0;
    while ( 1 )
    {
      if ( v28 >= max_length )
        sub_1BCAA44(this, method);
      v29 = (__int64)syncAnimationObjects + 8 * (int)v28;
      v30 = *(UnityEngine_GameObject_o **)(v29 + 32);
      if ( !v30 )
        break;
      this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)UnityEngine_GameObject__get_activeInHierarchy(
                                                                             *(UnityEngine_GameObject_o **)(v29 + 32),
                                                                             0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             v30,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
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
        v34 = UnityEngine_GameObject__GetComponent_object_(
                v30,
                (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
        this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)UnityEngine_Object__op_Inequality(
                                                                               (UnityEngine_Object_o *)v34,
                                                                               0LL,
                                                                               0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v34 )
            break;
          this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)SimpleAnimation__get_isPlaying(
                                                                                 (SimpleAnimation_o *)v34,
                                                                                 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            *p_targetSimpleAnimation_5__2 = (UnityEngine_Object_o *)v34;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v8->fields._targetSimpleAnimation_5__2,
              (int64_t)v34,
              v35,
              v36,
              v37,
              v38,
              v39,
              v40);
          }
        }
      }
      max_length = syncAnimationObjects->max_length;
      if ( (int)++v28 >= max_length )
        goto LABEL_25;
    }
LABEL_105:
    sub_1BCAA3C(this, method);
  }
LABEL_25:
  Component_object = 0LL;
LABEL_26:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    v41 = *p_targetSimpleAnimation_5__2;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)UnityEngine_Object__op_Equality(v41, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      goto LABEL_70;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
LABEL_52:
    targetSimpleAnimation_5__2 = (UnityEngine_Object_o *)v8->fields._targetSimpleAnimation_5__2;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v42);
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
                 (const MethodInfo_2F32D3C *)Method_System_Linq_Enumerable_First_SimpleAnimation_State___);
      v8->fields._state_5__6 = (struct SimpleAnimation_State_o *)object;
      sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._state_5__6, (int64_t)object, v69, v70, v71, v72, v73, v74);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._animState_5__3, 0LL, v43, v44, v45, v46, v47, v48);
  if ( !Component_object )
    goto LABEL_105;
  Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)Component_object, 0LL);
  v52 = Enumerator;
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v51);
  v53 = Enumerator->klass;
  v54 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v55 = &v53->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)v55 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      --v54;
      v55 += 4;
      if ( !v54 )
        goto LABEL_41;
    }
    v56 = (__int64)&v53->vtable[*v55].method;
  }
  else
  {
LABEL_41:
    v56 = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v56)(v52, *(_QWORD *)(v56 + 8)) & 1) != 0 )
  {
    v92 = v52->klass;
    v93 = *(unsigned __int16 *)(&v52->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v52->klass->_2.bitflags2 + 3) )
    {
      v94 = (System_Collections_IEnumerator_c **)&v92->_1.interfaceOffsets->offset;
      while ( *(v94 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v93;
        v94 += 2;
        if ( !v93 )
          goto LABEL_81;
      }
      v95 = (__int64)&v92->vtable[*(_DWORD *)v94 + 1].method;
    }
    else
    {
LABEL_81:
      v95 = sub_1C1C7C0(v52, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v96 = (UnityEngine_AnimationState_c **)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v95)(
                                             v52,
                                             *(_QWORD *)(v95 + 8));
    if ( v96 && *v96 != UnityEngine_AnimationState_TypeInfo )
    {
      sub_1BCACFC(v96);
      v115 = v114;
      if ( v116 != 1 )
      {
        v117 = sub_1BCA91C(v52, System_IDisposable_TypeInfo);
        v118 = v117;
        if ( v117 )
        {
          v119 = *(_QWORD *)v117;
          v120 = *(unsigned __int16 *)(*(_QWORD *)v117 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v117 + 302LL) )
          {
            v121 = (int *)(*(_QWORD *)(v119 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v121 - 1) != System_IDisposable_TypeInfo )
            {
              --v120;
              v121 += 4;
              if ( !v120 )
                goto LABEL_116;
            }
            v122 = v119 + 16LL * *v121 + 312;
          }
          else
          {
LABEL_116:
            v122 = sub_1C1C7C0(v117, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v122)(v118, *(_QWORD *)(v122 + 8));
        }
        sub_1CB5270(v115);
      }
      v103 = *(_QWORD *)__cxa_begin_catch(v114);
      __cxa_end_catch();
      goto LABEL_87;
    }
    *p_animState_5__3 = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)v96;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v8->fields._animState_5__3,
      (int64_t)v96,
      v97,
      v98,
      v99,
      v100,
      v101,
      v102);
  }
  v103 = 0LL;
LABEL_87:
  v104 = sub_1BCA91C(v52, System_IDisposable_TypeInfo);
  if ( v104 )
  {
    v105 = *(_QWORD *)v104;
    v106 = v104;
    v107 = *(unsigned __int16 *)(*(_QWORD *)v104 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v104 + 302LL) )
    {
      v108 = (int *)(*(_QWORD *)(v105 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v108 - 1) != System_IDisposable_TypeInfo )
      {
        --v107;
        v108 += 4;
        if ( !v107 )
          goto LABEL_92;
      }
      v109 = v105 + 16LL * *v108 + 312;
    }
    else
    {
LABEL_92:
      v109 = sub_1C1C7C0(v104, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v109)(v106, *(_QWORD *)(v109 + 8));
  }
  if ( v103 )
    sub_1BCAA34(v103);
  this = *p_animState_5__3;
  if ( !*p_animState_5__3 )
    goto LABEL_105;
  normalizedTime = UnityEngine_AnimationState__get_normalizedTime((UnityEngine_AnimationState_o *)this, 0LL);
  if ( !byte_4B109C0 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, method, v110);
    byte_4B109C0 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method);
  v112 = vcvtms_s32_f32(normalizedTime);
  if ( floorf(normalizedTime) == INFINITY )
    v113 = 0x80000000;
  else
    v113 = v112;
  v8->fields._startNormalizedTime_5__4 = v113;
LABEL_43:
  this = (WarBoardControlUiDataComponent__StartSyncAnimation_d__43_o *)v8->fields._animState_5__3;
  if ( !this )
    goto LABEL_105;
  v64 = UnityEngine_AnimationState__get_normalizedTime((UnityEngine_AnimationState_o *)this, 0LL);
  if ( !byte_4B109C0 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v57, v58);
    byte_4B109C0 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v57);
  v65 = vcvtms_s32_f32(v64);
  if ( floorf(v64) == INFINITY )
    v65 = 0x80000000;
  if ( v8->fields._startNormalizedTime_5__4 < v65 )
  {
    v8->fields._animState_5__3 = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._animState_5__3, 0LL, v58, v59, v60, v61, v62, v63);
    goto LABEL_52;
  }
  v8->fields.__2__current = 0LL;
  v80 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
  sub_1BCA784(v80, 0LL, v58, v59, v60, v61, v62, v63);
  v81 = 1;
  *(_DWORD *)&v80[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
  return v81 & 1;
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
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_WarBoardControlUiDataComponent__StartSyncAnimation_d__43_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  return System_String__op_Equality(a->fields.key, this->fields.key, 0LL);
}