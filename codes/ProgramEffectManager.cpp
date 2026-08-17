void ProgramEffectManager___ctor(ProgramEffectManager_o *this, const MethodInfo *method)
{
  if ( (byte_5971FA9 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_ProgramEffectManager___ctor__);
    byte_5971FA9 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_47A2F28 *)Method_SingletonMonoBehaviour_ProgramEffectManager___ctor__);
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
        bool isContinueSilhouette,
        const MethodInfo *method)
{
  float a; // s11
  float b; // s12
  float g; // s8
  float r; // s9
  float z; // s13
  float y; // s14
  float x; // s15
  UnityEngine_GameObject_o *v23; // x0
  __int64 v24; // x1
  UnityEngine_GameObject_o *v25; // x22
  Il2CppObject *Component_object; // x23
  UnityEngine_Transform_o *transform; // x24
  float v28; // s8
  float v29; // s9
  float v30; // s10
  const MethodInfo *v31; // x4
  float v33; // [xsp+4h] [xbp-8Ch]
  float v34; // [xsp+8h] [xbp-88h]
  float colora; // [xsp+Ch] [xbp-84h]
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v39; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_5971FA2 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971FA2 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, prefab);
  v23 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                      (Il2CppObject *)prefab,
                                      (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v23 )
    goto LABEL_13;
  v33 = time;
  v34 = r;
  v25 = v23;
  colora = g;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v23,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___);
  transform = UnityEngine_GameObject__get_transform(v25, 0);
  v23 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v25, 0);
  if ( !v23 )
    goto LABEL_13;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)v23, 0);
  if ( !parent )
    goto LABEL_13;
  v28 = localScale.fields.x;
  v29 = localScale.fields.y;
  v30 = localScale.fields.z;
  v23 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0);
  if ( !transform )
    goto LABEL_13;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)v23, 0);
  v37.fields.x = x;
  v37.fields.y = y;
  v37.fields.z = z;
  UnityEngine_Transform__set_localPosition(transform, v37, 0);
  if ( !byte_5969AE6 )
  {
    sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
    byte_5969AE6 = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0);
  v38.fields.x = v28;
  v38.fields.y = v29;
  v38.fields.z = v30;
  UnityEngine_Transform__set_localScale(transform, v38, 0);
  if ( !Component_object )
LABEL_13:
    sub_2213CDC(v23, v24);
  v39.fields.b = b;
  v39.fields.a = a;
  v39.fields.r = v34;
  v39.fields.g = colora;
  ProgramEffectComponent__Init(
    (ProgramEffectComponent_o *)Component_object,
    v33,
    v39,
    range,
    isSkip,
    isPause,
    isContinueSilhouette,
    v31);
  return v25;
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
        bool isContinueSilhouette,
        const MethodInfo *method)
{
  float b; // s9
  float g; // s10
  float r; // s11
  float z; // s13
  float y; // s14
  float x; // s15
  __int64 v22; // x1
  UnityEngine_Object_o *CharaEffectPrefab; // x23
  const MethodInfo *v24; // x5
  float colora; // [xsp+Ch] [xbp-84h]
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v28; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  b = color.fields.b;
  g = color.fields.g;
  colora = color.fields.a;
  r = color.fields.r;
  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_5971FA1 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971FA1 = 1;
  }
  CharaEffectPrefab = (UnityEngine_Object_o *)ProgramEffectManager__GetCharaEffectPrefab(
                                                effectName,
                                                (const MethodInfo *)effectName);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
  if ( !UnityEngine_Object__op_Inequality(CharaEffectPrefab, 0, 0) )
    return 0;
  v27.fields.x = x;
  v27.fields.y = y;
  v27.fields.z = z;
  v28.fields.r = r;
  v28.fields.g = g;
  v28.fields.b = b;
  v28.fields.a = colora;
  return ProgramEffectManager__Create(
           parent,
           (UnityEngine_GameObject_o *)CharaEffectPrefab,
           v27,
           time,
           v28,
           range,
           isSkip,
           isPause,
           isContinueSilhouette,
           v24);
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
  __int64 v20; // x1
  UnityEngine_Object_o *MainEffectPrefab; // x22
  const MethodInfo *v22; // x5
  float colora; // [xsp+4Ch] [xbp-34h]
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v26; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  b = color.fields.b;
  g = color.fields.g;
  colora = color.fields.a;
  r = color.fields.r;
  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_5971FA0 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971FA0 = 1;
  }
  MainEffectPrefab = (UnityEngine_Object_o *)ProgramEffectManager__GetMainEffectPrefab(
                                               effectName,
                                               (const MethodInfo *)effectName);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
  if ( !UnityEngine_Object__op_Inequality(MainEffectPrefab, 0, 0) )
    return 0;
  v25.fields.z = z;
  v26.fields.r = r;
  v26.fields.g = g;
  v26.fields.b = b;
  v26.fields.a = colora;
  v25.fields.x = x;
  v25.fields.y = y;
  return ProgramEffectManager__Create(
           parent,
           (UnityEngine_GameObject_o *)MainEffectPrefab,
           v25,
           time,
           v26,
           range,
           isSkip,
           isPause,
           0,
           v22);
}


