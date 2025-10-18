int32_t TransformHelper__CalcPriority(System_String_o *objName, const MethodInfo *method)
{
  System_String_o *v3; // x0
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C449C2 & 1) == 0 )
  {
    sub_1C37058(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_1C37058(&StringLiteral_15959/*"[^0-9]"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C449C2 = 1;
  }
  result = 0;
  if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
  v3 = System_Text_RegularExpressions_Regex__Replace(
         objName,
         (System_String_o *)StringLiteral_15959/*"[^0-9]"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0);
  System_Int32__TryParse(v3, &result, 0);
  return result;
}


int32_t TransformHelper__ChangeChildsLayer(UnityEngine_Transform_o *self, int32_t layer, const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x20
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  System_Collections_IEnumerator_c *v10; // x8
  __int64 v11; // x9
  System_Collections_IEnumerator_c **v12; // x10
  __int64 v13; // x0
  UnityEngine_Transform_o *v14; // x0
  const MethodInfo *v15; // x2
  __int64 naturalAligment; // x9
  __int64 v17; // x0
  __int64 v18; // x8
  __int64 v19; // x20
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0

  v4 = (UnityEngine_Component_o *)self;
  if ( (byte_4C449BA & 1) == 0 )
  {
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    self = (UnityEngine_Transform_o *)sub_1C37058(&UnityEngine_Transform_TypeInfo);
    byte_4C449BA = 1;
  }
  if ( !v4 || (self = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v4, 0)) == 0 )
LABEL_33:
    sub_1C372B4(self);
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)self, layer, 0);
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)v4, 0);
  if ( !Enumerator )
    sub_1C372B4(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v7 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_10;
      }
      v9 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v9 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v9)(Enumerator, *(_QWORD *)(v9 + 8)) & 1) == 0 )
      break;
    v10 = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v12 = (System_Collections_IEnumerator_c **)&v10->_1.interfaceOffsets->offset;
      while ( *(v12 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        v12 += 2;
        if ( !v11 )
          goto LABEL_17;
      }
      v13 = (__int64)&v10->vtable[*(_DWORD *)v12 + 1];
    }
    else
    {
LABEL_17:
      v13 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v14 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v13)(
                                       Enumerator,
                                       *(_QWORD *)(v13 + 8));
    if ( v14 )
    {
      naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
      if ( v14->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (UnityEngine_Transform_c *)v14->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_1C37574(v14);
        goto LABEL_33;
      }
    }
    TransformHelper__ChangeChildsLayer(v14, layer, v15);
  }
  v17 = sub_1C37194(Enumerator, System_IDisposable_TypeInfo);
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
          goto LABEL_28;
      }
      v22 = v18 + 16LL * *v21 + 312;
    }
    else
    {
LABEL_28:
      v22 = sub_1C87870(v17, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v22)(v19, *(_QWORD *)(v22 + 8));
  }
  return layer;
}


void TransformHelper__DestroyChildren(UnityEngine_Transform_o *self, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0
  System_Collections_IEnumerator_c *v9; // x8
  __int64 v10; // x9
  System_Collections_IEnumerator_c **v11; // x10
  __int64 v12; // x0
  UnityEngine_Component_o *v13; // x0
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *gameObject; // x20
  __int64 v16; // x0
  __int64 v17; // x8
  __int64 v18; // x19
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0

  if ( (byte_4C449BB & 1) == 0 )
  {
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UnityEngine_Transform_TypeInfo);
    byte_4C449BB = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( !self || (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)self, 0)) == 0 )
      sub_1C372B4(transform);
    Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0);
    if ( !Enumerator )
      sub_1C372B4(0);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v6 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v6;
          p_offset += 4;
          if ( !v6 )
            goto LABEL_13;
        }
        v8 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_13:
        v8 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v8)(Enumerator, *(_QWORD *)(v8 + 8))
          & 1) == 0 )
        break;
      v9 = Enumerator->klass;
      v10 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        v11 = (System_Collections_IEnumerator_c **)&v9->_1.interfaceOffsets->offset;
        while ( *(v11 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v10;
          v11 += 2;
          if ( !v10 )
            goto LABEL_20;
        }
        v12 = (__int64)&v9->vtable[*(_DWORD *)v11 + 1];
      }
      else
      {
LABEL_20:
        v12 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
      }
      v13 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v12)(
                                         Enumerator,
                                         *(_QWORD *)(v12 + 8));
      if ( !v13 )
        goto LABEL_38;
      naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
      if ( v13->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (UnityEngine_Transform_c *)v13->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_1C37574(v13);
LABEL_38:
        sub_1C372B4(v13);
      }
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v13, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71266752(gameObject, 0);
    }
    v16 = sub_1C37194(Enumerator, System_IDisposable_TypeInfo);
    if ( v16 )
    {
      v17 = *(_QWORD *)v16;
      v18 = v16;
      v19 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
      {
        v20 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v20 - 1) != System_IDisposable_TypeInfo )
        {
          --v19;
          v20 += 4;
          if ( !v19 )
            goto LABEL_33;
        }
        v21 = v17 + 16LL * *v20 + 312;
      }
      else
      {
LABEL_33:
        v21 = sub_1C87870(v16, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v21)(v18, *(_QWORD *)(v21 + 8));
    }
  }
}


bool TransformHelper__ExistNodeFromLvName(
        UnityEngine_Transform_o *self,
        System_String_o *nodename,
        int32_t level,
        bool useNewRule,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x6
  UnityEngine_Object_o *NodeFromLvName; // x19

  if ( (byte_4C449BD & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C449BD = 1;
  }
  if ( System_String__IsNullOrEmpty(nodename, 0) )
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
  return UnityEngine_Object__op_Inequality(NodeFromLvName, 0, 0);
}


UnityEngine_Transform_array *TransformHelper__GetIgnoreNodeList(
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
  il2cpp_array_size_t max_length; // x8
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
  const MethodInfo *v24; // x3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0

  v10 = (UnityEngine_Component_o *)parentTransform;
  if ( (byte_4C449C0 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_BattleActorControl___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponentsInChildren_Transform____78127688);
    sub_1C37058(&Method_System_Collections_Generic_List_Transform__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_Transform__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_Transform___ctor__);
    sub_1C37058(&System_Collections_Generic_List_Transform__TypeInfo);
    parentTransform = (UnityEngine_Transform_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C449C0 = 1;
  }
  if ( !isIgnore )
    return 0;
  if ( !v10 )
    goto LABEL_31;
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  v10,
                                  1,
                                  (const MethodInfo_30DF14C *)Method_UnityEngine_Component_GetComponentsInChildren_Transform____78127688);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_Transform___ctor__);
  if ( !ComponentsInChildren_object )
    goto LABEL_31;
  max_length = ComponentsInChildren_object->max_length;
  if ( (int)max_length >= 1 )
  {
    v14 = 0;
    m_Items = ComponentsInChildren_object->m_Items;
    v16 = includeInactive;
    v17 = useNewRule;
    do
    {
      if ( v14 >= (unsigned int)max_length )
LABEL_30:
        sub_1C372BC(parentTransform);
      v18 = (UnityEngine_Object_o *)m_Items[v14];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      parentTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v10, v18, 0);
      if ( ((unsigned __int8)parentTransform & 1) == 0 )
      {
        if ( v14 >= LODWORD(ComponentsInChildren_object->max_length) )
          goto LABEL_30;
        parentTransform = (UnityEngine_Transform_o *)m_Items[v14];
        if ( !parentTransform )
          goto LABEL_31;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)parentTransform,
                             (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_BattleActorControl___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        parentTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                                       (UnityEngine_Object_o *)Component_object,
                                                       0,
                                                       0);
        if ( ((unsigned __int8)parentTransform & 1) != 0 )
        {
          if ( !Component_object )
            goto LABEL_31;
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
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
          parentTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(NodeFromLvName, 0, 0);
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
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v12,
                (Il2CppObject *)NodeFromLvName,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
            }
            else
            {
              v28 = &items->obj.klass + size;
              v12->fields._size = size + 1;
              v28[4] = (Il2CppClass *)NodeFromLvName;
              sub_1C36FFC((CGThumbnailListItem_o *)(v28 + 4), (int32_t)NodeFromLvName, v23, v24);
            }
          }
        }
      }
      LODWORD(max_length) = ComponentsInChildren_object->max_length;
    }
    while ( (__int64)++v14 < (int)max_length );
  }
  if ( !v12 )
LABEL_31:
    sub_1C372B4(parentTransform);
  return (UnityEngine_Transform_array *)System_Collections_Generic_List_object___ToArray(
                                          v12,
                                          (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_Transform__ToArray__);
}


bool TransformHelper__SafeSetParentNonNull(
        UnityEngine_Transform_o *self,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  float v10; // s11
  float v11; // s12
  float v12; // s13
  float w; // s14
  float v14; // s15
  UnityEngine_GameObject_o *v15; // x20
  float v16; // [xsp+48h] [xbp-28h]
  float v17; // [xsp+4Ch] [xbp-24h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C449BC & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C449BC = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0) )
    return 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
    return 0;
  if ( !self )
    goto LABEL_15;
  localPosition = UnityEngine_Transform__get_localPosition(self, 0);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  localRotation = UnityEngine_Transform__get_localRotation(self, 0);
  v10 = localRotation.fields.x;
  v11 = localRotation.fields.y;
  v12 = localRotation.fields.z;
  w = localRotation.fields.w;
  localScale = UnityEngine_Transform__get_localScale(self, 0);
  v14 = localScale.fields.x;
  v16 = localScale.fields.z;
  v17 = localScale.fields.y;
  UnityEngine_Transform__set_parent(self, parent, 0);
  v20.fields.x = x;
  v20.fields.y = y;
  v20.fields.z = z;
  UnityEngine_Transform__set_localPosition(self, v20, 0);
  v23.fields.x = v10;
  v23.fields.y = v11;
  v23.fields.z = v12;
  v23.fields.w = w;
  UnityEngine_Transform__set_localRotation(self, v23, 0);
  v21.fields.z = v16;
  v21.fields.y = v17;
  v21.fields.x = v14;
  UnityEngine_Transform__set_localScale(self, v21, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)self, 0);
  if ( !parent
    || (v15 = gameObject, (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)parent, 0)) == 0)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(gameObject, 0), !v15) )
  {
LABEL_15:
    sub_1C372B4(gameObject);
  }
  UnityEngine_GameObject__set_layer(v15, (int32_t)gameObject, 0);
  return 1;
}


UnityEngine_Transform_o *TransformHelper__SelectNodeWithRule(
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
  System_String_o *v10; // x0
  _BOOL8 v11; // x0
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  const MethodInfo *v14; // x1
  float v15; // s9
  System_String_o *v16; // x0
  const MethodInfo *v17; // x1
  float z; // s8
  _BOOL8 v19; // x0
  Il2CppObject *current; // x20
  System_String_o *name; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  v4 = tNode;
  if ( (byte_4C449C3 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_Transform__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_Transform__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_Transform__GetEnumerator__);
    tNode = (System_Collections_Generic_List_Transform__o *)sub_1C37058(&StringLiteral_113/*" "*/);
    byte_4C449C3 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  if ( !useNewRule )
  {
    v8 = 0;
    z = -100.0;
    if ( v4 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v23,
        (System_Collections_Generic_List_object__o *)v4,
        (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_Transform__GetEnumerator__);
      v24 = v23;
      while ( 1 )
      {
        v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v24,
                (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext__);
        if ( !v19 )
          break;
        current = v24.fields._current;
        if ( !v24.fields._current )
          sub_1C372B4(v19);
        lossyScale = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)v24.fields._current, 0);
        if ( lossyScale.fields.z > z )
        {
          v30 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)current, 0);
          z = v30.fields.z;
          v8 = (UnityEngine_Object_o *)current;
        }
        else
        {
          v29 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)current, 0);
          if ( v29.fields.z == z )
          {
            name = UnityEngine_Object__get_name((UnityEngine_Object_o *)current, 0);
            if ( !name )
              sub_1C372B4(0);
            if ( !System_String__Contains(name, (System_String_o *)StringLiteral_113/*" "*/, 0) )
              v8 = (UnityEngine_Object_o *)current;
          }
        }
      }
      goto LABEL_31;
    }
