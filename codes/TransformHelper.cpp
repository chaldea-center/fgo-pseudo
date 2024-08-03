int32_t __fastcall TransformHelper__CalcPriority(System_String_o *objName, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *v5; // x0
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FDAA4 & 1) == 0 )
  {
    sub_1B640C8(&System_Text_RegularExpressions_Regex_TypeInfo, method);
    sub_1B640C8(&StringLiteral_15900/*"[^0-9]"*/, v3);
    sub_1B640C8(&StringLiteral_1/*""*/, v4);
    byte_49FDAA4 = 1;
  }
  result = 0;
  if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
  v5 = System_Text_RegularExpressions_Regex__Replace(
         objName,
         (System_String_o *)StringLiteral_15900/*"[^0-9]"*/,
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
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v12; // x8
  __int64 v13; // x9
  System_Collections_IEnumerator_c **v14; // x10
  __int64 v15; // x0
  UnityEngine_Transform_o *v16; // x0
  const MethodInfo *v17; // x2
  __int64 methodPtr_low; // x9
  __int64 v19; // x0
  __int64 v20; // x8
  __int64 v21; // x20
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0

  v4 = (UnityEngine_Component_o *)self;
  if ( (byte_49FDA9C & 1) == 0 )
  {
    sub_1B640C8(&System_IDisposable_TypeInfo, *(_QWORD *)&layer);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v5);
    self = (UnityEngine_Transform_o *)sub_1B640C8(&UnityEngine_Transform_TypeInfo, v6);
    byte_49FDA9C = 1;
  }
  if ( !v4 || (self = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v4, 0LL)) == 0LL )
LABEL_33:
    sub_1B64324(self);
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)self, layer, 0LL);
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)v4, 0LL);
  if ( !Enumerator )
    sub_1B64324(0LL);
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
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v15 = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v16 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v15)(
                                       Enumerator,
                                       *(_QWORD *)(v15 + 8));
    if ( v16 )
    {
      methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v16->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (UnityEngine_Transform_c *)v16->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_1B645E4(v16);
        goto LABEL_33;
      }
    }
    TransformHelper__ChangeChildsLayer(v16, layer, v17);
  }
  v19 = sub_1B64204(Enumerator, System_IDisposable_TypeInfo);
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
          goto LABEL_28;
      }
      v24 = v20 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_28:
      v24 = sub_1BB60A8(v19, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v24)(v21, *(_QWORD *)(v24 + 8));
  }
  return layer;
}


void __fastcall TransformHelper__DestroyChildren(UnityEngine_Transform_o *self, const MethodInfo *method)
{
  UnityEngine_Component_o *v2; // x19
  __int64 v3; // x1
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
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *gameObject; // x20
  __int64 v18; // x0
  __int64 v19; // x8
  __int64 v20; // x19
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0

  v2 = (UnityEngine_Component_o *)self;
  if ( (byte_49FDA9D & 1) == 0 )
  {
    sub_1B640C8(&System_IDisposable_TypeInfo, method);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    self = (UnityEngine_Transform_o *)sub_1B640C8(&UnityEngine_Transform_TypeInfo, v5);
    byte_49FDA9D = 1;
  }
  if ( !v2 || (self = UnityEngine_Component__get_transform(v2, 0LL)) == 0LL )
    sub_1B64324(self);
  Enumerator = UnityEngine_Transform__GetEnumerator(self, 0LL);
  if ( !Enumerator )
    sub_1B64324(0LL);
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
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v14 = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v15 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v14)(
                                       Enumerator,
                                       *(_QWORD *)(v14 + 8));
    if ( !v15 )
      goto LABEL_35;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v15->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v15->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1B645E4(v15);
