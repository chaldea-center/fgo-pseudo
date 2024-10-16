void __fastcall ProgramEffectManager___ctor(ProgramEffectManager_o *this, const MethodInfo *method)
{
  if ( (byte_4AB7136 & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonMonoBehaviour_ProgramEffectManager___ctor__, method);
    byte_4AB7136 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_378A644 *)Method_SingletonMonoBehaviour_ProgramEffectManager___ctor__);
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
  float g; // s8
  float r; // s9
  float z; // s13
  float y; // s14
  float x; // s15
  __int64 v21; // x1
  __int64 v22; // x1
  UnityEngine_GameObject_o *v23; // x0
  __int64 v24; // x1
  UnityEngine_GameObject_o *v25; // x21
  Il2CppObject *Component_object; // x22
  UnityEngine_Transform_o *transform; // x24
  float v28; // s0
  float v29; // s1
  float v30; // s2
  float v31; // s8
  float v32; // s9
  float v33; // s10
  __int64 v34; // x1
  const MethodInfo *v35; // x3
  float timea; // [xsp+Ch] [xbp-84h]
  float v38; // [xsp+58h] [xbp-38h]
  float v39; // [xsp+5Ch] [xbp-34h]
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v42; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4AB712F & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___, prefab);
    sub_1BAB41C(&Method_UnityEngine_Object_Instantiate_GameObject___, v21);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v22);
    byte_4AB712F = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v23 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                      (Il2CppObject *)prefab,
                                      (const MethodInfo_2F483D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v23 )
    goto LABEL_13;
  timea = time;
  v38 = r;
  v39 = g;
  v25 = v23;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v23,
                       (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___);
  transform = UnityEngine_GameObject__get_transform(v25, 0LL);
  v23 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v25, 0LL);
  if ( !v23 )
    goto LABEL_13;
  *(UnityEngine_Vector3_o *)&v28 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)v23, 0LL);
  if ( !parent )
    goto LABEL_13;
  v31 = v28;
  v32 = v29;
  v33 = v30;
  v23 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_13;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)v23, 0LL);
  v40.fields.x = x;
  v40.fields.y = y;
  v40.fields.z = z;
  UnityEngine_Transform__set_localPosition(transform, v40, 0LL);
  if ( !byte_4AB0697 )
  {
    sub_1BAB41C(&UnityEngine_Quaternion_TypeInfo, v34);
    byte_4AB0697 = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0LL);
  v41.fields.x = v31;
  v41.fields.y = v32;
  v41.fields.z = v33;
  UnityEngine_Transform__set_localScale(transform, v41, 0LL);
  if ( !Component_object )
LABEL_13:
    sub_1BAB678(v23, v24);
  v42.fields.r = v38;
  v42.fields.g = v39;
  v42.fields.b = b;
  v42.fields.a = a;
  ProgramEffectComponent__Init((ProgramEffectComponent_o *)Component_object, timea, v42, range, isSkip, isPause, v35);
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
  float colora; // [xsp+4Ch] [xbp-34h]
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v25; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  colora = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4AB712E & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, effectName);
    byte_4AB712E = 1;
  }
  CharaEffectPrefab = (UnityEngine_Object_o *)ProgramEffectManager__GetCharaEffectPrefab(
                                                effectName,
                                                (const MethodInfo *)effectName);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(CharaEffectPrefab, 0LL, 0LL) )
    return 0LL;
  v24.fields.z = z;
  v25.fields.r = r;
  v25.fields.g = g;
  v25.fields.b = b;
  v25.fields.a = colora;
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
  float colora; // [xsp+4Ch] [xbp-34h]
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v25; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  colora = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4AB712D & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, effectName);
    byte_4AB712D = 1;
  }
  MainEffectPrefab = (UnityEngine_Object_o *)ProgramEffectManager__GetMainEffectPrefab(
                                               effectName,
                                               (const MethodInfo *)effectName);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(MainEffectPrefab, 0LL, 0LL) )
    return 0LL;
  v24.fields.z = z;
  v25.fields.r = r;
  v25.fields.g = g;
  v25.fields.b = b;
  v25.fields.a = colora;
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
  System_Collections_Generic_List_object__o *v11; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v13; // x1
  int32_t v14; // w21
  UnityEngine_Component_o *v15; // x22
  Il2CppObject *Component_object; // x23
  int32_t v17; // w2
  int32_t v18; // w3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  UnityEngine_Transform_o *v22; // x1
  Il2CppClass **v23; // x0
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4AB7134 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_GameObject__Add__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_GameObject___ctor__, v8);
    sub_1BAB41C(&System_Collections_Generic_List_GameObject__TypeInfo, v9);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v10);
    byte_4AB7134 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( !parent )
    goto LABEL_18;
  transform = UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_18;
  v14 = 0;
  while ( 1 )
  {
    transform = (UnityEngine_Transform_o *)UnityEngine_Transform__get_childCount(transform, 0LL);
    if ( v14 >= (int)transform )
      break;
    transform = UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( !transform )
      goto LABEL_18;
    transform = UnityEngine_Transform__GetChild(transform, v14, 0LL);
    if ( !transform )
      goto LABEL_18;
    v15 = (UnityEngine_Component_o *)transform;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)transform,
                         (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    {
      transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v15, 0LL);
      if ( !v11 )
        goto LABEL_18;
      items = v11->fields._items;
      v20 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v11->fields._version;
      if ( !items )
        goto LABEL_18;
      size = v11->fields._size;
      v22 = transform;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          (Il2CppObject *)transform,
          *(const MethodInfo_354D8BC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v22;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v22, v17, v18);
      }
    }
    ++v14;
    transform = UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( !transform )
      goto LABEL_18;
  }
  if ( !v11 )