void ProgramEffectManager__Destory(UnityEngine_GameObject_o *parent, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  int32_t v6; // w21
  UnityEngine_Component_o *v7; // x22
  __int64 v8; // x1
  Il2CppObject *Component_object; // x23
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  UnityEngine_Transform_o *v19; // x1
  Il2CppClass **v20; // x0
  __int64 v21; // x1
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_5971FA7 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971FA7 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
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
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
    {
      transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v7, 0);
      if ( !v3 )
        goto LABEL_18;
      items = v3->fields._items;
      v17 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v3->fields._version;
      if ( !items )
        goto LABEL_18;
      size = v3->fields._size;
      v19 = transform;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)transform,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v19;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v19, v10, v11, v12, v13, v14, v15);
      }
    }
    ++v6;
    transform = UnityEngine_GameObject__get_transform(parent, 0);
    if ( !transform )
      goto LABEL_18;
  }
  if ( !v3 )
LABEL_18:
    sub_2213CDC(transform, v5);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    v3,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
    UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


void ProgramEffectManager__Destory_50796448(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  int32_t v8; // w22
  UnityEngine_Component_o *v9; // x23
  __int64 v10; // x1
  Il2CppObject *Component_object; // x24
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  UnityEngine_Transform_o *v21; // x1
  Il2CppClass **v22; // x0
  __int64 v23; // x1
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_5971FA8 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971FA8 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  if ( effectName )
  {
    v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
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
                           (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0,
                                               0);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_21;
        if ( System_String__Equals_75686512(effectName, (System_String_o *)Component_object[25].klass, 0) )
        {
          transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v9, 0);
          if ( !v5 )
            goto LABEL_21;
          items = v5->fields._items;
          v19 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v5->fields._version;
          if ( !items )
            goto LABEL_21;
          size = v5->fields._size;
          v21 = transform;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)transform,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v22[4] = (Il2CppClass *)v21;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v21, v12, v13, v14, v15, v16, v17);
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
      sub_2213CDC(transform, v7);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v25,
      v5,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v25,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v25.fields._current;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
      UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v25,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  }
  else
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, effectName);
    UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)parent, 0);
  }
}


ProgramEffectComponent_array *ProgramEffectManager__Get(UnityEngine_GameObject_o *parent, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1
  int32_t v7; // w21
  __int64 v8; // x1
  Il2CppObject *Component_object; // x22
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_5971F99 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_ProgramEffectComponent__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ProgramEffectComponent__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_ProgramEffectComponent___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ProgramEffectComponent__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971F99 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ProgramEffectComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ProgramEffectComponent___ctor__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)parent, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0)) == 0 )
LABEL_21:
      sub_2213CDC(transform, v6);
    v7 = 0;
    while ( 1 )
    {
      transform = (UnityEngine_Transform_o *)UnityEngine_Transform__get_childCount(transform, 0);
      if ( v7 >= (int)transform )
        break;
      transform = UnityEngine_GameObject__get_transform(parent, 0);
      if ( !transform )
        goto LABEL_21;
      transform = UnityEngine_Transform__GetChild(transform, v7, 0);
      if ( !transform )
        goto LABEL_21;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)transform,
                           (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0,
                                               0);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v3 )
          goto LABEL_21;
        items = v3->fields._items;
        v17 = Method_System_Collections_Generic_List_ProgramEffectComponent__Add__;
        ++v3->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            Component_object,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v19[4] = (Il2CppClass *)Component_object;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)(v19 + 4),
            (int32_t)Component_object,
            v10,
            v11,
            v12,
            v13,
            v14,
            v15);
        }
      }
      ++v7;
      transform = UnityEngine_GameObject__get_transform(parent, 0);
      if ( !transform )
        goto LABEL_21;
    }
  }
  if ( !v3 )
    goto LABEL_21;
  return (ProgramEffectComponent_array *)System_Collections_Generic_List_object___ToArray(
                                           v3,
                                           (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_ProgramEffectComponent__ToArray__);
}


