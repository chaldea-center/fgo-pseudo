int32_t __fastcall TransformHelper__CalcPriority(System_String_o *objName, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *v5; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4189974 & 1) == 0 )
  {
    sub_B2C35C(&System_Text_RegularExpressions_Regex_TypeInfo, method);
    sub_B2C35C(&StringLiteral_15771/*"[^0-9]"*/, v3);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_4189974 = 1;
  }
  result = 0;
  if ( (BYTE3(System_Text_RegularExpressions_Regex_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
  }
  v5 = System_Text_RegularExpressions_Regex__Replace(
         objName,
         (System_String_o *)StringLiteral_15771/*"[^0-9]"*/,
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
  __int64 v8; // x3
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v14; // x3
  System_Collections_IEnumerator_c *v15; // x8
  unsigned __int64 v16; // x10
  System_Collections_IEnumerator_c **v17; // x11
  __int64 v18; // x0
  UnityEngine_Transform_o *v19; // x0
  const MethodInfo *v20; // x2
  __int64 v21; // x9
  __int64 v22; // x0
  __int64 v23; // x3
  __int64 v24; // x8
  __int64 v25; // x20
  unsigned __int64 v26; // x10
  int *v27; // x11
  __int64 v28; // x0

  v4 = (UnityEngine_Component_o *)self;
  if ( (byte_418996C & 1) == 0 )
  {
    sub_B2C35C(&System_IDisposable_TypeInfo, *(_QWORD *)&layer);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v5);
    self = (UnityEngine_Transform_o *)sub_B2C35C(&UnityEngine_Transform_TypeInfo, v6);
    byte_418996C = 1;
  }
  if ( !v4 || (self = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v4, 0LL)) == 0LL )
LABEL_33:
    sub_B2C434(self, *(_QWORD *)&layer);
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)self, layer, 0LL);
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)v4, 0LL);
  if ( !Enumerator )
    sub_B2C434(0LL, v7);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v11;
        p_offset += 4;
        if ( v11 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v8);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      v17 = (System_Collections_IEnumerator_c **)&v15->_1.interfaceOffsets->offset;
      while ( *(v17 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v16;
        v17 += 2;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v18 = (__int64)&v15->vtable[*(_DWORD *)v17 + 1].method;
    }
    else
    {
LABEL_17:
      v18 = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v14);
    }
    v19 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v18)(
                                       Enumerator,
                                       *(_QWORD *)(v18 + 8));
    if ( v19 )
    {
      v21 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v21
        || (UnityEngine_Transform_c *)v19->klass->_2.typeHierarchy[v21 - 1] != UnityEngine_Transform_TypeInfo )
      {
        self = (UnityEngine_Transform_o *)sub_B2C728(v19);
        goto LABEL_33;
      }
    }
    TransformHelper__ChangeChildsLayer(v19, layer, v20);
  }
  v22 = sub_B2C41C(Enumerator, System_IDisposable_TypeInfo);
  if ( v22 )
  {
    v24 = *(_QWORD *)v22;
    v25 = v22;
    if ( *(_WORD *)(*(_QWORD *)v22 + 298LL) )
    {
      v26 = 0LL;
      v27 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
      {
        ++v26;
        v27 += 4;
        if ( v26 >= *(unsigned __int16 *)(*(_QWORD *)v22 + 298LL) )
          goto LABEL_28;
      }
      v28 = v24 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_28:
      v28 = sub_AC5258(v22, System_IDisposable_TypeInfo, 0LL, v23);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v28)(v25, *(_QWORD *)(v28 + 8));
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
  __int64 v7; // x3
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v13; // x3
  System_Collections_IEnumerator_c *v14; // x8
  unsigned __int64 v15; // x10
  System_Collections_IEnumerator_c **v16; // x11
  __int64 v17; // x0
  UnityEngine_Component_o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x9
  UnityEngine_Object_o *gameObject; // x20
  __int64 v22; // x0
  __int64 v23; // x3
  __int64 v24; // x8
  __int64 v25; // x19
  unsigned __int64 v26; // x10
  int *v27; // x11
  __int64 v28; // x0

  v2 = (UnityEngine_Component_o *)self;
  if ( (byte_418996D & 1) == 0 )
  {
    sub_B2C35C(&System_IDisposable_TypeInfo, method);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    self = (UnityEngine_Transform_o *)sub_B2C35C(&UnityEngine_Transform_TypeInfo, v5);
    byte_418996D = 1;
  }
  if ( !v2 || (self = UnityEngine_Component__get_transform(v2, 0LL)) == 0LL )
    sub_B2C434(self, method);
  Enumerator = UnityEngine_Transform__GetEnumerator(self, 0LL);
  if ( !Enumerator )
    sub_B2C434(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v10 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v10;
        p_offset += 4;
        if ( v10 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v7);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      v16 = (System_Collections_IEnumerator_c **)&v14->_1.interfaceOffsets->offset;
      while ( *(v16 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v15;
        v16 += 2;
        if ( v15 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v17 = (__int64)&v14->vtable[*(_DWORD *)v16 + 1].method;
    }
    else
    {
LABEL_17:
      v17 = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v13);
    }
    v18 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v17)(
                                       Enumerator,
                                       *(_QWORD *)(v17 + 8));
    if ( !v18 )
      goto LABEL_36;
    v20 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v18->klass->_2.bitflags2 + 1) < (unsigned int)v20
      || (UnityEngine_Transform_c *)v18->klass->_2.typeHierarchy[v20 - 1] != UnityEngine_Transform_TypeInfo )
    {
      v18 = (UnityEngine_Component_o *)sub_B2C728(v18);
LABEL_36:
      sub_B2C434(v18, v19);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v18, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
  }
  v22 = sub_B2C41C(Enumerator, System_IDisposable_TypeInfo);
  if ( v22 )
  {
    v24 = *(_QWORD *)v22;
    v25 = v22;
    if ( *(_WORD *)(*(_QWORD *)v22 + 298LL) )
    {
      v26 = 0LL;
      v27 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
      {
        ++v26;
        v27 += 4;
        if ( v26 >= *(unsigned __int16 *)(*(_QWORD *)v22 + 298LL) )
          goto LABEL_31;
      }
      v28 = v24 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_31:
      v28 = sub_AC5258(v22, System_IDisposable_TypeInfo, 0LL, v23);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v28)(v25, *(_QWORD *)(v28 + 8));
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

  if ( (byte_418996F & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, nodename);
    byte_418996F = 1;
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  WarBoardControlPlayTalkUiComponent_array *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x21
  __int64 v18; // x8
  unsigned __int64 v19; // x26
  WarBoardControlPlayTalkUiComponent_o **m_Items; // x27
  bool v21; // w23
  bool v22; // w24
  UnityEngine_Object_o *v23; // x25
  UnityEngine_Object_o *Component_WebViewObject; // x25
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v26; // x6
  UnityEngine_Object_o *NodeFromLvName; // x25
  __int64 v29; // x0

  v9 = (UnityEngine_Component_o *)parentTransform;
  if ( (byte_4189972 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_BattleActorControl___, nodename);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentsInChildren_Transform____67395008, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Transform__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Transform__ToArray__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Transform___ctor__, v13);
    sub_B2C35C(&System_Collections_Generic_List_Transform__TypeInfo, v14);
    parentTransform = (UnityEngine_Transform_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v15);
    byte_4189972 = 1;
  }
  if ( !isIgnore )
    return 0LL;
  if ( !v9 )
    goto LABEL_31;
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                              v9,
                                                              1,
                                                              (const MethodInfo_172DFBC *)Method_UnityEngine_Component_GetComponentsInChildren_Transform____67395008);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_Transform___ctor__);
  if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
    goto LABEL_31;
  v18 = *(_QWORD *)&ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length;
  if ( (int)v18 >= 1 )
  {
    v19 = 0LL;
    m_Items = ComponentsInChildren_WarBoardControlPlayTalkUiComponent->m_Items;
    v21 = includeInactive;
    v22 = useNewRule;
    do
    {
      if ( v19 >= (unsigned int)v18 )
      {
LABEL_30:
        v29 = sub_B2C460(parentTransform);
        sub_B2C400(v29, 0LL);
      }
      v23 = (UnityEngine_Object_o *)m_Items[v19];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      parentTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v9, v23, 0LL);
      if ( ((unsigned __int8)parentTransform & 1) == 0 )
      {
        if ( v19 >= ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length )
          goto LABEL_30;
        parentTransform = (UnityEngine_Transform_o *)m_Items[v19];
        if ( !parentTransform )
          goto LABEL_31;
        Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            (UnityEngine_Component_o *)parentTransform,
                                                            (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_BattleActorControl___);
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
                                                     v21,
                                                     v22,
                                                     0,
                                                     v26);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          parentTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(NodeFromLvName, 0LL, 0LL);
          if ( ((unsigned __int8)parentTransform & 1) == 0 )
          {
            if ( !v17 )
              goto LABEL_31;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v17,
              (EventMissionProgressRequest_Argument_ProgressData_o *)NodeFromLvName,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_Transform__Add__);
          }
        }
      }
      LODWORD(v18) = ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length;
    }
    while ( (__int64)++v19 < (int)v18 );
  }
  if ( !v17 )