LABEL_35:
      sub_1B64324(v15);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v15, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
  }
  v18 = sub_1B64204(Enumerator, System_IDisposable_TypeInfo);
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
          goto LABEL_30;
      }
      v23 = v19 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_30:
      v23 = sub_1BB60A8(v18, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v23)(v20, *(_QWORD *)(v23 + 8));
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

  if ( (byte_49FDA9F & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, nodename);
    byte_49FDA9F = 1;
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
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_object__o *v20; // x22
  __int64 v21; // x1
  __int64 v22; // x8
  unsigned __int64 v23; // x26
  Il2CppObject **m_Items; // x27
  bool v25; // w23
  bool v26; // w24
  UnityEngine_Object_o *v27; // x25
  Il2CppObject *Component_object; // x25
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v30; // x6
  UnityEngine_Object_o *NodeFromLvName; // x25
  int32_t v32; // w2
  int32_t v33; // w3
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0

  v10 = (UnityEngine_Component_o *)parentTransform;
  if ( (byte_49FDAA2 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_BattleActorControl___, nodename);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentsInChildren_Transform____75728112, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Transform__Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Transform__ToArray__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_Transform___ctor__, v14);
    sub_1B640C8(&System_Collections_Generic_List_Transform__TypeInfo, v15);
    parentTransform = (UnityEngine_Transform_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v16);
    byte_49FDAA2 = 1;
  }
  if ( !isIgnore )
    return 0LL;
  if ( !v10 )
    goto LABEL_31;
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  v10,
                                  1,
                                  (const MethodInfo_2E3097C *)Method_UnityEngine_Component_GetComponentsInChildren_Transform____75728112);
  v20 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_Transform__TypeInfo,
                                                       v18,
                                                       v19);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_Transform___ctor__);
  if ( !ComponentsInChildren_object )
    goto LABEL_31;
  v22 = *(_QWORD *)&ComponentsInChildren_object->max_length;
  if ( (int)v22 >= 1 )
  {
    v23 = 0LL;
    m_Items = ComponentsInChildren_object->m_Items;
    v25 = includeInactive;
    v26 = useNewRule;
    do
    {
      if ( v23 >= (unsigned int)v22 )
LABEL_30:
        sub_1B6432C(parentTransform, v21);
      v27 = (UnityEngine_Object_o *)m_Items[v23];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      parentTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(
                                                     (UnityEngine_Object_o *)v10,
                                                     v27,
                                                     0LL);
      if ( ((unsigned __int8)parentTransform & 1) == 0 )
      {
        if ( v23 >= ComponentsInChildren_object->max_length )
          goto LABEL_30;
        parentTransform = (UnityEngine_Transform_o *)m_Items[v23];
        if ( !parentTransform )
          goto LABEL_31;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)parentTransform,
                             (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_BattleActorControl___);
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
                                                     v25,
                                                     v26,
                                                     0,
                                                     v30);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          parentTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(NodeFromLvName, 0LL, 0LL);
          if ( ((unsigned __int8)parentTransform & 1) == 0 )
          {
            if ( !v20 )
              goto LABEL_31;
            items = v20->fields._items;
            v35 = Method_System_Collections_Generic_List_Transform__Add__;
            ++v20->fields._version;
            if ( !items )
              goto LABEL_31;
            size = v20->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v20,
                (Il2CppObject *)NodeFromLvName,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
            }
            else
            {
              v37 = &items->obj.klass + size;
              v20->fields._size = size + 1;
              v37[4] = (Il2CppClass *)NodeFromLvName;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 4), (int32_t)NodeFromLvName, v32, v33);
            }
          }
        }
      }
      LODWORD(v22) = ComponentsInChildren_object->max_length;
    }
    while ( (__int64)++v23 < (int)v22 );
  }
  if ( !v20 )
LABEL_31:
    sub_1B64324(parentTransform);
  return (UnityEngine_Transform_array *)System_Collections_Generic_List_object___ToArray(
                                          v20,
                                          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_Transform__ToArray__);
}


