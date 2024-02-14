int32_t __fastcall TransformHelper__CalcPriority(System_String_o *objName, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *v5; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42167E0 & 1) == 0 )
  {
    sub_B0D8A4(&System_Text_RegularExpressions_Regex_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_15818/*"[^0-9]"*/, v3);
    sub_B0D8A4(&StringLiteral_1/*""*/, v4);
    byte_42167E0 = 1;
  }
  result = 0;
  if ( (BYTE3(System_Text_RegularExpressions_Regex_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
  }
  v5 = System_Text_RegularExpressions_Regex__Replace(
         objName,
         (System_String_o *)StringLiteral_15818/*"[^0-9]"*/,
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
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v12; // x8
  unsigned __int64 v13; // x10
  System_Collections_IEnumerator_c **v14; // x11
  __int64 v15; // x0
  UnityEngine_Transform_o *v16; // x0
  const MethodInfo *v17; // x2
  __int64 v18; // x9
  __int64 v19; // x0
  __int64 v20; // x8
  __int64 v21; // x20
  unsigned __int64 v22; // x10
  int *v23; // x11
  __int64 v24; // x0

  v4 = (UnityEngine_Component_o *)self;
  if ( (byte_42167D8 & 1) == 0 )
  {
    sub_B0D8A4(&System_IDisposable_TypeInfo, *(_QWORD *)&layer);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v5);
    self = (UnityEngine_Transform_o *)sub_B0D8A4(&UnityEngine_Transform_TypeInfo, v6);
    byte_42167D8 = 1;
  }
  if ( !v4 || (self = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v4, 0LL)) == 0LL )
LABEL_33:
    sub_B0D97C(self);
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)self, layer, 0LL);
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)v4, 0LL);
  if ( !Enumerator )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v9 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v9;
        p_offset += 4;
        if ( v9 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      v14 = (System_Collections_IEnumerator_c **)&v12->_1.interfaceOffsets->offset;
      while ( *(v14 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v13;
        v14 += 2;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v15 = (__int64)&v12->vtable[*(_DWORD *)v14 + 1].method;
    }
    else
    {
LABEL_17:
      v15 = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v16 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v15)(
                                       Enumerator,
                                       *(_QWORD *)(v15 + 8));
    if ( v16 )
    {
      v18 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v18
        || (UnityEngine_Transform_c *)v16->klass->_2.typeHierarchy[v18 - 1] != UnityEngine_Transform_TypeInfo )
      {
        self = (UnityEngine_Transform_o *)sub_B0DC70(v16);
        goto LABEL_33;
      }
    }
    TransformHelper__ChangeChildsLayer(v16, layer, v17);
  }
  v19 = sub_B0D964(Enumerator, System_IDisposable_TypeInfo);
  if ( v19 )
  {
    v20 = *(_QWORD *)v19;
    v21 = v19;
    if ( *(_WORD *)(*(_QWORD *)v19 + 298LL) )
    {
      v22 = 0LL;
      v23 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
      {
        ++v22;
        v23 += 4;
        if ( v22 >= *(unsigned __int16 *)(*(_QWORD *)v19 + 298LL) )
          goto LABEL_28;
      }
      v24 = v20 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_28:
      v24 = sub_AA67A0(v19, System_IDisposable_TypeInfo, 0LL);
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
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v11; // x8
  unsigned __int64 v12; // x10
  System_Collections_IEnumerator_c **v13; // x11
  __int64 v14; // x0
  UnityEngine_Component_o *v15; // x0
  __int64 v16; // x9
  UnityEngine_Object_o *gameObject; // x20
  __int64 v18; // x0
  __int64 v19; // x8
  __int64 v20; // x19
  unsigned __int64 v21; // x10
  int *v22; // x11
  __int64 v23; // x0

  v2 = (UnityEngine_Component_o *)self;
  if ( (byte_42167D9 & 1) == 0 )
  {
    sub_B0D8A4(&System_IDisposable_TypeInfo, method);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    self = (UnityEngine_Transform_o *)sub_B0D8A4(&UnityEngine_Transform_TypeInfo, v5);
    byte_42167D9 = 1;
  }
  if ( !v2 || (self = UnityEngine_Component__get_transform(v2, 0LL)) == 0LL )
    sub_B0D97C(self);
  Enumerator = UnityEngine_Transform__GetEnumerator(self, 0LL);
  if ( !Enumerator )
    sub_B0D97C(0LL);
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
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v14 = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v15 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v14)(
                                       Enumerator,
                                       *(_QWORD *)(v14 + 8));
    if ( !v15 )
      goto LABEL_36;
    v16 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v15->klass->_2.bitflags2 + 1) < (unsigned int)v16
      || (UnityEngine_Transform_c *)v15->klass->_2.typeHierarchy[v16 - 1] != UnityEngine_Transform_TypeInfo )
    {
      v15 = (UnityEngine_Component_o *)sub_B0DC70(v15);
LABEL_36:
      sub_B0D97C(v15);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v15, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
  }
  v18 = sub_B0D964(Enumerator, System_IDisposable_TypeInfo);
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
          goto LABEL_31;
      }
      v23 = v19 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_31:
      v23 = sub_AA67A0(v18, System_IDisposable_TypeInfo, 0LL);
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

  if ( (byte_42167DB & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, nodename);
    byte_42167DB = 1;
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
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x21
  __int64 v20; // x8
  unsigned __int64 v21; // x26
  WarBoardControlPlayTalkUiComponent_o **m_Items; // x27
  bool v23; // w23
  bool v24; // w24
  UnityEngine_Object_o *v25; // x25
  UnityEngine_Object_o *Component_WebViewObject; // x25
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v28; // x6
  UnityEngine_Object_o *NodeFromLvName; // x25
  __int64 v31; // x0

  v9 = (UnityEngine_Component_o *)parentTransform;
  if ( (byte_42167DE & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_BattleActorControl___, nodename);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_Transform____67969344, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Transform__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Transform__ToArray__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Transform___ctor__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_Transform__TypeInfo, v14);
    parentTransform = (UnityEngine_Transform_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v15);
    byte_42167DE = 1;
  }
  if ( !isIgnore )
    return 0LL;
  if ( !v9 )
    goto LABEL_31;
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                              v9,
                                                              1,
                                                              (const MethodInfo_170EAD0 *)Method_UnityEngine_Component_GetComponentsInChildren_Transform____67969344);
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_Transform__TypeInfo,
                                                                                                  v17,
                                                                                                  v18);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_Transform___ctor__);
  if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
    goto LABEL_31;
  v20 = *(_QWORD *)&ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length;
  if ( (int)v20 >= 1 )
  {
    v21 = 0LL;
    m_Items = ComponentsInChildren_WarBoardControlPlayTalkUiComponent->m_Items;
    v23 = includeInactive;
    v24 = useNewRule;
    do
    {
      if ( v21 >= (unsigned int)v20 )
      {
LABEL_30:
        v31 = sub_B0D9A8(parentTransform);
        sub_B0D948(v31, 0LL);
      }
      v25 = (UnityEngine_Object_o *)m_Items[v21];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      parentTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v9, v25, 0LL);
      if ( ((unsigned __int8)parentTransform & 1) == 0 )
      {
        if ( v21 >= ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length )
          goto LABEL_30;
        parentTransform = (UnityEngine_Transform_o *)m_Items[v21];
        if ( !parentTransform )
          goto LABEL_31;
        Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            (UnityEngine_Component_o *)parentTransform,
                                                            (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_BattleActorControl___);
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
                                                     v23,
                                                     v24,
                                                     0,
                                                     v28);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          parentTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(NodeFromLvName, 0LL, 0LL);
          if ( ((unsigned __int8)parentTransform & 1) == 0 )
          {
            if ( !v19 )
              goto LABEL_31;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v19,
              (EventMissionProgressRequest_Argument_ProgressData_o *)NodeFromLvName,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_Transform__Add__);
          }
        }
      }
      LODWORD(v20) = ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length;
    }
    while ( (__int64)++v21 < (int)v20 );
  }
  if ( !v19 )
