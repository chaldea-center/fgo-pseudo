int32_t __fastcall TransformHelper__CalcPriority(System_String_o *objName, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_o *v11; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EAC73 & 1) == 0 )
  {
    sub_B5D5C4(&System_Text_RegularExpressions_Regex_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_15962/*"[^0-9]"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42EAC73 = 1;
  }
  result = 0;
  if ( (BYTE3(System_Text_RegularExpressions_Regex_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
  }
  v11 = System_Text_RegularExpressions_Regex__Replace(
          objName,
          (System_String_o *)StringLiteral_15962/*"[^0-9]"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  System_Int32__TryParse(v11, &result, 0LL);
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall TransformHelper__ChangeChildsLayer(
        UnityEngine_Transform_o *self,
        int32_t layer,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Component_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x1
  __int64 v13; // x3
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v19; // x3
  System_Collections_IEnumerator_c *v20; // x8
  unsigned __int64 v21; // x10
  System_Collections_IEnumerator_c **v22; // x11
  __int64 v23; // x0
  UnityEngine_Transform_o *v24; // x0
  const MethodInfo *v25; // x2
  __int64 v26; // x9
  __int64 v27; // x0
  __int64 v28; // x3
  __int64 v29; // x8
  __int64 v30; // x20
  unsigned __int64 v31; // x10
  int *v32; // x11
  __int64 v33; // x0

  v5 = (UnityEngine_Component_o *)self;
  if ( (byte_42EAC6B & 1) == 0 )
  {
    sub_B5D5C4(&System_IDisposable_TypeInfo, layer, (_DWORD)method, v3);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v6, v7, v8);
    self = (UnityEngine_Transform_o *)sub_B5D5C4(&UnityEngine_Transform_TypeInfo, v9, v10, v11);
    byte_42EAC6B = 1;
  }
  if ( !v5 || (self = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v5, 0LL)) == 0LL )
LABEL_33:
    sub_B5D69C(self, *(_QWORD *)&layer);
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)self, layer, 0LL);
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)v5, 0LL);
  if ( !Enumerator )
    sub_B5D69C(0LL, v12);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v16;
        p_offset += 4;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v13);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v21 = 0LL;
      v22 = (System_Collections_IEnumerator_c **)&v20->_1.interfaceOffsets->offset;
      while ( *(v22 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v21;
        v22 += 2;
        if ( v21 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v23 = (__int64)&v20->vtable[*(_DWORD *)v22 + 1].method;
    }
    else
    {
LABEL_17:
      v23 = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v19);
    }
    v24 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v23)(
                                       Enumerator,
                                       *(_QWORD *)(v23 + 8));
    if ( v24 )
    {
      v26 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v24->klass->_2.bitflags2 + 1) < (unsigned int)v26
        || (UnityEngine_Transform_c *)v24->klass->_2.typeHierarchy[v26 - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_B5D990(v24);
        goto LABEL_33;
      }
    }
    TransformHelper__ChangeChildsLayer(v24, layer, v25);
  }
  v27 = sub_B5D684(Enumerator, System_IDisposable_TypeInfo);
  if ( v27 )
  {
    v29 = *(_QWORD *)v27;
    v30 = v27;
    if ( *(_WORD *)(*(_QWORD *)v27 + 298LL) )
    {
      v31 = 0LL;
      v32 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
      {
        ++v31;
        v32 += 4;
        if ( v31 >= *(unsigned __int16 *)(*(_QWORD *)v27 + 298LL) )
          goto LABEL_28;
      }
      v33 = v29 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_28:
      v33 = sub_AF54C0(v27, System_IDisposable_TypeInfo, 0LL, v28);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v33)(v30, *(_QWORD *)(v33 + 8));
  }
  return layer;
}


void __fastcall TransformHelper__DestroyChildren(UnityEngine_Transform_o *self, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v14; // x1
  __int64 v15; // x3
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v21; // x3
  System_Collections_IEnumerator_c *v22; // x8
  unsigned __int64 v23; // x10
  System_Collections_IEnumerator_c **v24; // x11
  __int64 v25; // x0
  UnityEngine_Component_o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x9
  UnityEngine_Object_o *gameObject; // x20
  __int64 v30; // x0
  __int64 v31; // x3
  __int64 v32; // x8
  __int64 v33; // x19
  unsigned __int64 v34; // x10
  int *v35; // x11
  __int64 v36; // x0

  v4 = (UnityEngine_Component_o *)self;
  if ( (byte_42EAC6C & 1) == 0 )
  {
    sub_B5D5C4(&System_IDisposable_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    self = (UnityEngine_Transform_o *)sub_B5D5C4(&UnityEngine_Transform_TypeInfo, v11, v12, v13);
    byte_42EAC6C = 1;
  }
  if ( !v4 || (self = UnityEngine_Component__get_transform(v4, 0LL)) == 0LL )
    sub_B5D69C(self, method);
  Enumerator = UnityEngine_Transform__GetEnumerator(self, 0LL);
  if ( !Enumerator )
    sub_B5D69C(0LL, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v18;
        p_offset += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v15);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      v24 = (System_Collections_IEnumerator_c **)&v22->_1.interfaceOffsets->offset;
      while ( *(v24 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v23;
        v24 += 2;
        if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v25 = (__int64)&v22->vtable[*(_DWORD *)v24 + 1].method;
    }
    else
    {
LABEL_17:
      v25 = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v21);
    }
    v26 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v25)(
                                       Enumerator,
                                       *(_QWORD *)(v25 + 8));
    if ( !v26 )
      goto LABEL_36;
    v28 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v26->klass->_2.bitflags2 + 1) < (unsigned int)v28
      || (UnityEngine_Transform_c *)v26->klass->_2.typeHierarchy[v28 - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_B5D990(v26);
LABEL_36:
      sub_B5D69C(v26, v27);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v26, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
  }
  v30 = sub_B5D684(Enumerator, System_IDisposable_TypeInfo);
  if ( v30 )
  {
    v32 = *(_QWORD *)v30;
    v33 = v30;
    if ( *(_WORD *)(*(_QWORD *)v30 + 298LL) )
    {
      v34 = 0LL;
      v35 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
      {
        ++v34;
        v35 += 4;
        if ( v34 >= *(unsigned __int16 *)(*(_QWORD *)v30 + 298LL) )
          goto LABEL_31;
      }
      v36 = v32 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_31:
      v36 = sub_AF54C0(v30, System_IDisposable_TypeInfo, 0LL, v31);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v36)(v33, *(_QWORD *)(v36 + 8));
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
  UnityEngine_Object_o *NodeFromLvName; // x19

  if ( (byte_42EAC6E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)nodename, level, useNewRule);
    byte_42EAC6E = 1;
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


// local variable allocation has failed, the output may be wrong!
UnityEngine_Transform_array *__fastcall TransformHelper__GetIgnoreNodeList(
        UnityEngine_Transform_o *parentTransform,
        System_String_o *nodename,
        bool includeInactive,
        bool useNewRule,
        bool isIgnore,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v9; // x20
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  int v25; // w1
  char v26; // w2
  __int64 v27; // x3
  WarBoardControlPlayTalkUiComponent_array *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x21
  __int64 v30; // x8
  unsigned __int64 v31; // x26
  WarBoardControlPlayTalkUiComponent_o **m_Items; // x27
  bool v33; // w23
  bool v34; // w24
  UnityEngine_Object_o *v35; // x25
  UnityEngine_Object_o *Component_WebViewObject; // x25
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v38; // x6
  UnityEngine_Object_o *NodeFromLvName; // x25
  __int64 v41; // x0

  v9 = (UnityEngine_Component_o *)parentTransform;
  if ( (byte_42EAC71 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_Component_GetComponent_BattleActorControl___,
      (_DWORD)nodename,
      includeInactive,
      useNewRule);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentsInChildren_Transform____68825816, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Transform__Add__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Transform__ToArray__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Transform___ctor__, v19, v20, v21);
    sub_B5D5C4(&System_Collections_Generic_List_Transform__TypeInfo, v22, v23, v24);
    parentTransform = (UnityEngine_Transform_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v25, v26, v27);
    byte_42EAC71 = 1;
  }
  if ( !isIgnore )
    return 0LL;
  if ( !v9 )
    goto LABEL_31;
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                              v9,
                                                              1,
                                                              (const MethodInfo_1ADE6CC *)Method_UnityEngine_Component_GetComponentsInChildren_Transform____68825816);
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_Transform___ctor__);
  if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
    goto LABEL_31;
  v30 = *(_QWORD *)&ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length;
  if ( (int)v30 >= 1 )
  {
    v31 = 0LL;
    m_Items = ComponentsInChildren_WarBoardControlPlayTalkUiComponent->m_Items;
    v33 = includeInactive;
    v34 = useNewRule;
    do
    {
      if ( v31 >= (unsigned int)v30 )
      {
LABEL_30:
        v41 = sub_B5D6C8(parentTransform);
        sub_B5D668(v41, 0LL);
      }
      v35 = (UnityEngine_Object_o *)m_Items[v31];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      parentTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v9, v35, 0LL);
      if ( ((unsigned __int8)parentTransform & 1) == 0 )
      {
        if ( v31 >= ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length )
          goto LABEL_30;
        parentTransform = (UnityEngine_Transform_o *)m_Items[v31];
        if ( !parentTransform )
          goto LABEL_31;
        Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            (UnityEngine_Component_o *)parentTransform,
                                                            (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_BattleActorControl___);
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
                                                     v33,
                                                     v34,
                                                     0,
                                                     v38);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          parentTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(NodeFromLvName, 0LL, 0LL);
          if ( ((unsigned __int8)parentTransform & 1) == 0 )
          {
            if ( !v29 )
              goto LABEL_31;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v29,
              (EventMissionProgressRequest_Argument_ProgressData_o *)NodeFromLvName,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_Transform__Add__);
          }
        }
      }
      LODWORD(v30) = ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length;
    }
    while ( (__int64)++v31 < (int)v30 );
  }
  if ( !v29 )
LABEL_31:
    sub_B5D69C(parentTransform, nodename);
  return (UnityEngine_Transform_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v29,
                                          (const MethodInfo_305910C *)Method_System_Collections_Generic_List_Transform__ToArray__);
}


bool __fastcall TransformHelper__SafeSetParentNonNull(
        UnityEngine_Transform_o *self,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  __int64 v3; // x3
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
  float v18; // [xsp+48h] [xbp-18h]
  float v19; // [xsp+4Ch] [xbp-14h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42EAC6D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)parent, (_DWORD)method, v3);
    byte_42EAC6D = 1;
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
LABEL_17:
    sub_B5D69C(gameObject, v7);
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
  __int64 v3; // x3
  System_Collections_Generic_List_Transform__o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  float v18; // s8
  int32_t v19; // w22
  Il2CppObject *v20; // x21
  UnityEngine_Transform_o *v21; // x19
  _BOOL8 v22; // x0
  __int64 v23; // x1
  System_String_o *v24; // x0
  __int64 v25; // x1
  _BOOL8 v26; // x0
  __int64 v27; // x1
  System_String_o *v28; // x0
  __int64 v29; // x1
  System_String_o *v30; // x0
  const MethodInfo *v31; // x1
  System_String_o *v32; // x0
  const MethodInfo *v33; // x1
  float z; // s8
  Il2CppObject *current; // x20
  System_String_o *name; // x0
  __int64 v37; // x1
  _BOOL8 v38; // x0
  __int64 v39; // x1
  int v40; // w20
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+8h] [xbp-88h] BYREF
  int v43[2]; // [xsp+20h] [xbp-70h]
  int v44; // [xsp+28h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+30h] [xbp-60h] BYREF
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4

  v5 = tNode;
  if ( (byte_42EAC74 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_Transform__Dispose__, useNewRule, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_Transform__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Transform__GetEnumerator__, v12, v13, v14);
    tNode = (System_Collections_Generic_List_Transform__o *)sub_B5D5C4(&StringLiteral_81/*" "*/, v15, v16, v17);
    byte_42EAC74 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  v44 = 0;
  if ( !useNewRule )
  {
    z = -100.0;
    v21 = 0LL;
    if ( v5 )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v42,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v5,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_Transform__GetEnumerator__);
      v45 = v42;
      while ( 1 )
      {
        v38 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v45,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext__);
        if ( !v38 )
          break;
        current = v45.fields.current;
        if ( !v45.fields.current )
          sub_B5D69C(v38, v39);
        lossyScale = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)v45.fields.current, 0LL);
        if ( lossyScale.fields.z > z )
        {
          v51 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)current, 0LL);
          z = v51.fields.z;
          v21 = (UnityEngine_Transform_o *)current;
        }
        else
        {
          v50 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)current, 0LL);
          if ( v50.fields.z == z )
          {
            name = UnityEngine_Object__get_name((UnityEngine_Object_o *)current, 0LL);
            if ( !name )
              sub_B5D69C(0LL, v37);
            if ( !System_String__Contains(name, (System_String_o *)StringLiteral_81/*" "*/, 0LL) )
              v21 = (UnityEngine_Transform_o *)current;
          }
        }
      }
      v43[0] = 303;
      v40 = ++v44;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v45,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_Transform__Dispose__);
      if ( v40 && v43[v40 - 1] == 303 )
        v44 = v40 - 1;
      return v21;
    }
