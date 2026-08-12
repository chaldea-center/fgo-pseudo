int32_t TransformHelper__CalcPriority(System_String_o *objName, const MethodInfo *method)
{
  int v3; // w8
  System_String_o *v4; // x0
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_59722E2 & 1) == 0 )
  {
    sub_2213A60(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_2213A60(&StringLiteral_16590/*"[^0-9]"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59722E2 = 1;
  }
  v3 = *(&System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished + 1);
  result = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo, method);
  v4 = System_Text_RegularExpressions_Regex__Replace(
         objName,
         (System_String_o *)StringLiteral_16590/*"[^0-9]"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0);
  System_Int32__TryParse(v4, &result, 0);
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t TransformHelper__ChangeChildsLayer(UnityEngine_Transform_o *self, int32_t layer, const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x20
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v6; // x1
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v8; // x9
  int *p_offset; // x10
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
  __int64 v20; // x21
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  System_Collections_IEnumerator_o *v25; // [xsp+28h] [xbp-38h]

  v4 = (UnityEngine_Component_o *)self;
  if ( (byte_59722DA & 1) == 0 )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    self = (UnityEngine_Transform_o *)sub_2213A60(&UnityEngine_Transform_TypeInfo);
    byte_59722DA = 1;
  }
  if ( !v4 || (self = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v4, 0)) == 0 )
    sub_2213CDC(self, *(_QWORD *)&layer);
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)self, layer, 0);
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)v4, 0);
  v25 = Enumerator;
  while ( 1 )
  {
    if ( !v25 )
      goto LABEL_34;
    klass = v25->klass;
    v8 = *(unsigned __int16 *)&v25->klass->_2.rank;
    if ( *(_WORD *)&v25->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v8;
        p_offset += 4;
        if ( !v8 )
          goto LABEL_11;
      }
      v10 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v10 = sub_224BC3C(v25, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v10)(v25, *(_QWORD *)(v10 + 8)) & 1) == 0 )
      break;
    v11 = v25->klass;
    v12 = *(unsigned __int16 *)&v25->klass->_2.rank;
    if ( *(_WORD *)&v25->klass->_2.rank )
    {
      v13 = (System_Collections_IEnumerator_c **)&v11->_1.interfaceOffsets->offset;
      while ( *(v13 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        v13 += 2;
        if ( !v12 )
          goto LABEL_18;
      }
      v14 = (__int64)&v11->vtable[*(_DWORD *)v13 + 1];
    }
    else
    {
LABEL_18:
      v14 = sub_224BC3C(v25, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v15 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v14)(
                                       v25,
                                       *(_QWORD *)(v14 + 8));
    if ( v15 )
    {
      naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
      if ( v15->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (UnityEngine_Transform_c *)v15->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_221405C(v15, UnityEngine_Transform_TypeInfo, v16);
LABEL_34:
        sub_2213CDC(Enumerator, v6);
      }
    }
    Enumerator = (System_Collections_IEnumerator_o *)TransformHelper__ChangeChildsLayer(v15, layer, v16);
  }
  v18 = sub_2213BB4(v25, System_IDisposable_TypeInfo);
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
          goto LABEL_29;
      }
      v23 = v19 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_29:
      v23 = sub_224BC3C(v18, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v23)(v20, *(_QWORD *)(v23 + 8));
  }
  return layer;
}


// local variable allocation has failed, the output may be wrong!
void TransformHelper__DestroyChildren(UnityEngine_Transform_o *self, bool isImmediate, const MethodInfo *method)
{
  UnityEngine_Transform_o *Child; // x0
  __int64 v6; // x1
  int32_t childCount; // w0
  int v8; // w20
  __int64 v9; // x1
  UnityEngine_Object_o *gameObject; // x21
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v12; // x1
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v14; // x9
  int *p_offset; // x10
  __int64 v16; // x0
  System_Collections_IEnumerator_c *v17; // x8
  __int64 v18; // x9
  System_Collections_IEnumerator_c **v19; // x10
  __int64 v20; // x0
  UnityEngine_Component_o *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  UnityEngine_Component_o *v24; // x19
  __int64 naturalAligment; // x9
  UnityEngine_GameObject_o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x1
  UnityEngine_Object_o *v29; // x19
  __int64 v30; // x0
  __int64 v31; // x8
  __int64 v32; // x20
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  System_Collections_IEnumerator_o *v36; // [xsp+28h] [xbp-28h]

  if ( (byte_59722DB & 1) == 0 )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UnityEngine_Transform_TypeInfo);
    byte_59722DB = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isImmediate);
  Child = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0);
  if ( ((unsigned __int8)Child & 1) == 0 )
  {
    if ( isImmediate )
    {
      if ( !self )
        goto LABEL_51;
      childCount = UnityEngine_Transform__get_childCount(self, 0);
      if ( childCount - 1 >= 0 )
      {
        v8 = childCount;
        while ( 1 )
        {
          Child = UnityEngine_Transform__GetChild(self, --v8, 0);
          if ( !Child )
            break;
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)Child,
                                                 0);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
          UnityEngine_Object__DestroyImmediate_83460132(gameObject, 0);
          if ( v8 <= 0 )
            return;
        }
LABEL_51:
        sub_2213CDC(Child, v6);
      }
    }
    else
    {
      if ( !self )
        goto LABEL_51;
      Enumerator = UnityEngine_Transform__GetEnumerator(self, 0);
      v36 = Enumerator;
      while ( 1 )
      {
        if ( !v36 )
          goto LABEL_48;
        klass = v36->klass;
        v14 = *(unsigned __int16 *)&v36->klass->_2.rank;
        if ( *(_WORD *)&v36->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v14;
            p_offset += 4;
            if ( !v14 )
              goto LABEL_22;
          }
          v16 = (__int64)&klass->vtable[*p_offset];
        }
        else
        {
LABEL_22:
          v16 = sub_224BC3C(v36, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v16)(v36, *(_QWORD *)(v16 + 8)) & 1) == 0 )
          break;
        v17 = v36->klass;
        v18 = *(unsigned __int16 *)&v36->klass->_2.rank;
        if ( *(_WORD *)&v36->klass->_2.rank )
        {
          v19 = (System_Collections_IEnumerator_c **)&v17->_1.interfaceOffsets->offset;
          while ( *(v19 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v18;
            v19 += 2;
            if ( !v18 )
              goto LABEL_29;
          }
          v20 = (__int64)&v17->vtable[*(_DWORD *)v19 + 1];
        }
        else
        {
LABEL_29:
          v20 = sub_224BC3C(v36, System_Collections_IEnumerator_TypeInfo, 1);
        }
        v21 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v20)(
                                           v36,
                                           *(_QWORD *)(v20 + 8));
        v24 = v21;
        if ( !v21 )
          sub_2213CDC(0, v22);
        naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
        if ( v21->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (UnityEngine_Transform_c *)v21->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
        {
          sub_221405C(v21, UnityEngine_Transform_TypeInfo, v23);
LABEL_48:
          sub_2213CDC(Enumerator, v12);
        }
        v26 = UnityEngine_Component__get_gameObject(v21, 0);
        if ( !v26 )
          sub_2213CDC(0, v27);
        UnityEngine_GameObject__SetActive(v26, 0, 0);
        v29 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v24, 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
        UnityEngine_Object__Destroy_83459800(v29, 0);
      }
      v30 = sub_2213BB4(v36, System_IDisposable_TypeInfo);
      if ( v30 )
      {
        v31 = *(_QWORD *)v30;
        v32 = v30;
        v33 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
        {
          v34 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
          {
            --v33;
            v34 += 4;
            if ( !v33 )
              goto LABEL_43;
          }
          v35 = v31 + 16LL * *v34 + 312;
        }
        else
        {
LABEL_43:
          v35 = sub_224BC3C(v30, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v35)(v32, *(_QWORD *)(v35 + 8));
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
  __int64 v11; // x1
  UnityEngine_Object_o *NodeFromLvName; // x19

  if ( (byte_59722DD & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59722DD = 1;
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  return UnityEngine_Object__op_Inequality(NodeFromLvName, 0, 0);
}


void TransformHelper__FlipLocalScaleX(UnityEngine_Transform_o *self, const MethodInfo *method)
{
  _BOOL8 v3; // x0
  __int64 v4; // x1
  UnityEngine_Vector3_o localScale; // 0:kr00_12.12
  UnityEngine_Vector3_o v6; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59722EB & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59722EB = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0);
  if ( !v3 )
  {
    if ( !self )
      sub_2213CDC(v3, v4);
    localScale = UnityEngine_Transform__get_localScale(self, 0);
    v6.fields.y = localScale.fields.y;
    v6.fields.z = localScale.fields.z;
    v6.fields.x = -localScale.fields.x;
    UnityEngine_Transform__set_localScale(self, v6, 0);
  }
}


UnityEngine_Transform_array *TransformHelper__GetIgnoreNodeList(
        UnityEngine_Transform_o *parentTransform,
        System_String_o *nodename,
        bool includeInactive,
        bool useNewRule,
        bool isIgnore,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v10; // x22
  System_Object_array *ComponentsInChildren_object; // x23
  System_Collections_Generic_List_object__o *v12; // x24
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v14; // x26
  Il2CppObject **m_Items; // x29
  UnityEngine_Object_o *v16; // x25
  __int64 v17; // x1
  Il2CppObject *Component_object; // x25
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v20; // x6
  __int64 v21; // x1
  UnityEngine_Object_o *NodeFromLvName; // x25
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  v10 = (UnityEngine_Component_o *)parentTransform;
  if ( (byte_59722E0 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_BattleActorControl___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentsInChildren_Transform____91731944);
    sub_2213A60(&Method_System_Collections_Generic_List_Transform__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_Transform__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_Transform___ctor__);
    sub_2213A60(&System_Collections_Generic_List_Transform__TypeInfo);
    parentTransform = (UnityEngine_Transform_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59722E0 = 1;
  }
  if ( !isIgnore )
    return 0;
  if ( !v10 )
    goto LABEL_31;
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  v10,
                                  1,
                                  (const MethodInfo_38217CC *)Method_UnityEngine_Component_GetComponentsInChildren_Transform____91731944);
  v12 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_Transform___ctor__);
  if ( !ComponentsInChildren_object )
    goto LABEL_31;
  max_length = ComponentsInChildren_object->max_length;
  if ( (int)max_length >= 1 )
  {
    v14 = 0;
    m_Items = ComponentsInChildren_object->m_Items;
    do
    {
      if ( v14 >= (unsigned int)max_length )
LABEL_30:
        sub_2213CE4(parentTransform);
      v16 = (UnityEngine_Object_o *)m_Items[v14];
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, nodename);
      parentTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v10, v16, 0);
      if ( ((unsigned __int8)parentTransform & 1) == 0 )
      {
        if ( v14 >= LODWORD(ComponentsInChildren_object->max_length) )
          goto LABEL_30;
        parentTransform = (UnityEngine_Transform_o *)m_Items[v14];
        if ( !parentTransform )
          goto LABEL_31;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)parentTransform,
                             (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_BattleActorControl___);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
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
                                                     includeInactive,
                                                     useNewRule,
                                                     0,
                                                     v20);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
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
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
            }
            else
            {
              v32 = &items->obj.klass + size;
              v12->fields._size = size + 1;
              v32[4] = (Il2CppClass *)NodeFromLvName;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)(v32 + 4),
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
    sub_2213CDC(parentTransform, nodename);
  return (UnityEngine_Transform_array *)System_Collections_Generic_List_object___ToArray(
                                          v12,
                                          (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_Transform__ToArray__);
}


bool TransformHelper__IsParentWorldMirrored(UnityEngine_Transform_o *self, const MethodInfo *method)
{
  int v3; // w8
  UnityEngine_Transform_o *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *parent; // x20
  UnityEngine_Matrix4x4_o v9; // [xsp+0h] [xbp-A0h] BYREF
  UnityEngine_Matrix4x4_o v10; // [xsp+40h] [xbp-60h] BYREF

  if ( (byte_59722EA & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59722EA = 1;
  }
  v3 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  memset(&v10, 0, sizeof(v10));
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0);
  if ( ((unsigned __int8)v4 & 1) != 0 )
    return 0;
  if ( !self )
    goto LABEL_14;
  parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(self, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Equality(parent, 0, 0) )
    return 0;
  v4 = UnityEngine_Transform__get_parent(self, 0);
  if ( !v4 )
LABEL_14:
    sub_2213CDC(v4, v5);
  UnityEngine_Transform__get_localToWorldMatrix(&v9, v4, 0);
  v10 = v9;
  return UnityEngine_Matrix4x4__get_determinant(&v10, 0) < 0.0;
}


bool TransformHelper__SafeSetParentNonNull(
        UnityEngine_Transform_o *self,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v9; // x20
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o localScale; // 0:kr20_12.12
  UnityEngine_Quaternion_o localRotation; // 0:kr10_16.16

  if ( (byte_59722DC & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59722DC = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, parent);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0) )
    return 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
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
    || (v9 = gameObject, (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)parent, 0)) == 0)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(gameObject, 0), !v9) )
  {
LABEL_15:
    sub_2213CDC(gameObject, v7);
  }
  UnityEngine_GameObject__set_layer(v9, (int32_t)gameObject, 0);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Transform_o *TransformHelper__SelectNodeWithRule(
        System_Collections_Generic_List_Transform__o *tNode,
        bool useNewRule,
        const MethodInfo *method)
{
  System_Collections_Generic_List_Transform__o *v4; // x20
  float v5; // s8
  int32_t v6; // w22
  Il2CppObject *v7; // x21
  UnityEngine_Transform_o *v8; // x19
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
  System_String_o *v19; // x0
  const MethodInfo *v20; // x1
  float z; // s8
  struct System_Collections_Generic_List_T__o *list; // x21
  _BOOL8 v23; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x20
  System_String_o *name; // x0
  __int64 v27; // x1
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-70h] BYREF

  v4 = tNode;
  if ( (byte_59722E3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_Transform__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_Transform__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Transform__GetEnumerator__);
    tNode = (System_Collections_Generic_List_Transform__o *)sub_2213A60(&StringLiteral_113/*" "*/);
    byte_59722E3 = 1;
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
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_Transform__GetEnumerator__);
      v30 = v29;
      v29.fields._list = 0;
      *(_QWORD *)&v29.fields._index = &v30;
      while ( 1 )
      {
        v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v30,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext__);
        if ( !v23 )
          break;
        current = v30.fields._current;
        if ( !v30.fields._current )
          sub_2213CDC(v23, v24);
        if ( COERCE_FLOAT(LODWORD(UnityEngine_Transform__get_lossyScale(
                                    (UnityEngine_Transform_o *)v30.fields._current,
                                    0).fields.z)) > z )
        {
          z = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)current, 0).fields.z;
          v8 = (UnityEngine_Transform_o *)current;
        }
        else if ( COERCE_FLOAT(LODWORD(UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)current, 0).fields.z)) == z )
        {
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)current, 0);
          if ( !name )
            sub_2213CDC(0, v27);
          if ( !System_String__Contains(name, (System_String_o *)StringLiteral_113/*" "*/, 0) )
            v8 = (UnityEngine_Transform_o *)current;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v30,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_Transform__Dispose__);
      return v8;
    }
