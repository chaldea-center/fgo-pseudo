int32_t TransformHelper__CalcPriority(System_String_o *objName, const MethodInfo *method)
{
  System_String_o *v3; // x0
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D323C7 & 1) == 0 )
  {
    sub_1C93AD4(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_1C93AD4(&StringLiteral_16057/*"[^0-9]"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D323C7 = 1;
  }
  result = 0;
  if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
  v3 = System_Text_RegularExpressions_Regex__Replace(
         objName,
         (System_String_o *)StringLiteral_16057/*"[^0-9]"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0);
  System_Int32__TryParse(v3, &result, 0);
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t TransformHelper__ChangeChildsLayer(UnityEngine_Transform_o *self, int32_t layer, const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x20
  __int64 v5; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  System_Collections_IEnumerator_c *v11; // x8
  __int64 v12; // x9
  System_Collections_IEnumerator_c **v13; // x10
  __int64 v14; // x0
  UnityEngine_Transform_o *v15; // x0
  const MethodInfo *v16; // x2
  __int64 naturalAligment; // x9
  __int64 v18; // x0
  __int64 v19; // x8
  __int64 v20; // x20
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0

  v4 = (UnityEngine_Component_o *)self;
  if ( (byte_4D323BF & 1) == 0 )
  {
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    self = (UnityEngine_Transform_o *)sub_1C93AD4(&UnityEngine_Transform_TypeInfo);
    byte_4D323BF = 1;
  }
  if ( !v4 || (self = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v4, 0)) == 0 )
LABEL_33:
    sub_1C93D2C(self, *(_QWORD *)&layer);
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)self, layer, 0);
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)v4, 0);
  if ( !Enumerator )
    sub_1C93D2C(0, v5);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v8 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v8;
        p_offset += 4;
        if ( !v8 )
          goto LABEL_10;
      }
      v10 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v10 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v10)(Enumerator, *(_QWORD *)(v10 + 8))
        & 1) == 0 )
      break;
    v11 = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v13 = (System_Collections_IEnumerator_c **)&v11->_1.interfaceOffsets->offset;
      while ( *(v13 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        v13 += 2;
        if ( !v12 )
          goto LABEL_17;
      }
      v14 = (__int64)&v11->vtable[*(_DWORD *)v13 + 1];
    }
    else
    {
LABEL_17:
      v14 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v15 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v14)(
                                       Enumerator,
                                       *(_QWORD *)(v14 + 8));
    if ( v15 )
    {
      naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
      if ( v15->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (UnityEngine_Transform_c *)v15->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_1C940C8(v15);
        goto LABEL_33;
      }
    }
    TransformHelper__ChangeChildsLayer(v15, layer, v16);
  }
  v18 = sub_1C93C10(Enumerator, System_IDisposable_TypeInfo);
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
      v23 = sub_1C69E5C(v18, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v23)(v20, *(_QWORD *)(v23 + 8));
  }
  return layer;
}


void TransformHelper__DestroyChildren(UnityEngine_Transform_o *self, bool isImmediate, const MethodInfo *method)
{
  UnityEngine_Transform_o *Child; // x0
  __int64 v6; // x1
  int32_t v7; // w20
  UnityEngine_Object_o *gameObject; // x21
  __int64 v9; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  System_Collections_IEnumerator_c *v15; // x8
  __int64 v16; // x9
  System_Collections_IEnumerator_c **v17; // x10
  __int64 v18; // x0
  UnityEngine_Component_o *v19; // x0
  __int64 v20; // x1
  UnityEngine_Component_o *v21; // x20
  __int64 naturalAligment; // x9
  UnityEngine_GameObject_o *v23; // x0
  __int64 v24; // x1
  UnityEngine_Object_o *v25; // x20
  __int64 v26; // x0
  __int64 v27; // x8
  __int64 v28; // x19
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0

  if ( (byte_4D323C0 & 1) == 0 )
  {
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UnityEngine_Transform_TypeInfo);
    byte_4D323C0 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Child = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0);
  if ( ((unsigned __int8)Child & 1) == 0 )
  {
    if ( !self )
      goto LABEL_47;
    if ( isImmediate )
    {
      v7 = UnityEngine_Transform__get_childCount(self, 0) - 1;
      if ( v7 >= 0 )
      {
        while ( 1 )
        {
          Child = UnityEngine_Transform__GetChild(self, v7, 0);
          if ( !Child )
            break;
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)Child,
                                                 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__DestroyImmediate_72120096(gameObject, 0);
          if ( --v7 < 0 )
            return;
        }
LABEL_47:
        sub_1C93D2C(Child, v6);
      }
    }
    else
    {
      Enumerator = UnityEngine_Transform__GetEnumerator(self, 0);
      if ( !Enumerator )
        sub_1C93D2C(0, v9);
      while ( 1 )
      {
        klass = Enumerator->klass;
        v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
        if ( *(_WORD *)&Enumerator->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v12;
            p_offset += 4;
            if ( !v12 )
              goto LABEL_19;
          }
          v14 = (__int64)&klass->vtable[*p_offset];
        }
        else
        {
LABEL_19:
          v14 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v14)(
                Enumerator,
                *(_QWORD *)(v14 + 8))
            & 1) == 0 )
          break;
        v15 = Enumerator->klass;
        v16 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
        if ( *(_WORD *)&Enumerator->klass->_2.rank )
        {
          v17 = (System_Collections_IEnumerator_c **)&v15->_1.interfaceOffsets->offset;
          while ( *(v17 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v16;
            v17 += 2;
            if ( !v16 )
              goto LABEL_26;
          }
          v18 = (__int64)&v15->vtable[*(_DWORD *)v17 + 1];
        }
        else
        {
LABEL_26:
          v18 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
        }
        v19 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v18)(
                                           Enumerator,
                                           *(_QWORD *)(v18 + 8));
        v21 = v19;
        if ( !v19 )
          goto LABEL_45;
        naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
        if ( v19->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (UnityEngine_Transform_c *)v19->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
        {
          sub_1C940C8(v19);
LABEL_45:
          sub_1C93D2C(v19, v20);
        }
        v23 = UnityEngine_Component__get_gameObject(v19, 0);
        if ( !v23 )
          sub_1C93D2C(0, v24);
        UnityEngine_GameObject__SetActive(v23, 0, 0);
        v25 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v21, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_72119908(v25, 0);
      }
      v26 = sub_1C93C10(Enumerator, System_IDisposable_TypeInfo);
      if ( v26 )
      {
        v27 = *(_QWORD *)v26;
        v28 = v26;
        v29 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
        {
          v30 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
          {
            --v29;
            v30 += 4;
            if ( !v29 )
              goto LABEL_40;
          }
          v31 = v27 + 16LL * *v30 + 312;
        }
        else
        {
LABEL_40:
          v31 = sub_1C69E5C(v26, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v31)(v28, *(_QWORD *)(v31 + 8));
      }
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

  if ( (byte_4D323C2 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D323C2 = 1;
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
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  v10 = (UnityEngine_Component_o *)parentTransform;
  if ( (byte_4D323C5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_BattleActorControl___);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponentsInChildren_Transform____79080816);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Transform__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Transform__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Transform___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_Transform__TypeInfo);
    parentTransform = (UnityEngine_Transform_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D323C5 = 1;
  }
  if ( !isIgnore )
    return 0;
  if ( !v10 )
    goto LABEL_31;
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  v10,
                                  1,
                                  (const MethodInfo_319BF30 *)Method_UnityEngine_Component_GetComponentsInChildren_Transform____79080816);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_Transform___ctor__);
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
        sub_1C93D34(parentTransform);
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
                             (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_BattleActorControl___);
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
            v30 = Method_System_Collections_Generic_List_Transform__Add__;
            ++v12->fields._version;
            if ( !items )
              goto LABEL_31;
            size = v12->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v12,
                (Il2CppObject *)NodeFromLvName,
                *(const MethodInfo_387999C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
            }
            else
            {
              v32 = &items->obj.klass + size;
              v12->fields._size = size + 1;
              v32[4] = (Il2CppClass *)NodeFromLvName;
              sub_1C93A78(
                (GrandQuestFolderBoardItem_o *)(v32 + 4),
                (int32_t)NodeFromLvName,
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
      LODWORD(max_length) = ComponentsInChildren_object->max_length;
    }
    while ( (__int64)++v14 < (int)max_length );
  }
  if ( !v12 )
LABEL_31:
    sub_1C93D2C(parentTransform, nodename);
  return (UnityEngine_Transform_array *)System_Collections_Generic_List_object___ToArray(
                                          v12,
                                          (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_Transform__ToArray__);
}


bool TransformHelper__SafeSetParentNonNull(
        UnityEngine_Transform_o *self,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o localScale; // 0:kr20_12.12
  UnityEngine_Quaternion_o localRotation; // 0:kr10_16.16

  if ( (byte_4D323C1 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D323C1 = 1;
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
  localRotation = UnityEngine_Transform__get_localRotation(self, 0);
  localScale = UnityEngine_Transform__get_localScale(self, 0);
  UnityEngine_Transform__set_parent(self, parent, 0);
  UnityEngine_Transform__set_localPosition(self, localPosition, 0);
  UnityEngine_Transform__set_localRotation(self, localRotation, 0);
  UnityEngine_Transform__set_localScale(self, localScale, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)self, 0);
  if ( !parent
    || (v8 = gameObject, (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)parent, 0)) == 0)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(gameObject, 0), !v8) )
  {
LABEL_15:
    sub_1C93D2C(gameObject, v6);
  }
  UnityEngine_GameObject__set_layer(v8, (int32_t)gameObject, 0);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
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

  v4 = tNode;
  if ( (byte_4D323C8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_Transform__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_Transform__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Transform__GetEnumerator__);
    tNode = (System_Collections_Generic_List_Transform__o *)sub_1C93AD4(&StringLiteral_113/*" "*/);
    byte_4D323C8 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  if ( !useNewRule )
  {
    v8 = 0;
    z = -100.0;
    if ( v4 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v29,
        (System_Collections_Generic_List_object__o *)v4,
        (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_Transform__GetEnumerator__);
      v30 = v29;
      while ( 1 )
      {
        v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v30,
                (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext__);
        if ( !v23 )
          break;
        current = v30.fields._current;
        if ( !v30.fields._current )
          sub_1C93D2C(v23, v24);
        if ( COERCE_FLOAT(LODWORD(UnityEngine_Transform__get_lossyScale(
                                    (UnityEngine_Transform_o *)v30.fields._current,
                                    0).fields.z)) > z )
        {
          z = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)current, 0).fields.z;
          v8 = (UnityEngine_Object_o *)current;
        }
        else if ( COERCE_FLOAT(LODWORD(UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)current, 0).fields.z)) == z )
        {
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)current, 0);
          if ( !name )
            sub_1C93D2C(0, v27);
          if ( !System_String__Contains(name, (System_String_o *)StringLiteral_113/*" "*/, 0) )
            v8 = (UnityEngine_Object_o *)current;
        }
      }
      goto LABEL_31;
    }
