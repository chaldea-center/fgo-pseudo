void __fastcall ProgramEffectManager___ctor(ProgramEffectManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E87ED & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ProgramEffectManager___ctor__, (_DWORD)method, v2, v3);
    byte_42E87ED = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A301CC *)Method_SingletonMonoBehaviour_ProgramEffectManager___ctor__);
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
  int v21; // w1
  char v22; // w2
  __int64 v23; // x3
  int v24; // w1
  char v25; // w2
  __int64 v26; // x3
  UnityEngine_GameObject_o *v27; // x0
  __int64 v28; // x1
  UnityEngine_GameObject_o *v29; // x21
  ProgramEffectComponent_o *Component_srcLineSprite; // x22
  UnityEngine_Transform_o *transform; // x24
  float v32; // s0
  float v33; // s1
  float v34; // s2
  float v35; // s8
  float v36; // s9
  float v37; // s10
  const MethodInfo *v38; // x3
  UnityEngine_Vector3_o v40; // [xsp+4h] [xbp-7Ch]
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v43; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_42E87E6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___, (_DWORD)prefab, isSkip, isPause);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v21, v22, v23);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v24, v25, v26);
    byte_42E87E6 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v27 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)prefab,
                                      (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v27 )
    goto LABEL_12;
  v40.fields.x = x;
  v40.fields.y = y;
  v40.fields.z = z;
  v29 = v27;
  Component_srcLineSprite = (ProgramEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          v27,
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___);
  transform = UnityEngine_GameObject__get_transform(v29, 0LL);
  v27 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v29, 0LL);
  if ( !v27 )
    goto LABEL_12;
  *(UnityEngine_Vector3_o *)&v32 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)v27, 0LL);
  if ( !parent )
    goto LABEL_12;
  v35 = v32;
  v36 = v33;
  v37 = v34;
  v27 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_12;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)v27, 0LL);
  UnityEngine_Transform__set_localPosition(transform, v40, 0LL);
  identity = UnityEngine_Quaternion__get_identity(0LL);
  UnityEngine_Transform__set_localRotation(transform, identity, 0LL);
  v41.fields.x = v35;
  v41.fields.y = v36;
  v41.fields.z = v37;
  UnityEngine_Transform__set_localScale(transform, v41, 0LL);
  if ( !Component_srcLineSprite )
LABEL_12:
    sub_B5D69C(v27, v28);
  v43.fields.r = r;
  v43.fields.g = g;
  v43.fields.b = b;
  v43.fields.a = a;
  ProgramEffectComponent__Init(Component_srcLineSprite, time, v43, range, isSkip, isPause, v38);
  return v29;
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
  if ( (byte_42E87E5 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)effectName, isSkip, isPause);
    byte_42E87E5 = 1;
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
  if ( (byte_42E87E4 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)effectName, isSkip, isPause);
    byte_42E87E4 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v31; // x1
  int32_t v32; // w21
  UnityEngine_Component_o *v33; // x22
  UnityEngine_Object_o *Component_WebViewObject; // x23
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E87EB & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42E87EB = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( !parent )
    goto LABEL_16;
  transform = UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_16;
  v32 = 0;
  while ( 1 )
  {
    transform = (UnityEngine_Transform_o *)UnityEngine_Transform__get_childCount(transform, 0LL);
    if ( v32 >= (int)transform )
      break;
    transform = UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( transform )
    {
      transform = UnityEngine_Transform__GetChild(transform, v32, 0LL);
      if ( transform )
      {
        v33 = (UnityEngine_Component_o *)transform;
        Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            (UnityEngine_Component_o *)transform,
                                                            (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v33, 0LL);
          if ( !v29 )
            goto LABEL_16;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v29,
            (EventMissionProgressRequest_Argument_ProgressData_o *)transform,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
        }
        ++v32;
        transform = UnityEngine_GameObject__get_transform(parent, 0LL);
        if ( transform )
          continue;
      }
    }
    goto LABEL_16;
  }
  if ( !v29 )
LABEL_16:
    sub_B5D69C(transform, v31);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v36,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v29,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v36,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v36.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v36,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


