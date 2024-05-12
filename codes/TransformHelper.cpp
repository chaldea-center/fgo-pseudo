int32_t __fastcall TransformHelper__CalcPriority(System_String_o *objName, const MethodInfo *method)
{
  System_String_o *v3; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_438D612 & 1) == 0 )
  {
    sub_B775C4(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_B775C4(&StringLiteral_16063/*"[^0-9]"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438D612 = 1;
  }
  result = 0;
  if ( (BYTE3(System_Text_RegularExpressions_Regex_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
  }
  v3 = System_Text_RegularExpressions_Regex__Replace(
         objName,
         (System_String_o *)StringLiteral_16063/*"[^0-9]"*/,
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
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v11; // x8
  unsigned __int64 v12; // x10
  System_Collections_IEnumerator_c **v13; // x11
  __int64 v14; // x0
  UnityEngine_Transform_o *v15; // x0
  const MethodInfo *v16; // x2
  __int64 v17; // x9
  __int64 v18; // x0
  __int64 v19; // x8
  __int64 v20; // x20
  unsigned __int64 v21; // x10
  int *v22; // x11
  __int64 v23; // x0

  v4 = (UnityEngine_Component_o *)self;
  if ( (byte_438D60A & 1) == 0 )
  {
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    self = (UnityEngine_Transform_o *)sub_B775C4(&UnityEngine_Transform_TypeInfo);
    byte_438D60A = 1;
  }
  if ( !v4 || (self = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v4, 0LL)) == 0LL )
LABEL_33:
    sub_B7769C(self, *(_QWORD *)&layer);
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)self, layer, 0LL);
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)v4, 0LL);
  if ( !Enumerator )
    sub_B7769C(0LL, v5);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v8 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v8;
        p_offset += 4;
        if ( v8 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v11 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      v13 = (System_Collections_IEnumerator_c **)&v11->_1.interfaceOffsets->offset;
      while ( *(v13 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        v13 += 2;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v14 = (__int64)&v11->vtable[*(_DWORD *)v13 + 1].method;
    }
    else
    {
LABEL_17:
      v14 = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v15 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v14)(
                                       Enumerator,
                                       *(_QWORD *)(v14 + 8));
    if ( v15 )
    {
      v17 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v15->klass->_2.bitflags2 + 1) < (unsigned int)v17
        || (UnityEngine_Transform_c *)v15->klass->_2.typeHierarchy[v17 - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_B77990(v15);
        goto LABEL_33;
      }
    }
    TransformHelper__ChangeChildsLayer(v15, layer, v16);
  }
  v18 = sub_B77684(Enumerator, System_IDisposable_TypeInfo);
  if ( v18 )
  {
    v19 = *(_QWORD *)v18;
    v20 = v18;
    if ( *(_WORD *)(*(_QWORD *)v18 + 298LL) )
    {
      v21 = 0LL;
      v22 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
      {
        ++v21;
        v22 += 4;
        if ( v21 >= *(unsigned __int16 *)(*(_QWORD *)v18 + 298LL) )
          goto LABEL_28;
      }
      v23 = v19 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_28:
      v23 = sub_B0F4C0(v18, System_IDisposable_TypeInfo, 0LL);
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
  unsigned __int64 v6; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v9; // x8
  unsigned __int64 v10; // x10
  System_Collections_IEnumerator_c **v11; // x11
  __int64 v12; // x0
  UnityEngine_Component_o *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x9
  UnityEngine_Object_o *gameObject; // x20
  __int64 v17; // x0
  __int64 v18; // x8
  __int64 v19; // x19
  unsigned __int64 v20; // x10
  int *v21; // x11
  __int64 v22; // x0

  v2 = (UnityEngine_Component_o *)self;
  if ( (byte_438D60B & 1) == 0 )
  {
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    self = (UnityEngine_Transform_o *)sub_B775C4(&UnityEngine_Transform_TypeInfo);
    byte_438D60B = 1;
  }
  if ( !v2 || (self = UnityEngine_Component__get_transform(v2, 0LL)) == 0LL )
    sub_B7769C(self, method);
  Enumerator = UnityEngine_Transform__GetEnumerator(self, 0LL);
  if ( !Enumerator )
    sub_B7769C(0LL, v3);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v6 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v6;
        p_offset += 4;
        if ( v6 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v9 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v10 = 0LL;
      v11 = (System_Collections_IEnumerator_c **)&v9->_1.interfaceOffsets->offset;
      while ( *(v11 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v10;
        v11 += 2;
        if ( v10 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v12 = (__int64)&v9->vtable[*(_DWORD *)v11 + 1].method;
    }
    else
    {
LABEL_17:
      v12 = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v13 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v12)(
                                       Enumerator,
                                       *(_QWORD *)(v12 + 8));
    if ( !v13 )
      goto LABEL_36;
    v15 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v13->klass->_2.bitflags2 + 1) < (unsigned int)v15
      || (UnityEngine_Transform_c *)v13->klass->_2.typeHierarchy[v15 - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_B77990(v13);
LABEL_36:
      sub_B7769C(v13, v14);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v13, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36309980(gameObject, 0LL);
  }
  v17 = sub_B77684(Enumerator, System_IDisposable_TypeInfo);
  if ( v17 )
  {
    v18 = *(_QWORD *)v17;
    v19 = v17;
    if ( *(_WORD *)(*(_QWORD *)v17 + 298LL) )
    {
      v20 = 0LL;
      v21 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v21 - 1) != System_IDisposable_TypeInfo )
      {
        ++v20;
        v21 += 4;
        if ( v20 >= *(unsigned __int16 *)(*(_QWORD *)v17 + 298LL) )
          goto LABEL_31;
      }
      v22 = v18 + 16LL * *v21 + 312;
    }
    else
    {
LABEL_31:
      v22 = sub_B0F4C0(v17, System_IDisposable_TypeInfo, 0LL);
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

  if ( (byte_438D60D & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438D60D = 1;
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
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
  UnityEngine_Component_o *v9; // x20
  WarBoardControlPlayTalkUiComponent_array *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x21
  __int64 v12; // x8
  unsigned __int64 v13; // x26
  WarBoardControlPlayTalkUiComponent_o **m_Items; // x27
  bool v15; // w23
  bool v16; // w24
  UnityEngine_Object_o *v17; // x25
  UnityEngine_Object_o *Component_WebViewObject; // x25
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v20; // x6
  UnityEngine_Object_o *NodeFromLvName; // x25
  __int64 v23; // x0

  v9 = (UnityEngine_Component_o *)parentTransform;
  if ( (byte_438D610 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_BattleActorControl___);
    sub_B775C4(&Method_UnityEngine_Component_GetComponentsInChildren_Transform____69483952);
    sub_B775C4(&Method_System_Collections_Generic_List_Transform__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_Transform__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_Transform___ctor__);
    sub_B775C4(&System_Collections_Generic_List_Transform__TypeInfo);
    parentTransform = (UnityEngine_Transform_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438D610 = 1;
  }
  if ( !isIgnore )
    return 0LL;
  if ( !v9 )
    goto LABEL_31;
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                              v9,
                                                              1,
                                                              (const MethodInfo_1C6DADC *)Method_UnityEngine_Component_GetComponentsInChildren_Transform____69483952);
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_Transform___ctor__);
  if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
    goto LABEL_31;
  v12 = *(_QWORD *)&ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = 0LL;
    m_Items = ComponentsInChildren_WarBoardControlPlayTalkUiComponent->m_Items;
    v15 = includeInactive;
    v16 = useNewRule;
    do
    {
      if ( v13 >= (unsigned int)v12 )
      {
LABEL_30:
        v23 = sub_B776C8(parentTransform);
        sub_B77668(v23, 0LL);
      }
      v17 = (UnityEngine_Object_o *)m_Items[v13];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      parentTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v9, v17, 0LL);
      if ( ((unsigned __int8)parentTransform & 1) == 0 )
      {
        if ( v13 >= ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length )
          goto LABEL_30;
        parentTransform = (UnityEngine_Transform_o *)m_Items[v13];
        if ( !parentTransform )
          goto LABEL_31;
        Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            (UnityEngine_Component_o *)parentTransform,
                                                            (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_BattleActorControl___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        parentTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                                       Component_WebViewObject,
                                                       0LL,
                                                       0LL);
        if ( ((unsigned __int8)parentTransform & 1) != 0 )
        {
          if ( !Component_WebViewObject )
            goto LABEL_31;
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_WebViewObject, 0LL);
          NodeFromLvName = (UnityEngine_Object_o *)TransformHelper__executeGetNodeFromLvName(
                                                     transform,
                                                     nodename,
                                                     -1,
                                                     v15,
                                                     v16,
                                                     0,
                                                     v20);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          parentTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(NodeFromLvName, 0LL, 0LL);
          if ( ((unsigned __int8)parentTransform & 1) == 0 )
          {
            if ( !v11 )
              goto LABEL_31;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v11,
              (EventMissionProgressRequest_Argument_ProgressData_o *)NodeFromLvName,
              (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_Transform__Add__);
          }
        }
      }
      LODWORD(v12) = ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length;
    }
    while ( (__int64)++v13 < (int)v12 );
  }
  if ( !v11 )
LABEL_31:
    sub_B7769C(parentTransform, nodename);
  return (UnityEngine_Transform_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                          (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_Transform__ToArray__);
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
  float v17; // [xsp+48h] [xbp-18h]
  float v18; // [xsp+4Ch] [xbp-14h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_438D60C & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438D60C = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0LL, 0LL) )
    return 0;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
    return 0;
  if ( !self )
    goto LABEL_17;
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
LABEL_17:
    sub_B7769C(gameObject, v6);
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
  Il2CppObject *current; // x20
  System_String_o *name; // x0
  __int64 v24; // x1
  _BOOL8 v25; // x0
  __int64 v26; // x1
  int v27; // w20
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+8h] [xbp-88h] BYREF
  int v30[2]; // [xsp+20h] [xbp-70h]
  int v31; // [xsp+28h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+30h] [xbp-60h] BYREF
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4

  v4 = tNode;
  if ( (byte_438D613 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_Transform__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_Transform__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_Transform__GetEnumerator__);
    tNode = (System_Collections_Generic_List_Transform__o *)sub_B775C4(&StringLiteral_82/*" "*/);
    byte_438D613 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v31 = 0;
  if ( !useNewRule )
  {
    z = -100.0;
    v8 = 0LL;
    if ( v4 )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v29,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v4,
        (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_Transform__GetEnumerator__);
      v32 = v29;
      while ( 1 )
      {
        v25 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v32,
                (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext__);
        if ( !v25 )
          break;
        current = v32.fields.current;
        if ( !v32.fields.current )
          sub_B7769C(v25, v26);
        lossyScale = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)v32.fields.current, 0LL);
        if ( lossyScale.fields.z > z )
        {
          v38 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)current, 0LL);
          z = v38.fields.z;
          v8 = (UnityEngine_Transform_o *)current;
        }
        else
        {
          v37 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)current, 0LL);
          if ( v37.fields.z == z )
          {
            name = UnityEngine_Object__get_name((UnityEngine_Object_o *)current, 0LL);
            if ( !name )
              sub_B7769C(0LL, v24);
            if ( !System_String__Contains(name, (System_String_o *)StringLiteral_82/*" "*/, 0LL) )
              v8 = (UnityEngine_Transform_o *)current;
          }
        }
      }
      v30[0] = 303;
      v27 = ++v31;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v32,
        (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_Transform__Dispose__);
      if ( v27 && v30[v27 - 1] == 303 )
        v31 = v27 - 1;
      return v8;
    }
