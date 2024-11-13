int32_t __fastcall TransformHelper__CalcPriority(System_String_o *objName, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *v8; // x0
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B179B2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Text_RegularExpressions_Regex_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_16135/*"[^0-9]"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B179B2 = 1;
  }
  result = 0;
  if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo, method);
  v8 = System_Text_RegularExpressions_Regex__Replace(
         objName,
         (System_String_o *)StringLiteral_16135/*"[^0-9]"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0LL);
  System_Int32__TryParse(v8, &result, 0LL);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v15; // x8
  __int64 v16; // x9
  System_Collections_IEnumerator_c **v17; // x10
  __int64 v18; // x0
  UnityEngine_Transform_o *v19; // x0
  const MethodInfo *v20; // x2
  __int64 methodPtr_low; // x9
  __int64 v22; // x0
  __int64 v23; // x8
  __int64 v24; // x20
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0

  v4 = (UnityEngine_Component_o *)self;
  if ( (byte_4B179AA & 1) == 0 )
  {
    sub_1BCA7E0(&System_IDisposable_TypeInfo, *(_QWORD *)&layer, method);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v5, v6);
    self = (UnityEngine_Transform_o *)sub_1BCA7E0(&UnityEngine_Transform_TypeInfo, v7, v8);
    byte_4B179AA = 1;
  }
  if ( !v4 || (self = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v4, 0LL)) == 0LL )
LABEL_33:
    sub_1BCAA3C(self, *(_QWORD *)&layer);
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)self, layer, 0LL);
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)v4, 0LL);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v9);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v17 = (System_Collections_IEnumerator_c **)&v15->_1.interfaceOffsets->offset;
      while ( *(v17 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        v17 += 2;
        if ( !v16 )
          goto LABEL_17;
      }
      v18 = (__int64)&v15->vtable[*(_DWORD *)v17 + 1].method;
    }
    else
    {
LABEL_17:
      v18 = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v19 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v18)(
                                       Enumerator,
                                       *(_QWORD *)(v18 + 8));
    if ( v19 )
    {
      methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v19->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (UnityEngine_Transform_c *)v19->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_1BCACFC(v19);
        goto LABEL_33;
      }
    }
    TransformHelper__ChangeChildsLayer(v19, layer, v20);
  }
  v22 = sub_1BCA91C(Enumerator, System_IDisposable_TypeInfo);
  if ( v22 )
  {
    v23 = *(_QWORD *)v22;
    v24 = v22;
    v25 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
    {
      v26 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_28;
      }
      v27 = v23 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_28:
      v27 = sub_1C1C7C0(v22, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v27)(v24, *(_QWORD *)(v27 + 8));
  }
  return layer;
}


void __fastcall TransformHelper__DestroyChildren(UnityEngine_Transform_o *self, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v16; // x8
  __int64 v17; // x9
  System_Collections_IEnumerator_c **v18; // x10
  __int64 v19; // x0
  UnityEngine_Component_o *v20; // x0
  __int64 v21; // x1
  __int64 methodPtr_low; // x9
  __int64 v23; // x1
  UnityEngine_Object_o *gameObject; // x20
  __int64 v25; // x0
  __int64 v26; // x8
  __int64 v27; // x19
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0

  v3 = (UnityEngine_Component_o *)self;
  if ( (byte_4B179AB & 1) == 0 )
  {
    sub_1BCA7E0(&System_IDisposable_TypeInfo, method, v2);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    self = (UnityEngine_Transform_o *)sub_1BCA7E0(&UnityEngine_Transform_TypeInfo, v8, v9);
    byte_4B179AB = 1;
  }
  if ( !v3 || (self = UnityEngine_Component__get_transform(v3, 0LL)) == 0LL )
    sub_1BCAA3C(self, method);
  Enumerator = UnityEngine_Transform__GetEnumerator(self, 0LL);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v18 = (System_Collections_IEnumerator_c **)&v16->_1.interfaceOffsets->offset;
      while ( *(v18 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        v18 += 2;
        if ( !v17 )
          goto LABEL_17;
      }
      v19 = (__int64)&v16->vtable[*(_DWORD *)v18 + 1].method;
    }
    else
    {
LABEL_17:
      v19 = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v20 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v19)(
                                       Enumerator,
                                       *(_QWORD *)(v19 + 8));
    if ( !v20 )
      goto LABEL_35;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v20->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v20->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1BCACFC(v20);
LABEL_35:
      sub_1BCAA3C(v20, v21);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v20, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
  }
  v25 = sub_1BCA91C(Enumerator, System_IDisposable_TypeInfo);
  if ( v25 )
  {
    v26 = *(_QWORD *)v25;
    v27 = v25;
    v28 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_30;
      }
      v30 = v26 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_30:
      v30 = sub_1C1C7C0(v25, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v30)(v27, *(_QWORD *)(v30 + 8));
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TransformHelper__ExistNodeFromLvName(
        UnityEngine_Transform_o *self,
        System_String_o *nodename,
        int32_t level,
        bool useNewRule,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x6
  __int64 v11; // x1
  UnityEngine_Object_o *NodeFromLvName; // x19

  if ( (byte_4B179AD & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, nodename, *(_QWORD *)&level);
    byte_4B179AD = 1;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  return UnityEngine_Object__op_Inequality(NodeFromLvName, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  System_Object_array *ComponentsInChildren_object; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Collections_Generic_List_object__o *v27; // x22
  __int64 v28; // x8
  unsigned __int64 v29; // x26
  Il2CppObject **m_Items; // x27
  bool v31; // w23
  bool v32; // w24
  UnityEngine_Object_o *v33; // x25
  __int64 v34; // x1
  Il2CppObject *Component_object; // x25
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v37; // x6
  __int64 v38; // x1
  UnityEngine_Object_o *NodeFromLvName; // x25
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0

  v10 = (UnityEngine_Component_o *)parentTransform;
  if ( (byte_4B179B0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_BattleActorControl___, nodename, includeInactive);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_Transform____76859120, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Transform__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Transform__ToArray__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Transform___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_Transform__TypeInfo, v19, v20);
    parentTransform = (UnityEngine_Transform_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v21, v22);
    byte_4B179B0 = 1;
  }
  if ( !isIgnore )
    return 0LL;
  if ( !v10 )
    goto LABEL_31;
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  v10,
                                  1,
                                  (const MethodInfo_2F0A220 *)Method_UnityEngine_Component_GetComponentsInChildren_Transform____76859120);
  v27 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_Transform__TypeInfo,
                                                       v24,
                                                       v25,
                                                       v26);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_Transform___ctor__);
  if ( !ComponentsInChildren_object )
    goto LABEL_31;
  v28 = *(_QWORD *)&ComponentsInChildren_object->max_length;
  if ( (int)v28 >= 1 )
  {
    v29 = 0LL;
    m_Items = ComponentsInChildren_object->m_Items;
    v31 = includeInactive;
    v32 = useNewRule;
    do
    {
      if ( v29 >= (unsigned int)v28 )
LABEL_30:
        sub_1BCAA44(parentTransform, nodename);
      v33 = (UnityEngine_Object_o *)m_Items[v29];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, nodename);
      parentTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(
                                                     (UnityEngine_Object_o *)v10,
                                                     v33,
                                                     0LL);
      if ( ((unsigned __int8)parentTransform & 1) == 0 )
      {
        if ( v29 >= ComponentsInChildren_object->max_length )
          goto LABEL_30;
        parentTransform = (UnityEngine_Transform_o *)m_Items[v29];
        if ( !parentTransform )
          goto LABEL_31;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)parentTransform,
                             (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_BattleActorControl___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34);
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
                                                     v31,
                                                     v32,
                                                     0,
                                                     v37);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38);
          parentTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(NodeFromLvName, 0LL, 0LL);
          if ( ((unsigned __int8)parentTransform & 1) == 0 )
          {
            if ( !v27 )
              goto LABEL_31;
            items = v27->fields._items;
            v47 = Method_System_Collections_Generic_List_Transform__Add__;
            ++v27->fields._version;
            if ( !items )
              goto LABEL_31;
            size = v27->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v27,
                (Il2CppObject *)NodeFromLvName,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
            }
            else
            {
              v49 = &items->obj.klass + size;
              v27->fields._size = size + 1;
              v49[4] = (Il2CppClass *)NodeFromLvName;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)(v49 + 4),
                (int64_t)NodeFromLvName,
                v40,
                v41,
                v42,
                v43,
                v44,
                v45);
            }
          }
        }
      }
      LODWORD(v28) = ComponentsInChildren_object->max_length;
    }
    while ( (__int64)++v29 < (int)v28 );
  }
  if ( !v27 )
LABEL_31:
    sub_1BCAA3C(parentTransform, nodename);
  return (UnityEngine_Transform_array *)System_Collections_Generic_List_object___ToArray(
                                          v27,
                                          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_Transform__ToArray__);
}


bool __fastcall TransformHelper__SafeSetParentNonNull(
        UnityEngine_Transform_o *self,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  float v12; // s11
  float v13; // s12
  float v14; // s13
  float w; // s14
  float v16; // s15
  UnityEngine_GameObject_o *v17; // x20
  float v18; // [xsp+48h] [xbp-28h]
  float v19; // [xsp+4Ch] [xbp-24h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B179AC & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, parent, method);
    byte_4B179AC = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, parent);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0LL, 0LL) )
    return 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
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
  v12 = localRotation.fields.x;
  v13 = localRotation.fields.y;
  v14 = localRotation.fields.z;
  w = localRotation.fields.w;
  localScale = UnityEngine_Transform__get_localScale(self, 0LL);
  v16 = localScale.fields.x;
  v18 = localScale.fields.z;
  v19 = localScale.fields.y;
  UnityEngine_Transform__set_parent(self, parent, 0LL);
  v22.fields.x = x;
  v22.fields.y = y;
  v22.fields.z = z;
  UnityEngine_Transform__set_localPosition(self, v22, 0LL);
  v25.fields.x = v12;
  v25.fields.y = v13;
  v25.fields.z = v14;
  v25.fields.w = w;
  UnityEngine_Transform__set_localRotation(self, v25, 0LL);
  v23.fields.z = v18;
  v23.fields.y = v19;
  v23.fields.x = v16;
  UnityEngine_Transform__set_localScale(self, v23, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)self, 0LL);
  if ( !parent
    || (v17 = gameObject,
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)parent, 0LL)) == 0LL)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(gameObject, 0LL), !v17) )
  {
LABEL_15:
    sub_1BCAA3C(gameObject, v7);
  }
  UnityEngine_GameObject__set_layer(v17, (int32_t)gameObject, 0LL);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t v13; // w22
  Il2CppObject *v14; // x21
  float v15; // s8
  UnityEngine_Object_o *v16; // x19
  _BOOL8 v17; // x0
  __int64 v18; // x1
  System_String_o *v19; // x0
  __int64 v20; // x1
  _BOOL8 v21; // x0
  __int64 v22; // x1
  System_String_o *v23; // x0
  __int64 v24; // x1
  System_String_o *v25; // x0
  const MethodInfo *v26; // x1
  float v27; // s9
  System_String_o *v28; // x0
  const MethodInfo *v29; // x1
  float z; // s8
  _BOOL8 v31; // x0
  __int64 v32; // x1
  Il2CppObject *current; // x20
  System_String_o *name; // x0
  __int64 v35; // x1
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4

  v4 = tNode;
  if ( (byte_4B179B3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Transform__Dispose__, useNewRule, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Transform__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Transform__GetEnumerator__, v9, v10);
    tNode = (System_Collections_Generic_List_Transform__o *)sub_1BCA7E0(&StringLiteral_116/*" "*/, v11, v12);
    byte_4B179B3 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  if ( !useNewRule )
  {
    v16 = 0LL;
    z = -100.0;
    if ( v4 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v37,
        (System_Collections_Generic_List_object__o *)v4,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_Transform__GetEnumerator__);
      v38 = v37;
      while ( 1 )
      {
        v31 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v38,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext__);
        if ( !v31 )
          break;
        current = v38.fields._current;
        if ( !v38.fields._current )
          sub_1BCAA3C(v31, v32);
        lossyScale = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)v38.fields._current, 0LL);
        if ( lossyScale.fields.z > z )
        {
          v44 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)current, 0LL);
          z = v44.fields.z;
          v16 = (UnityEngine_Object_o *)current;
        }
        else
        {
          v43 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)current, 0LL);
          if ( v43.fields.z == z )
          {
            name = UnityEngine_Object__get_name((UnityEngine_Object_o *)current, 0LL);
            if ( !name )
              sub_1BCAA3C(0LL, v35);
            if ( !System_String__Contains(name, (System_String_o *)StringLiteral_116/*" "*/, 0LL) )
              v16 = (UnityEngine_Object_o *)current;
          }
        }
      }
      goto LABEL_31;
    }
