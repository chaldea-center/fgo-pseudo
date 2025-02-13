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
  UnityEngine_Object_o *v7; // x22
  System_String_o *transform; // x0
  __int64 v9; // x1
  UnityEngine_Transform_o *v10; // x21
  int v11; // s0
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDBB19 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_GameObject_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDBB19 = 1;
  }
  if ( resouceurl )
  {
    v7 = UnityEngine_Resources__Load(resouceurl, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    resouceurl = 0LL;
    if ( !UnityEngine_Object__op_Equality(v7, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (System_String_o *)UnityEngine_Object__Instantiate_70868816(v7, 0LL);
      if ( !transform )
        goto LABEL_20;
      resouceurl = transform;
      if ( (UnityEngine_GameObject_c *)transform->klass != UnityEngine_GameObject_TypeInfo )
        goto LABEL_20;
      transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
      if ( !transform )
        goto LABEL_20;
      UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, root, 0LL);
      transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resouceurl, 0LL);
      if ( !transform )
        goto LABEL_20;
      v15.fields.x = 0.0;
      v15.fields.y = 0.0;
      v15.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v15, 0LL);
      transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resouceurl, 0LL);
      if ( !transform )
        goto LABEL_20;
      v16.fields.x = 0.0;
      v16.fields.y = 0.0;
      v16.fields.z = 0.0;
      UnityEngine_Transform__set_eulerAngles((UnityEngine_Transform_o *)transform, v16, 0LL);
      transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resouceurl, 0LL);
      if ( !transform )
        goto LABEL_20;
      v17.fields.x = 1.0;
      v17.fields.y = 1.0;
      v17.fields.z = 1.0;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v17, 0LL);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)pos, 0LL, 0LL) )
      {
        transform = (System_String_o *)UnityEngine_GameObject__get_transform(
                                         (UnityEngine_GameObject_o *)resouceurl,
                                         0LL);
        if ( pos )
        {
          v10 = (UnityEngine_Transform_o *)transform;
          *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__get_position(pos, 0LL);
          if ( v10 )
          {
            UnityEngine_Transform__set_position(v10, *(UnityEngine_Vector3_o *)&v11, 0LL);
            return (UnityEngine_GameObject_o *)resouceurl;
          }
        }
LABEL_20:
        sub_1C22094(transform, v9);
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
  UnityEngine_GameObject_o *v8; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  float w; // s11
  UnityEngine_GameObject_o *transform; // x0
  __int64 v14; // x1
  UnityEngine_Transform_o *v15; // x21
  int v16; // s0
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v26; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4BDBB16 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject____77715648);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDBB16 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)prefab, 0LL, 0LL) )
  {
    v20.fields.x = 0.0;
    v20.fields.y = 0.0;
    v20.fields.z = 0.0;
    v25 = UnityEngine_Quaternion__Internal_FromEulerRad(v20, 0LL);
    x = v25.fields.x;
    y = v25.fields.y;
    z = v25.fields.z;
    w = v25.fields.w;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v21.fields.x = 0.0;
    v21.fields.y = 0.0;
    v21.fields.z = 0.0;
    v26.fields.x = x;
    v26.fields.y = y;
    v26.fields.z = z;
    v26.fields.w = w;
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__50551576(
                                              (Il2CppObject *)prefab,
                                              v21,
                                              v26,
                                              (const MethodInfo_3035B18 *)Method_UnityEngine_Object_Instantiate_GameObject____77715648);
    if ( !transform )
      goto LABEL_18;
    v8 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_18;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, root, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0LL);
    if ( !transform )
      goto LABEL_18;
    v22.fields.x = 0.0;
    v22.fields.y = 0.0;
    v22.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v22, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0LL);
    if ( !transform )
      goto LABEL_18;
    v23.fields.x = 0.0;
    v23.fields.y = 0.0;
    v23.fields.z = 0.0;
    UnityEngine_Transform__set_eulerAngles((UnityEngine_Transform_o *)transform, v23, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0LL);
    if ( !transform )
      goto LABEL_18;
    v24.fields.x = 1.0;
    v24.fields.y = 1.0;
    v24.fields.z = 1.0;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v24, 0LL);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)pos, 0LL, 0LL) )
    {
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0LL);
      if ( pos )
      {
        v15 = (UnityEngine_Transform_o *)transform;
        *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Transform__get_position(pos, 0LL);
        if ( v15 )
        {
          UnityEngine_Transform__set_position(v15, *(UnityEngine_Vector3_o *)&v16, 0LL);
          return v8;
        }
      }