LABEL_35:
    sub_1C93D2C(tNode, useNewRule);
  }
  if ( !v4 )
    goto LABEL_35;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)v4,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_Transform__GetEnumerator__);
  v5 = 0;
  v6 = 0;
  v7 = -100.0;
  v30 = v29;
LABEL_6:
  v8 = (UnityEngine_Object_o *)v6;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v30,
           (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext__);
    if ( !v9 )
      break;
    v6 = v30.fields._current;
    if ( !v30.fields._current )
      sub_1C93D2C(v9, v10);
    if ( COERCE_FLOAT(LODWORD(UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)v30.fields._current, 0).fields.z)) > v7 )
    {
      v19 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)v6, 0).fields.z;
      v20 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v6, 0);
      v5 = TransformHelper__CalcPriority(v20, v21);
      v7 = v19;
      goto LABEL_6;
    }
    if ( COERCE_FLOAT(LODWORD(UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)v6, 0).fields.z)) == v7 )
    {
      v11 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v6, 0);
      if ( !v11 )
        sub_1C93D2C(0, v12);
      v13 = System_String__Contains(v11, (System_String_o *)StringLiteral_113/*" "*/, 0);
      if ( v13 )
      {
        if ( !v8 )
          sub_1C93D2C(v13, v14);
        v15 = UnityEngine_Object__get_name(v8, 0);
        if ( !v15 )
          sub_1C93D2C(0, v16);
        if ( System_String__Contains(v15, (System_String_o *)StringLiteral_113/*" "*/, 0) )
        {
          v17 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v6, 0);
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
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_Transform__Dispose__);
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
  __int64 v8; // x1
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  z = value.fields.z;
  y = value.fields.y;
  x = value.fields.x;
  if ( (byte_4D323CC & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D323CC = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0);
  if ( !v7 )
  {
    if ( !self )
      sub_1C93D2C(v7, v8);
    v9.fields.y = y;
    v9.fields.z = z;
    v9.fields.x = x;
    UnityEngine_Transform__set_localPosition(self, v9, 0);
  }
}


