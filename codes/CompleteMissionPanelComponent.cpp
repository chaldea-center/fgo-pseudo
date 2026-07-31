void CompleteMissionPanelComponent___ctor(CompleteMissionPanelComponent_o *this, const MethodInfo *method)
{
  this->fields.panelCount = 16;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void CompleteMissionPanelComponent__Awake(CompleteMissionPanelComponent_o *this, const MethodInfo *method)
{
  int32_t panelCount; // w20
  void *transform; // x0
  __int64 v5; // x1
  int32_t childCount; // w0
  unsigned int v7; // w9
  __int64 v8; // x20
  struct UnityEngine_Transform_array *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  unsigned __int64 v16; // x21
  __int64 v17; // x23
  unsigned int *cachedPanelTransforms; // x24
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  void *v25; // x22
  __int64 v26; // x1
  CompleteMissionSprite_o *completeMissionFrameSprite; // x19
  __int64 v28; // x8
  const MethodInfo *v29; // x2
  __int64 v30; // x0

  if ( (byte_593706F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&UnityEngine_Transform___TypeInfo);
    byte_593706F = 1;
  }
  panelCount = this->fields.panelCount;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_24;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0);
  if ( panelCount >= childCount )
    v7 = childCount;
  else
    v7 = panelCount;
  if ( panelCount >= 0 )
    v8 = v7;
  else
    v8 = 0;
  v9 = (struct UnityEngine_Transform_array *)sub_21FFD10(UnityEngine_Transform___TypeInfo, (unsigned int)v8);
  this->fields.cachedPanelTransforms = v9;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.cachedPanelTransforms,
    (int32_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  if ( (int)v8 >= 1 )
  {
    v16 = 0;
    v17 = 8;
    while ( 1 )
    {
      cachedPanelTransforms = (unsigned int *)this->fields.cachedPanelTransforms;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !transform )
        break;
      transform = UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)transform, v16, 0);
      if ( !cachedPanelTransforms )
        break;
      v25 = transform;
      if ( transform )
      {
        transform = (void *)sub_21FFDA4(transform, *(_QWORD *)(*(_QWORD *)cachedPanelTransforms + 64LL));
        if ( !transform )
        {
          v30 = sub_21FFEF0(0, v26);
          sub_21FFD90(v30, 0);
        }
      }
      if ( v16 >= cachedPanelTransforms[6] )
        sub_21FFED4(transform);
      *(_QWORD *)&cachedPanelTransforms[v17] = v25;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&cachedPanelTransforms[v17],
        (int32_t)v25,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      ++v16;
      v17 += 2;
      if ( v8 == v16 )
        goto LABEL_18;
    }
LABEL_24:
    sub_21FFECC(transform, v5);
  }
LABEL_18:
  completeMissionFrameSprite = this->fields.completeMissionFrameSprite;
  transform = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !transform )
    goto LABEL_24;
  v28 = *((_QWORD *)transform + 173);
  if ( !v28 )
    goto LABEL_24;
  transform = *(void **)(v28 + 136);
  if ( !transform )
    goto LABEL_24;
  transform = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)transform,
                0,
                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
  if ( !transform || !completeMissionFrameSprite )
    goto LABEL_24;
  CompleteMissionSprite__InitFrame(completeMissionFrameSprite, *((_DWORD *)transform + 7), v29);
}


void CompleteMissionPanelComponent__MoveMissionBoard(
        CompleteMissionPanelComponent_o *this,
        int32_t dispNum,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x3
  _QWORD *monitor; // x8
  __int64 v10; // x8
  EventMissionEntity_o *v11; // x0
  EventMissionEntity_o *v12; // x19
  const MethodInfo *v13; // x3
  _QWORD *v14; // x8
  UnityEngine_Transform_o *panel; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5937070 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5937070 = 1;
  }
  panel = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  monitor = Instance[86].monitor;
  if ( !monitor )
    goto LABEL_16;
  v10 = monitor[17];
  if ( !v10 )
    goto LABEL_16;
  if ( dispNum >= 1 && *(_DWORD *)(v10 + 24) >= dispNum )
  {
    if ( dispNum == 1
      || (Instance = (Il2CppObject *)CompleteMissionPanelComponent__TryGetPanelTransformByIndex(
                                       this,
                                       dispNum - 2,
                                       &panel,
                                       v8),
          ((unsigned __int8)Instance & 1) != 0) )
    {
      v11 = CompleteMissionPanelComponent__targetCompleteMissionId(
              (CompleteMissionPanelComponent_o *)Instance,
              dispNum,
              v7);
      if ( v11 )
      {
        v12 = v11;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( Instance )
        {
          v14 = Instance[86].monitor;
          if ( v14 )
          {
            Instance = (Il2CppObject *)v14[10];
            if ( Instance )
            {
              CompleteMissionListViewManager__moveSelectCompleteMissionInfo(
                (CompleteMissionListViewManager_o *)Instance,
                v12->fields.id,
                0,
                v13);
              return;
            }
          }
        }
LABEL_16:
        sub_21FFECC(Instance, v6);
      }
    }
  }
}


