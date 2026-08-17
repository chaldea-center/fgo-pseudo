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
  __int64 v7; // x1
  UnityEngine_Object_o *v8; // x22
  __int64 v9; // x1
  System_String_o *transform; // x0
  __int64 v11; // x1
  UnityEngine_Transform_o *v12; // x21
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596FDCA & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_GameObject_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FDCA = 1;
  }
  if ( resouceurl )
  {
    v8 = UnityEngine_Resources__Load(resouceurl, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    resouceurl = 0;
    if ( !UnityEngine_Object__op_Equality(v8, 0, 0) )
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
      transform = (System_String_o *)UnityEngine_Object__Instantiate_83458448(v8, 0);
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
      v14.fields.x = 0.0;
      v14.fields.y = 0.0;
      v14.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v14, 0);
      transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resouceurl, 0);
      if ( !transform )
        goto LABEL_20;
      v15.fields.x = 0.0;
      v15.fields.y = 0.0;
      v15.fields.z = 0.0;
      UnityEngine_Transform__set_eulerAngles((UnityEngine_Transform_o *)transform, v15, 0);
      transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resouceurl, 0);
      if ( !transform )
        goto LABEL_20;
      v16.fields.x = 1.0;
      v16.fields.y = 1.0;
      v16.fields.z = 1.0;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v16, 0);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)pos, 0, 0) )
      {
        transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resouceurl, 0);
        if ( pos )
        {
          v12 = (UnityEngine_Transform_o *)transform;
          position = UnityEngine_Transform__get_position(pos, 0);
          if ( v12 )
          {
            UnityEngine_Transform__set_position(v12, position, 0);
            return (UnityEngine_GameObject_o *)resouceurl;
          }
        }
LABEL_20:
        sub_2213CDC(transform, v11);
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
  __int64 v9; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  float w; // s11
  UnityEngine_GameObject_o *transform; // x0
  __int64 v15; // x1
  UnityEngine_Transform_o *v16; // x21
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v25; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_596FDC7 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801600);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FDC7 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, prefab);
  v8 = 0;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)prefab, 0, 0) )
  {
    v18.fields.x = 0.0;
    v18.fields.y = 0.0;
    v18.fields.z = 0.0;
    v24 = UnityEngine_Quaternion__Internal_FromEulerRad(v18, 0);
    x = v24.fields.x;
    y = v24.fields.y;
    z = v24.fields.z;
    w = v24.fields.w;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    v19.fields.x = 0.0;
    v19.fields.y = 0.0;
    v19.fields.z = 0.0;
    v25.fields.x = x;
    v25.fields.y = y;
    v25.fields.z = z;
    v25.fields.w = w;
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__59717424(
                                              (Il2CppObject *)prefab,
                                              v19,
                                              v25,
                                              (const MethodInfo_38F3730 *)Method_UnityEngine_Object_Instantiate_GameObject____91801600);
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
    v20.fields.x = 0.0;
    v20.fields.y = 0.0;
    v20.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v20, 0);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0);
    if ( !transform )
      goto LABEL_18;
    v21.fields.x = 0.0;
    v21.fields.y = 0.0;
    v21.fields.z = 0.0;
    UnityEngine_Transform__set_eulerAngles((UnityEngine_Transform_o *)transform, v21, 0);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0);
    if ( !transform )
      goto LABEL_18;
    v22.fields.x = 1.0;
    v22.fields.y = 1.0;
    v22.fields.z = 1.0;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v22, 0);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)pos, 0, 0) )
    {
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0);
      if ( pos )
      {
        v16 = (UnityEngine_Transform_o *)transform;
        position = UnityEngine_Transform__get_position(pos, 0);
        if ( v16 )
        {
          UnityEngine_Transform__set_position(v16, position, 0);
          return v8;
        }
      }
LABEL_18:
      sub_2213CDC(transform, v15);
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

  if ( (byte_596FDC8 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FDC8 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, existCheckObj);
  v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)existCheckObj, 0, 0);
  if ( v10 )
    return existCheckObj;
  else
    return BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)v10, prefab, root, pos, v11);
}


