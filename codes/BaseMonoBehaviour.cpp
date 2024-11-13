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
  __int64 v8; // x2
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x22
  __int64 v11; // x1
  System_String_o *transform; // x0
  __int64 v13; // x1
  UnityEngine_Transform_o *v14; // x21
  int v15; // s0
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B157DE & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_GameObject_TypeInfo, root, pos);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B157DE = 1;
  }
  if ( resouceurl )
  {
    v10 = UnityEngine_Resources__Load(resouceurl, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    resouceurl = 0LL;
    if ( !UnityEngine_Object__op_Equality(v10, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      transform = (System_String_o *)UnityEngine_Object__Instantiate_70153448(v10, 0LL);
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
      v19.fields.x = 0.0;
      v19.fields.y = 0.0;
      v19.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v19, 0LL);
      transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resouceurl, 0LL);
      if ( !transform )
        goto LABEL_20;
      v20.fields.x = 0.0;
      v20.fields.y = 0.0;
      v20.fields.z = 0.0;
      UnityEngine_Transform__set_eulerAngles((UnityEngine_Transform_o *)transform, v20, 0LL);
      transform = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resouceurl, 0LL);
      if ( !transform )
        goto LABEL_20;
      v21.fields.x = 1.0;
      v21.fields.y = 1.0;
      v21.fields.z = 1.0;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v21, 0LL);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)pos, 0LL, 0LL) )
      {
        transform = (System_String_o *)UnityEngine_GameObject__get_transform(
                                         (UnityEngine_GameObject_o *)resouceurl,
                                         0LL);
        if ( pos )
        {
          v14 = (UnityEngine_Transform_o *)transform;
          *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Transform__get_position(pos, 0LL);
          if ( v14 )
          {
            UnityEngine_Transform__set_position(v14, *(UnityEngine_Vector3_o *)&v15, 0LL);
            return (UnityEngine_GameObject_o *)resouceurl;
          }
        }
LABEL_20:
        sub_1BCAA3C(transform, v13);
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
  __int64 v9; // x2
  UnityEngine_GameObject_o *v10; // x20
  __int64 v11; // x1
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

  if ( (byte_4B157DB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924664, prefab, root);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    byte_4B157DB = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, prefab);
  v10 = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)prefab, 0LL, 0LL) )
  {
    v23.fields.x = 0.0;
    v23.fields.y = 0.0;
    v23.fields.z = 0.0;
    v28 = UnityEngine_Quaternion__Internal_FromEulerRad(v23, 0LL);
    x = v28.fields.x;
    y = v28.fields.y;
    z = v28.fields.z;
    w = v28.fields.w;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    v24.fields.x = 0.0;
    v24.fields.y = 0.0;
    v24.fields.z = 0.0;
    v29.fields.x = x;
    v29.fields.y = y;
    v29.fields.z = z;
    v29.fields.w = w;
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__49904120(
                                              (Il2CppObject *)prefab,
                                              v24,
                                              v29,
                                              (const MethodInfo_2F979F8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924664);
    if ( !transform )
      goto LABEL_18;
    v10 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_18;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, root, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
    if ( !transform )
      goto LABEL_18;
    v25.fields.x = 0.0;
    v25.fields.y = 0.0;
    v25.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v25, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
    if ( !transform )
      goto LABEL_18;
    v26.fields.x = 0.0;
    v26.fields.y = 0.0;
    v26.fields.z = 0.0;
    UnityEngine_Transform__set_eulerAngles((UnityEngine_Transform_o *)transform, v26, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
    if ( !transform )
      goto LABEL_18;
    v27.fields.x = 1.0;
    v27.fields.y = 1.0;
    v27.fields.z = 1.0;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v27, 0LL);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)pos, 0LL, 0LL) )
    {
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
      if ( pos )
      {
        v18 = (UnityEngine_Transform_o *)transform;
        *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Transform__get_position(pos, 0LL);
        if ( v18 )
        {
          UnityEngine_Transform__set_position(v18, *(UnityEngine_Vector3_o *)&v19, 0LL);
          return v10;
        }
      }
LABEL_18:
      sub_1BCAA3C(transform, v17);
    }
  }
  return v10;
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

  if ( (byte_4B157DC & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, existCheckObj, prefab);
    byte_4B157DC = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, existCheckObj);
  v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)existCheckObj, 0LL, 0LL);
  if ( v10 )
    return existCheckObj;
  else
    return BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)v10, prefab, root, pos, v11);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BaseMonoBehaviour__createObject_38952608(
        BaseMonoBehaviour_o *this,
        System_String_o *resouceurl,
        UnityEngine_Transform_o *root,
        UnityEngine_Transform_o *pos,
        const MethodInfo *method)
{
  System_String_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  UnityEngine_Object_o *v11; // x22
  __int64 v12; // x1
  UnityEngine_GameObject_o *transform; // x0
  __int64 v14; // x1
  UnityEngine_Transform_o *v15; // x21
  int v16; // s0
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  v7 = resouceurl;
  if ( (byte_4B157DD & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_GameObject_TypeInfo, resouceurl, root);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    byte_4B157DD = 1;
  }
  if ( v7 )
  {
    v11 = UnityEngine_Resources__Load(v7, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    v7 = 0LL;
    if ( !UnityEngine_Object__op_Equality(v11, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_70153448(v11, 0LL);
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
      v20.fields.x = 0.0;
      v20.fields.y = 0.0;
      v20.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v20, 0LL);
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v7, 0LL);
      if ( !transform )
        goto LABEL_20;
      v21.fields.x = 0.0;
      v21.fields.y = 0.0;
      v21.fields.z = 0.0;
      UnityEngine_Transform__set_eulerAngles((UnityEngine_Transform_o *)transform, v21, 0LL);
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v7, 0LL);
      if ( !transform )
        goto LABEL_20;
      v22.fields.x = 1.0;
      v22.fields.y = 1.0;
      v22.fields.z = 1.0;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v22, 0LL);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)pos, 0LL, 0LL) )
      {
        transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)v7,
                                                  0LL);
        if ( pos )
        {
          v15 = (UnityEngine_Transform_o *)transform;
          *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Transform__get_position(pos, 0LL);
          if ( v15 )
          {
            UnityEngine_Transform__set_position(v15, *(UnityEngine_Vector3_o *)&v16, 0LL);
            return (UnityEngine_GameObject_o *)v7;
          }
        }