LABEL_35:
    sub_1BCAA3C(tNode, useNewRule);
  }
  if ( !v4 )
    goto LABEL_35;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v37,
    (System_Collections_Generic_List_object__o *)v4,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_Transform__GetEnumerator__);
  v13 = 0;
  v14 = 0LL;
  v15 = -100.0;
  v38 = v37;
LABEL_6:
  v16 = (UnityEngine_Object_o *)v14;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v38,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext__);
    if ( !v17 )
      break;
    v14 = v38.fields._current;
    if ( !v38.fields._current )
      sub_1BCAA3C(v17, v18);
    v39 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)v38.fields._current, 0LL);
    if ( v39.fields.z > v15 )
    {
      v41 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)v14, 0LL);
      v27 = v41.fields.z;
      v28 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v14, 0LL);
      v13 = TransformHelper__CalcPriority(v28, v29);
      v15 = v27;
      goto LABEL_6;
    }
    v40 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)v14, 0LL);
    if ( v40.fields.z == v15 )
    {
      v19 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v14, 0LL);
      if ( !v19 )
        sub_1BCAA3C(0LL, v20);
      v21 = System_String__Contains(v19, (System_String_o *)StringLiteral_116/*" "*/, 0LL);
      if ( v21 )
      {
        if ( !v16 )
          sub_1BCAA3C(v21, v22);
        v23 = UnityEngine_Object__get_name(v16, 0LL);
        if ( !v23 )
          sub_1BCAA3C(0LL, v24);
        if ( System_String__Contains(v23, (System_String_o *)StringLiteral_116/*" "*/, 0LL) )
        {
          v25 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v14, 0LL);
          if ( v13 > TransformHelper__CalcPriority(v25, v26) )
            v14 = (Il2CppObject *)v16;
        }
        goto LABEL_6;
      }
    }
  }
