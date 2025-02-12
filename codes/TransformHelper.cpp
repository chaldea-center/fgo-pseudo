int32_t __fastcall TransformHelper__CalcPriority(System_String_o *objName, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *v5; // x0
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BC92E5 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Text_RegularExpressions_Regex_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_16232/*"[^0-9]"*/, v3);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v4);
    byte_4BC92E5 = 1;
  }
  result = 0;
  if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
  v5 = System_Text_RegularExpressions_Regex__Replace(
         objName,
         (System_String_o *)StringLiteral_16232/*"[^0-9]"*/,
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
  if ( (byte_4BC92DD & 1) == 0 )
  {
    sub_1C1ABD4(&System_IDisposable_TypeInfo, *(_QWORD *)&layer);
    sub_1C1ABD4(&System_Collections_IEnumerator_TypeInfo, v5);
    self = (UnityEngine_Transform_o *)sub_1C1ABD4(&UnityEngine_Transform_TypeInfo, v6);
    byte_4BC92DD = 1;
  }
  if ( !v4 || (self = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v4, 0LL)) == 0LL )
LABEL_33:
    sub_1C1AE30(self, *(_QWORD *)&layer);
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)self, layer, 0LL);
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)v4, 0LL);
  if ( !Enumerator )
    sub_1C1AE30(0LL, v7);
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
      p_method = sub_1C6CBB4(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v16 = sub_1C6CBB4(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
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
        sub_1C1B0F0(v17);
        goto LABEL_33;
      }
    }
    TransformHelper__ChangeChildsLayer(v17, layer, v18);
  }
  v20 = sub_1C1AD10(Enumerator, System_IDisposable_TypeInfo);
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
      v25 = sub_1C6CBB4(v20, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8));
  }
  return layer;
}


