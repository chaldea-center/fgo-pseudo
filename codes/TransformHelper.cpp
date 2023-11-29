int32_t __fastcall TransformHelper__CalcPriority(System_String_o *objName, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *v5; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FB83C & 1) == 0 )
  {
    sub_B16FFC(&System_Text_RegularExpressions_Regex_TypeInfo, method);
    sub_B16FFC(&StringLiteral_15708, v3);
    sub_B16FFC(&StringLiteral_1, v4);
    byte_40FB83C = 1;
  }
  result = 0;
  if ( (BYTE3(System_Text_RegularExpressions_Regex_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
  }
  v5 = System_Text_RegularExpressions_Regex__Replace(
         objName,
         (System_String_o *)StringLiteral_15708,
         (System_String_o *)StringLiteral_1,
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
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v13; // x8
  unsigned __int64 v14; // x10
  System_Collections_IEnumerator_c **v15; // x11
  __int64 v16; // x0
  UnityEngine_Transform_o *v17; // x0
  const MethodInfo *v18; // x2
  __int64 v19; // x9
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x20
  unsigned __int64 v23; // x10
  int *v24; // x11
  __int64 v25; // x0

  if ( (byte_40FB834 & 1) == 0 )
  {
    sub_B16FFC(&System_IDisposable_TypeInfo, *(_QWORD *)&layer);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Transform_TypeInfo, v6);
    byte_40FB834 = 1;
  }
  if ( !self || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)self, 0LL)) == 0LL )
