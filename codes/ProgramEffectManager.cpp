void __fastcall ProgramEffectManager___ctor(ProgramEffectManager_o *this, const MethodInfo *method)
{
  if ( (byte_4351F27 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ProgramEffectManager___ctor__);
    byte_4351F27 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2CE9C98 *)Method_SingletonMonoBehaviour_ProgramEffectManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ProgramEffectManager__Create(
        UnityEngine_GameObject_o *parent,
        UnityEngine_GameObject_o *prefab,
        UnityEngine_Vector3_o pos,
        float time,
        UnityEngine_Color_o color,
        float range,
        bool isSkip,
        bool isPause,
        const MethodInfo *method)
{
  float a; // s11
  float b; // s12
  float g; // s13
  float r; // s14
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_GameObject_o *v21; // x0
  __int64 v22; // x1
  UnityEngine_GameObject_o *v23; // x21
  ProgramEffectComponent_o *Component_srcLineSprite; // x22
  UnityEngine_Transform_o *transform; // x24
  float v26; // s0
  float v27; // s1
  float v28; // s2
  float v29; // s8
  float v30; // s9
  float v31; // s10
  const MethodInfo *v32; // x3
  UnityEngine_Vector3_o v34; // [xsp+4h] [xbp-7Ch]
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v37; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4351F20 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4351F20 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v21 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)prefab,
                                      (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v21 )
    goto LABEL_12;
  v34.fields.x = x;
  v34.fields.y = y;
  v34.fields.z = z;
  v23 = v21;
  Component_srcLineSprite = (ProgramEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          v21,
                                                          (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___);
  transform = UnityEngine_GameObject__get_transform(v23, 0LL);
  v21 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v23, 0LL);
  if ( !v21 )
    goto LABEL_12;
  *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)v21, 0LL);
  if ( !parent )
    goto LABEL_12;
  v29 = v26;
  v30 = v27;
  v31 = v28;
  v21 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_12;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)v21, 0LL);
  UnityEngine_Transform__set_localPosition(transform, v34, 0LL);
  identity = UnityEngine_Quaternion__get_identity(0LL);
  UnityEngine_Transform__set_localRotation(transform, identity, 0LL);
  v35.fields.x = v29;
  v35.fields.y = v30;
  v35.fields.z = v31;
  UnityEngine_Transform__set_localScale(transform, v35, 0LL);
  if ( !Component_srcLineSprite )
