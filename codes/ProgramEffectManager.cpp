void ProgramEffectManager___ctor(ProgramEffectManager_o *this, const MethodInfo *method)
{
  if ( (byte_4CC8B0A & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_ProgramEffectManager___ctor__);
    byte_4CC8B0A = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3A5F640 *)Method_SingletonMonoBehaviour_ProgramEffectManager___ctor__);
}


UnityEngine_GameObject_o *ProgramEffectManager__Create(
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
  UnityEngine_GameObject_o *v21; // x0
  __int64 v22; // x1
  UnityEngine_GameObject_o *v23; // x21
  Il2CppObject *Component_object; // x22
  UnityEngine_Transform_o *transform; // x24
  float v26; // s8
  float v27; // s9
  float v28; // s10
  const MethodInfo *v29; // x3
  float timea; // [xsp+Ch] [xbp-84h]
  float v32; // [xsp+58h] [xbp-38h]
  float v33; // [xsp+5Ch] [xbp-34h]
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v37; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4CC8B03 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___);
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8B03 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v21 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                      (Il2CppObject *)prefab,
                                      (const MethodInfo_31D7CB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v21 )
    goto LABEL_13;
  timea = time;
  v32 = r;
  v33 = g;
  v23 = v21;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v21,
                       (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___);
  transform = UnityEngine_GameObject__get_transform(v23, 0);
  v21 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v23, 0);
  if ( !v21 )
    goto LABEL_13;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)v21, 0);
  if ( !parent )
    goto LABEL_13;
  v26 = localScale.fields.x;
  v27 = localScale.fields.y;
  v28 = localScale.fields.z;
  v21 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0);
  if ( !transform )
    goto LABEL_13;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)v21, 0);
  v35.fields.x = x;
  v35.fields.y = y;
  v35.fields.z = z;
  UnityEngine_Transform__set_localPosition(transform, v35, 0);
  if ( !byte_4CC0D0F )
  {
    sub_1C713B0(&UnityEngine_Quaternion_TypeInfo);
    byte_4CC0D0F = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0);
  v36.fields.x = v26;
  v36.fields.y = v27;
  v36.fields.z = v28;
  UnityEngine_Transform__set_localScale(transform, v36, 0);
  if ( !Component_object )
LABEL_13:
    sub_1C71608(v21, v22);
  v37.fields.r = v32;
  v37.fields.g = v33;
  v37.fields.b = b;
  v37.fields.a = a;
  ProgramEffectComponent__Init((ProgramEffectComponent_o *)Component_object, timea, v37, range, isSkip, isPause, v29);
  return v23;
}


UnityEngine_GameObject_o *ProgramEffectManager__CreateCharaEffect(
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
  if ( (byte_4CC8B02 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8B02 = 1;
  }
  CharaEffectPrefab = (UnityEngine_Object_o *)ProgramEffectManager__GetCharaEffectPrefab(
                                                effectName,
                                                (const MethodInfo *)effectName);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(CharaEffectPrefab, 0, 0) )
    return 0;
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


UnityEngine_GameObject_o *ProgramEffectManager__CreateMainEffect(
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
  if ( (byte_4CC8B01 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8B01 = 1;
  }
  MainEffectPrefab = (UnityEngine_Object_o *)ProgramEffectManager__GetMainEffectPrefab(
                                               effectName,
                                               (const MethodInfo *)effectName);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(MainEffectPrefab, 0, 0) )
    return 0;
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


void ProgramEffectManager__Destory(UnityEngine_GameObject_o *parent, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  int32_t v6; // w21
  UnityEngine_Component_o *v7; // x22
  Il2CppObject *Component_object; // x23
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  UnityEngine_Transform_o *v18; // x1
  Il2CppClass **v19; // x0
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4CC8B08 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8B08 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( !parent )
    goto LABEL_18;
  transform = UnityEngine_GameObject__get_transform(parent, 0);
  if ( !transform )
    goto LABEL_18;
  v6 = 0;
  while ( 1 )
  {
    transform = (UnityEngine_Transform_o *)UnityEngine_Transform__get_childCount(transform, 0);
    if ( v6 >= (int)transform )
      break;
    transform = UnityEngine_GameObject__get_transform(parent, 0);
    if ( !transform )
      goto LABEL_18;
    transform = UnityEngine_Transform__GetChild(transform, v6, 0);
    if ( !transform )
      goto LABEL_18;
    v7 = (UnityEngine_Component_o *)transform;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)transform,
                         (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
    {
      transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v7, 0);
      if ( !v3 )
        goto LABEL_18;
      items = v3->fields._items;
      v16 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v3->fields._version;
      if ( !items )
        goto LABEL_18;
      size = v3->fields._size;
      v18 = transform;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)transform,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      }
      else
      {
        v19 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v19[4] = (Il2CppClass *)v18;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)v18, v9, v10, v11, v12, v13, v14);
      }
    }
    ++v6;
    transform = UnityEngine_GameObject__get_transform(parent, 0);
    if ( !transform )
      goto LABEL_18;
  }
  if ( !v3 )
