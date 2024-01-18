void __fastcall ProgramEffectManager___ctor(ProgramEffectManager_o *this, const MethodInfo *method)
{
  if ( (byte_4187A6D & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ProgramEffectManager___ctor__, method);
    byte_4187A6D = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_28419D4 *)Method_SingletonMonoBehaviour_ProgramEffectManager___ctor__);
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
  __int64 v21; // x1
  __int64 v22; // x1
  UnityEngine_GameObject_o *v23; // x0
  __int64 v24; // x1
  UnityEngine_GameObject_o *v25; // x21
  ProgramEffectComponent_o *Component_srcLineSprite; // x22
  UnityEngine_Transform_o *transform; // x24
  float v28; // s0
  float v29; // s1
  float v30; // s2
  float v31; // s8
  float v32; // s9
  float v33; // s10
  const MethodInfo *v34; // x3
  UnityEngine_Vector3_o v36; // [xsp+4h] [xbp-7Ch]
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v39; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4187A66 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___, prefab);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v21);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v22);
    byte_4187A66 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v23 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)prefab,
                                      (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v23 )
    goto LABEL_12;
  v36.fields.x = x;
  v36.fields.y = y;
  v36.fields.z = z;
  v25 = v23;
  Component_srcLineSprite = (ProgramEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          v23,
                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___);
  transform = UnityEngine_GameObject__get_transform(v25, 0LL);
  v23 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v25, 0LL);
  if ( !v23 )
    goto LABEL_12;
  *(UnityEngine_Vector3_o *)&v28 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)v23, 0LL);
  if ( !parent )
    goto LABEL_12;
  v31 = v28;
  v32 = v29;
  v33 = v30;
  v23 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_12;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)v23, 0LL);
  UnityEngine_Transform__set_localPosition(transform, v36, 0LL);
  identity = UnityEngine_Quaternion__get_identity(0LL);
  UnityEngine_Transform__set_localRotation(transform, identity, 0LL);
  v37.fields.x = v31;
  v37.fields.y = v32;
  v37.fields.z = v33;
  UnityEngine_Transform__set_localScale(transform, v37, 0LL);
  if ( !Component_srcLineSprite )
LABEL_12:
    sub_B2C434(v23, v24);
  v39.fields.r = r;
  v39.fields.g = g;
  v39.fields.b = b;
  v39.fields.a = a;
  ProgramEffectComponent__Init(Component_srcLineSprite, time, v39, range, isSkip, isPause, v34);
  return v25;
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
  if ( (byte_4187A65 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, effectName);
    byte_4187A65 = 1;
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
  if ( (byte_4187A64 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, effectName);
    byte_4187A64 = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v13; // x1
  int32_t v14; // w21
  UnityEngine_Component_o *v15; // x22
  UnityEngine_Object_o *Component_WebViewObject; // x23
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4187A6B & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_4187A6B = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( !parent )
    goto LABEL_16;
  transform = UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_16;
  v14 = 0;
  while ( 1 )
  {
    transform = (UnityEngine_Transform_o *)UnityEngine_Transform__get_childCount(transform, 0LL);
    if ( v14 >= (int)transform )
      break;
    transform = UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( transform )
    {
      transform = UnityEngine_Transform__GetChild(transform, v14, 0LL);
      if ( transform )
      {
        v15 = (UnityEngine_Component_o *)transform;
        Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            (UnityEngine_Component_o *)transform,
                                                            (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v15, 0LL);
          if ( !v11 )
            goto LABEL_16;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v11,
            (EventMissionProgressRequest_Argument_ProgressData_o *)transform,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
        }
        ++v14;
        transform = UnityEngine_GameObject__get_transform(parent, 0LL);
        if ( transform )
          continue;
      }
    }
    goto LABEL_16;
  }
  if ( !v11 )
LABEL_16:
    sub_B2C434(transform, v13);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v11,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v18.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


void __fastcall ProgramEffectManager__Destory_25208488(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x21
  UnityEngine_Transform_o *transform; // x0
  __int64 v15; // x1
  int32_t v16; // w22
  UnityEngine_Component_o *v17; // x23
  WebViewObject_o *Component_WebViewObject; // x24
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4187A6C & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, effectName);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    byte_4187A6C = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( effectName )
  {
    v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v13,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
    if ( !parent )
      goto LABEL_19;
    transform = UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( !transform )
      goto LABEL_19;
    v16 = 0;
    while ( 1 )
    {
      transform = (UnityEngine_Transform_o *)UnityEngine_Transform__get_childCount(transform, 0LL);
      if ( v16 >= (int)transform )
        break;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( transform )
      {
        transform = UnityEngine_Transform__GetChild(transform, v16, 0LL);
        if ( transform )
        {
          v17 = (UnityEngine_Component_o *)transform;
          Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                      (UnityEngine_Component_o *)transform,
                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
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
            if ( System_String__Equals_44292872(
                   effectName,
                   (System_String_o *)Component_WebViewObject[3].fields.onLoaded,
                   0LL) )
            {
              transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v17, 0LL);
              if ( !v13 )
                goto LABEL_19;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v13,
                (EventMissionProgressRequest_Argument_ProgressData_o *)transform,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
            }
          }
          ++v16;
          transform = UnityEngine_GameObject__get_transform(parent, 0LL);
          if ( transform )
            continue;
        }
      }
      goto LABEL_19;
    }
    if ( !v13 )