void __fastcall TransformHelper__DestroyChildren(UnityEngine_Transform_o *self, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v14; // x8
  __int64 v15; // x9
  System_Collections_IEnumerator_c **v16; // x10
  __int64 v17; // x0
  UnityEngine_Component_o *v18; // x0
  __int64 v19; // x1
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *gameObject; // x20
  __int64 v22; // x0
  __int64 v23; // x8
  __int64 v24; // x19
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0

  if ( (byte_4BC92DE & 1) == 0 )
  {
    sub_1C1ABD4(&System_IDisposable_TypeInfo, method);
    sub_1C1ABD4(&System_Collections_IEnumerator_TypeInfo, v3);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v4);
    sub_1C1ABD4(&UnityEngine_Transform_TypeInfo, v5);
    byte_4BC92DE = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( !self || (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)self, 0LL)) == 0LL )
      sub_1C1AE30(transform, v7);
    Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
    if ( !Enumerator )
      sub_1C1AE30(0LL, v8);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v11;
          p_offset += 4;
          if ( !v11 )
            goto LABEL_13;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_13:
        p_method = sub_1C6CBB4(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v14 = Enumerator->klass;
      v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v16 = (System_Collections_IEnumerator_c **)&v14->_1.interfaceOffsets->offset;
        while ( *(v16 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v15;
          v16 += 2;
          if ( !v15 )
            goto LABEL_20;
        }
        v17 = (__int64)&v14->vtable[*(_DWORD *)v16 + 1].method;
      }
      else
      {
LABEL_20:
        v17 = sub_1C6CBB4(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v18 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v17)(
                                         Enumerator,
                                         *(_QWORD *)(v17 + 8));
      if ( !v18 )
        goto LABEL_38;
      methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v18->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (UnityEngine_Transform_c *)v18->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_1C1B0F0(v18);
LABEL_38:
        sub_1C1AE30(v18, v19);
      }
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v18, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70794412(gameObject, 0LL);
    }
    v22 = sub_1C1AD10(Enumerator, System_IDisposable_TypeInfo);
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
            goto LABEL_33;
        }
        v27 = v23 + 16LL * *v26 + 312;
      }
      else
      {
LABEL_33:
        v27 = sub_1C6CBB4(v22, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v27)(v24, *(_QWORD *)(v27 + 8));
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

  if ( (byte_4BC92E0 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, nodename);
    byte_4BC92E0 = 1;
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
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0

  v10 = (UnityEngine_Component_o *)parentTransform;
  if ( (byte_4BC92E3 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_BattleActorControl___, nodename);
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponentsInChildren_Transform____77566384, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Transform__Add__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Transform__ToArray__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Transform___ctor__, v14);
    sub_1C1ABD4(&System_Collections_Generic_List_Transform__TypeInfo, v15);
    parentTransform = (UnityEngine_Transform_o *)sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v16);
    byte_4BC92E3 = 1;
  }
  if ( !isIgnore )
    return 0LL;
  if ( !v10 )
    goto LABEL_31;
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  v10,
                                  1,
                                  (const MethodInfo_2F96A20 *)Method_UnityEngine_Component_GetComponentsInChildren_Transform____77566384);
  v18 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_Transform___ctor__);
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
        sub_1C1AE38(parentTransform, nodename);
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
                             (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_BattleActorControl___);
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
            v36 = Method_System_Collections_Generic_List_Transform__Add__;
            ++v18->fields._version;
            if ( !items )
              goto LABEL_31;
            size = v18->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v18,
                (Il2CppObject *)NodeFromLvName,
                *(const MethodInfo_363C890 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
            }
            else
            {
              v38 = &items->obj.klass + size;
              v18->fields._size = size + 1;
              v38[4] = (Il2CppClass *)NodeFromLvName;
              sub_1C1AB78(
                (PartyOrganizationUtility_o *)(v38 + 4),
                (int64_t)NodeFromLvName,
                v29,
                v30,
                v31,
                v32,
                v33,
                v34);
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
    sub_1C1AE30(parentTransform, nodename);
  return (UnityEngine_Transform_array *)System_Collections_Generic_List_object___ToArray(
                                          v18,
                                          (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_Transform__ToArray__);
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

  if ( (byte_4BC92DF & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, parent);
    byte_4BC92DF = 1;
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
    sub_1C1AE30(gameObject, v6);
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
  if ( (byte_4BC92E6 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_Transform__Dispose__, useNewRule);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_Transform__get_Current__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Transform__GetEnumerator__, v7);
    tNode = (System_Collections_Generic_List_Transform__o *)sub_1C1ABD4(&StringLiteral_117/*" "*/, v8);
    byte_4BC92E6 = 1;
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
        (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_Transform__GetEnumerator__);
      v34 = v33;
      while ( 1 )
      {
        v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v34,
                (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext__);
        if ( !v27 )
          break;
        current = v34.fields._current;
        if ( !v34.fields._current )
          sub_1C1AE30(v27, v28);
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
              sub_1C1AE30(0LL, v31);
            if ( !System_String__Contains(name, (System_String_o *)StringLiteral_117/*" "*/, 0LL) )
              v12 = (UnityEngine_Object_o *)current;
          }
        }
      }
      goto LABEL_31;
    }
LABEL_35:
    sub_1C1AE30(tNode, useNewRule);
  }
  if ( !v4 )
    goto LABEL_35;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
    (System_Collections_Generic_List_object__o *)v4,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_Transform__GetEnumerator__);
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
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext__);
    if ( !v13 )
      break;
    v10 = v34.fields._current;
    if ( !v34.fields._current )
      sub_1C1AE30(v13, v14);
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
        sub_1C1AE30(0LL, v16);
      v17 = System_String__Contains(v15, (System_String_o *)StringLiteral_117/*" "*/, 0LL);
      if ( v17 )
      {
        if ( !v12 )
          sub_1C1AE30(v17, v18);
        v19 = UnityEngine_Object__get_name(v12, 0LL);
        if ( !v19 )
          sub_1C1AE30(0LL, v20);
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
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_Transform__Dispose__);
  return (UnityEngine_Transform_o *)v12;
}