LABEL_20:
        sub_1BCAA3C(transform, v14);
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
        const MethodInfo_2EFD548 *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *v11; // x20
  __int64 v12; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  float w; // s11
  Il2CppObject *v17; // x0
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *v19; // x22
  UnityEngine_Transform_o *transform; // x0
  __int64 v21; // x1
  __int64 v22; // x1
  UnityEngine_Transform_o *v23; // x21
  int v24; // s0
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v34; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( !method->rgctx_data )
  {
    sub_1BCA7E0(&UnityEngine_MonoBehaviour_TypeInfo, prefab, root);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    if ( !method->rgctx_data )
      sub_1C1C718(method, prefab);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, prefab);
  v11 = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)prefab, 0LL, 0LL) )
  {
    v28.fields.x = 0.0;
    v28.fields.y = 0.0;
    v28.fields.z = 0.0;
    v33 = UnityEngine_Quaternion__Internal_FromEulerRad(v28, 0LL);
    x = v33.fields.x;
    y = v33.fields.y;
    z = v33.fields.z;
    w = v33.fields.w;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
    v29.fields.x = 0.0;
    v29.fields.y = 0.0;
    v29.fields.z = 0.0;
    v34.fields.x = x;
    v34.fields.y = y;
    v34.fields.z = z;
    v34.fields.w = w;
    v17 = UnityEngine_Object__Instantiate_object__49904120(
            prefab,
            v29,
            v34,
            (const MethodInfo_2F979F8 *)method->rgctx_data->_1_UnityEngine_Object_Instantiate_T_);
    v11 = v17;
    if ( !v17 )
      goto LABEL_11;
    methodPtr_low = LOBYTE(UnityEngine_MonoBehaviour_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v17->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
      v19 = (UnityEngine_MonoBehaviour_c *)v17->klass->_2.typeHierarchy[methodPtr_low - 1] == UnityEngine_MonoBehaviour_TypeInfo
          ? (UnityEngine_Object_o *)v17
          : 0LL;
    else
LABEL_11:
      v19 = 0LL;
    transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(v19, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v19 )
        goto LABEL_28;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v19, 0LL);
      if ( !transform )
        goto LABEL_28;
      UnityEngine_Transform__set_parent(transform, root, 0LL);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v19, 0LL);
      if ( !transform )
        goto LABEL_28;
      v30.fields.x = 0.0;
      v30.fields.y = 0.0;
      v30.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition(transform, v30, 0LL);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v19, 0LL);
      if ( !transform )
        goto LABEL_28;
      v31.fields.x = 0.0;
      v31.fields.y = 0.0;
      v31.fields.z = 0.0;
      UnityEngine_Transform__set_eulerAngles(transform, v31, 0LL);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v19, 0LL);
      if ( !transform )
        goto LABEL_28;
      v32.fields.x = 1.0;
      v32.fields.y = 1.0;
      v32.fields.z = 1.0;
      UnityEngine_Transform__set_localScale(transform, v32, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)pos, 0LL, 0LL) )
      {
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v19, 0LL);
        if ( pos )
        {
          v23 = transform;
          *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Transform__get_position(pos, 0LL);
          if ( v23 )
          {
            UnityEngine_Transform__set_position(v23, *(UnityEngine_Vector3_o *)&v24, 0LL);
            return v11;
          }
        }
LABEL_28:
        sub_1BCAA3C(transform, v21);
      }
    }
  }
  return v11;
}