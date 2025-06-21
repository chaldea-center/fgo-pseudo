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

  if ( (byte_4B1BB58 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_GameObject_TypeInfo, root);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v7);
    byte_4B1BB58 = 1;
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
      transform = (System_String_o *)UnityEngine_Object__Instantiate_70135288(v8, 0LL);
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
        sub_1BCB254(transform, v10);
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

  if ( (byte_4B1BB55 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject____77001560, prefab);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v8);
    byte_4B1BB55 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)prefab, 0LL, 0LL) )
  {
    v21.fields.x = 0.0;
    v21.fields.y = 0.0;
    v21.fields.z = 0.0;
    v26 = UnityEngine_Quaternion__Internal_FromEulerRad(v21, 0LL);
    x = v26.fields.x;
    y = v26.fields.y;
    z = v26.fields.z;
    w = v26.fields.w;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v22.fields.x = 0.0;
    v22.fields.y = 0.0;
    v22.fields.z = 0.0;
    v27.fields.x = x;
    v27.fields.y = y;
    v27.fields.z = z;
    v27.fields.w = w;
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__51002896(
                                              (Il2CppObject *)prefab,
                                              v22,
                                              v27,
                                              (const MethodInfo_30A3E10 *)Method_UnityEngine_Object_Instantiate_GameObject____77001560);
    if ( !transform )
      goto LABEL_18;
    v9 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_18;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, root, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0LL);
    if ( !transform )
      goto LABEL_18;
    v23.fields.x = 0.0;
    v23.fields.y = 0.0;
    v23.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v23, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0LL);
    if ( !transform )
      goto LABEL_18;
    v24.fields.x = 0.0;
    v24.fields.y = 0.0;
    v24.fields.z = 0.0;
    UnityEngine_Transform__set_eulerAngles((UnityEngine_Transform_o *)transform, v24, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0LL);
    if ( !transform )
      goto LABEL_18;
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
LABEL_18:
      sub_1BCB254(transform, v15);
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

  if ( (byte_4B1BB56 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, existCheckObj);
    byte_4B1BB56 = 1;
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
UnityEngine_GameObject_o *__fastcall BaseMonoBehaviour__createObject_40364880(
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
  if ( (byte_4B1BB57 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_GameObject_TypeInfo, resouceurl);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v8);
    byte_4B1BB57 = 1;
  }
  if ( v7 )
  {
    v9 = UnityEngine_Resources__Load(v7, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = 0LL;
    if ( !UnityEngine_Object__op_Equality(v9, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_70135288(v9, 0LL);
      if ( !transform )
        goto LABEL_20;
      v7 = (System_String_o *)transform;
      if ( transform->klass != UnityEngine_GameObject_TypeInfo )
        goto LABEL_20;
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
      if ( !transform )
        goto LABEL_20;
      UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, root, 0LL);
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v7, 0LL);
      if ( !transform )
        goto LABEL_20;
      v17.fields.x = 0.0;
      v17.fields.y = 0.0;
      v17.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v17, 0LL);
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v7, 0LL);
      if ( !transform )
        goto LABEL_20;
      v18.fields.x = 0.0;
      v18.fields.y = 0.0;
      v18.fields.z = 0.0;
      UnityEngine_Transform__set_eulerAngles((UnityEngine_Transform_o *)transform, v18, 0LL);
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v7, 0LL);
      if ( !transform )
        goto LABEL_20;
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
LABEL_20:
        sub_1BCB254(transform, v11);
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
        const MethodInfo_30037F4 *method)
{
  __int64 v9; // x1
  Il2CppObject *v10; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  float w; // s11
  Il2CppObject *v15; // x0
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *v17; // x22
  UnityEngine_Transform_o *transform; // x0
  __int64 v19; // x1
  UnityEngine_Transform_o *v20; // x21
  int v21; // s0
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v31; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( !method->rgctx_data )
  {
    sub_1BCAFF8(&UnityEngine_MonoBehaviour_TypeInfo, prefab);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v9);
    if ( !method->rgctx_data )
      sub_1C1B4B8(method);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)prefab, 0LL, 0LL) )
  {
    v25.fields.x = 0.0;
    v25.fields.y = 0.0;
    v25.fields.z = 0.0;
    v30 = UnityEngine_Quaternion__Internal_FromEulerRad(v25, 0LL);
    x = v30.fields.x;
    y = v30.fields.y;
    z = v30.fields.z;
    w = v30.fields.w;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v26.fields.x = 0.0;
    v26.fields.y = 0.0;
    v26.fields.z = 0.0;
    v31.fields.x = x;
    v31.fields.y = y;
    v31.fields.z = z;
    v31.fields.w = w;
    v15 = UnityEngine_Object__Instantiate_object__51002896(
            prefab,
            v26,
            v31,
            (const MethodInfo_30A3E10 *)method->rgctx_data->_1_UnityEngine_Object_Instantiate_T_);
    v10 = v15;
    if ( !v15 )
      goto LABEL_11;
    methodPtr_low = LOBYTE(UnityEngine_MonoBehaviour_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v15->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
      v17 = (UnityEngine_MonoBehaviour_c *)v15->klass->_2.typeHierarchy[methodPtr_low - 1] == UnityEngine_MonoBehaviour_TypeInfo
          ? (UnityEngine_Object_o *)v15
          : 0LL;
    else
LABEL_11:
      v17 = 0LL;
    transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v17 )
        goto LABEL_28;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v17, 0LL);
      if ( !transform )
        goto LABEL_28;
      UnityEngine_Transform__set_parent(transform, root, 0LL);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v17, 0LL);
      if ( !transform )
        goto LABEL_28;
      v27.fields.x = 0.0;
      v27.fields.y = 0.0;
      v27.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition(transform, v27, 0LL);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v17, 0LL);
      if ( !transform )
        goto LABEL_28;
      v28.fields.x = 0.0;
      v28.fields.y = 0.0;
      v28.fields.z = 0.0;
      UnityEngine_Transform__set_eulerAngles(transform, v28, 0LL);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v17, 0LL);
      if ( !transform )
        goto LABEL_28;
      v29.fields.x = 1.0;
      v29.fields.y = 1.0;
      v29.fields.z = 1.0;
      UnityEngine_Transform__set_localScale(transform, v29, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
            return v10;
          }
        }
LABEL_28:
        sub_1BCB254(transform, v19);
      }
    }
  }
  return v10;
}