LABEL_39:
    sub_B7769C(tNode, useNewRule);
  }
  if ( !v4 )
    goto LABEL_39;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v29,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v4,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_Transform__GetEnumerator__);
  v5 = -100.0;
  v32 = v29;
  v6 = 0;
  v7 = 0LL;
LABEL_6:
  v8 = (UnityEngine_Transform_o *)v7;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v32,
           (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext__);
    if ( !v9 )
      break;
    v7 = v32.fields.current;
    if ( !v32.fields.current )
      sub_B7769C(v9, v10);
    v33 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)v32.fields.current, 0LL);
    if ( v33.fields.z > v5 )
    {
      v35 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)v7, 0LL);
      v5 = v35.fields.z;
      v19 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v7, 0LL);
      v6 = TransformHelper__CalcPriority(v19, v20);
      goto LABEL_6;
    }
    v34 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)v7, 0LL);
    if ( v34.fields.z == v5 )
    {
      v11 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v7, 0LL);
      if ( !v11 )
        sub_B7769C(0LL, v12);
      v13 = System_String__Contains(v11, (System_String_o *)StringLiteral_82/*" "*/, 0LL);
      if ( v13 )
      {
        if ( !v8 )
          sub_B7769C(v13, v14);
        v15 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v8, 0LL);
        if ( !v15 )
          sub_B7769C(0LL, v16);
        if ( System_String__Contains(v15, (System_String_o *)StringLiteral_82/*" "*/, 0LL) )
        {
          v17 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v7, 0LL);
          if ( v6 > TransformHelper__CalcPriority(v17, v18) )
            v7 = (Il2CppObject *)v8;
        }
        goto LABEL_6;
      }
    }
  }
  v30[0] = 303;
  v31 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v32,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_Transform__Dispose__);
  v31 = 0;
  return v8;
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
  _BOOL4 v8; // w26
  __int64 v12; // x24
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_o *v21; // x0
  UnityEngine_Object_o *Component_WebViewObject; // x23
  bool v23; // w20
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v25; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_String_o *v27; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x24
  const MethodInfo *v29; // x5
  UnityEngine_Transform_array *IgnoreNodeList; // x26
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  unsigned __int64 v32; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v35; // x1
  __int64 v36; // x24
  __int64 v37; // x8
  unsigned __int64 v38; // x10
  int *v39; // x11
  __int64 v40; // x0
  __int64 v41; // x8
  unsigned __int64 v42; // x10
  int *v43; // x11
  __int64 v44; // x0
  __int64 v45; // x0
  __int64 v46; // x1
  UnityEngine_Component_o *v47; // x27
  __int64 v48; // x20
  UnityEngine_Object_o *gameObject; // x0
  __int64 v50; // x1
  __int64 InstanceID; // x0
  __int64 v52; // x1
  int v53; // w28
  UnityEngine_Component_o *v54; // x0
  UnityEngine_Object_o *v55; // x0
  __int64 v56; // x1
  System_String_o *name; // x0
  __int64 v58; // x1
  __int64 v59; // x1
  System_String_o *v60; // x0
  __int64 v61; // x1
  int32_t v62; // w20
  System_String_o *v63; // x0
  __int64 v64; // x1
  System_String_o *v65; // x0
  __int64 v66; // x1
  System_String_o *v67; // x28
  int32_t v68; // w2
  System_Char_array *v69; // x0
  System_String_array *v70; // x0
  __int64 v71; // x1
  System_String_array *v72; // x28
  __int64 v73; // x8
  unsigned __int64 v74; // x22
  System_String_o *v75; // x20
  __int64 v76; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v77; // x0
  __int64 v78; // x8
  unsigned __int64 v79; // x10
  int *v80; // x11
  __int64 v81; // x0
  const MethodInfo *v82; // x2
  System_Collections_Generic_List_Transform__o *v83; // x0
  UnityEngine_Object_o *v84; // x21
  _BOOL4 v85; // w0
  UnityEngine_Transform_o *v86; // x8
  __int64 v88; // x0
  __int64 v89; // x0
  __int64 v90; // x0
  UnityEngine_Transform_o *v91; // [xsp+8h] [xbp-88h]
  _BOOL4 v92; // [xsp+14h] [xbp-7Ch]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v93; // [xsp+18h] [xbp-78h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v95; // [xsp+28h] [xbp-68h]
  int32_t result; // [xsp+3Ch] [xbp-54h] BYREF

  v8 = includeInactive;
  if ( (byte_438D60F & 1) == 0 )
  {
    sub_B775C4(&char___TypeInfo);
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_BattleActorControl___);
    sub_B775C4(&Method_UnityEngine_Component_GetComponentsInChildren_Transform____69483952);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_Transform___);
    sub_B775C4(&Method_System_Func_Transform__bool___ctor__);
    sub_B775C4(&System_Func_Transform__bool__TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerable_Transform__TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_Transform__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Transform__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_Transform___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_Transform__get_Count__);
    sub_B775C4(&System_Collections_Generic_List_Transform__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_TransformHelper___c__DisplayClass5_0__executeGetNodeFromLvName_b__0__);
    sub_B775C4(&TransformHelper___c__DisplayClass5_0_TypeInfo);
    sub_B775C4(&StringLiteral_82/*" "*/);
    sub_B775C4(&StringLiteral_16460/*"_level"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438D60F = 1;
  }
  result = 0;
  v12 = sub_B77694(TransformHelper___c__DisplayClass5_0_TypeInfo);
  TransformHelper___c__DisplayClass5_0___ctor((TransformHelper___c__DisplayClass5_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_102;
  *(_QWORD *)(v12 + 16) = nodename;
  sub_B77560((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)nodename, v15, v16, v17, v18, v19, v20);
  v21 = *(System_String_o **)(v12 + 16);
  if ( !v21 )
    return self;
  v13 = System_String__Equals_44889276(v21, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( (v13 & 1) != 0 )
    return self;
  if ( !self )
    goto LABEL_102;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)self,
                                                      (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_BattleActorControl___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v13 = UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( level == -1 && (v13 & 1) != 0 )
  {
    if ( !Component_WebViewObject )
      goto LABEL_102;
    level = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)Component_WebViewObject, 0LL) + 1;
  }
  v23 = v8;
  v92 = v8;
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_((UnityEngine_Component_o *)self, v8, (const MethodInfo_1C6DADC *)Method_UnityEngine_Component_GetComponentsInChildren_Transform____69483952);
  v25 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_Transform__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v25,
    (Il2CppObject *)v12,
    Method_TransformHelper___c__DisplayClass5_0__executeGetNodeFromLvName_b__0__,
    (const MethodInfo_29E92C4 *)Method_System_Func_Transform__bool___ctor__);
  v26 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
          (System_Func_TSource__bool__o *)v25,
          (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_Transform___);
  v27 = *(System_String_o **)(v12 + 16);
  v28 = v26;
  IgnoreNodeList = TransformHelper__GetIgnoreNodeList(self, v27, v23, useNewRule, isIgnore, v29);
  v93 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v93,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_Transform___ctor__);
  v95 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v95,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_Transform___ctor__);
  if ( !v28 )
    goto LABEL_102;
  klass = v28->klass;
  if ( *(_WORD *)&v28->klass->_2.bitflags1 )
  {
    v32 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      ++v32;
      p_offset += 4;
      if ( v32 >= *(unsigned __int16 *)&v28->klass->_2.bitflags1 )
        goto LABEL_19;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_19:
    p_method = sub_B0F4C0(v28, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0LL);
  }
  v91 = self;
  v36 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v28,
          *(_QWORD *)(p_method + 8));
  if ( !v36 )
    sub_B7769C(0LL, v35);
  while ( 1 )
  {
LABEL_22:
    v37 = *(_QWORD *)v36;
    if ( *(_WORD *)(*(_QWORD *)v36 + 298LL) )
    {
      v38 = 0LL;
      v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v39 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v38;
        v39 += 4;
        if ( v38 >= *(unsigned __int16 *)(*(_QWORD *)v36 + 298LL) )
          goto LABEL_26;
      }
      v40 = v37 + 16LL * *v39 + 312;
    }
    else
    {
LABEL_26:
      v40 = sub_B0F4C0(v36, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v36, *(_QWORD *)(v40 + 8)) & 1) == 0 )
      break;
    v41 = *(_QWORD *)v36;
    if ( *(_WORD *)(*(_QWORD *)v36 + 298LL) )
    {
      v42 = 0LL;
      v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v43 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        ++v42;
        v43 += 4;
        if ( v42 >= *(unsigned __int16 *)(*(_QWORD *)v36 + 298LL) )
          goto LABEL_33;
      }
      v44 = v41 + 16LL * *v43 + 312;
    }
    else
    {
LABEL_33:
      v44 = sub_B0F4C0(v36, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0LL);
    }
    v45 = (*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v36, *(_QWORD *)(v44 + 8));
    v47 = (UnityEngine_Component_o *)v45;
    if ( IgnoreNodeList && (int)IgnoreNodeList->max_length >= 1 )
    {
      v48 = 0LL;
      while ( 1 )
      {
        if ( !v47 )
          sub_B7769C(v45, v46);
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v47, 0LL);
        if ( !gameObject )
          sub_B7769C(0LL, v50);
        InstanceID = UnityEngine_Object__GetInstanceID(gameObject, 0LL);
        if ( (unsigned int)v48 >= IgnoreNodeList->max_length )
        {
          v88 = sub_B776C8(InstanceID);
          sub_B77668(v88, 0LL);
        }
        v53 = InstanceID;
        v54 = (UnityEngine_Component_o *)IgnoreNodeList->m_Items[v48];
        if ( !v54 )
          sub_B7769C(0LL, v52);
        v55 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v54, 0LL);
        if ( !v55 )
          sub_B7769C(0LL, v56);
        v45 = UnityEngine_Object__GetInstanceID(v55, 0LL);
        if ( v53 == (_DWORD)v45 )
          break;
        if ( (int)++v48 >= (signed int)IgnoreNodeList->max_length )
          goto LABEL_47;
      }
    }
    else
    {
      if ( !v45 )
        sub_B7769C(0LL, v46);
LABEL_47:
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v47, 0LL);
      if ( !name )
        sub_B7769C(0LL, v58);
      if ( !System_String__Contains(name, (System_String_o *)StringLiteral_16460/*"_level"*/, 0LL) )
      {
        v77 = v95;
        if ( !v95 )
          sub_B7769C(0LL, v59);
        goto LABEL_66;
      }
      v60 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v47, 0LL);
      if ( !v60 )
        sub_B7769C(0LL, v61);
      v62 = System_String__IndexOf_44974284(v60, (System_String_o *)StringLiteral_16460/*"_level"*/, 0LL);
      v63 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v47, 0LL);
      if ( !v63 )
        sub_B7769C(0LL, v64);
      v65 = System_String__Substring(v63, v62 + 7, 0LL);
      v67 = v65;
      if ( !v65 )
        sub_B7769C(0LL, v66);
      if ( (System_String__IndexOf_44974284(v65, (System_String_o *)StringLiteral_82/*" "*/, 0LL) & 0x80000000) == 0 )
      {
        v68 = System_String__IndexOf_44974284(v67, (System_String_o *)StringLiteral_82/*" "*/, 0LL);
        v67 = System_String__Substring_44965672(v67, 0, v68, 0LL);
      }
      v69 = (System_Char_array *)sub_B775DC(char___TypeInfo, 1LL);
      if ( !v69 )
        sub_B7769C(0LL, 0LL);
      if ( !v69->max_length )
      {
        v90 = sub_B776C8(v69);
        sub_B77668(v90, 0LL);
      }
      v69->m_Items[2] = 95;
      if ( !v67 )
        sub_B7769C(v69, v69);
      v70 = System_String__Split(v67, v69, 0LL);
      v72 = v70;
      if ( !v70 )
        sub_B7769C(0LL, v71);
      v73 = *(_QWORD *)&v70->max_length;
      if ( (int)v73 >= 1 )
      {
        v74 = 0LL;
        while ( 1 )
        {
          if ( v74 >= (unsigned int)v73 )
          {
            v89 = sub_B776C8(v70);
            sub_B77668(v89, 0LL);
          }
          v75 = v72->m_Items[v74];
          result = 99;
          v70 = (System_String_array *)System_Int32__TryParse(v75, &result, 0LL);
          if ( ((unsigned __int8)v70 & 1) != 0 )
          {
            v70 = (System_String_array *)System_Int32__Parse(v75, 0LL);
            if ( (_DWORD)v70 == level )
              break;
          }
          LODWORD(v73) = v72->max_length;
          if ( (__int64)++v74 >= (int)v73 )
            goto LABEL_22;
        }
        v77 = v93;
        if ( !v93 )
          sub_B7769C(0LL, v76);
LABEL_66:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v77,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v47,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_Transform__Add__);
      }
    }
  }
  v78 = *(_QWORD *)v36;
  if ( *(_WORD *)(*(_QWORD *)v36 + 298LL) )
  {
    v79 = 0LL;
    v80 = (int *)(*(_QWORD *)(v78 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v80 - 1) != System_IDisposable_TypeInfo )
    {
      ++v79;
      v80 += 4;
      if ( v79 >= *(unsigned __int16 *)(*(_QWORD *)v36 + 298LL) )
        goto LABEL_73;
    }
    v81 = v78 + 16LL * *v80 + 312;
  }
  else
  {
LABEL_73:
    v81 = sub_B0F4C0(v36, System_IDisposable_TypeInfo, 0LL);
  }
  v13 = (*(__int64 (__fastcall **)(__int64, _QWORD))v81)(v36, *(_QWORD *)(v81 + 8));
  if ( !v93 )
