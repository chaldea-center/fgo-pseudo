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
  __int64 v7; // x1
  UnityEngine_Object_o *v8; // x22
  System_String_o *transform; // x0
  __int64 v10; // x1
  UnityEngine_Transform_o *v11; // x21
  int v12; // s0
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4184A15 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_GameObject_TypeInfo, root);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_4184A15 = 1;
  }
  if ( resouceurl )
  {
    v8 = UnityEngine_Resources__Load(resouceurl, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    resouceurl = 0LL;
    if ( !UnityEngine_Object__op_Equality(v8, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = (System_String_o *)UnityEngine_Object__Instantiate_35314044(v8, 0LL);
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
      v16.fields.x = 0.0;
      v16.fields.y = 0.0;
      v16.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v16, 0LL);
      transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resouceurl, 0LL);
      if ( !transform )
        goto LABEL_22;
      v17.fields.x = 0.0;
      v17.fields.y = 0.0;
      v17.fields.z = 0.0;
      UnityEngine_Transform__set_eulerAngles((UnityEngine_Transform_o *)transform, v17, 0LL);
      transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resouceurl, 0LL);
      if ( !transform )
        goto LABEL_22;
      v18.fields.x = 1.0;
      v18.fields.y = 1.0;
      v18.fields.z = 1.0;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v18, 0LL);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)pos, 0LL, 0LL) )
      {
        transform = (System_String_o *)UnityEngine_GameObject__get_transform(
                                         (UnityEngine_GameObject_o *)resouceurl,
                                         0LL);
        if ( pos )
        {
          v11 = (UnityEngine_Transform_o *)transform;
          *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_position(pos, 0LL);
          if ( v11 )
          {
            UnityEngine_Transform__set_position(v11, *(UnityEngine_Vector3_o *)&v12, 0LL);
            return (UnityEngine_GameObject_o *)resouceurl;
          }
        }
LABEL_22:
        sub_B2C434(transform, v10);
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
  __int64 v8; // x1
  UnityEngine_GameObject_o *v9; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  float w; // s11
  UnityEngine_GameObject_o *transform; // x0
  __int64 v15; // x1
  UnityEngine_Transform_o *v16; // x21
  int v17; // s0
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v27; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4184A12 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450632, prefab);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_4184A12 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)prefab, 0LL, 0LL) )
  {
    v21.fields.x = 0.0;
    v21.fields.y = 0.0;
    v21.fields.z = 0.0;
    v26 = UnityEngine_Quaternion__Euler_35347036(v21, 0LL);
    x = v26.fields.x;
    y = v26.fields.y;
    z = v26.fields.z;
    w = v26.fields.w;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v22.fields.x = 0.0;
    v22.fields.y = 0.0;
    v22.fields.z = 0.0;
    v27.fields.x = x;
    v27.fields.y = y;
    v27.fields.z = z;
    v27.fields.w = w;
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              (Il2CppObject *)prefab,
                                              v22,
                                              v27,
                                              (const MethodInfo_20960C4 *)Method_UnityEngine_Object_Instantiate_GameObject____67450632);
    if ( !transform )
      goto LABEL_20;
    v9 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_20;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, root, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0LL);
    if ( !transform )
      goto LABEL_20;
    v23.fields.x = 0.0;
    v23.fields.y = 0.0;
    v23.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v23, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0LL);
    if ( !transform )
      goto LABEL_20;
    v24.fields.x = 0.0;
    v24.fields.y = 0.0;
    v24.fields.z = 0.0;
    UnityEngine_Transform__set_eulerAngles((UnityEngine_Transform_o *)transform, v24, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0LL);
    if ( !transform )
      goto LABEL_20;
    v25.fields.x = 1.0;
    v25.fields.y = 1.0;
    v25.fields.z = 1.0;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v25, 0LL);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)pos, 0LL, 0LL) )
    {
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0LL);
      if ( pos )
      {
        v16 = (UnityEngine_Transform_o *)transform;
        *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Transform__get_position(pos, 0LL);
        if ( v16 )
        {
          UnityEngine_Transform__set_position(v16, *(UnityEngine_Vector3_o *)&v17, 0LL);
          return v9;
        }
      }
