void __fastcall ProgramEffectManager___ctor(ProgramEffectManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B175F8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ProgramEffectManager___ctor__, method, v2);
    byte_4B175F8 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_37DEF2C *)Method_SingletonMonoBehaviour_ProgramEffectManager___ctor__);
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
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_GameObject_o *v25; // x0
  __int64 v26; // x1
  UnityEngine_GameObject_o *v27; // x21
  Il2CppObject *Component_object; // x22
  UnityEngine_Transform_o *transform; // x24
  float v30; // s0
  float v31; // s1
  float v32; // s2
  float v33; // s8
  float v34; // s9
  float v35; // s10
  __int64 v36; // x1
  __int64 v37; // x2
  const MethodInfo *v38; // x3
  float timea; // [xsp+Ch] [xbp-84h]
  float v41; // [xsp+58h] [xbp-38h]
  float v42; // [xsp+5Ch] [xbp-34h]
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v45; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4B175F1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___, prefab, isSkip);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v21, v22);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v23, v24);
    byte_4B175F1 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, prefab);
  v25 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                      (Il2CppObject *)prefab,
                                      (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v25 )
    goto LABEL_13;
  timea = time;
  v41 = r;
  v42 = g;
  v27 = v25;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v25,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___);
  transform = UnityEngine_GameObject__get_transform(v27, 0LL);
  v25 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v27, 0LL);
  if ( !v25 )
    goto LABEL_13;
  *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)v25, 0LL);
  if ( !parent )
    goto LABEL_13;
  v33 = v30;
  v34 = v31;
  v35 = v32;
  v25 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_13;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)v25, 0LL);
  v43.fields.x = x;
  v43.fields.y = y;
  v43.fields.z = z;
  UnityEngine_Transform__set_localPosition(transform, v43, 0LL);
  if ( !byte_4B109C7 )
  {
    sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, v36, v37);
    byte_4B109C7 = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0LL);
  v44.fields.x = v33;
  v44.fields.y = v34;
  v44.fields.z = v35;
  UnityEngine_Transform__set_localScale(transform, v44, 0LL);
  if ( !Component_object )
LABEL_13:
    sub_1BCAA3C(v25, v26);
  v45.fields.r = v41;
  v45.fields.g = v42;
  v45.fields.b = b;
  v45.fields.a = a;
  ProgramEffectComponent__Init((ProgramEffectComponent_o *)Component_object, timea, v45, range, isSkip, isPause, v38);
  return v27;
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
  __int64 v20; // x1
  UnityEngine_Object_o *CharaEffectPrefab; // x22
  const MethodInfo *v22; // x4
  float colora; // [xsp+4Ch] [xbp-34h]
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v26; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  colora = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4B175F0 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, effectName, isSkip);
    byte_4B175F0 = 1;
  }
  CharaEffectPrefab = (UnityEngine_Object_o *)ProgramEffectManager__GetCharaEffectPrefab(
                                                effectName,
                                                (const MethodInfo *)effectName);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
  if ( !UnityEngine_Object__op_Inequality(CharaEffectPrefab, 0LL, 0LL) )
    return 0LL;
  v25.fields.z = z;
  v26.fields.r = r;
  v26.fields.g = g;
  v26.fields.b = b;
  v26.fields.a = colora;
  v25.fields.x = x;
  v25.fields.y = y;
  return ProgramEffectManager__Create(
           parent,
           (UnityEngine_GameObject_o *)CharaEffectPrefab,
           v25,
           time,
           v26,
           range,
           isSkip,
           isPause,
           v22);
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
  __int64 v20; // x1
  UnityEngine_Object_o *MainEffectPrefab; // x22
  const MethodInfo *v22; // x4
  float colora; // [xsp+4Ch] [xbp-34h]
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v26; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  colora = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4B175EF & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, effectName, isSkip);
    byte_4B175EF = 1;
  }
  MainEffectPrefab = (UnityEngine_Object_o *)ProgramEffectManager__GetMainEffectPrefab(
                                               effectName,
                                               (const MethodInfo *)effectName);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
  if ( !UnityEngine_Object__op_Inequality(MainEffectPrefab, 0LL, 0LL) )
    return 0LL;
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
           v22);
}


