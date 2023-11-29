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
  System_String_o *v9; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v11; // x0
  UnityEngine_Transform_o *v12; // x0
  UnityEngine_Transform_o *v13; // x0
  UnityEngine_Transform_o *v14; // x0
  UnityEngine_Transform_o *v15; // x21
  int v16; // s0
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F6F10 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_GameObject_TypeInfo, root);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40F6F10 = 1;
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
      v9 = (System_String_o *)UnityEngine_Object__Instantiate_34808612(v8, 0LL);
      if ( !v9 )
        goto LABEL_22;
      resouceurl = v9;
      if ( (UnityEngine_GameObject_c *)v9->klass != UnityEngine_GameObject_TypeInfo )
        goto LABEL_22;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v9, 0LL);
      if ( !transform )
        goto LABEL_22;
      UnityEngine_Transform__set_parent(transform, root, 0LL);
      v11 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resouceurl, 0LL);
      if ( !v11 )
        goto LABEL_22;
      v20.fields.x = 0.0;
      v20.fields.y = 0.0;
      v20.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition(v11, v20, 0LL);
      v12 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resouceurl, 0LL);
      if ( !v12 )
        goto LABEL_22;
      v21.fields.x = 0.0;
      v21.fields.y = 0.0;
      v21.fields.z = 0.0;
      UnityEngine_Transform__set_eulerAngles(v12, v21, 0LL);
      v13 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resouceurl, 0LL);
      if ( !v13 )
        goto LABEL_22;
      v22.fields.x = 1.0;
      v22.fields.y = 1.0;
      v22.fields.z = 1.0;
      UnityEngine_Transform__set_localScale(v13, v22, 0LL);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)pos, 0LL, 0LL) )
      {
        v14 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resouceurl, 0LL);
        if ( pos )
        {
          v15 = v14;
          *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Transform__get_position(pos, 0LL);
          if ( v15 )
          {
            UnityEngine_Transform__set_position(v15, *(UnityEngine_Vector3_o *)&v16, 0LL);
            return (UnityEngine_GameObject_o *)resouceurl;
          }
        }
LABEL_22:
        sub_B170D4();
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
  Il2CppObject *v14; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v16; // x0
  UnityEngine_Transform_o *v17; // x0
  UnityEngine_Transform_o *v18; // x0
  UnityEngine_Transform_o *v19; // x0
  UnityEngine_Transform_o *v20; // x21
  int v21; // s0
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v31; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_40F6F0D & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874920, prefab);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    byte_40F6F0D = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)prefab, 0LL, 0LL) )
  {
    v25.fields.x = 0.0;
    v25.fields.y = 0.0;
    v25.fields.z = 0.0;
    v30 = UnityEngine_Quaternion__Euler_34841604(v25, 0LL);
    x = v30.fields.x;
    y = v30.fields.y;
    z = v30.fields.z;
    w = v30.fields.w;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v26.fields.x = 0.0;
    v26.fields.y = 0.0;
    v26.fields.z = 0.0;
    v31.fields.x = x;
    v31.fields.y = y;
    v31.fields.z = z;
    v31.fields.w = w;
    v14 = UnityEngine_Object__Instantiate_object_(
            (Il2CppObject *)prefab,
            v26,
            v31,
            (const MethodInfo_19DE498 *)Method_UnityEngine_Object_Instantiate_GameObject____66874920);
    if ( !v14 )
      goto LABEL_20;
    v9 = (UnityEngine_GameObject_o *)v14;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v14, 0LL);
    if ( !transform )
      goto LABEL_20;
    UnityEngine_Transform__set_parent(transform, root, 0LL);
    v16 = UnityEngine_GameObject__get_transform(v9, 0LL);
    if ( !v16 )
      goto LABEL_20;
    v27.fields.x = 0.0;
    v27.fields.y = 0.0;
    v27.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(v16, v27, 0LL);
    v17 = UnityEngine_GameObject__get_transform(v9, 0LL);
    if ( !v17 )
      goto LABEL_20;
    v28.fields.x = 0.0;
    v28.fields.y = 0.0;
    v28.fields.z = 0.0;
    UnityEngine_Transform__set_eulerAngles(v17, v28, 0LL);
    v18 = UnityEngine_GameObject__get_transform(v9, 0LL);
    if ( !v18 )
      goto LABEL_20;
    v29.fields.x = 1.0;
    v29.fields.y = 1.0;
    v29.fields.z = 1.0;
    UnityEngine_Transform__set_localScale(v18, v29, 0LL);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)pos, 0LL, 0LL) )
    {
      v19 = UnityEngine_GameObject__get_transform(v9, 0LL);
      if ( pos )
      {
        v20 = v19;
        *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Transform__get_position(pos, 0LL);
        if ( v20 )
        {
          UnityEngine_Transform__set_position(v20, *(UnityEngine_Vector3_o *)&v21, 0LL);
          return v9;
        }
      }
LABEL_20:
      sub_B170D4();
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

  if ( (byte_40F6F0E & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, existCheckObj);
    byte_40F6F0E = 1;
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
UnityEngine_GameObject_o *__fastcall BaseMonoBehaviour__createObject_19257936(
        BaseMonoBehaviour_o *this,
        System_String_o *resouceurl,
        UnityEngine_Transform_o *root,
        UnityEngine_Transform_o *pos,
        const MethodInfo *method)
{
  System_String_o *v7; // x20
  __int64 v8; // x1
  UnityEngine_Object_o *v9; // x22
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v12; // x0
  UnityEngine_Transform_o *v13; // x0
  UnityEngine_Transform_o *v14; // x0
  UnityEngine_Transform_o *v15; // x0
  UnityEngine_Transform_o *v16; // x21
  int v17; // s0
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  v7 = resouceurl;
  if ( (byte_40F6F0F & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_GameObject_TypeInfo, resouceurl);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    byte_40F6F0F = 1;
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
      v10 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_34808612(v9, 0LL);
      if ( !v10 )
        goto LABEL_22;
      v7 = (System_String_o *)v10;
      if ( v10->klass != UnityEngine_GameObject_TypeInfo )
        goto LABEL_22;
      transform = UnityEngine_GameObject__get_transform(v10, 0LL);
      if ( !transform )
        goto LABEL_22;
      UnityEngine_Transform__set_parent(transform, root, 0LL);
      v12 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v7, 0LL);
      if ( !v12 )
        goto LABEL_22;
      v21.fields.x = 0.0;
      v21.fields.y = 0.0;
      v21.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition(v12, v21, 0LL);
      v13 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v7, 0LL);
      if ( !v13 )
        goto LABEL_22;
      v22.fields.x = 0.0;
      v22.fields.y = 0.0;
      v22.fields.z = 0.0;
      UnityEngine_Transform__set_eulerAngles(v13, v22, 0LL);
      v14 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v7, 0LL);
      if ( !v14 )
        goto LABEL_22;
      v23.fields.x = 1.0;
      v23.fields.y = 1.0;
      v23.fields.z = 1.0;
      UnityEngine_Transform__set_localScale(v14, v23, 0LL);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)pos, 0LL, 0LL) )
      {
        v15 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v7, 0LL);
        if ( pos )
        {
          v16 = v15;
          *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Transform__get_position(pos, 0LL);
          if ( v16 )
          {
            UnityEngine_Transform__set_position(v16, *(UnityEngine_Vector3_o *)&v17, 0LL);
            return (UnityEngine_GameObject_o *)v7;
          }
        }