LABEL_35:
    sub_1C372B4(tNode);
  }
  if ( !v4 )
    goto LABEL_35;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)v4,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_Transform__GetEnumerator__);
  v5 = 0;
  v6 = 0;
  v7 = -100.0;
  v24 = v23;
LABEL_6:
  v8 = (UnityEngine_Object_o *)v6;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v24,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext__);
    if ( !v9 )
      break;
    v6 = v24.fields._current;
    if ( !v24.fields._current )
      sub_1C372B4(v9);
    v25 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)v24.fields._current, 0);
    if ( v25.fields.z > v7 )
    {
      v27 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)v6, 0);
      v15 = v27.fields.z;
      v16 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v6, 0);
      v5 = TransformHelper__CalcPriority(v16, v17);
      v7 = v15;
      goto LABEL_6;
    }
    v26 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)v6, 0);
    if ( v26.fields.z == v7 )
    {
      v10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v6, 0);
      if ( !v10 )
        sub_1C372B4(0);
      v11 = System_String__Contains(v10, (System_String_o *)StringLiteral_113/*" "*/, 0);
      if ( v11 )
      {
        if ( !v8 )
          sub_1C372B4(v11);
        v12 = UnityEngine_Object__get_name(v8, 0);
        if ( !v12 )
          sub_1C372B4(0);
        if ( System_String__Contains(v12, (System_String_o *)StringLiteral_113/*" "*/, 0) )
        {
          v13 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v6, 0);
          if ( v5 > TransformHelper__CalcPriority(v13, v14) )
            v6 = (Il2CppObject *)v8;
        }
        goto LABEL_6;
      }
    }
  }