LABEL_18:
    sub_1C71608(transform, v5);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    v3,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v21.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71724608((UnityEngine_Object_o *)current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


void ProgramEffectManager__Destory_44074092(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  int32_t v8; // w22
  UnityEngine_Component_o *v9; // x23
  Il2CppObject *Component_object; // x24
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  UnityEngine_Transform_o *v20; // x1
  Il2CppClass **v21; // x0
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4CC8B09 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8B09 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  if ( effectName )
  {
    v5 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    if ( !parent )
      goto LABEL_21;
    transform = UnityEngine_GameObject__get_transform(parent, 0);
    if ( !transform )
      goto LABEL_21;
    v8 = 0;
    while ( 1 )
    {
      transform = (UnityEngine_Transform_o *)UnityEngine_Transform__get_childCount(transform, 0);
      if ( v8 >= (int)transform )
        break;
      transform = UnityEngine_GameObject__get_transform(parent, 0);
      if ( !transform )
        goto LABEL_21;
      transform = UnityEngine_Transform__GetChild(transform, v8, 0);
      if ( !transform )
        goto LABEL_21;
      v9 = (UnityEngine_Component_o *)transform;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)transform,
                           (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0,
                                               0);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_21;
        if ( System_String__Equals_64067044(effectName, (System_String_o *)Component_object[25].klass, 0) )
        {
          transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v9, 0);
          if ( !v5 )
            goto LABEL_21;
          items = v5->fields._items;
          v18 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v5->fields._version;
          if ( !items )
            goto LABEL_21;
          size = v5->fields._size;
          v20 = transform;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)transform,
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v21[4] = (Il2CppClass *)v20;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v21 + 4), (int32_t)v20, v11, v12, v13, v14, v15, v16);
          }
        }
      }
      ++v8;
      transform = UnityEngine_GameObject__get_transform(parent, 0);
      if ( !transform )
        goto LABEL_21;
    }
    if ( !v5 )
LABEL_21:
      sub_1C71608(transform, v7);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v23,
      v5,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v23,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v23.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71724608((UnityEngine_Object_o *)current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v23,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  }
  else
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71724608((UnityEngine_Object_o *)parent, 0);
  }
}


ProgramEffectComponent_array *ProgramEffectManager__Get(UnityEngine_GameObject_o *parent, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  int32_t v6; // w21
  Il2CppObject *Component_object; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0

  if ( (byte_4CC8AFA & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    sub_1C713B0(&Method_System_Collections_Generic_List_ProgramEffectComponent__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ProgramEffectComponent__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ProgramEffectComponent___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_ProgramEffectComponent__TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8AFA = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_ProgramEffectComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_ProgramEffectComponent___ctor__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)parent, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0)) == 0 )
LABEL_24:
      sub_1C71608(transform, v5);
    v6 = 0;
    while ( 1 )
    {
      transform = (UnityEngine_Transform_o *)UnityEngine_Transform__get_childCount(transform, 0);
      if ( v6 >= (int)transform )
        break;
      transform = UnityEngine_GameObject__get_transform(parent, 0);
      if ( !transform )
        goto LABEL_24;
      transform = UnityEngine_Transform__GetChild(transform, v6, 0);
      if ( !transform )
        goto LABEL_24;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)transform,
                           (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0,
                                               0);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v3 )
          goto LABEL_24;
        items = v3->fields._items;
        v15 = Method_System_Collections_Generic_List_ProgramEffectComponent__Add__;
        ++v3->fields._version;
        if ( !items )
          goto LABEL_24;
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            Component_object,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v17[4] = (Il2CppClass *)Component_object;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v17 + 4), (int32_t)Component_object, v8, v9, v10, v11, v12, v13);
        }
      }
      ++v6;
      transform = UnityEngine_GameObject__get_transform(parent, 0);
      if ( !transform )
        goto LABEL_24;
    }
  }
  if ( !v3 )
    goto LABEL_24;
  return (ProgramEffectComponent_array *)System_Collections_Generic_List_object___ToArray(
                                           v3,
                                           (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_ProgramEffectComponent__ToArray__);
}