LABEL_33:
    sub_B170D4();
  UnityEngine_GameObject__set_layer(gameObject, layer, 0LL);
  Enumerator = UnityEngine_Transform__GetEnumerator(self, 0LL);
  if ( !Enumerator )
    sub_B170D4();
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
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      v15 = (System_Collections_IEnumerator_c **)&v13->_1.interfaceOffsets->offset;
      while ( *(v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v14;
        v15 += 2;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v16 = (__int64)&v13->vtable[*(_DWORD *)v15 + 1].method;
    }
    else
    {
LABEL_17:
      v16 = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v17 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v16)(
                                       Enumerator,
                                       *(_QWORD *)(v16 + 8));
    if ( v17 )
    {
      v19 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v17->klass->_2.bitflags2 + 1) < (unsigned int)v19
        || (UnityEngine_Transform_c *)v17->klass->_2.typeHierarchy[v19 - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_B173C8(v17);
        goto LABEL_33;
      }
    }
    TransformHelper__ChangeChildsLayer(v17, layer, v18);
  }
  v20 = sub_B170BC(Enumerator, System_IDisposable_TypeInfo);
  if ( v20 )
  {
    v21 = *(_QWORD *)v20;
    v22 = v20;
    if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
    {
      v23 = 0LL;
      v24 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
      {
        ++v23;
        v24 += 4;
        if ( v23 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
          goto LABEL_28;
      }
      v25 = v21 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_28:
      v25 = sub_AAFEF8(v20, System_IDisposable_TypeInfo, 0LL);
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
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v12; // x8
  unsigned __int64 v13; // x10
  System_Collections_IEnumerator_c **v14; // x11
  __int64 v15; // x0
  UnityEngine_Component_o *v16; // x0
  __int64 v17; // x9
  UnityEngine_Object_o *gameObject; // x20
  __int64 v19; // x0
  __int64 v20; // x8
  __int64 v21; // x19
  unsigned __int64 v22; // x10
  int *v23; // x11
  __int64 v24; // x0

  if ( (byte_40FB835 & 1) == 0 )
  {
    sub_B16FFC(&System_IDisposable_TypeInfo, method);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&UnityEngine_Transform_TypeInfo, v5);
    byte_40FB835 = 1;
  }
  if ( !self || (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)self, 0LL)) == 0LL )
    sub_B170D4();
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
  if ( !Enumerator )
    sub_B170D4();
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
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v15 = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v16 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v15)(
                                       Enumerator,
                                       *(_QWORD *)(v15 + 8));
    if ( !v16 )
      goto LABEL_36;
    v17 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v17
      || (UnityEngine_Transform_c *)v16->klass->_2.typeHierarchy[v17 - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_B173C8(v16);
LABEL_36:
      sub_B170D4();
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v16, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
  }
  v19 = sub_B170BC(Enumerator, System_IDisposable_TypeInfo);
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
          goto LABEL_31;
      }
      v24 = v20 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_31:
      v24 = sub_AAFEF8(v19, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v24)(v21, *(_QWORD *)(v24 + 8));
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

  if ( (byte_40FB837 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, nodename);
    byte_40FB837 = 1;
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  WarBoardControlPlayTalkUiComponent_array *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x22
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x21
  _BOOL8 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x8
  unsigned __int64 v26; // x26
  WarBoardControlPlayTalkUiComponent_o **m_Items; // x27
  bool v28; // w23
  bool v29; // w24
  UnityEngine_Object_o *v30; // x25
  UnityEngine_Component_o *v31; // x0
  UnityEngine_Object_o *Component_WebViewObject; // x25
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v34; // x6
  UnityEngine_Object_o *NodeFromLvName; // x25

  if ( (byte_40FB83A & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_BattleActorControl___, nodename);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_Transform____66819904, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Transform__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Transform__ToArray__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Transform___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_Transform__TypeInfo, v14);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v15);
    byte_40FB83A = 1;
  }
  if ( !isIgnore )
    return 0LL;
  if ( !parentTransform )
    goto LABEL_31;
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                              (UnityEngine_Component_o *)parentTransform,
                                                              1,
                                                              (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_Transform____66819904);
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_Transform__TypeInfo,
                                                                                                  v17,
                                                                                                  v18,
                                                                                                  v19,
                                                                                                  v20);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_Transform___ctor__);
  if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
    goto LABEL_31;
  v25 = *(_QWORD *)&ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length;
  if ( (int)v25 >= 1 )
  {
    v26 = 0LL;
    m_Items = ComponentsInChildren_WarBoardControlPlayTalkUiComponent->m_Items;
    v28 = includeInactive;
    v29 = useNewRule;
    do
    {
      if ( v26 >= (unsigned int)v25 )
      {
LABEL_30:
        sub_B17100(v22, v23, v24);
        sub_B170A0();
      }
      v30 = (UnityEngine_Object_o *)m_Items[v26];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v22 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parentTransform, v30, 0LL);
      if ( !v22 )
      {
        if ( v26 >= ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length )
          goto LABEL_30;
        v31 = (UnityEngine_Component_o *)m_Items[v26];
        if ( !v31 )
          goto LABEL_31;
        Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            v31,
                                                            (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_BattleActorControl___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v22 = UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
        if ( v22 )
        {
          if ( !Component_WebViewObject )
            goto LABEL_31;
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_WebViewObject, 0LL);
          NodeFromLvName = (UnityEngine_Object_o *)TransformHelper__executeGetNodeFromLvName(
                                                     transform,
                                                     nodename,
                                                     -1,
                                                     v28,
                                                     v29,
                                                     0,
                                                     v34);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v22 = UnityEngine_Object__op_Equality(NodeFromLvName, 0LL, 0LL);
          if ( !v22 )
          {
            if ( !v21 )
              goto LABEL_31;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v21,
              (EventMissionProgressRequest_Argument_ProgressData_o *)NodeFromLvName,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_Transform__Add__);
          }
        }
      }
      LODWORD(v25) = ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length;
    }
    while ( (__int64)++v26 < (int)v25 );
  }
  if ( !v21 )
LABEL_31:
    sub_B170D4();
  return (UnityEngine_Transform_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v21,
                                          (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_Transform__ToArray__);
}


