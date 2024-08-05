int32_t __fastcall TransformHelper__CalcPriority(System_String_o *objName, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *v5; // x0
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FFB9F & 1) == 0 )
  {
    sub_1B64870(&System_Text_RegularExpressions_Regex_TypeInfo, method);
    sub_1B64870(&StringLiteral_15902/*"[^0-9]"*/, v3);
    sub_1B64870(&StringLiteral_1/*""*/, v4);
    byte_49FFB9F = 1;
  }
  result = 0;
  if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
  v5 = System_Text_RegularExpressions_Regex__Replace(
         objName,
         (System_String_o *)StringLiteral_15902/*"[^0-9]"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0LL);
  System_Int32__TryParse(v5, &result, 0LL);
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
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v13; // x8
  __int64 v14; // x9
  System_Collections_IEnumerator_c **v15; // x10
  __int64 v16; // x0
  UnityEngine_Transform_o *v17; // x0
  const MethodInfo *v18; // x2
  __int64 methodPtr_low; // x9
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x20
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0

  v4 = (UnityEngine_Component_o *)self;
  if ( (byte_49FFB97 & 1) == 0 )
  {
    sub_1B64870(&System_IDisposable_TypeInfo, *(_QWORD *)&layer);
    sub_1B64870(&System_Collections_IEnumerator_TypeInfo, v5);
    self = (UnityEngine_Transform_o *)sub_1B64870(&UnityEngine_Transform_TypeInfo, v6);
    byte_49FFB97 = 1;
  }
  if ( !v4 || (self = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v4, 0LL)) == 0LL )
LABEL_33:
    sub_1B64ACC(self, *(_QWORD *)&layer);
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)self, layer, 0LL);
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)v4, 0LL);
  if ( !Enumerator )
    sub_1B64ACC(0LL, v7);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BB6850(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v15 = (System_Collections_IEnumerator_c **)&v13->_1.interfaceOffsets->offset;
      while ( *(v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 2;
        if ( !v14 )
          goto LABEL_17;
      }
      v16 = (__int64)&v13->vtable[*(_DWORD *)v15 + 1].method;
    }
    else
    {
LABEL_17:
      v16 = sub_1BB6850(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v17 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v16)(
                                       Enumerator,
                                       *(_QWORD *)(v16 + 8));
    if ( v17 )
    {
      methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v17->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (UnityEngine_Transform_c *)v17->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_1B64D8C(v17);
        goto LABEL_33;
      }
    }
    TransformHelper__ChangeChildsLayer(v17, layer, v18);
  }
  v20 = sub_1B649AC(Enumerator, System_IDisposable_TypeInfo);
  if ( v20 )
  {
    v21 = *(_QWORD *)v20;
    v22 = v20;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_28;
      }
      v25 = v21 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_28:
      v25 = sub_1BB6850(v20, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8));
  }
  return layer;
}


void __fastcall TransformHelper__DestroyChildren(UnityEngine_Transform_o *self, const MethodInfo *method)
{
  UnityEngine_Component_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v12; // x8
  __int64 v13; // x9
  System_Collections_IEnumerator_c **v14; // x10
  __int64 v15; // x0
  UnityEngine_Component_o *v16; // x0
  __int64 v17; // x1
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *gameObject; // x20
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x19
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0

  v2 = (UnityEngine_Component_o *)self;
  if ( (byte_49FFB98 & 1) == 0 )
  {
    sub_1B64870(&System_IDisposable_TypeInfo, method);
    sub_1B64870(&System_Collections_IEnumerator_TypeInfo, v3);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v4);
    self = (UnityEngine_Transform_o *)sub_1B64870(&UnityEngine_Transform_TypeInfo, v5);
    byte_49FFB98 = 1;
  }
  if ( !v2 || (self = UnityEngine_Component__get_transform(v2, 0LL)) == 0LL )
    sub_1B64ACC(self, method);
  Enumerator = UnityEngine_Transform__GetEnumerator(self, 0LL);
  if ( !Enumerator )
    sub_1B64ACC(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BB6850(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v14 = (System_Collections_IEnumerator_c **)&v12->_1.interfaceOffsets->offset;
      while ( *(v14 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        v14 += 2;
        if ( !v13 )
          goto LABEL_17;
      }
      v15 = (__int64)&v12->vtable[*(_DWORD *)v14 + 1].method;
    }
    else
    {
LABEL_17:
      v15 = sub_1BB6850(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v16 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v15)(
                                       Enumerator,
                                       *(_QWORD *)(v15 + 8));
    if ( !v16 )
      goto LABEL_35;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v16->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v16->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1B64D8C(v16);
LABEL_35:
      sub_1B64ACC(v16, v17);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v16, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69135916(gameObject, 0LL);
  }
  v20 = sub_1B649AC(Enumerator, System_IDisposable_TypeInfo);
  if ( v20 )
  {
    v21 = *(_QWORD *)v20;
    v22 = v20;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_30;
      }
      v25 = v21 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_30:
      v25 = sub_1BB6850(v20, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8));
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

  if ( (byte_49FFB9A & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, nodename);
    byte_49FFB9A = 1;
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Object_array *ComponentsInChildren_object; // x21
  System_Collections_Generic_List_object__o *v18; // x22
  __int64 v19; // x8
  unsigned __int64 v20; // x26
  Il2CppObject **m_Items; // x27
  bool v22; // w23
  bool v23; // w24
  UnityEngine_Object_o *v24; // x25
  Il2CppObject *Component_object; // x25
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v27; // x6
  UnityEngine_Object_o *NodeFromLvName; // x25
  int32_t v29; // w2
  int32_t v30; // w3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0

  v10 = (UnityEngine_Component_o *)parentTransform;
  if ( (byte_49FFB9D & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_Component_GetComponent_BattleActorControl___, nodename);
    sub_1B64870(&Method_UnityEngine_Component_GetComponentsInChildren_Transform____75736560, v11);
    sub_1B64870(&Method_System_Collections_Generic_List_Transform__Add__, v12);
    sub_1B64870(&Method_System_Collections_Generic_List_Transform__ToArray__, v13);
    sub_1B64870(&Method_System_Collections_Generic_List_Transform___ctor__, v14);
    sub_1B64870(&System_Collections_Generic_List_Transform__TypeInfo, v15);
    parentTransform = (UnityEngine_Transform_o *)sub_1B64870(&UnityEngine_Object_TypeInfo, v16);
    byte_49FFB9D = 1;
  }
  if ( !isIgnore )
    return 0LL;
  if ( !v10 )
    goto LABEL_31;
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  v10,
                                  1,
                                  (const MethodInfo_2E32C58 *)Method_UnityEngine_Component_GetComponentsInChildren_Transform____75736560);
  v18 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_Transform___ctor__);
  if ( !ComponentsInChildren_object )
    goto LABEL_31;
  v19 = *(_QWORD *)&ComponentsInChildren_object->max_length;
  if ( (int)v19 >= 1 )
  {
    v20 = 0LL;
    m_Items = ComponentsInChildren_object->m_Items;
    v22 = includeInactive;
    v23 = useNewRule;
    do
    {
      if ( v20 >= (unsigned int)v19 )
LABEL_30:
        sub_1B64AD4(parentTransform, nodename);
      v24 = (UnityEngine_Object_o *)m_Items[v20];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      parentTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(
                                                     (UnityEngine_Object_o *)v10,
                                                     v24,
                                                     0LL);
      if ( ((unsigned __int8)parentTransform & 1) == 0 )
      {
        if ( v20 >= ComponentsInChildren_object->max_length )
          goto LABEL_30;
        parentTransform = (UnityEngine_Transform_o *)m_Items[v20];
        if ( !parentTransform )
          goto LABEL_31;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)parentTransform,
                             (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_BattleActorControl___);
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
                                                     v22,
                                                     v23,
                                                     0,
                                                     v27);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          parentTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(NodeFromLvName, 0LL, 0LL);
          if ( ((unsigned __int8)parentTransform & 1) == 0 )
          {
            if ( !v18 )
              goto LABEL_31;
            items = v18->fields._items;
            v32 = Method_System_Collections_Generic_List_Transform__Add__;
            ++v18->fields._version;
            if ( !items )
              goto LABEL_31;
            size = v18->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v18,
                (Il2CppObject *)NodeFromLvName,
                *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
            }
            else
            {
              v34 = &items->obj.klass + size;
              v18->fields._size = size + 1;
              v34[4] = (Il2CppClass *)NodeFromLvName;
              sub_1B64814((ServantStatusBattleListViewItem_o *)(v34 + 4), (int32_t)NodeFromLvName, v29, v30);
            }
          }
        }
      }
      LODWORD(v19) = ComponentsInChildren_object->max_length;
    }
    while ( (__int64)++v20 < (int)v19 );
  }
  if ( !v18 )
LABEL_31:
    sub_1B64ACC(parentTransform, nodename);
  return (UnityEngine_Transform_array *)System_Collections_Generic_List_object___ToArray(
                                          v18,
                                          (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_Transform__ToArray__);
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

  if ( (byte_49FFB99 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, parent);
    byte_49FFB99 = 1;
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
    sub_1B64ACC(gameObject, v6);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t v9; // w22
  Il2CppObject *v10; // x21
  float v11; // s8
  UnityEngine_Object_o *v12; // x19
  _BOOL8 v13; // x0
  __int64 v14; // x1
  System_String_o *v15; // x0
  __int64 v16; // x1
  _BOOL8 v17; // x0
  __int64 v18; // x1
  System_String_o *v19; // x0
  __int64 v20; // x1
  System_String_o *v21; // x0
  const MethodInfo *v22; // x1
  float v23; // s9
  System_String_o *v24; // x0
  const MethodInfo *v25; // x1
  float z; // s8
  _BOOL8 v27; // x0
  __int64 v28; // x1
  Il2CppObject *current; // x20
  System_String_o *name; // x0
  __int64 v31; // x1
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  v4 = tNode;
  if ( (byte_49FFBA0 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_Transform__Dispose__, useNewRule);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_Transform__get_Current__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_Transform__GetEnumerator__, v7);
    tNode = (System_Collections_Generic_List_Transform__o *)sub_1B64870(&StringLiteral_117/*" "*/, v8);
    byte_49FFBA0 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  if ( !useNewRule )
  {
    v12 = 0LL;
    z = -100.0;
    if ( v4 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v33,
        (System_Collections_Generic_List_object__o *)v4,
        (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_Transform__GetEnumerator__);
      v34 = v33;
      while ( 1 )
      {
        v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v34,
                (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext__);
        if ( !v27 )
          break;
        current = v34.fields._current;
        if ( !v34.fields._current )
          sub_1B64ACC(v27, v28);
        lossyScale = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)v34.fields._current, 0LL);
        if ( lossyScale.fields.z > z )
        {
          v40 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)current, 0LL);
          z = v40.fields.z;
          v12 = (UnityEngine_Object_o *)current;
        }
        else
        {
          v39 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)current, 0LL);
          if ( v39.fields.z == z )
          {
            name = UnityEngine_Object__get_name((UnityEngine_Object_o *)current, 0LL);
            if ( !name )
              sub_1B64ACC(0LL, v31);
            if ( !System_String__Contains(name, (System_String_o *)StringLiteral_117/*" "*/, 0LL) )
              v12 = (UnityEngine_Object_o *)current;
          }
        }
      }
      goto LABEL_31;
    }