void TransformHelper__SetLocalPositionX(UnityEngine_Transform_o *self, float value, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D323C9 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D323C9 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0);
  if ( !v5 )
  {
    if ( !self )
      sub_1C93D2C(v5, v6);
    localPosition = UnityEngine_Transform__get_localPosition(self, 0);
    v8.fields.y = localPosition.fields.y;
    v8.fields.z = localPosition.fields.z;
    v8.fields.x = value;
    UnityEngine_Transform__set_localPosition(self, v8, 0);
  }
}


void TransformHelper__SetLocalPositionY(UnityEngine_Transform_o *self, float value, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D323CA & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D323CA = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0);
  if ( !v5 )
  {
    if ( !self )
      sub_1C93D2C(v5, v6);
    localPosition = UnityEngine_Transform__get_localPosition(self, 0);
    v8.fields.x = localPosition.fields.x;
    v8.fields.z = localPosition.fields.z;
    v8.fields.y = value;
    UnityEngine_Transform__set_localPosition(self, v8, 0);
  }
}


void TransformHelper__SetLocalPositionZ(UnityEngine_Transform_o *self, float value, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  UnityEngine_Vector3_o v7; // 0:kr14_12.12

  if ( (byte_4D323CB & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D323CB = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0);
  if ( !v5 )
  {
    if ( !self )
      sub_1C93D2C(v5, v6);
    *(_QWORD *)&v7.fields.x = (unsigned __int64)UnityEngine_Transform__get_localPosition(self, 0);
    v7.fields.z = value;
    UnityEngine_Transform__set_localPosition(self, v7, 0);
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
  __int64 v8; // x1
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  z = value.fields.z;
  y = value.fields.y;
  x = value.fields.x;
  if ( (byte_4D323CD & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D323CD = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0);
  if ( !v7 )
  {
    if ( !self )
      sub_1C93D2C(v7, v8);
    v9.fields.y = y;
    v9.fields.z = z;
    v9.fields.x = x;
    UnityEngine_Transform__set_localScale(self, v9, 0);
  }
}


void TransformHelper__SetLossyScale(
        UnityEngine_Transform_o *self,
        UnityEngine_Vector3_o value,
        const MethodInfo *method)
{
  float z; // s10
  float y; // s9
  float x; // s8
  UnityEngine_Transform_o *v7; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *parent; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v13; // s0
  float v14; // s1
  float v15; // s2
  UnityEngine_Vector3_o lossyScale; // 0:kr00_12.12
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  z = value.fields.z;
  y = value.fields.y;
  x = value.fields.x;
  if ( (byte_4D323CE & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D323CE = 1;
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
        if ( !byte_4D2A13E )
        {
          sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
          byte_4D2A13E = 1;
        }
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        v13 = static_fields->oneVector.fields.x;
        v14 = static_fields->oneVector.fields.y;
        v15 = static_fields->oneVector.fields.z;
        goto LABEL_15;
      }
      v7 = UnityEngine_Transform__get_parent(self, 0);
      if ( v7 )
      {
        lossyScale = UnityEngine_Transform__get_lossyScale(v7, 0);
        v13 = lossyScale.fields.x;
        v14 = lossyScale.fields.y;
        v15 = lossyScale.fields.z;
LABEL_15:
        if ( v15 == 0.0 )
          v17.fields.z = 0.0;
        else
          v17.fields.z = z / v15;
        if ( v14 == 0.0 )
          v17.fields.y = 0.0;
        else
          v17.fields.y = y / v14;
        if ( v13 == 0.0 )
          v17.fields.x = 0.0;
        else
          v17.fields.x = x / v13;
        UnityEngine_Transform__set_localScale(self, v17, 0);
        return;
      }
    }
    sub_1C93D2C(v7, v8);
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
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
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
  __int64 v32; // x0
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
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
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
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v79; // x21
  System_String_o *v80; // x29
  __int64 v81; // x1
  int32_t v82; // w2
  int32_t v83; // w3
  System_String_o *v84; // x4
  int32_t v85; // w5
  int64_t v86; // x6
  System_String_o *v87; // x7
  struct System_Object_array *v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  Il2CppClass **v91; // x0
  struct System_Object_array *items; // x8
  _QWORD *v93; // x9
  __int64 size; // x10
  Il2CppClass **v95; // x0
  __int64 v96; // x8
  __int64 v97; // x9
  int *v98; // x10
  __int64 v99; // x0
  const MethodInfo *v100; // x2
  System_Collections_Generic_List_Transform__o *v101; // x0
  UnityEngine_Transform_o *v102; // x21
  bool v104; // [xsp+Ch] [xbp-84h]
  System_Collections_Generic_List_object__o *v105; // [xsp+10h] [xbp-80h]
  int32_t result; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4D323C4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_BattleActorControl___);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponentsInChildren_Transform____79080816);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_Transform___);
    sub_1C93AD4(&System_Func_Transform__bool__TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_Transform__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_Transform__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Transform__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Transform___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Transform__get_Count__);
    sub_1C93AD4(&System_Collections_Generic_List_Transform__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_TransformHelper___c__DisplayClass9_0__executeGetNodeFromLvName_b__0__);
    sub_1C93AD4(&TransformHelper___c__DisplayClass9_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_113/*" "*/);
    sub_1C93AD4(&StringLiteral_16666/*"_level"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D323C4 = 1;
  }
  result = 0;
  v11 = sub_1C93D20(TransformHelper___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_100;
  *(_QWORD *)(v11 + 16) = nodename;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 16), (int32_t)nodename, v14, v15, v16, v17, v18, v19);
  v20 = *(System_String_o **)(v11 + 16);
  v21 = self;
  if ( !v20 )
    return v21;
  v12 = System_String__Equals_64461044(v20, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( (v12 & 1) != 0 )
    return v21;
  if ( !self )
    goto LABEL_100;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)self,
                       (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_BattleActorControl___);
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
                                                                                       (const MethodInfo_319BF30 *)Method_UnityEngine_Component_GetComponentsInChildren_Transform____79080816);
  v24 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_Transform__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v24,
    (Il2CppObject *)v11,
    Method_TransformHelper___c__DisplayClass9_0__executeGetNodeFromLvName_b__0__,
    0);
  v25 = System_Linq_Enumerable__Where_object_(
          ComponentsInChildren_object,
          (System_Func_TSource__bool__o *)v24,
          (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_Transform___);
  IgnoreNodeList = TransformHelper__GetIgnoreNodeList(
                     self,
                     *(System_String_o **)(v11 + 16),
                     includeInactive,
                     useNewRule,
                     isIgnore,
                     v26);
  v105 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v105,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_Transform___ctor__);
  v28 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_Transform___ctor__);
  if ( !v25 )
    goto LABEL_100;
  klass = v25->klass;
  v30 = *(unsigned __int16 *)&v25->klass->_2.rank;
  if ( *(_WORD *)&v25->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      --v30;
      p_offset += 4;
      if ( !v30 )
        goto LABEL_18;
    }
    v32 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_18:
    v32 = sub_1C69E5C(v25, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0);
  }
  v104 = includeInactive;
  v34 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v32)(
          v25,
          *(_QWORD *)(v32 + 8));
  if ( !v34 )
    sub_1C93D2C(0, v33);
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
      v38 = sub_1C69E5C(v34, System_Collections_IEnumerator_TypeInfo, 0);
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
      v42 = sub_1C69E5C(v34, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0);
    }
    v43 = (*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v34, *(_QWORD *)(v42 + 8));
    v45 = (UnityEngine_Component_o *)v43;
    if ( IgnoreNodeList && SLODWORD(IgnoreNodeList->max_length) >= 1 )
    {
      if ( !v43 )
        sub_1C93D2C(0, v44);
      v46 = 0;
      while ( 1 )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v45, 0);
        if ( !gameObject )
          sub_1C93D2C(0, v48);
        InstanceID = UnityEngine_Object__GetInstanceID(gameObject, 0);
        if ( (unsigned int)v46 >= LODWORD(IgnoreNodeList->max_length) )
          sub_1C93D34(InstanceID);
        v51 = InstanceID;
        v52 = (UnityEngine_Component_o *)IgnoreNodeList->m_Items[v46];
        if ( !v52 )
          sub_1C93D2C(0, v50);
        v53 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v52, 0);
        if ( !v53 )
          sub_1C93D2C(0, v54);
        v43 = UnityEngine_Object__GetInstanceID(v53, 0);
        if ( v51 == (_DWORD)v43 )
          break;
        if ( (int)++v46 >= SLODWORD(IgnoreNodeList->max_length) )
          goto LABEL_44;
      }
    }
    else
    {
LABEL_44:
      if ( !v45 )
        sub_1C93D2C(v43, v44);
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v45, 0);
      if ( !name )
        sub_1C93D2C(0, v56);
      v57 = System_String__Contains(name, (System_String_o *)StringLiteral_16666/*"_level"*/, 0);
      if ( v57 )
      {
        v65 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v45, 0);
        if ( !v65 )
          sub_1C93D2C(0, v66);
        v67 = System_String__IndexOf_64484116(v65, (System_String_o *)StringLiteral_16666/*"_level"*/, 0);
        v68 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v45, 0);
        if ( !v68 )
          sub_1C93D2C(0, v69);
        v70 = System_String__Substring(v68, v67 + 7, 0);
        v72 = v70;
        if ( !v70 )
          sub_1C93D2C(0, v71);
        if ( (System_String__IndexOf_64484116(v70, (System_String_o *)StringLiteral_113/*" "*/, 0) & 0x80000000) == 0 )
        {
          v73 = System_String__IndexOf_64484116(v72, (System_String_o *)StringLiteral_113/*" "*/, 0);
          v72 = System_String__Substring_64471664(v72, 0, v73, 0);
          if ( !v72 )
            sub_1C93D2C(0, v74);
        }
        v75 = System_String__Split(v72, 0x5Fu, 0, 0);
        v77 = v75;
        if ( !v75 )
          sub_1C93D2C(0, v76);
        max_length = v75->max_length;
        if ( (int)max_length >= 1 )
        {
          v79 = 0;
          while ( 1 )
          {
            if ( v79 >= (unsigned int)max_length )
              sub_1C93D34(v75);
            v80 = v77->m_Items[v79];
            result = 99;
            v75 = (System_String_array *)System_Int32__TryParse(v80, &result, 0);
            if ( ((unsigned __int8)v75 & 1) != 0 )
            {
              v75 = (System_String_array *)System_Int32__Parse(v80, 0);
              if ( (_DWORD)v75 == level )
                break;
            }
            LODWORD(max_length) = v77->max_length;
            if ( (__int64)++v79 >= (int)max_length )
              goto LABEL_21;
          }
          if ( !v105 )
            sub_1C93D2C(v75, v81);
          items = v105->fields._items;
          v93 = Method_System_Collections_Generic_List_Transform__Add__;
          ++v105->fields._version;
          if ( !items )
            sub_1C93D2C(v75, v81);
          size = v105->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v105,
              (Il2CppObject *)v45,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
          }
          else
          {
            v95 = &items->obj.klass + size;
            v105->fields._size = size + 1;
            v95[4] = (Il2CppClass *)v45;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v95 + 4), (int32_t)v45, v82, v83, v84, v85, v86, v87);
          }
        }
      }
      else
      {
        if ( !v28 )
          sub_1C93D2C(v57, v58);
        v88 = v28->fields._items;
        v89 = Method_System_Collections_Generic_List_Transform__Add__;
        ++v28->fields._version;
        if ( !v88 )
          sub_1C93D2C(v57, v58);
        v90 = v28->fields._size;
        if ( (unsigned int)v90 >= LODWORD(v88->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v28,
            (Il2CppObject *)v45,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
        }
        else
        {
          v91 = &v88->obj.klass + v90;
          v28->fields._size = v90 + 1;
          v91[4] = (Il2CppClass *)v45;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v91 + 4), (int32_t)v45, v59, v60, v61, v62, v63, v64);
        }
      }
    }
  }
  v21 = self;
  v96 = *(_QWORD *)v34;
  v97 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
  {
    v98 = (int *)(*(_QWORD *)(v96 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v98 - 1) != System_IDisposable_TypeInfo )
    {
      --v97;
      v98 += 4;
      if ( !v97 )
        goto LABEL_74;
    }
    v99 = v96 + 16LL * *v98 + 312;
  }
  else
  {
LABEL_74:
    v99 = sub_1C69E5C(v34, System_IDisposable_TypeInfo, 0);
  }
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))v99)(v34, *(_QWORD *)(v99 + 8));
  if ( !v105 )