bool __fastcall TransformHelper__SafeSetParentNonNull(
        UnityEngine_Transform_o *self,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  float x; // s8
  float y; // s9
  float z; // s10
  float v9; // s11
  float v10; // s12
  float v11; // s13
  float w; // s14
  float v13; // s15
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v15; // x20
  UnityEngine_GameObject_o *v16; // x0
  int32_t layer; // w0
  float v18; // [xsp+48h] [xbp-18h]
  float v19; // [xsp+4Ch] [xbp-14h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FB836 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, parent);
    byte_40FB836 = 1;
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
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL) )
    return 0;
  if ( !self )
    goto LABEL_17;
  localPosition = UnityEngine_Transform__get_localPosition(self, 0LL);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  localRotation = UnityEngine_Transform__get_localRotation(self, 0LL);
  v9 = localRotation.fields.x;
  v10 = localRotation.fields.y;
  v11 = localRotation.fields.z;
  w = localRotation.fields.w;
  localScale = UnityEngine_Transform__get_localScale(self, 0LL);
  v13 = localScale.fields.x;
  v18 = localScale.fields.z;
  v19 = localScale.fields.y;
  UnityEngine_Transform__set_parent(self, parent, 0LL);
  v22.fields.x = x;
  v22.fields.y = y;
  v22.fields.z = z;
  UnityEngine_Transform__set_localPosition(self, v22, 0LL);
  v25.fields.x = v9;
  v25.fields.y = v10;
  v25.fields.z = v11;
  v25.fields.w = w;
  UnityEngine_Transform__set_localRotation(self, v25, 0LL);
  v23.fields.z = v18;
  v23.fields.y = v19;
  v23.fields.x = v13;
  UnityEngine_Transform__set_localScale(self, v23, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)self, 0LL);
  if ( !parent
    || (v15 = gameObject, (v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)parent, 0LL)) == 0LL)
    || (layer = UnityEngine_GameObject__get_layer(v16, 0LL), !v15) )
  {
LABEL_17:
    sub_B170D4();
  }
  UnityEngine_GameObject__set_layer(v15, layer, 0LL);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Transform_o *__fastcall TransformHelper__SelectNodeWithRule(
        System_Collections_Generic_List_Transform__o *tNode,
        bool useNewRule,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  float v9; // s8
  int32_t v10; // w22
  Il2CppObject *v11; // x21
  UnityEngine_Transform_o *v12; // x19
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  const MethodInfo *v16; // x1
  System_String_o *v17; // x0
  const MethodInfo *v18; // x1
  float z; // s8
  Il2CppObject *current; // x20
  System_String_o *name; // x0
  int v22; // w20
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-88h] BYREF
  int v25[2]; // [xsp+20h] [xbp-70h]
  int v26; // [xsp+28h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+30h] [xbp-60h] BYREF
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FB83D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Transform__Dispose__, useNewRule);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Transform__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Transform__GetEnumerator__, v7);
    sub_B16FFC(&StringLiteral_80, v8);
    byte_40FB83D = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v26 = 0;
  if ( !useNewRule )
  {
    z = -100.0;
    v12 = 0LL;
    if ( tNode )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v24,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)tNode,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_Transform__GetEnumerator__);
      v27 = v24;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v27,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext__) )
      {
        current = v27.fields.current;
        if ( !v27.fields.current )
          sub_B170D4();
        lossyScale = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)v27.fields.current, 0LL);
        if ( lossyScale.fields.z > z )
        {
          v33 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)current, 0LL);
          z = v33.fields.z;
          v12 = (UnityEngine_Transform_o *)current;
        }
        else
        {
          v32 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)current, 0LL);
          if ( v32.fields.z == z )
          {
            name = UnityEngine_Object__get_name((UnityEngine_Object_o *)current, 0LL);
            if ( !name )
              sub_B170D4();
            if ( !System_String__Contains(name, (System_String_o *)StringLiteral_80, 0LL) )
              v12 = (UnityEngine_Transform_o *)current;
          }
        }
      }
      v25[0] = 303;
      v22 = ++v26;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v27,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_Transform__Dispose__);
      if ( v22 && v25[v22 - 1] == 303 )
        v26 = v22 - 1;
      return v12;
    }