LABEL_31:
    sub_B0D97C(parentTransform);
  return (UnityEngine_Transform_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v19,
                                          (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_Transform__ToArray__);
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
  float v16; // [xsp+48h] [xbp-18h]
  float v17; // [xsp+4Ch] [xbp-14h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42167DA & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, parent);
    byte_42167DA = 1;
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
LABEL_17:
    sub_B0D97C(gameObject);
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
  float v9; // s8
  int32_t v10; // w22
  Il2CppObject *v11; // x21
  UnityEngine_Transform_o *v12; // x19
  _BOOL8 v13; // x0
  System_String_o *v14; // x0
  _BOOL8 v15; // x0
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  const MethodInfo *v18; // x1
  System_String_o *v19; // x0
  const MethodInfo *v20; // x1
  float z; // s8
  Il2CppObject *current; // x20
  System_String_o *name; // x0
  _BOOL8 v24; // x0
  int v25; // w20
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+8h] [xbp-88h] BYREF
  int v28[2]; // [xsp+20h] [xbp-70h]
  int v29; // [xsp+28h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+30h] [xbp-60h] BYREF
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  v4 = tNode;
  if ( (byte_42167E1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_Transform__Dispose__, useNewRule);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_Transform__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Transform__GetEnumerator__, v7);
    tNode = (System_Collections_Generic_List_Transform__o *)sub_B0D8A4(&StringLiteral_80/*" "*/, v8);
    byte_42167E1 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  v29 = 0;
  if ( !useNewRule )
  {
    z = -100.0;
    v12 = 0LL;
    if ( v4 )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v27,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v4,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_Transform__GetEnumerator__);
      v30 = v27;
      while ( 1 )
      {
        v24 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v30,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext__);
        if ( !v24 )
          break;
        current = v30.fields.current;
        if ( !v30.fields.current )
          sub_B0D97C(v24);
        lossyScale = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)v30.fields.current, 0LL);
        if ( lossyScale.fields.z > z )
        {
          v36 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)current, 0LL);
          z = v36.fields.z;
          v12 = (UnityEngine_Transform_o *)current;
        }
        else
        {
          v35 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)current, 0LL);
          if ( v35.fields.z == z )
          {
            name = UnityEngine_Object__get_name((UnityEngine_Object_o *)current, 0LL);
            if ( !name )
              sub_B0D97C(0LL);
            if ( !System_String__Contains(name, (System_String_o *)StringLiteral_80/*" "*/, 0LL) )
              v12 = (UnityEngine_Transform_o *)current;
          }
        }
      }
      v28[0] = 303;
      v25 = ++v29;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v30,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_Transform__Dispose__);
      if ( v25 && v28[v25 - 1] == 303 )
        v29 = v25 - 1;
      return v12;
    }