LABEL_19:
      sub_B2C434(transform, v15);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v13,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v20.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35314896((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  }
  else
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896((UnityEngine_Object_o *)parent, 0LL);
  }
}


ProgramEffectComponent_array *__fastcall ProgramEffectManager__Get(
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v10; // x1
  int32_t v11; // w21
  UnityEngine_Object_o *Component_WebViewObject; // x22

  if ( (byte_4187A5D & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ProgramEffectComponent__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ProgramEffectComponent__ToArray__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ProgramEffectComponent___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_List_ProgramEffectComponent__TypeInfo, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_4187A5D = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ProgramEffectComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ProgramEffectComponent___ctor__);
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
      sub_B2C434(transform, v10);
    v11 = 0;
    while ( 1 )
    {
      transform = (UnityEngine_Transform_o *)UnityEngine_Transform__get_childCount(transform, 0LL);
      if ( v11 >= (int)transform )
        break;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( transform )
      {
        transform = UnityEngine_Transform__GetChild(transform, v11, 0LL);
        if ( transform )
        {
          Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              (UnityEngine_Component_o *)transform,
                                                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
          if ( ((unsigned __int8)transform & 1) != 0 )
          {
            if ( !v8 )
              goto LABEL_23;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v8,
              (EventMissionProgressRequest_Argument_ProgressData_o *)Component_WebViewObject,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ProgramEffectComponent__Add__);
          }
          ++v11;
          transform = UnityEngine_GameObject__get_transform(parent, 0LL);
          if ( transform )
            continue;
        }
      }
      goto LABEL_23;
    }
  }
  if ( !v8 )
    goto LABEL_23;
  return (ProgramEffectComponent_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                           (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ProgramEffectComponent__ToArray__);
}


UnityEngine_GameObject_o *__fastcall ProgramEffectManager__GetCharaEffectPrefab(
        System_String_o *effectName,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *Instance; // x20
  bool v6; // w0
  UnityEngine_GameObject_o *v7; // x20
  void *Component_srcLineSprite; // x0
  __int64 v9; // x1
  __int64 v10; // x21
  int v11; // w8
  unsigned int v12; // w22
  __int64 v13; // x8
  __int64 v15; // x0

  if ( (byte_4187A63 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__, v4);
    byte_4187A63 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  v7 = 0LL;
  if ( !v6 )
  {
    Component_srcLineSprite = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__);
    if ( !Component_srcLineSprite )
      goto LABEL_19;
    v10 = *((_QWORD *)Component_srcLineSprite + 4);
    if ( !v10 )
      goto LABEL_19;
    v11 = *(_DWORD *)(v10 + 24);
    if ( v11 >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        if ( v12 >= v11 )
        {
          v15 = sub_B2C460(Component_srcLineSprite);
          sub_B2C400(v15, 0LL);
        }
        v13 = v10 + 8LL * (int)v12;
        v7 = *(UnityEngine_GameObject_o **)(v13 + 32);
        if ( !v7 )
          break;
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    *(UnityEngine_GameObject_o **)(v13 + 32),
                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___);
        if ( !Component_srcLineSprite || !effectName )
          break;
        Component_srcLineSprite = (void *)System_String__Equals_44292872(
                                            effectName,
                                            *((System_String_o **)Component_srcLineSprite + 49),
                                            0LL);
        if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
          return v7;
        v11 = *(_DWORD *)(v10 + 24);
        if ( (int)++v12 >= v11 )
          return 0LL;
      }
LABEL_19:
      sub_B2C434(Component_srcLineSprite, v9);
    }
    return 0LL;
  }
  return v7;
}