LABEL_35:
    sub_1B64ACC(tNode, useNewRule);
  }
  if ( !v4 )
    goto LABEL_35;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
    (System_Collections_Generic_List_object__o *)v4,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_Transform__GetEnumerator__);
  v9 = 0;
  v10 = 0LL;
  v11 = -100.0;
  v34 = v33;
LABEL_6:
  v12 = (UnityEngine_Object_o *)v10;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v34,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext__);
    if ( !v13 )
      break;
    v10 = v34.fields._current;
    if ( !v34.fields._current )
      sub_1B64ACC(v13, v14);
    v35 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)v34.fields._current, 0LL);
    if ( v35.fields.z > v11 )
    {
      v37 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)v10, 0LL);
      v23 = v37.fields.z;
      v24 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v10, 0LL);
      v9 = TransformHelper__CalcPriority(v24, v25);
      v11 = v23;
      goto LABEL_6;
    }
    v36 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)v10, 0LL);
    if ( v36.fields.z == v11 )
    {
      v15 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v10, 0LL);
      if ( !v15 )
        sub_1B64ACC(0LL, v16);
      v17 = System_String__Contains(v15, (System_String_o *)StringLiteral_117/*" "*/, 0LL);
      if ( v17 )
      {
        if ( !v12 )
          sub_1B64ACC(v17, v18);
        v19 = UnityEngine_Object__get_name(v12, 0LL);
        if ( !v19 )
          sub_1B64ACC(0LL, v20);
        if ( System_String__Contains(v19, (System_String_o *)StringLiteral_117/*" "*/, 0LL) )
        {
          v21 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v10, 0LL);
          if ( v9 > TransformHelper__CalcPriority(v21, v22) )
            v10 = (Il2CppObject *)v12;
        }
        goto LABEL_6;
      }
    }
  }