void __fastcall ProgramEffectManager__Destory(UnityEngine_GameObject_o *parent, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x20
  int64_t transform; // x0
  __int64 v23; // x1
  int32_t v24; // w21
  UnityEngine_Component_o *v25; // x22
  __int64 v26; // x1
  Il2CppObject *Component_object; // x23
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  int64_t v37; // x1
  Il2CppClass **v38; // x0
  __int64 v39; // x1
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4B175F6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B175F6 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( !parent )
    goto LABEL_18;
  transform = (int64_t)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_18;
  v24 = 0;
  while ( 1 )
  {
    transform = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0LL);
    if ( v24 >= (int)transform )
      break;
    transform = (int64_t)UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( !transform )
      goto LABEL_18;
    transform = (int64_t)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)transform, v24, 0LL);
    if ( !transform )
      goto LABEL_18;
    v25 = (UnityEngine_Component_o *)transform;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)transform,
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    {
      transform = (int64_t)UnityEngine_Component__get_gameObject(v25, 0LL);
      if ( !v21 )
        goto LABEL_18;
      items = v21->fields._items;
      v35 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v21->fields._version;
      if ( !items )
        goto LABEL_18;
      size = v21->fields._size;
      v37 = transform;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          (Il2CppObject *)transform,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v38 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v38[4] = (Il2CppClass *)v37;
        sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 4), v37, v28, v29, v30, v31, v32, v33);
      }
    }
    ++v24;
    transform = (int64_t)UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( !transform )
      goto LABEL_18;
  }
  if ( !v21 )
LABEL_18:
    sub_1BCAA3C(transform, v23);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    v21,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v41,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v41.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39);
    UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v41,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


void __fastcall ProgramEffectManager__Destory_41425600(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_object__o *v22; // x21
  int64_t transform; // x0
  __int64 v24; // x1
  int32_t v25; // w22
  UnityEngine_Component_o *v26; // x23
  __int64 v27; // x1
  Il2CppObject *Component_object; // x24
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  int64_t v38; // x1
  Il2CppClass **v39; // x0
  __int64 v40; // x1
  Il2CppObject *current; // x19
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4B175F7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, effectName, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v18, v19);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v20, v21);
    byte_4B175F7 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  if ( effectName )
  {
    v22 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_GameObject__TypeInfo,
                                                         effectName,
                                                         method,
                                                         v3);
    System_Collections_Generic_List_object____ctor(
      v22,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    if ( !parent )
      goto LABEL_21;
    transform = (int64_t)UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( !transform )
      goto LABEL_21;
    v25 = 0;
    while ( 1 )
    {
      transform = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0LL);
      if ( v25 >= (int)transform )
        break;
      transform = (int64_t)UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_21;
      transform = (int64_t)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)transform, v25, 0LL);
      if ( !transform )
        goto LABEL_21;
      v26 = (UnityEngine_Component_o *)transform;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)transform,
                           (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
      transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( (transform & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_21;
        if ( System_String__Equals_62409536(effectName, (System_String_o *)Component_object[25].klass, 0LL) )
        {
          transform = (int64_t)UnityEngine_Component__get_gameObject(v26, 0LL);
          if ( !v22 )
            goto LABEL_21;
          items = v22->fields._items;
          v36 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v22->fields._version;
          if ( !items )
            goto LABEL_21;
          size = v22->fields._size;
          v38 = transform;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v22,
              (Il2CppObject *)transform,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
          }
          else
          {
            v39 = &items->obj.klass + size;
            v22->fields._size = size + 1;
            v39[4] = (Il2CppClass *)v38;
            sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 4), v38, v29, v30, v31, v32, v33, v34);
          }
        }
      }
      ++v25;
      transform = (int64_t)UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_21;
    }
    if ( !v22 )
LABEL_21:
      sub_1BCAA3C(transform, v24);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v42,
      v22,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v42,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v42.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v40);
      UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v42,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  }
  else
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, effectName);
    UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)parent, 0LL);
  }
}