bool __fastcall TransformHelper__SafeSetParentNonNull(
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

  if ( (byte_49FDA9E & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, parent);
    byte_49FDA9E = 1;
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
  v10 = localRotation.fields.x;
  v11 = localRotation.fields.y;
  v12 = localRotation.fields.z;
  w = localRotation.fields.w;
  localScale = UnityEngine_Transform__get_localScale(self, 0LL);
  v14 = localScale.fields.x;
  v16 = localScale.fields.z;
  v17 = localScale.fields.y;
  UnityEngine_Transform__set_parent(self, parent, 0LL);
  v20.fields.x = x;
  v20.fields.y = y;
  v20.fields.z = z;
  UnityEngine_Transform__set_localPosition(self, v20, 0LL);
  v23.fields.x = v10;
  v23.fields.y = v11;
  v23.fields.z = v12;
  v23.fields.w = w;
  UnityEngine_Transform__set_localRotation(self, v23, 0LL);
  v21.fields.z = v16;
  v21.fields.y = v17;
  v21.fields.x = v14;
  UnityEngine_Transform__set_localScale(self, v21, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)self, 0LL);
  if ( !parent
    || (v15 = gameObject,
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)parent, 0LL)) == 0LL)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(gameObject, 0LL), !v15) )
  {
LABEL_15:
    sub_1B64324(gameObject);
  }
  UnityEngine_GameObject__set_layer(v15, (int32_t)gameObject, 0LL);
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
  System_String_o *v14; // x0
  _BOOL8 v15; // x0
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  const MethodInfo *v18; // x1
  float v19; // s9
  System_String_o *v20; // x0
  const MethodInfo *v21; // x1
  float z; // s8
  _BOOL8 v23; // x0
  Il2CppObject *current; // x20
  System_String_o *name; // x0
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  v4 = tNode;
  if ( (byte_49FDAA5 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_Transform__Dispose__, useNewRule);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_Transform__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Transform__GetEnumerator__, v7);
    tNode = (System_Collections_Generic_List_Transform__o *)sub_1B640C8(&StringLiteral_117/*" "*/, v8);
    byte_49FDAA5 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  if ( !useNewRule )
  {
    v12 = 0LL;
    z = -100.0;
    if ( v4 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v27,
        (System_Collections_Generic_List_object__o *)v4,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_Transform__GetEnumerator__);
      v28 = v27;
      while ( 1 )
      {
        v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v28,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext__);
        if ( !v23 )
          break;
        current = v28.fields._current;
        if ( !v28.fields._current )
          sub_1B64324(v23);
        lossyScale = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)v28.fields._current, 0LL);
        if ( lossyScale.fields.z > z )
        {
          v34 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)current, 0LL);
          z = v34.fields.z;
          v12 = (UnityEngine_Object_o *)current;
        }
        else
        {
          v33 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)current, 0LL);
          if ( v33.fields.z == z )
          {
            name = UnityEngine_Object__get_name((UnityEngine_Object_o *)current, 0LL);
            if ( !name )
              sub_1B64324(0LL);
            if ( !System_String__Contains(name, (System_String_o *)StringLiteral_117/*" "*/, 0LL) )
              v12 = (UnityEngine_Object_o *)current;
          }
        }
      }
      goto LABEL_31;
    }
LABEL_35:
    sub_1B64324(tNode);
  }
  if ( !v4 )
    goto LABEL_35;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)v4,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_Transform__GetEnumerator__);
  v9 = 0;
  v10 = 0LL;
  v11 = -100.0;
  v28 = v27;
LABEL_6:
  v12 = (UnityEngine_Object_o *)v10;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext__);
    if ( !v13 )
      break;
    v10 = v28.fields._current;
    if ( !v28.fields._current )
      sub_1B64324(v13);
    v29 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)v28.fields._current, 0LL);
    if ( v29.fields.z > v11 )
    {
      v31 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)v10, 0LL);
      v19 = v31.fields.z;
      v20 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v10, 0LL);
      v9 = TransformHelper__CalcPriority(v20, v21);
      v11 = v19;
      goto LABEL_6;
    }
    v30 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)v10, 0LL);
    if ( v30.fields.z == v11 )
    {
      v14 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v10, 0LL);
      if ( !v14 )
        sub_1B64324(0LL);
      v15 = System_String__Contains(v14, (System_String_o *)StringLiteral_117/*" "*/, 0LL);
      if ( v15 )
      {
        if ( !v12 )
          sub_1B64324(v15);
        v16 = UnityEngine_Object__get_name(v12, 0LL);
        if ( !v16 )
          sub_1B64324(0LL);
        if ( System_String__Contains(v16, (System_String_o *)StringLiteral_117/*" "*/, 0LL) )
        {
          v17 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v10, 0LL);
          if ( v9 > TransformHelper__CalcPriority(v17, v18) )
            v10 = (Il2CppObject *)v12;
        }
        goto LABEL_6;
      }
    }
  }