LABEL_100:
    sub_1C93D2C(v12, v13);
  if ( v105->fields._size >= 1 )
    v101 = (System_Collections_Generic_List_Transform__o *)v105;
  else
    v101 = (System_Collections_Generic_List_Transform__o *)v28;
  v102 = TransformHelper__SelectNodeWithRule(v101, useNewRule, v100);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v102, 0, 0) || !v104 )
    return v102;
  return v21;
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

  if ( (byte_4D323C3 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D323C3 = 1;
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
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_object; // x19
  System_Func_object__bool__o *v17; // x20
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x19
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 v22; // x0
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

  if ( (byte_4D323C6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponentsInChildren_Transform____79080816);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_Transform___);
    sub_1C93AD4(&System_Func_Transform__bool__TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_Transform__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_Transform__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_TransformHelper___c__DisplayClass11_0__getNodeFromName_b__0__);
    sub_1C93AD4(&TransformHelper___c__DisplayClass11_0_TypeInfo);
    byte_4D323C6 = 1;
  }
  v7 = sub_1C93D20(TransformHelper___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = nodename,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)nodename, v10, v11, v12, v13, v14, v15),
        !self)
    || (ComponentsInChildren_object = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                                                             (UnityEngine_Component_o *)self,
                                                                                             includeInactive,
                                                                                             (const MethodInfo_319BF30 *)Method_UnityEngine_Component_GetComponentsInChildren_Transform____79080816),
        v17 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_Transform__bool__TypeInfo),
        System_Func_object__bool____ctor(
          v17,
          (Il2CppObject *)v7,
          Method_TransformHelper___c__DisplayClass11_0__getNodeFromName_b__0__,
          0),
        (v8 = System_Linq_Enumerable__Where_object_(
                ComponentsInChildren_object,
                (System_Func_TSource__bool__o *)v17,
                (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_Transform___)) == 0) )
  {
    sub_1C93D2C(v8, v9);
  }
  klass = v8->klass;
  v19 = v8;
  v20 = *(unsigned __int16 *)&v8->klass->_2.rank;
  if ( *(_WORD *)&v8->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      --v20;
      p_offset += 4;
      if ( !v20 )
        goto LABEL_10;
    }
    v22 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_10:
    v22 = sub_1C69E5C(v8, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0);
  }
  v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v22)(
          v19,
          *(_QWORD *)(v22 + 8));
  v25 = v23;
  if ( !v23 )
    sub_1C93D2C(0, v24);
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
    v29 = sub_1C69E5C(v23, System_Collections_IEnumerator_TypeInfo, 0);
  }
  if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v25, *(_QWORD *)(v29 + 8)) & 1) == 0 )
  {
    v34 = 0;
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
    v33 = sub_1C69E5C(v25, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0);
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
      v38 = sub_1C69E5C(v25, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v38)(v25, *(_QWORD *)(v38 + 8));
  }
  return v34;
}


