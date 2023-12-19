void __fastcall ProgramEffectManager___ctor(ProgramEffectManager_o *this, const MethodInfo *method)
{
  if ( (byte_40FA027 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ProgramEffectManager___ctor__, method);
    byte_40FA027 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A552A4 *)Method_SingletonMonoBehaviour_ProgramEffectManager___ctor__);
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
  UnityEngine_GameObject_o *v24; // x21
  ProgramEffectComponent_o *Component_srcLineSprite; // x22
  UnityEngine_Transform_o *transform; // x24
  UnityEngine_Transform_o *v27; // x0
  float v28; // s0
  float v29; // s1
  float v30; // s2
  float v31; // s8
  float v32; // s9
  float v33; // s10
  UnityEngine_Transform_o *v34; // x0
  const MethodInfo *v35; // x3
  UnityEngine_Vector3_o v37; // [xsp+4h] [xbp-7Ch]
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v40; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_40FA020 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___, prefab);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v21);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v22);
    byte_40FA020 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v23 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)prefab,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v23 )
    goto LABEL_12;
  v37.fields.x = x;
  v37.fields.y = y;
  v37.fields.z = z;
  v24 = v23;
  Component_srcLineSprite = (ProgramEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          v23,
                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___);
  transform = UnityEngine_GameObject__get_transform(v24, 0LL);
  v27 = UnityEngine_GameObject__get_transform(v24, 0LL);
  if ( !v27 )
    goto LABEL_12;
  *(UnityEngine_Vector3_o *)&v28 = UnityEngine_Transform__get_localScale(v27, 0LL);
  if ( !parent )
    goto LABEL_12;
  v31 = v28;
  v32 = v29;
  v33 = v30;
  v34 = UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_12;
  UnityEngine_Transform__set_parent(transform, v34, 0LL);
  UnityEngine_Transform__set_localPosition(transform, v37, 0LL);
  identity = UnityEngine_Quaternion__get_identity(0LL);
  UnityEngine_Transform__set_localRotation(transform, identity, 0LL);
  v38.fields.x = v31;
  v38.fields.y = v32;
  v38.fields.z = v33;
  UnityEngine_Transform__set_localScale(transform, v38, 0LL);
  if ( !Component_srcLineSprite )
LABEL_12:
    sub_B170D4();
  v40.fields.r = r;
  v40.fields.g = g;
  v40.fields.b = b;
  v40.fields.a = a;
  ProgramEffectComponent__Init(Component_srcLineSprite, time, v40, range, isSkip, isPause, v35);
  return v24;
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
  if ( (byte_40FA01F & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, effectName);
    byte_40FA01F = 1;
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
  if ( (byte_40FA01E & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, effectName);
    byte_40FA01E = 1;
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x20
  UnityEngine_Transform_o *transform; // x0
  int32_t v16; // w21
  UnityEngine_Transform_o *v17; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_Component_o *v19; // x22
  UnityEngine_Object_o *Component_WebViewObject; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FA025 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40FA025 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( !parent )
    goto LABEL_16;
  transform = UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_16;
  v16 = 0;
  while ( v16 < UnityEngine_Transform__get_childCount(transform, 0LL) )
  {
    v17 = UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( v17 )
    {
      Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v17, v16, 0LL);
      if ( Child )
      {
        v19 = Child;
        Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            Child,
                                                            (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL) )
        {
          gameObject = UnityEngine_Component__get_gameObject(v19, 0LL);
          if ( !v14 )
            goto LABEL_16;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v14,
            (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
        }
        ++v16;
        transform = UnityEngine_GameObject__get_transform(parent, 0LL);
        if ( transform )
          continue;
      }
    }
    goto LABEL_16;
  }
  if ( !v14 )
LABEL_16:
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v23,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v14,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


void __fastcall ProgramEffectManager__Destory_25216356(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x21
  UnityEngine_Transform_o *transform; // x0
  int32_t v17; // w22
  UnityEngine_Transform_o *v18; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_Component_o *v20; // x23
  WebViewObject_o *Component_WebViewObject; // x24
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_40FA026 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, effectName);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    byte_40FA026 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  if ( effectName )
  {
    v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                    effectName,
                                                                                                    method,
                                                                                                    v3,
                                                                                                    v4);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v15,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    if ( !parent )
      goto LABEL_19;
    transform = UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( !transform )
      goto LABEL_19;
    v17 = 0;
    while ( v17 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      v18 = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( v18 )
      {
        Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v18, v17, 0LL);
        if ( Child )
        {
          v20 = Child;
          Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                      Child,
                                      (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
          {
            if ( !Component_WebViewObject )
              goto LABEL_19;
            if ( System_String__Equals_43731072(
                   effectName,
                   (System_String_o *)Component_WebViewObject[3].fields.onLoaded,
                   0LL) )
            {
              gameObject = UnityEngine_Component__get_gameObject(v20, 0LL);
              if ( !v15 )
                goto LABEL_19;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v15,
                (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
            }
          }
          ++v17;
          transform = UnityEngine_GameObject__get_transform(parent, 0LL);
          if ( transform )
            continue;
        }
      }
      goto LABEL_19;
    }
    if ( !v15 )
LABEL_19:
      sub_B170D4();
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v24,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v15,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v24,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v24.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v24,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  }
  else
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)parent, 0LL);
  }
}