LABEL_39:
    sub_B0D97C(tNode);
  }
  if ( !v4 )
    goto LABEL_39;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v27,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v4,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_Transform__GetEnumerator__);
  v9 = -100.0;
  v30 = v27;
  v10 = 0;
  v11 = 0LL;
LABEL_6:
  v12 = (UnityEngine_Transform_o *)v11;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v30,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext__);
    if ( !v13 )
      break;
    v11 = v30.fields.current;
    if ( !v30.fields.current )
      sub_B0D97C(v13);
    v31 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)v30.fields.current, 0LL);
    if ( v31.fields.z > v9 )
    {
      v33 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)v11, 0LL);
      v9 = v33.fields.z;
      v19 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v11, 0LL);
      v10 = TransformHelper__CalcPriority(v19, v20);
      goto LABEL_6;
    }
    v32 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)v11, 0LL);
    if ( v32.fields.z == v9 )
    {
      v14 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v11, 0LL);
      if ( !v14 )
        sub_B0D97C(0LL);
      v15 = System_String__Contains(v14, (System_String_o *)StringLiteral_80/*" "*/, 0LL);
      if ( v15 )
      {
        if ( !v12 )
          sub_B0D97C(v15);
        v16 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v12, 0LL);
        if ( !v16 )
          sub_B0D97C(0LL);
        if ( System_String__Contains(v16, (System_String_o *)StringLiteral_80/*" "*/, 0LL) )
        {
          v17 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v11, 0LL);
          if ( v10 > TransformHelper__CalcPriority(v17, v18) )
            v11 = (Il2CppObject *)v12;
        }
        goto LABEL_6;
      }
    }
  }
  v28[0] = 303;
  v29 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v30,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_Transform__Dispose__);
  v29 = 0;
  return v12;
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
  _BOOL4 v8; // w26
  int32_t v9; // w25
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
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_o *v39; // x0
  UnityEngine_Object_o *Component_WebViewObject; // x23
  bool v41; // w20
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x23
  __int64 v43; // x1
  __int64 v44; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v45; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0
  System_String_o *v47; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x24
  const MethodInfo *v49; // x5
  UnityEngine_Transform_array *IgnoreNodeList; // x26
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  unsigned __int64 v56; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v59; // x24
  __int64 v60; // x8
  unsigned __int64 v61; // x10
  int *v62; // x11
  __int64 v63; // x0
  __int64 v64; // x8
  unsigned __int64 v65; // x10
  int *v66; // x11
  __int64 v67; // x0
  __int64 v68; // x0
  UnityEngine_Component_o *v69; // x27
  __int64 v70; // x20
  UnityEngine_Object_o *gameObject; // x0
  __int64 InstanceID; // x0
  int v73; // w28
  UnityEngine_Component_o *v74; // x0
  UnityEngine_Object_o *v75; // x0
  System_String_o *name; // x0
  System_String_o *v77; // x0
  int32_t v78; // w20
  System_String_o *v79; // x0
  System_String_o *v80; // x0
  System_String_o *v81; // x28
  int32_t v82; // w2
  System_Char_array *v83; // x0
  System_String_array *v84; // x0
  System_String_array *v85; // x28
  __int64 v86; // x8
  unsigned __int64 v87; // x22
  System_String_o *v88; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v89; // x0
  __int64 v90; // x8
  unsigned __int64 v91; // x10
  int *v92; // x11
  __int64 v93; // x0
  const MethodInfo *v94; // x2
  System_Collections_Generic_List_Transform__o *v95; // x0
  UnityEngine_Object_o *v96; // x21
  _BOOL4 v97; // w0
  UnityEngine_Transform_o *v98; // x8
  __int64 v100; // x0
  __int64 v101; // x0
  __int64 v102; // x0
  UnityEngine_Transform_o *v103; // [xsp+8h] [xbp-88h]
  _BOOL4 v104; // [xsp+14h] [xbp-7Ch]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v105; // [xsp+18h] [xbp-78h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v107; // [xsp+28h] [xbp-68h]
  int32_t result; // [xsp+3Ch] [xbp-54h] BYREF

  v8 = includeInactive;
  v9 = level;
  if ( (byte_42167DD & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, nodename);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_BattleActorControl___, v12);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_Transform____67969344, v13);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_Transform___, v14);
    sub_B0D8A4(&Method_System_Func_Transform__bool___ctor__, v15);
    sub_B0D8A4(&System_Func_Transform__bool__TypeInfo, v16);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v17);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_Transform__TypeInfo, v18);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_Transform__TypeInfo, v19);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Transform__Add__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Transform___ctor__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Transform__get_Count__, v23);
    sub_B0D8A4(&System_Collections_Generic_List_Transform__TypeInfo, v24);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v25);
    sub_B0D8A4(&Method_TransformHelper___c__DisplayClass5_0__executeGetNodeFromLvName_b__0__, v26);
    sub_B0D8A4(&TransformHelper___c__DisplayClass5_0_TypeInfo, v27);
    sub_B0D8A4(&StringLiteral_80/*" "*/, v28);
    sub_B0D8A4(&StringLiteral_16201/*"_level"*/, v29);
    sub_B0D8A4(&StringLiteral_1/*""*/, v30);
    byte_42167DD = 1;
  }
  result = 0;
  v31 = sub_B0D974(TransformHelper___c__DisplayClass5_0_TypeInfo, nodename, *(_QWORD *)&level);
  TransformHelper___c__DisplayClass5_0___ctor((TransformHelper___c__DisplayClass5_0_o *)v31, 0LL);
  if ( !v31 )
    goto LABEL_102;
  *(_QWORD *)(v31 + 16) = nodename;
  sub_B0D840((BattleServantConfConponent_o *)(v31 + 16), (System_Int32_array **)nodename, v33, v34, v35, v36, v37, v38);
  v39 = *(System_String_o **)(v31 + 16);
  if ( !v39 )
    return self;
  v32 = System_String__Equals_43837244(v39, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( (v32 & 1) != 0 )
    return self;
  if ( !self )
    goto LABEL_102;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)self,
                                                      (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_BattleActorControl___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v32 = UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( v9 == -1 && (v32 & 1) != 0 )
  {
    if ( !Component_WebViewObject )
      goto LABEL_102;
    v9 = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)Component_WebViewObject, 0LL) + 1;
  }
  v41 = v8;
  v104 = v8;
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_((UnityEngine_Component_o *)self, v8, (const MethodInfo_170EAD0 *)Method_UnityEngine_Component_GetComponentsInChildren_Transform____67969344);
  v45 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_Transform__bool__TypeInfo,
                                                                             v43,
                                                                             v44);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v45,
    (Il2CppObject *)v31,
    Method_TransformHelper___c__DisplayClass5_0__executeGetNodeFromLvName_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_Transform__bool___ctor__);
  v46 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
          (System_Func_TSource__bool__o *)v45,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_Transform___);
  v47 = *(System_String_o **)(v31 + 16);
  v48 = v46;
  IgnoreNodeList = TransformHelper__GetIgnoreNodeList(self, v47, v41, useNewRule, isIgnore, v49);
  v105 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_Transform__TypeInfo,
                                                                                                   v51,
                                                                                                   v52);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v105,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_Transform___ctor__);
  v107 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_Transform__TypeInfo,
                                                                                                   v53,
                                                                                                   v54);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v107,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_Transform___ctor__);
  if ( !v48 )
    goto LABEL_102;
  klass = v48->klass;
  if ( *(_WORD *)&v48->klass->_2.bitflags1 )
  {
    v56 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      ++v56;
      p_offset += 4;
      if ( v56 >= *(unsigned __int16 *)&v48->klass->_2.bitflags1 )
        goto LABEL_19;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_19:
    p_method = sub_AA67A0(v48, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0LL);
  }
  v103 = self;
  v59 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v48,
          *(_QWORD *)(p_method + 8));
  if ( !v59 )
    sub_B0D97C(0LL);
  while ( 1 )
  {
LABEL_22:
    v60 = *(_QWORD *)v59;
    if ( *(_WORD *)(*(_QWORD *)v59 + 298LL) )
    {
      v61 = 0LL;
      v62 = (int *)(*(_QWORD *)(v60 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v62 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v61;
        v62 += 4;
        if ( v61 >= *(unsigned __int16 *)(*(_QWORD *)v59 + 298LL) )
          goto LABEL_26;
      }
      v63 = v60 + 16LL * *v62 + 312;
    }
    else
    {
LABEL_26:
      v63 = sub_AA67A0(v59, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v63)(v59, *(_QWORD *)(v63 + 8)) & 1) == 0 )
      break;
    v64 = *(_QWORD *)v59;
    if ( *(_WORD *)(*(_QWORD *)v59 + 298LL) )
    {
      v65 = 0LL;
      v66 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v66 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        ++v65;
        v66 += 4;
        if ( v65 >= *(unsigned __int16 *)(*(_QWORD *)v59 + 298LL) )
          goto LABEL_33;
      }
      v67 = v64 + 16LL * *v66 + 312;
    }
    else
    {
LABEL_33:
      v67 = sub_AA67A0(v59, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0LL);
    }
    v68 = (*(__int64 (__fastcall **)(__int64, _QWORD))v67)(v59, *(_QWORD *)(v67 + 8));
    v69 = (UnityEngine_Component_o *)v68;
    if ( IgnoreNodeList && (int)IgnoreNodeList->max_length >= 1 )
    {
      v70 = 0LL;
      while ( 1 )
      {
        if ( !v69 )
          sub_B0D97C(v68);
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v69, 0LL);
        if ( !gameObject )
          sub_B0D97C(0LL);
        InstanceID = UnityEngine_Object__GetInstanceID(gameObject, 0LL);
        if ( (unsigned int)v70 >= IgnoreNodeList->max_length )
        {
          v100 = sub_B0D9A8(InstanceID);
          sub_B0D948(v100, 0LL);
        }
        v73 = InstanceID;
        v74 = (UnityEngine_Component_o *)IgnoreNodeList->m_Items[v70];
        if ( !v74 )
          sub_B0D97C(0LL);
        v75 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v74, 0LL);
        if ( !v75 )
          sub_B0D97C(0LL);
        v68 = UnityEngine_Object__GetInstanceID(v75, 0LL);
        if ( v73 == (_DWORD)v68 )
          break;
        if ( (int)++v70 >= (signed int)IgnoreNodeList->max_length )
          goto LABEL_47;
      }
    }
    else
    {
      if ( !v68 )
        sub_B0D97C(0LL);
LABEL_47:
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v69, 0LL);
      if ( !name )
        sub_B0D97C(0LL);
      if ( !System_String__Contains(name, (System_String_o *)StringLiteral_16201/*"_level"*/, 0LL) )
      {
        v89 = v107;
        if ( !v107 )
          sub_B0D97C(0LL);
        goto LABEL_66;
      }
      v77 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v69, 0LL);
      if ( !v77 )
        sub_B0D97C(0LL);
      v78 = System_String__IndexOf_43922252(v77, (System_String_o *)StringLiteral_16201/*"_level"*/, 0LL);
      v79 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v69, 0LL);
      if ( !v79 )
        sub_B0D97C(0LL);
      v80 = System_String__Substring(v79, v78 + 7, 0LL);
      v81 = v80;
      if ( !v80 )
        sub_B0D97C(0LL);
      if ( (System_String__IndexOf_43922252(v80, (System_String_o *)StringLiteral_80/*" "*/, 0LL) & 0x80000000) == 0 )
      {
        v82 = System_String__IndexOf_43922252(v81, (System_String_o *)StringLiteral_80/*" "*/, 0LL);
        v81 = System_String__Substring_43913640(v81, 0, v82, 0LL);
      }
      v83 = (System_Char_array *)sub_B0D8BC(char___TypeInfo, 1LL);
      if ( !v83 )
        sub_B0D97C(0LL);
      if ( !v83->max_length )
      {
        v102 = sub_B0D9A8(v83);
        sub_B0D948(v102, 0LL);
      }
      v83->m_Items[2] = 95;
      if ( !v81 )
        sub_B0D97C(v83);
      v84 = System_String__Split(v81, v83, 0LL);
      v85 = v84;
      if ( !v84 )
        sub_B0D97C(0LL);
      v86 = *(_QWORD *)&v84->max_length;
      if ( (int)v86 >= 1 )
      {
        v87 = 0LL;
        while ( 1 )
        {
          if ( v87 >= (unsigned int)v86 )
          {
            v101 = sub_B0D9A8(v84);
            sub_B0D948(v101, 0LL);
          }
          v88 = v85->m_Items[v87];
          result = 99;
          v84 = (System_String_array *)System_Int32__TryParse(v88, &result, 0LL);
          if ( ((unsigned __int8)v84 & 1) != 0 )
          {
            v84 = (System_String_array *)System_Int32__Parse(v88, 0LL);
            if ( (_DWORD)v84 == v9 )
              break;
          }
          LODWORD(v86) = v85->max_length;
          if ( (__int64)++v87 >= (int)v86 )
            goto LABEL_22;
        }
        v89 = v105;
        if ( !v105 )
          sub_B0D97C(0LL);
LABEL_66:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v89,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v69,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_Transform__Add__);
      }
    }
  }
  v90 = *(_QWORD *)v59;
  if ( *(_WORD *)(*(_QWORD *)v59 + 298LL) )
  {
    v91 = 0LL;
    v92 = (int *)(*(_QWORD *)(v90 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v92 - 1) != System_IDisposable_TypeInfo )
    {
      ++v91;
      v92 += 4;
      if ( v91 >= *(unsigned __int16 *)(*(_QWORD *)v59 + 298LL) )
        goto LABEL_73;
    }
    v93 = v90 + 16LL * *v92 + 312;
  }
  else
  {
LABEL_73:
    v93 = sub_AA67A0(v59, System_IDisposable_TypeInfo, 0LL);
  }
  v32 = (*(__int64 (__fastcall **)(__int64, _QWORD))v93)(v59, *(_QWORD *)(v93 + 8));
  if ( !v105 )