LABEL_31:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v34,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_Transform__Dispose__);
  return (UnityEngine_Transform_o *)v12;
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x23
  __int64 v29; // x0
  __int64 v30; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x0
  UnityEngine_Transform_o *v34; // x20
  Il2CppObject *Component_object; // x24
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_object; // x24
  System_Func_object__bool__o *v37; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x24
  const MethodInfo *v39; // x5
  UnityEngine_Transform_array *IgnoreNodeList; // x26
  System_Collections_Generic_List_object__o *v41; // x23
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  __int64 v43; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v46; // x1
  __int64 v47; // x24
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  __int64 v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  __int64 v56; // x0
  __int64 v57; // x1
  UnityEngine_Component_o *v58; // x27
  __int64 v59; // x29
  UnityEngine_Object_o *gameObject; // x0
  __int64 v61; // x1
  __int64 InstanceID; // x0
  __int64 v63; // x1
  int v64; // w28
  UnityEngine_Component_o *v65; // x0
  UnityEngine_Object_o *v66; // x0
  __int64 v67; // x1
  System_String_o *name; // x0
  __int64 v69; // x1
  _BOOL8 v70; // x0
  __int64 v71; // x1
  int32_t v72; // w2
  int32_t v73; // w3
  System_String_o *v74; // x0
  __int64 v75; // x1
  int32_t v76; // w28
  System_String_o *v77; // x0
  __int64 v78; // x1
  System_String_o *v79; // x0
  __int64 v80; // x1
  System_String_o *v81; // x28
  int32_t v82; // w2
  __int64 v83; // x1
  System_String_array *v84; // x0
  __int64 v85; // x1
  System_String_array *v86; // x28
  __int64 v87; // x8
  unsigned __int64 v88; // x21
  System_String_o *v89; // x29
  int32_t v90; // w2
  int32_t v91; // w3
  struct System_Object_array *v92; // x8
  _QWORD *v93; // x9
  __int64 v94; // x10
  Il2CppClass **v95; // x0
  struct System_Object_array *items; // x8
  _QWORD *v97; // x9
  __int64 size; // x10
  Il2CppClass **v99; // x0
  __int64 v100; // x8
  __int64 v101; // x9
  int *v102; // x10
  __int64 v103; // x0
  const MethodInfo *v104; // x2
  System_Collections_Generic_List_Transform__o *v105; // x0
  UnityEngine_Transform_o *v106; // x21
  bool v108; // [xsp+Ch] [xbp-84h]
  System_Collections_Generic_List_object__o *v109; // [xsp+10h] [xbp-80h]
  int32_t result; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_49FFB9C & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_Component_GetComponent_BattleActorControl___, nodename);
    sub_1B64870(&Method_UnityEngine_Component_GetComponentsInChildren_Transform____75736560, v11);
    sub_1B64870(&Method_System_Linq_Enumerable_Where_Transform___, v12);
    sub_1B64870(&System_Func_Transform__bool__TypeInfo, v13);
    sub_1B64870(&System_IDisposable_TypeInfo, v14);
    sub_1B64870(&System_Collections_Generic_IEnumerable_Transform__TypeInfo, v15);
    sub_1B64870(&System_Collections_Generic_IEnumerator_Transform__TypeInfo, v16);
    sub_1B64870(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_1B64870(&Method_System_Collections_Generic_List_Transform__Add__, v18);
    sub_1B64870(&Method_System_Collections_Generic_List_Transform___ctor__, v19);
    sub_1B64870(&Method_System_Collections_Generic_List_Transform__get_Count__, v20);
    sub_1B64870(&System_Collections_Generic_List_Transform__TypeInfo, v21);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v22);
    sub_1B64870(&Method_TransformHelper___c__DisplayClass5_0__executeGetNodeFromLvName_b__0__, v23);
    sub_1B64870(&TransformHelper___c__DisplayClass5_0_TypeInfo, v24);
    sub_1B64870(&StringLiteral_117/*" "*/, v25);
    sub_1B64870(&StringLiteral_16484/*"_level"*/, v26);
    sub_1B64870(&StringLiteral_1/*""*/, v27);
    byte_49FFB9C = 1;
  }
  result = 0;
  v28 = sub_1B64ABC(TransformHelper___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v28, 0LL);
  if ( !v28 )
    goto LABEL_100;
  *(_QWORD *)(v28 + 16) = nodename;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v28 + 16), (int32_t)nodename, v31, v32);
  v33 = *(System_String_o **)(v28 + 16);
  v34 = self;
  if ( !v33 )
    return v34;
  v29 = System_String__Equals_61391892(v33, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( (v29 & 1) != 0 )
    return v34;
  if ( !self )
    goto LABEL_100;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)self,
                       (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v29 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( level == -1 && (v29 & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_100;
    level = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)Component_object, 0LL) + 1;
  }
  ComponentsInChildren_object = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                                                       (UnityEngine_Component_o *)self,
                                                                                       includeInactive,
                                                                                       (const MethodInfo_2E32C58 *)Method_UnityEngine_Component_GetComponentsInChildren_Transform____75736560);
  v37 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_Transform__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v37,
    (Il2CppObject *)v28,
    Method_TransformHelper___c__DisplayClass5_0__executeGetNodeFromLvName_b__0__,
    0LL);
  v38 = System_Linq_Enumerable__Where_object_(
          ComponentsInChildren_object,
          (System_Func_TSource__bool__o *)v37,
          (const MethodInfo_2E79378 *)Method_System_Linq_Enumerable_Where_Transform___);
  IgnoreNodeList = TransformHelper__GetIgnoreNodeList(
                     self,
                     *(System_String_o **)(v28 + 16),
                     includeInactive,
                     useNewRule,
                     isIgnore,
                     v39);
  v109 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v109,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_Transform___ctor__);
  v41 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v41,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_Transform___ctor__);
  if ( !v38 )
    goto LABEL_100;
  klass = v38->klass;
  v43 = *(unsigned __int16 *)(&v38->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v38->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      --v43;
      p_offset += 4;
      if ( !v43 )
        goto LABEL_18;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_18:
    p_method = sub_1BB6850(v38, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0LL);
  }
  v108 = includeInactive;
  v47 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v38,
          *(_QWORD *)(p_method + 8));
  if ( !v47 )
    sub_1B64ACC(0LL, v46);
  while ( 1 )
  {
LABEL_21:
    v48 = *(_QWORD *)v47;
    v49 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
    {
      v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v50 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v49;
        v50 += 4;
        if ( !v49 )
          goto LABEL_25;
      }
      v51 = v48 + 16LL * *v50 + 312;
    }
    else
    {
LABEL_25:
      v51 = sub_1BB6850(v47, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v47, *(_QWORD *)(v51 + 8)) & 1) == 0 )
      break;
    v52 = *(_QWORD *)v47;
    v53 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
    {
      v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v54 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        --v53;
        v54 += 4;
        if ( !v53 )
          goto LABEL_32;
      }
      v55 = v52 + 16LL * *v54 + 312;
    }
    else
    {
LABEL_32:
      v55 = sub_1BB6850(v47, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0LL);
    }
    v56 = (*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v47, *(_QWORD *)(v55 + 8));
    v58 = (UnityEngine_Component_o *)v56;
    if ( IgnoreNodeList && (int)IgnoreNodeList->max_length >= 1 )
    {
      if ( !v56 )
        sub_1B64ACC(0LL, v57);
      v59 = 0LL;
      while ( 1 )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v58, 0LL);
        if ( !gameObject )
          sub_1B64ACC(0LL, v61);
        InstanceID = UnityEngine_Object__GetInstanceID(gameObject, 0LL);
        if ( (unsigned int)v59 >= IgnoreNodeList->max_length )
          sub_1B64AD4(InstanceID, v63);
        v64 = InstanceID;
        v65 = (UnityEngine_Component_o *)IgnoreNodeList->m_Items[v59];
        if ( !v65 )
          sub_1B64ACC(0LL, v63);
        v66 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v65, 0LL);
        if ( !v66 )
          sub_1B64ACC(0LL, v67);
        v56 = UnityEngine_Object__GetInstanceID(v66, 0LL);
        if ( v64 == (_DWORD)v56 )
          break;
        if ( (int)++v59 >= (signed int)IgnoreNodeList->max_length )
          goto LABEL_44;
      }
    }
    else
    {
LABEL_44:
      if ( !v58 )
        sub_1B64ACC(v56, v57);
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v58, 0LL);
      if ( !name )
        sub_1B64ACC(0LL, v69);
      v70 = System_String__Contains(name, (System_String_o *)StringLiteral_16484/*"_level"*/, 0LL);
      if ( v70 )
      {
        v74 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v58, 0LL);
        if ( !v74 )
          sub_1B64ACC(0LL, v75);
        v76 = System_String__IndexOf_61415144(v74, (System_String_o *)StringLiteral_16484/*"_level"*/, 0LL);
        v77 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v58, 0LL);
        if ( !v77 )
          sub_1B64ACC(0LL, v78);
        v79 = System_String__Substring(v77, v76 + 7, 0LL);
        v81 = v79;
        if ( !v79 )
          sub_1B64ACC(0LL, v80);
        if ( (System_String__IndexOf_61415144(v79, (System_String_o *)StringLiteral_117/*" "*/, 0LL) & 0x80000000) == 0 )
        {
          v82 = System_String__IndexOf_61415144(v81, (System_String_o *)StringLiteral_117/*" "*/, 0LL);
          v81 = System_String__Substring_61402572(v81, 0, v82, 0LL);
          if ( !v81 )
            sub_1B64ACC(0LL, v83);
        }
        v84 = System_String__Split(v81, 0x5Fu, 0, 0LL);
        v86 = v84;
        if ( !v84 )
          sub_1B64ACC(0LL, v85);
        v87 = *(_QWORD *)&v84->max_length;
        if ( (int)v87 >= 1 )
        {
          v88 = 0LL;
          while ( 1 )
          {
            if ( v88 >= (unsigned int)v87 )
              sub_1B64AD4(v84, v85);
            v89 = v86->m_Items[v88];
            result = 99;
            v84 = (System_String_array *)System_Int32__TryParse(v89, &result, 0LL);
            if ( ((unsigned __int8)v84 & 1) != 0 )
            {
              v84 = (System_String_array *)System_Int32__Parse(v89, 0LL);
              if ( (_DWORD)v84 == level )
                break;
            }
            LODWORD(v87) = v86->max_length;
            if ( (__int64)++v88 >= (int)v87 )
              goto LABEL_21;
          }
          if ( !v109 )
            sub_1B64ACC(v84, v85);
          items = v109->fields._items;
          v97 = Method_System_Collections_Generic_List_Transform__Add__;
          ++v109->fields._version;
          if ( !items )
            sub_1B64ACC(v84, v85);
          size = v109->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v109,
              (Il2CppObject *)v58,
              *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
          }
          else
          {
            v99 = &items->obj.klass + size;
            v109->fields._size = size + 1;
            v99[4] = (Il2CppClass *)v58;
            sub_1B64814((ServantStatusBattleListViewItem_o *)(v99 + 4), (int32_t)v58, v90, v91);
          }
        }
      }
      else
      {
        if ( !v41 )
          sub_1B64ACC(v70, v71);
        v92 = v41->fields._items;
        v93 = Method_System_Collections_Generic_List_Transform__Add__;
        ++v41->fields._version;
        if ( !v92 )
          sub_1B64ACC(v70, v71);
        v94 = v41->fields._size;
        if ( (unsigned int)v94 >= v92->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v41,
            (Il2CppObject *)v58,
            *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
        }
        else
        {
          v95 = &v92->obj.klass + v94;
          v41->fields._size = v94 + 1;
          v95[4] = (Il2CppClass *)v58;
          sub_1B64814((ServantStatusBattleListViewItem_o *)(v95 + 4), (int32_t)v58, v72, v73);
        }
      }
    }
  }
  v34 = self;
  v100 = *(_QWORD *)v47;
  v101 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
  {
    v102 = (int *)(*(_QWORD *)(v100 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v102 - 1) != System_IDisposable_TypeInfo )
    {
      --v101;
      v102 += 4;
      if ( !v101 )
        goto LABEL_74;
    }
    v103 = v100 + 16LL * *v102 + 312;
  }
  else
  {
LABEL_74:
    v103 = sub_1BB6850(v47, System_IDisposable_TypeInfo, 0LL);
  }
  v29 = (*(__int64 (__fastcall **)(__int64, _QWORD))v103)(v47, *(_QWORD *)(v103 + 8));
  if ( !v109 )