LABEL_18:
      sub_1C22094(transform, v14);
    }
  }
  return v8;
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

  if ( (byte_4BDBB17 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDBB17 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)existCheckObj, 0LL, 0LL);
  if ( v10 )
    return existCheckObj;
  else
    return BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)v10, prefab, root, pos, v11);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BaseMonoBehaviour__createObject_39485728(
        BaseMonoBehaviour_o *this,
        System_String_o *resouceurl,
        UnityEngine_Transform_o *root,
        UnityEngine_Transform_o *pos,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v8; // x22
  System_String_o *transform; // x0
  __int64 v10; // x1
  UnityEngine_Transform_o *v11; // x21
  int v12; // s0
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDBB18 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_GameObject_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDBB18 = 1;
  }
  if ( resouceurl )
  {
    v8 = UnityEngine_Resources__Load(resouceurl, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    resouceurl = 0LL;
    if ( !UnityEngine_Object__op_Equality(v8, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (System_String_o *)UnityEngine_Object__Instantiate_70868816(v8, 0LL);
      if ( !transform )
        goto LABEL_20;
      resouceurl = transform;
      if ( (UnityEngine_GameObject_c *)transform->klass != UnityEngine_GameObject_TypeInfo )
        goto LABEL_20;
      transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
      if ( !transform )
        goto LABEL_20;
      UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, root, 0LL);
      transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resouceurl, 0LL);
      if ( !transform )
        goto LABEL_20;
      v16.fields.x = 0.0;
      v16.fields.y = 0.0;
      v16.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v16, 0LL);
      transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resouceurl, 0LL);
      if ( !transform )
        goto LABEL_20;
      v17.fields.x = 0.0;
      v17.fields.y = 0.0;
      v17.fields.z = 0.0;
      UnityEngine_Transform__set_eulerAngles((UnityEngine_Transform_o *)transform, v17, 0LL);
      transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resouceurl, 0LL);
      if ( !transform )
        goto LABEL_20;
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
LABEL_20:
        sub_1C22094(transform, v10);
      }
    }
  }
  return (UnityEngine_GameObject_o *)resouceurl;
}


// local variable allocation has failed, the output may be wrong!
Il2CppObject *__fastcall BaseMonoBehaviour__createObject_object_(
        BaseMonoBehaviour_o *this,
        Il2CppObject *prefab,
        UnityEngine_Transform_o *root,
        UnityEngine_Transform_o *pos,
        const MethodInfo_2F9A6E4 *method)
{
  Il2CppObject *v9; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  float w; // s11
  Il2CppObject *v14; // x0
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *v16; // x22
  UnityEngine_Transform_o *transform; // x0
  __int64 v18; // x1
  UnityEngine_Transform_o *v19; // x21
  int v20; // s0
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v30; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( !method->rgctx_data )
  {
    sub_1C21E38(&UnityEngine_MonoBehaviour_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C73D70(method);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)prefab, 0LL, 0LL) )
  {
    v24.fields.x = 0.0;
    v24.fields.y = 0.0;
    v24.fields.z = 0.0;
    v29 = UnityEngine_Quaternion__Internal_FromEulerRad(v24, 0LL);
    x = v29.fields.x;
    y = v29.fields.y;
    z = v29.fields.z;
    w = v29.fields.w;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v25.fields.x = 0.0;
    v25.fields.y = 0.0;
    v25.fields.z = 0.0;
    v30.fields.x = x;
    v30.fields.y = y;
    v30.fields.z = z;
    v30.fields.w = w;
    v14 = UnityEngine_Object__Instantiate_object__50551576(
            prefab,
            v25,
            v30,
            (const MethodInfo_3035B18 *)method->rgctx_data->_1_UnityEngine_Object_Instantiate_T_);
    v9 = v14;
    if ( !v14 )
      goto LABEL_11;
    methodPtr_low = LOBYTE(UnityEngine_MonoBehaviour_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v14->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
      v16 = (UnityEngine_MonoBehaviour_c *)v14->klass->_2.typeHierarchy[methodPtr_low - 1] == UnityEngine_MonoBehaviour_TypeInfo
          ? (UnityEngine_Object_o *)v14
          : 0LL;
    else
LABEL_11:
      v16 = 0LL;
    transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(v16, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v16 )
        goto LABEL_28;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v16, 0LL);
      if ( !transform )
        goto LABEL_28;
      UnityEngine_Transform__set_parent(transform, root, 0LL);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v16, 0LL);
      if ( !transform )
        goto LABEL_28;
      v26.fields.x = 0.0;
      v26.fields.y = 0.0;
      v26.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition(transform, v26, 0LL);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v16, 0LL);
      if ( !transform )
        goto LABEL_28;
      v27.fields.x = 0.0;
      v27.fields.y = 0.0;
      v27.fields.z = 0.0;
      UnityEngine_Transform__set_eulerAngles(transform, v27, 0LL);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v16, 0LL);
      if ( !transform )
        goto LABEL_28;
      v28.fields.x = 1.0;
      v28.fields.y = 1.0;
      v28.fields.z = 1.0;
      UnityEngine_Transform__set_localScale(transform, v28, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)pos, 0LL, 0LL) )
      {
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v16, 0LL);
        if ( pos )
        {
          v19 = transform;
          *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Transform__get_position(pos, 0LL);
          if ( v19 )
          {
            UnityEngine_Transform__set_position(v19, *(UnityEngine_Vector3_o *)&v20, 0LL);
            return v9;
          }
        }
LABEL_28:
        sub_1C22094(transform, v18);
      }
    }
  }
  return v9;
}