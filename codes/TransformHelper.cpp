int32_t __fastcall TransformHelper__CalcPriority(System_String_o *objName, const MethodInfo *method)
{
  System_String_o *v3; // x0
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BDDD8F & 1) == 0 )
  {
    sub_1C21E38(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_1C21E38(&StringLiteral_16243/*"[^0-9]"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDDD8F = 1;
  }
  result = 0;
  if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
  v3 = System_Text_RegularExpressions_Regex__Replace(
         objName,
         (System_String_o *)StringLiteral_16243/*"[^0-9]"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0LL);
  System_Int32__TryParse(v3, &result, 0LL);
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall TransformHelper__ChangeChildsLayer(
        UnityEngine_Transform_o *self,
        int32_t layer,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x20
  __int64 v5; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v11; // x8
  __int64 v12; // x9
  System_Collections_IEnumerator_c **v13; // x10
  __int64 v14; // x0
  UnityEngine_Transform_o *v15; // x0
  const MethodInfo *v16; // x2
  __int64 methodPtr_low; // x9
  __int64 v18; // x0
  __int64 v19; // x8
  __int64 v20; // x20
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0

  v4 = (UnityEngine_Component_o *)self;
  if ( (byte_4BDDD87 & 1) == 0 )
  {
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    self = (UnityEngine_Transform_o *)sub_1C21E38(&UnityEngine_Transform_TypeInfo);
    byte_4BDDD87 = 1;
  }
  if ( !v4 || (self = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v4, 0LL)) == 0LL )
LABEL_33:
    sub_1C22094(self, *(_QWORD *)&layer);
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)self, layer, 0LL);
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)v4, 0LL);
  if ( !Enumerator )
    sub_1C22094(0LL, v5);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v8 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v8;
        p_offset += 4;
        if ( !v8 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v11 = Enumerator->klass;
    v12 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v13 = (System_Collections_IEnumerator_c **)&v11->_1.interfaceOffsets->offset;
      while ( *(v13 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        v13 += 2;
        if ( !v12 )
          goto LABEL_17;
      }
      v14 = (__int64)&v11->vtable[*(_DWORD *)v13 + 1].method;
    }
    else
    {
LABEL_17:
      v14 = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v15 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v14)(
                                       Enumerator,
                                       *(_QWORD *)(v14 + 8));
    if ( v15 )
    {
      methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v15->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (UnityEngine_Transform_c *)v15->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_1C22354(v15);
        goto LABEL_33;
      }
    }
    TransformHelper__ChangeChildsLayer(v15, layer, v16);
  }
  v18 = sub_1C21F74(Enumerator, System_IDisposable_TypeInfo);
  if ( v18 )
  {
    v19 = *(_QWORD *)v18;
    v20 = v18;
    v21 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
    {
      v22 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_28;
      }
      v23 = v19 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_28:
      v23 = sub_1C73E18(v18, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v23)(v20, *(_QWORD *)(v23 + 8));
  }
  return layer;
}


void __fastcall TransformHelper__DestroyChildren(UnityEngine_Transform_o *self, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v11; // x8
  __int64 v12; // x9
  System_Collections_IEnumerator_c **v13; // x10
  __int64 v14; // x0
  UnityEngine_Component_o *v15; // x0
  __int64 v16; // x1
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *gameObject; // x20
  __int64 v19; // x0
  __int64 v20; // x8
  __int64 v21; // x19
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0

  if ( (byte_4BDDD88 & 1) == 0 )
  {
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&UnityEngine_Transform_TypeInfo);
    byte_4BDDD88 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( !self || (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)self, 0LL)) == 0LL )
      sub_1C22094(transform, v4);
    Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
    if ( !Enumerator )
      sub_1C22094(0LL, v5);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v8 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v8;
          p_offset += 4;
          if ( !v8 )
            goto LABEL_13;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_13:
        p_method = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v11 = Enumerator->klass;
      v12 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v13 = (System_Collections_IEnumerator_c **)&v11->_1.interfaceOffsets->offset;
        while ( *(v13 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v12;
          v13 += 2;
          if ( !v12 )
            goto LABEL_20;
        }
        v14 = (__int64)&v11->vtable[*(_DWORD *)v13 + 1].method;
      }
      else
      {
LABEL_20:
        v14 = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v15 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v14)(
                                         Enumerator,
                                         *(_QWORD *)(v14 + 8));
      if ( !v15 )
        goto LABEL_38;
      methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v15->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (UnityEngine_Transform_c *)v15->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_1C22354(v15);
LABEL_38:
        sub_1C22094(v15, v16);
      }
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v15, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
    }
    v19 = sub_1C21F74(Enumerator, System_IDisposable_TypeInfo);
    if ( v19 )
    {
      v20 = *(_QWORD *)v19;
      v21 = v19;
      v22 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
      {
        v23 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
        {
          --v22;
          v23 += 4;
          if ( !v22 )
            goto LABEL_33;
        }
        v24 = v20 + 16LL * *v23 + 312;
      }
      else
      {
LABEL_33:
        v24 = sub_1C73E18(v19, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v24)(v21, *(_QWORD *)(v24 + 8));
    }
  }
}


bool __fastcall TransformHelper__ExistNodeFromLvName(
        UnityEngine_Transform_o *self,
        System_String_o *nodename,
        int32_t level,
        bool useNewRule,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x6
  UnityEngine_Object_o *NodeFromLvName; // x19

  if ( (byte_4BDDD8A & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDDD8A = 1;
  }
  if ( System_String__IsNullOrEmpty(nodename, 0LL) )
    return 0;
  NodeFromLvName = (UnityEngine_Object_o *)TransformHelper__executeGetNodeFromLvName(
                                             self,
                                             nodename,
                                             level,
                                             0,
                                             useNewRule,
                                             1,
                                             v9);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(NodeFromLvName, 0LL, 0LL);
}


UnityEngine_Transform_array *__fastcall TransformHelper__GetIgnoreNodeList(
        UnityEngine_Transform_o *parentTransform,
        System_String_o *nodename,
        bool includeInactive,
        bool useNewRule,
        bool isIgnore,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v10; // x20
  System_Object_array *ComponentsInChildren_object; // x21
  System_Collections_Generic_List_object__o *v12; // x22
  __int64 v13; // x8
  unsigned __int64 v14; // x26
  Il2CppObject **m_Items; // x27
  bool v16; // w23
  bool v17; // w24
  UnityEngine_Object_o *v18; // x25
  Il2CppObject *Component_object; // x25
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v21; // x6
  UnityEngine_Object_o *NodeFromLvName; // x25
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  v10 = (UnityEngine_Component_o *)parentTransform;
  if ( (byte_4BDDD8D & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_BattleActorControl___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponentsInChildren_Transform____77649064);
    sub_1C21E38(&Method_System_Collections_Generic_List_Transform__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Transform__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Transform___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_Transform__TypeInfo);
    parentTransform = (UnityEngine_Transform_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDDD8D = 1;
  }
  if ( !isIgnore )
    return 0LL;
  if ( !v10 )
    goto LABEL_31;
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  v10,
                                  1,
                                  (const MethodInfo_2FA7394 *)Method_UnityEngine_Component_GetComponentsInChildren_Transform____77649064);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_Transform___ctor__);
  if ( !ComponentsInChildren_object )
    goto LABEL_31;
  v13 = *(_QWORD *)&ComponentsInChildren_object->max_length;
  if ( (int)v13 >= 1 )
  {
    v14 = 0LL;
    m_Items = ComponentsInChildren_object->m_Items;
    v16 = includeInactive;
    v17 = useNewRule;
    do
    {
      if ( v14 >= (unsigned int)v13 )
LABEL_30:
        sub_1C2209C(parentTransform, nodename);
      v18 = (UnityEngine_Object_o *)m_Items[v14];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      parentTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(
                                                     (UnityEngine_Object_o *)v10,
                                                     v18,
                                                     0LL);
      if ( ((unsigned __int8)parentTransform & 1) == 0 )
      {
        if ( v14 >= ComponentsInChildren_object->max_length )
          goto LABEL_30;
        parentTransform = (UnityEngine_Transform_o *)m_Items[v14];
        if ( !parentTransform )
          goto LABEL_31;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)parentTransform,
                             (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_BattleActorControl___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        parentTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                                       (UnityEngine_Object_o *)Component_object,
                                                       0LL,
                                                       0LL);
        if ( ((unsigned __int8)parentTransform & 1) != 0 )
        {
          if ( !Component_object )
            goto LABEL_31;
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0LL);
          NodeFromLvName = (UnityEngine_Object_o *)TransformHelper__executeGetNodeFromLvName(
                                                     transform,
                                                     nodename,
                                                     -1,
                                                     v16,
                                                     v17,
                                                     0,
                                                     v21);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          parentTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(NodeFromLvName, 0LL, 0LL);
          if ( ((unsigned __int8)parentTransform & 1) == 0 )
          {
            if ( !v12 )
              goto LABEL_31;
            items = v12->fields._items;
            v30 = Method_System_Collections_Generic_List_Transform__Add__;
            ++v12->fields._version;
            if ( !items )
              goto LABEL_31;
            size = v12->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v12,
                (Il2CppObject *)NodeFromLvName,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
            }
            else
            {
              v32 = &items->obj.klass + size;
              v12->fields._size = size + 1;
              v32[4] = (Il2CppClass *)NodeFromLvName;
              sub_1C21DDC(
                (PartyOrganizationUtility_o *)(v32 + 4),
                (int64_t)NodeFromLvName,
                v23,
                v24,
                v25,
                v26,
                v27,
                v28);
            }
          }
        }
      }
      LODWORD(v13) = ComponentsInChildren_object->max_length;
    }
    while ( (__int64)++v14 < (int)v13 );
  }
  if ( !v12 )
LABEL_31:
    sub_1C22094(parentTransform, nodename);
  return (UnityEngine_Transform_array *)System_Collections_Generic_List_object___ToArray(
                                          v12,
                                          (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_Transform__ToArray__);
}


bool __fastcall TransformHelper__SafeSetParentNonNull(
        UnityEngine_Transform_o *self,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  float v11; // s11
  float v12; // s12
  float v13; // s13
  float w; // s14
  float v15; // s15
  UnityEngine_GameObject_o *v16; // x20
  float v17; // [xsp+48h] [xbp-28h]
  float v18; // [xsp+4Ch] [xbp-24h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BDDD89 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDDD89 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0LL, 0LL) )
    return 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
    return 0;
  if ( !self )
    goto LABEL_15;
  localPosition = UnityEngine_Transform__get_localPosition(self, 0LL);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  localRotation = UnityEngine_Transform__get_localRotation(self, 0LL);
  v11 = localRotation.fields.x;
  v12 = localRotation.fields.y;
  v13 = localRotation.fields.z;
  w = localRotation.fields.w;
  localScale = UnityEngine_Transform__get_localScale(self, 0LL);
  v15 = localScale.fields.x;
  v17 = localScale.fields.z;
  v18 = localScale.fields.y;
  UnityEngine_Transform__set_parent(self, parent, 0LL);
  v21.fields.x = x;
  v21.fields.y = y;
  v21.fields.z = z;
  UnityEngine_Transform__set_localPosition(self, v21, 0LL);
  v24.fields.x = v11;
  v24.fields.y = v12;
  v24.fields.z = v13;
  v24.fields.w = w;
  UnityEngine_Transform__set_localRotation(self, v24, 0LL);
  v22.fields.z = v17;
  v22.fields.y = v18;
  v22.fields.x = v15;
  UnityEngine_Transform__set_localScale(self, v22, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)self, 0LL);
  if ( !parent
    || (v16 = gameObject,
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)parent, 0LL)) == 0LL)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(gameObject, 0LL), !v16) )
  {
LABEL_15:
    sub_1C22094(gameObject, v6);
  }
  UnityEngine_GameObject__set_layer(v16, (int32_t)gameObject, 0LL);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Transform_o *__fastcall TransformHelper__SelectNodeWithRule(
        System_Collections_Generic_List_Transform__o *tNode,
        bool useNewRule,
        const MethodInfo *method)
{
  System_Collections_Generic_List_Transform__o *v4; // x20
  int32_t v5; // w22
  Il2CppObject *v6; // x21
  float v7; // s8
  UnityEngine_Object_o *v8; // x19
  _BOOL8 v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x0
  __int64 v12; // x1
  _BOOL8 v13; // x0
  __int64 v14; // x1
  System_String_o *v15; // x0
  __int64 v16; // x1
  System_String_o *v17; // x0
  const MethodInfo *v18; // x1
  float v19; // s9
  System_String_o *v20; // x0
  const MethodInfo *v21; // x1
  float z; // s8
  _BOOL8 v23; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x20
  System_String_o *name; // x0
  __int64 v27; // x1
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  v4 = tNode;
  if ( (byte_4BDDD90 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_Transform__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_Transform__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Transform__GetEnumerator__);
    tNode = (System_Collections_Generic_List_Transform__o *)sub_1C21E38(&StringLiteral_117/*" "*/);
    byte_4BDDD90 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  if ( !useNewRule )
  {
    v8 = 0LL;
    z = -100.0;
    if ( v4 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v29,
        (System_Collections_Generic_List_object__o *)v4,
        (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_Transform__GetEnumerator__);
      v30 = v29;
      while ( 1 )
      {
        v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v30,
                (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext__);
        if ( !v23 )
          break;
        current = v30.fields._current;
        if ( !v30.fields._current )
          sub_1C22094(v23, v24);
        lossyScale = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)v30.fields._current, 0LL);
        if ( lossyScale.fields.z > z )
        {
          v36 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)current, 0LL);
          z = v36.fields.z;
          v8 = (UnityEngine_Object_o *)current;
        }
        else
        {
          v35 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)current, 0LL);
          if ( v35.fields.z == z )
          {
            name = UnityEngine_Object__get_name((UnityEngine_Object_o *)current, 0LL);
            if ( !name )
              sub_1C22094(0LL, v27);
            if ( !System_String__Contains(name, (System_String_o *)StringLiteral_117/*" "*/, 0LL) )
              v8 = (UnityEngine_Object_o *)current;
          }
        }
      }
      goto LABEL_31;
    }