UnityEngine_GameObject_o *__fastcall ProgramEffectManager__GetMainEffectPrefab(
        System_String_o *effectName,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *Instance; // x20
  bool v6; // w0
  UnityEngine_GameObject_o *v7; // x20
  void *Component_srcLineSprite; // x0
  __int64 v9; // x1
  __int64 v10; // x21
  int v11; // w8
  unsigned int v12; // w22
  __int64 v13; // x8
  __int64 v15; // x0

  if ( (byte_4187A62 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__, v4);
    byte_4187A62 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  v7 = 0LL;
  if ( !v6 )
  {
    Component_srcLineSprite = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__);
    if ( !Component_srcLineSprite )
      goto LABEL_19;
    v10 = *((_QWORD *)Component_srcLineSprite + 3);
    if ( !v10 )
      goto LABEL_19;
    v11 = *(_DWORD *)(v10 + 24);
    if ( v11 >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        if ( v12 >= v11 )
        {
          v15 = sub_B2C460(Component_srcLineSprite);
          sub_B2C400(v15, 0LL);
        }
        v13 = v10 + 8LL * (int)v12;
        v7 = *(UnityEngine_GameObject_o **)(v13 + 32);
        if ( !v7 )
          break;
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    *(UnityEngine_GameObject_o **)(v13 + 32),
                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___);
        if ( !Component_srcLineSprite || !effectName )
          break;
        Component_srcLineSprite = (void *)System_String__Equals_44292872(
                                            effectName,
                                            *((System_String_o **)Component_srcLineSprite + 49),
                                            0LL);
        if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
          return v7;
        v11 = *(_DWORD *)(v10 + 24);
        if ( (int)++v12 >= v11 )
          return 0LL;
      }
LABEL_19:
      sub_B2C434(Component_srcLineSprite, v9);
    }
    return 0LL;
  }
  return v7;
}


bool __fastcall ProgramEffectManager__IsBusy(UnityEngine_GameObject_o *parent, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  int32_t v6; // w20
  UnityEngine_Object_o *Component_WebViewObject; // x21

  if ( (byte_4187A5E & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4187A5E = 1;
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
      sub_B2C434(transform, v5);
    v6 = 0;
    while ( v6 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_18;
      transform = UnityEngine_Transform__GetChild(transform, v6, 0LL);
      if ( !transform )
        goto LABEL_18;
      Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)transform,
                                                          (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL) )
        return 1;
      ++v6;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_18;
    }
  }
  return 0;
}


bool __fastcall ProgramEffectManager__IsBusy_25203572(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w21
  WebViewObject_o *Component_WebViewObject; // x22

  if ( (byte_4187A5F & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, effectName);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_4187A5F = 1;
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
      sub_B2C434(transform, v7);
    v8 = 0;
    while ( v8 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_21;
      transform = UnityEngine_Transform__GetChild(transform, v8, 0LL);
      if ( !transform )
        goto LABEL_21;
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)transform,
                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
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
        if ( System_String__Equals_44292872(
               effectName,
               (System_String_o *)Component_WebViewObject[3].fields.onLoaded,
               0LL) )
        {
          return 1;
        }
      }
      ++v8;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_21;
    }
    return 0;
  }
  return ProgramEffectManager__IsBusy(parent, v7);
}


bool __fastcall ProgramEffectManager__IsStart(UnityEngine_GameObject_o *parent, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  int32_t v6; // w20
  WebViewObject_o *Component_WebViewObject; // x21

  if ( (byte_4187A60 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4187A60 = 1;
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
      sub_B2C434(transform, v5);
    v6 = 0;
    while ( v6 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_20;
      transform = UnityEngine_Transform__GetChild(transform, v6, 0LL);
      if ( !transform )
        goto LABEL_20;
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)transform,
                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
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
      ++v6;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_20;
    }
  }
  return 1;
}