LABEL_18:
    sub_1BAB678(transform, v13);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    v11,
    (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69800620((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


void __fastcall ProgramEffectManager__Destory_41080968(
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
  System_Collections_Generic_List_object__o *v13; // x21
  UnityEngine_Transform_o *transform; // x0
  __int64 v15; // x1
  int32_t v16; // w22
  UnityEngine_Component_o *v17; // x23
  Il2CppObject *Component_object; // x24
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  UnityEngine_Transform_o *v24; // x1
  Il2CppClass **v25; // x0
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4AB7135 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, effectName);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_List_GameObject___ctor__, v10);
    sub_1BAB41C(&System_Collections_Generic_List_GameObject__TypeInfo, v11);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v12);
    byte_4AB7135 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  if ( effectName )
  {
    v13 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v13,
      (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    if ( !parent )
      goto LABEL_21;
    transform = UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( !transform )
      goto LABEL_21;
    v16 = 0;
    while ( 1 )
    {
      transform = (UnityEngine_Transform_o *)UnityEngine_Transform__get_childCount(transform, 0LL);
      if ( v16 >= (int)transform )
        break;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_21;
      transform = UnityEngine_Transform__GetChild(transform, v16, 0LL);
      if ( !transform )
        goto LABEL_21;
      v17 = (UnityEngine_Component_o *)transform;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)transform,
                           (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0LL,
                                               0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_21;
        if ( System_String__Equals_62056444(effectName, (System_String_o *)Component_object[25].klass, 0LL) )
        {
          transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v17, 0LL);
          if ( !v13 )
            goto LABEL_21;
          items = v13->fields._items;
          v22 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v13->fields._version;
          if ( !items )
            goto LABEL_21;
          size = v13->fields._size;
          v24 = transform;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v13,
              (Il2CppObject *)transform,
              *(const MethodInfo_354D8BC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = &items->obj.klass + size;
            v13->fields._size = size + 1;
            v25[4] = (Il2CppClass *)v24;
            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v24, v19, v20);
          }
        }
      }
      ++v16;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_21;
    }
    if ( !v13 )
