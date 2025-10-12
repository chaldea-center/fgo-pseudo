void BaseMonoBehaviour___ctor(BaseMonoBehaviour_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


UnityEngine_GameObject_o *BaseMonoBehaviour__CreateObjectStatic(
        System_String_o *resouceurl,
        UnityEngine_Transform_o *root,
        UnityEngine_Transform_o *pos,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v7; // x22
  System_String_o *transform; // x0
  UnityEngine_Transform_o *v9; // x21
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C36FC6 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_GameObject_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C36FC6 = 1;
  }
  if ( resouceurl )
  {
    v7 = UnityEngine_Resources__Load(resouceurl, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    resouceurl = 0;
    if ( !UnityEngine_Object__op_Equality(v7, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (System_String_o *)UnityEngine_Object__Instantiate_71222852(v7, 0);
      if ( !transform )
        goto LABEL_20;
      resouceurl = transform;
      if ( (UnityEngine_GameObject_c *)transform->klass != UnityEngine_GameObject_TypeInfo )
        goto LABEL_20;
      transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
      if ( !transform )
        goto LABEL_20;
      UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, root, 0);
      transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resouceurl, 0);
      if ( !transform )
        goto LABEL_20;
      v11.fields.x = 0.0;
      v11.fields.y = 0.0;
      v11.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v11, 0);
      transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resouceurl, 0);
      if ( !transform )
        goto LABEL_20;
      v12.fields.x = 0.0;
      v12.fields.y = 0.0;
      v12.fields.z = 0.0;
      UnityEngine_Transform__set_eulerAngles((UnityEngine_Transform_o *)transform, v12, 0);
      transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resouceurl, 0);
      if ( !transform )
        goto LABEL_20;
      v13.fields.x = 1.0;
      v13.fields.y = 1.0;
      v13.fields.z = 1.0;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v13, 0);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)pos, 0, 0) )
      {
        transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resouceurl, 0);
        if ( pos )
        {
          v9 = (UnityEngine_Transform_o *)transform;
          position = UnityEngine_Transform__get_position(pos, 0);
          if ( v9 )
          {
            UnityEngine_Transform__set_position(v9, position, 0);
            return (UnityEngine_GameObject_o *)resouceurl;
          }
        }
LABEL_20:
        sub_1C32E7C(transform);
      }
    }
  }
  return (UnityEngine_GameObject_o *)resouceurl;
}


UnityEngine_GameObject_o *BaseMonoBehaviour__createObject(
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
  UnityEngine_Transform_o *v14; // x21
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v23; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4C36FC3 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject____78147232);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C36FC3 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = 0;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)prefab, 0, 0) )
  {
    v16.fields.x = 0.0;
    v16.fields.y = 0.0;
    v16.fields.z = 0.0;
    v22 = UnityEngine_Quaternion__Internal_FromEulerRad(v16, 0);
    x = v22.fields.x;
    y = v22.fields.y;
    z = v22.fields.z;
    w = v22.fields.w;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v17.fields.x = 0.0;
    v17.fields.y = 0.0;
    v17.fields.z = 0.0;
    v23.fields.x = x;
    v23.fields.y = y;
    v23.fields.z = z;
    v23.fields.w = w;
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__51812788(
                                              (Il2CppObject *)prefab,
                                              v17,
                                              v23,
                                              (const MethodInfo_31699B4 *)Method_UnityEngine_Object_Instantiate_GameObject____78147232);
    if ( !transform )
      goto LABEL_18;
    v8 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    if ( !transform )
      goto LABEL_18;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, root, 0);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0);
    if ( !transform )
      goto LABEL_18;
    v18.fields.x = 0.0;
    v18.fields.y = 0.0;
    v18.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v18, 0);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0);
    if ( !transform )
      goto LABEL_18;
    v19.fields.x = 0.0;
    v19.fields.y = 0.0;
    v19.fields.z = 0.0;
    UnityEngine_Transform__set_eulerAngles((UnityEngine_Transform_o *)transform, v19, 0);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0);
    if ( !transform )
      goto LABEL_18;
    v20.fields.x = 1.0;
    v20.fields.y = 1.0;
    v20.fields.z = 1.0;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v20, 0);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)pos, 0, 0) )
    {
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0);
      if ( pos )
      {
        v14 = (UnityEngine_Transform_o *)transform;
        position = UnityEngine_Transform__get_position(pos, 0);
        if ( v14 )
        {
          UnityEngine_Transform__set_position(v14, position, 0);
          return v8;
        }
      }
LABEL_18:
      sub_1C32E7C(transform);
    }
  }
  return v8;
}


UnityEngine_GameObject_o *BaseMonoBehaviour__createObjectIfNotExist(
        BaseMonoBehaviour_o *this,
        UnityEngine_GameObject_o *existCheckObj,
        UnityEngine_GameObject_o *prefab,
        UnityEngine_Transform_o *root,
        UnityEngine_Transform_o *pos,
        const MethodInfo *method)
{
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x4

  if ( (byte_4C36FC4 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C36FC4 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)existCheckObj, 0, 0);
  if ( v10 )
    return existCheckObj;
  else
    return BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)v10, prefab, root, pos, v11);
}