LABEL_31:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_Transform__Dispose__);
  return (UnityEngine_Transform_o *)v12;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Transform_o *__fastcall TransformHelper__executeGetNodeFromLvName(
        UnityEngine_Transform_o *self,
        System_String_o *nodename,
        int32_t level,
        bool includeInactive,
        bool useNewRule,
        bool isIgnore,
        const MethodInfo *method)
{
  int32_t v9; // w25
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
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x0
  UnityEngine_Transform_o *v33; // x20
  Il2CppObject *Component_object; // x24
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_object; // x24
  __int64 v36; // x1
  __int64 v37; // x2
  System_Func_object__bool__o *v38; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x24
  const MethodInfo *v40; // x5
  UnityEngine_Transform_array *IgnoreNodeList; // x26
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  System_Collections_Generic_List_object__o *v46; // x23
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  __int64 v48; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v51; // x24
  __int64 v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  __int64 v56; // x8
  __int64 v57; // x9
  int *v58; // x10
  __int64 v59; // x0
  __int64 v60; // x0
  UnityEngine_Component_o *v61; // x27
  __int64 v62; // x29
  UnityEngine_Object_o *gameObject; // x0
  __int64 InstanceID; // x0
  __int64 v65; // x1
  int v66; // w28
  UnityEngine_Component_o *v67; // x0
  UnityEngine_Object_o *v68; // x0
  System_String_o *name; // x0
  _BOOL8 v70; // x0
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_o *v73; // x0
  int32_t v74; // w28
  System_String_o *v75; // x0
  System_String_o *v76; // x0
  System_String_o *v77; // x28
  int32_t v78; // w2
  System_String_array *v79; // x0
  __int64 v80; // x1
  System_String_array *v81; // x28
  __int64 v82; // x8
  unsigned __int64 v83; // x21
  System_String_o *v84; // x29
  int32_t v85; // w2
  int32_t v86; // w3
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

  v9 = level;
  if ( (byte_49FDAA1 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_BattleActorControl___, nodename);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentsInChildren_Transform____75728112, v11);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_Transform___, v12);
    sub_1B640C8(&System_Func_Transform__bool__TypeInfo, v13);
    sub_1B640C8(&System_IDisposable_TypeInfo, v14);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_Transform__TypeInfo, v15);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_Transform__TypeInfo, v16);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_Transform__Add__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_Transform___ctor__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_Transform__get_Count__, v20);
    sub_1B640C8(&System_Collections_Generic_List_Transform__TypeInfo, v21);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v22);
    sub_1B640C8(&Method_TransformHelper___c__DisplayClass5_0__executeGetNodeFromLvName_b__0__, v23);
    sub_1B640C8(&TransformHelper___c__DisplayClass5_0_TypeInfo, v24);
    sub_1B640C8(&StringLiteral_117/*" "*/, v25);
    sub_1B640C8(&StringLiteral_16482/*"_level"*/, v26);
    sub_1B640C8(&StringLiteral_1/*""*/, v27);
    byte_49FDAA1 = 1;
  }
  result = 0;
  v28 = sub_1B64314(TransformHelper___c__DisplayClass5_0_TypeInfo, nodename, *(_QWORD *)&level);
  System_Object___ctor((Il2CppObject *)v28, 0LL);
  if ( !v28 )
    goto LABEL_100;
  *(_QWORD *)(v28 + 16) = nodename;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 16), (int32_t)nodename, v30, v31);
  v32 = *(System_String_o **)(v28 + 16);
  v33 = self;
  if ( !v32 )
    return v33;
  v29 = System_String__Equals_61383712(v32, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( (v29 & 1) != 0 )
    return v33;
  if ( !self )
    goto LABEL_100;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)self,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v29 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( v9 == -1 && (v29 & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_100;
    v9 = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)Component_object, 0LL) + 1;
  }
  ComponentsInChildren_object = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                                                       (UnityEngine_Component_o *)self,
                                                                                       includeInactive,
                                                                                       (const MethodInfo_2E3097C *)Method_UnityEngine_Component_GetComponentsInChildren_Transform____75728112);
  v38 = (System_Func_object__bool__o *)sub_1B64314(System_Func_Transform__bool__TypeInfo, v36, v37);
  System_Func_object__bool____ctor(
    v38,
    (Il2CppObject *)v28,
    Method_TransformHelper___c__DisplayClass5_0__executeGetNodeFromLvName_b__0__,
    0LL);
  v39 = System_Linq_Enumerable__Where_object_(
          ComponentsInChildren_object,
          (System_Func_TSource__bool__o *)v38,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_Transform___);
  IgnoreNodeList = TransformHelper__GetIgnoreNodeList(
                     self,
                     *(System_String_o **)(v28 + 16),
                     includeInactive,
                     useNewRule,
                     isIgnore,
                     v40);
  v104 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                        System_Collections_Generic_List_Transform__TypeInfo,
                                                        v42,
                                                        v43);
  System_Collections_Generic_List_object____ctor(
    v104,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_Transform___ctor__);
  v46 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_Transform__TypeInfo,
                                                       v44,
                                                       v45);
  System_Collections_Generic_List_object____ctor(
    v46,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_Transform___ctor__);
  if ( !v39 )
    goto LABEL_100;
  klass = v39->klass;
  v48 = *(unsigned __int16 *)(&v39->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v39->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      --v48;
      p_offset += 4;
      if ( !v48 )
        goto LABEL_18;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_18:
    p_method = sub_1BB60A8(v39, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0LL);
  }
  v103 = includeInactive;
  v51 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v39,
          *(_QWORD *)(p_method + 8));
  if ( !v51 )
    sub_1B64324(0LL);
  while ( 1 )
  {
LABEL_21:
    v52 = *(_QWORD *)v51;
    v53 = *(unsigned __int16 *)(*(_QWORD *)v51 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v51 + 302LL) )
    {
      v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v54 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v53;
        v54 += 4;
        if ( !v53 )
          goto LABEL_25;
      }
      v55 = v52 + 16LL * *v54 + 312;
    }
    else
    {
LABEL_25:
      v55 = sub_1BB60A8(v51, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v51, *(_QWORD *)(v55 + 8)) & 1) == 0 )
      break;
    v56 = *(_QWORD *)v51;
    v57 = *(unsigned __int16 *)(*(_QWORD *)v51 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v51 + 302LL) )
    {
      v58 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v58 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        --v57;
        v58 += 4;
        if ( !v57 )
          goto LABEL_32;
      }
      v59 = v56 + 16LL * *v58 + 312;
    }
    else
    {
LABEL_32:
      v59 = sub_1BB60A8(v51, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0LL);
    }
    v60 = (*(__int64 (__fastcall **)(__int64, _QWORD))v59)(v51, *(_QWORD *)(v59 + 8));
    v61 = (UnityEngine_Component_o *)v60;
    if ( IgnoreNodeList && (int)IgnoreNodeList->max_length >= 1 )
    {
      if ( !v60 )
        sub_1B64324(0LL);
      v62 = 0LL;
      while ( 1 )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v61, 0LL);
        if ( !gameObject )
          sub_1B64324(0LL);
        InstanceID = UnityEngine_Object__GetInstanceID(gameObject, 0LL);
        if ( (unsigned int)v62 >= IgnoreNodeList->max_length )
          sub_1B6432C(InstanceID, v65);
        v66 = InstanceID;
        v67 = (UnityEngine_Component_o *)IgnoreNodeList->m_Items[v62];
        if ( !v67 )
          sub_1B64324(0LL);
        v68 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v67, 0LL);
        if ( !v68 )
          sub_1B64324(0LL);
        v60 = UnityEngine_Object__GetInstanceID(v68, 0LL);
        if ( v66 == (_DWORD)v60 )
          break;
        if ( (int)++v62 >= (signed int)IgnoreNodeList->max_length )
          goto LABEL_44;
      }
    }
    else
    {
LABEL_44:
      if ( !v61 )
        sub_1B64324(v60);
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v61, 0LL);
      if ( !name )
        sub_1B64324(0LL);
      v70 = System_String__Contains(name, (System_String_o *)StringLiteral_16482/*"_level"*/, 0LL);
      if ( v70 )
      {
        v73 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v61, 0LL);
        if ( !v73 )
          sub_1B64324(0LL);
        v74 = System_String__IndexOf_61406964(v73, (System_String_o *)StringLiteral_16482/*"_level"*/, 0LL);
        v75 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v61, 0LL);
        if ( !v75 )
          sub_1B64324(0LL);
        v76 = System_String__Substring(v75, v74 + 7, 0LL);
        v77 = v76;
        if ( !v76 )
          sub_1B64324(0LL);
        if ( (System_String__IndexOf_61406964(v76, (System_String_o *)StringLiteral_117/*" "*/, 0LL) & 0x80000000) == 0 )
        {
          v78 = System_String__IndexOf_61406964(v77, (System_String_o *)StringLiteral_117/*" "*/, 0LL);
          v77 = System_String__Substring_61394392(v77, 0, v78, 0LL);
          if ( !v77 )
            sub_1B64324(0LL);
        }
        v79 = System_String__Split(v77, 0x5Fu, 0, 0LL);
        v81 = v79;
        if ( !v79 )
          sub_1B64324(0LL);
        v82 = *(_QWORD *)&v79->max_length;
        if ( (int)v82 >= 1 )
        {
          v83 = 0LL;
          while ( 1 )
          {
            if ( v83 >= (unsigned int)v82 )
              sub_1B6432C(v79, v80);
            v84 = v81->m_Items[v83];
            result = 99;
            v79 = (System_String_array *)System_Int32__TryParse(v84, &result, 0LL);
            if ( ((unsigned __int8)v79 & 1) != 0 )
            {
              v79 = (System_String_array *)System_Int32__Parse(v84, 0LL);
              if ( (_DWORD)v79 == v9 )
                break;
            }
            LODWORD(v82) = v81->max_length;
            if ( (__int64)++v83 >= (int)v82 )
              goto LABEL_21;
          }
          if ( !v104 )
            sub_1B64324(v79);
          items = v104->fields._items;
          v92 = Method_System_Collections_Generic_List_Transform__Add__;
          ++v104->fields._version;
          if ( !items )
            sub_1B64324(v79);
          size = v104->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v104,
              (Il2CppObject *)v61,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
          }
          else
          {
            v94 = &items->obj.klass + size;
            v104->fields._size = size + 1;
            v94[4] = (Il2CppClass *)v61;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v94 + 4), (int32_t)v61, v85, v86);
          }
        }
      }
      else
      {
        if ( !v46 )
          sub_1B64324(v70);
        v87 = v46->fields._items;
        v88 = Method_System_Collections_Generic_List_Transform__Add__;
        ++v46->fields._version;
        if ( !v87 )
          sub_1B64324(v70);
        v89 = v46->fields._size;
        if ( (unsigned int)v89 >= v87->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v46,
            (Il2CppObject *)v61,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
        }
        else
        {
          v90 = &v87->obj.klass + v89;
          v46->fields._size = v89 + 1;
          v90[4] = (Il2CppClass *)v61;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v90 + 4), (int32_t)v61, v71, v72);
        }
      }
    }
  }
  v33 = self;
  v95 = *(_QWORD *)v51;
  v96 = *(unsigned __int16 *)(*(_QWORD *)v51 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v51 + 302LL) )
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
    v98 = sub_1BB60A8(v51, System_IDisposable_TypeInfo, 0LL);
  }
  v29 = (*(__int64 (__fastcall **)(__int64, _QWORD))v98)(v51, *(_QWORD *)(v98 + 8));
  if ( !v104 )
