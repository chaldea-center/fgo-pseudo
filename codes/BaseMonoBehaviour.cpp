void __fastcall BaseMonoBehaviour___ctor(BaseMonoBehaviour_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BaseMonoBehaviour__CreateObjectStatic(
        System_String_o *resouceurl,
        UnityEngine_Transform_o *root,
        UnityEngine_Transform_o *pos,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  UnityEngine_Object_o *v10; // x22
  System_String_o *transform; // x0
  __int64 v12; // x1
  UnityEngine_Transform_o *v13; // x21
  int v14; // s0
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E664C & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_GameObject_TypeInfo, (_DWORD)root, (_DWORD)pos, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    byte_42E664C = 1;
  }
  if ( resouceurl )
  {
    v10 = UnityEngine_Resources__Load(resouceurl, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    resouceurl = 0LL;
    if ( !UnityEngine_Object__op_Equality(v10, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = (System_String_o *)UnityEngine_Object__Instantiate_35619384(v10, 0LL);
      if ( !transform )
        goto LABEL_22;
      resouceurl = transform;
      if ( (UnityEngine_GameObject_c *)transform->klass != UnityEngine_GameObject_TypeInfo )
        goto LABEL_22;
      transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
      if ( !transform )
        goto LABEL_22;
      UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, root, 0LL);
      transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resouceurl, 0LL);
      if ( !transform )
        goto LABEL_22;
      v18.fields.x = 0.0;
      v18.fields.y = 0.0;
      v18.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v18, 0LL);
      transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resouceurl, 0LL);
      if ( !transform )
        goto LABEL_22;
      v19.fields.x = 0.0;
      v19.fields.y = 0.0;
      v19.fields.z = 0.0;
      UnityEngine_Transform__set_eulerAngles((UnityEngine_Transform_o *)transform, v19, 0LL);
      transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resouceurl, 0LL);
      if ( !transform )
        goto LABEL_22;
      v20.fields.x = 1.0;
      v20.fields.y = 1.0;
      v20.fields.z = 1.0;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v20, 0LL);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)pos, 0LL, 0LL) )
      {
        transform = (System_String_o *)UnityEngine_GameObject__get_transform(
                                         (UnityEngine_GameObject_o *)resouceurl,
                                         0LL);
        if ( pos )
        {
          v13 = (UnityEngine_Transform_o *)transform;
          *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Transform__get_position(pos, 0LL);
          if ( v13 )
          {
            UnityEngine_Transform__set_position(v13, *(UnityEngine_Vector3_o *)&v14, 0LL);
            return (UnityEngine_GameObject_o *)resouceurl;
          }
        }
LABEL_22:
        sub_B5D69C(transform, v12);
      }
    }
  }
  return (UnityEngine_GameObject_o *)resouceurl;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BaseMonoBehaviour__createObject(
        BaseMonoBehaviour_o *this,
        UnityEngine_GameObject_o *prefab,
        UnityEngine_Transform_o *root,
        UnityEngine_Transform_o *pos,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_GameObject_o *v11; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  float w; // s11
  UnityEngine_GameObject_o *transform; // x0
  __int64 v17; // x1
  UnityEngine_Transform_o *v18; // x21
  int v19; // s0
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v29; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_42E6649 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882840, (_DWORD)prefab, (_DWORD)root, pos);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42E6649 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)prefab, 0LL, 0LL) )
  {
    v23.fields.x = 0.0;
    v23.fields.y = 0.0;
    v23.fields.z = 0.0;
    v28 = UnityEngine_Quaternion__Euler_35652376(v23, 0LL);
    x = v28.fields.x;
    y = v28.fields.y;
    z = v28.fields.z;
    w = v28.fields.w;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v24.fields.x = 0.0;
    v24.fields.y = 0.0;
    v24.fields.z = 0.0;
    v29.fields.x = x;
    v29.fields.y = y;
    v29.fields.z = z;
    v29.fields.w = w;
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              (Il2CppObject *)prefab,
                                              v24,
                                              v29,
                                              (const MethodInfo_1E66564 *)Method_UnityEngine_Object_Instantiate_GameObject____68882840);
    if ( !transform )
      goto LABEL_20;
    v11 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_20;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, root, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v11, 0LL);
    if ( !transform )
      goto LABEL_20;
    v25.fields.x = 0.0;
    v25.fields.y = 0.0;
    v25.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v25, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v11, 0LL);
    if ( !transform )
      goto LABEL_20;
    v26.fields.x = 0.0;
    v26.fields.y = 0.0;
    v26.fields.z = 0.0;
    UnityEngine_Transform__set_eulerAngles((UnityEngine_Transform_o *)transform, v26, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v11, 0LL);
    if ( !transform )
      goto LABEL_20;
    v27.fields.x = 1.0;
    v27.fields.y = 1.0;
    v27.fields.z = 1.0;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v27, 0LL);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)pos, 0LL, 0LL) )
    {
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v11, 0LL);
      if ( pos )
      {
        v18 = (UnityEngine_Transform_o *)transform;
        *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Transform__get_position(pos, 0LL);
        if ( v18 )
        {
          UnityEngine_Transform__set_position(v18, *(UnityEngine_Vector3_o *)&v19, 0LL);
          return v11;
        }
      }