LABEL_100:
    sub_1B64ACC(v29, v30);
  if ( v109->fields._size >= 1 )
    v105 = (System_Collections_Generic_List_Transform__o *)v109;
  else
    v105 = (System_Collections_Generic_List_Transform__o *)v41;
  v106 = TransformHelper__SelectNodeWithRule(v105, useNewRule, v104);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v106, 0LL, 0LL) || !v108 )
    return v106;
  return v34;
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

  if ( (byte_49FFB9B & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, nodename);
    byte_49FFB9B = 1;
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_object; // x19
  System_Func_object__bool__o *v21; // x20
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x19
  __int64 v24; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x19
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  UnityEngine_Transform_o *v38; // x21
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0

  if ( (byte_49FFB9E & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_Component_GetComponentsInChildren_Transform____75736560, nodename);
    sub_1B64870(&Method_System_Linq_Enumerable_Where_Transform___, v7);
    sub_1B64870(&System_Func_Transform__bool__TypeInfo, v8);
    sub_1B64870(&System_IDisposable_TypeInfo, v9);
    sub_1B64870(&System_Collections_Generic_IEnumerable_Transform__TypeInfo, v10);
    sub_1B64870(&System_Collections_Generic_IEnumerator_Transform__TypeInfo, v11);
    sub_1B64870(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1B64870(&Method_TransformHelper___c__DisplayClass7_0__getNodeFromName_b__0__, v13);
    sub_1B64870(&TransformHelper___c__DisplayClass7_0_TypeInfo, v14);
    byte_49FFB9E = 1;
  }
  v15 = sub_1B64ABC(TransformHelper___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15
    || (*(_QWORD *)(v15 + 16) = nodename,
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v15 + 16), (int32_t)nodename, v18, v19),
        !self)
    || (ComponentsInChildren_object = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                                                             (UnityEngine_Component_o *)self,
                                                                                             includeInactive,
                                                                                             (const MethodInfo_2E32C58 *)Method_UnityEngine_Component_GetComponentsInChildren_Transform____75736560),
        v21 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_Transform__bool__TypeInfo),
        System_Func_object__bool____ctor(
          v21,
          (Il2CppObject *)v15,
          Method_TransformHelper___c__DisplayClass7_0__getNodeFromName_b__0__,
          0LL),
        (v16 = System_Linq_Enumerable__Where_object_(
                 ComponentsInChildren_object,
                 (System_Func_TSource__bool__o *)v21,
                 (const MethodInfo_2E79378 *)Method_System_Linq_Enumerable_Where_Transform___)) == 0LL) )
  {
    sub_1B64ACC(v16, v17);
  }
  klass = v16->klass;
  v23 = v16;
  v24 = *(unsigned __int16 *)(&v16->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v16->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      --v24;
      p_offset += 4;
      if ( !v24 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1BB6850(v16, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0LL);
  }
  v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v23,
          *(_QWORD *)(p_method + 8));
  v29 = v27;
  if ( !v27 )
    sub_1B64ACC(0LL, v28);
  v30 = *(_QWORD *)v27;
  v31 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
  {
    v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
    while ( *((System_Collections_IEnumerator_c **)v32 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_17;
    }
    v33 = v30 + 16LL * *v32 + 312;
  }
  else
  {
LABEL_17:
    v33 = sub_1BB6850(v27, System_Collections_IEnumerator_TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v29, *(_QWORD *)(v33 + 8)) & 1) == 0 )
  {
    v38 = 0LL;
    if ( !v29 )
      return v38;
    goto LABEL_29;
  }
  v34 = *(_QWORD *)v29;
  v35 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
  {
    v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v36 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
    {
      --v35;
      v36 += 4;
      if ( !v35 )
        goto LABEL_24;
    }
    v37 = v34 + 16LL * *v36 + 312;
  }
  else
  {
LABEL_24:
    v37 = sub_1BB6850(v29, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0LL);
  }
  v38 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v29, *(_QWORD *)(v37 + 8));
  if ( v29 )
  {
LABEL_29:
    v39 = *(_QWORD *)v29;
    v40 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
    {
      v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_33;
      }
      v42 = v39 + 16LL * *v41 + 312;
    }
    else
    {
LABEL_33:
      v42 = sub_1BB6850(v29, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v42)(v29, *(_QWORD *)(v42 + 8));
  }
  return v38;
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
    sub_1B64ACC(this, p);
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
    sub_1B64ACC(this, p);
  }
  return System_String__Equals_61391892((System_String_o *)this, v3->fields.nodename, 0LL);
}