UnityEngine_GameObject_o *BaseMonoBehaviour__createObject_41085732(
        BaseMonoBehaviour_o *this,
        System_String_o *resouceurl,
        UnityEngine_Transform_o *root,
        UnityEngine_Transform_o *pos,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v8; // x22
  System_String_o *transform; // x0
  UnityEngine_Transform_o *v10; // x21
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C36FC5 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_GameObject_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C36FC5 = 1;
  }
  if ( resouceurl )
  {
    v8 = UnityEngine_Resources__Load(resouceurl, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    resouceurl = 0;
    if ( !UnityEngine_Object__op_Equality(v8, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (System_String_o *)UnityEngine_Object__Instantiate_71222852(v8, 0);
      if ( !transform )
        goto LABEL_20;
      resouceurl = transform;
      if ( (UnityEngine_GameObject_c *)transform->klass != UnityEngine_GameObject_TypeInfo )
        goto LABEL_20;
      transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
      if ( !transform )
        goto LABEL_20;
      UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, root, 0);
      transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resouceurl, 0);
      if ( !transform )
        goto LABEL_20;
      v12.fields.x = 0.0;
      v12.fields.y = 0.0;
      v12.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v12, 0);
      transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resouceurl, 0);
      if ( !transform )
        goto LABEL_20;
      v13.fields.x = 0.0;
      v13.fields.y = 0.0;
      v13.fields.z = 0.0;
      UnityEngine_Transform__set_eulerAngles((UnityEngine_Transform_o *)transform, v13, 0);
      transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resouceurl, 0);
      if ( !transform )
        goto LABEL_20;
      v14.fields.x = 1.0;
      v14.fields.y = 1.0;
      v14.fields.z = 1.0;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v14, 0);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)pos, 0, 0) )
      {
        transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resouceurl, 0);
        if ( pos )
        {
          v10 = (UnityEngine_Transform_o *)transform;
          position = UnityEngine_Transform__get_position(pos, 0);
          if ( v10 )
          {
            UnityEngine_Transform__set_position(v10, position, 0);
            return (UnityEngine_GameObject_o *)resouceurl;
          }
        }
LABEL_20:
        sub_1C32E7C(transform);
      }
    }
  }
  return (UnityEngine_GameObject_o *)resouceurl;
}


Il2CppObject *BaseMonoBehaviour__createObject_object_(
        BaseMonoBehaviour_o *this,
        Il2CppObject *prefab,
        UnityEngine_Transform_o *root,
        UnityEngine_Transform_o *pos,
        const MethodInfo_30C6068 *method)
{
  Il2CppObject *v9; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  float w; // s11
  Il2CppObject *v14; // x0
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *v16; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v18; // x21
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v27; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( !method->rgctx_data )
  {
    sub_1C32C20(&UnityEngine_MonoBehaviour_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C83390(method);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = 0;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)prefab, 0, 0) )
  {
    v20.fields.x = 0.0;
    v20.fields.y = 0.0;
    v20.fields.z = 0.0;
    v26 = UnityEngine_Quaternion__Internal_FromEulerRad(v20, 0);
    x = v26.fields.x;
    y = v26.fields.y;
    z = v26.fields.z;
    w = v26.fields.w;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v21.fields.x = 0.0;
    v21.fields.y = 0.0;
    v21.fields.z = 0.0;
    v27.fields.x = x;
    v27.fields.y = y;
    v27.fields.z = z;
    v27.fields.w = w;
    v14 = UnityEngine_Object__Instantiate_object__51812788(
            prefab,
            v21,
            v27,
            (const MethodInfo_31699B4 *)method->rgctx_data->_1_UnityEngine_Object_Instantiate_T_);
    v9 = v14;
    if ( !v14 )
      goto LABEL_11;
    naturalAligment = UnityEngine_MonoBehaviour_TypeInfo->_2.naturalAligment;
    if ( v14->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      v16 = (UnityEngine_MonoBehaviour_c *)v14->klass->_2.typeHierarchy[naturalAligment - 1] == UnityEngine_MonoBehaviour_TypeInfo
          ? (UnityEngine_Object_o *)v14
          : 0LL;
    else
LABEL_11:
      v16 = 0;
    transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(v16, 0, 0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v16 )
        goto LABEL_28;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v16, 0);
      if ( !transform )
        goto LABEL_28;
      UnityEngine_Transform__set_parent(transform, root, 0);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v16, 0);
      if ( !transform )
        goto LABEL_28;
      v22.fields.x = 0.0;
      v22.fields.y = 0.0;
      v22.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition(transform, v22, 0);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v16, 0);
      if ( !transform )
        goto LABEL_28;
      v23.fields.x = 0.0;
      v23.fields.y = 0.0;
      v23.fields.z = 0.0;
      UnityEngine_Transform__set_eulerAngles(transform, v23, 0);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v16, 0);
      if ( !transform )
        goto LABEL_28;
      v24.fields.x = 1.0;
      v24.fields.y = 1.0;
      v24.fields.z = 1.0;
      UnityEngine_Transform__set_localScale(transform, v24, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)pos, 0, 0) )
      {
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v16, 0);
        if ( pos )
        {
          v18 = transform;
          position = UnityEngine_Transform__get_position(pos, 0);
          if ( v18 )
          {
            UnityEngine_Transform__set_position(v18, position, 0);
            return v9;
          }
        }
LABEL_28:
        sub_1C32E7C(transform);
      }
    }
  }
  return v9;
}