LABEL_31:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_Transform__Dispose__);
  return (UnityEngine_Transform_o *)v8;
}


void TransformHelper__SetLocalPosition(
        UnityEngine_Transform_o *self,
        UnityEngine_Vector3_o value,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  _BOOL8 v7; // x0
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  z = value.fields.z;
  y = value.fields.y;
  x = value.fields.x;
  if ( (byte_4C449C7 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C449C7 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0);
  if ( !v7 )
  {
    if ( !self )
      sub_1C372B4(v7);
    v8.fields.y = y;
    v8.fields.z = z;
    v8.fields.x = x;
    UnityEngine_Transform__set_localPosition(self, v8, 0);
  }
}


void TransformHelper__SetLocalPositionX(UnityEngine_Transform_o *self, float value, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C449C4 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C449C4 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0);
  if ( !v5 )
  {
    if ( !self )
      sub_1C372B4(v5);
    localPosition = UnityEngine_Transform__get_localPosition(self, 0);
    localPosition.fields.x = value;
    UnityEngine_Transform__set_localPosition(self, localPosition, 0);
  }
}


void TransformHelper__SetLocalPositionY(UnityEngine_Transform_o *self, float value, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C449C5 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C449C5 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0);
  if ( !v5 )
  {
    if ( !self )
      sub_1C372B4(v5);
    localPosition = UnityEngine_Transform__get_localPosition(self, 0);
    localPosition.fields.y = value;
    UnityEngine_Transform__set_localPosition(self, localPosition, 0);
  }
}