UnityEngine_GameObject_o *ProgramEffectManager__GetCharaEffectPrefab(
        System_String_o *effectName,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  bool v4; // w0
  UnityEngine_GameObject_o *v5; // x20
  Il2CppObject *Component_object; // x0
  __int64 v7; // x1
  _DWORD *monitor; // x21
  int v9; // w8
  unsigned int v10; // w22
  char *v11; // x8

  if ( (byte_4CC8B00 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__);
    byte_4CC8B00 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  v5 = 0;
  if ( !v4 )
  {
    Component_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__);
    if ( !Component_object )
      goto LABEL_18;
    monitor = Component_object[2].monitor;
    if ( !monitor )
      goto LABEL_18;
    v9 = monitor[6];
    if ( v9 >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        if ( v10 >= v9 )
          sub_1C71610(Component_object);
        v11 = (char *)&monitor[2 * v10];
        v5 = (UnityEngine_GameObject_o *)*((_QWORD *)v11 + 4);
        if ( !v5 )
          break;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             *((UnityEngine_GameObject_o **)v11 + 4),
                             (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___);
        if ( !Component_object || !effectName )
          break;
        Component_object = (Il2CppObject *)System_String__Equals_64067044(
                                             effectName,
                                             (System_String_o *)Component_object[25].klass,
                                             0);
        if ( ((unsigned __int8)Component_object & 1) != 0 )
          return v5;
        v9 = monitor[6];
        if ( (int)++v10 >= v9 )
          return 0;
      }
LABEL_18:
      sub_1C71608(Component_object, v7);
    }
    return 0;
  }
  return v5;
}


UnityEngine_GameObject_o *ProgramEffectManager__GetMainEffectPrefab(
        System_String_o *effectName,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  bool v4; // w0
  UnityEngine_GameObject_o *v5; // x20
  Il2CppObject *Component_object; // x0
  __int64 v7; // x1
  Il2CppClass *klass; // x21
  int namespaze; // w8
  unsigned int v10; // w22
  void **v11; // x8

  if ( (byte_4CC8AFF & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__);
    byte_4CC8AFF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  v5 = 0;
  if ( !v4 )
  {
    Component_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__);
    if ( !Component_object )
      goto LABEL_18;
    klass = Component_object[2].klass;
    if ( !klass )
      goto LABEL_18;
    namespaze = (int)klass->_1.namespaze;
    if ( namespaze >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        if ( v10 >= namespaze )
          sub_1C71610(Component_object);
        v11 = &klass->_1.image + (int)v10;
        v5 = (UnityEngine_GameObject_o *)v11[4];
        if ( !v5 )
          break;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v11[4],
                             (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___);
        if ( !Component_object || !effectName )
          break;
        Component_object = (Il2CppObject *)System_String__Equals_64067044(
                                             effectName,
                                             (System_String_o *)Component_object[25].klass,
                                             0);
        if ( ((unsigned __int8)Component_object & 1) != 0 )
          return v5;
        namespaze = (int)klass->_1.namespaze;
        if ( (int)++v10 >= namespaze )
          return 0;
      }
LABEL_18:
      sub_1C71608(Component_object, v7);
    }
    return 0;
  }
  return v5;
}


bool ProgramEffectManager__IsBusy(UnityEngine_GameObject_o *parent, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  bool v5; // w21
  int32_t v7; // w20
  int32_t childCount; // w0
  Il2CppObject *Component_object; // x22

  if ( (byte_4CC8AFB & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8AFB = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
    return 0;
  if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0)) == 0 )
LABEL_18:
    sub_1C71608(transform, v4);
  v7 = 0;
  while ( 1 )
  {
    childCount = UnityEngine_Transform__get_childCount(transform, 0);
    v5 = v7 < childCount;
    if ( v7 >= childCount )
      return v5;
    transform = UnityEngine_GameObject__get_transform(parent, 0);
    if ( !transform )
      goto LABEL_18;
    transform = UnityEngine_Transform__GetChild(transform, v7, 0);
    if ( !transform )
      goto LABEL_18;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)transform,
                         (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
      return v5;
    ++v7;
    transform = UnityEngine_GameObject__get_transform(parent, 0);
    if ( !transform )
      goto LABEL_18;
  }
}


bool ProgramEffectManager__IsBusy_44069264(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v6; // x1
  bool v7; // w22
  int32_t v9; // w21
  int32_t childCount; // w0
  Il2CppObject *Component_object; // x23

  if ( (byte_4CC8AFC & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8AFC = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
    return 0;
  if ( effectName )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0)) == 0 )