ProgramEffectComponent_array *__fastcall ProgramEffectManager__Get(
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  UnityEngine_Transform_o *transform; // x0
  int32_t v13; // w21
  UnityEngine_Transform_o *v14; // x0
  UnityEngine_Component_o *Child; // x0
  WebViewObject_o *Component_WebViewObject; // x22

  if ( (byte_40FA017 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ProgramEffectComponent__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ProgramEffectComponent__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ProgramEffectComponent___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_ProgramEffectComponent__TypeInfo, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    byte_40FA017 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ProgramEffectComponent__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ProgramEffectComponent___ctor__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)parent, 0LL, 0LL) )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_23:
      sub_B170D4();
    v13 = 0;
    while ( v13 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      v14 = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( v14 )
      {
        Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v14, v13, 0LL);
        if ( Child )
        {
          Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                      Child,
                                      (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
          {
            if ( !v11 )
              goto LABEL_23;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v11,
              (EventMissionProgressRequest_Argument_ProgressData_o *)Component_WebViewObject,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ProgramEffectComponent__Add__);
          }
          ++v13;
          transform = UnityEngine_GameObject__get_transform(parent, 0LL);
          if ( transform )
            continue;
        }
      }
      goto LABEL_23;
    }
  }
  if ( !v11 )
    goto LABEL_23;
  return (ProgramEffectComponent_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                           (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ProgramEffectComponent__ToArray__);
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
  WebViewManager_o *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  struct UIWidget_o *baseWindow; // x21
  int leftAnchor; // w8
  unsigned int v13; // w22
  UIWidget_c **v14; // x8
  srcLineSprite_o *Component_srcLineSprite; // x0

  if ( (byte_40FA01D & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__, v4);
    byte_40FA01D = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  v7 = 0LL;
  if ( !v6 )
  {
    v8 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__);
    if ( !v8 )
      goto LABEL_19;
    baseWindow = v8->fields.baseWindow;
    if ( !baseWindow )
      goto LABEL_19;
    leftAnchor = (int)baseWindow->fields.leftAnchor;
    if ( leftAnchor >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        if ( v13 >= leftAnchor )
        {
          sub_B17100(v8, v9, v10);
          sub_B170A0();
        }
        v14 = &baseWindow->klass + (int)v13;
        v7 = (UnityEngine_GameObject_o *)v14[4];
        if ( !v7 )
          break;
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)v14[4],
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___);
        if ( !Component_srcLineSprite || !effectName )
          break;
        v8 = (WebViewManager_o *)System_String__Equals_43731072(
                                   effectName,
                                   (System_String_o *)Component_srcLineSprite[2].fields.mMapCtrl_SpotRoadInfo,
                                   0LL);
        if ( ((unsigned __int8)v8 & 1) != 0 )
          return v7;
        leftAnchor = (int)baseWindow->fields.leftAnchor;
        if ( (int)++v13 >= leftAnchor )
          return 0LL;
      }