LABEL_39:
    sub_B170D4();
  }
  if ( !tNode )
    goto LABEL_39;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v24,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)tNode,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_Transform__GetEnumerator__);
  v9 = -100.0;
  v27 = v24;
  v10 = 0;
  v11 = 0LL;
LABEL_6:
  v12 = (UnityEngine_Transform_o *)v11;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v27,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext__) )
  {
    v11 = v27.fields.current;
    if ( !v27.fields.current )
      sub_B170D4();
    v28 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)v27.fields.current, 0LL);
    if ( v28.fields.z > v9 )
    {
      v30 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)v11, 0LL);
      v9 = v30.fields.z;
      v17 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v11, 0LL);
      v10 = TransformHelper__CalcPriority(v17, v18);
      goto LABEL_6;
    }
    v29 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)v11, 0LL);
    if ( v29.fields.z == v9 )
    {
      v13 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v11, 0LL);
      if ( !v13 )
        sub_B170D4();
      if ( System_String__Contains(v13, (System_String_o *)StringLiteral_80, 0LL) )
      {
        if ( !v12 )
          sub_B170D4();
        v14 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v12, 0LL);
        if ( !v14 )
          sub_B170D4();
        if ( System_String__Contains(v14, (System_String_o *)StringLiteral_80, 0LL) )
        {
          v15 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v11, 0LL);
          if ( v10 > TransformHelper__CalcPriority(v15, v16) )
            v11 = (Il2CppObject *)v12;
        }
        goto LABEL_6;
      }
    }
  }
  v25[0] = 303;
  v26 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v27,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_Transform__Dispose__);
  v26 = 0;
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
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_o *v38; // x0
  UnityEngine_Object_o *Component_WebViewObject; // x23
  bool v40; // w0
  bool v41; // w20
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x23
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v47; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  System_String_o *v49; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x24
  const MethodInfo *v51; // x5
  UnityEngine_Transform_array *IgnoreNodeList; // x26
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  unsigned __int64 v62; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v65; // x24
  __int64 v66; // x8
  unsigned __int64 v67; // x10
  int *v68; // x11
  __int64 v69; // x0
  __int64 v70; // x8
  unsigned __int64 v71; // x10
  int *v72; // x11
  __int64 v73; // x0
  __int64 v74; // x0
  UnityEngine_Component_o *v75; // x27
  __int64 v76; // x20
  UnityEngine_Object_o *gameObject; // x0
  __int64 InstanceID; // x0
  __int64 v79; // x1
  __int64 v80; // x2
  int v81; // w28
  UnityEngine_Component_o *v82; // x0
  UnityEngine_Object_o *v83; // x0
  System_String_o *name; // x0
  System_String_o *v85; // x0
  int32_t v86; // w20
  System_String_o *v87; // x0
  System_String_o *v88; // x0
  System_String_o *v89; // x28
  __int64 v90; // x2
  int32_t v91; // w2
  System_Char_array *v92; // x0
  __int64 v93; // x2
  System_String_array *v94; // x0
  __int64 v95; // x1
  __int64 v96; // x2
  System_String_array *v97; // x28
  __int64 v98; // x8
  unsigned __int64 v99; // x22
  System_String_o *v100; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v101; // x0
  __int64 v102; // x8
  unsigned __int64 v103; // x10
  int *v104; // x11
  __int64 v105; // x0
  const MethodInfo *v106; // x2
  System_Collections_Generic_List_Transform__o *v107; // x0
  UnityEngine_Object_o *v108; // x21
  _BOOL4 v109; // w0
  UnityEngine_Transform_o *v110; // x8
  UnityEngine_Transform_o *v112; // [xsp+8h] [xbp-88h]
  _BOOL4 v113; // [xsp+14h] [xbp-7Ch]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v114; // [xsp+18h] [xbp-78h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v116; // [xsp+28h] [xbp-68h]
  int32_t result; // [xsp+3Ch] [xbp-54h] BYREF

  v8 = includeInactive;
  v9 = level;
  if ( (byte_40FB839 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, nodename);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_BattleActorControl___, v12);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_Transform____66819904, v13);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_Transform___, v14);
    sub_B16FFC(&Method_System_Func_Transform__bool___ctor__, v15);
    sub_B16FFC(&System_Func_Transform__bool__TypeInfo, v16);
    sub_B16FFC(&System_IDisposable_TypeInfo, v17);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_Transform__TypeInfo, v18);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_Transform__TypeInfo, v19);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_Transform__Add__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_Transform___ctor__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_Transform__get_Count__, v23);
    sub_B16FFC(&System_Collections_Generic_List_Transform__TypeInfo, v24);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v25);
    sub_B16FFC(&Method_TransformHelper___c__DisplayClass5_0__executeGetNodeFromLvName_b__0__, v26);
    sub_B16FFC(&TransformHelper___c__DisplayClass5_0_TypeInfo, v27);
    sub_B16FFC(&StringLiteral_80, v28);
    sub_B16FFC(&StringLiteral_16089, v29);
    sub_B16FFC(&StringLiteral_1, v30);
    byte_40FB839 = 1;
  }
  result = 0;
  v31 = sub_B170CC(
          TransformHelper___c__DisplayClass5_0_TypeInfo,
          nodename,
          *(_QWORD *)&level,
          includeInactive,
          useNewRule);
  TransformHelper___c__DisplayClass5_0___ctor((TransformHelper___c__DisplayClass5_0_o *)v31, 0LL);
  if ( !v31 )
    goto LABEL_102;
  *(_QWORD *)(v31 + 16) = nodename;
  sub_B16F98((BattleServantConfConponent_o *)(v31 + 16), (System_Int32_array **)nodename, v32, v33, v34, v35, v36, v37);
  v38 = *(System_String_o **)(v31 + 16);
  if ( !v38 || System_String__Equals_43731072(v38, (System_String_o *)StringLiteral_1, 0LL) )
    return self;
  if ( !self )
    goto LABEL_102;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)self,
                                                      (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_BattleActorControl___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v40 = UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( v9 == -1 && v40 )
  {
    if ( !Component_WebViewObject )
      goto LABEL_102;
    v9 = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)Component_WebViewObject, 0LL) + 1;
  }
  v41 = v8;
  v113 = v8;
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_((UnityEngine_Component_o *)self, v8, (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_Transform____66819904);
  v47 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_Transform__bool__TypeInfo,
                                                                             v43,
                                                                             v44,
                                                                             v45,
                                                                             v46);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v47,
    (Il2CppObject *)v31,
    Method_TransformHelper___c__DisplayClass5_0__executeGetNodeFromLvName_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_Transform__bool___ctor__);
  v48 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
          (System_Func_TSource__bool__o *)v47,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_Transform___);
  v49 = *(System_String_o **)(v31 + 16);
  v50 = v48;
  IgnoreNodeList = TransformHelper__GetIgnoreNodeList(self, v49, v41, useNewRule, isIgnore, v51);
  v114 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_Transform__TypeInfo,
                                                                                                   v53,
                                                                                                   v54,
                                                                                                   v55,
                                                                                                   v56);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v114,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_Transform___ctor__);
  v116 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_Transform__TypeInfo,
                                                                                                   v57,
                                                                                                   v58,
                                                                                                   v59,
                                                                                                   v60);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v116,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_Transform___ctor__);
  if ( !v50 )
    goto LABEL_102;
  klass = v50->klass;
  if ( *(_WORD *)&v50->klass->_2.bitflags1 )
  {
    v62 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      ++v62;
      p_offset += 4;
      if ( v62 >= *(unsigned __int16 *)&v50->klass->_2.bitflags1 )
        goto LABEL_19;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_19:
    p_method = sub_AAFEF8(v50, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0LL);
  }
  v112 = self;
  v65 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v50,
          *(_QWORD *)(p_method + 8));
  if ( !v65 )
    sub_B170D4();
  while ( 1 )
  {
LABEL_22:
    v66 = *(_QWORD *)v65;
    if ( *(_WORD *)(*(_QWORD *)v65 + 298LL) )
    {
      v67 = 0LL;
      v68 = (int *)(*(_QWORD *)(v66 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v68 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v67;
        v68 += 4;
        if ( v67 >= *(unsigned __int16 *)(*(_QWORD *)v65 + 298LL) )
          goto LABEL_26;
      }
      v69 = v66 + 16LL * *v68 + 312;
    }
    else
    {
LABEL_26:
      v69 = sub_AAFEF8(v65, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v69)(v65, *(_QWORD *)(v69 + 8)) & 1) == 0 )
      break;
    v70 = *(_QWORD *)v65;
    if ( *(_WORD *)(*(_QWORD *)v65 + 298LL) )
    {
      v71 = 0LL;
      v72 = (int *)(*(_QWORD *)(v70 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v72 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        ++v71;
        v72 += 4;
        if ( v71 >= *(unsigned __int16 *)(*(_QWORD *)v65 + 298LL) )
          goto LABEL_33;
      }
      v73 = v70 + 16LL * *v72 + 312;
    }
    else
    {
LABEL_33:
      v73 = sub_AAFEF8(v65, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0LL);
    }
    v74 = (*(__int64 (__fastcall **)(__int64, _QWORD))v73)(v65, *(_QWORD *)(v73 + 8));
    v75 = (UnityEngine_Component_o *)v74;
    if ( IgnoreNodeList && (int)IgnoreNodeList->max_length >= 1 )
    {
      v76 = 0LL;
      while ( 1 )
      {
        if ( !v75 )
          sub_B170D4();
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v75, 0LL);
        if ( !gameObject )
          sub_B170D4();
        InstanceID = UnityEngine_Object__GetInstanceID(gameObject, 0LL);
        if ( (unsigned int)v76 >= IgnoreNodeList->max_length )
        {
          sub_B17100(InstanceID, v79, v80);
          sub_B170A0();
        }
        v81 = InstanceID;
        v82 = (UnityEngine_Component_o *)IgnoreNodeList->m_Items[v76];
        if ( !v82 )
          sub_B170D4();
        v83 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v82, 0LL);
        if ( !v83 )
          sub_B170D4();
        if ( v81 == UnityEngine_Object__GetInstanceID(v83, 0LL) )
          break;
        if ( (int)++v76 >= (signed int)IgnoreNodeList->max_length )
          goto LABEL_47;
      }
    }
    else
    {
      if ( !v74 )
        sub_B170D4();
LABEL_47:
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v75, 0LL);
      if ( !name )
        sub_B170D4();
      if ( !System_String__Contains(name, (System_String_o *)StringLiteral_16089, 0LL) )
      {
        v101 = v116;
        if ( !v116 )
          sub_B170D4();
        goto LABEL_66;
      }
      v85 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v75, 0LL);
      if ( !v85 )
        sub_B170D4();
      v86 = System_String__IndexOf_43816080(v85, (System_String_o *)StringLiteral_16089, 0LL);
      v87 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v75, 0LL);
      if ( !v87 )
        sub_B170D4();
      v88 = System_String__Substring(v87, v86 + 7, 0LL);
      v89 = v88;
      if ( !v88 )
        sub_B170D4();
      if ( (System_String__IndexOf_43816080(v88, (System_String_o *)StringLiteral_80, 0LL) & 0x80000000) == 0 )
      {
        v91 = System_String__IndexOf_43816080(v89, (System_String_o *)StringLiteral_80, 0LL);
        v89 = System_String__Substring_43807468(v89, 0, v91, 0LL);
      }
      v92 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v90);
      if ( !v92 )
        sub_B170D4();
      if ( !v92->max_length )
      {
        sub_B17100(v92, v92, v93);
        sub_B170A0();
      }
      v92->m_Items[2] = 95;
      if ( !v89 )
        sub_B170D4();
      v94 = System_String__Split(v89, v92, 0LL);
      v97 = v94;
      if ( !v94 )
        sub_B170D4();
      v98 = *(_QWORD *)&v94->max_length;
      if ( (int)v98 >= 1 )
      {
        v99 = 0LL;
        while ( 1 )
        {
          if ( v99 >= (unsigned int)v98 )
          {
            sub_B17100(v94, v95, v96);
            sub_B170A0();
          }
          v100 = v97->m_Items[v99];
          result = 99;
          v94 = (System_String_array *)System_Int32__TryParse(v100, &result, 0LL);
          if ( ((unsigned __int8)v94 & 1) != 0 )
          {
            v94 = (System_String_array *)System_Int32__Parse(v100, 0LL);
            if ( (_DWORD)v94 == v9 )
              break;
          }
          LODWORD(v98) = v97->max_length;
          if ( (__int64)++v99 >= (int)v98 )
            goto LABEL_22;
        }
        v101 = v114;
        if ( !v114 )
          sub_B170D4();
LABEL_66:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v101,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v75,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_Transform__Add__);
      }
    }
  }
  v102 = *(_QWORD *)v65;
  if ( *(_WORD *)(*(_QWORD *)v65 + 298LL) )
  {
    v103 = 0LL;
    v104 = (int *)(*(_QWORD *)(v102 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v104 - 1) != System_IDisposable_TypeInfo )
    {
      ++v103;
      v104 += 4;
      if ( v103 >= *(unsigned __int16 *)(*(_QWORD *)v65 + 298LL) )
        goto LABEL_73;
    }
    v105 = v102 + 16LL * *v104 + 312;
  }
  else
  {
LABEL_73:
    v105 = sub_AAFEF8(v65, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v105)(v65, *(_QWORD *)(v105 + 8));
  if ( !v114 )
LABEL_102:
    sub_B170D4();
  if ( v114->fields._size >= 1 )
    v107 = (System_Collections_Generic_List_Transform__o *)v114;
  else
    v107 = (System_Collections_Generic_List_Transform__o *)v116;
  v108 = (UnityEngine_Object_o *)TransformHelper__SelectNodeWithRule(v107, useNewRule, v106);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v109 = UnityEngine_Object__op_Equality(v108, 0LL, 0LL);
  v110 = v112;
  if ( !v109 || !v113 )
    return (UnityEngine_Transform_o *)v108;
  return v110;
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

  if ( (byte_40FB838 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, nodename);
    byte_40FB838 = 1;
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
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x22
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x19
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v29; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x19
  unsigned __int64 v33; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v36; // x0
  __int64 v37; // x19
  __int64 v38; // x8
  unsigned __int64 v39; // x10
  int *v40; // x11
  __int64 v41; // x0
  __int64 v42; // x8
  unsigned __int64 v43; // x10
  int *v44; // x11
  __int64 v45; // x0
  UnityEngine_Transform_o *v46; // x20
  __int64 v47; // x8
  unsigned __int64 v48; // x10
  int *v49; // x11
  __int64 v50; // x0

  if ( (byte_40FB83B & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_Transform____66819904, nodename);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_Transform___, v8);
    sub_B16FFC(&Method_System_Func_Transform__bool___ctor__, v9);
    sub_B16FFC(&System_Func_Transform__bool__TypeInfo, v10);
    sub_B16FFC(&System_IDisposable_TypeInfo, v11);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_Transform__TypeInfo, v12);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_Transform__TypeInfo, v13);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_B16FFC(&Method_TransformHelper___c__DisplayClass7_0__getNodeFromName_b__0__, v15);
    sub_B16FFC(&TransformHelper___c__DisplayClass7_0_TypeInfo, v16);
    byte_40FB83B = 1;
  }
  v17 = sub_B170CC(TransformHelper___c__DisplayClass7_0_TypeInfo, nodename, includeInactive, method, v4);
  TransformHelper___c__DisplayClass7_0___ctor((TransformHelper___c__DisplayClass7_0_o *)v17, 0LL);
  if ( !v17
    || (*(_QWORD *)(v17 + 16) = nodename,
        sub_B16F98(
          (BattleServantConfConponent_o *)(v17 + 16),
          (System_Int32_array **)nodename,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23),
        !self)
    || (ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_((UnityEngine_Component_o *)self, includeInactive, (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_Transform____66819904),
        v29 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                   System_Func_Transform__bool__TypeInfo,
                                                                                   v25,
                                                                                   v26,
                                                                                   v27,
                                                                                   v28),
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v29,
          (Il2CppObject *)v17,
          Method_TransformHelper___c__DisplayClass7_0__getNodeFromName_b__0__,
          (const MethodInfo_2B6AB40 *)Method_System_Func_Transform__bool___ctor__),
        (v30 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                 ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
                 (System_Func_TSource__bool__o *)v29,
                 (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_Transform___)) == 0LL) )
  {
    sub_B170D4();
  }
  klass = v30->klass;
  v32 = v30;
  if ( *(_WORD *)&v30->klass->_2.bitflags1 )
  {
    v33 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      ++v33;
      p_offset += 4;
      if ( v33 >= *(unsigned __int16 *)&v30->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_AAFEF8(v30, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0LL);
  }
  v36 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v32,
          *(_QWORD *)(p_method + 8));
  v37 = v36;
  if ( !v36 )
    sub_B170D4();
  v38 = *(_QWORD *)v36;
  if ( *(_WORD *)(*(_QWORD *)v36 + 298LL) )
  {
    v39 = 0LL;
    v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
    while ( *((System_Collections_IEnumerator_c **)v40 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      ++v39;
      v40 += 4;
      if ( v39 >= *(unsigned __int16 *)(*(_QWORD *)v36 + 298LL) )
        goto LABEL_17;
    }
    v41 = v38 + 16LL * *v40 + 312;
  }
  else
  {
LABEL_17:
    v41 = sub_AAFEF8(v36, System_Collections_IEnumerator_TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v37, *(_QWORD *)(v41 + 8)) & 1) != 0 )
  {
    v42 = *(_QWORD *)v37;
    if ( *(_WORD *)(*(_QWORD *)v37 + 298LL) )
    {
      v43 = 0LL;
      v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v44 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        ++v43;
        v44 += 4;
        if ( v43 >= *(unsigned __int16 *)(*(_QWORD *)v37 + 298LL) )
          goto LABEL_24;
      }
      v45 = v42 + 16LL * *v44 + 312;
    }
    else
    {
LABEL_24:
      v45 = sub_AAFEF8(v37, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0LL);
    }
    v46 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v45)(v37, *(_QWORD *)(v45 + 8));
  }
  else
  {
    v46 = 0LL;
  }
  if ( v37 )
  {
    v47 = *(_QWORD *)v37;
    if ( *(_WORD *)(*(_QWORD *)v37 + 298LL) )
    {
      v48 = 0LL;
      v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
      {
        ++v48;
        v49 += 4;
        if ( v48 >= *(unsigned __int16 *)(*(_QWORD *)v37 + 298LL) )
          goto LABEL_33;
      }
      v50 = v47 + 16LL * *v49 + 312;
    }
    else
    {
LABEL_33:
      v50 = sub_AAFEF8(v37, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v50)(v37, *(_QWORD *)(v50 + 8));
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
  UnityEngine_Object_o *gameObject; // x0
  System_String_o *name; // x0

  if ( !p
    || (gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)p, 0LL)) == 0LL
    || (name = UnityEngine_Object__get_name(gameObject, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  return System_String__Contains(name, this->fields.nodename, 0LL);
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
  UnityEngine_Object_o *gameObject; // x0
  System_String_o *name; // x0

  if ( !p
    || (gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)p, 0LL)) == 0LL
    || (name = UnityEngine_Object__get_name(gameObject, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  return System_String__Equals_43731072(name, this->fields.nodename, 0LL);
}