LABEL_39:
    sub_2213CDC(tNode, useNewRule);
  }
  if ( !v4 )
    goto LABEL_39;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)v4,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_Transform__GetEnumerator__);
  v5 = -100.0;
  v6 = 0;
  v7 = 0;
  v30 = v29;
  v29.fields._list = 0;
  *(_QWORD *)&v29.fields._index = &v30;
LABEL_6:
  v8 = (UnityEngine_Transform_o *)v7;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v30,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext__);
    if ( !v9 )
      break;
    v7 = v30.fields._current;
    if ( !v30.fields._current )
      sub_2213CDC(v9, v10);
    if ( COERCE_FLOAT(LODWORD(UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)v30.fields._current, 0).fields.z)) > v5 )
    {
      v5 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)v7, 0).fields.z;
      v19 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v7, 0);
      v6 = TransformHelper__CalcPriority(v19, v20);
      goto LABEL_6;
    }
    if ( COERCE_FLOAT(LODWORD(UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)v7, 0).fields.z)) == v5 )
    {
      v11 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v7, 0);
      if ( !v11 )
        sub_2213CDC(0, v12);
      v13 = System_String__Contains(v11, (System_String_o *)StringLiteral_113/*" "*/, 0);
      if ( v13 )
      {
        if ( !v8 )
          sub_2213CDC(v13, v14);
        v15 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v8, 0);
        if ( !v15 )
          sub_2213CDC(0, v16);
        if ( System_String__Contains(v15, (System_String_o *)StringLiteral_113/*" "*/, 0) )
        {
          v17 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v7, 0);
          if ( v6 > TransformHelper__CalcPriority(v17, v18) )
            v7 = (Il2CppObject *)v8;
        }
        goto LABEL_6;
      }
    }
  }
  list = v29.fields._list;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    *(System_Collections_Generic_List_Enumerator_object__o **)&v29.fields._index,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_Transform__Dispose__);
  if ( list )
    sub_2213CD4(list);
  return v8;
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
  if ( (byte_59722E7 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59722E7 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0);
  if ( !v7 )
  {
    if ( !self )
      sub_2213CDC(v7, v8);
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

  if ( (byte_59722E4 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59722E4 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0);
  if ( !v5 )
  {
    if ( !self )
      sub_2213CDC(v5, v6);
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

  if ( (byte_59722E5 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59722E5 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0);
  if ( !v5 )
  {
    if ( !self )
      sub_2213CDC(v5, v6);
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

  if ( (byte_59722E6 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59722E6 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0);
  if ( !v5 )
  {
    if ( !self )
      sub_2213CDC(v5, v6);
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
  if ( (byte_59722E8 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59722E8 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0);
  if ( !v7 )
  {
    if ( !self )
      sub_2213CDC(v7, v8);
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
  __int64 v9; // x1
  UnityEngine_Object_o *parent; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v14; // s0
  float v15; // s1
  float v16; // s2
  UnityEngine_Vector3_o lossyScale; // 0:kr00_12.12
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  z = value.fields.z;
  y = value.fields.y;
  x = value.fields.x;
  if ( (byte_59722E9 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59722E9 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v7 = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0);
  if ( ((unsigned __int8)v7 & 1) == 0 )
  {
    if ( self )
    {
      parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(self, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
      if ( !UnityEngine_Object__op_Inequality(parent, 0, 0) )
      {
        if ( !byte_5969AE5 )
        {
          sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE5 = 1;
        }
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        v14 = static_fields->oneVector.fields.x;
        v15 = static_fields->oneVector.fields.y;
        v16 = static_fields->oneVector.fields.z;
        goto LABEL_15;
      }
      v7 = UnityEngine_Transform__get_parent(self, 0);
      if ( v7 )
      {
        lossyScale = UnityEngine_Transform__get_lossyScale(v7, 0);
        v14 = lossyScale.fields.x;
        v15 = lossyScale.fields.y;
        v16 = lossyScale.fields.z;
LABEL_15:
        if ( v16 == 0.0 )
          v18.fields.z = 0.0;
        else
          v18.fields.z = z / v16;
        if ( v15 == 0.0 )
          v18.fields.y = 0.0;
        else
          v18.fields.y = y / v15;
        if ( v14 == 0.0 )
          v18.fields.x = 0.0;
        else
          v18.fields.x = x / v14;
        UnityEngine_Transform__set_localScale(self, v18, 0);
        return;
      }
    }
    sub_2213CDC(v7, v8);
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
  __int64 v10; // x23
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x0
  UnityEngine_Transform_o *v20; // x20
  __int64 v21; // x1
  Il2CppObject *Component_object; // x25
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_object; // x25
  System_Func_object__bool__o *v24; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x26
  const MethodInfo *v26; // x5
  UnityEngine_Transform_array *IgnoreNodeList; // x25
  System_Collections_Generic_List_object__o *v28; // x23
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  __int64 v30; // x9
  int32_t *p_offset; // x10
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 v34; // x1
  System_String_array *v35; // x26
  Il2CppClass *v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  const MethodInfo *v40; // x2
  System_String_array *v41; // x26
  Il2CppClass *v42; // x8
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0
  UnityEngine_Component_o *v46; // x26
  __int64 v47; // x28
  UnityEngine_Object_o *gameObject; // x0
  __int64 v49; // x1
  __int64 InstanceID; // x0
  __int64 v51; // x1
  int v52; // w27
  UnityEngine_Component_o *v53; // x0
  UnityEngine_Object_o *v54; // x0
  __int64 v55; // x1
  System_String_o *name; // x0
  __int64 v57; // x1
  _BOOL8 v58; // x0
  __int64 v59; // x1
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  System_String_o *v66; // x0
  __int64 v67; // x1
  int32_t v68; // w27
  System_String_o *v69; // x0
  __int64 v70; // x1
  System_String_o *v71; // x0
  __int64 v72; // x1
  System_String_o *v73; // x27
  int32_t v74; // w0
  __int64 v75; // x1
  System_String_array *v76; // x27
  il2cpp_array_size_t v77; // x8
  unsigned __int64 v78; // x21
  System_String_o *v79; // x28
  System_String_o *v80; // x2
  System_String_o *v81; // x3
  int32_t v82; // w4
  int32_t v83; // w5
  bool v84; // w6
  bool v85; // w7
  struct System_Object_array *v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  Il2CppClass **v89; // x0
  struct System_Object_array *items; // x8
  _QWORD *v91; // x9
  __int64 size; // x10
  Il2CppClass **v93; // x0
  System_String_array *v94; // x25
  Il2CppClass *v95; // x8
  __int64 v96; // x9
  int *v97; // x10
  __int64 v98; // x0
  System_Collections_Generic_List_Transform__o *v99; // x0
  __int64 v100; // x1
  UnityEngine_Transform_o *v101; // x21
  System_Collections_Generic_List_object__o *v103; // [xsp+8h] [xbp-98h]
  int32_t result; // [xsp+34h] [xbp-6Ch] BYREF
  System_String_array *v108; // [xsp+38h] [xbp-68h]

  if ( (byte_59722DF & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_BattleActorControl___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentsInChildren_Transform____91731944);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_Transform___);
    sub_2213A60(&System_Func_Transform__bool__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_Transform__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_Transform__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Transform__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_Transform___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_Transform__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_Transform__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_TransformHelper___c__DisplayClass9_0__executeGetNodeFromLvName_b__0__);
    sub_2213A60(&TransformHelper___c__DisplayClass9_0_TypeInfo);
    sub_2213A60(&StringLiteral_113/*" "*/);
    sub_2213A60(&StringLiteral_17236/*"_level"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59722DF = 1;
  }
  v108 = 0;
  result = 0;
  v10 = sub_2213CCC(TransformHelper___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  if ( !v10 )
    goto LABEL_107;
  *(_QWORD *)(v10 + 16) = nodename;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v10 + 16), (int32_t)nodename, v13, v14, v15, v16, v17, v18);
  v19 = *(System_String_o **)(v10 + 16);
  v20 = self;
  if ( !v19 )
    return v20;
  v11 = System_String__Equals_75686512(v19, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( (v11 & 1) != 0 )
    return v20;
  if ( !self )
    goto LABEL_107;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)self,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_BattleActorControl___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
  v11 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( level == -1 && (v11 & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_107;
    level = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)Component_object, 0) + 1;
  }
  ComponentsInChildren_object = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                                                       (UnityEngine_Component_o *)self,
                                                                                       includeInactive,
                                                                                       (const MethodInfo_38217CC *)Method_UnityEngine_Component_GetComponentsInChildren_Transform____91731944);
  v24 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_Transform__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v24,
    (Il2CppObject *)v10,
    Method_TransformHelper___c__DisplayClass9_0__executeGetNodeFromLvName_b__0__,
    0);
  v25 = System_Linq_Enumerable__Where_object_(
          ComponentsInChildren_object,
          (System_Func_TSource__bool__o *)v24,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_Transform___);
  IgnoreNodeList = TransformHelper__GetIgnoreNodeList(
                     self,
                     *(System_String_o **)(v10 + 16),
                     includeInactive,
                     useNewRule,
                     isIgnore,
                     v26);
  v103 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v103,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_Transform___ctor__);
  v28 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_Transform___ctor__);
  if ( !v25 )
    goto LABEL_107;
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
    v32 = sub_224BC3C(v25, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0);
  }
  v33 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v32)(
          v25,
          *(_QWORD *)(v32 + 8));
  v108 = (System_String_array *)v33;
  if ( !v33 )
LABEL_96:
    sub_2213CDC(v33, v34);
  v35 = (System_String_array *)v33;
  while ( 1 )
  {
    v36 = v35->obj.klass;
    v37 = *(unsigned __int16 *)&v35->obj.klass->_2.rank;
    if ( *(_WORD *)&v35->obj.klass->_2.rank )
    {
      v38 = &v36->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v38 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_26;
      }
      v39 = (__int64)&v36->vtable[*v38];
    }
    else
    {
LABEL_26:
      v39 = sub_224BC3C(v35, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v11 = (*(__int64 (__fastcall **)(System_String_array *, _QWORD))v39)(v35, *(_QWORD *)(v39 + 8));
    if ( (v11 & 1) == 0 )
      break;
    v41 = v108;
    if ( !v108 )
      sub_2213CDC(v11, v12);
    v42 = v108->obj.klass;
    v43 = *(unsigned __int16 *)&v108->obj.klass->_2.rank;
    if ( *(_WORD *)&v108->obj.klass->_2.rank )
    {
      v44 = &v42->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v44 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        --v43;
        v44 += 4;
        if ( !v43 )
          goto LABEL_34;
      }
      v45 = (__int64)&v42->vtable[*v44];
    }
    else
    {
LABEL_34:
      v45 = sub_224BC3C(v108, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0);
    }
    v33 = (*(__int64 (__fastcall **)(System_String_array *, _QWORD))v45)(v41, *(_QWORD *)(v45 + 8));
    v46 = (UnityEngine_Component_o *)v33;
    if ( IgnoreNodeList && SLODWORD(IgnoreNodeList->max_length) >= 1 )
    {
      if ( !v33 )
        sub_2213CDC(0, v34);
      v47 = 0;
      while ( 1 )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v46, 0);
        if ( !gameObject )
          sub_2213CDC(0, v49);
        InstanceID = UnityEngine_Object__GetInstanceID(gameObject, 0);
        if ( (unsigned int)v47 >= LODWORD(IgnoreNodeList->max_length) )
          sub_2213CE4(InstanceID);
        v52 = InstanceID;
        v53 = (UnityEngine_Component_o *)IgnoreNodeList->m_Items[v47];
        if ( !v53 )
          sub_2213CDC(0, v51);
        v54 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v53, 0);
        if ( !v54 )
          sub_2213CDC(0, v55);
        v33 = UnityEngine_Object__GetInstanceID(v54, 0);
        if ( v52 == (_DWORD)v33 )
          break;
        if ( (int)++v47 >= SLODWORD(IgnoreNodeList->max_length) )
          goto LABEL_46;
      }
    }
    else
    {
LABEL_46:
      if ( !v46 )
        sub_2213CDC(v33, v34);
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v46, 0);
      if ( !name )
        sub_2213CDC(0, v57);
      v58 = System_String__Contains(name, (System_String_o *)StringLiteral_17236/*"_level"*/, 0);
      if ( v58 )
      {
        v66 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v46, 0);
        if ( !v66 )
          sub_2213CDC(0, v67);
        v68 = System_String__IndexOf_75715196(v66, (System_String_o *)StringLiteral_17236/*"_level"*/, 0);
        v69 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v46, 0);
        if ( !v69 )
          sub_2213CDC(0, v70);
        v71 = System_String__Substring(v69, v68 + 7, 0);
        v73 = v71;
        if ( !v71 )
          sub_2213CDC(0, v72);
        if ( (System_String__IndexOf_75715196(v71, (System_String_o *)StringLiteral_113/*" "*/, 0) & 0x80000000) == 0 )
        {
          v74 = System_String__IndexOf_75715196(v73, (System_String_o *)StringLiteral_113/*" "*/, 0);
          v73 = System_String__Substring_75702848(v73, 0, v74, 0);
          if ( !v73 )
            sub_2213CDC(0, v75);
        }
        v33 = (__int64)System_String__Split(v73, 0x5Fu, 0, 0);
        v76 = (System_String_array *)v33;
        if ( !v33 )
          sub_2213CDC(0, v34);
        v77 = *(_QWORD *)(v33 + 24);
        if ( (int)v77 >= 1 )
        {
          v78 = 0;
          while ( 1 )
          {
            if ( v78 >= (unsigned int)v77 )
              sub_2213CE4(v33);
            v79 = v76->m_Items[v78];
            result = 99;
            v33 = System_Int32__TryParse(v79, &result, 0);
            if ( (v33 & 1) != 0 )
            {
              v33 = System_Int32__Parse(v79, 0);
              if ( (_DWORD)v33 == level )
                break;
            }
            LODWORD(v77) = v76->max_length;
            if ( (__int64)++v78 >= (int)v77 )
              goto LABEL_67;
          }
          if ( !v103
            || (items = v103->fields._items,
                v91 = Method_System_Collections_Generic_List_Transform__Add__,
                ++v103->fields._version,
                !items) )
          {
            sub_2213CDC(v33, v34);
          }
          size = v103->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v103,
              (Il2CppObject *)v46,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
          }
          else
          {
            v93 = &items->obj.klass + size;
            v103->fields._size = size + 1;
            v93[4] = (Il2CppClass *)v46;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v93 + 4), (int32_t)v46, v80, v81, v82, v83, v84, v85);
          }
        }
      }
      else
      {
        if ( !v28
          || (v86 = v28->fields._items,
              v87 = Method_System_Collections_Generic_List_Transform__Add__,
              ++v28->fields._version,
              !v86) )
        {
          sub_2213CDC(v58, v59);
        }
        v88 = v28->fields._size;
        if ( (unsigned int)v88 >= LODWORD(v86->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v28,
            (Il2CppObject *)v46,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
        }
        else
        {
          v89 = &v86->obj.klass + v88;
          v28->fields._size = v88 + 1;
          v89[4] = (Il2CppClass *)v46;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v89 + 4), (int32_t)v46, v60, v61, v62, v63, v64, v65);
        }
      }
    }
LABEL_67:
    v35 = v108;
    if ( !v108 )
      goto LABEL_96;
  }
  v20 = self;
  v94 = v108;
  if ( v108 )
  {
    v95 = v108->obj.klass;
    v96 = *(unsigned __int16 *)&v108->obj.klass->_2.rank;
    if ( *(_WORD *)&v108->obj.klass->_2.rank )
    {
      v97 = &v95->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v97 - 1) != System_IDisposable_TypeInfo )
      {
        --v96;
        v97 += 4;
        if ( !v96 )
          goto LABEL_79;
      }
      v98 = (__int64)&v95->vtable[*v97];
    }
    else
    {
LABEL_79:
      v98 = sub_224BC3C(v108, System_IDisposable_TypeInfo, 0);
    }
    v11 = (*(__int64 (__fastcall **)(System_String_array *, _QWORD))v98)(v94, *(_QWORD *)(v98 + 8));
  }
  if ( !v103 )
LABEL_107:
    sub_2213CDC(v11, v12);
  if ( v103->fields._size >= 1 )
    v99 = (System_Collections_Generic_List_Transform__o *)v103;
  else
    v99 = (System_Collections_Generic_List_Transform__o *)v28;
  v101 = TransformHelper__SelectNodeWithRule(v99, useNewRule, v40);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v100);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v101, 0, 0) || !includeInactive )
    return v101;
  return v20;
}