ProgramEffectComponent_array *__fastcall ProgramEffectManager__Get(
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *v15; // x20
  __int64 v16; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v18; // x1
  int32_t v19; // w21
  __int64 v20; // x1
  Il2CppObject *Component_object; // x22
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0

  if ( (byte_4B175E8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ProgramEffectComponent__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ProgramEffectComponent__ToArray__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ProgramEffectComponent___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_ProgramEffectComponent__TypeInfo, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    byte_4B175E8 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ProgramEffectComponent__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ProgramEffectComponent___ctor__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_24:
      sub_1BCAA3C(transform, v18);
    v19 = 0;
    while ( 1 )
    {
      transform = (UnityEngine_Transform_o *)UnityEngine_Transform__get_childCount(transform, 0LL);
      if ( v19 >= (int)transform )
        break;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_24;
      transform = UnityEngine_Transform__GetChild(transform, v19, 0LL);
      if ( !transform )
        goto LABEL_24;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)transform,
                           (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
      transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0LL,
                                               0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v15 )
          goto LABEL_24;
        items = v15->fields._items;
        v29 = Method_System_Collections_Generic_List_ProgramEffectComponent__Add__;
        ++v15->fields._version;
        if ( !items )
          goto LABEL_24;
        size = v15->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v15,
            Component_object,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = &items->obj.klass + size;
          v15->fields._size = size + 1;
          v31[4] = (Il2CppClass *)Component_object;
          sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 4), (int64_t)Component_object, v22, v23, v24, v25, v26, v27);
        }
      }
      ++v19;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_24;
    }
  }
  if ( !v15 )
    goto LABEL_24;
  return (ProgramEffectComponent_array *)System_Collections_Generic_List_object___ToArray(
                                           v15,
                                           (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ProgramEffectComponent__ToArray__);
}


UnityEngine_GameObject_o *__fastcall ProgramEffectManager__GetCharaEffectPrefab(
        System_String_o *effectName,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  Il2CppObject *Instance; // x20
  bool v10; // w0
  UnityEngine_GameObject_o *v11; // x20
  Il2CppObject *Component_object; // x0
  __int64 v13; // x1
  _DWORD *monitor; // x21
  int v15; // w8
  unsigned int v16; // w22
  char *v17; // x8

  if ( (byte_4B175EE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__, v6, v7);
    byte_4B175EE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  v11 = 0LL;
  if ( !v10 )
  {
    Component_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__);
    if ( !Component_object )
      goto LABEL_18;
    monitor = Component_object[2].monitor;
    if ( !monitor )
      goto LABEL_18;
    v15 = monitor[6];
    if ( v15 >= 1 )
    {
      v16 = 0;
      while ( 1 )
      {
        if ( v16 >= v15 )
          sub_1BCAA44(Component_object, v13);
        v17 = (char *)&monitor[2 * v16];
        v11 = (UnityEngine_GameObject_o *)*((_QWORD *)v17 + 4);
        if ( !v11 )
          break;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             *((UnityEngine_GameObject_o **)v17 + 4),
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___);
        if ( !Component_object || !effectName )
          break;
        Component_object = (Il2CppObject *)System_String__Equals_62409536(
                                             effectName,
                                             (System_String_o *)Component_object[25].klass,
                                             0LL);
        if ( ((unsigned __int8)Component_object & 1) != 0 )
          return v11;
        v15 = monitor[6];
        if ( (int)++v16 >= v15 )
          return 0LL;
      }
LABEL_18:
      sub_1BCAA3C(Component_object, v13);
    }
    return 0LL;
  }
  return v11;
}


UnityEngine_GameObject_o *__fastcall ProgramEffectManager__GetMainEffectPrefab(
        System_String_o *effectName,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  Il2CppObject *Instance; // x20
  bool v10; // w0
  UnityEngine_GameObject_o *v11; // x20
  Il2CppObject *Component_object; // x0
  __int64 v13; // x1
  Il2CppClass *klass; // x21
  int namespaze; // w8
  unsigned int v16; // w22
  void **v17; // x8

  if ( (byte_4B175ED & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__, v6, v7);
    byte_4B175ED = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  v11 = 0LL;
  if ( !v10 )
  {
    Component_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ProgramEffectManager__get_Instance__);
    if ( !Component_object )
      goto LABEL_18;
    klass = Component_object[2].klass;
    if ( !klass )
      goto LABEL_18;
    namespaze = (int)klass->_1.namespaze;
    if ( namespaze >= 1 )
    {
      v16 = 0;
      while ( 1 )
      {
        if ( v16 >= namespaze )
          sub_1BCAA44(Component_object, v13);
        v17 = &klass->_1.image + (int)v16;
        v11 = (UnityEngine_GameObject_o *)v17[4];
        if ( !v11 )
          break;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v17[4],
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ProgramEffectComponent___);
        if ( !Component_object || !effectName )
          break;
        Component_object = (Il2CppObject *)System_String__Equals_62409536(
                                             effectName,
                                             (System_String_o *)Component_object[25].klass,
                                             0LL);
        if ( ((unsigned __int8)Component_object & 1) != 0 )
          return v11;
        namespaze = (int)klass->_1.namespaze;
        if ( (int)++v16 >= namespaze )
          return 0LL;
      }
LABEL_18:
      sub_1BCAA3C(Component_object, v13);
    }
    return 0LL;
  }
  return v11;
}