void __fastcall ProgramEffectManager__Destory_25097792(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  __int64 v3; // x3
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x21
  UnityEngine_Transform_o *transform; // x0
  __int64 v32; // x1
  int32_t v33; // w22
  UnityEngine_Component_o *v34; // x23
  WebViewObject_o *Component_WebViewObject; // x24
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_42E87EC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___,
      (_DWORD)effectName,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v27, v28, v29);
    byte_42E87EC = 1;
  }
  memset(&v37, 0, sizeof(v37));
  if ( effectName )
  {
    v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v30,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
    if ( !parent )
      goto LABEL_19;
    transform = UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( !transform )
      goto LABEL_19;
    v33 = 0;
    while ( 1 )
    {
      transform = (UnityEngine_Transform_o *)UnityEngine_Transform__get_childCount(transform, 0LL);
      if ( v33 >= (int)transform )
        break;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( transform )
      {
        transform = UnityEngine_Transform__GetChild(transform, v33, 0LL);
        if ( transform )
        {
          v34 = (UnityEngine_Component_o *)transform;
          Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                      (UnityEngine_Component_o *)transform,
                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
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
            if ( System_String__Equals_44565128(
                   effectName,
                   (System_String_o *)Component_WebViewObject[3].fields.onLoaded,
                   0LL) )
            {
              transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v34, 0LL);
              if ( !v30 )
                goto LABEL_19;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v30,
                (EventMissionProgressRequest_Argument_ProgressData_o *)transform,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
            }
          }
          ++v33;
          transform = UnityEngine_GameObject__get_transform(parent, 0LL);
          if ( transform )
            continue;
        }
      }
      goto LABEL_19;
    }
    if ( !v30 )
LABEL_19:
      sub_B5D69C(transform, v32);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v37,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v30,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v37,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v37.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v37,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  }
  else
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236((UnityEngine_Object_o *)parent, 0LL);
  }
}


ProgramEffectComponent_array *__fastcall ProgramEffectManager__Get(
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v22; // x1
  int32_t v23; // w21
  UnityEngine_Object_o *Component_WebViewObject; // x22

  if ( (byte_42E87DD & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ProgramEffectComponent__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ProgramEffectComponent__ToArray__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ProgramEffectComponent___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_ProgramEffectComponent__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    byte_42E87DD = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ProgramEffectComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ProgramEffectComponent___ctor__);
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
      sub_B5D69C(transform, v22);
    v23 = 0;
    while ( 1 )
    {
      transform = (UnityEngine_Transform_o *)UnityEngine_Transform__get_childCount(transform, 0LL);
      if ( v23 >= (int)transform )
        break;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( transform )
      {
        transform = UnityEngine_Transform__GetChild(transform, v23, 0LL);
        if ( transform )
        {
          Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              (UnityEngine_Component_o *)transform,
                                                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
          if ( ((unsigned __int8)transform & 1) != 0 )
          {
            if ( !v20 )
              goto LABEL_23;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v20,
              (EventMissionProgressRequest_Argument_ProgressData_o *)Component_WebViewObject,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ProgramEffectComponent__Add__);
          }
          ++v23;
          transform = UnityEngine_GameObject__get_transform(parent, 0LL);
          if ( transform )
            continue;
        }
      }
      goto LABEL_23;
    }
  }
  if ( !v20 )
    goto LABEL_23;
  return (ProgramEffectComponent_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                           (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ProgramEffectComponent__ToArray__);
}


UnityEngine_GameObject_o *__fastcall ProgramEffectManager__GetCharaEffectPrefab(
        System_String_o *effectName,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *Instance; // x20
  bool v12; // w0
  UnityEngine_GameObject_o *v13; // x20
  void *Component_srcLineSprite; // x0
  __int64 v15; // x1
  __int64 v16; // x21
  int v17; // w8
  unsigned int v18; // w22
  __int64 v19; // x8
  __int64 v21; // x0

  if ( (byte_42E87E3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__, v8, v9, v10);
    byte_42E87E3 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v12 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  v13 = 0LL;
  if ( !v12 )
  {
    Component_srcLineSprite = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__);
    if ( !Component_srcLineSprite )
      goto LABEL_19;
    v16 = *((_QWORD *)Component_srcLineSprite + 4);
    if ( !v16 )
      goto LABEL_19;
    v17 = *(_DWORD *)(v16 + 24);
    if ( v17 >= 1 )
    {
      v18 = 0;
      while ( 1 )
      {
        if ( v18 >= v17 )
        {
          v21 = sub_B5D6C8(Component_srcLineSprite);
          sub_B5D668(v21, 0LL);
        }
        v19 = v16 + 8LL * (int)v18;
        v13 = *(UnityEngine_GameObject_o **)(v19 + 32);
        if ( !v13 )
          break;
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    *(UnityEngine_GameObject_o **)(v19 + 32),
                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___);
        if ( !Component_srcLineSprite || !effectName )
          break;
        Component_srcLineSprite = (void *)System_String__Equals_44565128(
                                            effectName,
                                            *((System_String_o **)Component_srcLineSprite + 49),
                                            0LL);
        if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
          return v13;
        v17 = *(_DWORD *)(v16 + 24);
        if ( (int)++v18 >= v17 )
          return 0LL;
      }
LABEL_19:
      sub_B5D69C(Component_srcLineSprite, v15);
    }
    return 0LL;
  }
  return v13;
}