UnityEngine_Transform_o *TransformHelper__getNodeFromLvName(
        UnityEngine_Transform_o *self,
        System_String_o *nodename,
        int32_t level,
        bool useNewRule,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6
  __int64 v10; // x1
  UnityEngine_Transform_o *NodeFromLvName; // x23
  const MethodInfo *v12; // x6

  if ( (byte_59722DE & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59722DE = 1;
  }
  NodeFromLvName = TransformHelper__executeGetNodeFromLvName(self, nodename, level, 0, useNewRule, 1, v5);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)NodeFromLvName, 0, 0) )
    return TransformHelper__executeGetNodeFromLvName(self, nodename, level, 1, useNewRule, 1, v12);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_object; // x19
  System_Func_object__bool__o *v17; // x20
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x19
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x8
  __int64 v26; // x19
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 v31; // x1
  __int64 v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  UnityEngine_Transform_o *v36; // x20
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  __int64 v42; // [xsp+18h] [xbp-38h]

  if ( (byte_59722E1 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponentsInChildren_Transform____91731944);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_Transform___);
    sub_2213A60(&System_Func_Transform__bool__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_Transform__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_Transform__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_TransformHelper___c__DisplayClass11_0__getNodeFromName_b__0__);
    sub_2213A60(&TransformHelper___c__DisplayClass11_0_TypeInfo);
    byte_59722E1 = 1;
  }
  v7 = sub_2213CCC(TransformHelper___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = nodename,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)nodename, v10, v11, v12, v13, v14, v15),
        !self)
    || (ComponentsInChildren_object = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                                                             (UnityEngine_Component_o *)self,
                                                                                             includeInactive,
                                                                                             (const MethodInfo_38217CC *)Method_UnityEngine_Component_GetComponentsInChildren_Transform____91731944),
        v17 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_Transform__bool__TypeInfo),
        System_Func_object__bool____ctor(
          v17,
          (Il2CppObject *)v7,
          Method_TransformHelper___c__DisplayClass11_0__getNodeFromName_b__0__,
          0),
        (v8 = System_Linq_Enumerable__Where_object_(
                ComponentsInChildren_object,
                (System_Func_TSource__bool__o *)v17,
                (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_Transform___)) == 0) )
  {
    sub_2213CDC(v8, v9);
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
    v22 = sub_224BC3C(v8, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0);
  }
  v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v22)(
          v19,
          *(_QWORD *)(v22 + 8));
  v42 = v23;
  if ( !v23 )
    sub_2213CDC(0, v24);
  v25 = *(_QWORD *)v23;
  v26 = v23;
  v27 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
  {
    v28 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
    while ( *((System_Collections_IEnumerator_c **)v28 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_17;
    }
    v29 = v25 + 16LL * *v28 + 312;
  }
  else
  {
LABEL_17:
    v29 = sub_224BC3C(v23, System_Collections_IEnumerator_TypeInfo, 0);
  }
  v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v26, *(_QWORD *)(v29 + 8));
  if ( (v30 & 1) != 0 )
  {
    if ( !v42 )
      sub_2213CDC(v30, v31);
    v32 = *(_QWORD *)v42;
    v33 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
    {
      v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v34 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_25;
      }
      v35 = v32 + 16LL * *v34 + 312;
    }
    else
    {
LABEL_25:
      v35 = sub_224BC3C(v42, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0);
    }
    v36 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v42, *(_QWORD *)(v35 + 8));
  }
  else
  {
    v36 = 0;
  }
  if ( v42 )
  {
    v37 = *(_QWORD *)v42;
    v38 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
    {
      v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_34;
      }
      v40 = v37 + 16LL * *v39 + 312;
    }
    else
    {
LABEL_34:
      v40 = sub_224BC3C(v42, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v40)(v42, *(_QWORD *)(v40 + 8));
  }
  return v36;
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

  result.fields.r = 0.0;
  result.fields.a = 1.0;
  result.fields.g = 0.33333;
  result.fields.b = 0.8;
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
    sub_2213CDC(this, p);
  }
  return System_String__Equals_75686512((System_String_o *)this, v3->fields.nodename, 0);
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
    sub_2213CDC(this, p);
  }
  return System_String__Contains((System_String_o *)this, v3->fields.nodename, 0);
}