void TransformHelper__SetLocalPositionZ(UnityEngine_Transform_o *self, float value, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C449C6 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C449C6 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0);
  if ( !v5 )
  {
    if ( !self )
      sub_1C372B4(v5);
    localPosition = UnityEngine_Transform__get_localPosition(self, 0);
    localPosition.fields.z = value;
    UnityEngine_Transform__set_localPosition(self, localPosition, 0);
  }
}


void TransformHelper__SetLocalScale(
        UnityEngine_Transform_o *self,
        UnityEngine_Vector3_o value,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  _BOOL8 v7; // x0
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  z = value.fields.z;
  y = value.fields.y;
  x = value.fields.x;
  if ( (byte_4C449C8 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C449C8 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0);
  if ( !v7 )
  {
    if ( !self )
      sub_1C372B4(v7);
    v8.fields.y = y;
    v8.fields.z = z;
    v8.fields.x = x;
    UnityEngine_Transform__set_localScale(self, v8, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void TransformHelper__SetLossyScale(
        UnityEngine_Transform_o *self,
        UnityEngine_Vector3_o value,
        const MethodInfo *method)
{
  float z; // s10
  float y; // s9
  float x; // s8
  UnityEngine_Transform_o *v7; // x0
  UnityEngine_Object_o *parent; // x20
  float v9; // s2 OVERLAPPED
  float v10; // s1
  float v11; // s0
  UnityEngine_Vector3_o oneVector; // 0:s0.4,4:s1.4,8:s2.4

  z = value.fields.z;
  y = value.fields.y;
  x = value.fields.x;
  if ( (byte_4C449C9 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C449C9 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0);
  if ( ((unsigned __int8)v7 & 1) == 0 )
  {
    if ( self )
    {
      parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(self, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(parent, 0, 0) )
      {
        if ( !byte_4C3C926 )
        {
          sub_1C37058(&UnityEngine_Vector3_TypeInfo);
          byte_4C3C926 = 1;
        }
        oneVector = UnityEngine_Vector3_TypeInfo->static_fields->oneVector;
        goto LABEL_15;
      }
      v7 = UnityEngine_Transform__get_parent(self, 0);
      if ( v7 )
      {
        oneVector = UnityEngine_Transform__get_lossyScale(v7, 0);
LABEL_15:
        if ( oneVector.fields.z == 0.0 )
          v9 = 0.0;
        else
          v9 = z / oneVector.fields.z;
        if ( oneVector.fields.y == 0.0 )
          v10 = 0.0;
        else
          v10 = y / oneVector.fields.y;
        if ( oneVector.fields.x == 0.0 )
          v11 = 0.0;
        else
          v11 = x / oneVector.fields.x;
        UnityEngine_Transform__set_localScale(self, *(UnityEngine_Vector3_o *)(&v9 - 2), 0);
        return;
      }
    }
    sub_1C372B4(v7);
  }
}


UnityEngine_Transform_o *TransformHelper__executeGetNodeFromLvName(
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_String_o *v15; // x0
  UnityEngine_Transform_o *v16; // x20
  Il2CppObject *Component_object; // x24
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_object; // x24
  System_Func_object__bool__o *v19; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x24
  const MethodInfo *v21; // x5
  UnityEngine_Transform_array *IgnoreNodeList; // x26
  System_Collections_Generic_List_object__o *v23; // x23
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 v27; // x0
  __int64 v28; // x24
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  __int64 v37; // x0
  UnityEngine_Component_o *v38; // x27
  __int64 v39; // x29
  UnityEngine_Object_o *gameObject; // x0
  __int64 InstanceID; // x0
  int v42; // w28
  UnityEngine_Component_o *v43; // x0
  UnityEngine_Object_o *v44; // x0
  System_String_o *name; // x0
  _BOOL8 v46; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  System_String_o *v49; // x0
  int32_t v50; // w28
  System_String_o *v51; // x0
  System_String_o *v52; // x0
  System_String_o *v53; // x28
  int32_t v54; // w2
  System_String_array *v55; // x0
  System_String_array *v56; // x28
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v58; // x21
  System_String_o *v59; // x29
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  struct System_Object_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  Il2CppClass **v65; // x0
  struct System_Object_array *items; // x8
  _QWORD *v67; // x9
  __int64 size; // x10
  Il2CppClass **v69; // x0
  __int64 v70; // x8
  __int64 v71; // x9
  int *v72; // x10
  __int64 v73; // x0
  const MethodInfo *v74; // x2
  System_Collections_Generic_List_Transform__o *v75; // x0
  UnityEngine_Transform_o *v76; // x21
  bool v78; // [xsp+Ch] [xbp-84h]
  System_Collections_Generic_List_object__o *v79; // [xsp+10h] [xbp-80h]
  int32_t result; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4C449BF & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_BattleActorControl___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponentsInChildren_Transform____78127688);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_Transform___);
    sub_1C37058(&System_Func_Transform__bool__TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_Transform__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_Transform__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Transform__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_Transform___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_Transform__get_Count__);
    sub_1C37058(&System_Collections_Generic_List_Transform__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_TransformHelper___c__DisplayClass5_0__executeGetNodeFromLvName_b__0__);
    sub_1C37058(&TransformHelper___c__DisplayClass5_0_TypeInfo);
    sub_1C37058(&StringLiteral_113/*" "*/);
    sub_1C37058(&StringLiteral_16563/*"_level"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C449BF = 1;
  }
  result = 0;
  v11 = sub_1C372A4(TransformHelper___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_100;
  *(_QWORD *)(v11 + 16) = nodename;
  sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 16), (int32_t)nodename, v13, v14);
  v15 = *(System_String_o **)(v11 + 16);
  v16 = self;
  if ( !v15 )
    return v16;
  v12 = System_String__Equals_63596960(v15, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( (v12 & 1) != 0 )
    return v16;
  if ( !self )
    goto LABEL_100;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)self,
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( level == -1 && (v12 & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_100;
    level = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)Component_object, 0) + 1;
  }
  ComponentsInChildren_object = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                                                       (UnityEngine_Component_o *)self,
                                                                                       includeInactive,
                                                                                       (const MethodInfo_30DF14C *)Method_UnityEngine_Component_GetComponentsInChildren_Transform____78127688);
  v19 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_Transform__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v19,
    (Il2CppObject *)v11,
    Method_TransformHelper___c__DisplayClass5_0__executeGetNodeFromLvName_b__0__,
    0);
  v20 = System_Linq_Enumerable__Where_object_(
          ComponentsInChildren_object,
          (System_Func_TSource__bool__o *)v19,
          (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_Transform___);
  IgnoreNodeList = TransformHelper__GetIgnoreNodeList(
                     self,
                     *(System_String_o **)(v11 + 16),
                     includeInactive,
                     useNewRule,
                     isIgnore,
                     v21);
  v79 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v79,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_Transform___ctor__);
  v23 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_Transform___ctor__);
  if ( !v20 )
    goto LABEL_100;
  klass = v20->klass;
  v25 = *(unsigned __int16 *)&v20->klass->_2.rank;
  if ( *(_WORD *)&v20->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      --v25;
      p_offset += 4;
      if ( !v25 )
        goto LABEL_18;
    }
    v27 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_18:
    v27 = sub_1C87870(v20, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0);
  }
  v78 = includeInactive;
  v28 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v27)(
          v20,
          *(_QWORD *)(v27 + 8));
  if ( !v28 )
    sub_1C372B4(0);
  while ( 1 )
  {
LABEL_21:
    v29 = *(_QWORD *)v28;
    v30 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
    {
      v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v31 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_25;
      }
      v32 = v29 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_25:
      v32 = sub_1C87870(v28, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v28, *(_QWORD *)(v32 + 8)) & 1) == 0 )
      break;
    v33 = *(_QWORD *)v28;
    v34 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
    {
      v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v35 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_32;
      }
      v36 = v33 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_32:
      v36 = sub_1C87870(v28, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0);
    }
    v37 = (*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v28, *(_QWORD *)(v36 + 8));
    v38 = (UnityEngine_Component_o *)v37;
    if ( IgnoreNodeList && SLODWORD(IgnoreNodeList->max_length) >= 1 )
    {
      if ( !v37 )
        sub_1C372B4(0);
      v39 = 0;
      while ( 1 )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v38, 0);
        if ( !gameObject )
          sub_1C372B4(0);
        InstanceID = UnityEngine_Object__GetInstanceID(gameObject, 0);
        if ( (unsigned int)v39 >= LODWORD(IgnoreNodeList->max_length) )
          sub_1C372BC(InstanceID);
        v42 = InstanceID;
        v43 = (UnityEngine_Component_o *)IgnoreNodeList->m_Items[v39];
        if ( !v43 )
          sub_1C372B4(0);
        v44 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v43, 0);
        if ( !v44 )
          sub_1C372B4(0);
        v37 = UnityEngine_Object__GetInstanceID(v44, 0);
        if ( v42 == (_DWORD)v37 )
          break;
        if ( (int)++v39 >= SLODWORD(IgnoreNodeList->max_length) )
          goto LABEL_44;
      }
    }
    else
    {
LABEL_44:
      if ( !v38 )
        sub_1C372B4(v37);
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v38, 0);
      if ( !name )
        sub_1C372B4(0);
      v46 = System_String__Contains(name, (System_String_o *)StringLiteral_16563/*"_level"*/, 0);
      if ( v46 )
      {
        v49 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v38, 0);
        if ( !v49 )
          sub_1C372B4(0);
        v50 = System_String__IndexOf_63620032(v49, (System_String_o *)StringLiteral_16563/*"_level"*/, 0);
        v51 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v38, 0);
        if ( !v51 )
          sub_1C372B4(0);
        v52 = System_String__Substring(v51, v50 + 7, 0);
        v53 = v52;
        if ( !v52 )
          sub_1C372B4(0);
        if ( (System_String__IndexOf_63620032(v52, (System_String_o *)StringLiteral_113/*" "*/, 0) & 0x80000000) == 0 )
        {
          v54 = System_String__IndexOf_63620032(v53, (System_String_o *)StringLiteral_113/*" "*/, 0);
          v53 = System_String__Substring_63607580(v53, 0, v54, 0);
          if ( !v53 )
            sub_1C372B4(0);
        }
        v55 = System_String__Split(v53, 0x5Fu, 0, 0);
        v56 = v55;
        if ( !v55 )
          sub_1C372B4(0);
        max_length = v55->max_length;
        if ( (int)max_length >= 1 )
        {
          v58 = 0;
          while ( 1 )
          {
            if ( v58 >= (unsigned int)max_length )
              sub_1C372BC(v55);
            v59 = v56->m_Items[v58];
            result = 99;
            v55 = (System_String_array *)System_Int32__TryParse(v59, &result, 0);
            if ( ((unsigned __int8)v55 & 1) != 0 )
            {
              v55 = (System_String_array *)System_Int32__Parse(v59, 0);
              if ( (_DWORD)v55 == level )
                break;
            }
            LODWORD(max_length) = v56->max_length;
            if ( (__int64)++v58 >= (int)max_length )
              goto LABEL_21;
          }
          if ( !v79 )
            sub_1C372B4(v55);
          items = v79->fields._items;
          v67 = Method_System_Collections_Generic_List_Transform__Add__;
          ++v79->fields._version;
          if ( !items )
            sub_1C372B4(v55);
          size = v79->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v79,
              (Il2CppObject *)v38,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
          }
          else
          {
            v69 = &items->obj.klass + size;
            v79->fields._size = size + 1;
            v69[4] = (Il2CppClass *)v38;
            sub_1C36FFC((CGThumbnailListItem_o *)(v69 + 4), (int32_t)v38, v60, v61);
          }
        }
      }
      else
      {
        if ( !v23 )
          sub_1C372B4(v46);
        v62 = v23->fields._items;
        v63 = Method_System_Collections_Generic_List_Transform__Add__;
        ++v23->fields._version;
        if ( !v62 )
          sub_1C372B4(v46);
        v64 = v23->fields._size;
        if ( (unsigned int)v64 >= LODWORD(v62->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v23,
            (Il2CppObject *)v38,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
        }
        else
        {
          v65 = &v62->obj.klass + v64;
          v23->fields._size = v64 + 1;
          v65[4] = (Il2CppClass *)v38;
          sub_1C36FFC((CGThumbnailListItem_o *)(v65 + 4), (int32_t)v38, v47, v48);
        }
      }
    }
  }
  v16 = self;
  v70 = *(_QWORD *)v28;
  v71 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
  {
    v72 = (int *)(*(_QWORD *)(v70 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v72 - 1) != System_IDisposable_TypeInfo )
    {
      --v71;
      v72 += 4;
      if ( !v71 )
        goto LABEL_74;
    }
    v73 = v70 + 16LL * *v72 + 312;
  }
  else
  {
LABEL_74:
    v73 = sub_1C87870(v28, System_IDisposable_TypeInfo, 0);
  }
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))v73)(v28, *(_QWORD *)(v73 + 8));
  if ( !v79 )