UnityEngine_GameObject_o *__fastcall ProgramEffectManager__GetMainEffectPrefab(
        System_String_o *effectName,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *Instance; // x20
  bool v12; // w0
  UnityEngine_GameObject_o *v13; // x20
  void *Component_srcLineSprite; // x0
  __int64 v15; // x1
  __int64 v16; // x21
  int v17; // w8
  unsigned int v18; // w22
  __int64 v19; // x8
  __int64 v21; // x0

  if ( (byte_42E87E2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__, v8, v9, v10);
    byte_42E87E2 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v12 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  v13 = 0LL;
  if ( !v12 )
  {
    Component_srcLineSprite = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__);
    if ( !Component_srcLineSprite )
      goto LABEL_19;
    v16 = *((_QWORD *)Component_srcLineSprite + 3);
    if ( !v16 )
      goto LABEL_19;
    v17 = *(_DWORD *)(v16 + 24);
    if ( v17 >= 1 )
    {
      v18 = 0;
      while ( 1 )
      {
        if ( v18 >= v17 )
        {
          v21 = sub_B5D6C8(Component_srcLineSprite);
          sub_B5D668(v21, 0LL);
        }
        v19 = v16 + 8LL * (int)v18;
        v13 = *(UnityEngine_GameObject_o **)(v19 + 32);
        if ( !v13 )
          break;
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    *(UnityEngine_GameObject_o **)(v19 + 32),
                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___);
        if ( !Component_srcLineSprite || !effectName )
          break;
        Component_srcLineSprite = (void *)System_String__Equals_44565128(
                                            effectName,
                                            *((System_String_o **)Component_srcLineSprite + 49),
                                            0LL);
        if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
          return v13;
        v17 = *(_DWORD *)(v16 + 24);
        if ( (int)++v18 >= v17 )
          return 0LL;
      }
LABEL_19:
      sub_B5D69C(Component_srcLineSprite, v15);
    }
    return 0LL;
  }
  return v13;
}


bool __fastcall ProgramEffectManager__IsBusy(UnityEngine_GameObject_o *parent, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Transform_o *transform; // x0
  __int64 v9; // x1
  int32_t v10; // w20
  UnityEngine_Object_o *Component_WebViewObject; // x21

  if ( (byte_42E87DE & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E87DE = 1;
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
      sub_B5D69C(transform, v9);
    v10 = 0;
    while ( v10 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_18;
      transform = UnityEngine_Transform__GetChild(transform, v10, 0LL);
      if ( !transform )
        goto LABEL_18;
      Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)transform,
                                                          (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL) )
        return 1;
      ++v10;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_18;
    }
  }
  return 0;
}


bool __fastcall ProgramEffectManager__IsBusy_25092876(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v10; // x1
  int32_t v11; // w21
  WebViewObject_o *Component_WebViewObject; // x22

  if ( (byte_42E87DF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___,
      (_DWORD)effectName,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E87DF = 1;
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
      sub_B5D69C(transform, v10);
    v11 = 0;
    while ( v11 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_21;
      transform = UnityEngine_Transform__GetChild(transform, v11, 0LL);
      if ( !transform )
        goto LABEL_21;
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)transform,
                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
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
        if ( System_String__Equals_44565128(
               effectName,
               (System_String_o *)Component_WebViewObject[3].fields.onLoaded,
               0LL) )
        {
          return 1;
        }
      }
      ++v11;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_21;
    }
    return 0;
  }
  return ProgramEffectManager__IsBusy(parent, v10);
}


bool __fastcall ProgramEffectManager__IsStart(UnityEngine_GameObject_o *parent, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Transform_o *transform; // x0
  __int64 v9; // x1
  int32_t v10; // w20
  WebViewObject_o *Component_WebViewObject; // x21

  if ( (byte_42E87E0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E87E0 = 1;
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
      sub_B5D69C(transform, v9);
    v10 = 0;
    while ( v10 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_20;
      transform = UnityEngine_Transform__GetChild(transform, v10, 0LL);
      if ( !transform )
        goto LABEL_20;
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)transform,
                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
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
      ++v10;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_20;
    }
  }
  return 1;
}