LABEL_21:
      sub_1BAB678(transform, v15);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v27,
      v13,
      (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v27,
              (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v27.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69800620((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v27,
      (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  }
  else
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69800620((UnityEngine_Object_o *)parent, 0LL);
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
  System_Collections_Generic_List_object__o *v8; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v10; // x1
  int32_t v11; // w21
  Il2CppObject *Component_object; // x22
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4AB7126 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ProgramEffectComponent__Add__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ProgramEffectComponent__ToArray__, v4);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ProgramEffectComponent___ctor__, v5);
    sub_1BAB41C(&System_Collections_Generic_List_ProgramEffectComponent__TypeInfo, v6);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v7);
    byte_4AB7126 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_ProgramEffectComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_ProgramEffectComponent___ctor__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_24:
      sub_1BAB678(transform, v10);
    v11 = 0;
    while ( 1 )
    {
      transform = (UnityEngine_Transform_o *)UnityEngine_Transform__get_childCount(transform, 0LL);
      if ( v11 >= (int)transform )
        break;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_24;
      transform = UnityEngine_Transform__GetChild(transform, v11, 0LL);
      if ( !transform )
        goto LABEL_24;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)transform,
                           (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0LL,
                                               0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v8 )
          goto LABEL_24;
        items = v8->fields._items;
        v16 = Method_System_Collections_Generic_List_ProgramEffectComponent__Add__;
        ++v8->fields._version;
        if ( !items )
          goto LABEL_24;
        size = v8->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            Component_object,
            *(const MethodInfo_354D8BC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v18[4] = (Il2CppClass *)Component_object;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v18 + 4), (int32_t)Component_object, v13, v14);
        }
      }
      ++v11;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_24;
    }
  }
  if ( !v8 )
    goto LABEL_24;
  return (ProgramEffectComponent_array *)System_Collections_Generic_List_object___ToArray(
                                           v8,
                                           (const MethodInfo_354F414 *)Method_System_Collections_Generic_List_ProgramEffectComponent__ToArray__);
}


UnityEngine_GameObject_o *__fastcall ProgramEffectManager__GetCharaEffectPrefab(
        System_String_o *effectName,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x20
  bool v6; // w0
  UnityEngine_GameObject_o *v7; // x20
  Il2CppObject *Component_object; // x0
  __int64 v9; // x1
  _DWORD *monitor; // x21
  int v11; // w8
  unsigned int v12; // w22
  char *v13; // x8

  if ( (byte_4AB712C & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___, method);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v3);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__, v4);
    byte_4AB712C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  v7 = 0LL;
  if ( !v6 )
  {
    Component_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__);
    if ( !Component_object )
      goto LABEL_18;
    monitor = Component_object[2].monitor;
    if ( !monitor )
      goto LABEL_18;
    v11 = monitor[6];
    if ( v11 >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        if ( v12 >= v11 )
          sub_1BAB680(Component_object, v9);
        v13 = (char *)&monitor[2 * v12];
        v7 = (UnityEngine_GameObject_o *)*((_QWORD *)v13 + 4);
        if ( !v7 )
          break;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             *((UnityEngine_GameObject_o **)v13 + 4),
                             (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___);
        if ( !Component_object || !effectName )
          break;
        Component_object = (Il2CppObject *)System_String__Equals_62056444(
                                             effectName,
                                             (System_String_o *)Component_object[25].klass,
                                             0LL);
        if ( ((unsigned __int8)Component_object & 1) != 0 )
          return v7;
        v11 = monitor[6];
        if ( (int)++v12 >= v11 )
          return 0LL;
      }
LABEL_18:
      sub_1BAB678(Component_object, v9);
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
  Il2CppObject *Instance; // x20
  bool v6; // w0
  UnityEngine_GameObject_o *v7; // x20
  Il2CppObject *Component_object; // x0
  __int64 v9; // x1
  Il2CppClass *klass; // x21
  int namespaze; // w8
  unsigned int v12; // w22
  void **v13; // x8

  if ( (byte_4AB712B & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___, method);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v3);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__, v4);
    byte_4AB712B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  v7 = 0LL;
  if ( !v6 )
  {
    Component_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__);
    if ( !Component_object )
      goto LABEL_18;
    klass = Component_object[2].klass;
    if ( !klass )
      goto LABEL_18;
    namespaze = (int)klass->_1.namespaze;
    if ( namespaze >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        if ( v12 >= namespaze )
          sub_1BAB680(Component_object, v9);
        v13 = &klass->_1.image + (int)v12;
        v7 = (UnityEngine_GameObject_o *)v13[4];
        if ( !v7 )
          break;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v13[4],
                             (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___);
        if ( !Component_object || !effectName )
          break;
        Component_object = (Il2CppObject *)System_String__Equals_62056444(
                                             effectName,
                                             (System_String_o *)Component_object[25].klass,
                                             0LL);
        if ( ((unsigned __int8)Component_object & 1) != 0 )
          return v7;
        namespaze = (int)klass->_1.namespaze;
        if ( (int)++v12 >= namespaze )
          return 0LL;
      }