LABEL_39:
    sub_B5D69C(tNode, useNewRule);
  }
  if ( !v5 )
    goto LABEL_39;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v42,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v5,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_Transform__GetEnumerator__);
  v18 = -100.0;
  v45 = v42;
  v19 = 0;
  v20 = 0LL;
LABEL_6:
  v21 = (UnityEngine_Transform_o *)v20;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v45,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext__);
    if ( !v22 )
      break;
    v20 = v45.fields.current;
    if ( !v45.fields.current )
      sub_B5D69C(v22, v23);
    v46 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)v45.fields.current, 0LL);
    if ( v46.fields.z > v18 )
    {
      v48 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)v20, 0LL);
      v18 = v48.fields.z;
      v32 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v20, 0LL);
      v19 = TransformHelper__CalcPriority(v32, v33);
      goto LABEL_6;
    }
    v47 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)v20, 0LL);
    if ( v47.fields.z == v18 )
    {
      v24 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v20, 0LL);
      if ( !v24 )
        sub_B5D69C(0LL, v25);
      v26 = System_String__Contains(v24, (System_String_o *)StringLiteral_81/*" "*/, 0LL);
      if ( v26 )
      {
        if ( !v21 )
          sub_B5D69C(v26, v27);
        v28 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v21, 0LL);
        if ( !v28 )
          sub_B5D69C(0LL, v29);
        if ( System_String__Contains(v28, (System_String_o *)StringLiteral_81/*" "*/, 0LL) )
        {
          v30 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v20, 0LL);
          if ( v19 > TransformHelper__CalcPriority(v30, v31) )
            v20 = (Il2CppObject *)v21;
        }
        goto LABEL_6;
      }
    }
  }
  v43[0] = 303;
  v44 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v45,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_Transform__Dispose__);
  v44 = 0;
  return v21;
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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  __int64 v69; // x24
  __int64 v70; // x0
  __int64 v71; // x1
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_String_o *v78; // x0
  UnityEngine_Object_o *Component_WebViewObject; // x23
  bool v80; // w20
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v82; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v83; // x0
  System_String_o *v84; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v85; // x24
  const MethodInfo *v86; // x5
  UnityEngine_Transform_array *IgnoreNodeList; // x26
  __int64 v88; // x3
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  unsigned __int64 v90; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v93; // x1
  __int64 v94; // x3
  __int64 v95; // x24
  __int64 v96; // x8
  unsigned __int64 v97; // x10
  int *v98; // x11
  __int64 v99; // x0
  __int64 v100; // x3
  __int64 v101; // x8
  unsigned __int64 v102; // x10
  int *v103; // x11
  __int64 v104; // x0
  __int64 v105; // x0
  __int64 v106; // x1
  UnityEngine_Component_o *v107; // x27
  __int64 v108; // x20
  UnityEngine_Object_o *gameObject; // x0
  __int64 v110; // x1
  __int64 InstanceID; // x0
  __int64 v112; // x1
  int v113; // w28
  UnityEngine_Component_o *v114; // x0
  UnityEngine_Object_o *v115; // x0
  __int64 v116; // x1
  System_String_o *name; // x0
  __int64 v118; // x1
  __int64 v119; // x1
  System_String_o *v120; // x0
  __int64 v121; // x1
  int32_t v122; // w20
  System_String_o *v123; // x0
  __int64 v124; // x1
  System_String_o *v125; // x0
  __int64 v126; // x1
  System_String_o *v127; // x28
  int32_t v128; // w2
  System_Char_array *v129; // x0
  System_String_array *v130; // x0
  __int64 v131; // x1
  System_String_array *v132; // x28
  __int64 v133; // x8
  unsigned __int64 v134; // x22
  System_String_o *v135; // x20
  __int64 v136; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v137; // x0
  __int64 v138; // x8
  unsigned __int64 v139; // x10
  int *v140; // x11
  __int64 v141; // x0
  const MethodInfo *v142; // x2
  System_Collections_Generic_List_Transform__o *v143; // x0
  UnityEngine_Object_o *v144; // x21
  _BOOL4 v145; // w0
  UnityEngine_Transform_o *v146; // x8
  __int64 v148; // x0
  __int64 v149; // x0
  __int64 v150; // x0
  UnityEngine_Transform_o *v151; // [xsp+8h] [xbp-88h]
  _BOOL4 v152; // [xsp+14h] [xbp-7Ch]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v153; // [xsp+18h] [xbp-78h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v155; // [xsp+28h] [xbp-68h]
  int32_t result; // [xsp+3Ch] [xbp-54h] BYREF

  v8 = includeInactive;
  v9 = level;
  if ( (byte_42EAC70 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)nodename, level, includeInactive);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_BattleActorControl___, v12, v13, v14);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentsInChildren_Transform____68825816, v15, v16, v17);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_Transform___, v18, v19, v20);
    sub_B5D5C4(&Method_System_Func_Transform__bool___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Func_Transform__bool__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_Transform__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_Transform__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Transform__Add__, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Transform___ctor__, v42, v43, v44);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Transform__get_Count__, v45, v46, v47);
    sub_B5D5C4(&System_Collections_Generic_List_Transform__TypeInfo, v48, v49, v50);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v51, v52, v53);
    sub_B5D5C4(&Method_TransformHelper___c__DisplayClass5_0__executeGetNodeFromLvName_b__0__, v54, v55, v56);
    sub_B5D5C4(&TransformHelper___c__DisplayClass5_0_TypeInfo, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_81/*" "*/, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_16346/*"_level"*/, v63, v64, v65);
    sub_B5D5C4(&StringLiteral_1/*""*/, v66, v67, v68);
    byte_42EAC70 = 1;
  }
  result = 0;
  v69 = sub_B5D694(TransformHelper___c__DisplayClass5_0_TypeInfo);
  TransformHelper___c__DisplayClass5_0___ctor((TransformHelper___c__DisplayClass5_0_o *)v69, 0LL);
  if ( !v69 )
    goto LABEL_102;
  *(_QWORD *)(v69 + 16) = nodename;
  sub_B5D560((BattleServantConfConponent_o *)(v69 + 16), (System_Int32_array **)nodename, v72, v73, v74, v75, v76, v77);
  v78 = *(System_String_o **)(v69 + 16);
  if ( !v78 )
    return self;
  v70 = System_String__Equals_44565128(v78, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( (v70 & 1) != 0 )
    return self;
  if ( !self )
    goto LABEL_102;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)self,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_BattleActorControl___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v70 = UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( v9 == -1 && (v70 & 1) != 0 )
  {
    if ( !Component_WebViewObject )
      goto LABEL_102;
    v9 = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)Component_WebViewObject, 0LL) + 1;
  }
  v80 = v8;
  v152 = v8;
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_((UnityEngine_Component_o *)self, v8, (const MethodInfo_1ADE6CC *)Method_UnityEngine_Component_GetComponentsInChildren_Transform____68825816);
  v82 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_Transform__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v82,
    (Il2CppObject *)v69,
    Method_TransformHelper___c__DisplayClass5_0__executeGetNodeFromLvName_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_Transform__bool___ctor__);
  v83 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
          (System_Func_TSource__bool__o *)v82,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_Transform___);
  v84 = *(System_String_o **)(v69 + 16);
  v85 = v83;
  IgnoreNodeList = TransformHelper__GetIgnoreNodeList(self, v84, v80, useNewRule, isIgnore, v86);
  v153 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v153,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_Transform___ctor__);
  v155 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v155,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_Transform___ctor__);
  if ( !v85 )
    goto LABEL_102;
  klass = v85->klass;
  if ( *(_WORD *)&v85->klass->_2.bitflags1 )
  {
    v90 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      ++v90;
      p_offset += 4;
      if ( v90 >= *(unsigned __int16 *)&v85->klass->_2.bitflags1 )
        goto LABEL_19;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_19:
    p_method = sub_AF54C0(v85, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0LL, v88);
  }
  v151 = self;
  v95 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v85,
          *(_QWORD *)(p_method + 8));
  if ( !v95 )
    sub_B5D69C(0LL, v93);
  while ( 1 )
  {
LABEL_22:
    v96 = *(_QWORD *)v95;
    if ( *(_WORD *)(*(_QWORD *)v95 + 298LL) )
    {
      v97 = 0LL;
      v98 = (int *)(*(_QWORD *)(v96 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v98 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v97;
        v98 += 4;
        if ( v97 >= *(unsigned __int16 *)(*(_QWORD *)v95 + 298LL) )
          goto LABEL_26;
      }
      v99 = v96 + 16LL * *v98 + 312;
    }
    else
    {
LABEL_26:
      v99 = sub_AF54C0(v95, System_Collections_IEnumerator_TypeInfo, 0LL, v94);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v99)(v95, *(_QWORD *)(v99 + 8)) & 1) == 0 )
      break;
    v101 = *(_QWORD *)v95;
    if ( *(_WORD *)(*(_QWORD *)v95 + 298LL) )
    {
      v102 = 0LL;
      v103 = (int *)(*(_QWORD *)(v101 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v103 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        ++v102;
        v103 += 4;
        if ( v102 >= *(unsigned __int16 *)(*(_QWORD *)v95 + 298LL) )
          goto LABEL_33;
      }
      v104 = v101 + 16LL * *v103 + 312;
    }
    else
    {
LABEL_33:
      v104 = sub_AF54C0(v95, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0LL, v100);
    }
    v105 = (*(__int64 (__fastcall **)(__int64, _QWORD))v104)(v95, *(_QWORD *)(v104 + 8));
    v107 = (UnityEngine_Component_o *)v105;
    if ( IgnoreNodeList && (int)IgnoreNodeList->max_length >= 1 )
    {
      v108 = 0LL;
      while ( 1 )
      {
        if ( !v107 )
          sub_B5D69C(v105, v106);
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v107, 0LL);
        if ( !gameObject )
          sub_B5D69C(0LL, v110);
        InstanceID = UnityEngine_Object__GetInstanceID(gameObject, 0LL);
        if ( (unsigned int)v108 >= IgnoreNodeList->max_length )
        {
          v148 = sub_B5D6C8(InstanceID);
          sub_B5D668(v148, 0LL);
        }
        v113 = InstanceID;
        v114 = (UnityEngine_Component_o *)IgnoreNodeList->m_Items[v108];
        if ( !v114 )
          sub_B5D69C(0LL, v112);
        v115 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v114, 0LL);
        if ( !v115 )
          sub_B5D69C(0LL, v116);
        v105 = UnityEngine_Object__GetInstanceID(v115, 0LL);
        if ( v113 == (_DWORD)v105 )
          break;
        if ( (int)++v108 >= (signed int)IgnoreNodeList->max_length )
          goto LABEL_47;
      }
    }
    else
    {
      if ( !v105 )
        sub_B5D69C(0LL, v106);
LABEL_47:
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v107, 0LL);
      if ( !name )
        sub_B5D69C(0LL, v118);
      if ( !System_String__Contains(name, (System_String_o *)StringLiteral_16346/*"_level"*/, 0LL) )
      {
        v137 = v155;
        if ( !v155 )
          sub_B5D69C(0LL, v119);
        goto LABEL_66;
      }
      v120 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v107, 0LL);
      if ( !v120 )
        sub_B5D69C(0LL, v121);
      v122 = System_String__IndexOf_44650136(v120, (System_String_o *)StringLiteral_16346/*"_level"*/, 0LL);
      v123 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v107, 0LL);
      if ( !v123 )
        sub_B5D69C(0LL, v124);
      v125 = System_String__Substring(v123, v122 + 7, 0LL);
      v127 = v125;
      if ( !v125 )
        sub_B5D69C(0LL, v126);
      if ( (System_String__IndexOf_44650136(v125, (System_String_o *)StringLiteral_81/*" "*/, 0LL) & 0x80000000) == 0 )
      {
        v128 = System_String__IndexOf_44650136(v127, (System_String_o *)StringLiteral_81/*" "*/, 0LL);
        v127 = System_String__Substring_44641524(v127, 0, v128, 0LL);
      }
      v129 = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 1LL);
      if ( !v129 )
        sub_B5D69C(0LL, 0LL);
      if ( !v129->max_length )
      {
        v150 = sub_B5D6C8(v129);
        sub_B5D668(v150, 0LL);
      }
      v129->m_Items[2] = 95;
      if ( !v127 )
        sub_B5D69C(v129, v129);
      v130 = System_String__Split(v127, v129, 0LL);
      v132 = v130;
      if ( !v130 )
        sub_B5D69C(0LL, v131);
      v133 = *(_QWORD *)&v130->max_length;
      if ( (int)v133 >= 1 )
      {
        v134 = 0LL;
        while ( 1 )
        {
          if ( v134 >= (unsigned int)v133 )
          {
            v149 = sub_B5D6C8(v130);
            sub_B5D668(v149, 0LL);
          }
          v135 = v132->m_Items[v134];
          result = 99;
          v130 = (System_String_array *)System_Int32__TryParse(v135, &result, 0LL);
          if ( ((unsigned __int8)v130 & 1) != 0 )
          {
            v130 = (System_String_array *)System_Int32__Parse(v135, 0LL);
            if ( (_DWORD)v130 == v9 )
              break;
          }
          LODWORD(v133) = v132->max_length;
          if ( (__int64)++v134 >= (int)v133 )
            goto LABEL_22;
        }
        v137 = v153;
        if ( !v153 )
          sub_B5D69C(0LL, v136);
LABEL_66:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v137,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v107,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_Transform__Add__);
      }
    }
  }
  v138 = *(_QWORD *)v95;
  if ( *(_WORD *)(*(_QWORD *)v95 + 298LL) )
  {
    v139 = 0LL;
    v140 = (int *)(*(_QWORD *)(v138 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v140 - 1) != System_IDisposable_TypeInfo )
    {
      ++v139;
      v140 += 4;
      if ( v139 >= *(unsigned __int16 *)(*(_QWORD *)v95 + 298LL) )
        goto LABEL_73;
    }
    v141 = v138 + 16LL * *v140 + 312;
  }
  else
  {
LABEL_73:
    v141 = sub_AF54C0(v95, System_IDisposable_TypeInfo, 0LL, v100);
  }
  v70 = (*(__int64 (__fastcall **)(__int64, _QWORD))v141)(v95, *(_QWORD *)(v141 + 8));
  if ( !v153 )
