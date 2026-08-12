void WarBoardServantPiecePartyBuffComponent___ctor(
        WarBoardServantPiecePartyBuffComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596E030 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_596E030 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.objList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void WarBoardServantPiecePartyBuffComponent__ClearArrowObject(
        WarBoardServantPiecePartyBuffComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *objList; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *current; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Collections_Generic_List_GameObject__o *v9; // x8
  int32_t size; // w2
  int v11; // w9
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596E02E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E02E = 1;
  }
  objList = this->fields.objList;
  memset(&v12, 0, sizeof(v12));
  if ( !objList )
    goto LABEL_16;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)objList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0) )
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
      UnityEngine_Object__DestroyImmediate_83460132((UnityEngine_Object_o *)current, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v9 = this->fields.objList;
  if ( !v9 )
LABEL_16:
    sub_2213CDC(objList, method);
  size = v9->fields._size;
  v11 = v9->fields._version + 1;
  v9->fields._size = 0;
  v9->fields._version = v11;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v9->fields._items, 0, size, 0);
}


void WarBoardServantPiecePartyBuffComponent__ClearPartyBuff(
        WarBoardServantPiecePartyBuffComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  WarBoardServantPiecePartyBuffComponent__ClearArrowObject(this, method);
  WarBoardServantPiecePartyBuffComponent__SetActive(this, 0, v3);
}


UnityEngine_GameObject_o *WarBoardServantPiecePartyBuffComponent__CreateObject(
        WarBoardServantPiecePartyBuffComponent_o *this,
        UnityEngine_GameObject_o *prefab,
        UnityEngine_Transform_o *root,
        UnityEngine_Transform_o *pos,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_GameObject_o *transform; // x0
  __int64 v12; // x1
  UnityEngine_Transform_o *v13; // x21
  UnityEngine_Quaternion_o v15; // 0:kr00_16.16
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596E02F & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801600);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E02F = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, prefab, root);
  v8 = 0;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)prefab, 0, 0) )
  {
    v16.fields.x = 0.0;
    v16.fields.y = 0.0;
    v16.fields.z = 0.0;
    v15 = UnityEngine_Quaternion__Internal_FromEulerRad(v16, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
    v17.fields.x = 0.0;
    v17.fields.y = 0.0;
    v17.fields.z = 0.0;
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__59717424(
                                              (Il2CppObject *)prefab,
                                              v17,
                                              v15,
                                              (const MethodInfo_38F3730 *)Method_UnityEngine_Object_Instantiate_GameObject____91801600);
    if ( !transform )
      goto LABEL_18;
    v8 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    if ( !transform )
      goto LABEL_18;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, root, 0);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0);
    if ( !transform )
      goto LABEL_18;
    v18.fields.x = 0.0;
    v18.fields.y = 0.0;
    v18.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v18, 0);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0);
    if ( !transform )
      goto LABEL_18;
    v19.fields.x = 0.0;
    v19.fields.y = 0.0;
    v19.fields.z = 0.0;
    UnityEngine_Transform__set_eulerAngles((UnityEngine_Transform_o *)transform, v19, 0);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0);
    if ( !transform )
      goto LABEL_18;
    v20.fields.x = 1.0;
    v20.fields.y = 1.0;
    v20.fields.z = 1.0;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v20, 0);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)pos, 0, 0) )
    {
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0);
      if ( pos )
      {
        v13 = (UnityEngine_Transform_o *)transform;
        position = UnityEngine_Transform__get_position(pos, 0);
        if ( v13 )
        {
          UnityEngine_Transform__set_position(v13, position, 0);
          return v8;
        }
      }
LABEL_18:
      sub_2213CDC(transform, v12);
    }
  }
  return v8;
}


// local variable allocation has failed, the output may be wrong!
void WarBoardServantPiecePartyBuffComponent__SetActive(
        WarBoardServantPiecePartyBuffComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Component_o *partyBuffLabelSprite; // x0

  partyBuffLabelSprite = (UnityEngine_Component_o *)this->fields.partyBuffLabelSprite;
  if ( !partyBuffLabelSprite
    || (partyBuffLabelSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(partyBuffLabelSprite, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyBuffLabelSprite, flag, 0),
        (partyBuffLabelSprite = (UnityEngine_Component_o *)this->fields.arrowListObject) == 0) )
  {
    sub_2213CDC(partyBuffLabelSprite, flag);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyBuffLabelSprite, flag, 0);
}


void WarBoardServantPiecePartyBuffComponent__SetPartyBuffLevel(
        WarBoardServantPiecePartyBuffComponent_o *this,
        int32_t level,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x4
  int v7; // w24
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *Object; // x21
  System_Collections_Generic_List_object__o *objList; // x0
  __int64 v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x8
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596E02D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E02D = 1;
  }
  WarBoardServantPiecePartyBuffComponent__SetActive(this, 1, method);
  if ( level >= 1 )
  {
    v7 = 0;
    do
    {
      Object = (UnityEngine_Object_o *)WarBoardServantPiecePartyBuffComponent__CreateObject(
                                         (WarBoardServantPiecePartyBuffComponent_o *)v5,
                                         this->fields.arrowClone,
                                         this->fields.listTransform,
                                         0,
                                         v6);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
      v5 = UnityEngine_Object__op_Equality(Object, 0, 0);
      if ( !v5 )
      {
        v23.fields.x = this->fields.addPos.fields.x * (float)v7;
        v23.fields.y = this->fields.addPos.fields.y * (float)v7;
        v23.fields.z = 0.0;
        GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)Object, v23, 0);
        if ( !Object
          || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Object, 1, 0),
              (objList = (System_Collections_Generic_List_object__o *)this->fields.objList) == 0)
          || (items = objList->fields._items,
              v20 = Method_System_Collections_Generic_List_GameObject__Add__,
              ++objList->fields._version,
              !items) )
        {
          sub_2213CDC(objList, v12);
        }
        size = objList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            objList,
            (Il2CppObject *)Object,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          objList->fields._size = size + 1;
          v22[4] = (Il2CppClass *)Object;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)Object, v13, v14, v15, v16, v17, v18);
        }
      }
      ++v7;
    }
    while ( level != v7 );
  }
}