bool __fastcall ProgramEffectManager__IsStart_25204272(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w21
  WebViewObject_o *Component_WebViewObject; // x22

  if ( (byte_4187A61 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, effectName);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_4187A61 = 1;
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
      sub_B2C434(transform, v7);
    v8 = 0;
    while ( v8 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_22;
      transform = UnityEngine_Transform__GetChild(transform, v8, 0LL);
      if ( !transform )
        goto LABEL_22;
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)transform,
                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
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
        if ( System_String__Equals_44292872(
               effectName,
               (System_String_o *)Component_WebViewObject[3].fields.onLoaded,
               0LL)
          && !*((_BYTE *)&Component_WebViewObject[3].fields.mMarginBottom + 6) )
        {
          return 0;
        }
      }
      ++v8;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_22;
    }
    return 1;
  }
  return ProgramEffectManager__IsBusy(parent, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ProgramEffectManager__Resume(UnityEngine_GameObject_o *parent, bool isSkip, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  int32_t v8; // w20
  _BOOL4 v9; // w21
  UnityEngine_Object_o *Component_WebViewObject; // x22

  if ( (byte_4187A67 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, isSkip);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_4187A67 = 1;
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
      sub_B2C434(transform, v7);
    v8 = 0;
    v9 = isSkip;
    while ( v8 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( transform )
      {
        transform = UnityEngine_Transform__GetChild(transform, v8, 0LL);
        if ( transform )
        {
          Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              (UnityEngine_Component_o *)transform,
                                                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
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
              v9,
              *(_QWORD *)&Component_WebViewObject->klass[2]._2.token);
          }
          ++v8;
          transform = UnityEngine_GameObject__get_transform(parent, 0LL);
          if ( transform )
            continue;
        }
      }
      goto LABEL_20;
    }
  }
}


void __fastcall ProgramEffectManager__Resume_25206748(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        bool isSkip,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  int32_t v11; // w22
  WebViewObject_o *Component_WebViewObject; // x23

  if ( (byte_4187A68 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, effectName);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_4187A68 = 1;
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
        sub_B2C434(transform, v9);
      v11 = 0;
      while ( v11 < UnityEngine_Transform__get_childCount(transform, 0LL) )
      {
        transform = UnityEngine_GameObject__get_transform(parent, 0LL);
        if ( transform )
        {
          transform = UnityEngine_Transform__GetChild(transform, v11, 0LL);
          if ( transform )
          {
            Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                        (UnityEngine_Component_o *)transform,
                                        (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
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
              if ( System_String__Equals_44292872(
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
            ++v11;
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
      ProgramEffectManager__Resume(parent, isSkip, v10);
    }
  }
}


void __fastcall ProgramEffectManager__Stop(UnityEngine_GameObject_o *parent, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  int32_t v6; // w20
  UnityEngine_Object_o *Component_WebViewObject; // x21

  if ( (byte_4187A69 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4187A69 = 1;
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
      sub_B2C434(transform, v5);
    v6 = 0;
    while ( v6 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( transform )
      {
        transform = UnityEngine_Transform__GetChild(transform, v6, 0LL);
        if ( transform )
        {
          Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              (UnityEngine_Component_o *)transform,
                                                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
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
          ++v6;
          transform = UnityEngine_GameObject__get_transform(parent, 0LL);
          if ( transform )
            continue;
        }
      }
      goto LABEL_20;
    }
  }
}


void __fastcall ProgramEffectManager__Stop_25207480(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w21
  WebViewObject_o *Component_WebViewObject; // x22

  if ( (byte_4187A6A & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, effectName);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_4187A6A = 1;
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
        sub_B2C434(transform, v7);
      v8 = 0;
      while ( v8 < UnityEngine_Transform__get_childCount(transform, 0LL) )
      {
        transform = UnityEngine_GameObject__get_transform(parent, 0LL);
        if ( transform )
        {
          transform = UnityEngine_Transform__GetChild(transform, v8, 0LL);
          if ( transform )
          {
            Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                        (UnityEngine_Component_o *)transform,
                                        (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
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
              if ( System_String__Equals_44292872(
                     effectName,
                     (System_String_o *)Component_WebViewObject[3].fields.onLoaded,
                     0LL) )
              {
                (*(void (__fastcall **)(WebViewObject_o *, _QWORD))&Component_WebViewObject->klass[2]._2.element_size)(
                  Component_WebViewObject,
                  *(_QWORD *)&Component_WebViewObject->klass[2]._2.static_fields_size);
              }
            }
            ++v8;
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
      ProgramEffectManager__Stop(parent, v7);
    }
  }
}