UnityEngine_GameObject_o *ProgramEffectManager__GetCharaEffectPrefab(
        System_String_o *effectName,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  bool v5; // w0
  UnityEngine_GameObject_o *v6; // x20
  Il2CppObject *Component_object; // x0
  __int64 v8; // x1
  _DWORD *monitor; // x21
  int v10; // w8
  __int64 v11; // x22

  if ( (byte_5971F9F & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__);
    byte_5971F9F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  v6 = 0;
  if ( !v5 )
  {
    Component_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__);
    if ( !Component_object )
      goto LABEL_18;
    monitor = Component_object[2].monitor;
    if ( !monitor )
      goto LABEL_18;
    v10 = monitor[6];
    if ( v10 >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v11 >= v10 )
          sub_2213CE4(Component_object);
        v6 = *(UnityEngine_GameObject_o **)&monitor[2 * v11 + 8];
        if ( !v6 )
          break;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             *(UnityEngine_GameObject_o **)&monitor[2 * v11 + 8],
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___);
        if ( !Component_object || !effectName )
          break;
        Component_object = (Il2CppObject *)System_String__Equals_75686512(
                                             effectName,
                                             (System_String_o *)Component_object[25].klass,
                                             0);
        if ( ((unsigned __int8)Component_object & 1) != 0 )
          return v6;
        v10 = monitor[6];
        if ( (int)++v11 >= v10 )
          return 0;
      }
LABEL_18:
      sub_2213CDC(Component_object, v8);
    }
    return 0;
  }
  return v6;
}


UnityEngine_GameObject_o *ProgramEffectManager__GetMainEffectPrefab(
        System_String_o *effectName,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  bool v5; // w0
  UnityEngine_GameObject_o *v6; // x20
  Il2CppObject *Component_object; // x0
  __int64 v8; // x1
  Il2CppClass *klass; // x21
  int namespaze; // w8
  __int64 v11; // x22

  if ( (byte_5971F9E & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__);
    byte_5971F9E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  v6 = 0;
  if ( !v5 )
  {
    Component_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__);
    if ( !Component_object )
      goto LABEL_18;
    klass = Component_object[2].klass;
    if ( !klass )
      goto LABEL_18;
    namespaze = (int)klass->_1.namespaze;
    if ( namespaze >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v11 >= namespaze )
          sub_2213CE4(Component_object);
        v6 = (UnityEngine_GameObject_o *)*((_QWORD *)&klass->_1.byval_arg.data + v11);
        if ( !v6 )
          break;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             *((UnityEngine_GameObject_o **)&klass->_1.byval_arg.data + v11),
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___);
        if ( !Component_object || !effectName )
          break;
        Component_object = (Il2CppObject *)System_String__Equals_75686512(
                                             effectName,
                                             (System_String_o *)Component_object[25].klass,
                                             0);
        if ( ((unsigned __int8)Component_object & 1) != 0 )
          return v6;
        namespaze = (int)klass->_1.namespaze;
        if ( (int)++v11 >= namespaze )
          return 0;
      }
LABEL_18:
      sub_2213CDC(Component_object, v8);
    }
    return 0;
  }
  return v6;
}


bool ProgramEffectManager__IsBusy(UnityEngine_GameObject_o *parent, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  bool v5; // w21
  int32_t v7; // w20
  int32_t childCount; // w0
  __int64 v9; // x1
  Il2CppObject *Component_object; // x22

  if ( (byte_5971F9A & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971F9A = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
    return 0;
  if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0)) == 0 )
LABEL_18:
    sub_2213CDC(transform, v4);
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
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
      return v5;
    ++v7;
    transform = UnityEngine_GameObject__get_transform(parent, 0);
    if ( !transform )
      goto LABEL_18;
  }
}


bool ProgramEffectManager__IsBusy_50791604(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v6; // x1
  bool v7; // w22
  int32_t v9; // w21
  int32_t childCount; // w0
  __int64 v11; // x1
  Il2CppObject *Component_object; // x23

  if ( (byte_5971F9B & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971F9B = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, effectName);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
    return 0;
  if ( effectName )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0)) == 0 )
LABEL_21:
      sub_2213CDC(transform, v6);
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
                           (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0,
                                               0);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_21;
        if ( System_String__Equals_75686512(effectName, (System_String_o *)Component_object[25].klass, 0) )
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
  bool v5; // w21
  int32_t v7; // w20
  int32_t childCount; // w0
  __int64 v9; // x1
  Il2CppObject *Component_object; // x22

  if ( (byte_5971F9C & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971F9C = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
    return 1;
  if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0)) == 0 )
