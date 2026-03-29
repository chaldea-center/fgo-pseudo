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
  __int64 v9; // x1
  UnityEngine_Transform_o *v10; // x21
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D30000 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_GameObject_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D30000 = 1;
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
      transform = (System_String_o *)UnityEngine_Object__Instantiate_72119120(v7, 0);
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
        sub_1C93D2C(transform, v9);
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
  UnityEngine_GameObject_o *transform; // x0
  __int64 v10; // x1
  UnityEngine_Transform_o *v11; // x21
  UnityEngine_Quaternion_o v13; // 0:kr00_16.16
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2FFFD & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject____79146688);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2FFFD = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = 0;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)prefab, 0, 0) )
  {
    v14.fields.x = 0.0;
    v14.fields.y = 0.0;
    v14.fields.z = 0.0;
    v13 = UnityEngine_Quaternion__Internal_FromEulerRad(v14, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15.fields.x = 0.0;
    v15.fields.y = 0.0;
    v15.fields.z = 0.0;
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__52629704(
                                              (Il2CppObject *)prefab,
                                              v15,
                                              v13,
                                              (const MethodInfo_32310C8 *)Method_UnityEngine_Object_Instantiate_GameObject____79146688);
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
    v16.fields.x = 0.0;
    v16.fields.y = 0.0;
    v16.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v16, 0);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0);
    if ( !transform )
      goto LABEL_18;
    v17.fields.x = 0.0;
    v17.fields.y = 0.0;
    v17.fields.z = 0.0;
    UnityEngine_Transform__set_eulerAngles((UnityEngine_Transform_o *)transform, v17, 0);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0);
    if ( !transform )
      goto LABEL_18;
    v18.fields.x = 1.0;
    v18.fields.y = 1.0;
    v18.fields.z = 1.0;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v18, 0);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)pos, 0, 0) )
    {
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0);
      if ( pos )
      {
        v11 = (UnityEngine_Transform_o *)transform;
        position = UnityEngine_Transform__get_position(pos, 0);
        if ( v11 )
        {
          UnityEngine_Transform__set_position(v11, position, 0);
          return v8;
        }
      }
LABEL_18:
      sub_1C93D2C(transform, v10);
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

  if ( (byte_4D2FFFE & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2FFFE = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)existCheckObj, 0, 0);
  if ( v10 )
    return existCheckObj;
  else
    return BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)v10, prefab, root, pos, v11);
}


UnityEngine_GameObject_o *BaseMonoBehaviour__createObject_41910396(
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
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2FFFF & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_GameObject_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2FFFF = 1;
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
      transform = (System_String_o *)UnityEngine_Object__Instantiate_72119120(v8, 0);
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
      v13.fields.x = 0.0;
      v13.fields.y = 0.0;
      v13.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v13, 0);
      transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resouceurl, 0);
      if ( !transform )
        goto LABEL_20;
      v14.fields.x = 0.0;
      v14.fields.y = 0.0;
      v14.fields.z = 0.0;
      UnityEngine_Transform__set_eulerAngles((UnityEngine_Transform_o *)transform, v14, 0);
      transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resouceurl, 0);
      if ( !transform )
        goto LABEL_20;
      v15.fields.x = 1.0;
      v15.fields.y = 1.0;
      v15.fields.z = 1.0;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v15, 0);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)pos, 0, 0) )
      {
        transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resouceurl, 0);
        if ( pos )
        {
          v11 = (UnityEngine_Transform_o *)transform;
          position = UnityEngine_Transform__get_position(pos, 0);
          if ( v11 )
          {
            UnityEngine_Transform__set_position(v11, position, 0);
            return (UnityEngine_GameObject_o *)resouceurl;
          }
        }
LABEL_20:
        sub_1C93D2C(transform, v10);
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
        const MethodInfo_318D3A4 *method)
{
  Il2CppObject *v9; // x20
  Il2CppObject *v10; // x0
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *v12; // x22
  UnityEngine_Transform_o *transform; // x0
  __int64 v14; // x1
  UnityEngine_Transform_o *v15; // x21
  UnityEngine_Quaternion_o v17; // 0:kr00_16.16
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( !method->rgctx_data )
  {
    sub_1C93AD4(&UnityEngine_MonoBehaviour_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C69BC4(method);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = 0;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)prefab, 0, 0) )
  {
    v18.fields.x = 0.0;
    v18.fields.y = 0.0;
    v18.fields.z = 0.0;
    v17 = UnityEngine_Quaternion__Internal_FromEulerRad(v18, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v19.fields.x = 0.0;
    v19.fields.y = 0.0;
    v19.fields.z = 0.0;
    v10 = UnityEngine_Object__Instantiate_object__52629704(
            prefab,
            v19,
            v17,
            (const MethodInfo_32310C8 *)method->rgctx_data->_1_UnityEngine_Object_Instantiate_T_);
    v9 = v10;
    if ( v10
      && (naturalAligment = UnityEngine_MonoBehaviour_TypeInfo->_2.naturalAligment,
          v10->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      v12 = (UnityEngine_MonoBehaviour_c *)v10->klass->_2.typeHierarchy[naturalAligment - 1] == UnityEngine_MonoBehaviour_TypeInfo
          ? (UnityEngine_Object_o *)v10
          : 0LL;
    }
    else
    {
      v12 = 0;
    }
    transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(v12, 0, 0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v12 )
        goto LABEL_28;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v12, 0);
      if ( !transform )
        goto LABEL_28;
      UnityEngine_Transform__set_parent(transform, root, 0);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v12, 0);
      if ( !transform )
        goto LABEL_28;
      v20.fields.x = 0.0;
      v20.fields.y = 0.0;
      v20.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition(transform, v20, 0);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v12, 0);
      if ( !transform )
        goto LABEL_28;
      v21.fields.x = 0.0;
      v21.fields.y = 0.0;
      v21.fields.z = 0.0;
      UnityEngine_Transform__set_eulerAngles(transform, v21, 0);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v12, 0);
      if ( !transform )
        goto LABEL_28;
      v22.fields.x = 1.0;
      v22.fields.y = 1.0;
      v22.fields.z = 1.0;
      UnityEngine_Transform__set_localScale(transform, v22, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)pos, 0, 0) )
      {
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v12, 0);
        if ( pos )
        {
          v15 = transform;
          position = UnityEngine_Transform__get_position(pos, 0);
          if ( v15 )
          {
            UnityEngine_Transform__set_position(v15, position, 0);
            return v9;
          }
        }
LABEL_28:
        sub_1C93D2C(transform, v14);
      }
    }
  }
  return v9;
}