LABEL_21:
      sub_1C71608(transform, v6);
    v9 = 0;
    while ( 1 )
    {
      childCount = UnityEngine_Transform__get_childCount(transform, 0);
      v7 = v9 < childCount;
      if ( v9 >= childCount )
        return v7;
      transform = UnityEngine_GameObject__get_transform(parent, 0);
      if ( !transform )
        goto LABEL_21;
      transform = UnityEngine_Transform__GetChild(transform, v9, 0);
      if ( !transform )
        goto LABEL_21;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)transform,
                           (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0,
                                               0);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_21;
        if ( System_String__Equals_64067044(effectName, (System_String_o *)Component_object[25].klass, 0) )
          return v7;
      }
      ++v9;
      transform = UnityEngine_GameObject__get_transform(parent, 0);
      if ( !transform )
        goto LABEL_21;
    }
  }
  return ProgramEffectManager__IsBusy(parent, v6);
}


bool ProgramEffectManager__IsStart(UnityEngine_GameObject_o *parent, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  int32_t v6; // w20
  int32_t childCount; // w21
  Il2CppObject *Component_object; // x22

  if ( (byte_4CC8AFD & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8AFD = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
    return 1;
  if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0)) == 0 )
LABEL_19:
    sub_1C71608(transform, v4);
  v6 = 0;
  while ( 1 )
  {
    childCount = UnityEngine_Transform__get_childCount(transform, 0);
    if ( v6 >= childCount )
      break;
    transform = UnityEngine_GameObject__get_transform(parent, 0);
    if ( !transform )
      goto LABEL_19;
    transform = UnityEngine_Transform__GetChild(transform, v6, 0);
    if ( !transform )
      goto LABEL_19;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)transform,
                         (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_19;
      if ( !BYTE6(Component_object[27].klass) )
        break;
    }
    ++v6;
    transform = UnityEngine_GameObject__get_transform(parent, 0);
    if ( !transform )
      goto LABEL_19;
  }
  return v6 >= childCount;
}


bool ProgramEffectManager__IsStart_44069932(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v6; // x1
  int32_t v8; // w21
  int32_t childCount; // w22
  Il2CppObject *Component_object; // x23

  if ( (byte_4CC8AFE & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8AFE = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
    return 1;
  if ( !effectName )
    return ProgramEffectManager__IsBusy(parent, v6);
  if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0)) == 0 )
LABEL_21:
    sub_1C71608(transform, v6);
  v8 = 0;
  while ( 1 )
  {
    childCount = UnityEngine_Transform__get_childCount(transform, 0);
    if ( v8 >= childCount )
      break;
    transform = UnityEngine_GameObject__get_transform(parent, 0);
    if ( !transform )
      goto LABEL_21;
    transform = UnityEngine_Transform__GetChild(transform, v8, 0);
    if ( !transform )
      goto LABEL_21;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)transform,
                         (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_21;
      if ( System_String__Equals_64067044(effectName, (System_String_o *)Component_object[25].klass, 0)
        && !BYTE6(Component_object[27].klass) )
      {
        break;
      }
    }
    ++v8;
    transform = UnityEngine_GameObject__get_transform(parent, 0);
    if ( !transform )
      goto LABEL_21;
  }
  return v8 >= childCount;
}


void ProgramEffectManager__Resume(UnityEngine_GameObject_o *parent, bool isSkip, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1
  int32_t v7; // w20
  _BOOL4 v8; // w21
  Il2CppObject *Component_object; // x22

  if ( (byte_4CC8B04 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8B04 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0, 0);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0)) == 0 )
LABEL_19:
      sub_1C71608(transform, v6);
    v7 = 0;
    v8 = isSkip;
    while ( v7 < UnityEngine_Transform__get_childCount(transform, 0) )
    {
      transform = UnityEngine_GameObject__get_transform(parent, 0);
      if ( transform )
      {
        transform = UnityEngine_Transform__GetChild(transform, v7, 0);
        if ( transform )
        {
          Component_object = UnityEngine_Component__GetComponent_object_(
                               (UnityEngine_Component_o *)transform,
                               (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)Component_object,
                                                   0,
                                                   0);
          if ( ((unsigned __int8)transform & 1) != 0 )
          {
            if ( !Component_object )
              goto LABEL_19;
            ((void (__fastcall *)(Il2CppObject *, _BOOL4, const MethodInfo *))Component_object->klass->vtable[43].methodPtr)(
              Component_object,
              v8,
              Component_object->klass->vtable[43].method);
          }
          ++v7;
          transform = UnityEngine_GameObject__get_transform(parent, 0);
          if ( transform )
            continue;
        }
      }
      goto LABEL_19;
    }
  }
}