LABEL_20:
    sub_2213CDC(transform, v4);
  v7 = 0;
  while ( 1 )
  {
    childCount = UnityEngine_Transform__get_childCount(transform, 0);
    v5 = v7 >= childCount;
    if ( v7 >= childCount )
      return v5;
    transform = UnityEngine_GameObject__get_transform(parent, 0);
    if ( !transform )
      goto LABEL_20;
    transform = UnityEngine_Transform__GetChild(transform, v7, 0);
    if ( !transform )
      goto LABEL_20;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)transform,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_20;
      if ( !BYTE6(Component_object[27].klass) )
        return v5;
    }
    ++v7;
    transform = UnityEngine_GameObject__get_transform(parent, 0);
    if ( !transform )
      goto LABEL_20;
  }
}


bool ProgramEffectManager__IsStart_50792264(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v6; // x1
  bool v7; // w22
  int32_t v9; // w21
  int32_t childCount; // w0
  __int64 v11; // x1
  Il2CppObject *Component_object; // x23

  if ( (byte_5971F9D & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971F9D = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, effectName);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
    return 1;
  if ( effectName )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0)) == 0 )
LABEL_22:
      sub_2213CDC(transform, v6);
    v9 = 0;
    while ( 1 )
    {
      childCount = UnityEngine_Transform__get_childCount(transform, 0);
      v7 = v9 >= childCount;
      if ( v9 >= childCount )
        return v7;
      transform = UnityEngine_GameObject__get_transform(parent, 0);
      if ( !transform )
        goto LABEL_22;
      transform = UnityEngine_Transform__GetChild(transform, v9, 0);
      if ( !transform )
        goto LABEL_22;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)transform,
                           (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0,
                                               0);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_22;
        if ( System_String__Equals_75686512(effectName, (System_String_o *)Component_object[25].klass, 0)
          && !BYTE6(Component_object[27].klass) )
        {
          return v7;
        }
      }
      ++v9;
      transform = UnityEngine_GameObject__get_transform(parent, 0);
      if ( !transform )
        goto LABEL_22;
    }
  }
  return ProgramEffectManager__IsBusy(parent, v6);
}


// local variable allocation has failed, the output may be wrong!
void ProgramEffectManager__Resume(UnityEngine_GameObject_o *parent, bool isSkip, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1
  int32_t v7; // w21
  __int64 v8; // x1
  Il2CppObject *Component_object; // x22

  if ( (byte_5971FA3 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971FA3 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isSkip);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0, 0);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0)) == 0 )
LABEL_19:
      sub_2213CDC(transform, v6);
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
                               (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
          transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)Component_object,
                                                   0,
                                                   0);
          if ( ((unsigned __int8)transform & 1) != 0 )
          {
            if ( !Component_object )
              goto LABEL_19;
            ((void (__fastcall *)(Il2CppObject *, bool, const MethodInfo *))Component_object->klass->vtable[43].methodPtr)(
              Component_object,
              isSkip,
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


void ProgramEffectManager__Resume_50794700(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        bool isSkip,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  int32_t v10; // w22
  __int64 v11; // x1
  Il2CppObject *Component_object; // x23

  if ( (byte_5971FA4 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971FA4 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, effectName);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0, 0);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( effectName )
    {
      if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0)) == 0 )
LABEL_21:
        sub_2213CDC(transform, v8);
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
                                 (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
            transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)Component_object,
                                                     0,
                                                     0);
            if ( ((unsigned __int8)transform & 1) != 0 )
            {
              if ( !Component_object )
                goto LABEL_21;
              if ( System_String__Equals_75686512(effectName, (System_String_o *)Component_object[25].klass, 0) )
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
  __int64 v6; // x1
  Il2CppObject *Component_object; // x21

  if ( (byte_5971FA5 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971FA5 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0, 0);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0)) == 0 )
LABEL_19:
      sub_2213CDC(transform, v4);
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
                               (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
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


void ProgramEffectManager__Stop_50795372(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v6; // x1
  int32_t v7; // w21
  __int64 v8; // x1
  Il2CppObject *Component_object; // x22

  if ( (byte_5971FA6 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971FA6 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, effectName);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0, 0);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( effectName )
    {
      if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0)) == 0 )
LABEL_21:
        sub_2213CDC(transform, v6);
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
                                 (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
            transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)Component_object,
                                                     0,
                                                     0);
            if ( ((unsigned __int8)transform & 1) != 0 )
            {
              if ( !Component_object )
                goto LABEL_21;
              if ( System_String__Equals_75686512(effectName, (System_String_o *)Component_object[25].klass, 0) )
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