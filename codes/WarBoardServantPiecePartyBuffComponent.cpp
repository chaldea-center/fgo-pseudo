void __fastcall WarBoardServantPiecePartyBuffComponent___ctor(
        WarBoardServantPiecePartyBuffComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FBAAA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v6);
    byte_40FBAAA = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objList = (struct System_Collections_Generic_List_GameObject__o *)v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.objList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
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
  struct System_Collections_Generic_List_GameObject__o *v10; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FBAA8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Clear__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40FBAA8 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  objList = this->fields.objList;
  if ( !objList )
    goto LABEL_16;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v11,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v11.fields.current;
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
      UnityEngine_Object__DestroyImmediate_34809676((UnityEngine_Object_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v10 = this->fields.objList;
  if ( !v10 )
LABEL_16:
    sub_B170D4();
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v10,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
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
  Il2CppObject *v14; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v16; // x0
  UnityEngine_Transform_o *v17; // x0
  UnityEngine_Transform_o *v18; // x0
  UnityEngine_Transform_o *v19; // x0
  UnityEngine_Transform_o *v20; // x21
  int v21; // s0
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v31; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_40FBAA9 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874920, prefab);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    byte_40FBAA9 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)prefab, 0LL, 0LL) )
  {
    v25.fields.x = 0.0;
    v25.fields.y = 0.0;
    v25.fields.z = 0.0;
    v30 = UnityEngine_Quaternion__Euler_34841604(v25, 0LL);
    x = v30.fields.x;
    y = v30.fields.y;
    z = v30.fields.z;
    w = v30.fields.w;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v26.fields.x = 0.0;
    v26.fields.y = 0.0;
    v26.fields.z = 0.0;
    v31.fields.x = x;
    v31.fields.y = y;
    v31.fields.z = z;
    v31.fields.w = w;
    v14 = UnityEngine_Object__Instantiate_object_(
            (Il2CppObject *)prefab,
            v26,
            v31,
            (const MethodInfo_19DE498 *)Method_UnityEngine_Object_Instantiate_GameObject____66874920);
    if ( !v14 )
      goto LABEL_20;
    v9 = (UnityEngine_GameObject_o *)v14;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v14, 0LL);
    if ( !transform )
      goto LABEL_20;
    UnityEngine_Transform__set_parent(transform, root, 0LL);
    v16 = UnityEngine_GameObject__get_transform(v9, 0LL);
    if ( !v16 )
      goto LABEL_20;
    v27.fields.x = 0.0;
    v27.fields.y = 0.0;
    v27.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(v16, v27, 0LL);
    v17 = UnityEngine_GameObject__get_transform(v9, 0LL);
    if ( !v17 )
      goto LABEL_20;
    v28.fields.x = 0.0;
    v28.fields.y = 0.0;
    v28.fields.z = 0.0;
    UnityEngine_Transform__set_eulerAngles(v17, v28, 0LL);
    v18 = UnityEngine_GameObject__get_transform(v9, 0LL);
    if ( !v18 )
      goto LABEL_20;
    v29.fields.x = 1.0;
    v29.fields.y = 1.0;
    v29.fields.z = 1.0;
    UnityEngine_Transform__set_localScale(v18, v29, 0LL);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)pos, 0LL, 0LL) )
    {
      v19 = UnityEngine_GameObject__get_transform(v9, 0LL);
      if ( pos )
      {
        v20 = v19;
        *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Transform__get_position(pos, 0LL);
        if ( v20 )
        {
          UnityEngine_Transform__set_position(v20, *(UnityEngine_Vector3_o *)&v21, 0LL);
          return v9;
        }
      }
LABEL_20:
      sub_B170D4();
    }
  }
  return v9;
}


void __fastcall WarBoardServantPiecePartyBuffComponent__SetActive(
        WarBoardServantPiecePartyBuffComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Component_o *partyBuffLabelSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  bool v7; // w20
  UnityEngine_GameObject_o *arrowListObject; // x0

  partyBuffLabelSprite = (UnityEngine_Component_o *)this->fields.partyBuffLabelSprite;
  if ( !partyBuffLabelSprite
    || (gameObject = UnityEngine_Component__get_gameObject(partyBuffLabelSprite, 0LL)) == 0LL
    || (v7 = flag,
        UnityEngine_GameObject__SetActive(gameObject, v7, 0LL),
        (arrowListObject = this->fields.arrowListObject) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(arrowListObject, v7, 0LL);
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
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FBAA7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, *(_QWORD *)&level);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FBAA7 = 1;
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
        v11.fields.x = this->fields.addPos.fields.x * (float)v8;
        v11.fields.y = this->fields.addPos.fields.y * (float)v8;
        v11.fields.z = 0.0;
        GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)Object, v11, 0LL);
        if ( !Object
          || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Object, 1, 0LL),
              (objList = this->fields.objList) == 0LL) )
        {
          sub_B170D4();
        }
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)objList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Object,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
      }
      ++v8;
    }
    while ( v8 < level );
  }
}