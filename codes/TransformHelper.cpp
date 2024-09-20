int32_t __fastcall TransformHelper__CalcPriority(System_String_o *objName, const MethodInfo *method)
{
  System_String_o *v3; // x0
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5C8F4 & 1) == 0 )
  {
    sub_1B885B0(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_1B885B0(&StringLiteral_15968/*"[^0-9]"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C8F4 = 1;
  }
  result = 0;
  if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
  v3 = System_Text_RegularExpressions_Regex__Replace(
         objName,
         (System_String_o *)StringLiteral_15968/*"[^0-9]"*/,
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
  if ( (byte_4A5C8EC & 1) == 0 )
  {
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    self = (UnityEngine_Transform_o *)sub_1B885B0(&UnityEngine_Transform_TypeInfo);
    byte_4A5C8EC = 1;
  }
  if ( !v4 || (self = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v4, 0LL)) == 0LL )
LABEL_33:
    sub_1B8880C(self, *(_QWORD *)&layer);
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)self, layer, 0LL);
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)v4, 0LL);
  if ( !Enumerator )
    sub_1B8880C(0LL, v5);
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
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v14 = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
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
        sub_1B88ACC(v15);
        goto LABEL_33;
      }
    }
    TransformHelper__ChangeChildsLayer(v15, layer, v16);
  }
  v18 = sub_1B886EC(Enumerator, System_IDisposable_TypeInfo);
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
      v23 = sub_1BDA590(v18, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v23)(v20, *(_QWORD *)(v23 + 8));
  }
  return layer;
}


void __fastcall TransformHelper__DestroyChildren(UnityEngine_Transform_o *self, const MethodInfo *method)
{
  UnityEngine_Component_o *v2; // x19
  __int64 v3; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v9; // x8
  __int64 v10; // x9
  System_Collections_IEnumerator_c **v11; // x10
  __int64 v12; // x0
  UnityEngine_Component_o *v13; // x0
  __int64 v14; // x1
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *gameObject; // x20
  __int64 v17; // x0
  __int64 v18; // x8
  __int64 v19; // x19
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0

  v2 = (UnityEngine_Component_o *)self;
  if ( (byte_4A5C8ED & 1) == 0 )
  {
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    self = (UnityEngine_Transform_o *)sub_1B885B0(&UnityEngine_Transform_TypeInfo);
    byte_4A5C8ED = 1;
  }
  if ( !v2 || (self = UnityEngine_Component__get_transform(v2, 0LL)) == 0LL )
    sub_1B8880C(self, method);
  Enumerator = UnityEngine_Transform__GetEnumerator(self, 0LL);
  if ( !Enumerator )
    sub_1B8880C(0LL, v3);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v6 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v6;
        p_offset += 4;
        if ( !v6 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v9 = Enumerator->klass;
    v10 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v11 = (System_Collections_IEnumerator_c **)&v9->_1.interfaceOffsets->offset;
      while ( *(v11 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        v11 += 2;
        if ( !v10 )
          goto LABEL_17;
      }
      v12 = (__int64)&v9->vtable[*(_DWORD *)v11 + 1].method;
    }
    else
    {
LABEL_17:
      v12 = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v13 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v12)(
                                       Enumerator,
                                       *(_QWORD *)(v12 + 8));
    if ( !v13 )
      goto LABEL_35;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v13->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v13->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1B88ACC(v13);
LABEL_35:
      sub_1B8880C(v13, v14);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v13, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
  }
  v17 = sub_1B886EC(Enumerator, System_IDisposable_TypeInfo);
  if ( v17 )
  {
    v18 = *(_QWORD *)v17;
    v19 = v17;
    v20 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
    {
      v21 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v21 - 1) != System_IDisposable_TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_30;
      }
      v22 = v18 + 16LL * *v21 + 312;
    }
    else
    {
LABEL_30:
      v22 = sub_1BDA590(v17, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v22)(v19, *(_QWORD *)(v22 + 8));
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

  if ( (byte_4A5C8EF & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5C8EF = 1;
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
  int32_t v23; // w2
  int32_t v24; // w3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0

  v10 = (UnityEngine_Component_o *)parentTransform;
  if ( (byte_4A5C8F2 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_BattleActorControl___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentsInChildren_Transform____76107608);
    sub_1B885B0(&Method_System_Collections_Generic_List_Transform__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Transform__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Transform___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_Transform__TypeInfo);
    parentTransform = (UnityEngine_Transform_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5C8F2 = 1;
  }
  if ( !isIgnore )
    return 0LL;
  if ( !v10 )
    goto LABEL_31;
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  v10,
                                  1,
                                  (const MethodInfo_2E76E98 *)Method_UnityEngine_Component_GetComponentsInChildren_Transform____76107608);
  v12 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_Transform___ctor__);
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
        sub_1B88814(parentTransform, nodename);
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
                             (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_BattleActorControl___);
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
            v26 = Method_System_Collections_Generic_List_Transform__Add__;
            ++v12->fields._version;
            if ( !items )
              goto LABEL_31;
            size = v12->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v12,
                (Il2CppObject *)NodeFromLvName,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
            }
            else
            {
              v28 = &items->obj.klass + size;
              v12->fields._size = size + 1;
              v28[4] = (Il2CppClass *)NodeFromLvName;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)NodeFromLvName, v23, v24);
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
    sub_1B8880C(parentTransform, nodename);
  return (UnityEngine_Transform_array *)System_Collections_Generic_List_object___ToArray(
                                          v12,
                                          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_Transform__ToArray__);
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

  if ( (byte_4A5C8EE & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5C8EE = 1;
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
    sub_1B8880C(gameObject, v6);
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
  if ( (byte_4A5C8F5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_Transform__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_Transform__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Transform__GetEnumerator__);
    tNode = (System_Collections_Generic_List_Transform__o *)sub_1B885B0(&StringLiteral_117/*" "*/);
    byte_4A5C8F5 = 1;
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
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_Transform__GetEnumerator__);
      v30 = v29;
      while ( 1 )
      {
        v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v30,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext__);
        if ( !v23 )
          break;
        current = v30.fields._current;
        if ( !v30.fields._current )
          sub_1B8880C(v23, v24);
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
              sub_1B8880C(0LL, v27);
            if ( !System_String__Contains(name, (System_String_o *)StringLiteral_117/*" "*/, 0LL) )
              v8 = (UnityEngine_Object_o *)current;
          }
        }
      }
      goto LABEL_31;
    }