LABEL_19:
      sub_B170D4();
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
  WebViewManager_o *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  struct UIPanel_o *basePanel; // x21
  int leftAnchor; // w8
  unsigned int v13; // w22
  UIPanel_c **v14; // x8
  srcLineSprite_o *Component_srcLineSprite; // x0

  if ( (byte_40FA01C & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__, v4);
    byte_40FA01C = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  v7 = 0LL;
  if ( !v6 )
  {
    v8 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__);
    if ( !v8 )
      goto LABEL_19;
    basePanel = v8->fields.basePanel;
    if ( !basePanel )
      goto LABEL_19;
    leftAnchor = (int)basePanel->fields.leftAnchor;
    if ( leftAnchor >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        if ( v13 >= leftAnchor )
        {
          sub_B17100(v8, v9, v10);
          sub_B170A0();
        }
        v14 = &basePanel->klass + (int)v13;
        v7 = (UnityEngine_GameObject_o *)v14[4];
        if ( !v7 )
          break;
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)v14[4],
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___);
        if ( !Component_srcLineSprite || !effectName )
          break;
        v8 = (WebViewManager_o *)System_String__Equals_43731072(
                                   effectName,
                                   (System_String_o *)Component_srcLineSprite[2].fields.mMapCtrl_SpotRoadInfo,
                                   0LL);
        if ( ((unsigned __int8)v8 & 1) != 0 )
          return v7;
        leftAnchor = (int)basePanel->fields.leftAnchor;
        if ( (int)++v13 >= leftAnchor )
          return 0LL;
      }
LABEL_19:
      sub_B170D4();
    }
    return 0LL;
  }
  return v7;
}


bool __fastcall ProgramEffectManager__IsBusy(UnityEngine_GameObject_o *parent, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x0
  int32_t v5; // w20
  UnityEngine_Transform_o *v6; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_Object_o *Component_WebViewObject; // x21

  if ( (byte_40FA018 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FA018 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL) )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_18:
      sub_B170D4();
    v5 = 0;
    while ( v5 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      v6 = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !v6 )
        goto LABEL_18;
      Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v6, v5, 0LL);
      if ( !Child )
        goto LABEL_18;
      Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          Child,
                                                          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
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