LABEL_18:
      sub_1BAB678(Component_object, v9);
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
  bool v6; // w21
  int32_t v8; // w20
  int32_t childCount; // w0
  Il2CppObject *Component_object; // x22

  if ( (byte_4AB7127 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, method);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v3);
    byte_4AB7127 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
    return 0;
  if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_18:
    sub_1BAB678(transform, v5);
  v8 = 0;
  while ( 1 )
  {
    childCount = UnityEngine_Transform__get_childCount(transform, 0LL);
    v6 = v8 < childCount;
    if ( v8 >= childCount )
      return v6;
    transform = UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( !transform )
      goto LABEL_18;
    transform = UnityEngine_Transform__GetChild(transform, v8, 0LL);
    if ( !transform )
      goto LABEL_18;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)transform,
                         (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
      return v6;
    ++v8;
    transform = UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( !transform )
      goto LABEL_18;
  }
}


bool __fastcall ProgramEffectManager__IsBusy_41076140(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v7; // x1
  bool v8; // w22
  int32_t v10; // w21
  int32_t childCount; // w0
  Il2CppObject *Component_object; // x23

  if ( (byte_4AB7128 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, effectName);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v5);
    byte_4AB7128 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
    return 0;
  if ( effectName )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_21:
      sub_1BAB678(transform, v7);
    v10 = 0;
    while ( 1 )
    {
      childCount = UnityEngine_Transform__get_childCount(transform, 0LL);
      v8 = v10 < childCount;
      if ( v10 >= childCount )
        return v8;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_21;
      transform = UnityEngine_Transform__GetChild(transform, v10, 0LL);
      if ( !transform )
        goto LABEL_21;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)transform,
                           (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0LL,
                                               0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_21;
        if ( System_String__Equals_62056444(effectName, (System_String_o *)Component_object[25].klass, 0LL) )
          return v8;
      }
      ++v10;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_21;
    }
  }
  return ProgramEffectManager__IsBusy(parent, v7);
}


bool __fastcall ProgramEffectManager__IsStart(UnityEngine_GameObject_o *parent, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  int32_t v7; // w20
  int32_t childCount; // w21
  Il2CppObject *Component_object; // x22

  if ( (byte_4AB7129 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, method);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v3);
    byte_4AB7129 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
    return 1;
  if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_19:
    sub_1BAB678(transform, v5);
  v7 = 0;
  while ( 1 )
  {
    childCount = UnityEngine_Transform__get_childCount(transform, 0LL);
    if ( v7 >= childCount )
      break;
    transform = UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( !transform )
      goto LABEL_19;
    transform = UnityEngine_Transform__GetChild(transform, v7, 0LL);
    if ( !transform )
      goto LABEL_19;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)transform,
                         (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_19;
      if ( !BYTE6(Component_object[27].klass) )
        break;
    }
    ++v7;
    transform = UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( !transform )
      goto LABEL_19;
  }
  return v7 >= childCount;
}


bool __fastcall ProgramEffectManager__IsStart_41076808(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v7; // x1
  int32_t v9; // w21
  int32_t childCount; // w22
  Il2CppObject *Component_object; // x23

  if ( (byte_4AB712A & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, effectName);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v5);
    byte_4AB712A = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
    return 1;
  if ( !effectName )
    return ProgramEffectManager__IsBusy(parent, v7);
  if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_21:
    sub_1BAB678(transform, v7);
  v9 = 0;
  while ( 1 )
  {
    childCount = UnityEngine_Transform__get_childCount(transform, 0LL);
    if ( v9 >= childCount )
      break;
    transform = UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( !transform )
      goto LABEL_21;
    transform = UnityEngine_Transform__GetChild(transform, v9, 0LL);
    if ( !transform )
      goto LABEL_21;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)transform,
                         (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_21;
      if ( System_String__Equals_62056444(effectName, (System_String_o *)Component_object[25].klass, 0LL)
        && !BYTE6(Component_object[27].klass) )
      {
        break;
      }
    }
    ++v9;
    transform = UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( !transform )
      goto LABEL_21;
  }
  return v9 >= childCount;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ProgramEffectManager__Resume(UnityEngine_GameObject_o *parent, bool isSkip, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  int32_t v8; // w20
  _BOOL4 v9; // w21
  Il2CppObject *Component_object; // x22

  if ( (byte_4AB7130 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, isSkip);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v5);
    byte_4AB7130 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_19:
      sub_1BAB678(transform, v7);
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
          Component_object = UnityEngine_Component__GetComponent_object_(
                               (UnityEngine_Component_o *)transform,
                               (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)Component_object,
                                                   0LL,
                                                   0LL);
          if ( ((unsigned __int8)transform & 1) != 0 )
          {
            if ( !Component_object )
              goto LABEL_19;
            ((void (__fastcall *)(Il2CppObject *, _BOOL4, Il2CppMethodPointer))Component_object->klass->vtable[43].method)(
              Component_object,
              v9,
              Component_object->klass->vtable[44].methodPtr);
          }
          ++v8;
          transform = UnityEngine_GameObject__get_transform(parent, 0LL);
          if ( transform )
            continue;
        }
      }
      goto LABEL_19;
    }
  }
}