void __fastcall TransformHelper__SetLocalPositionX(
        UnityEngine_Transform_o *self,
        float value,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BC92E7 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BC92E7 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !self )
      sub_1C1AE30(v5, v6);
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

  if ( (byte_4BC92E8 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BC92E8 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !self )
      sub_1C1AE30(v5, v6);
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

  if ( (byte_4BC92E9 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BC92E9 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !self )
      sub_1C1AE30(v5, v6);
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
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_String_o *v37; // x0
  UnityEngine_Transform_o *v38; // x20
  Il2CppObject *Component_object; // x24
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_object; // x24
  System_Func_object__bool__o *v41; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x24
  const MethodInfo *v43; // x5
  UnityEngine_Transform_array *IgnoreNodeList; // x26
  System_Collections_Generic_List_object__o *v45; // x23
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  __int64 v47; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v50; // x1
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
  __int64 v61; // x1
  UnityEngine_Component_o *v62; // x27
  __int64 v63; // x29
  UnityEngine_Object_o *gameObject; // x0
  __int64 v65; // x1
  __int64 InstanceID; // x0
  __int64 v67; // x1
  int v68; // w28
  UnityEngine_Component_o *v69; // x0
  UnityEngine_Object_o *v70; // x0
  __int64 v71; // x1
  System_String_o *name; // x0
  __int64 v73; // x1
  _BOOL8 v74; // x0
  __int64 v75; // x1
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  System_String_o *v82; // x0
  __int64 v83; // x1
  int32_t v84; // w28
  System_String_o *v85; // x0
  __int64 v86; // x1
  System_String_o *v87; // x0
  __int64 v88; // x1
  System_String_o *v89; // x28
  int32_t v90; // w2
  __int64 v91; // x1
  System_String_array *v92; // x0
  __int64 v93; // x1
  System_String_array *v94; // x28
  __int64 v95; // x8
  unsigned __int64 v96; // x21
  System_String_o *v97; // x29
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  struct System_Object_array *v104; // x8
  _QWORD *v105; // x9
  __int64 v106; // x10
  Il2CppClass **v107; // x0
  struct System_Object_array *items; // x8
  _QWORD *v109; // x9
  __int64 size; // x10
  Il2CppClass **v111; // x0
  __int64 v112; // x8
  __int64 v113; // x9
  int *v114; // x10
  __int64 v115; // x0
  const MethodInfo *v116; // x2
  System_Collections_Generic_List_Transform__o *v117; // x0
  UnityEngine_Transform_o *v118; // x21
  bool v120; // [xsp+Ch] [xbp-84h]
  System_Collections_Generic_List_object__o *v121; // [xsp+10h] [xbp-80h]
  int32_t result; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4BC92E2 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_BattleActorControl___, nodename);
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponentsInChildren_Transform____77566384, v11);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Where_Transform___, v12);
    sub_1C1ABD4(&System_Func_Transform__bool__TypeInfo, v13);
    sub_1C1ABD4(&System_IDisposable_TypeInfo, v14);
    sub_1C1ABD4(&System_Collections_Generic_IEnumerable_Transform__TypeInfo, v15);
    sub_1C1ABD4(&System_Collections_Generic_IEnumerator_Transform__TypeInfo, v16);
    sub_1C1ABD4(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Transform__Add__, v18);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Transform___ctor__, v19);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Transform__get_Count__, v20);
    sub_1C1ABD4(&System_Collections_Generic_List_Transform__TypeInfo, v21);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v22);
    sub_1C1ABD4(&Method_TransformHelper___c__DisplayClass5_0__executeGetNodeFromLvName_b__0__, v23);
    sub_1C1ABD4(&TransformHelper___c__DisplayClass5_0_TypeInfo, v24);
    sub_1C1ABD4(&StringLiteral_117/*" "*/, v25);
    sub_1C1ABD4(&StringLiteral_16819/*"_level"*/, v26);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v27);
    byte_4BC92E2 = 1;
  }
  result = 0;
  v28 = sub_1C1AE20(TransformHelper___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v28, 0LL);
  if ( !v28 )
    goto LABEL_100;
  *(_QWORD *)(v28 + 16) = nodename;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v28 + 16), (int64_t)nodename, v31, v32, v33, v34, v35, v36);
  v37 = *(System_String_o **)(v28 + 16);
  v38 = self;
  if ( !v37 )
    return v38;
  v29 = System_String__Equals_63048684(v37, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( (v29 & 1) != 0 )
    return v38;
  if ( !self )
    goto LABEL_100;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)self,
                       (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_BattleActorControl___);
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
                                                                                       (const MethodInfo_2F96A20 *)Method_UnityEngine_Component_GetComponentsInChildren_Transform____77566384);
  v41 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_Transform__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v41,
    (Il2CppObject *)v28,
    Method_TransformHelper___c__DisplayClass5_0__executeGetNodeFromLvName_b__0__,
    0LL);
  v42 = System_Linq_Enumerable__Where_object_(
          ComponentsInChildren_object,
          (System_Func_TSource__bool__o *)v41,
          (const MethodInfo_2FDED84 *)Method_System_Linq_Enumerable_Where_Transform___);
  IgnoreNodeList = TransformHelper__GetIgnoreNodeList(
                     self,
                     *(System_String_o **)(v28 + 16),
                     includeInactive,
                     useNewRule,
                     isIgnore,
                     v43);
  v121 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v121,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_Transform___ctor__);
  v45 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_Transform___ctor__);
  if ( !v42 )
    goto LABEL_100;
  klass = v42->klass;
  v47 = *(unsigned __int16 *)(&v42->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v42->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      --v47;
      p_offset += 4;
      if ( !v47 )
        goto LABEL_18;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_18:
    p_method = sub_1C6CBB4(v42, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0LL);
  }
  v120 = includeInactive;
  v51 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v42,
          *(_QWORD *)(p_method + 8));
  if ( !v51 )
    sub_1C1AE30(0LL, v50);
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
      v55 = sub_1C6CBB4(v51, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v59 = sub_1C6CBB4(v51, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0LL);
    }
    v60 = (*(__int64 (__fastcall **)(__int64, _QWORD))v59)(v51, *(_QWORD *)(v59 + 8));
    v62 = (UnityEngine_Component_o *)v60;
    if ( IgnoreNodeList && (int)IgnoreNodeList->max_length >= 1 )
    {
      if ( !v60 )
        sub_1C1AE30(0LL, v61);
      v63 = 0LL;
      while ( 1 )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v62, 0LL);
        if ( !gameObject )
          sub_1C1AE30(0LL, v65);
        InstanceID = UnityEngine_Object__GetInstanceID(gameObject, 0LL);
        if ( (unsigned int)v63 >= IgnoreNodeList->max_length )
          sub_1C1AE38(InstanceID, v67);
        v68 = InstanceID;
        v69 = (UnityEngine_Component_o *)IgnoreNodeList->m_Items[v63];
        if ( !v69 )
          sub_1C1AE30(0LL, v67);
        v70 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v69, 0LL);
        if ( !v70 )
          sub_1C1AE30(0LL, v71);
        v60 = UnityEngine_Object__GetInstanceID(v70, 0LL);
        if ( v68 == (_DWORD)v60 )
          break;
        if ( (int)++v63 >= (signed int)IgnoreNodeList->max_length )
          goto LABEL_44;
      }
    }
    else
    {
LABEL_44:
      if ( !v62 )
        sub_1C1AE30(v60, v61);
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v62, 0LL);
      if ( !name )
        sub_1C1AE30(0LL, v73);
      v74 = System_String__Contains(name, (System_String_o *)StringLiteral_16819/*"_level"*/, 0LL);
      if ( v74 )
      {
        v82 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v62, 0LL);
        if ( !v82 )
          sub_1C1AE30(0LL, v83);
        v84 = System_String__IndexOf_63071944(v82, (System_String_o *)StringLiteral_16819/*"_level"*/, 0LL);
        v85 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v62, 0LL);
        if ( !v85 )
          sub_1C1AE30(0LL, v86);
        v87 = System_String__Substring(v85, v84 + 7, 0LL);
        v89 = v87;
        if ( !v87 )
          sub_1C1AE30(0LL, v88);
        if ( (System_String__IndexOf_63071944(v87, (System_String_o *)StringLiteral_117/*" "*/, 0LL) & 0x80000000) == 0 )
        {
          v90 = System_String__IndexOf_63071944(v89, (System_String_o *)StringLiteral_117/*" "*/, 0LL);
          v89 = System_String__Substring_63059372(v89, 0, v90, 0LL);
          if ( !v89 )
            sub_1C1AE30(0LL, v91);
        }
        v92 = System_String__Split(v89, 0x5Fu, 0, 0LL);
        v94 = v92;
        if ( !v92 )
          sub_1C1AE30(0LL, v93);
        v95 = *(_QWORD *)&v92->max_length;
        if ( (int)v95 >= 1 )
        {
          v96 = 0LL;
          while ( 1 )
          {
            if ( v96 >= (unsigned int)v95 )
              sub_1C1AE38(v92, v93);
            v97 = v94->m_Items[v96];
            result = 99;
            v92 = (System_String_array *)System_Int32__TryParse(v97, &result, 0LL);
            if ( ((unsigned __int8)v92 & 1) != 0 )
            {
              v92 = (System_String_array *)System_Int32__Parse(v97, 0LL);
              if ( (_DWORD)v92 == level )
                break;
            }
            LODWORD(v95) = v94->max_length;
            if ( (__int64)++v96 >= (int)v95 )
              goto LABEL_21;
          }
          if ( !v121 )
            sub_1C1AE30(v92, v93);
          items = v121->fields._items;
          v109 = Method_System_Collections_Generic_List_Transform__Add__;
          ++v121->fields._version;
          if ( !items )
            sub_1C1AE30(v92, v93);
          size = v121->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v121,
              (Il2CppObject *)v62,
              *(const MethodInfo_363C890 **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
          }
          else
          {
            v111 = &items->obj.klass + size;
            v121->fields._size = size + 1;
            v111[4] = (Il2CppClass *)v62;
            sub_1C1AB78((PartyOrganizationUtility_o *)(v111 + 4), (int64_t)v62, v98, v99, v100, v101, v102, v103);
          }
        }
      }
      else
      {
        if ( !v45 )
          sub_1C1AE30(v74, v75);
        v104 = v45->fields._items;
        v105 = Method_System_Collections_Generic_List_Transform__Add__;
        ++v45->fields._version;
        if ( !v104 )
          sub_1C1AE30(v74, v75);
        v106 = v45->fields._size;
        if ( (unsigned int)v106 >= v104->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v45,
            (Il2CppObject *)v62,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
        }
        else
        {
          v107 = &v104->obj.klass + v106;
          v45->fields._size = v106 + 1;
          v107[4] = (Il2CppClass *)v62;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v107 + 4), (int64_t)v62, v76, v77, v78, v79, v80, v81);
        }
      }
    }
  }
  v38 = self;
  v112 = *(_QWORD *)v51;
  v113 = *(unsigned __int16 *)(*(_QWORD *)v51 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v51 + 302LL) )
  {
    v114 = (int *)(*(_QWORD *)(v112 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v114 - 1) != System_IDisposable_TypeInfo )
    {
      --v113;
      v114 += 4;
      if ( !v113 )
        goto LABEL_74;
    }
    v115 = v112 + 16LL * *v114 + 312;
  }
  else
  {
LABEL_74:
    v115 = sub_1C6CBB4(v51, System_IDisposable_TypeInfo, 0LL);
  }
  v29 = (*(__int64 (__fastcall **)(__int64, _QWORD))v115)(v51, *(_QWORD *)(v115 + 8));
  if ( !v121 )