LABEL_35:
    sub_1C22094(tNode, useNewRule);
  }
  if ( !v4 )
    goto LABEL_35;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)v4,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_Transform__GetEnumerator__);
  v5 = 0;
  v6 = 0LL;
  v7 = -100.0;
  v30 = v29;
LABEL_6:
  v8 = (UnityEngine_Object_o *)v6;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v30,
           (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext__);
    if ( !v9 )
      break;
    v6 = v30.fields._current;
    if ( !v30.fields._current )
      sub_1C22094(v9, v10);
    v31 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)v30.fields._current, 0LL);
    if ( v31.fields.z > v7 )
    {
      v33 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)v6, 0LL);
      v19 = v33.fields.z;
      v20 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v6, 0LL);
      v5 = TransformHelper__CalcPriority(v20, v21);
      v7 = v19;
      goto LABEL_6;
    }
    v32 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)v6, 0LL);
    if ( v32.fields.z == v7 )
    {
      v11 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v6, 0LL);
      if ( !v11 )
        sub_1C22094(0LL, v12);
      v13 = System_String__Contains(v11, (System_String_o *)StringLiteral_117/*" "*/, 0LL);
      if ( v13 )
      {
        if ( !v8 )
          sub_1C22094(v13, v14);
        v15 = UnityEngine_Object__get_name(v8, 0LL);
        if ( !v15 )
          sub_1C22094(0LL, v16);
        if ( System_String__Contains(v15, (System_String_o *)StringLiteral_117/*" "*/, 0LL) )
        {
          v17 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v6, 0LL);
          if ( v5 > TransformHelper__CalcPriority(v17, v18) )
            v6 = (Il2CppObject *)v8;
        }
        goto LABEL_6;
      }
    }
  }