bool __fastcall ProgramEffectManager__IsStart_25093576(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v10; // x1
  int32_t v11; // w21
  WebViewObject_o *Component_WebViewObject; // x22

  if ( (byte_42E87E1 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___,
      (_DWORD)effectName,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E87E1 = 1;
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
      sub_B5D69C(transform, v10);
    v11 = 0;
    while ( v11 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_22;
      transform = UnityEngine_Transform__GetChild(transform, v11, 0LL);
      if ( !transform )
        goto LABEL_22;
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)transform,
                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
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
        if ( System_String__Equals_44565128(
               effectName,
               (System_String_o *)Component_WebViewObject[3].fields.onLoaded,
               0LL)
          && !*((_BYTE *)&Component_WebViewObject[3].fields.mMarginBottom + 6) )
        {
          return 0;
        }
      }
      ++v11;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_22;
    }
    return 1;
  }
  return ProgramEffectManager__IsBusy(parent, v10);
}


void __fastcall ProgramEffectManager__Resume(UnityEngine_GameObject_o *parent, bool isSkip, const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Transform_o *transform; // x0
  __int64 v10; // x1
  int32_t v11; // w20
  _BOOL4 v12; // w21
  UnityEngine_Object_o *Component_WebViewObject; // x22

  if ( (byte_42E87E7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, isSkip, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E87E7 = 1;
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
      sub_B5D69C(transform, v10);
    v11 = 0;
    v12 = isSkip;
    while ( v11 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( transform )
      {
        transform = UnityEngine_Transform__GetChild(transform, v11, 0LL);
        if ( transform )
        {
          Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              (UnityEngine_Component_o *)transform,
                                                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
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
              v12,
              *(_QWORD *)&Component_WebViewObject->klass[2]._2.token);
          }
          ++v11;
          transform = UnityEngine_GameObject__get_transform(parent, 0LL);
          if ( transform )
            continue;
        }
      }
      goto LABEL_20;
    }
  }
}


void __fastcall ProgramEffectManager__Resume_25096052(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        bool isSkip,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  UnityEngine_Transform_o *transform; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  int32_t v13; // w22
  WebViewObject_o *Component_WebViewObject; // x23

  if ( (byte_42E87E8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, (_DWORD)effectName, isSkip, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    byte_42E87E8 = 1;
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
        sub_B5D69C(transform, v11);
      v13 = 0;
      while ( v13 < UnityEngine_Transform__get_childCount(transform, 0LL) )
      {
        transform = UnityEngine_GameObject__get_transform(parent, 0LL);
        if ( transform )
        {
          transform = UnityEngine_Transform__GetChild(transform, v13, 0LL);
          if ( transform )
          {
            Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                        (UnityEngine_Component_o *)transform,
                                        (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
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
              if ( System_String__Equals_44565128(
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
            ++v13;
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
      ProgramEffectManager__Resume(parent, isSkip, v12);
    }
  }
}


void __fastcall ProgramEffectManager__Stop(UnityEngine_GameObject_o *parent, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Transform_o *transform; // x0
  __int64 v9; // x1
  int32_t v10; // w20
  UnityEngine_Object_o *Component_WebViewObject; // x21

  if ( (byte_42E87E9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E87E9 = 1;
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
      sub_B5D69C(transform, v9);
    v10 = 0;
    while ( v10 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( transform )
      {
        transform = UnityEngine_Transform__GetChild(transform, v10, 0LL);
        if ( transform )
        {
          Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              (UnityEngine_Component_o *)transform,
                                                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
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
          ++v10;
          transform = UnityEngine_GameObject__get_transform(parent, 0LL);
          if ( transform )
            continue;
        }
      }
      goto LABEL_20;
    }
  }
}


void __fastcall ProgramEffectManager__Stop_25096784(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v10; // x1
  int32_t v11; // w21
  WebViewObject_o *Component_WebViewObject; // x22

  if ( (byte_42E87EA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___,
      (_DWORD)effectName,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E87EA = 1;
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
        sub_B5D69C(transform, v10);
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
                                        (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
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
              if ( System_String__Equals_44565128(
                     effectName,
                     (System_String_o *)Component_WebViewObject[3].fields.onLoaded,
                     0LL) )
              {
                (*(void (__fastcall **)(WebViewObject_o *, _QWORD))&Component_WebViewObject->klass[2]._2.element_size)(
                  Component_WebViewObject,
                  *(_QWORD *)&Component_WebViewObject->klass[2]._2.static_fields_size);
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
      ProgramEffectManager__Stop(parent, v10);
    }
  }
}