LABEL_20:
      sub_B5D69C(transform, v17);
    }
  }
  return v11;
}


UnityEngine_GameObject_o *__fastcall BaseMonoBehaviour__createObjectIfNotExist(
        BaseMonoBehaviour_o *this,
        UnityEngine_GameObject_o *existCheckObj,
        UnityEngine_GameObject_o *prefab,
        UnityEngine_Transform_o *root,
        UnityEngine_Transform_o *pos,
        const MethodInfo *method)
{
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x4

  if ( (byte_42E664A & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)existCheckObj, (_DWORD)prefab, root);
    byte_42E664A = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)existCheckObj, 0LL, 0LL);
  if ( v10 )
    return existCheckObj;
  else
    return BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)v10, prefab, root, pos, v11);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BaseMonoBehaviour__createObject_21082944(
        BaseMonoBehaviour_o *this,
        System_String_o *resouceurl,
        UnityEngine_Transform_o *root,
        UnityEngine_Transform_o *pos,
        const MethodInfo *method)
{
  System_String_o *v7; // x20
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *v11; // x22
  UnityEngine_GameObject_o *transform; // x0
  __int64 v13; // x1
  UnityEngine_Transform_o *v14; // x21
  int v15; // s0
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  v7 = resouceurl;
  if ( (byte_42E664B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_GameObject_TypeInfo, (_DWORD)resouceurl, (_DWORD)root, pos);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42E664B = 1;
  }
  if ( v7 )
  {
    v11 = UnityEngine_Resources__Load(v7, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = 0LL;
    if ( !UnityEngine_Object__op_Equality(v11, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_35619384(v11, 0LL);
      if ( !transform )
        goto LABEL_22;
      v7 = (System_String_o *)transform;
      if ( transform->klass != UnityEngine_GameObject_TypeInfo )
        goto LABEL_22;
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
      if ( !transform )
        goto LABEL_22;
      UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, root, 0LL);
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v7, 0LL);
      if ( !transform )
        goto LABEL_22;
      v19.fields.x = 0.0;
      v19.fields.y = 0.0;
      v19.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v19, 0LL);
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v7, 0LL);
      if ( !transform )
        goto LABEL_22;
      v20.fields.x = 0.0;
      v20.fields.y = 0.0;
      v20.fields.z = 0.0;
      UnityEngine_Transform__set_eulerAngles((UnityEngine_Transform_o *)transform, v20, 0LL);
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v7, 0LL);
      if ( !transform )
        goto LABEL_22;
      v21.fields.x = 1.0;
      v21.fields.y = 1.0;
      v21.fields.z = 1.0;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v21, 0LL);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)pos, 0LL, 0LL) )
      {
        transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)v7,
                                                  0LL);
        if ( pos )
        {
          v14 = (UnityEngine_Transform_o *)transform;
          *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Transform__get_position(pos, 0LL);
          if ( v14 )
          {
            UnityEngine_Transform__set_position(v14, *(UnityEngine_Vector3_o *)&v15, 0LL);
            return (UnityEngine_GameObject_o *)v7;
          }
        }