LABEL_31:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_Transform__Dispose__);
  return (UnityEngine_Transform_o *)v8;
}


void __fastcall TransformHelper__SetLocalPositionX(
        UnityEngine_Transform_o *self,
        float value,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDDD91 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDDD91 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !self )
      sub_1C22094(v5, v6);
    localPosition = UnityEngine_Transform__get_localPosition(self, 0LL);
    localPosition.fields.x = value;
    UnityEngine_Transform__set_localPosition(self, localPosition, 0LL);
  }
}


void __fastcall TransformHelper__SetLocalPositionY(
        UnityEngine_Transform_o *self,
        float value,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDDD92 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDDD92 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !self )
      sub_1C22094(v5, v6);
    localPosition = UnityEngine_Transform__get_localPosition(self, 0LL);
    localPosition.fields.y = value;
    UnityEngine_Transform__set_localPosition(self, localPosition, 0LL);
  }
}


void __fastcall TransformHelper__SetLocalPositionZ(
        UnityEngine_Transform_o *self,
        float value,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDDD93 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDDD93 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !self )
      sub_1C22094(v5, v6);
    localPosition = UnityEngine_Transform__get_localPosition(self, 0LL);
    localPosition.fields.z = value;
    UnityEngine_Transform__set_localPosition(self, localPosition, 0LL);
  }
}