LABEL_12:
    sub_B7076C(v21, v22);
  v37.fields.r = r;
  v37.fields.g = g;
  v37.fields.b = b;
  v37.fields.a = a;
  ProgramEffectComponent__Init(Component_srcLineSprite, time, v37, range, isSkip, isPause, v32);
  return v23;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ProgramEffectManager__CreateCharaEffect(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        UnityEngine_Vector3_o pos,
        float time,
        UnityEngine_Color_o color,
        float range,
        bool isSkip,
        bool isPause,
        const MethodInfo *method)
{
  float b; // s9
  float g; // s10
  float r; // s11
  float z; // s13
  float y; // s14
  float x; // s15
  UnityEngine_Object_o *CharaEffectPrefab; // x22
  const MethodInfo *v21; // x4
  float a; // [xsp+4Ch] [xbp-24h]
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v25; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  a = color.fields.a;
  if ( (byte_4351F1F & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4351F1F = 1;
  }
  CharaEffectPrefab = (UnityEngine_Object_o *)ProgramEffectManager__GetCharaEffectPrefab(
                                                effectName,
                                                (const MethodInfo *)effectName);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(CharaEffectPrefab, 0LL, 0LL) )
    return 0LL;
  v24.fields.z = z;
  v25.fields.r = r;
  v25.fields.g = g;
  v25.fields.b = b;
  v25.fields.a = a;
  v24.fields.x = x;
  v24.fields.y = y;
  return ProgramEffectManager__Create(
           parent,
           (UnityEngine_GameObject_o *)CharaEffectPrefab,
           v24,
           time,
           v25,
           range,
           isSkip,
           isPause,
           v21);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ProgramEffectManager__CreateMainEffect(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        UnityEngine_Vector3_o pos,
        float time,
        UnityEngine_Color_o color,
        float range,
        bool isSkip,
        bool isPause,
        const MethodInfo *method)
{
  float b; // s9
  float g; // s10
  float r; // s11
  float z; // s13
  float y; // s14
  float x; // s15
  UnityEngine_Object_o *MainEffectPrefab; // x22
  const MethodInfo *v21; // x4
  float a; // [xsp+4Ch] [xbp-24h]
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v25; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  a = color.fields.a;
  if ( (byte_4351F1E & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4351F1E = 1;
  }
  MainEffectPrefab = (UnityEngine_Object_o *)ProgramEffectManager__GetMainEffectPrefab(
                                               effectName,
                                               (const MethodInfo *)effectName);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(MainEffectPrefab, 0LL, 0LL) )
    return 0LL;
  v24.fields.z = z;
  v25.fields.r = r;
  v25.fields.g = g;
  v25.fields.b = b;
  v25.fields.a = a;
  v24.fields.x = x;
  v24.fields.y = y;
  return ProgramEffectManager__Create(
           parent,
           (UnityEngine_GameObject_o *)MainEffectPrefab,
           v24,
           time,
           v25,
           range,
           isSkip,
           isPause,
           v21);
}


void __fastcall ProgramEffectManager__Destory(UnityEngine_GameObject_o *parent, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  int32_t v6; // w21
  UnityEngine_Component_o *v7; // x22
  UnityEngine_Object_o *Component_WebViewObject; // x23
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4351F25 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B70694(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4351F25 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( !parent )
    goto LABEL_16;
  transform = UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_16;
  v6 = 0;
  while ( 1 )
  {
    transform = (UnityEngine_Transform_o *)UnityEngine_Transform__get_childCount(transform, 0LL);
    if ( v6 >= (int)transform )
      break;
    transform = UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( transform )
    {
      transform = UnityEngine_Transform__GetChild(transform, v6, 0LL);
      if ( transform )
      {
        v7 = (UnityEngine_Component_o *)transform;
        Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            (UnityEngine_Component_o *)transform,
                                                            (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v7, 0LL);
          if ( !v3 )
            goto LABEL_16;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v3,
            (EventMissionProgressRequest_Argument_ProgressData_o *)transform,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
        }
        ++v6;
        transform = UnityEngine_GameObject__get_transform(parent, 0LL);
        if ( transform )
          continue;
      }
    }
    goto LABEL_16;
  }
  if ( !v3 )
LABEL_16:
    sub_B7076C(transform, v5);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v3,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v10,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v10.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36067208((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


void __fastcall ProgramEffectManager__Destory_25478240(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  int32_t v8; // w22
  UnityEngine_Component_o *v9; // x23
  WebViewObject_o *Component_WebViewObject; // x24
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4351F26 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B70694(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4351F26 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  if ( effectName )
  {
    v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v5,
      (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    if ( !parent )
      goto LABEL_19;
    transform = UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( !transform )
      goto LABEL_19;
    v8 = 0;
    while ( 1 )
    {
      transform = (UnityEngine_Transform_o *)UnityEngine_Transform__get_childCount(transform, 0LL);
      if ( v8 >= (int)transform )
        break;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( transform )
      {
        transform = UnityEngine_Transform__GetChild(transform, v8, 0LL);
        if ( transform )
        {
          v9 = (UnityEngine_Component_o *)transform;
          Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                      (UnityEngine_Component_o *)transform,
                                      (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)Component_WebViewObject,
                                                   0LL,
                                                   0LL);
          if ( ((unsigned __int8)transform & 1) != 0 )
          {
            if ( !Component_WebViewObject )
              goto LABEL_19;
            if ( System_String__Equals_44745508(
                   effectName,
                   (System_String_o *)Component_WebViewObject[3].fields.onLoaded,
                   0LL) )
            {
              transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v9, 0LL);
              if ( !v5 )
                goto LABEL_19;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v5,
                (EventMissionProgressRequest_Argument_ProgressData_o *)transform,
                (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
            }
          }
          ++v8;
          transform = UnityEngine_GameObject__get_transform(parent, 0LL);
          if ( transform )
            continue;
        }
      }
      goto LABEL_19;
    }
    if ( !v5 )
LABEL_19:
      sub_B7076C(transform, v7);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v12,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v5,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v12,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v12.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36067208((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v12,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  }
  else
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36067208((UnityEngine_Object_o *)parent, 0LL);
  }
}


ProgramEffectComponent_array *__fastcall ProgramEffectManager__Get(
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  int32_t v6; // w21
  UnityEngine_Object_o *Component_WebViewObject; // x22

  if ( (byte_4351F17 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    sub_B70694(&Method_System_Collections_Generic_List_ProgramEffectComponent__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ProgramEffectComponent__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_ProgramEffectComponent___ctor__);
    sub_B70694(&System_Collections_Generic_List_ProgramEffectComponent__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4351F17 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ProgramEffectComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ProgramEffectComponent___ctor__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_23:
      sub_B7076C(transform, v5);
    v6 = 0;
    while ( 1 )
    {
      transform = (UnityEngine_Transform_o *)UnityEngine_Transform__get_childCount(transform, 0LL);
      if ( v6 >= (int)transform )
        break;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( transform )
      {
        transform = UnityEngine_Transform__GetChild(transform, v6, 0LL);
        if ( transform )
        {
          Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              (UnityEngine_Component_o *)transform,
                                                              (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
          if ( ((unsigned __int8)transform & 1) != 0 )
          {
            if ( !v3 )
              goto LABEL_23;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v3,
              (EventMissionProgressRequest_Argument_ProgressData_o *)Component_WebViewObject,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ProgramEffectComponent__Add__);
          }
          ++v6;
          transform = UnityEngine_GameObject__get_transform(parent, 0LL);
          if ( transform )
            continue;
        }
      }
      goto LABEL_23;
    }
  }
  if ( !v3 )
    goto LABEL_23;
  return (ProgramEffectComponent_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v3,
                                           (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_ProgramEffectComponent__ToArray__);
}


UnityEngine_GameObject_o *__fastcall ProgramEffectManager__GetCharaEffectPrefab(
        System_String_o *effectName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x20
  bool v4; // w0
  UnityEngine_GameObject_o *v5; // x20
  void *Component_srcLineSprite; // x0
  __int64 v7; // x1
  __int64 v8; // x21
  int v9; // w8
  unsigned int v10; // w22
  __int64 v11; // x8
  __int64 v13; // x0

  if ( (byte_4351F1D & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__);
    byte_4351F1D = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  v5 = 0LL;
  if ( !v4 )
  {
    Component_srcLineSprite = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__);
    if ( !Component_srcLineSprite )
      goto LABEL_19;
    v8 = *((_QWORD *)Component_srcLineSprite + 4);
    if ( !v8 )
      goto LABEL_19;
    v9 = *(_DWORD *)(v8 + 24);
    if ( v9 >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        if ( v10 >= v9 )
        {
          v13 = sub_B70798(Component_srcLineSprite);
          sub_B70738(v13, 0LL);
        }
        v11 = v8 + 8LL * (int)v10;
        v5 = *(UnityEngine_GameObject_o **)(v11 + 32);
        if ( !v5 )
          break;
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    *(UnityEngine_GameObject_o **)(v11 + 32),
                                    (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___);
        if ( !Component_srcLineSprite || !effectName )
          break;
        Component_srcLineSprite = (void *)System_String__Equals_44745508(
                                            effectName,
                                            *((System_String_o **)Component_srcLineSprite + 49),
                                            0LL);
        if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
          return v5;
        v9 = *(_DWORD *)(v8 + 24);
        if ( (int)++v10 >= v9 )
          return 0LL;
      }
LABEL_19:
      sub_B7076C(Component_srcLineSprite, v7);
    }
    return 0LL;
  }
  return v5;
}


UnityEngine_GameObject_o *__fastcall ProgramEffectManager__GetMainEffectPrefab(
        System_String_o *effectName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x20
  bool v4; // w0
  UnityEngine_GameObject_o *v5; // x20
  void *Component_srcLineSprite; // x0
  __int64 v7; // x1
  __int64 v8; // x21
  int v9; // w8
  unsigned int v10; // w22
  __int64 v11; // x8
  __int64 v13; // x0

  if ( (byte_4351F1C & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__);
    byte_4351F1C = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  v5 = 0LL;
  if ( !v4 )
  {
    Component_srcLineSprite = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__);
    if ( !Component_srcLineSprite )
      goto LABEL_19;
    v8 = *((_QWORD *)Component_srcLineSprite + 3);
    if ( !v8 )
      goto LABEL_19;
    v9 = *(_DWORD *)(v8 + 24);
    if ( v9 >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        if ( v10 >= v9 )
        {
          v13 = sub_B70798(Component_srcLineSprite);
          sub_B70738(v13, 0LL);
        }
        v11 = v8 + 8LL * (int)v10;
        v5 = *(UnityEngine_GameObject_o **)(v11 + 32);
        if ( !v5 )
          break;
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    *(UnityEngine_GameObject_o **)(v11 + 32),
                                    (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___);
        if ( !Component_srcLineSprite || !effectName )
          break;
        Component_srcLineSprite = (void *)System_String__Equals_44745508(
                                            effectName,
                                            *((System_String_o **)Component_srcLineSprite + 49),
                                            0LL);
        if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
          return v5;
        v9 = *(_DWORD *)(v8 + 24);
        if ( (int)++v10 >= v9 )
          return 0LL;
      }
LABEL_19:
      sub_B7076C(Component_srcLineSprite, v7);
    }
    return 0LL;
  }
  return v5;
}


bool __fastcall ProgramEffectManager__IsBusy(UnityEngine_GameObject_o *parent, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  int32_t v5; // w20
  UnityEngine_Object_o *Component_WebViewObject; // x21

  if ( (byte_4351F18 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4351F18 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_18:
      sub_B7076C(transform, v4);
    v5 = 0;
    while ( v5 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_18;
      transform = UnityEngine_Transform__GetChild(transform, v5, 0LL);
      if ( !transform )
        goto LABEL_18;
      Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)transform,
                                                          (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL) )
        return 1;
      ++v5;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_18;
    }
  }
  return 0;
}


bool __fastcall ProgramEffectManager__IsBusy_25473324(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v6; // x1
  int32_t v7; // w21
  WebViewObject_o *Component_WebViewObject; // x22

  if ( (byte_4351F19 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4351F19 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
    return 0;
  if ( effectName )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_21:
      sub_B7076C(transform, v6);
    v7 = 0;
    while ( v7 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_21;
      transform = UnityEngine_Transform__GetChild(transform, v7, 0LL);
      if ( !transform )
        goto LABEL_21;
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)transform,
                                  (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_WebViewObject,
                                               0LL,
                                               0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !Component_WebViewObject )
          goto LABEL_21;
        if ( System_String__Equals_44745508(
               effectName,
               (System_String_o *)Component_WebViewObject[3].fields.onLoaded,
               0LL) )
        {
          return 1;
        }
      }
      ++v7;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_21;
    }
    return 0;
  }
  return ProgramEffectManager__IsBusy(parent, v6);
}


bool __fastcall ProgramEffectManager__IsStart(UnityEngine_GameObject_o *parent, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  int32_t v5; // w20
  WebViewObject_o *Component_WebViewObject; // x21

  if ( (byte_4351F1A & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4351F1A = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_20:
      sub_B7076C(transform, v4);
    v5 = 0;
    while ( v5 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_20;
      transform = UnityEngine_Transform__GetChild(transform, v5, 0LL);
      if ( !transform )
        goto LABEL_20;
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)transform,
                                  (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_WebViewObject,
                                               0LL,
                                               0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !Component_WebViewObject )
          goto LABEL_20;
        if ( !*((_BYTE *)&Component_WebViewObject[3].fields.mMarginBottom + 6) )
          return 0;
      }
      ++v5;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_20;
    }
  }
  return 1;
}


bool __fastcall ProgramEffectManager__IsStart_25474024(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v6; // x1
  int32_t v7; // w21
  WebViewObject_o *Component_WebViewObject; // x22

  if ( (byte_4351F1B & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4351F1B = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
    return 1;
  if ( effectName )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_22:
      sub_B7076C(transform, v6);
    v7 = 0;
    while ( v7 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_22;
      transform = UnityEngine_Transform__GetChild(transform, v7, 0LL);
      if ( !transform )
        goto LABEL_22;
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)transform,
                                  (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_WebViewObject,
                                               0LL,
                                               0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !Component_WebViewObject )
          goto LABEL_22;
        if ( System_String__Equals_44745508(
               effectName,
               (System_String_o *)Component_WebViewObject[3].fields.onLoaded,
               0LL)
          && !*((_BYTE *)&Component_WebViewObject[3].fields.mMarginBottom + 6) )
        {
          return 0;
        }
      }
      ++v7;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_22;
    }
    return 1;
  }
  return ProgramEffectManager__IsBusy(parent, v6);
}


void __fastcall ProgramEffectManager__Resume(UnityEngine_GameObject_o *parent, bool isSkip, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1
  int32_t v7; // w20
  _BOOL4 v8; // w21
  UnityEngine_Object_o *Component_WebViewObject; // x22

  if ( (byte_4351F21 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4351F21 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_20:
      sub_B7076C(transform, v6);
    v7 = 0;
    v8 = isSkip;
    while ( v7 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( transform )
      {
        transform = UnityEngine_Transform__GetChild(transform, v7, 0LL);
        if ( transform )
        {
          Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              (UnityEngine_Component_o *)transform,
                                                              (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
          if ( ((unsigned __int8)transform & 1) != 0 )
          {
            if ( !Component_WebViewObject )
              goto LABEL_20;
            (*(void (__fastcall **)(UnityEngine_Object_o *, _BOOL4, _QWORD))&Component_WebViewObject->klass[2]._2.thread_static_fields_offset)(
              Component_WebViewObject,
              v8,
              *(_QWORD *)&Component_WebViewObject->klass[2]._2.token);
          }
          ++v7;
          transform = UnityEngine_GameObject__get_transform(parent, 0LL);
          if ( transform )
            continue;
        }
      }
      goto LABEL_20;
    }
  }
}


void __fastcall ProgramEffectManager__Resume_25476500(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        bool isSkip,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  int32_t v10; // w22
  WebViewObject_o *Component_WebViewObject; // x23

  if ( (byte_4351F22 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4351F22 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( effectName )
    {
      if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_22:
        sub_B7076C(transform, v8);
      v10 = 0;
      while ( v10 < UnityEngine_Transform__get_childCount(transform, 0LL) )
      {
        transform = UnityEngine_GameObject__get_transform(parent, 0LL);
        if ( transform )
        {
          transform = UnityEngine_Transform__GetChild(transform, v10, 0LL);
          if ( transform )
          {
            Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                        (UnityEngine_Component_o *)transform,
                                        (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)Component_WebViewObject,
                                                     0LL,
                                                     0LL);
            if ( ((unsigned __int8)transform & 1) != 0 )
            {
              if ( !Component_WebViewObject )
                goto LABEL_22;
              if ( System_String__Equals_44745508(
                     effectName,
                     (System_String_o *)Component_WebViewObject[3].fields.onLoaded,
                     0LL) )
              {
                ((void (__fastcall *)(WebViewObject_o *, bool, _QWORD))Component_WebViewObject->klass[2]._2.genericContainerHandle)(
                  Component_WebViewObject,
                  isSkip,
                  *(_QWORD *)&Component_WebViewObject->klass[2]._2.instance_size);
              }
            }
            ++v10;
            transform = UnityEngine_GameObject__get_transform(parent, 0LL);
            if ( transform )
              continue;
          }
        }
        goto LABEL_22;
      }
    }
    else
    {
      ProgramEffectManager__Resume(parent, isSkip, v9);
    }
  }
}


void __fastcall ProgramEffectManager__Stop(UnityEngine_GameObject_o *parent, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  int32_t v5; // w20
  UnityEngine_Object_o *Component_WebViewObject; // x21

  if ( (byte_4351F23 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4351F23 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_20:
      sub_B7076C(transform, v4);
    v5 = 0;
    while ( v5 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( transform )
      {
        transform = UnityEngine_Transform__GetChild(transform, v5, 0LL);
        if ( transform )
        {
          Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              (UnityEngine_Component_o *)transform,
                                                              (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
          if ( ((unsigned __int8)transform & 1) != 0 )
          {
            if ( !Component_WebViewObject )
              goto LABEL_20;
            (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD))&Component_WebViewObject->klass[2]._2.field_count)(
              Component_WebViewObject,
              *(_QWORD *)&Component_WebViewObject->klass[2]._2.interfaces_count);
          }
          ++v5;
          transform = UnityEngine_GameObject__get_transform(parent, 0LL);
          if ( transform )
            continue;
        }
      }
      goto LABEL_20;
    }
  }
}


void __fastcall ProgramEffectManager__Stop_25477232(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v6; // x1
  int32_t v7; // w21
  WebViewObject_o *Component_WebViewObject; // x22

  if ( (byte_4351F24 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4351F24 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( effectName )
    {
      if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_22:
        sub_B7076C(transform, v6);
      v7 = 0;
      while ( v7 < UnityEngine_Transform__get_childCount(transform, 0LL) )
      {
        transform = UnityEngine_GameObject__get_transform(parent, 0LL);
        if ( transform )
        {
          transform = UnityEngine_Transform__GetChild(transform, v7, 0LL);
          if ( transform )
          {
            Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                        (UnityEngine_Component_o *)transform,
                                        (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)Component_WebViewObject,
                                                     0LL,
                                                     0LL);
            if ( ((unsigned __int8)transform & 1) != 0 )
            {
              if ( !Component_WebViewObject )
                goto LABEL_22;
              if ( System_String__Equals_44745508(
                     effectName,
                     (System_String_o *)Component_WebViewObject[3].fields.onLoaded,
                     0LL) )
              {
                (*(void (__fastcall **)(WebViewObject_o *, _QWORD))&Component_WebViewObject->klass[2]._2.element_size)(
                  Component_WebViewObject,
                  *(_QWORD *)&Component_WebViewObject->klass[2]._2.static_fields_size);
              }
            }
            ++v7;
            transform = UnityEngine_GameObject__get_transform(parent, 0LL);
            if ( transform )
              continue;
          }
        }
        goto LABEL_22;
      }
    }
    else
    {
      ProgramEffectManager__Stop(parent, v6);
    }
  }
}