void CompleteMissionPanelComponent__OnClickPanel(
        CompleteMissionPanelComponent_o *this,
        UnityEngine_GameObject_o *DispNum,
        const MethodInfo *method)
{
  System_String_o *name; // x0
  int32_t v5; // w1
  const MethodInfo *v6; // x2

  if ( !DispNum )
    sub_21FFECC(this, 0);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)DispNum, 0);
  v5 = System_Int32__Parse(name, 0);
  CompleteMissionPanelComponent__MoveMissionBoard(this, v5, v6);
}


void CompleteMissionPanelComponent__OnDestroy(CompleteMissionPanelComponent_o *this, const MethodInfo *method)
{
  CompleteMissionSprite_o *completeMissionFrameSprite; // x0

  completeMissionFrameSprite = this->fields.completeMissionFrameSprite;
  if ( !completeMissionFrameSprite )
    sub_21FFECC(0, method);
  CompleteMissionSprite__ReleaseEventUI(completeMissionFrameSprite, method);
}


// local variable allocation has failed, the output may be wrong!
bool CompleteMissionPanelComponent__TryGetChild(
        CompleteMissionPanelComponent_o *this,
        UnityEngine_Transform_o *parent,
        int32_t index,
        UnityEngine_Transform_o **child,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v11; // x1
  __int64 v12; // x2
  _BOOL8 v13; // x0
  __int64 v14; // x1
  UnityEngine_Transform_o *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x1
  __int64 v23; // x2
  UnityEngine_Object_o *v24; // x19

  if ( (byte_5937073 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937073 = 1;
  }
  *child = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)child,
    0,
    *(System_String_o **)&index,
    (System_String_o *)child,
    (int32_t)method,
    v5,
    v6,
    v7);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
  v13 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0, 0);
  if ( index < 0 || v13 )
    return 0;
  if ( !parent )
    sub_21FFECC(v13, v14);
  if ( UnityEngine_Transform__get_childCount(parent, 0) <= index )
    return 0;
  v15 = UnityEngine_Transform__GetChild(parent, index, 0);
  *child = v15;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)child, (int32_t)v15, v16, v17, v18, v19, v20, v21);
  v24 = (UnityEngine_Object_o *)*child;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22, v23);
  return UnityEngine_Object__op_Inequality(v24, 0, 0);
}


bool CompleteMissionPanelComponent__TryGetPanelChildComponent_object_(
        CompleteMissionPanelComponent_o *this,
        int32_t index,
        int32_t childIndex,
        Il2CppObject **component,
        const MethodInfo_37ED578 *method)
{
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x1
  Il2CppObject *v19; // x19
  UnityEngine_Component_o *v22; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Transform_o *panel; // [xsp+8h] [xbp-38h] BYREF

  if ( !method->rgctx_data )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      sub_2237B54();
  }
  v22 = 0;
  panel = 0;
  *component = 0;
  if ( CompleteMissionPanelComponent__TryGetPanelTransformByIndex(this, index, &panel, 0)
    && CompleteMissionPanelComponent__TryGetChild(this, panel, childIndex, (UnityEngine_Transform_o **)&v22, 0) )
  {
    if ( !v22 )
      sub_21FFECC(0, v10);
    Component_object = UnityEngine_Component__GetComponent_object_(
                         v22,
                         (const MethodInfo_37ED7E0 *)method->rgctx_data->_2_UnityEngine_Component_GetComponent_T_);
    *component = Component_object;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)component, (int32_t)Component_object, v12, v13, v14, v15, v16, v17);
    v19 = *component;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0, 0);
  }
  else
  {
    return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool CompleteMissionPanelComponent__TryGetPanelChildGameObject(
        CompleteMissionPanelComponent_o *this,
        int32_t index,
        int32_t childIndex,
        UnityEngine_GameObject_o **childGameObject,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v12; // x3
  _BOOL8 PanelTransformByIndex; // x0
  const MethodInfo *v14; // x4
  __int64 v15; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_Object_o *v25; // x19
  UnityEngine_Component_o *v28; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Transform_o *panel; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5937072 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937072 = 1;
  }
  v28 = 0;
  panel = 0;
  *childGameObject = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)childGameObject,
    0,
    *(System_String_o **)&childIndex,
    (System_String_o *)childGameObject,
    (int32_t)method,
    v5,
    v6,
    v7);
  PanelTransformByIndex = CompleteMissionPanelComponent__TryGetPanelTransformByIndex(this, index, &panel, v12);
  if ( PanelTransformByIndex
    && CompleteMissionPanelComponent__TryGetChild(
         (CompleteMissionPanelComponent_o *)PanelTransformByIndex,
         panel,
         childIndex,
         (UnityEngine_Transform_o **)&v28,
         v14) )
  {
    if ( !v28 )
      sub_21FFECC(0, v15);
    gameObject = UnityEngine_Component__get_gameObject(v28, 0);
    *childGameObject = gameObject;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)childGameObject, (int32_t)gameObject, v17, v18, v19, v20, v21, v22);
    v25 = (UnityEngine_Object_o *)*childGameObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23, v24);
    return UnityEngine_Object__op_Inequality(v25, 0, 0);
  }
  else
  {
    return 0;
  }
}