UnityEngine_Transform_o *__fastcall TransformHelper__executeGetNodeFromLvName(
        UnityEngine_Transform_o *self,
        System_String_o *nodename,
        int32_t level,
        bool includeInactive,
        bool useNewRule,
        bool isIgnore,
        const MethodInfo *method)
{
  __int64 v11; // x23
  __int64 v12; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_String_o *v20; // x0
  UnityEngine_Transform_o *v21; // x20
  Il2CppObject *Component_object; // x24
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_object; // x24
  System_Func_object__bool__o *v24; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x24
  const MethodInfo *v26; // x5
  UnityEngine_Transform_array *IgnoreNodeList; // x26
  System_Collections_Generic_List_object__o *v28; // x23
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  __int64 v30; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v33; // x1
  __int64 v34; // x24
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  __int64 v43; // x0
  __int64 v44; // x1
  UnityEngine_Component_o *v45; // x27
  __int64 v46; // x29
  UnityEngine_Object_o *gameObject; // x0
  __int64 v48; // x1
  __int64 InstanceID; // x0
  __int64 v50; // x1
  int v51; // w28
  UnityEngine_Component_o *v52; // x0
  UnityEngine_Object_o *v53; // x0
  __int64 v54; // x1
  System_String_o *name; // x0
  __int64 v56; // x1
  _BOOL8 v57; // x0
  __int64 v58; // x1
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  System_String_o *v65; // x0
  __int64 v66; // x1
  int32_t v67; // w28
  System_String_o *v68; // x0
  __int64 v69; // x1
  System_String_o *v70; // x0
  __int64 v71; // x1
  System_String_o *v72; // x28
  int32_t v73; // w2
  __int64 v74; // x1
  System_String_array *v75; // x0
  __int64 v76; // x1
  System_String_array *v77; // x28
  __int64 v78; // x8
  unsigned __int64 v79; // x21
  System_String_o *v80; // x29
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  struct System_Object_array *v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  Il2CppClass **v90; // x0
  struct System_Object_array *items; // x8
  _QWORD *v92; // x9
  __int64 size; // x10
  Il2CppClass **v94; // x0
  __int64 v95; // x8
  __int64 v96; // x9
  int *v97; // x10
  __int64 v98; // x0
  const MethodInfo *v99; // x2
  System_Collections_Generic_List_Transform__o *v100; // x0
  UnityEngine_Transform_o *v101; // x21
  bool v103; // [xsp+Ch] [xbp-84h]
  System_Collections_Generic_List_object__o *v104; // [xsp+10h] [xbp-80h]
  int32_t result; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4BDDD8C & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_BattleActorControl___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponentsInChildren_Transform____77649064);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_Transform___);
    sub_1C21E38(&System_Func_Transform__bool__TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerable_Transform__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_Transform__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Transform__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Transform___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Transform__get_Count__);
    sub_1C21E38(&System_Collections_Generic_List_Transform__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_TransformHelper___c__DisplayClass5_0__executeGetNodeFromLvName_b__0__);
    sub_1C21E38(&TransformHelper___c__DisplayClass5_0_TypeInfo);
    sub_1C21E38(&StringLiteral_117/*" "*/);
    sub_1C21E38(&StringLiteral_16831/*"_level"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDDD8C = 1;
  }
  result = 0;
  v11 = sub_1C22084(TransformHelper___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_100;
  *(_QWORD *)(v11 + 16) = nodename;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)nodename, v14, v15, v16, v17, v18, v19);
  v20 = *(System_String_o **)(v11 + 16);
  v21 = self;
  if ( !v20 )
    return v21;
  v12 = System_String__Equals_63123792(v20, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( (v12 & 1) != 0 )
    return v21;
  if ( !self )
    goto LABEL_100;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)self,
                       (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( level == -1 && (v12 & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_100;
    level = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)Component_object, 0LL) + 1;
  }
  ComponentsInChildren_object = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                                                       (UnityEngine_Component_o *)self,
                                                                                       includeInactive,
                                                                                       (const MethodInfo_2FA7394 *)Method_UnityEngine_Component_GetComponentsInChildren_Transform____77649064);
  v24 = (System_Func_object__bool__o *)sub_1C22084(System_Func_Transform__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v24,
    (Il2CppObject *)v11,
    Method_TransformHelper___c__DisplayClass5_0__executeGetNodeFromLvName_b__0__,
    0LL);
  v25 = System_Linq_Enumerable__Where_object_(
          ComponentsInChildren_object,
          (System_Func_TSource__bool__o *)v24,
          (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_Transform___);
  IgnoreNodeList = TransformHelper__GetIgnoreNodeList(
                     self,
                     *(System_String_o **)(v11 + 16),
                     includeInactive,
                     useNewRule,
                     isIgnore,
                     v26);
  v104 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v104,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_Transform___ctor__);
  v28 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_Transform___ctor__);
  if ( !v25 )
    goto LABEL_100;
  klass = v25->klass;
  v30 = *(unsigned __int16 *)(&v25->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v25->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      --v30;
      p_offset += 4;
      if ( !v30 )
        goto LABEL_18;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_18:
    p_method = sub_1C73E18(v25, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0LL);
  }
  v103 = includeInactive;
  v34 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v25,
          *(_QWORD *)(p_method + 8));
  if ( !v34 )
    sub_1C22094(0LL, v33);
  while ( 1 )
  {
LABEL_21:
    v35 = *(_QWORD *)v34;
    v36 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
    {
      v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v37 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_25;
      }
      v38 = v35 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_25:
      v38 = sub_1C73E18(v34, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v34, *(_QWORD *)(v38 + 8)) & 1) == 0 )
      break;
    v39 = *(_QWORD *)v34;
    v40 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
    {
      v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v41 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_32;
      }
      v42 = v39 + 16LL * *v41 + 312;
    }
    else
    {
LABEL_32:
      v42 = sub_1C73E18(v34, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0LL);
    }
    v43 = (*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v34, *(_QWORD *)(v42 + 8));
    v45 = (UnityEngine_Component_o *)v43;
    if ( IgnoreNodeList && (int)IgnoreNodeList->max_length >= 1 )
    {
      if ( !v43 )
        sub_1C22094(0LL, v44);
      v46 = 0LL;
      while ( 1 )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v45, 0LL);
        if ( !gameObject )
          sub_1C22094(0LL, v48);
        InstanceID = UnityEngine_Object__GetInstanceID(gameObject, 0LL);
        if ( (unsigned int)v46 >= IgnoreNodeList->max_length )
          sub_1C2209C(InstanceID, v50);
        v51 = InstanceID;
        v52 = (UnityEngine_Component_o *)IgnoreNodeList->m_Items[v46];
        if ( !v52 )
          sub_1C22094(0LL, v50);
        v53 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v52, 0LL);
        if ( !v53 )
          sub_1C22094(0LL, v54);
        v43 = UnityEngine_Object__GetInstanceID(v53, 0LL);
        if ( v51 == (_DWORD)v43 )
          break;
        if ( (int)++v46 >= (signed int)IgnoreNodeList->max_length )
          goto LABEL_44;
      }
    }
    else
    {
LABEL_44:
      if ( !v45 )
        sub_1C22094(v43, v44);
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v45, 0LL);
      if ( !name )
        sub_1C22094(0LL, v56);
      v57 = System_String__Contains(name, (System_String_o *)StringLiteral_16831/*"_level"*/, 0LL);
      if ( v57 )
      {
        v65 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v45, 0LL);
        if ( !v65 )
          sub_1C22094(0LL, v66);
        v67 = System_String__IndexOf_63147052(v65, (System_String_o *)StringLiteral_16831/*"_level"*/, 0LL);
        v68 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v45, 0LL);
        if ( !v68 )
          sub_1C22094(0LL, v69);
        v70 = System_String__Substring(v68, v67 + 7, 0LL);
        v72 = v70;
        if ( !v70 )
          sub_1C22094(0LL, v71);
        if ( (System_String__IndexOf_63147052(v70, (System_String_o *)StringLiteral_117/*" "*/, 0LL) & 0x80000000) == 0 )
        {
          v73 = System_String__IndexOf_63147052(v72, (System_String_o *)StringLiteral_117/*" "*/, 0LL);
          v72 = System_String__Substring_63134480(v72, 0, v73, 0LL);
          if ( !v72 )
            sub_1C22094(0LL, v74);
        }
        v75 = System_String__Split(v72, 0x5Fu, 0, 0LL);
        v77 = v75;
        if ( !v75 )
          sub_1C22094(0LL, v76);
        v78 = *(_QWORD *)&v75->max_length;
        if ( (int)v78 >= 1 )
        {
          v79 = 0LL;
          while ( 1 )
          {
            if ( v79 >= (unsigned int)v78 )
              sub_1C2209C(v75, v76);
            v80 = v77->m_Items[v79];
            result = 99;
            v75 = (System_String_array *)System_Int32__TryParse(v80, &result, 0LL);
            if ( ((unsigned __int8)v75 & 1) != 0 )
            {
              v75 = (System_String_array *)System_Int32__Parse(v80, 0LL);
              if ( (_DWORD)v75 == level )
                break;
            }
            LODWORD(v78) = v77->max_length;
            if ( (__int64)++v79 >= (int)v78 )
              goto LABEL_21;
          }
          if ( !v104 )
            sub_1C22094(v75, v76);
          items = v104->fields._items;
          v92 = Method_System_Collections_Generic_List_Transform__Add__;
          ++v104->fields._version;
          if ( !items )
            sub_1C22094(v75, v76);
          size = v104->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v104,
              (Il2CppObject *)v45,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
          }
          else
          {
            v94 = &items->obj.klass + size;
            v104->fields._size = size + 1;
            v94[4] = (Il2CppClass *)v45;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v94 + 4), (int64_t)v45, v81, v82, v83, v84, v85, v86);
          }
        }
      }
      else
      {
        if ( !v28 )
          sub_1C22094(v57, v58);
        v87 = v28->fields._items;
        v88 = Method_System_Collections_Generic_List_Transform__Add__;
        ++v28->fields._version;
        if ( !v87 )
          sub_1C22094(v57, v58);
        v89 = v28->fields._size;
        if ( (unsigned int)v89 >= v87->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v28,
            (Il2CppObject *)v45,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
        }
        else
        {
          v90 = &v87->obj.klass + v89;
          v28->fields._size = v89 + 1;
          v90[4] = (Il2CppClass *)v45;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v90 + 4), (int64_t)v45, v59, v60, v61, v62, v63, v64);
        }
      }
    }
  }
  v21 = self;
  v95 = *(_QWORD *)v34;
  v96 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
  {
    v97 = (int *)(*(_QWORD *)(v95 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v97 - 1) != System_IDisposable_TypeInfo )
    {
      --v96;
      v97 += 4;
      if ( !v96 )
        goto LABEL_74;
    }
    v98 = v95 + 16LL * *v97 + 312;
  }
  else
  {
LABEL_74:
    v98 = sub_1C73E18(v34, System_IDisposable_TypeInfo, 0LL);
  }
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))v98)(v34, *(_QWORD *)(v98 + 8));
  if ( !v104 )