LABEL_100:
    sub_1B64324(v29);
  if ( v104->fields._size >= 1 )
    v100 = (System_Collections_Generic_List_Transform__o *)v104;
  else
    v100 = (System_Collections_Generic_List_Transform__o *)v46;
  v101 = TransformHelper__SelectNodeWithRule(v100, useNewRule, v99);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v101, 0LL, 0LL) || !v103 )
    return v101;
  return v33;
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

  if ( (byte_49FDAA0 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, nodename);
    byte_49FDAA0 = 1;
  }
  NodeFromLvName = TransformHelper__executeGetNodeFromLvName(self, nodename, level, 0, useNewRule, 1, v5);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)NodeFromLvName, 0LL, 0LL) )
    return TransformHelper__executeGetNodeFromLvName(self, nodename, level, 1, useNewRule, 1, v11);
  else
    return NodeFromLvName;
}


// local variable allocation has failed, the output may be wrong!
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
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_object; // x19
  __int64 v20; // x1
  __int64 v21; // x2
  System_Func_object__bool__o *v22; // x20
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x19
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v28; // x0
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

  if ( (byte_49FDAA3 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentsInChildren_Transform____75728112, nodename);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_Transform___, v7);
    sub_1B640C8(&System_Func_Transform__bool__TypeInfo, v8);
    sub_1B640C8(&System_IDisposable_TypeInfo, v9);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_Transform__TypeInfo, v10);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_Transform__TypeInfo, v11);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1B640C8(&Method_TransformHelper___c__DisplayClass7_0__getNodeFromName_b__0__, v13);
    sub_1B640C8(&TransformHelper___c__DisplayClass7_0_TypeInfo, v14);
    byte_49FDAA3 = 1;
  }
  v15 = sub_1B64314(TransformHelper___c__DisplayClass7_0_TypeInfo, nodename, includeInactive);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15
    || (*(_QWORD *)(v15 + 16) = nodename,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 16), (int32_t)nodename, v17, v18),
        !self)
    || (ComponentsInChildren_object = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                                                             (UnityEngine_Component_o *)self,
                                                                                             includeInactive,
                                                                                             (const MethodInfo_2E3097C *)Method_UnityEngine_Component_GetComponentsInChildren_Transform____75728112),
        v22 = (System_Func_object__bool__o *)sub_1B64314(System_Func_Transform__bool__TypeInfo, v20, v21),
        System_Func_object__bool____ctor(
          v22,
          (Il2CppObject *)v15,
          Method_TransformHelper___c__DisplayClass7_0__getNodeFromName_b__0__,
          0LL),
        (v16 = System_Linq_Enumerable__Where_object_(
                 ComponentsInChildren_object,
                 (System_Func_TSource__bool__o *)v22,
                 (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_Transform___)) == 0LL) )
  {
    sub_1B64324(v16);
  }
  klass = v16->klass;
  v24 = v16;
  v25 = *(unsigned __int16 *)(&v16->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v16->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      --v25;
      p_offset += 4;
      if ( !v25 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1BB60A8(v16, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0LL);
  }
  v28 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v24,
          *(_QWORD *)(p_method + 8));
  v29 = v28;
  if ( !v28 )
    sub_1B64324(0LL);
  v30 = *(_QWORD *)v28;
  v31 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
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
    v33 = sub_1BB60A8(v28, System_Collections_IEnumerator_TypeInfo, 0LL);
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
    v37 = sub_1BB60A8(v29, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0LL);
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
      v42 = sub_1BB60A8(v29, System_IDisposable_TypeInfo, 0LL);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  }
  return System_String__Equals_61383712((System_String_o *)this, v3->fields.nodename, 0LL);
}