LABEL_31:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v38,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_Transform__Dispose__);
  return (UnityEngine_Transform_o *)v16;
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x23
  __int64 v46; // x0
  __int64 v47; // x1
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  System_String_o *v54; // x0
  UnityEngine_Transform_o *v55; // x20
  __int64 v56; // x1
  Il2CppObject *Component_object; // x24
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_object; // x24
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  System_Func_object__bool__o *v62; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x24
  const MethodInfo *v64; // x5
  UnityEngine_Transform_array *IgnoreNodeList; // x26
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  System_Collections_Generic_List_object__o *v72; // x23
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  __int64 v74; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v77; // x1
  __int64 v78; // x24
  __int64 v79; // x8
  __int64 v80; // x9
  int *v81; // x10
  __int64 v82; // x0
  __int64 v83; // x8
  __int64 v84; // x9
  int *v85; // x10
  __int64 v86; // x0
  __int64 v87; // x0
  __int64 v88; // x1
  UnityEngine_Component_o *v89; // x27
  __int64 v90; // x29
  UnityEngine_Object_o *gameObject; // x0
  __int64 v92; // x1
  __int64 InstanceID; // x0
  __int64 v94; // x1
  int v95; // w28
  UnityEngine_Component_o *v96; // x0
  UnityEngine_Object_o *v97; // x0
  __int64 v98; // x1
  System_String_o *name; // x0
  __int64 v100; // x1
  _BOOL8 v101; // x0
  __int64 v102; // x1
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  System_String_o *v109; // x0
  __int64 v110; // x1
  int32_t v111; // w28
  System_String_o *v112; // x0
  __int64 v113; // x1
  System_String_o *v114; // x0
  __int64 v115; // x1
  System_String_o *v116; // x28
  int32_t v117; // w2
  __int64 v118; // x1
  System_String_array *v119; // x0
  __int64 v120; // x1
  System_String_array *v121; // x28
  __int64 v122; // x8
  unsigned __int64 v123; // x21
  System_String_o *v124; // x29
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  struct System_Object_array *v131; // x8
  _QWORD *v132; // x9
  __int64 v133; // x10
  Il2CppClass **v134; // x0
  struct System_Object_array *items; // x8
  _QWORD *v136; // x9
  __int64 size; // x10
  Il2CppClass **v138; // x0
  __int64 v139; // x8
  __int64 v140; // x9
  int *v141; // x10
  __int64 v142; // x0
  const MethodInfo *v143; // x2
  System_Collections_Generic_List_Transform__o *v144; // x0
  __int64 v145; // x1
  UnityEngine_Transform_o *v146; // x21
  bool v148; // [xsp+Ch] [xbp-84h]
  System_Collections_Generic_List_object__o *v149; // [xsp+10h] [xbp-80h]
  int32_t result; // [xsp+2Ch] [xbp-64h] BYREF

  v9 = level;
  if ( (byte_4B179AF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_BattleActorControl___, nodename, *(_QWORD *)&level);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_Transform____76859120, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_Transform___, v13, v14);
    sub_1BCA7E0(&System_Func_Transform__bool__TypeInfo, v15, v16);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_Transform__TypeInfo, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_Transform__TypeInfo, v21, v22);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Transform__Add__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Transform___ctor__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Transform__get_Count__, v29, v30);
    sub_1BCA7E0(&System_Collections_Generic_List_Transform__TypeInfo, v31, v32);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v33, v34);
    sub_1BCA7E0(&Method_TransformHelper___c__DisplayClass5_0__executeGetNodeFromLvName_b__0__, v35, v36);
    sub_1BCA7E0(&TransformHelper___c__DisplayClass5_0_TypeInfo, v37, v38);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_16720/*"_level"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v43, v44);
    byte_4B179AF = 1;
  }
  result = 0;
  v45 = sub_1BCAA2C(TransformHelper___c__DisplayClass5_0_TypeInfo, nodename, *(_QWORD *)&level, includeInactive);
  System_Object___ctor((Il2CppObject *)v45, 0LL);
  if ( !v45 )
    goto LABEL_100;
  *(_QWORD *)(v45 + 16) = nodename;
  sub_1BCA784((PartyOrganizationUtility_o *)(v45 + 16), (int64_t)nodename, v48, v49, v50, v51, v52, v53);
  v54 = *(System_String_o **)(v45 + 16);
  v55 = self;
  if ( !v54 )
    return v55;
  v46 = System_String__Equals_62409536(v54, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( (v46 & 1) != 0 )
    return v55;
  if ( !self )
    goto LABEL_100;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)self,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v56);
  v46 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( v9 == -1 && (v46 & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_100;
    v9 = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)Component_object, 0LL) + 1;
  }
  ComponentsInChildren_object = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                                                       (UnityEngine_Component_o *)self,
                                                                                       includeInactive,
                                                                                       (const MethodInfo_2F0A220 *)Method_UnityEngine_Component_GetComponentsInChildren_Transform____76859120);
  v62 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_Transform__bool__TypeInfo, v59, v60, v61);
  System_Func_object__bool____ctor(
    v62,
    (Il2CppObject *)v45,
    Method_TransformHelper___c__DisplayClass5_0__executeGetNodeFromLvName_b__0__,
    0LL);
  v63 = System_Linq_Enumerable__Where_object_(
          ComponentsInChildren_object,
          (System_Func_TSource__bool__o *)v62,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_Transform___);
  IgnoreNodeList = TransformHelper__GetIgnoreNodeList(
                     self,
                     *(System_String_o **)(v45 + 16),
                     includeInactive,
                     useNewRule,
                     isIgnore,
                     v64);
  v149 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_Transform__TypeInfo,
                                                        v66,
                                                        v67,
                                                        v68);
  System_Collections_Generic_List_object____ctor(
    v149,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_Transform___ctor__);
  v72 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_Transform__TypeInfo,
                                                       v69,
                                                       v70,
                                                       v71);
  System_Collections_Generic_List_object____ctor(
    v72,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_Transform___ctor__);
  if ( !v63 )
    goto LABEL_100;
  klass = v63->klass;
  v74 = *(unsigned __int16 *)(&v63->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v63->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      --v74;
      p_offset += 4;
      if ( !v74 )
        goto LABEL_18;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_18:
    p_method = sub_1C1C7C0(v63, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0LL);
  }
  v148 = includeInactive;
  v78 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v63,
          *(_QWORD *)(p_method + 8));
  if ( !v78 )
    sub_1BCAA3C(0LL, v77);
  while ( 1 )
  {
LABEL_21:
    v79 = *(_QWORD *)v78;
    v80 = *(unsigned __int16 *)(*(_QWORD *)v78 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v78 + 302LL) )
    {
      v81 = (int *)(*(_QWORD *)(v79 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v81 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v80;
        v81 += 4;
        if ( !v80 )
          goto LABEL_25;
      }
      v82 = v79 + 16LL * *v81 + 312;
    }
    else
    {
LABEL_25:
      v82 = sub_1C1C7C0(v78, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v82)(v78, *(_QWORD *)(v82 + 8)) & 1) == 0 )
      break;
    v83 = *(_QWORD *)v78;
    v84 = *(unsigned __int16 *)(*(_QWORD *)v78 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v78 + 302LL) )
    {
      v85 = (int *)(*(_QWORD *)(v83 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v85 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        --v84;
        v85 += 4;
        if ( !v84 )
          goto LABEL_32;
      }
      v86 = v83 + 16LL * *v85 + 312;
    }
    else
    {
LABEL_32:
      v86 = sub_1C1C7C0(v78, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0LL);
    }
    v87 = (*(__int64 (__fastcall **)(__int64, _QWORD))v86)(v78, *(_QWORD *)(v86 + 8));
    v89 = (UnityEngine_Component_o *)v87;
    if ( IgnoreNodeList && (int)IgnoreNodeList->max_length >= 1 )
    {
      if ( !v87 )
        sub_1BCAA3C(0LL, v88);
      v90 = 0LL;
      while ( 1 )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v89, 0LL);
        if ( !gameObject )
          sub_1BCAA3C(0LL, v92);
        InstanceID = UnityEngine_Object__GetInstanceID(gameObject, 0LL);
        if ( (unsigned int)v90 >= IgnoreNodeList->max_length )
          sub_1BCAA44(InstanceID, v94);
        v95 = InstanceID;
        v96 = (UnityEngine_Component_o *)IgnoreNodeList->m_Items[v90];
        if ( !v96 )
          sub_1BCAA3C(0LL, v94);
        v97 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v96, 0LL);
        if ( !v97 )
          sub_1BCAA3C(0LL, v98);
        v87 = UnityEngine_Object__GetInstanceID(v97, 0LL);
        if ( v95 == (_DWORD)v87 )
          break;
        if ( (int)++v90 >= (signed int)IgnoreNodeList->max_length )
          goto LABEL_44;
      }
    }
    else
    {
LABEL_44:
      if ( !v89 )
        sub_1BCAA3C(v87, v88);
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v89, 0LL);
      if ( !name )
        sub_1BCAA3C(0LL, v100);
      v101 = System_String__Contains(name, (System_String_o *)StringLiteral_16720/*"_level"*/, 0LL);
      if ( v101 )
      {
        v109 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v89, 0LL);
        if ( !v109 )
          sub_1BCAA3C(0LL, v110);
        v111 = System_String__IndexOf_62432796(v109, (System_String_o *)StringLiteral_16720/*"_level"*/, 0LL);
        v112 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v89, 0LL);
        if ( !v112 )
          sub_1BCAA3C(0LL, v113);
        v114 = System_String__Substring(v112, v111 + 7, 0LL);
        v116 = v114;
        if ( !v114 )
          sub_1BCAA3C(0LL, v115);
        if ( (System_String__IndexOf_62432796(v114, (System_String_o *)StringLiteral_116/*" "*/, 0LL) & 0x80000000) == 0 )
        {
          v117 = System_String__IndexOf_62432796(v116, (System_String_o *)StringLiteral_116/*" "*/, 0LL);
          v116 = System_String__Substring_62420224(v116, 0, v117, 0LL);
          if ( !v116 )
            sub_1BCAA3C(0LL, v118);
        }
        v119 = System_String__Split(v116, 0x5Fu, 0, 0LL);
        v121 = v119;
        if ( !v119 )
          sub_1BCAA3C(0LL, v120);
        v122 = *(_QWORD *)&v119->max_length;
        if ( (int)v122 >= 1 )
        {
          v123 = 0LL;
          while ( 1 )
          {
            if ( v123 >= (unsigned int)v122 )
              sub_1BCAA44(v119, v120);
            v124 = v121->m_Items[v123];
            result = 99;
            v119 = (System_String_array *)System_Int32__TryParse(v124, &result, 0LL);
            if ( ((unsigned __int8)v119 & 1) != 0 )
            {
              v119 = (System_String_array *)System_Int32__Parse(v124, 0LL);
              if ( (_DWORD)v119 == v9 )
                break;
            }
            LODWORD(v122) = v121->max_length;
            if ( (__int64)++v123 >= (int)v122 )
              goto LABEL_21;
          }
          if ( !v149 )
            sub_1BCAA3C(v119, v120);
          items = v149->fields._items;
          v136 = Method_System_Collections_Generic_List_Transform__Add__;
          ++v149->fields._version;
          if ( !items )
            sub_1BCAA3C(v119, v120);
          size = v149->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v149,
              (Il2CppObject *)v89,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v136[4] + 192LL) + 112LL));
          }
          else
          {
            v138 = &items->obj.klass + size;
            v149->fields._size = size + 1;
            v138[4] = (Il2CppClass *)v89;
            sub_1BCA784((PartyOrganizationUtility_o *)(v138 + 4), (int64_t)v89, v125, v126, v127, v128, v129, v130);
          }
        }
      }
      else
      {
        if ( !v72 )
          sub_1BCAA3C(v101, v102);
        v131 = v72->fields._items;
        v132 = Method_System_Collections_Generic_List_Transform__Add__;
        ++v72->fields._version;
        if ( !v131 )
          sub_1BCAA3C(v101, v102);
        v133 = v72->fields._size;
        if ( (unsigned int)v133 >= v131->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v72,
            (Il2CppObject *)v89,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v132[4] + 192LL) + 112LL));
        }
        else
        {
          v134 = &v131->obj.klass + v133;
          v72->fields._size = v133 + 1;
          v134[4] = (Il2CppClass *)v89;
          sub_1BCA784((PartyOrganizationUtility_o *)(v134 + 4), (int64_t)v89, v103, v104, v105, v106, v107, v108);
        }
      }
    }
  }
  v55 = self;
  v139 = *(_QWORD *)v78;
  v140 = *(unsigned __int16 *)(*(_QWORD *)v78 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v78 + 302LL) )
  {
    v141 = (int *)(*(_QWORD *)(v139 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v141 - 1) != System_IDisposable_TypeInfo )
    {
      --v140;
      v141 += 4;
      if ( !v140 )
        goto LABEL_74;
    }
    v142 = v139 + 16LL * *v141 + 312;
  }
  else
  {
LABEL_74:
    v142 = sub_1C1C7C0(v78, System_IDisposable_TypeInfo, 0LL);
  }
  v46 = (*(__int64 (__fastcall **)(__int64, _QWORD))v142)(v78, *(_QWORD *)(v142 + 8));
  if ( !v149 )