LABEL_102:
    sub_B7769C(v13, v14);
  if ( v93->fields._size >= 1 )
    v83 = (System_Collections_Generic_List_Transform__o *)v93;
  else
    v83 = (System_Collections_Generic_List_Transform__o *)v95;
  v84 = (UnityEngine_Object_o *)TransformHelper__SelectNodeWithRule(v83, useNewRule, v82);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v85 = UnityEngine_Object__op_Equality(v84, 0LL, 0LL);
  v86 = v91;
  if ( !v85 || !v92 )
    return (UnityEngine_Transform_o *)v84;
  return v86;
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

  if ( (byte_438D60E & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438D60E = 1;
  }
  NodeFromLvName = TransformHelper__executeGetNodeFromLvName(self, nodename, level, 0, useNewRule, 1, v5);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v17; // x20
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x19
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x19
  __int64 v26; // x8
  unsigned __int64 v27; // x10
  int *v28; // x11
  __int64 v29; // x0
  __int64 v30; // x8
  unsigned __int64 v31; // x10
  int *v32; // x11
  __int64 v33; // x0
  UnityEngine_Transform_o *v34; // x20
  __int64 v35; // x8
  unsigned __int64 v36; // x10
  int *v37; // x11
  __int64 v38; // x0

  if ( (byte_438D611 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponentsInChildren_Transform____69483952);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_Transform___);
    sub_B775C4(&Method_System_Func_Transform__bool___ctor__);
    sub_B775C4(&System_Func_Transform__bool__TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerable_Transform__TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_Transform__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_TransformHelper___c__DisplayClass7_0__getNodeFromName_b__0__);
    sub_B775C4(&TransformHelper___c__DisplayClass7_0_TypeInfo);
    byte_438D611 = 1;
  }
  v7 = sub_B77694(TransformHelper___c__DisplayClass7_0_TypeInfo);
  TransformHelper___c__DisplayClass7_0___ctor((TransformHelper___c__DisplayClass7_0_o *)v7, 0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = nodename,
        sub_B77560(
          (BattleServantConfConponent_o *)(v7 + 16),
          (System_Int32_array **)nodename,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15),
        !self)
    || (ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_((UnityEngine_Component_o *)self, includeInactive, (const MethodInfo_1C6DADC *)Method_UnityEngine_Component_GetComponentsInChildren_Transform____69483952),
        v17 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_Transform__bool__TypeInfo),
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v17,
          (Il2CppObject *)v7,
          Method_TransformHelper___c__DisplayClass7_0__getNodeFromName_b__0__,
          (const MethodInfo_29E92C4 *)Method_System_Func_Transform__bool___ctor__),
        (v8 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
                (System_Func_TSource__bool__o *)v17,
                (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_Transform___)) == 0LL) )
  {
    sub_B7769C(v8, v9);
  }
  klass = v8->klass;
  v19 = v8;
  if ( *(_WORD *)&v8->klass->_2.bitflags1 )
  {
    v20 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      ++v20;
      p_offset += 4;
      if ( v20 >= *(unsigned __int16 *)&v8->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_B0F4C0(v8, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0LL);
  }
  v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v19,
          *(_QWORD *)(p_method + 8));
  v25 = v23;
  if ( !v23 )
    sub_B7769C(0LL, v24);
  v26 = *(_QWORD *)v23;
  if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
  {
    v27 = 0LL;
    v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
    while ( *((System_Collections_IEnumerator_c **)v28 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      ++v27;
      v28 += 4;
      if ( v27 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
        goto LABEL_17;
    }
    v29 = v26 + 16LL * *v28 + 312;
  }
  else
  {
LABEL_17:
    v29 = sub_B0F4C0(v23, System_Collections_IEnumerator_TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v25, *(_QWORD *)(v29 + 8)) & 1) != 0 )
  {
    v30 = *(_QWORD *)v25;
    if ( *(_WORD *)(*(_QWORD *)v25 + 298LL) )
    {
      v31 = 0LL;
      v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v32 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        ++v31;
        v32 += 4;
        if ( v31 >= *(unsigned __int16 *)(*(_QWORD *)v25 + 298LL) )
          goto LABEL_24;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_24:
      v33 = sub_B0F4C0(v25, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0LL);
    }
    v34 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v25, *(_QWORD *)(v33 + 8));
  }
  else
  {
    v34 = 0LL;
  }
  if ( v25 )
  {
    v35 = *(_QWORD *)v25;
    if ( *(_WORD *)(*(_QWORD *)v25 + 298LL) )
    {
      v36 = 0LL;
      v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
      {
        ++v36;
        v37 += 4;
        if ( v36 >= *(unsigned __int16 *)(*(_QWORD *)v25 + 298LL) )
          goto LABEL_33;
      }
      v38 = v35 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_33:
      v38 = sub_B0F4C0(v25, System_IDisposable_TypeInfo, 0LL);
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
    sub_B7769C(this, p);
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
    sub_B7769C(this, p);
  }
  return System_String__Equals_44889276((System_String_o *)this, v3->fields.nodename, 0LL);
}