LABEL_102:
    sub_B5D69C(v70, v71);
  if ( v153->fields._size >= 1 )
    v143 = (System_Collections_Generic_List_Transform__o *)v153;
  else
    v143 = (System_Collections_Generic_List_Transform__o *)v155;
  v144 = (UnityEngine_Object_o *)TransformHelper__SelectNodeWithRule(v143, useNewRule, v142);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v145 = UnityEngine_Object__op_Equality(v144, 0LL, 0LL);
  v146 = v151;
  if ( !v145 || !v152 )
    return (UnityEngine_Transform_o *)v144;
  return v146;
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
  UnityEngine_Transform_o *NodeFromLvName; // x23
  const MethodInfo *v11; // x6

  if ( (byte_42EAC6F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)nodename, level, useNewRule);
    byte_42EAC6F = 1;
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  int v25; // w1
  char v26; // w2
  __int64 v27; // x3
  int v28; // w1
  char v29; // w2
  __int64 v30; // x3
  int v31; // w1
  char v32; // w2
  __int64 v33; // x3
  __int64 v34; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  __int64 v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v44; // x20
  __int64 v45; // x3
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x19
  unsigned __int64 v48; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v51; // x0
  __int64 v52; // x1
  __int64 v53; // x3
  __int64 v54; // x19
  __int64 v55; // x8
  unsigned __int64 v56; // x10
  int *v57; // x11
  __int64 v58; // x0
  __int64 v59; // x3
  __int64 v60; // x8
  unsigned __int64 v61; // x10
  int *v62; // x11
  __int64 v63; // x0
  UnityEngine_Transform_o *v64; // x20
  __int64 v65; // x8
  unsigned __int64 v66; // x10
  int *v67; // x11
  __int64 v68; // x0

  if ( (byte_42EAC72 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_Component_GetComponentsInChildren_Transform____68825816,
      (_DWORD)nodename,
      includeInactive,
      method);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_Transform___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Func_Transform__bool___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Func_Transform__bool__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_Transform__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_Transform__TypeInfo, v22, v23, v24);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_TransformHelper___c__DisplayClass7_0__getNodeFromName_b__0__, v28, v29, v30);
    sub_B5D5C4(&TransformHelper___c__DisplayClass7_0_TypeInfo, v31, v32, v33);
    byte_42EAC72 = 1;
  }
  v34 = sub_B5D694(TransformHelper___c__DisplayClass7_0_TypeInfo);
  TransformHelper___c__DisplayClass7_0___ctor((TransformHelper___c__DisplayClass7_0_o *)v34, 0LL);
  if ( !v34
    || (*(_QWORD *)(v34 + 16) = nodename,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v34 + 16),
          (System_Int32_array **)nodename,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42),
        !self)
    || (ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_((UnityEngine_Component_o *)self, includeInactive, (const MethodInfo_1ADE6CC *)Method_UnityEngine_Component_GetComponentsInChildren_Transform____68825816),
        v44 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_Transform__bool__TypeInfo),
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v44,
          (Il2CppObject *)v34,
          Method_TransformHelper___c__DisplayClass7_0__getNodeFromName_b__0__,
          (const MethodInfo_2C2ECD0 *)Method_System_Func_Transform__bool___ctor__),
        (v35 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                 ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
                 (System_Func_TSource__bool__o *)v44,
                 (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_Transform___)) == 0LL) )
  {
    sub_B5D69C(v35, v36);
  }
  klass = v35->klass;
  v47 = v35;
  if ( *(_WORD *)&v35->klass->_2.bitflags1 )
  {
    v48 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      ++v48;
      p_offset += 4;
      if ( v48 >= *(unsigned __int16 *)&v35->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_AF54C0(v35, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0LL, v45);
  }
  v51 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v47,
          *(_QWORD *)(p_method + 8));
  v54 = v51;
  if ( !v51 )
    sub_B5D69C(0LL, v52);
  v55 = *(_QWORD *)v51;
  if ( *(_WORD *)(*(_QWORD *)v51 + 298LL) )
  {
    v56 = 0LL;
    v57 = (int *)(*(_QWORD *)(v55 + 176) + 8LL);
    while ( *((System_Collections_IEnumerator_c **)v57 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      ++v56;
      v57 += 4;
      if ( v56 >= *(unsigned __int16 *)(*(_QWORD *)v51 + 298LL) )
        goto LABEL_17;
    }
    v58 = v55 + 16LL * *v57 + 312;
  }
  else
  {
LABEL_17:
    v58 = sub_AF54C0(v51, System_Collections_IEnumerator_TypeInfo, 0LL, v53);
  }
  if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v58)(v54, *(_QWORD *)(v58 + 8)) & 1) != 0 )
  {
    v60 = *(_QWORD *)v54;
    if ( *(_WORD *)(*(_QWORD *)v54 + 298LL) )
    {
      v61 = 0LL;
      v62 = (int *)(*(_QWORD *)(v60 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v62 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        ++v61;
        v62 += 4;
        if ( v61 >= *(unsigned __int16 *)(*(_QWORD *)v54 + 298LL) )
          goto LABEL_24;
      }
      v63 = v60 + 16LL * *v62 + 312;
    }
    else
    {
LABEL_24:
      v63 = sub_AF54C0(v54, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0LL, v59);
    }
    v64 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v63)(v54, *(_QWORD *)(v63 + 8));
  }
  else
  {
    v64 = 0LL;
  }
  if ( v54 )
  {
    v65 = *(_QWORD *)v54;
    if ( *(_WORD *)(*(_QWORD *)v54 + 298LL) )
    {
      v66 = 0LL;
      v67 = (int *)(*(_QWORD *)(v65 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
      {
        ++v66;
        v67 += 4;
        if ( v66 >= *(unsigned __int16 *)(*(_QWORD *)v54 + 298LL) )
          goto LABEL_33;
      }
      v68 = v65 + 16LL * *v67 + 312;
    }
    else
    {
LABEL_33:
      v68 = sub_AF54C0(v54, System_IDisposable_TypeInfo, 0LL, v59);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v68)(v54, *(_QWORD *)(v68 + 8));
  }
  return v64;
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
    sub_B5D69C(this, p);
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
    sub_B5D69C(this, p);
  }
  return System_String__Equals_44565128((System_String_o *)this, v3->fields.nodename, 0LL);
}