bool __fastcall ProgramEffectManager__IsBusy(UnityEngine_GameObject_o *parent, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  bool v8; // w21
  int32_t v10; // w20
  int32_t childCount; // w0
  __int64 v12; // x1
  Il2CppObject *Component_object; // x22

  if ( (byte_4B175E9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B175E9 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
    return 0;
  if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_18:
    sub_1BCAA3C(transform, v7);
  v10 = 0;
  while ( 1 )
  {
    childCount = UnityEngine_Transform__get_childCount(transform, 0LL);
    v8 = v10 < childCount;
    if ( v10 >= childCount )
      return v8;
    transform = UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( !transform )
      goto LABEL_18;
    transform = UnityEngine_Transform__GetChild(transform, v10, 0LL);
    if ( !transform )
      goto LABEL_18;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)transform,
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
      return v8;
    ++v10;
    transform = UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( !transform )
      goto LABEL_18;
  }
}


bool __fastcall ProgramEffectManager__IsBusy_41420772(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v8; // x1
  bool v9; // w22
  int32_t v11; // w21
  int32_t childCount; // w0
  __int64 v13; // x1
  Il2CppObject *Component_object; // x23

  if ( (byte_4B175EA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, effectName, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B175EA = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, effectName);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
    return 0;
  if ( effectName )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_21:
      sub_1BCAA3C(transform, v8);
    v11 = 0;
    while ( 1 )
    {
      childCount = UnityEngine_Transform__get_childCount(transform, 0LL);
      v9 = v11 < childCount;
      if ( v11 >= childCount )
        return v9;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_21;
      transform = UnityEngine_Transform__GetChild(transform, v11, 0LL);
      if ( !transform )
        goto LABEL_21;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)transform,
                           (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
      transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0LL,
                                               0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_21;
        if ( System_String__Equals_62409536(effectName, (System_String_o *)Component_object[25].klass, 0LL) )
          return v9;
      }
      ++v11;
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( !transform )
        goto LABEL_21;
    }
  }
  return ProgramEffectManager__IsBusy(parent, v8);
}