bool __fastcall ProgramEffectManager__IsBusy_25211440(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  UnityEngine_Transform_o *transform; // x0
  int32_t v8; // w21
  UnityEngine_Transform_o *v9; // x0
  UnityEngine_Component_o *Child; // x0
  WebViewObject_o *Component_WebViewObject; // x22

  if ( (byte_40FA019 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, effectName);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FA019 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL) )
    return 0;
  if ( effectName )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_21:
      sub_B170D4();
    v8 = 0;
    while ( v8 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      v9 = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !v9 )
        goto LABEL_21;
      Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v9, v8, 0LL);
      if ( !Child )
        goto LABEL_21;
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  Child,
                                  (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
      {
        if ( !Component_WebViewObject )
          goto LABEL_21;
        if ( System_String__Equals_43731072(
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
  return ProgramEffectManager__IsBusy(parent, v6);
}


bool __fastcall ProgramEffectManager__IsStart(UnityEngine_GameObject_o *parent, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x0
  int32_t v5; // w20
  UnityEngine_Transform_o *v6; // x0
  UnityEngine_Component_o *Child; // x0
  WebViewObject_o *Component_WebViewObject; // x21

  if ( (byte_40FA01A & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FA01A = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL) )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_20:
      sub_B170D4();
    v5 = 0;
    while ( v5 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      v6 = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !v6 )
        goto LABEL_20;
      Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v6, v5, 0LL);
      if ( !Child )
        goto LABEL_20;
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  Child,
                                  (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
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


bool __fastcall ProgramEffectManager__IsStart_25212140(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  UnityEngine_Transform_o *transform; // x0
  int32_t v8; // w21
  UnityEngine_Transform_o *v9; // x0
  UnityEngine_Component_o *Child; // x0
  WebViewObject_o *Component_WebViewObject; // x22

  if ( (byte_40FA01B & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, effectName);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FA01B = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL) )
    return 1;
  if ( effectName )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_22:
      sub_B170D4();
    v8 = 0;
    while ( v8 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      v9 = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !v9 )
        goto LABEL_22;
      Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v9, v8, 0LL);
      if ( !Child )
        goto LABEL_22;
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  Child,
                                  (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
      {
        if ( !Component_WebViewObject )
          goto LABEL_22;
        if ( System_String__Equals_43731072(
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
  return ProgramEffectManager__IsBusy(parent, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ProgramEffectManager__Resume(UnityEngine_GameObject_o *parent, bool isSkip, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Transform_o *transform; // x0
  int32_t v7; // w20
  _BOOL4 v8; // w21
  UnityEngine_Transform_o *v9; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_Object_o *Component_WebViewObject; // x22

  if ( (byte_40FA021 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, isSkip);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FA021 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL) )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_20:
      sub_B170D4();
    v7 = 0;
    v8 = isSkip;
    while ( v7 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      v9 = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( v9 )
      {
        Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v9, v7, 0LL);
        if ( Child )
        {
          Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              Child,
                                                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL) )
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


void __fastcall ProgramEffectManager__Resume_25214616(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        bool isSkip,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  UnityEngine_Transform_o *transform; // x0
  int32_t v10; // w22
  UnityEngine_Transform_o *v11; // x0
  UnityEngine_Component_o *Child; // x0
  System_String_o **Component_WebViewObject; // x23

  if ( (byte_40FA022 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, effectName);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40FA022 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL) )
  {
    if ( effectName )
    {
      if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_22:
        sub_B170D4();
      v10 = 0;
      while ( v10 < UnityEngine_Transform__get_childCount(transform, 0LL) )
      {
        v11 = UnityEngine_GameObject__get_transform(parent, 0LL);
        if ( v11 )
        {
          Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v11, v10, 0LL);
          if ( Child )
          {
            Component_WebViewObject = (System_String_o **)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            Child,
                                                            (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
            {
              if ( !Component_WebViewObject )
                goto LABEL_22;
              if ( System_String__Equals_43731072(effectName, Component_WebViewObject[49], 0LL) )
                (*(void (__fastcall **)(System_String_o **, bool, System_String_c *))&(*Component_WebViewObject)[41].fields)(
                  Component_WebViewObject,
                  isSkip,
                  (*Component_WebViewObject)[42].klass);
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
      ProgramEffectManager__Resume(parent, isSkip, v8);
    }
  }
}


void __fastcall ProgramEffectManager__Stop(UnityEngine_GameObject_o *parent, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x0
  int32_t v5; // w20
  UnityEngine_Transform_o *v6; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_Object_o *Component_WebViewObject; // x21

  if ( (byte_40FA023 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FA023 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL) )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_20:
      sub_B170D4();
    v5 = 0;
    while ( v5 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      v6 = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( v6 )
      {
        Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v6, v5, 0LL);
        if ( Child )
        {
          Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              Child,
                                                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL) )
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


void __fastcall ProgramEffectManager__Stop_25215348(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  UnityEngine_Transform_o *transform; // x0
  int32_t v8; // w21
  UnityEngine_Transform_o *v9; // x0
  UnityEngine_Component_o *Child; // x0
  System_String_o **Component_WebViewObject; // x22

  if ( (byte_40FA024 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, effectName);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FA024 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL) )
  {
    if ( effectName )
    {
      if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_22:
        sub_B170D4();
      v8 = 0;
      while ( v8 < UnityEngine_Transform__get_childCount(transform, 0LL) )
      {
        v9 = UnityEngine_GameObject__get_transform(parent, 0LL);
        if ( v9 )
        {
          Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v9, v8, 0LL);
          if ( Child )
          {
            Component_WebViewObject = (System_String_o **)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            Child,
                                                            (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
            {
              if ( !Component_WebViewObject )
                goto LABEL_22;
              if ( System_String__Equals_43731072(effectName, Component_WebViewObject[49], 0LL) )
                ((void (__fastcall *)(System_String_o **, _QWORD))(*Component_WebViewObject)[42].monitor)(
                  Component_WebViewObject,
                  *(_QWORD *)&(*Component_WebViewObject)[42].fields);
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
      ProgramEffectManager__Stop(parent, v6);
    }
  }
}