LABEL_22:
        sub_B5D69C(transform, v13);
      }
    }
  }
  return (UnityEngine_GameObject_o *)v7;
}


// local variable allocation has failed, the output may be wrong!
Il2CppObject *__fastcall BaseMonoBehaviour__createObject_object_(
        BaseMonoBehaviour_o *this,
        Il2CppObject *prefab,
        UnityEngine_Transform_o *root,
        UnityEngine_Transform_o *pos,
        const MethodInfo_1AD66E4 *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  Il2CppObject *v12; // x20
  long double v13; // q8
  long double v14; // q9
  long double v15; // q10
  long double v16; // q11
  UnityEngine_Object_o *v17; // x22
  UnityEngine_Transform_o *transform; // x0
  __int64 v19; // x1
  UnityEngine_Transform_o *v20; // x21
  int v21; // s0
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  long double v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_42EA26F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_MonoBehaviour_TypeInfo, (_DWORD)prefab, (_DWORD)root, pos);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    byte_42EA26F = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v12 = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)prefab, 0LL, 0LL) )
  {
    v25.fields.x = 0.0;
    v25.fields.y = 0.0;
    v25.fields.z = 0.0;
    *(UnityEngine_Quaternion_o *)&v29 = UnityEngine_Quaternion__Euler_35652376(v25, 0LL);
    v13 = v29;
    v14 = *(long double *)((char *)&v29 + 4);
    v15 = *(long double *)((char *)&v29 + 8);
    v16 = *(long double *)((char *)&v29 + 12);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v12 = (Il2CppObject *)((__int64 (__fastcall *)(Il2CppObject *, float, float, float, long double, long double, long double, long double))method->rgctx_data->_1_UnityEngine_Object_Instantiate_T_->methodPointer)(
                            prefab,
                            0.0,
                            0.0,
                            0.0,
                            v13,
                            v14,
                            v15,
                            v16);
    v17 = (UnityEngine_Object_o *)sub_B5D684(v12, UnityEngine_MonoBehaviour_TypeInfo);
    transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v17 )
        goto LABEL_24;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v17, 0LL);
      if ( !transform )
        goto LABEL_24;
      UnityEngine_Transform__set_parent(transform, root, 0LL);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v17, 0LL);
      if ( !transform )
        goto LABEL_24;
      v26.fields.x = 0.0;
      v26.fields.y = 0.0;
      v26.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition(transform, v26, 0LL);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v17, 0LL);
      if ( !transform )
        goto LABEL_24;
      v27.fields.x = 0.0;
      v27.fields.y = 0.0;
      v27.fields.z = 0.0;
      UnityEngine_Transform__set_eulerAngles(transform, v27, 0LL);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v17, 0LL);
      if ( !transform )
        goto LABEL_24;
      v28.fields.x = 1.0;
      v28.fields.y = 1.0;
      v28.fields.z = 1.0;
      UnityEngine_Transform__set_localScale(transform, v28, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)pos, 0LL, 0LL) )
      {
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v17, 0LL);
        if ( pos )
        {
          v20 = transform;
          *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Transform__get_position(pos, 0LL);
          if ( v20 )
          {
            UnityEngine_Transform__set_position(v20, *(UnityEngine_Vector3_o *)&v21, 0LL);
            return v12;
          }
        }
LABEL_24:
        sub_B5D69C(transform, v19);
      }
    }
  }
  return v12;
}