bool __fastcall ProgramEffectManager__IsStart(UnityEngine_GameObject_o *parent, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  int32_t v9; // w20
  int32_t childCount; // w21
  __int64 v11; // x1
  Il2CppObject *Component_object; // x22

  if ( (byte_4B175EB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B175EB = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
    return 1;
  if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_19:
    sub_1BCAA3C(transform, v7);
  v9 = 0;
  while ( 1 )
  {
    childCount = UnityEngine_Transform__get_childCount(transform, 0LL);
    if ( v9 >= childCount )
      break;
    transform = UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( !transform )
      goto LABEL_19;
    transform = UnityEngine_Transform__GetChild(transform, v9, 0LL);
    if ( !transform )
      goto LABEL_19;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)transform,
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
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
    ++v9;
    transform = UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( !transform )
      goto LABEL_19;
  }
  return v9 >= childCount;
}


bool __fastcall ProgramEffectManager__IsStart_41421440(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v8; // x1
  int32_t v10; // w21
  int32_t childCount; // w22
  __int64 v12; // x1
  Il2CppObject *Component_object; // x23

  if ( (byte_4B175EC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, effectName, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B175EC = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, effectName);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
    return 1;
  if ( !effectName )
    return ProgramEffectManager__IsBusy(parent, v8);
  if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_21:
    sub_1BCAA3C(transform, v8);
  v10 = 0;
  while ( 1 )
  {
    childCount = UnityEngine_Transform__get_childCount(transform, 0LL);
    if ( v10 >= childCount )
      break;
    transform = UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( !transform )
      goto LABEL_21;
    transform = UnityEngine_Transform__GetChild(transform, v10, 0LL);
    if ( !transform )
      goto LABEL_21;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)transform,
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
    transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_21;
      if ( System_String__Equals_62409536(effectName, (System_String_o *)Component_object[25].klass, 0LL)
        && !BYTE6(Component_object[27].klass) )
      {
        break;
      }
    }
    ++v10;
    transform = UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( !transform )
      goto LABEL_21;
  }
  return v10 >= childCount;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ProgramEffectManager__Resume(UnityEngine_GameObject_o *parent, bool isSkip, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Transform_o *transform; // x0
  __int64 v8; // x1
  int32_t v9; // w20
  _BOOL4 v10; // w21
  __int64 v11; // x1
  Il2CppObject *Component_object; // x22

  if ( (byte_4B175F2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, isSkip, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B175F2 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isSkip);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_19:
      sub_1BCAA3C(transform, v8);
    v9 = 0;
    v10 = isSkip;
    while ( v9 < UnityEngine_Transform__get_childCount(transform, 0LL) )
    {
      transform = UnityEngine_GameObject__get_transform(parent, 0LL);
      if ( transform )
      {
        transform = UnityEngine_Transform__GetChild(transform, v9, 0LL);
        if ( transform )
        {
          Component_object = UnityEngine_Component__GetComponent_object_(
                               (UnityEngine_Component_o *)transform,
                               (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
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
              v10,
              Component_object->klass->vtable[44].methodPtr);
          }
          ++v9;
          transform = UnityEngine_GameObject__get_transform(parent, 0LL);
          if ( transform )
            continue;
        }
      }
      goto LABEL_19;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ProgramEffectManager__Resume_41423840(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        bool isSkip,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Transform_o *transform; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  int32_t v12; // w22
  __int64 v13; // x1
  Il2CppObject *Component_object; // x23

  if ( (byte_4B175F3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, effectName, isSkip);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B175F3 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, effectName);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( effectName )
    {
      if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_21:
        sub_1BCAA3C(transform, v10);
      v12 = 0;
      while ( v12 < UnityEngine_Transform__get_childCount(transform, 0LL) )
      {
        transform = UnityEngine_GameObject__get_transform(parent, 0LL);
        if ( transform )
        {
          transform = UnityEngine_Transform__GetChild(transform, v12, 0LL);
          if ( transform )
          {
            Component_object = UnityEngine_Component__GetComponent_object_(
                                 (UnityEngine_Component_o *)transform,
                                 (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
            transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)Component_object,
                                                     0LL,
                                                     0LL);
            if ( ((unsigned __int8)transform & 1) != 0 )
            {
              if ( !Component_object )
                goto LABEL_21;
              if ( System_String__Equals_62409536(effectName, (System_String_o *)Component_object[25].klass, 0LL) )
                ((void (__fastcall *)(Il2CppObject *, bool, Il2CppMethodPointer))Component_object->klass->vtable[43].method)(
                  Component_object,
                  isSkip,
                  Component_object->klass->vtable[44].methodPtr);
            }
            ++v12;
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
      ProgramEffectManager__Resume(parent, isSkip, v11);
    }
  }
}


void __fastcall ProgramEffectManager__Stop(UnityEngine_GameObject_o *parent, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  int32_t v8; // w20
  __int64 v9; // x1
  Il2CppObject *Component_object; // x21

  if ( (byte_4B175F4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B175F4 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_19:
      sub_1BCAA3C(transform, v7);
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
                               (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
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


void __fastcall ProgramEffectManager__Stop_41424512(
        UnityEngine_GameObject_o *parent,
        System_String_o *effectName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v8; // x1
  int32_t v9; // w21
  __int64 v10; // x1
  Il2CppObject *Component_object; // x22

  if ( (byte_4B175F5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___, effectName, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B175F5 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, effectName);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( effectName )
    {
      if ( !parent || (transform = UnityEngine_GameObject__get_transform(parent, 0LL)) == 0LL )
LABEL_21:
        sub_1BCAA3C(transform, v8);
      v9 = 0;
      while ( v9 < UnityEngine_Transform__get_childCount(transform, 0LL) )
      {
        transform = UnityEngine_GameObject__get_transform(parent, 0LL);
        if ( transform )
        {
          transform = UnityEngine_Transform__GetChild(transform, v9, 0LL);
          if ( transform )
          {
            Component_object = UnityEngine_Component__GetComponent_object_(
                                 (UnityEngine_Component_o *)transform,
                                 (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_ProgramEffectComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
            transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)Component_object,
                                                     0LL,
                                                     0LL);
            if ( ((unsigned __int8)transform & 1) != 0 )
            {
              if ( !Component_object )
                goto LABEL_21;
              if ( System_String__Equals_62409536(effectName, (System_String_o *)Component_object[25].klass, 0LL) )
                ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Component_object->klass->vtable[44].method)(
                  Component_object,
                  Component_object->klass->vtable[45].methodPtr);
            }
            ++v9;
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
      ProgramEffectManager__Stop(parent, v8);
    }
  }
}