void __fastcall ProgramEffectManager__Resume_41079208(
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
  Il2CppObject *Component_object; // x23

  if ( (byte_4AB7131 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, effectName);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v7);
    byte_4AB7131 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( effectName )
    {
      if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_21:
        sub_1BAB678(transform, v9);
      v11 = 0;
      while ( v11 < UnityEngine_Transform__get_childCount(transform, 0LL) )
      {
        transform = UnityEngine_GameObject__get_transform(parent, 0LL);
        if ( transform )
        {
          transform = UnityEngine_Transform__GetChild(transform, v11, 0LL);
          if ( transform )
          {
            Component_object = UnityEngine_Component__GetComponent_object_(
                                 (UnityEngine_Component_o *)transform,
                                 (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)Component_object,
                                                     0LL,
                                                     0LL);
            if ( ((unsigned __int8)transform & 1) != 0 )
            {
              if ( !Component_object )
                goto LABEL_21;
              if ( System_String__Equals_62056444(effectName, (System_String_o *)Component_object[25].klass, 0LL) )
                ((void (__fastcall *)(Il2CppObject *, bool, Il2CppMethodPointer))Component_object->klass->vtable[43].method)(
                  Component_object,
                  isSkip,
                  Component_object->klass->vtable[44].methodPtr);
            }
            ++v11;
            transform = UnityEngine_GameObject__get_transform(parent, 0LL);
            if ( transform )
              continue;
          }
        }
        goto LABEL_21;
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
  Il2CppObject *Component_object; // x21

  if ( (byte_4AB7132 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, method);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v3);
    byte_4AB7132 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_19:
      sub_1BAB678(transform, v5);
    v6 = 0;
    while ( v6 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( transform )
      {
        transform = UnityEngine_Transform__GetChild(transform, v6, 0LL);
        if ( transform )
        {
          Component_object = UnityEngine_Component__GetComponent_object_(
                               (UnityEngine_Component_o *)transform,
                               (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)Component_object,
                                                   0LL,
                                                   0LL);
          if ( ((unsigned __int8)transform & 1) != 0 )
          {
            if ( !Component_object )
              goto LABEL_19;
            ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Component_object->klass->vtable[44].method)(
              Component_object,
              Component_object->klass->vtable[45].methodPtr);
          }
          ++v6;
          transform = UnityEngine_GameObject__get_transform(parent, 0LL);
          if ( transform )
            continue;
        }
      }
      goto LABEL_19;
    }
  }
}


void __fastcall ProgramEffectManager__Stop_41079880(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w21
  Il2CppObject *Component_object; // x22

  if ( (byte_4AB7133 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, effectName);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v5);
    byte_4AB7133 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( effectName )
    {
      if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_21:
        sub_1BAB678(transform, v7);
      v8 = 0;
      while ( v8 < UnityEngine_Transform__get_childCount(transform, 0LL) )
      {
        transform = UnityEngine_GameObject__get_transform(parent, 0LL);
        if ( transform )
        {
          transform = UnityEngine_Transform__GetChild(transform, v8, 0LL);
          if ( transform )
          {
            Component_object = UnityEngine_Component__GetComponent_object_(
                                 (UnityEngine_Component_o *)transform,
                                 (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)Component_object,
                                                     0LL,
                                                     0LL);
            if ( ((unsigned __int8)transform & 1) != 0 )
            {
              if ( !Component_object )
                goto LABEL_21;
              if ( System_String__Equals_62056444(effectName, (System_String_o *)Component_object[25].klass, 0LL) )
                ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Component_object->klass->vtable[44].method)(
                  Component_object,
                  Component_object->klass->vtable[45].methodPtr);
            }
            ++v8;
            transform = UnityEngine_GameObject__get_transform(parent, 0LL);
            if ( transform )
              continue;
          }
        }
        goto LABEL_21;
      }
    }
    else
    {
      ProgramEffectManager__Stop(parent, v7);
    }
  }
}