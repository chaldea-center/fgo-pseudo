void __fastcall WarBoardServantPiecePartyBuffComponent___ctor(
        WarBoardServantPiecePartyBuffComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49F9FB8 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_GameObject__TypeInfo, v4);
    byte_49F9FB8 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_GameObject__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objList = (struct System_Collections_Generic_List_GameObject__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.objList, (int32_t)v5, v6, v7);
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
  struct System_Collections_Generic_List_GameObject__o *v10; // x8
  int32_t size; // w2
  int v12; // w9
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49F9FB6 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Clear__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    byte_49F9FB6 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  objList = this->fields.objList;
  if ( !objList )
    goto LABEL_16;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)objList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v13.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_69127924((UnityEngine_Object_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v10 = this->fields.objList;
  if ( !v10 )
LABEL_16:
    sub_1B64324(objList);
  size = v10->fields._size;
  v12 = v10->fields._version + 1;
  v10->fields._size = 0;
  v10->fields._version = v12;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v10->fields._items, 0, size, 0LL);
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
  UnityEngine_Transform_o *v15; // x21
  int v16; // s0
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v26; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_49F9FB7 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791920, prefab);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    byte_49F9FB7 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)prefab, 0LL, 0LL) )
  {
    v20.fields.x = 0.0;
    v20.fields.y = 0.0;
    v20.fields.z = 0.0;
    v25 = UnityEngine_Quaternion__Internal_FromEulerRad(v20, 0LL);
    x = v25.fields.x;
    y = v25.fields.y;
    z = v25.fields.z;
    w = v25.fields.w;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v21.fields.x = 0.0;
    v21.fields.y = 0.0;
    v21.fields.z = 0.0;
    v26.fields.x = x;
    v26.fields.y = y;
    v26.fields.z = z;
    v26.fields.w = w;
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__49004284(
                                              (Il2CppObject *)prefab,
                                              v21,
                                              v26,
                                              (const MethodInfo_2EBBEFC *)Method_UnityEngine_Object_Instantiate_GameObject____75791920);
    if ( !transform )
      goto LABEL_18;
    v9 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_18;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, root, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0LL);
    if ( !transform )
      goto LABEL_18;
    v22.fields.x = 0.0;
    v22.fields.y = 0.0;
    v22.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v22, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0LL);
    if ( !transform )
      goto LABEL_18;
    v23.fields.x = 0.0;
    v23.fields.y = 0.0;
    v23.fields.z = 0.0;
    UnityEngine_Transform__set_eulerAngles((UnityEngine_Transform_o *)transform, v23, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0LL);
    if ( !transform )
      goto LABEL_18;
    v24.fields.x = 1.0;
    v24.fields.y = 1.0;
    v24.fields.z = 1.0;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v24, 0LL);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)pos, 0LL, 0LL) )
    {
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0LL);
      if ( pos )
      {
        v15 = (UnityEngine_Transform_o *)transform;
        *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Transform__get_position(pos, 0LL);
        if ( v15 )
        {
          UnityEngine_Transform__set_position(v15, *(UnityEngine_Vector3_o *)&v16, 0LL);
          return v9;
        }
      }
LABEL_18:
      sub_1B64324(transform);
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
    sub_1B64324(partyBuffLabelSprite);
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
  int v8; // w22
  UnityEngine_Object_o *Object; // x21
  System_Collections_Generic_List_object__o *objList; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x8
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F9FB5 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, *(_QWORD *)&level);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_49F9FB5 = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v6 = UnityEngine_Object__op_Equality(Object, 0LL, 0LL);
      if ( !v6 )
      {
        v17.fields.x = this->fields.addPos.fields.x * (float)v8;
        v17.fields.y = this->fields.addPos.fields.y * (float)v8;
        v17.fields.z = 0.0;
        GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)Object, v17, 0LL);
        if ( !Object
          || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Object, 1, 0LL),
              (objList = (System_Collections_Generic_List_object__o *)this->fields.objList) == 0LL)
          || (items = objList->fields._items,
              v14 = Method_System_Collections_Generic_List_GameObject__Add__,
              ++objList->fields._version,
              !items) )
        {
          sub_1B64324(objList);
        }
        size = objList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            objList,
            (Il2CppObject *)Object,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v16 = &items->obj.klass + size;
          objList->fields._size = size + 1;
          v16[4] = (Il2CppClass *)Object;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)Object, v11, v12);
        }
      }
      ++v8;
    }
    while ( level != v8 );
  }
}