LABEL_22:
        sub_B170D4();
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
        const MethodInfo_18B5978 *method)
{
  __int64 v9; // x1
  Il2CppObject *v10; // x20
  long double v11; // q8
  long double v12; // q9
  long double v13; // q10
  long double v14; // q11
  UnityEngine_Component_o *v15; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v17; // x0
  UnityEngine_Transform_o *v18; // x0
  UnityEngine_Transform_o *v19; // x0
  UnityEngine_Transform_o *v20; // x0
  UnityEngine_Transform_o *v21; // x21
  int v22; // s0
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  long double v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_40FA638 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_MonoBehaviour_TypeInfo, prefab);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    byte_40FA638 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)prefab, 0LL, 0LL) )
  {
    v26.fields.x = 0.0;
    v26.fields.y = 0.0;
    v26.fields.z = 0.0;
    *(UnityEngine_Quaternion_o *)&v30 = UnityEngine_Quaternion__Euler_34841604(v26, 0LL);
    v11 = v30;
    v12 = *(long double *)((char *)&v30 + 4);
    v13 = *(long double *)((char *)&v30 + 8);
    v14 = *(long double *)((char *)&v30 + 12);
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
    v15 = (UnityEngine_Component_o *)sub_B170BC(v10, UnityEngine_MonoBehaviour_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL) )
    {
      if ( !v15 )
        goto LABEL_24;
      transform = UnityEngine_Component__get_transform(v15, 0LL);
      if ( !transform )
        goto LABEL_24;
      UnityEngine_Transform__set_parent(transform, root, 0LL);
      v17 = UnityEngine_Component__get_transform(v15, 0LL);
      if ( !v17 )
        goto LABEL_24;
      v27.fields.x = 0.0;
      v27.fields.y = 0.0;
      v27.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition(v17, v27, 0LL);
      v18 = UnityEngine_Component__get_transform(v15, 0LL);
      if ( !v18 )
        goto LABEL_24;
      v28.fields.x = 0.0;
      v28.fields.y = 0.0;
      v28.fields.z = 0.0;
      UnityEngine_Transform__set_eulerAngles(v18, v28, 0LL);
      v19 = UnityEngine_Component__get_transform(v15, 0LL);
      if ( !v19 )
        goto LABEL_24;
      v29.fields.x = 1.0;
      v29.fields.y = 1.0;
      v29.fields.z = 1.0;
      UnityEngine_Transform__set_localScale(v19, v29, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)pos, 0LL, 0LL) )
      {
        v20 = UnityEngine_Component__get_transform(v15, 0LL);
        if ( pos )
        {
          v21 = v20;
          *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Transform__get_position(pos, 0LL);
          if ( v21 )
          {
            UnityEngine_Transform__set_position(v21, *(UnityEngine_Vector3_o *)&v22, 0LL);
            return v10;
          }
        }
LABEL_24:
        sub_B170D4();
      }
    }
  }
  return v10;
}