LABEL_35:
    sub_1B8880C(tNode, useNewRule);
  }
  if ( !v4 )
    goto LABEL_35;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)v4,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_Transform__GetEnumerator__);
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
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext__);
    if ( !v9 )
      break;
    v6 = v30.fields._current;
    if ( !v30.fields._current )
      sub_1B8880C(v9, v10);
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
        sub_1B8880C(0LL, v12);
      v13 = System_String__Contains(v11, (System_String_o *)StringLiteral_117/*" "*/, 0LL);
      if ( v13 )
      {
        if ( !v8 )
          sub_1B8880C(v13, v14);
        v15 = UnityEngine_Object__get_name(v8, 0LL);
        if ( !v15 )
          sub_1B8880C(0LL, v16);
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
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_Transform__Dispose__);
  return (UnityEngine_Transform_o *)v8;
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
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x0
  UnityEngine_Transform_o *v17; // x20
  Il2CppObject *Component_object; // x24
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_object; // x24
  System_Func_object__bool__o *v20; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x24
  const MethodInfo *v22; // x5
  UnityEngine_Transform_array *IgnoreNodeList; // x26
  System_Collections_Generic_List_object__o *v24; // x23
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v29; // x1
  __int64 v30; // x24
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  __int64 v39; // x0
  __int64 v40; // x1
  UnityEngine_Component_o *v41; // x27
  __int64 v42; // x29
  UnityEngine_Object_o *gameObject; // x0
  __int64 v44; // x1
  __int64 InstanceID; // x0
  __int64 v46; // x1
  int v47; // w28
  UnityEngine_Component_o *v48; // x0
  UnityEngine_Object_o *v49; // x0
  __int64 v50; // x1
  System_String_o *name; // x0
  __int64 v52; // x1
  _BOOL8 v53; // x0
  __int64 v54; // x1
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x0
  __int64 v58; // x1
  int32_t v59; // w28
  System_String_o *v60; // x0
  __int64 v61; // x1
  System_String_o *v62; // x0
  __int64 v63; // x1
  System_String_o *v64; // x28
  int32_t v65; // w2
  __int64 v66; // x1
  System_String_array *v67; // x0
  __int64 v68; // x1
  System_String_array *v69; // x28
  __int64 v70; // x8
  unsigned __int64 v71; // x21
  System_String_o *v72; // x29
  int32_t v73; // w2
  int32_t v74; // w3
  struct System_Object_array *v75; // x8
  _QWORD *v76; // x9
  __int64 v77; // x10
  Il2CppClass **v78; // x0
  struct System_Object_array *items; // x8
  _QWORD *v80; // x9
  __int64 size; // x10
  Il2CppClass **v82; // x0
  __int64 v83; // x8
  __int64 v84; // x9
  int *v85; // x10
  __int64 v86; // x0
  const MethodInfo *v87; // x2
  System_Collections_Generic_List_Transform__o *v88; // x0
  UnityEngine_Transform_o *v89; // x21
  bool v91; // [xsp+Ch] [xbp-84h]
  System_Collections_Generic_List_object__o *v92; // [xsp+10h] [xbp-80h]
  int32_t result; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4A5C8F1 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_BattleActorControl___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentsInChildren_Transform____76107608);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_Transform___);
    sub_1B885B0(&System_Func_Transform__bool__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_Transform__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_Transform__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Transform__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Transform___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Transform__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_Transform__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_TransformHelper___c__DisplayClass5_0__executeGetNodeFromLvName_b__0__);
    sub_1B885B0(&TransformHelper___c__DisplayClass5_0_TypeInfo);
    sub_1B885B0(&StringLiteral_117/*" "*/);
    sub_1B885B0(&StringLiteral_16551/*"_level"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C8F1 = 1;
  }
  result = 0;
  v11 = sub_1B887FC(TransformHelper___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_100;
  *(_QWORD *)(v11 + 16) = nodename;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)nodename, v14, v15);
  v16 = *(System_String_o **)(v11 + 16);
  v17 = self;
  if ( !v16 )
    return v17;
  v12 = System_String__Equals_61715348(v16, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( (v12 & 1) != 0 )
    return v17;
  if ( !self )
    goto LABEL_100;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)self,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_BattleActorControl___);
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
                                                                                       (const MethodInfo_2E76E98 *)Method_UnityEngine_Component_GetComponentsInChildren_Transform____76107608);
  v20 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_Transform__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v20,
    (Il2CppObject *)v11,
    Method_TransformHelper___c__DisplayClass5_0__executeGetNodeFromLvName_b__0__,
    0LL);
  v21 = System_Linq_Enumerable__Where_object_(
          ComponentsInChildren_object,
          (System_Func_TSource__bool__o *)v20,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_Transform___);
  IgnoreNodeList = TransformHelper__GetIgnoreNodeList(
                     self,
                     *(System_String_o **)(v11 + 16),
                     includeInactive,
                     useNewRule,
                     isIgnore,
                     v22);
  v92 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v92,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_Transform___ctor__);
  v24 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_Transform___ctor__);
  if ( !v21 )
    goto LABEL_100;
  klass = v21->klass;
  v26 = *(unsigned __int16 *)(&v21->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v21->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      --v26;
      p_offset += 4;
      if ( !v26 )
        goto LABEL_18;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_18:
    p_method = sub_1BDA590(v21, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0LL);
  }
  v91 = includeInactive;
  v30 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v21,
          *(_QWORD *)(p_method + 8));
  if ( !v30 )
    sub_1B8880C(0LL, v29);
  while ( 1 )
  {
LABEL_21:
    v31 = *(_QWORD *)v30;
    v32 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
    {
      v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v33 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_25;
      }
      v34 = v31 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_25:
      v34 = sub_1BDA590(v30, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v30, *(_QWORD *)(v34 + 8)) & 1) == 0 )
      break;
    v35 = *(_QWORD *)v30;
    v36 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
    {
      v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v37 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_32;
      }
      v38 = v35 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_32:
      v38 = sub_1BDA590(v30, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0LL);
    }
    v39 = (*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v30, *(_QWORD *)(v38 + 8));
    v41 = (UnityEngine_Component_o *)v39;
    if ( IgnoreNodeList && (int)IgnoreNodeList->max_length >= 1 )
    {
      if ( !v39 )
        sub_1B8880C(0LL, v40);
      v42 = 0LL;
      while ( 1 )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v41, 0LL);
        if ( !gameObject )
          sub_1B8880C(0LL, v44);
        InstanceID = UnityEngine_Object__GetInstanceID(gameObject, 0LL);
        if ( (unsigned int)v42 >= IgnoreNodeList->max_length )
          sub_1B88814(InstanceID, v46);
        v47 = InstanceID;
        v48 = (UnityEngine_Component_o *)IgnoreNodeList->m_Items[v42];
        if ( !v48 )
          sub_1B8880C(0LL, v46);
        v49 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v48, 0LL);
        if ( !v49 )
          sub_1B8880C(0LL, v50);
        v39 = UnityEngine_Object__GetInstanceID(v49, 0LL);
        if ( v47 == (_DWORD)v39 )
          break;
        if ( (int)++v42 >= (signed int)IgnoreNodeList->max_length )
          goto LABEL_44;
      }
    }
    else
    {
LABEL_44:
      if ( !v41 )
        sub_1B8880C(v39, v40);
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v41, 0LL);
      if ( !name )
        sub_1B8880C(0LL, v52);
      v53 = System_String__Contains(name, (System_String_o *)StringLiteral_16551/*"_level"*/, 0LL);
      if ( v53 )
      {
        v57 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v41, 0LL);
        if ( !v57 )
          sub_1B8880C(0LL, v58);
        v59 = System_String__IndexOf_61738608(v57, (System_String_o *)StringLiteral_16551/*"_level"*/, 0LL);
        v60 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v41, 0LL);
        if ( !v60 )
          sub_1B8880C(0LL, v61);
        v62 = System_String__Substring(v60, v59 + 7, 0LL);
        v64 = v62;
        if ( !v62 )
          sub_1B8880C(0LL, v63);
        if ( (System_String__IndexOf_61738608(v62, (System_String_o *)StringLiteral_117/*" "*/, 0LL) & 0x80000000) == 0 )
        {
          v65 = System_String__IndexOf_61738608(v64, (System_String_o *)StringLiteral_117/*" "*/, 0LL);
          v64 = System_String__Substring_61726036(v64, 0, v65, 0LL);
          if ( !v64 )
            sub_1B8880C(0LL, v66);
        }
        v67 = System_String__Split(v64, 0x5Fu, 0, 0LL);
        v69 = v67;
        if ( !v67 )
          sub_1B8880C(0LL, v68);
        v70 = *(_QWORD *)&v67->max_length;
        if ( (int)v70 >= 1 )
        {
          v71 = 0LL;
          while ( 1 )
          {
            if ( v71 >= (unsigned int)v70 )
              sub_1B88814(v67, v68);
            v72 = v69->m_Items[v71];
            result = 99;
            v67 = (System_String_array *)System_Int32__TryParse(v72, &result, 0LL);
            if ( ((unsigned __int8)v67 & 1) != 0 )
            {
              v67 = (System_String_array *)System_Int32__Parse(v72, 0LL);
              if ( (_DWORD)v67 == level )
                break;
            }
            LODWORD(v70) = v69->max_length;
            if ( (__int64)++v71 >= (int)v70 )
              goto LABEL_21;
          }
          if ( !v92 )
            sub_1B8880C(v67, v68);
          items = v92->fields._items;
          v80 = Method_System_Collections_Generic_List_Transform__Add__;
          ++v92->fields._version;
          if ( !items )
            sub_1B8880C(v67, v68);
          size = v92->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v92,
              (Il2CppObject *)v41,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
          }
          else
          {
            v82 = &items->obj.klass + size;
            v92->fields._size = size + 1;
            v82[4] = (Il2CppClass *)v41;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v82 + 4), (int32_t)v41, v73, v74);
          }
        }
      }
      else
      {
        if ( !v24 )
          sub_1B8880C(v53, v54);
        v75 = v24->fields._items;
        v76 = Method_System_Collections_Generic_List_Transform__Add__;
        ++v24->fields._version;
        if ( !v75 )
          sub_1B8880C(v53, v54);
        v77 = v24->fields._size;
        if ( (unsigned int)v77 >= v75->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v24,
            (Il2CppObject *)v41,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
        }
        else
        {
          v78 = &v75->obj.klass + v77;
          v24->fields._size = v77 + 1;
          v78[4] = (Il2CppClass *)v41;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v78 + 4), (int32_t)v41, v55, v56);
        }
      }
    }
  }
  v17 = self;
  v83 = *(_QWORD *)v30;
  v84 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
  {
    v85 = (int *)(*(_QWORD *)(v83 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v85 - 1) != System_IDisposable_TypeInfo )
    {
      --v84;
      v85 += 4;
      if ( !v84 )
        goto LABEL_74;
    }
    v86 = v83 + 16LL * *v85 + 312;
  }
  else
  {
LABEL_74:
    v86 = sub_1BDA590(v30, System_IDisposable_TypeInfo, 0LL);
  }
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))v86)(v30, *(_QWORD *)(v86 + 8));
  if ( !v92 )