LABEL_100:
    sub_1BCAA3C(v46, v47);
  if ( v149->fields._size >= 1 )
    v144 = (System_Collections_Generic_List_Transform__o *)v149;
  else
    v144 = (System_Collections_Generic_List_Transform__o *)v72;
  v146 = TransformHelper__SelectNodeWithRule(v144, useNewRule, v143);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v145);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v146, 0LL, 0LL) || !v148 )
    return v146;
  return v55;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Transform_o *__fastcall TransformHelper__getNodeFromLvName(
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

  if ( (byte_4B179AE & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, nodename, *(_QWORD *)&level);
    byte_4B179AE = 1;
  }
  NodeFromLvName = TransformHelper__executeGetNodeFromLvName(self, nodename, level, 0, useNewRule, 1, v5);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)NodeFromLvName, 0LL, 0LL) )
    return TransformHelper__executeGetNodeFromLvName(self, nodename, level, 1, useNewRule, 1, v12);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_object; // x19
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  System_Func_object__bool__o *v36; // x20
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x19
  __int64 v39; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v42; // x0
  __int64 v43; // x1
  __int64 v44; // x19
  __int64 v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  __int64 v49; // x8
  __int64 v50; // x9
  int *v51; // x10
  __int64 v52; // x0
  UnityEngine_Transform_o *v53; // x21
  __int64 v54; // x8
  __int64 v55; // x9
  int *v56; // x10
  __int64 v57; // x0

  if ( (byte_4B179B1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_Transform____76859120, nodename, includeInactive);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_Transform___, v7, v8);
    sub_1BCA7E0(&System_Func_Transform__bool__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_Transform__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_Transform__TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_TransformHelper___c__DisplayClass7_0__getNodeFromName_b__0__, v19, v20);
    sub_1BCA7E0(&TransformHelper___c__DisplayClass7_0_TypeInfo, v21, v22);
    byte_4B179B1 = 1;
  }
  v23 = sub_1BCAA2C(TransformHelper___c__DisplayClass7_0_TypeInfo, nodename, includeInactive, method);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( !v23
    || (*(_QWORD *)(v23 + 16) = nodename,
        sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 16), (int64_t)nodename, v26, v27, v28, v29, v30, v31),
        !self)
    || (ComponentsInChildren_object = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                                                             (UnityEngine_Component_o *)self,
                                                                                             includeInactive,
                                                                                             (const MethodInfo_2F0A220 *)Method_UnityEngine_Component_GetComponentsInChildren_Transform____76859120),
        v36 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_Transform__bool__TypeInfo, v33, v34, v35),
        System_Func_object__bool____ctor(
          v36,
          (Il2CppObject *)v23,
          Method_TransformHelper___c__DisplayClass7_0__getNodeFromName_b__0__,
          0LL),
        (v24 = System_Linq_Enumerable__Where_object_(
                 ComponentsInChildren_object,
                 (System_Func_TSource__bool__o *)v36,
                 (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_Transform___)) == 0LL) )
  {
    sub_1BCAA3C(v24, v25);
  }
  klass = v24->klass;
  v38 = v24;
  v39 = *(unsigned __int16 *)(&v24->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v24->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      --v39;
      p_offset += 4;
      if ( !v39 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1C1C7C0(v24, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0LL);
  }
  v42 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v38,
          *(_QWORD *)(p_method + 8));
  v44 = v42;
  if ( !v42 )
    sub_1BCAA3C(0LL, v43);
  v45 = *(_QWORD *)v42;
  v46 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
  {
    v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
    while ( *((System_Collections_IEnumerator_c **)v47 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      --v46;
      v47 += 4;
      if ( !v46 )
        goto LABEL_17;
    }
    v48 = v45 + 16LL * *v47 + 312;
  }
  else
  {
LABEL_17:
    v48 = sub_1C1C7C0(v42, System_Collections_IEnumerator_TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v48)(v44, *(_QWORD *)(v48 + 8)) & 1) == 0 )
  {
    v53 = 0LL;
    if ( !v44 )
      return v53;
    goto LABEL_29;
  }
  v49 = *(_QWORD *)v44;
  v50 = *(unsigned __int16 *)(*(_QWORD *)v44 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v44 + 302LL) )
  {
    v51 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v51 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
    {
      --v50;
      v51 += 4;
      if ( !v50 )
        goto LABEL_24;
    }
    v52 = v49 + 16LL * *v51 + 312;
  }
  else
  {
LABEL_24:
    v52 = sub_1C1C7C0(v44, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0LL);
  }
  v53 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v52)(v44, *(_QWORD *)(v52 + 8));
  if ( v44 )
  {
LABEL_29:
    v54 = *(_QWORD *)v44;
    v55 = *(unsigned __int16 *)(*(_QWORD *)v44 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v44 + 302LL) )
    {
      v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v56 - 1) != System_IDisposable_TypeInfo )
      {
        --v55;
        v56 += 4;
        if ( !v55 )
          goto LABEL_33;
      }
      v57 = v54 + 16LL * *v56 + 312;
    }
    else
    {
LABEL_33:
      v57 = sub_1C1C7C0(v44, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v57)(v44, *(_QWORD *)(v57 + 8));
  }
  return v53;
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
    sub_1BCAA3C(this, p);
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
    sub_1BCAA3C(this, p);
  }
  return System_String__Equals_62409536((System_String_o *)this, v3->fields.nodename, 0LL);
}