LABEL_31:
    sub_B2C434(parentTransform, nodename);
  return (UnityEngine_Transform_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v17,
                                          (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_Transform__ToArray__);
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

  if ( (byte_418996E & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, parent);
    byte_418996E = 1;
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
    sub_B2C434(gameObject, v6);
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
  float v9; // s8
  int32_t v10; // w22
  Il2CppObject *v11; // x21
  UnityEngine_Transform_o *v12; // x19
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
  System_String_o *v23; // x0
  const MethodInfo *v24; // x1
  float z; // s8
  Il2CppObject *current; // x20
  System_String_o *name; // x0
  __int64 v28; // x1
  _BOOL8 v29; // x0
  __int64 v30; // x1
  int v31; // w20
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+8h] [xbp-88h] BYREF
  int v34[2]; // [xsp+20h] [xbp-70h]
  int v35; // [xsp+28h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+30h] [xbp-60h] BYREF
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  v4 = tNode;
  if ( (byte_4189975 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Transform__Dispose__, useNewRule);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Transform__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Transform__GetEnumerator__, v7);
    tNode = (System_Collections_Generic_List_Transform__o *)sub_B2C35C(&StringLiteral_80/*" "*/, v8);
    byte_4189975 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v35 = 0;
  if ( !useNewRule )
  {
    z = -100.0;
    v12 = 0LL;
    if ( v4 )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v33,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v4,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_Transform__GetEnumerator__);
      v36 = v33;
      while ( 1 )
      {
        v29 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v36,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext__);
        if ( !v29 )
          break;
        current = v36.fields.current;
        if ( !v36.fields.current )
          sub_B2C434(v29, v30);
        lossyScale = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)v36.fields.current, 0LL);
        if ( lossyScale.fields.z > z )
        {
          v42 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)current, 0LL);
          z = v42.fields.z;
          v12 = (UnityEngine_Transform_o *)current;
        }
        else
        {
          v41 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)current, 0LL);
          if ( v41.fields.z == z )
          {
            name = UnityEngine_Object__get_name((UnityEngine_Object_o *)current, 0LL);
            if ( !name )
              sub_B2C434(0LL, v28);
            if ( !System_String__Contains(name, (System_String_o *)StringLiteral_80/*" "*/, 0LL) )
              v12 = (UnityEngine_Transform_o *)current;
          }
        }
      }
      v34[0] = 303;
      v31 = ++v35;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v36,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_Transform__Dispose__);
      if ( v31 && v34[v31 - 1] == 303 )
        v35 = v31 - 1;
      return v12;
    }