bool CompleteMissionPanelComponent__TryGetPanelEffectChildComponent_object_(
        CompleteMissionPanelComponent_o *this,
        int32_t index,
        int32_t effectPanelChildIndex,
        int32_t adjustChildIndex,
        int32_t rowlingPanelChildIndex,
        int32_t childIndex,
        Il2CppObject **component,
        const MethodInfo_37ED670 *method)
{
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x1
  Il2CppObject *v25; // x19
  UnityEngine_Component_o *v28; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Transform_o *v29; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Transform_o *parent; // [xsp+10h] [xbp-60h] BYREF
  UnityEngine_Transform_o *child; // [xsp+18h] [xbp-58h] BYREF
  UnityEngine_Transform_o *panel; // [xsp+28h] [xbp-48h] BYREF

  if ( !method->rgctx_data )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      sub_2237B54();
  }
  panel = 0;
  parent = 0;
  child = 0;
  v28 = 0;
  v29 = 0;
  *component = 0;
  if ( CompleteMissionPanelComponent__TryGetPanelTransformByIndex(this, index, &panel, 0)
    && CompleteMissionPanelComponent__TryGetChild(this, panel, effectPanelChildIndex, &child, 0)
    && CompleteMissionPanelComponent__TryGetChild(this, child, adjustChildIndex, &parent, 0)
    && CompleteMissionPanelComponent__TryGetChild(this, parent, rowlingPanelChildIndex, &v29, 0)
    && CompleteMissionPanelComponent__TryGetChild(this, v29, childIndex, (UnityEngine_Transform_o **)&v28, 0) )
  {
    if ( !v28 )
      sub_21FFECC(0, v16);
    Component_object = UnityEngine_Component__GetComponent_object_(
                         v28,
                         (const MethodInfo_37ED7E0 *)method->rgctx_data->_2_UnityEngine_Component_GetComponent_T_);
    *component = Component_object;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)component, (int32_t)Component_object, v18, v19, v20, v21, v22, v23);
    v25 = *component;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v25, 0, 0);
  }
  else
  {
    return 0;
  }
}


bool CompleteMissionPanelComponent__TryGetPanelTransformByDispNo(
        CompleteMissionPanelComponent_o *this,
        int32_t dispNo,
        UnityEngine_Transform_o **panel,
        const MethodInfo *method)
{
  return CompleteMissionPanelComponent__TryGetPanelTransformByIndex(this, dispNo - 2, panel, method);
}


bool CompleteMissionPanelComponent__TryGetPanelTransformByIndex(
        CompleteMissionPanelComponent_o *this,
        int32_t index,
        UnityEngine_Transform_o **panel,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct UnityEngine_Transform_array *cachedPanelTransforms; // x8
  UnityEngine_Transform_o *v18; // x1
  __int64 v19; // x1
  __int64 v20; // x2
  UnityEngine_Object_o *v21; // x19

  if ( (byte_5937071 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937071 = 1;
  }
  *panel = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)panel,
    0,
    (System_String_o *)panel,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  if ( index < 0 )
    return 0;
  cachedPanelTransforms = this->fields.cachedPanelTransforms;
  if ( !cachedPanelTransforms || SLODWORD(cachedPanelTransforms->max_length) <= index )
    return 0;
  v18 = cachedPanelTransforms->m_Items[index];
  *panel = v18;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)panel, (int32_t)v18, v11, v12, v13, v14, v15, v16);
  v21 = (UnityEngine_Object_o *)*panel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v20);
  return UnityEngine_Object__op_Inequality(v21, 0, 0);
}


int32_t CompleteMissionPanelComponent__get_PanelCount(CompleteMissionPanelComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_array *cachedPanelTransforms; // x8

  cachedPanelTransforms = this->fields.cachedPanelTransforms;
  if ( cachedPanelTransforms )
    return cachedPanelTransforms->max_length;
  else
    return 0;
}


EventMissionEntity_o *CompleteMissionPanelComponent__targetCompleteMissionId(
        CompleteMissionPanelComponent_o *this,
        int32_t dispNum,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  void *monitor; // x8
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *current; // x20
  __int64 v11; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_object__o *v12; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5937074 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5937074 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (monitor = Instance[86].monitor) == 0 || (Instance = (Il2CppObject *)*((_QWORD *)monitor + 17)) == 0 )
    sub_21FFECC(Instance, v5);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
  v11 = 0;
  v12 = &v13;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__);
    if ( !v7 )
      break;
    current = v13.fields._current;
    if ( !v13.fields._current )
      sub_21FFECC(v7, v8);
    if ( *(_DWORD *)((char *)&v13.fields._current->klass + (unsigned __int64)&qword_20) == dispNum )
      goto LABEL_12;
  }
  current = 0;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
  return (EventMissionEntity_o *)current;
}