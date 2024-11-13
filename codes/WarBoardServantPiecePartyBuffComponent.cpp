void __fastcall WarBoardServantPiecePartyBuffComponent___ctor(
        WarBoardServantPiecePartyBuffComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B13C2B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v5, v6);
    byte_4B13C2B = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_GameObject__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objList = (struct System_Collections_Generic_List_GameObject__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.objList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardServantPiecePartyBuffComponent__ClearArrowObject(
        WarBoardServantPiecePartyBuffComponent_o *this,
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
  struct System_Collections_Generic_List_GameObject__o *objList; // x0
  __int64 v15; // x1
  Il2CppObject *current; // x20
  __int64 v17; // x1
  struct System_Collections_Generic_List_GameObject__o *v18; // x8
  int32_t size; // w2
  int v20; // w9
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B13C29 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Clear__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    byte_4B13C29 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  objList = this->fields.objList;
  if ( !objList )
    goto LABEL_16;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)objList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v21.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
      UnityEngine_Object__DestroyImmediate_70154432((UnityEngine_Object_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v18 = this->fields.objList;
  if ( !v18 )
LABEL_16:
    sub_1BCAA3C(objList, method);
  size = v18->fields._size;
  v20 = v18->fields._version + 1;
  v18->fields._size = 0;
  v18->fields._version = v20;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v18->fields._items, 0, size, 0LL);
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
  __int64 v9; // x2
  UnityEngine_GameObject_o *v10; // x20
  __int64 v11; // x1
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

  if ( (byte_4B13C2A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924664, prefab, root);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    byte_4B13C2A = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, prefab);
  v10 = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)prefab, 0LL, 0LL) )
  {
    v23.fields.x = 0.0;
    v23.fields.y = 0.0;
    v23.fields.z = 0.0;
    v28 = UnityEngine_Quaternion__Internal_FromEulerRad(v23, 0LL);
    x = v28.fields.x;
    y = v28.fields.y;
    z = v28.fields.z;
    w = v28.fields.w;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    v24.fields.x = 0.0;
    v24.fields.y = 0.0;
    v24.fields.z = 0.0;
    v29.fields.x = x;
    v29.fields.y = y;
    v29.fields.z = z;
    v29.fields.w = w;
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__49904120(
                                              (Il2CppObject *)prefab,
                                              v24,
                                              v29,
                                              (const MethodInfo_2F979F8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924664);
    if ( !transform )
      goto LABEL_18;
    v10 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_18;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, root, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
    if ( !transform )
      goto LABEL_18;
    v25.fields.x = 0.0;
    v25.fields.y = 0.0;
    v25.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v25, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
    if ( !transform )
      goto LABEL_18;
    v26.fields.x = 0.0;
    v26.fields.y = 0.0;
    v26.fields.z = 0.0;
    UnityEngine_Transform__set_eulerAngles((UnityEngine_Transform_o *)transform, v26, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
    if ( !transform )
      goto LABEL_18;
    v27.fields.x = 1.0;
    v27.fields.y = 1.0;
    v27.fields.z = 1.0;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v27, 0LL);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)pos, 0LL, 0LL) )
    {
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
      if ( pos )
      {
        v18 = (UnityEngine_Transform_o *)transform;
        *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Transform__get_position(pos, 0LL);
        if ( v18 )
        {
          UnityEngine_Transform__set_position(v18, *(UnityEngine_Vector3_o *)&v19, 0LL);
          return v10;
        }
      }
LABEL_18:
      sub_1BCAA3C(transform, v17);
    }
  }
  return v10;
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
    sub_1BCAA3C(partyBuffLabelSprite, flag);
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
  __int64 v6; // x2
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x4
  int v9; // w22
  __int64 v10; // x1
  UnityEngine_Object_o *Object; // x21
  System_Collections_Generic_List_object__o *objList; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x8
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B13C28 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, *(_QWORD *)&level, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B13C28 = 1;
  }
  WarBoardServantPiecePartyBuffComponent__SetActive(this, 1, method);
  if ( level >= 1 )
  {
    v9 = 0;
    do
    {
      Object = (UnityEngine_Object_o *)WarBoardServantPiecePartyBuffComponent__CreateObject(
                                         (WarBoardServantPiecePartyBuffComponent_o *)v7,
                                         this->fields.arrowClone,
                                         this->fields.listTransform,
                                         0LL,
                                         v8);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      v7 = UnityEngine_Object__op_Equality(Object, 0LL, 0LL);
      if ( !v7 )
      {
        v24.fields.x = this->fields.addPos.fields.x * (float)v9;
        v24.fields.y = this->fields.addPos.fields.y * (float)v9;
        v24.fields.z = 0.0;
        GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)Object, v24, 0LL);
        if ( !Object
          || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Object, 1, 0LL),
              (objList = (System_Collections_Generic_List_object__o *)this->fields.objList) == 0LL)
          || (items = objList->fields._items,
              v21 = Method_System_Collections_Generic_List_GameObject__Add__,
              ++objList->fields._version,
              !items) )
        {
          sub_1BCAA3C(objList, v13);
        }
        size = objList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            objList,
            (Il2CppObject *)Object,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          objList->fields._size = size + 1;
          v23[4] = (Il2CppClass *)Object;
          sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 4), (int64_t)Object, v14, v15, v16, v17, v18, v19);
        }
      }
      ++v9;
    }
    while ( level != v9 );
  }
}