void __fastcall WarBoardServantPiecePartyBuffComponent___ctor(
        WarBoardServantPiecePartyBuffComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4189297 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v3);
    byte_4189297 = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objList = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.objList, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardServantPiecePartyBuffComponent__ClearArrowObject(
        WarBoardServantPiecePartyBuffComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_GameObject__o *objList; // x0
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4189295 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_4189295 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  objList = this->fields.objList;
  if ( !objList )
    goto LABEL_16;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v10,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v10.fields.current;
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
      UnityEngine_Object__DestroyImmediate_35315108((UnityEngine_Object_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  objList = this->fields.objList;
  if ( !objList )
LABEL_16:
    sub_B2C434(objList, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)objList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_GameObject__Clear__);
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
  __int64 v8; // x1
  UnityEngine_GameObject_o *v9; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  float w; // s11
  UnityEngine_GameObject_o *transform; // x0
  __int64 v15; // x1
  UnityEngine_Transform_o *v16; // x21
  int v17; // s0
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v27; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4189296 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450632, prefab);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_4189296 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)prefab, 0LL, 0LL) )
  {
    v21.fields.x = 0.0;
    v21.fields.y = 0.0;
    v21.fields.z = 0.0;
    v26 = UnityEngine_Quaternion__Euler_35347036(v21, 0LL);
    x = v26.fields.x;
    y = v26.fields.y;
    z = v26.fields.z;
    w = v26.fields.w;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v22.fields.x = 0.0;
    v22.fields.y = 0.0;
    v22.fields.z = 0.0;
    v27.fields.x = x;
    v27.fields.y = y;
    v27.fields.z = z;
    v27.fields.w = w;
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              (Il2CppObject *)prefab,
                                              v22,
                                              v27,
                                              (const MethodInfo_20960C4 *)Method_UnityEngine_Object_Instantiate_GameObject____67450632);
    if ( !transform )
      goto LABEL_20;
    v9 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_20;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, root, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0LL);
    if ( !transform )
      goto LABEL_20;
    v23.fields.x = 0.0;
    v23.fields.y = 0.0;
    v23.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v23, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0LL);
    if ( !transform )
      goto LABEL_20;
    v24.fields.x = 0.0;
    v24.fields.y = 0.0;
    v24.fields.z = 0.0;
    UnityEngine_Transform__set_eulerAngles((UnityEngine_Transform_o *)transform, v24, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0LL);
    if ( !transform )
      goto LABEL_20;
    v25.fields.x = 1.0;
    v25.fields.y = 1.0;
    v25.fields.z = 1.0;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v25, 0LL);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)pos, 0LL, 0LL) )
    {
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0LL);
      if ( pos )
      {
        v16 = (UnityEngine_Transform_o *)transform;
        *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Transform__get_position(pos, 0LL);
        if ( v16 )
        {
          UnityEngine_Transform__set_position(v16, *(UnityEngine_Vector3_o *)&v17, 0LL);
          return v9;
        }
      }
LABEL_20:
      sub_B2C434(transform, v15);
    }
  }
  return v9;
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
    sub_B2C434(partyBuffLabelSprite, flag);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyBuffLabelSprite, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardServantPiecePartyBuffComponent__SetPartyBuffLevel(
        WarBoardServantPiecePartyBuffComponent_o *this,
        int32_t level,
        const MethodInfo *method)
{
  __int64 v5; // x1
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x4
  int32_t v8; // w22
  UnityEngine_Object_o *Object; // x21
  struct System_Collections_Generic_List_GameObject__o *objList; // x0
  __int64 v11; // x1
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4189294 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, *(_QWORD *)&level);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_4189294 = 1;
  }
  WarBoardServantPiecePartyBuffComponent__SetActive(this, 1, method);
  if ( level >= 1 )
  {
    v8 = 0;
    do
    {
      Object = (UnityEngine_Object_o *)WarBoardServantPiecePartyBuffComponent__CreateObject(
                                         (WarBoardServantPiecePartyBuffComponent_o *)v6,
                                         this->fields.arrowClone,
                                         this->fields.listTransform,
                                         0LL,
                                         v7);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v6 = UnityEngine_Object__op_Equality(Object, 0LL, 0LL);
      if ( !v6 )
      {
        v12.fields.x = this->fields.addPos.fields.x * (float)v8;
        v12.fields.y = this->fields.addPos.fields.y * (float)v8;
        v12.fields.z = 0.0;
        GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)Object, v12, 0LL);
        if ( !Object
          || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Object, 1, 0LL),
              (objList = this->fields.objList) == 0LL) )
        {
          sub_B2C434(objList, v11);
        }
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)objList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Object,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
      }
      ++v8;
    }
    while ( v8 < level );
  }
}