LABEL_20:
      sub_B2C434(transform, v15);
    }
  }
  return v9;
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

  if ( (byte_4184A13 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, existCheckObj);
    byte_4184A13 = 1;
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
UnityEngine_GameObject_o *__fastcall BaseMonoBehaviour__createObject_19214240(
        BaseMonoBehaviour_o *this,
        System_String_o *resouceurl,
        UnityEngine_Transform_o *root,
        UnityEngine_Transform_o *pos,
        const MethodInfo *method)
{
  System_String_o *v7; // x20
  __int64 v8; // x1
  UnityEngine_Object_o *v9; // x22
  UnityEngine_GameObject_o *transform; // x0
  __int64 v11; // x1
  UnityEngine_Transform_o *v12; // x21
  int v13; // s0
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  v7 = resouceurl;
  if ( (byte_4184A14 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_GameObject_TypeInfo, resouceurl);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_4184A14 = 1;
  }
  if ( v7 )
  {
    v9 = UnityEngine_Resources__Load(v7, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = 0LL;
    if ( !UnityEngine_Object__op_Equality(v9, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_35314044(v9, 0LL);
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
      v17.fields.x = 0.0;
      v17.fields.y = 0.0;
      v17.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v17, 0LL);
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v7, 0LL);
      if ( !transform )
        goto LABEL_22;
      v18.fields.x = 0.0;
      v18.fields.y = 0.0;
      v18.fields.z = 0.0;
      UnityEngine_Transform__set_eulerAngles((UnityEngine_Transform_o *)transform, v18, 0LL);
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v7, 0LL);
      if ( !transform )
        goto LABEL_22;
      v19.fields.x = 1.0;
      v19.fields.y = 1.0;
      v19.fields.z = 1.0;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v19, 0LL);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)pos, 0LL, 0LL) )
      {
        transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)v7,
                                                  0LL);
        if ( pos )
        {
          v12 = (UnityEngine_Transform_o *)transform;
          *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Transform__get_position(pos, 0LL);
          if ( v12 )
          {
            UnityEngine_Transform__set_position(v12, *(UnityEngine_Vector3_o *)&v13, 0LL);
            return (UnityEngine_GameObject_o *)v7;
          }
        }
LABEL_22:
        sub_B2C434(transform, v11);
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
        const MethodInfo_172605C *method)
{
  __int64 v9; // x1
  Il2CppObject *v10; // x20
  long double v11; // q8
  long double v12; // q9
  long double v13; // q10
  long double v14; // q11
  UnityEngine_Object_o *v15; // x22
  UnityEngine_Transform_o *transform; // x0
  __int64 v17; // x1
  UnityEngine_Transform_o *v18; // x21
  int v19; // s0
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  long double v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_4187246 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_MonoBehaviour_TypeInfo, prefab);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    byte_4187246 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)prefab, 0LL, 0LL) )
  {
    v23.fields.x = 0.0;
    v23.fields.y = 0.0;
    v23.fields.z = 0.0;
    *(UnityEngine_Quaternion_o *)&v27 = UnityEngine_Quaternion__Euler_35347036(v23, 0LL);
    v11 = v27;
    v12 = *(long double *)((char *)&v27 + 4);
    v13 = *(long double *)((char *)&v27 + 8);
    v14 = *(long double *)((char *)&v27 + 12);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v10 = (Il2CppObject *)((__int64 (__fastcall *)(Il2CppObject *, float, float, float, long double, long double, long double, long double))method->rgctx_data->_1_UnityEngine_Object_Instantiate_T_->methodPointer)(
                            prefab,
                            0.0,
                            0.0,
                            0.0,
                            v11,
                            v12,
                            v13,
                            v14);
    v15 = (UnityEngine_Object_o *)sub_B2C41C(v10, UnityEngine_MonoBehaviour_TypeInfo);
    transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(v15, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v15 )
        goto LABEL_24;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v15, 0LL);
      if ( !transform )
        goto LABEL_24;
      UnityEngine_Transform__set_parent(transform, root, 0LL);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v15, 0LL);
      if ( !transform )
        goto LABEL_24;
      v24.fields.x = 0.0;
      v24.fields.y = 0.0;
      v24.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition(transform, v24, 0LL);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v15, 0LL);
      if ( !transform )
        goto LABEL_24;
      v25.fields.x = 0.0;
      v25.fields.y = 0.0;
      v25.fields.z = 0.0;
      UnityEngine_Transform__set_eulerAngles(transform, v25, 0LL);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v15, 0LL);
      if ( !transform )
        goto LABEL_24;
      v26.fields.x = 1.0;
      v26.fields.y = 1.0;
      v26.fields.z = 1.0;
      UnityEngine_Transform__set_localScale(transform, v26, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)pos, 0LL, 0LL) )
      {
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v15, 0LL);
        if ( pos )
        {
          v18 = transform;
          *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Transform__get_position(pos, 0LL);
          if ( v18 )
          {
            UnityEngine_Transform__set_position(v18, *(UnityEngine_Vector3_o *)&v19, 0LL);
            return v10;
          }
        }
LABEL_24:
        sub_B2C434(transform, v17);
      }
    }
  }
  return v10;
}