LABEL_100:
    sub_1C372B4(v12);
  if ( v79->fields._size >= 1 )
    v75 = (System_Collections_Generic_List_Transform__o *)v79;
  else
    v75 = (System_Collections_Generic_List_Transform__o *)v23;
  v76 = TransformHelper__SelectNodeWithRule(v75, useNewRule, v74);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v76, 0, 0) || !v78 )
    return v76;
  return v16;
}


UnityEngine_Transform_o *TransformHelper__getNodeFromLvName(
        UnityEngine_Transform_o *self,
        System_String_o *nodename,
        int32_t level,
        bool useNewRule,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6
  UnityEngine_Transform_o *NodeFromLvName; // x23
  const MethodInfo *v11; // x6

  if ( (byte_4C449BE & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C449BE = 1;
  }
  NodeFromLvName = TransformHelper__executeGetNodeFromLvName(self, nodename, level, 0, useNewRule, 1, v5);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)NodeFromLvName, 0, 0) )
    return TransformHelper__executeGetNodeFromLvName(self, nodename, level, 1, useNewRule, 1, v11);
  else
    return NodeFromLvName;
}


UnityEngine_Transform_o *TransformHelper__getNodeFromName(
        UnityEngine_Transform_o *self,
        System_String_o *nodename,
        bool includeInactive,
        const MethodInfo *method)
{
  __int64 v7; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_object; // x19
  System_Func_object__bool__o *v12; // x20
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x19
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x19
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  UnityEngine_Transform_o *v28; // x21
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0

  if ( (byte_4C449C1 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponentsInChildren_Transform____78127688);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_Transform___);
    sub_1C37058(&System_Func_Transform__bool__TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_Transform__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_Transform__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_TransformHelper___c__DisplayClass7_0__getNodeFromName_b__0__);
    sub_1C37058(&TransformHelper___c__DisplayClass7_0_TypeInfo);
    byte_4C449C1 = 1;
  }
  v7 = sub_1C372A4(TransformHelper___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = nodename,
        sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)nodename, v9, v10),
        !self)
    || (ComponentsInChildren_object = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                                                             (UnityEngine_Component_o *)self,
                                                                                             includeInactive,
                                                                                             (const MethodInfo_30DF14C *)Method_UnityEngine_Component_GetComponentsInChildren_Transform____78127688),
        v12 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_Transform__bool__TypeInfo),
        System_Func_object__bool____ctor(
          v12,
          (Il2CppObject *)v7,
          Method_TransformHelper___c__DisplayClass7_0__getNodeFromName_b__0__,
          0),
        (v8 = System_Linq_Enumerable__Where_object_(
                ComponentsInChildren_object,
                (System_Func_TSource__bool__o *)v12,
                (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_Transform___)) == 0) )
  {
    sub_1C372B4(v8);
  }
  klass = v8->klass;
  v14 = v8;
  v15 = *(unsigned __int16 *)&v8->klass->_2.rank;
  if ( *(_WORD *)&v8->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      --v15;
      p_offset += 4;
      if ( !v15 )
        goto LABEL_10;
    }
    v17 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_10:
    v17 = sub_1C87870(v8, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0);
  }
  v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v17)(
          v14,
          *(_QWORD *)(v17 + 8));
  v19 = v18;
  if ( !v18 )
    sub_1C372B4(0);
  v20 = *(_QWORD *)v18;
  v21 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
  {
    v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
    while ( *((System_Collections_IEnumerator_c **)v22 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      --v21;
      v22 += 4;
      if ( !v21 )
        goto LABEL_17;
    }
    v23 = v20 + 16LL * *v22 + 312;
  }
  else
  {
LABEL_17:
    v23 = sub_1C87870(v18, System_Collections_IEnumerator_TypeInfo, 0);
  }
  if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v19, *(_QWORD *)(v23 + 8)) & 1) == 0 )
  {
    v28 = 0;
    if ( !v19 )
      return v28;
    goto LABEL_29;
  }
  v24 = *(_QWORD *)v19;
  v25 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
  {
    v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v26 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
    {
      --v25;
      v26 += 4;
      if ( !v25 )
        goto LABEL_24;
    }
    v27 = v24 + 16LL * *v26 + 312;
  }
  else
  {
LABEL_24:
    v27 = sub_1C87870(v19, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0);
  }
  v28 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v19, *(_QWORD *)(v27 + 8));
  if ( v19 )
  {
LABEL_29:
    v29 = *(_QWORD *)v19;
    v30 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
    {
      v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_33;
      }
      v32 = v29 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_33:
      v32 = sub_1C87870(v19, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v32)(v19, *(_QWORD *)(v32 + 8));
  }
  return v28;
}