LABEL_102:
    sub_B0D97C(v32);
  if ( v105->fields._size >= 1 )
    v95 = (System_Collections_Generic_List_Transform__o *)v105;
  else
    v95 = (System_Collections_Generic_List_Transform__o *)v107;
  v96 = (UnityEngine_Object_o *)TransformHelper__SelectNodeWithRule(v95, useNewRule, v94);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v97 = UnityEngine_Object__op_Equality(v96, 0LL, 0LL);
  v98 = v103;
  if ( !v97 || !v104 )
    return (UnityEngine_Transform_o *)v96;
  return v98;
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

  if ( (byte_42167DC & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, nodename);
    byte_42167DC = 1;
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
  __int64 v15; // x1
  __int64 v16; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x19
  __int64 v25; // x1
  __int64 v26; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v27; // x20
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x19
  unsigned __int64 v30; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v33; // x0
  __int64 v34; // x19
  __int64 v35; // x8
  unsigned __int64 v36; // x10
  int *v37; // x11
  __int64 v38; // x0
  __int64 v39; // x8
  unsigned __int64 v40; // x10
  int *v41; // x11
  __int64 v42; // x0
  UnityEngine_Transform_o *v43; // x20
  __int64 v44; // x8
  unsigned __int64 v45; // x10
  int *v46; // x11
  __int64 v47; // x0

  if ( (byte_42167DF & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_Transform____67969344, nodename);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_Transform___, v7);
    sub_B0D8A4(&Method_System_Func_Transform__bool___ctor__, v8);
    sub_B0D8A4(&System_Func_Transform__bool__TypeInfo, v9);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v10);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_Transform__TypeInfo, v11);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_Transform__TypeInfo, v12);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_B0D8A4(&Method_TransformHelper___c__DisplayClass7_0__getNodeFromName_b__0__, v14);
    sub_B0D8A4(&TransformHelper___c__DisplayClass7_0_TypeInfo, v15);
    byte_42167DF = 1;
  }
  v16 = sub_B0D974(TransformHelper___c__DisplayClass7_0_TypeInfo, nodename, includeInactive);
  TransformHelper___c__DisplayClass7_0___ctor((TransformHelper___c__DisplayClass7_0_o *)v16, 0LL);
  if ( !v16
    || (*(_QWORD *)(v16 + 16) = nodename,
        sub_B0D840(
          (BattleServantConfConponent_o *)(v16 + 16),
          (System_Int32_array **)nodename,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23),
        !self)
    || (ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_((UnityEngine_Component_o *)self, includeInactive, (const MethodInfo_170EAD0 *)Method_UnityEngine_Component_GetComponentsInChildren_Transform____67969344),
        v27 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                   System_Func_Transform__bool__TypeInfo,
                                                                                   v25,
                                                                                   v26),
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v27,
          (Il2CppObject *)v16,
          Method_TransformHelper___c__DisplayClass7_0__getNodeFromName_b__0__,
          (const MethodInfo_26189B8 *)Method_System_Func_Transform__bool___ctor__),
        (v17 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                 ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
                 (System_Func_TSource__bool__o *)v27,
                 (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_Transform___)) == 0LL) )
  {
    sub_B0D97C(v17);
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
    p_method = sub_AA67A0(v17, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0LL);
  }
  v33 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v29,
          *(_QWORD *)(p_method + 8));
  v34 = v33;
  if ( !v33 )
    sub_B0D97C(0LL);
  v35 = *(_QWORD *)v33;
  if ( *(_WORD *)(*(_QWORD *)v33 + 298LL) )
  {
    v36 = 0LL;
    v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
    while ( *((System_Collections_IEnumerator_c **)v37 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      ++v36;
      v37 += 4;
      if ( v36 >= *(unsigned __int16 *)(*(_QWORD *)v33 + 298LL) )
        goto LABEL_17;
    }
    v38 = v35 + 16LL * *v37 + 312;
  }
  else
  {
LABEL_17:
    v38 = sub_AA67A0(v33, System_Collections_IEnumerator_TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v34, *(_QWORD *)(v38 + 8)) & 1) != 0 )
  {
    v39 = *(_QWORD *)v34;
    if ( *(_WORD *)(*(_QWORD *)v34 + 298LL) )
    {
      v40 = 0LL;
      v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v41 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        ++v40;
        v41 += 4;
        if ( v40 >= *(unsigned __int16 *)(*(_QWORD *)v34 + 298LL) )
          goto LABEL_24;
      }
      v42 = v39 + 16LL * *v41 + 312;
    }
    else
    {
LABEL_24:
      v42 = sub_AA67A0(v34, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0LL);
    }
    v43 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v34, *(_QWORD *)(v42 + 8));
  }
  else
  {
    v43 = 0LL;
  }
  if ( v34 )
  {
    v44 = *(_QWORD *)v34;
    if ( *(_WORD *)(*(_QWORD *)v34 + 298LL) )
    {
      v45 = 0LL;
      v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
      {
        ++v45;
        v46 += 4;
        if ( v45 >= *(unsigned __int16 *)(*(_QWORD *)v34 + 298LL) )
          goto LABEL_33;
      }
      v47 = v44 + 16LL * *v46 + 312;
    }
    else
    {
LABEL_33:
      v47 = sub_AA67A0(v34, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v47)(v34, *(_QWORD *)(v47 + 8));
  }
  return v43;
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  }
  return System_String__Equals_43837244((System_String_o *)this, v3->fields.nodename, 0LL);
}