LABEL_100:
    sub_1C22094(v12, v13);
  if ( v104->fields._size >= 1 )
    v100 = (System_Collections_Generic_List_Transform__o *)v104;
  else
    v100 = (System_Collections_Generic_List_Transform__o *)v28;
  v101 = TransformHelper__SelectNodeWithRule(v100, useNewRule, v99);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v101, 0LL, 0LL) || !v103 )
    return v101;
  return v21;
}


UnityEngine_Transform_o *__fastcall TransformHelper__getNodeFromLvName(
        UnityEngine_Transform_o *self,
        System_String_o *nodename,
        int32_t level,
        bool useNewRule,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6
  UnityEngine_Transform_o *NodeFromLvName; // x23
  const MethodInfo *v11; // x6

  if ( (byte_4BDDD8B & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDDD8B = 1;
  }
  NodeFromLvName = TransformHelper__executeGetNodeFromLvName(self, nodename, level, 0, useNewRule, 1, v5);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)NodeFromLvName, 0LL, 0LL) )
    return TransformHelper__executeGetNodeFromLvName(self, nodename, level, 1, useNewRule, 1, v11);
  else
    return NodeFromLvName;
}


UnityEngine_Transform_o *__fastcall TransformHelper__getNodeFromName(
        UnityEngine_Transform_o *self,
        System_String_o *nodename,
        bool includeInactive,
        const MethodInfo *method)
{
  __int64 v7; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_object; // x19
  System_Func_object__bool__o *v17; // x20
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x19
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x19
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  UnityEngine_Transform_o *v34; // x21
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0

  if ( (byte_4BDDD8E & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponentsInChildren_Transform____77649064);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_Transform___);
    sub_1C21E38(&System_Func_Transform__bool__TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerable_Transform__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_Transform__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&Method_TransformHelper___c__DisplayClass7_0__getNodeFromName_b__0__);
    sub_1C21E38(&TransformHelper___c__DisplayClass7_0_TypeInfo);
    byte_4BDDD8E = 1;
  }
  v7 = sub_1C22084(TransformHelper___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = nodename,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)nodename, v10, v11, v12, v13, v14, v15),
        !self)
    || (ComponentsInChildren_object = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                                                             (UnityEngine_Component_o *)self,
                                                                                             includeInactive,
                                                                                             (const MethodInfo_2FA7394 *)Method_UnityEngine_Component_GetComponentsInChildren_Transform____77649064),
        v17 = (System_Func_object__bool__o *)sub_1C22084(System_Func_Transform__bool__TypeInfo),
        System_Func_object__bool____ctor(
          v17,
          (Il2CppObject *)v7,
          Method_TransformHelper___c__DisplayClass7_0__getNodeFromName_b__0__,
          0LL),
        (v8 = System_Linq_Enumerable__Where_object_(
                ComponentsInChildren_object,
                (System_Func_TSource__bool__o *)v17,
                (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_Transform___)) == 0LL) )
  {
    sub_1C22094(v8, v9);
  }
  klass = v8->klass;
  v19 = v8;
  v20 = *(unsigned __int16 *)(&v8->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v8->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      --v20;
      p_offset += 4;
      if ( !v20 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1C73E18(v8, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0LL);
  }
  v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v19,
          *(_QWORD *)(p_method + 8));
  v25 = v23;
  if ( !v23 )
    sub_1C22094(0LL, v24);
  v26 = *(_QWORD *)v23;
  v27 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
  {
    v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
    while ( *((System_Collections_IEnumerator_c **)v28 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_17;
    }
    v29 = v26 + 16LL * *v28 + 312;
  }
  else
  {
LABEL_17:
    v29 = sub_1C73E18(v23, System_Collections_IEnumerator_TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v25, *(_QWORD *)(v29 + 8)) & 1) == 0 )
  {
    v34 = 0LL;
    if ( !v25 )
      return v34;
    goto LABEL_29;
  }
  v30 = *(_QWORD *)v25;
  v31 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
  {
    v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v32 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_24;
    }
    v33 = v30 + 16LL * *v32 + 312;
  }
  else
  {
LABEL_24:
    v33 = sub_1C73E18(v25, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0LL);
  }
  v34 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v25, *(_QWORD *)(v33 + 8));
  if ( v25 )
  {
LABEL_29:
    v35 = *(_QWORD *)v25;
    v36 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
    {
      v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_33;
      }
      v38 = v35 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_33:
      v38 = sub_1C73E18(v25, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v38)(v25, *(_QWORD *)(v38 + 8));
  }
  return v34;
}