void TransformHelper___c__DisplayClass5_0___ctor(
        TransformHelper___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool TransformHelper___c__DisplayClass5_0___executeGetNodeFromLvName_b__0(
        TransformHelper___c__DisplayClass5_0_o *this,
        UnityEngine_Transform_o *p,
        const MethodInfo *method)
{
  TransformHelper___c__DisplayClass5_0_o *v3; // x19

  if ( !p
    || (v3 = this,
        (this = (TransformHelper___c__DisplayClass5_0_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)p,
                                                            0)) == 0)
    || (this = (TransformHelper___c__DisplayClass5_0_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0)) == 0 )
  {
    sub_1C372B4(this);
  }
  return System_String__Contains((System_String_o *)this, v3->fields.nodename, 0);
}


void TransformHelper___c__DisplayClass7_0___ctor(
        TransformHelper___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool TransformHelper___c__DisplayClass7_0___getNodeFromName_b__0(
        TransformHelper___c__DisplayClass7_0_o *this,
        UnityEngine_Transform_o *p,
        const MethodInfo *method)
{
  TransformHelper___c__DisplayClass7_0_o *v3; // x19

  if ( !p
    || (v3 = this,
        (this = (TransformHelper___c__DisplayClass7_0_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)p,
                                                            0)) == 0)
    || (this = (TransformHelper___c__DisplayClass7_0_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0)) == 0 )
  {
    sub_1C372B4(this);
  }
  return System_String__Equals_63596960((System_String_o *)this, v3->fields.nodename, 0);
}