void __fastcall WarBoardServantPiecePartyBuffComponent___ctor(
        WarBoardServantPiecePartyBuffComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42EAB77 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v5, v6, v7);
    byte_42EAB77 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objList = (struct System_Collections_Generic_List_GameObject__o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.objList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardServantPiecePartyBuffComponent__ClearArrowObject(
        WarBoardServantPiecePartyBuffComponent_o *this,
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
  struct System_Collections_Generic_List_GameObject__o *objList; // x0
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EAB75 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Clear__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    byte_42EAB75 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  objList = this->fields.objList;
  if ( !objList )
    goto LABEL_16;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v22,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v22.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_35620448((UnityEngine_Object_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v22,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  objList = this->fields.objList;
  if ( !objList )
LABEL_16:
    sub_B5D69C(objList, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)objList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_GameObject__Clear__);
}


void __fastcall WarBoardServantPiecePartyBuffComponent__ClearPartyBuff(
        WarBoardServantPiecePartyBuffComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  WarBoardServantPiecePartyBuffComponent__ClearArrowObject(this, method);
  WarBoardServantPiecePartyBuffComponent__SetActive(this, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall WarBoardServantPiecePartyBuffComponent__CreateObject(
        WarBoardServantPiecePartyBuffComponent_o *this,
        UnityEngine_GameObject_o *prefab,
        UnityEngine_Transform_o *root,
        UnityEngine_Transform_o *pos,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_GameObject_o *v11; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  float w; // s11
  UnityEngine_GameObject_o *transform; // x0
  __int64 v17; // x1
  UnityEngine_Transform_o *v18; // x21
  int v19; // s0
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v29; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_42EAB76 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882840, (_DWORD)prefab, (_DWORD)root, pos);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42EAB76 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)prefab, 0LL, 0LL) )
  {
    v23.fields.x = 0.0;
    v23.fields.y = 0.0;
    v23.fields.z = 0.0;
    v28 = UnityEngine_Quaternion__Euler_35652376(v23, 0LL);
    x = v28.fields.x;
    y = v28.fields.y;
    z = v28.fields.z;
    w = v28.fields.w;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v24.fields.x = 0.0;
    v24.fields.y = 0.0;
    v24.fields.z = 0.0;
    v29.fields.x = x;
    v29.fields.y = y;
    v29.fields.z = z;
    v29.fields.w = w;
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              (Il2CppObject *)prefab,
                                              v24,
                                              v29,
                                              (const MethodInfo_1E66564 *)Method_UnityEngine_Object_Instantiate_GameObject____68882840);
    if ( !transform )
      goto LABEL_20;
    v11 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_20;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, root, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v11, 0LL);
    if ( !transform )
      goto LABEL_20;
    v25.fields.x = 0.0;
    v25.fields.y = 0.0;
    v25.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v25, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v11, 0LL);
    if ( !transform )
      goto LABEL_20;
    v26.fields.x = 0.0;
    v26.fields.y = 0.0;
    v26.fields.z = 0.0;
    UnityEngine_Transform__set_eulerAngles((UnityEngine_Transform_o *)transform, v26, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v11, 0LL);
    if ( !transform )
      goto LABEL_20;
    v27.fields.x = 1.0;
    v27.fields.y = 1.0;
    v27.fields.z = 1.0;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v27, 0LL);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)pos, 0LL, 0LL) )
    {
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v11, 0LL);
      if ( pos )
      {
        v18 = (UnityEngine_Transform_o *)transform;
        *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Transform__get_position(pos, 0LL);
        if ( v18 )
        {
          UnityEngine_Transform__set_position(v18, *(UnityEngine_Vector3_o *)&v19, 0LL);
          return v11;
        }
      }
LABEL_20:
      sub_B5D69C(transform, v17);
    }
  }
  return v11;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardServantPiecePartyBuffComponent__SetActive(
        WarBoardServantPiecePartyBuffComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Component_o *partyBuffLabelSprite; // x0
  bool v6; // w20

  partyBuffLabelSprite = (UnityEngine_Component_o *)this->fields.partyBuffLabelSprite;
  if ( !partyBuffLabelSprite
    || (partyBuffLabelSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                            partyBuffLabelSprite,
                                                            0LL)) == 0LL
    || (v6 = flag,
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyBuffLabelSprite, v6, 0LL),
        (partyBuffLabelSprite = (UnityEngine_Component_o *)this->fields.arrowListObject) == 0LL) )
  {
    sub_B5D69C(partyBuffLabelSprite, flag);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyBuffLabelSprite, v6, 0LL);
}


void __fastcall WarBoardServantPiecePartyBuffComponent__SetPartyBuffLevel(
        WarBoardServantPiecePartyBuffComponent_o *this,
        int32_t level,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x4
  int32_t v11; // w22
  UnityEngine_Object_o *Object; // x21
  struct System_Collections_Generic_List_GameObject__o *objList; // x0
  __int64 v14; // x1
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EAB74 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, level, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42EAB74 = 1;
  }
  WarBoardServantPiecePartyBuffComponent__SetActive(this, 1, method);
  if ( level >= 1 )
  {
    v11 = 0;
    do
    {
      Object = (UnityEngine_Object_o *)WarBoardServantPiecePartyBuffComponent__CreateObject(
                                         (WarBoardServantPiecePartyBuffComponent_o *)v9,
                                         this->fields.arrowClone,
                                         this->fields.listTransform,
                                         0LL,
                                         v10);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v9 = UnityEngine_Object__op_Equality(Object, 0LL, 0LL);
      if ( !v9 )
      {
        v15.fields.x = this->fields.addPos.fields.x * (float)v11;
        v15.fields.y = this->fields.addPos.fields.y * (float)v11;
        v15.fields.z = 0.0;
        GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)Object, v15, 0LL);
        if ( !Object
          || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Object, 1, 0LL),
              (objList = this->fields.objList) == 0LL) )
        {
          sub_B5D69C(objList, v14);
        }
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)objList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Object,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
      }
      ++v11;
    }
    while ( v11 < level );
  }
}