LABEL_39:
    sub_B2C434(tNode, useNewRule);
  }
  if ( !v4 )
    goto LABEL_39;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v33,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v4,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_Transform__GetEnumerator__);
  v9 = -100.0;
  v36 = v33;
  v10 = 0;
  v11 = 0LL;
LABEL_6:
  v12 = (UnityEngine_Transform_o *)v11;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v36,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext__);
    if ( !v13 )
      break;
    v11 = v36.fields.current;
    if ( !v36.fields.current )
      sub_B2C434(v13, v14);
    v37 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)v36.fields.current, 0LL);
    if ( v37.fields.z > v9 )
    {
      v39 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)v11, 0LL);
      v9 = v39.fields.z;
      v23 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v11, 0LL);
      v10 = TransformHelper__CalcPriority(v23, v24);
      goto LABEL_6;
    }
    v38 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)v11, 0LL);
    if ( v38.fields.z == v9 )
    {
      v15 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v11, 0LL);
      if ( !v15 )
        sub_B2C434(0LL, v16);
      v17 = System_String__Contains(v15, (System_String_o *)StringLiteral_80/*" "*/, 0LL);
      if ( v17 )
      {
        if ( !v12 )
          sub_B2C434(v17, v18);
        v19 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v12, 0LL);
        if ( !v19 )
          sub_B2C434(0LL, v20);
        if ( System_String__Contains(v19, (System_String_o *)StringLiteral_80/*" "*/, 0LL) )
        {
          v21 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v11, 0LL);
          if ( v10 > TransformHelper__CalcPriority(v21, v22) )
            v11 = (Il2CppObject *)v12;
        }
        goto LABEL_6;
      }
    }
  }
  v34[0] = 303;
  v35 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v36,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_Transform__Dispose__);
  v35 = 0;
  return v12;
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
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x24
  __int64 v32; // x0
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_o *v40; // x0
  UnityEngine_Object_o *Component_WebViewObject; // x23
  bool v42; // w20
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v44; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  System_String_o *v46; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x24
  const MethodInfo *v48; // x5
  UnityEngine_Transform_array *IgnoreNodeList; // x26
  __int64 v50; // x3
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  unsigned __int64 v52; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v55; // x1
  __int64 v56; // x3
  __int64 v57; // x24
  __int64 v58; // x8
  unsigned __int64 v59; // x10
  int *v60; // x11
  __int64 v61; // x0
  __int64 v62; // x3
  __int64 v63; // x8
  unsigned __int64 v64; // x10
  int *v65; // x11
  __int64 v66; // x0
  __int64 v67; // x0
  __int64 v68; // x1
  UnityEngine_Component_o *v69; // x27
  __int64 v70; // x20
  UnityEngine_Object_o *gameObject; // x0
  __int64 v72; // x1
  __int64 InstanceID; // x0
  __int64 v74; // x1
  int v75; // w28
  UnityEngine_Component_o *v76; // x0
  UnityEngine_Object_o *v77; // x0
  __int64 v78; // x1
  System_String_o *name; // x0
  __int64 v80; // x1
  __int64 v81; // x1
  System_String_o *v82; // x0
  __int64 v83; // x1
  int32_t v84; // w20
  System_String_o *v85; // x0
  __int64 v86; // x1
  System_String_o *v87; // x0
  __int64 v88; // x1
  System_String_o *v89; // x28
  int32_t v90; // w2
  System_Char_array *v91; // x0
  System_String_array *v92; // x0
  __int64 v93; // x1
  System_String_array *v94; // x28
  __int64 v95; // x8
  unsigned __int64 v96; // x22
  System_String_o *v97; // x20
  __int64 v98; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v99; // x0
  __int64 v100; // x8
  unsigned __int64 v101; // x10
  int *v102; // x11
  __int64 v103; // x0
  const MethodInfo *v104; // x2
  System_Collections_Generic_List_Transform__o *v105; // x0
  UnityEngine_Object_o *v106; // x21
  _BOOL4 v107; // w0
  UnityEngine_Transform_o *v108; // x8
  __int64 v110; // x0
  __int64 v111; // x0
  __int64 v112; // x0
  UnityEngine_Transform_o *v113; // [xsp+8h] [xbp-88h]
  _BOOL4 v114; // [xsp+14h] [xbp-7Ch]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v115; // [xsp+18h] [xbp-78h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v117; // [xsp+28h] [xbp-68h]
  int32_t result; // [xsp+3Ch] [xbp-54h] BYREF

  v8 = includeInactive;
  if ( (byte_4189971 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, nodename);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_BattleActorControl___, v12);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentsInChildren_Transform____67395008, v13);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_Transform___, v14);
    sub_B2C35C(&Method_System_Func_Transform__bool___ctor__, v15);
    sub_B2C35C(&System_Func_Transform__bool__TypeInfo, v16);
    sub_B2C35C(&System_IDisposable_TypeInfo, v17);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_Transform__TypeInfo, v18);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_Transform__TypeInfo, v19);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_Transform__Add__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_Transform___ctor__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_Transform__get_Count__, v23);
    sub_B2C35C(&System_Collections_Generic_List_Transform__TypeInfo, v24);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v25);
    sub_B2C35C(&Method_TransformHelper___c__DisplayClass5_0__executeGetNodeFromLvName_b__0__, v26);
    sub_B2C35C(&TransformHelper___c__DisplayClass5_0_TypeInfo, v27);
    sub_B2C35C(&StringLiteral_80/*" "*/, v28);
    sub_B2C35C(&StringLiteral_16153/*"_level"*/, v29);
    sub_B2C35C(&StringLiteral_1/*""*/, v30);
    byte_4189971 = 1;
  }
  result = 0;
  v31 = sub_B2C42C(TransformHelper___c__DisplayClass5_0_TypeInfo);
  TransformHelper___c__DisplayClass5_0___ctor((TransformHelper___c__DisplayClass5_0_o *)v31, 0LL);
  if ( !v31 )
    goto LABEL_102;
  *(_QWORD *)(v31 + 16) = nodename;
  sub_B2C2F8((BattleServantConfConponent_o *)(v31 + 16), (System_Int32_array **)nodename, v34, v35, v36, v37, v38, v39);
  v40 = *(System_String_o **)(v31 + 16);
  if ( !v40 )
    return self;
  v32 = System_String__Equals_44292872(v40, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( (v32 & 1) != 0 )
    return self;
  if ( !self )
    goto LABEL_102;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)self,
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_BattleActorControl___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v32 = UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( level == -1 && (v32 & 1) != 0 )
  {
    if ( !Component_WebViewObject )
      goto LABEL_102;
    level = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)Component_WebViewObject, 0LL) + 1;
  }
  v42 = v8;
  v114 = v8;
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_((UnityEngine_Component_o *)self, v8, (const MethodInfo_172DFBC *)Method_UnityEngine_Component_GetComponentsInChildren_Transform____67395008);
  v44 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_Transform__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v44,
    (Il2CppObject *)v31,
    Method_TransformHelper___c__DisplayClass5_0__executeGetNodeFromLvName_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_Transform__bool___ctor__);
  v45 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
          (System_Func_TSource__bool__o *)v44,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_Transform___);
  v46 = *(System_String_o **)(v31 + 16);
  v47 = v45;
  IgnoreNodeList = TransformHelper__GetIgnoreNodeList(self, v46, v42, useNewRule, isIgnore, v48);
  v115 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v115,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_Transform___ctor__);
  v117 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v117,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_Transform___ctor__);
  if ( !v47 )
    goto LABEL_102;
  klass = v47->klass;
  if ( *(_WORD *)&v47->klass->_2.bitflags1 )
  {
    v52 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      ++v52;
      p_offset += 4;
      if ( v52 >= *(unsigned __int16 *)&v47->klass->_2.bitflags1 )
        goto LABEL_19;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_19:
    p_method = sub_AC5258(v47, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0LL, v50);
  }
  v113 = self;
  v57 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v47,
          *(_QWORD *)(p_method + 8));
  if ( !v57 )
    sub_B2C434(0LL, v55);
  while ( 1 )
  {
LABEL_22:
    v58 = *(_QWORD *)v57;
    if ( *(_WORD *)(*(_QWORD *)v57 + 298LL) )
    {
      v59 = 0LL;
      v60 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v60 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v59;
        v60 += 4;
        if ( v59 >= *(unsigned __int16 *)(*(_QWORD *)v57 + 298LL) )
          goto LABEL_26;
      }
      v61 = v58 + 16LL * *v60 + 312;
    }
    else
    {
LABEL_26:
      v61 = sub_AC5258(v57, System_Collections_IEnumerator_TypeInfo, 0LL, v56);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v61)(v57, *(_QWORD *)(v61 + 8)) & 1) == 0 )
      break;
    v63 = *(_QWORD *)v57;
    if ( *(_WORD *)(*(_QWORD *)v57 + 298LL) )
    {
      v64 = 0LL;
      v65 = (int *)(*(_QWORD *)(v63 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v65 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        ++v64;
        v65 += 4;
        if ( v64 >= *(unsigned __int16 *)(*(_QWORD *)v57 + 298LL) )
          goto LABEL_33;
      }
      v66 = v63 + 16LL * *v65 + 312;
    }
    else
    {
LABEL_33:
      v66 = sub_AC5258(v57, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0LL, v62);
    }
    v67 = (*(__int64 (__fastcall **)(__int64, _QWORD))v66)(v57, *(_QWORD *)(v66 + 8));
    v69 = (UnityEngine_Component_o *)v67;
    if ( IgnoreNodeList && (int)IgnoreNodeList->max_length >= 1 )
    {
      v70 = 0LL;
      while ( 1 )
      {
        if ( !v69 )
          sub_B2C434(v67, v68);
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v69, 0LL);
        if ( !gameObject )
          sub_B2C434(0LL, v72);
        InstanceID = UnityEngine_Object__GetInstanceID(gameObject, 0LL);
        if ( (unsigned int)v70 >= IgnoreNodeList->max_length )
        {
          v110 = sub_B2C460(InstanceID);
          sub_B2C400(v110, 0LL);
        }
        v75 = InstanceID;
        v76 = (UnityEngine_Component_o *)IgnoreNodeList->m_Items[v70];
        if ( !v76 )
          sub_B2C434(0LL, v74);
        v77 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v76, 0LL);
        if ( !v77 )
          sub_B2C434(0LL, v78);
        v67 = UnityEngine_Object__GetInstanceID(v77, 0LL);
        if ( v75 == (_DWORD)v67 )
          break;
        if ( (int)++v70 >= (signed int)IgnoreNodeList->max_length )
          goto LABEL_47;
      }
    }
    else
    {
      if ( !v67 )
        sub_B2C434(0LL, v68);
LABEL_47:
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v69, 0LL);
      if ( !name )
        sub_B2C434(0LL, v80);
      if ( !System_String__Contains(name, (System_String_o *)StringLiteral_16153/*"_level"*/, 0LL) )
      {
        v99 = v117;
        if ( !v117 )
          sub_B2C434(0LL, v81);
        goto LABEL_66;
      }
      v82 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v69, 0LL);
      if ( !v82 )
        sub_B2C434(0LL, v83);
      v84 = System_String__IndexOf_44377880(v82, (System_String_o *)StringLiteral_16153/*"_level"*/, 0LL);
      v85 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v69, 0LL);
      if ( !v85 )
        sub_B2C434(0LL, v86);
      v87 = System_String__Substring(v85, v84 + 7, 0LL);
      v89 = v87;
      if ( !v87 )
        sub_B2C434(0LL, v88);
      if ( (System_String__IndexOf_44377880(v87, (System_String_o *)StringLiteral_80/*" "*/, 0LL) & 0x80000000) == 0 )
      {
        v90 = System_String__IndexOf_44377880(v89, (System_String_o *)StringLiteral_80/*" "*/, 0LL);
        v89 = System_String__Substring_44369268(v89, 0, v90, 0LL);
      }
      v91 = (System_Char_array *)sub_B2C374(char___TypeInfo, 1LL);
      if ( !v91 )
        sub_B2C434(0LL, 0LL);
      if ( !v91->max_length )
      {
        v112 = sub_B2C460(v91);
        sub_B2C400(v112, 0LL);
      }
      v91->m_Items[2] = 95;
      if ( !v89 )
        sub_B2C434(v91, v91);
      v92 = System_String__Split(v89, v91, 0LL);
      v94 = v92;
      if ( !v92 )
        sub_B2C434(0LL, v93);
      v95 = *(_QWORD *)&v92->max_length;
      if ( (int)v95 >= 1 )
      {
        v96 = 0LL;
        while ( 1 )
        {
          if ( v96 >= (unsigned int)v95 )
          {
            v111 = sub_B2C460(v92);
            sub_B2C400(v111, 0LL);
          }
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
            goto LABEL_22;
        }
        v99 = v115;
        if ( !v115 )
          sub_B2C434(0LL, v98);
LABEL_66:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v99,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v69,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_Transform__Add__);
      }
    }
  }
  v100 = *(_QWORD *)v57;
  if ( *(_WORD *)(*(_QWORD *)v57 + 298LL) )
  {
    v101 = 0LL;
    v102 = (int *)(*(_QWORD *)(v100 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v102 - 1) != System_IDisposable_TypeInfo )
    {
      ++v101;
      v102 += 4;
      if ( v101 >= *(unsigned __int16 *)(*(_QWORD *)v57 + 298LL) )
        goto LABEL_73;
    }
    v103 = v100 + 16LL * *v102 + 312;
  }
  else
  {
LABEL_73:
    v103 = sub_AC5258(v57, System_IDisposable_TypeInfo, 0LL, v62);
  }
  v32 = (*(__int64 (__fastcall **)(__int64, _QWORD))v103)(v57, *(_QWORD *)(v103 + 8));
  if ( !v115 )