UnityEngine_GameObject_o *BaseMonoBehaviour__createObject_48153028(
        BaseMonoBehaviour_o *this,
        System_String_o *resouceurl,
        UnityEngine_Transform_o *root,
        UnityEngine_Transform_o *pos,
        const MethodInfo *method)
{
  __int64 v8; // x1
  UnityEngine_Object_o *v9; // x22
  __int64 v10; // x1
  System_String_o *transform; // x0
  __int64 v12; // x1
  UnityEngine_Transform_o *v13; // x21
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596FDC9 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_GameObject_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FDC9 = 1;
  }
  if ( resouceurl )
  {
    v9 = UnityEngine_Resources__Load(resouceurl, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    resouceurl = 0;
    if ( !UnityEngine_Object__op_Equality(v9, 0, 0) )
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      transform = (System_String_o *)UnityEngine_Object__Instantiate_83458448(v9, 0);
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
      v15.fields.x = 0.0;
      v15.fields.y = 0.0;
      v15.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v15, 0);
      transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resouceurl, 0);
      if ( !transform )
        goto LABEL_20;
      v16.fields.x = 0.0;
      v16.fields.y = 0.0;
      v16.fields.z = 0.0;
      UnityEngine_Transform__set_eulerAngles((UnityEngine_Transform_o *)transform, v16, 0);
      transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resouceurl, 0);
      if ( !transform )
        goto LABEL_20;
      v17.fields.x = 1.0;
      v17.fields.y = 1.0;
      v17.fields.z = 1.0;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v17, 0);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)pos, 0, 0) )
      {
        transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resouceurl, 0);
        if ( pos )
        {
          v13 = (UnityEngine_Transform_o *)transform;
          position = UnityEngine_Transform__get_position(pos, 0);
          if ( v13 )
          {
            UnityEngine_Transform__set_position(v13, position, 0);
            return (UnityEngine_GameObject_o *)resouceurl;
          }
        }
LABEL_20:
        sub_2213CDC(transform, v12);
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
        const MethodInfo_380F544 *method)
{
  Il2CppObject *v9; // x20
  __int64 v10; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  float w; // s11
  Il2CppObject *v15; // x0
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *v17; // x22
  UnityEngine_Transform_o *transform; // x0
  __int64 v19; // x1
  __int64 v20; // x1
  UnityEngine_Transform_o *v21; // x21
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v30; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( !method->rgctx_data )
  {
    sub_2213A60(&UnityEngine_MonoBehaviour_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      sub_224B964(method);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, prefab);
  v9 = 0;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)prefab, 0, 0) )
  {
    v23.fields.x = 0.0;
    v23.fields.y = 0.0;
    v23.fields.z = 0.0;
    v29 = UnityEngine_Quaternion__Internal_FromEulerRad(v23, 0);
    x = v29.fields.x;
    y = v29.fields.y;
    z = v29.fields.z;
    w = v29.fields.w;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    v24.fields.x = 0.0;
    v24.fields.y = 0.0;
    v24.fields.z = 0.0;
    v30.fields.x = x;
    v30.fields.y = y;
    v30.fields.z = z;
    v30.fields.w = w;
    v15 = UnityEngine_Object__Instantiate_object__59717424(
            prefab,
            v24,
            v30,
            (const MethodInfo_38F3730 *)method->rgctx_data->_1_UnityEngine_Object_Instantiate_T_);
    v9 = v15;
    if ( !v15 )
      goto LABEL_11;
    naturalAligment = UnityEngine_MonoBehaviour_TypeInfo->_2.naturalAligment;
    if ( v15->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      v17 = (UnityEngine_MonoBehaviour_c *)v15->klass->_2.typeHierarchy[naturalAligment - 1] == UnityEngine_MonoBehaviour_TypeInfo
          ? (UnityEngine_Object_o *)v15
          : 0LL;
    else
LABEL_11:
      v17 = 0;
    transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(v17, 0, 0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v17 )
        goto LABEL_28;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v17, 0);
      if ( !transform )
        goto LABEL_28;
      UnityEngine_Transform__set_parent(transform, root, 0);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v17, 0);
      if ( !transform )
        goto LABEL_28;
      v25.fields.x = 0.0;
      v25.fields.y = 0.0;
      v25.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition(transform, v25, 0);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v17, 0);
      if ( !transform )
        goto LABEL_28;
      v26.fields.x = 0.0;
      v26.fields.y = 0.0;
      v26.fields.z = 0.0;
      UnityEngine_Transform__set_eulerAngles(transform, v26, 0);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v17, 0);
      if ( !transform )
        goto LABEL_28;
      v27.fields.x = 1.0;
      v27.fields.y = 1.0;
      v27.fields.z = 1.0;
      UnityEngine_Transform__set_localScale(transform, v27, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)pos, 0, 0) )
      {
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v17, 0);
        if ( pos )
        {
          v21 = transform;
          position = UnityEngine_Transform__get_position(pos, 0);
          if ( v21 )
          {
            UnityEngine_Transform__set_position(v21, position, 0);
            return v9;
          }
        }
LABEL_28:
        sub_2213CDC(transform, v19);
      }
    }
  }
  return v9;
}