void ProgramEffectManager__Resume_44072332(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        bool isSkip,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  int32_t v10; // w22
  Il2CppObject *Component_object; // x23

  if ( (byte_4CC8B05 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8B05 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0, 0);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( effectName )
    {
      if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0)) == 0 )
LABEL_21:
        sub_1C71608(transform, v8);
      v10 = 0;
      while ( v10 < UnityEngine_Transform__get_childCount(transform, 0) )
      {
        transform = UnityEngine_GameObject__get_transform(parent, 0);
        if ( transform )
        {
          transform = UnityEngine_Transform__GetChild(transform, v10, 0);
          if ( transform )
          {
            Component_object = UnityEngine_Component__GetComponent_object_(
                                 (UnityEngine_Component_o *)transform,
                                 (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)Component_object,
                                                     0,
                                                     0);
            if ( ((unsigned __int8)transform & 1) != 0 )
            {
              if ( !Component_object )
                goto LABEL_21;
              if ( System_String__Equals_64067044(effectName, (System_String_o *)Component_object[25].klass, 0) )
                ((void (__fastcall *)(Il2CppObject *, bool, const MethodInfo *))Component_object->klass->vtable[43].methodPtr)(
                  Component_object,
                  isSkip,
                  Component_object->klass->vtable[43].method);
            }
            ++v10;
            transform = UnityEngine_GameObject__get_transform(parent, 0);
            if ( transform )
              continue;
          }
        }
        goto LABEL_21;
      }
    }
    else
    {
      ProgramEffectManager__Resume(parent, isSkip, v9);
    }
  }
}


void ProgramEffectManager__Stop(UnityEngine_GameObject_o *parent, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  int32_t v5; // w20
  Il2CppObject *Component_object; // x21

  if ( (byte_4CC8B06 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8B06 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0, 0);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0)) == 0 )
LABEL_19:
      sub_1C71608(transform, v4);
    v5 = 0;
    while ( v5 < UnityEngine_Transform__get_childCount(transform, 0) )
    {
      transform = UnityEngine_GameObject__get_transform(parent, 0);
      if ( transform )
      {
        transform = UnityEngine_Transform__GetChild(transform, v5, 0);
        if ( transform )
        {
          Component_object = UnityEngine_Component__GetComponent_object_(
                               (UnityEngine_Component_o *)transform,
                               (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)Component_object,
                                                   0,
                                                   0);
          if ( ((unsigned __int8)transform & 1) != 0 )
          {
            if ( !Component_object )
              goto LABEL_19;
            ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))Component_object->klass->vtable[44].methodPtr)(
              Component_object,
              Component_object->klass->vtable[44].method);
          }
          ++v5;
          transform = UnityEngine_GameObject__get_transform(parent, 0);
          if ( transform )
            continue;
        }
      }
      goto LABEL_19;
    }
  }
}


void ProgramEffectManager__Stop_44073004(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v6; // x1
  int32_t v7; // w21
  Il2CppObject *Component_object; // x22

  if ( (byte_4CC8B07 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8B07 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0, 0);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( effectName )
    {
      if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0)) == 0 )
LABEL_21:
        sub_1C71608(transform, v6);
      v7 = 0;
      while ( v7 < UnityEngine_Transform__get_childCount(transform, 0) )
      {
        transform = UnityEngine_GameObject__get_transform(parent, 0);
        if ( transform )
        {
          transform = UnityEngine_Transform__GetChild(transform, v7, 0);
          if ( transform )
          {
            Component_object = UnityEngine_Component__GetComponent_object_(
                                 (UnityEngine_Component_o *)transform,
                                 (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)Component_object,
                                                     0,
                                                     0);
            if ( ((unsigned __int8)transform & 1) != 0 )
            {
              if ( !Component_object )
                goto LABEL_21;
              if ( System_String__Equals_64067044(effectName, (System_String_o *)Component_object[25].klass, 0) )
                ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))Component_object->klass->vtable[44].methodPtr)(
                  Component_object,
                  Component_object->klass->vtable[44].method);
            }
            ++v7;
            transform = UnityEngine_GameObject__get_transform(parent, 0);
            if ( transform )
              continue;
          }
        }
        goto LABEL_21;
      }
    }
    else
    {
      ProgramEffectManager__Stop(parent, v6);
    }
  }
}