LABEL_100:
    sub_1C1AE30(v29, v30);
  if ( v121->fields._size >= 1 )
    v117 = (System_Collections_Generic_List_Transform__o *)v121;
  else
    v117 = (System_Collections_Generic_List_Transform__o *)v45;
  v118 = TransformHelper__SelectNodeWithRule(v117, useNewRule, v116);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v118, 0LL, 0LL) || !v120 )
    return v118;
  return v38;
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

  if ( (byte_4BC92E1 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, nodename);
    byte_4BC92E1 = 1;
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_object; // x19
  System_Func_object__bool__o *v25; // x20
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x19
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x19
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  UnityEngine_Transform_o *v42; // x21
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0

  if ( (byte_4BC92E4 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponentsInChildren_Transform____77566384, nodename);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Where_Transform___, v7);
    sub_1C1ABD4(&System_Func_Transform__bool__TypeInfo, v8);
    sub_1C1ABD4(&System_IDisposable_TypeInfo, v9);
    sub_1C1ABD4(&System_Collections_Generic_IEnumerable_Transform__TypeInfo, v10);
    sub_1C1ABD4(&System_Collections_Generic_IEnumerator_Transform__TypeInfo, v11);
    sub_1C1ABD4(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1C1ABD4(&Method_TransformHelper___c__DisplayClass7_0__getNodeFromName_b__0__, v13);
    sub_1C1ABD4(&TransformHelper___c__DisplayClass7_0_TypeInfo, v14);
    byte_4BC92E4 = 1;
  }
  v15 = sub_1C1AE20(TransformHelper___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15
    || (*(_QWORD *)(v15 + 16) = nodename,
        sub_1C1AB78((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)nodename, v18, v19, v20, v21, v22, v23),
        !self)
    || (ComponentsInChildren_object = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                                                             (UnityEngine_Component_o *)self,
                                                                                             includeInactive,
                                                                                             (const MethodInfo_2F96A20 *)Method_UnityEngine_Component_GetComponentsInChildren_Transform____77566384),
        v25 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_Transform__bool__TypeInfo),
        System_Func_object__bool____ctor(
          v25,
          (Il2CppObject *)v15,
          Method_TransformHelper___c__DisplayClass7_0__getNodeFromName_b__0__,
          0LL),
        (v16 = System_Linq_Enumerable__Where_object_(
                 ComponentsInChildren_object,
                 (System_Func_TSource__bool__o *)v25,
                 (const MethodInfo_2FDED84 *)Method_System_Linq_Enumerable_Where_Transform___)) == 0LL) )
  {
    sub_1C1AE30(v16, v17);
  }
  klass = v16->klass;
  v27 = v16;
  v28 = *(unsigned __int16 *)(&v16->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v16->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      --v28;
      p_offset += 4;
      if ( !v28 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1C6CBB4(v16, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0LL);
  }
  v31 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v27,
          *(_QWORD *)(p_method + 8));
  v33 = v31;
  if ( !v31 )
    sub_1C1AE30(0LL, v32);
  v34 = *(_QWORD *)v31;
  v35 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
  {
    v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
    while ( *((System_Collections_IEnumerator_c **)v36 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      --v35;
      v36 += 4;
      if ( !v35 )
        goto LABEL_17;
    }
    v37 = v34 + 16LL * *v36 + 312;
  }
  else
  {
LABEL_17:
    v37 = sub_1C6CBB4(v31, System_Collections_IEnumerator_TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v33, *(_QWORD *)(v37 + 8)) & 1) == 0 )
  {
    v42 = 0LL;
    if ( !v33 )
      return v42;
    goto LABEL_29;
  }
  v38 = *(_QWORD *)v33;
  v39 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
  {
    v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v40 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
    {
      --v39;
      v40 += 4;
      if ( !v39 )
        goto LABEL_24;
    }
    v41 = v38 + 16LL * *v40 + 312;
  }
  else
  {
LABEL_24:
    v41 = sub_1C6CBB4(v33, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0LL);
  }
  v42 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v33, *(_QWORD *)(v41 + 8));
  if ( v33 )
  {
LABEL_29:
    v43 = *(_QWORD *)v33;
    v44 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
    {
      v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
      {
        --v44;
        v45 += 4;
        if ( !v44 )
          goto LABEL_33;
      }
      v46 = v43 + 16LL * *v45 + 312;
    }
    else
    {
LABEL_33:
      v46 = sub_1C6CBB4(v33, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v46)(v33, *(_QWORD *)(v46 + 8));
  }
  return v42;
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
    sub_1C1AE30(this, p);
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
    sub_1C1AE30(this, p);
  }
  return System_String__Equals_63048684((System_String_o *)this, v3->fields.nodename, 0LL);
}