LABEL_100:
    sub_1B8880C(v12, v13);
  if ( v92->fields._size >= 1 )
    v88 = (System_Collections_Generic_List_Transform__o *)v92;
  else
    v88 = (System_Collections_Generic_List_Transform__o *)v24;
  v89 = TransformHelper__SelectNodeWithRule(v88, useNewRule, v87);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v89, 0LL, 0LL) || !v91 )
    return v89;
  return v17;
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

  if ( (byte_4A5C8F0 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5C8F0 = 1;
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_object; // x19
  System_Func_object__bool__o *v13; // x20
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x19
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x19
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  UnityEngine_Transform_o *v30; // x21
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0

  if ( (byte_4A5C8F3 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentsInChildren_Transform____76107608);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_Transform___);
    sub_1B885B0(&System_Func_Transform__bool__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_Transform__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_Transform__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_TransformHelper___c__DisplayClass7_0__getNodeFromName_b__0__);
    sub_1B885B0(&TransformHelper___c__DisplayClass7_0_TypeInfo);
    byte_4A5C8F3 = 1;
  }
  v7 = sub_1B887FC(TransformHelper___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = nodename,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)nodename, v10, v11),
        !self)
    || (ComponentsInChildren_object = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                                                             (UnityEngine_Component_o *)self,
                                                                                             includeInactive,
                                                                                             (const MethodInfo_2E76E98 *)Method_UnityEngine_Component_GetComponentsInChildren_Transform____76107608),
        v13 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_Transform__bool__TypeInfo),
        System_Func_object__bool____ctor(
          v13,
          (Il2CppObject *)v7,
          Method_TransformHelper___c__DisplayClass7_0__getNodeFromName_b__0__,
          0LL),
        (v8 = System_Linq_Enumerable__Where_object_(
                ComponentsInChildren_object,
                (System_Func_TSource__bool__o *)v13,
                (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_Transform___)) == 0LL) )
  {
    sub_1B8880C(v8, v9);
  }
  klass = v8->klass;
  v15 = v8;
  v16 = *(unsigned __int16 *)(&v8->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v8->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      --v16;
      p_offset += 4;
      if ( !v16 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1BDA590(v8, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0LL);
  }
  v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v15,
          *(_QWORD *)(p_method + 8));
  v21 = v19;
  if ( !v19 )
    sub_1B8880C(0LL, v20);
  v22 = *(_QWORD *)v19;
  v23 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
  {
    v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
    while ( *((System_Collections_IEnumerator_c **)v24 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      --v23;
      v24 += 4;
      if ( !v23 )
        goto LABEL_17;
    }
    v25 = v22 + 16LL * *v24 + 312;
  }
  else
  {
LABEL_17:
    v25 = sub_1BDA590(v19, System_Collections_IEnumerator_TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v21, *(_QWORD *)(v25 + 8)) & 1) == 0 )
  {
    v30 = 0LL;
    if ( !v21 )
      return v30;
    goto LABEL_29;
  }
  v26 = *(_QWORD *)v21;
  v27 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
  {
    v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v28 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_24;
    }
    v29 = v26 + 16LL * *v28 + 312;
  }
  else
  {
LABEL_24:
    v29 = sub_1BDA590(v21, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0LL);
  }
  v30 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v21, *(_QWORD *)(v29 + 8));
  if ( v21 )
  {
LABEL_29:
    v31 = *(_QWORD *)v21;
    v32 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_33;
      }
      v34 = v31 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_33:
      v34 = sub_1BDA590(v21, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v34)(v21, *(_QWORD *)(v34 + 8));
  }
  return v30;
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
    sub_1B8880C(this, p);
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
    sub_1B8880C(this, p);
  }
  return System_String__Equals_61715348((System_String_o *)this, v3->fields.nodename, 0LL);
}