void __fastcall TransformHelper___c__DisplayClass5_0___ctor(
        TransformHelper___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall TransformHelper___c__DisplayClass5_0___executeGetNodeFromLvName_b__0(
        TransformHelper___c__DisplayClass5_0_o *this,
        UnityEngine_Transform_o *p,
        const MethodInfo *method)
{
  TransformHelper___c__DisplayClass5_0_o *v3; // x19

  if ( !p
    || (v3 = this,
        (this = (TransformHelper___c__DisplayClass5_0_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)p,
                                                            0LL)) == 0LL)
    || (this = (TransformHelper___c__DisplayClass5_0_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL)) == 0LL )
  {
    sub_1C22094(this, p);
  }
  return System_String__Contains((System_String_o *)this, v3->fields.nodename, 0LL);
}


void __fastcall TransformHelper___c__DisplayClass7_0___ctor(
        TransformHelper___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall TransformHelper___c__DisplayClass7_0___getNodeFromName_b__0(
        TransformHelper___c__DisplayClass7_0_o *this,
        UnityEngine_Transform_o *p,
        const MethodInfo *method)
{
  TransformHelper___c__DisplayClass7_0_o *v3; // x19

  if ( !p
    || (v3 = this,
        (this = (TransformHelper___c__DisplayClass7_0_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)p,
                                                            0LL)) == 0LL)
    || (this = (TransformHelper___c__DisplayClass7_0_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL)) == 0LL )
  {
    sub_1C22094(this, p);
  }
  return System_String__Equals_63123792((System_String_o *)this, v3->fields.nodename, 0LL);
}