LABEL_102:
    sub_B2C434(v32, v33);
  if ( v115->fields._size >= 1 )
    v105 = (System_Collections_Generic_List_Transform__o *)v115;
  else
    v105 = (System_Collections_Generic_List_Transform__o *)v117;
  v106 = (UnityEngine_Object_o *)TransformHelper__SelectNodeWithRule(v105, useNewRule, v104);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v107 = UnityEngine_Object__op_Equality(v106, 0LL, 0LL);
  v108 = v113;
  if ( !v107 || !v114 )
    return (UnityEngine_Transform_o *)v106;
  return v108;
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

  if ( (byte_4189970 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, nodename);
    byte_4189970 = 1;
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v26; // x20
  __int64 v27; // x3
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x19
  unsigned __int64 v30; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x3
  __int64 v36; // x19
  __int64 v37; // x8
  unsigned __int64 v38; // x10
  int *v39; // x11
  __int64 v40; // x0
  __int64 v41; // x3
  __int64 v42; // x8
  unsigned __int64 v43; // x10
  int *v44; // x11
  __int64 v45; // x0
  UnityEngine_Transform_o *v46; // x20
  __int64 v47; // x8
  unsigned __int64 v48; // x10
  int *v49; // x11
  __int64 v50; // x0

  if ( (byte_4189973 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentsInChildren_Transform____67395008, nodename);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_Transform___, v7);
    sub_B2C35C(&Method_System_Func_Transform__bool___ctor__, v8);
    sub_B2C35C(&System_Func_Transform__bool__TypeInfo, v9);
    sub_B2C35C(&System_IDisposable_TypeInfo, v10);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_Transform__TypeInfo, v11);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_Transform__TypeInfo, v12);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_B2C35C(&Method_TransformHelper___c__DisplayClass7_0__getNodeFromName_b__0__, v14);
    sub_B2C35C(&TransformHelper___c__DisplayClass7_0_TypeInfo, v15);
    byte_4189973 = 1;
  }
  v16 = sub_B2C42C(TransformHelper___c__DisplayClass7_0_TypeInfo);
  TransformHelper___c__DisplayClass7_0___ctor((TransformHelper___c__DisplayClass7_0_o *)v16, 0LL);
  if ( !v16
    || (*(_QWORD *)(v16 + 16) = nodename,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v16 + 16),
          (System_Int32_array **)nodename,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24),
        !self)
    || (ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_((UnityEngine_Component_o *)self, includeInactive, (const MethodInfo_172DFBC *)Method_UnityEngine_Component_GetComponentsInChildren_Transform____67395008),
        v26 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_Transform__bool__TypeInfo),
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v26,
          (Il2CppObject *)v16,
          Method_TransformHelper___c__DisplayClass7_0__getNodeFromName_b__0__,
          (const MethodInfo_2711C04 *)Method_System_Func_Transform__bool___ctor__),
        (v17 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                 ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
                 (System_Func_TSource__bool__o *)v26,
                 (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_Transform___)) == 0LL) )
  {
    sub_B2C434(v17, v18);
  }
  klass = v17->klass;
  v29 = v17;
  if ( *(_WORD *)&v17->klass->_2.bitflags1 )
  {
    v30 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      ++v30;
      p_offset += 4;
      if ( v30 >= *(unsigned __int16 *)&v17->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_AC5258(v17, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0LL, v27);
  }
  v33 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v29,
          *(_QWORD *)(p_method + 8));
  v36 = v33;
  if ( !v33 )
    sub_B2C434(0LL, v34);
  v37 = *(_QWORD *)v33;
  if ( *(_WORD *)(*(_QWORD *)v33 + 298LL) )
  {
    v38 = 0LL;
    v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
    while ( *((System_Collections_IEnumerator_c **)v39 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      ++v38;
      v39 += 4;
      if ( v38 >= *(unsigned __int16 *)(*(_QWORD *)v33 + 298LL) )
        goto LABEL_17;
    }
    v40 = v37 + 16LL * *v39 + 312;
  }
  else
  {
LABEL_17:
    v40 = sub_AC5258(v33, System_Collections_IEnumerator_TypeInfo, 0LL, v35);
  }
  if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v36, *(_QWORD *)(v40 + 8)) & 1) != 0 )
  {
    v42 = *(_QWORD *)v36;
    if ( *(_WORD *)(*(_QWORD *)v36 + 298LL) )
    {
      v43 = 0LL;
      v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v44 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        ++v43;
        v44 += 4;
        if ( v43 >= *(unsigned __int16 *)(*(_QWORD *)v36 + 298LL) )
          goto LABEL_24;
      }
      v45 = v42 + 16LL * *v44 + 312;
    }
    else
    {
LABEL_24:
      v45 = sub_AC5258(v36, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0LL, v41);
    }
    v46 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v45)(v36, *(_QWORD *)(v45 + 8));
  }
  else
  {
    v46 = 0LL;
  }
  if ( v36 )
  {
    v47 = *(_QWORD *)v36;
    if ( *(_WORD *)(*(_QWORD *)v36 + 298LL) )
    {
      v48 = 0LL;
      v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
      {
        ++v48;
        v49 += 4;
        if ( v48 >= *(unsigned __int16 *)(*(_QWORD *)v36 + 298LL) )
          goto LABEL_33;
      }
      v50 = v47 + 16LL * *v49 + 312;
    }
    else
    {
LABEL_33:
      v50 = sub_AC5258(v36, System_IDisposable_TypeInfo, 0LL, v41);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v50)(v36, *(_QWORD *)(v50 + 8));
  }
  return v46;
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
    sub_B2C434(this, p);
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
    sub_B2C434(this, p);
  }
  return System_String__Equals_44292872((System_String_o *)this, v3->fields.nodename, 0LL);
}