UnityEngine_Color_o TransformHelper__get_DefaultCondTitleLabelColor(const MethodInfo *method)
{
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  result.fields.r = 1.0;
  result.fields.g = 1.0;
  result.fields.b = 1.0;
  result.fields.a = 1.0;
  return result;
}


UnityEngine_Color_o TransformHelper__get_DefaultCondTitleSpriteColor(const MethodInfo *method)
{
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  result.fields.g = 0.33333;
  result.fields.b = 0.8;
  result.fields.r = 0.0;
  result.fields.a = 1.0;
  return result;
}


void TransformHelper___c__DisplayClass11_0___ctor(
        TransformHelper___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool TransformHelper___c__DisplayClass11_0___getNodeFromName_b__0(
        TransformHelper___c__DisplayClass11_0_o *this,
        UnityEngine_Transform_o *p,
        const MethodInfo *method)
{
  TransformHelper___c__DisplayClass11_0_o *v3; // x19

  if ( !p
    || (v3 = this,
        (this = (TransformHelper___c__DisplayClass11_0_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)p,
                                                             0)) == 0)
    || (this = (TransformHelper___c__DisplayClass11_0_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0)) == 0 )
  {
    sub_1C93D2C(this, p);
  }
  return System_String__Equals_64461044((System_String_o *)this, v3->fields.nodename, 0);
}


void TransformHelper___c__DisplayClass9_0___ctor(
        TransformHelper___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool TransformHelper___c__DisplayClass9_0___executeGetNodeFromLvName_b__0(
        TransformHelper___c__DisplayClass9_0_o *this,
        UnityEngine_Transform_o *p,
        const MethodInfo *method)
{
  TransformHelper___c__DisplayClass9_0_o *v3; // x19

  if ( !p
    || (v3 = this,
        (this = (TransformHelper___c__DisplayClass9_0_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)p,
                                                            0)) == 0)
    || (this = (TransformHelper___c__DisplayClass9_0_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0)) == 0 )
  {
    sub_1C93D2C(this, p);
  }
  return System_String__Contains((System_String_o *)this, v3->fields.nodename, 0);
}