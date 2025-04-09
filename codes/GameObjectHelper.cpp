Il2CppObject *__fastcall GameObjectHelper__GetOrAddComponent_object_(
        UnityEngine_GameObject_o *self,
        const MethodInfo_2F54F8C *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *Component_object; // x21

  if ( !method->rgctx_data )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    if ( !method->rgctx_data )
      sub_1B9D67C();
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0LL, 0LL);
  Component_object = 0LL;
  if ( v4 )
    return Component_object;
  if ( !self )
    sub_1B4D1EC(v4, v5);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       self,
                       (const MethodInfo_2F53444 *)method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    return Component_object;
  else
    return UnityEngine_GameObject__AddComponent_object_(
             self,
             (const MethodInfo_2F5335C *)method->rgctx_data->_2_UnityEngine_GameObject_AddComponent_T_);
}


Il2CppObject *__fastcall GameObjectHelper__Instantiate_object_(
        UnityEngine_GameObject_o *self,
        UnityEngine_Transform_o *parent,
        bool worldPositionStays,
        const MethodInfo_2F55068 *method)
{
  __int64 v8; // x1
  Il2CppObject *Component_object; // x23
  Il2CppObject *v10; // x20
  _BOOL8 v11; // x0
  __int64 v12; // x1

  if ( !method->rgctx_data )
  {
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_GameObject____75575280, parent);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v8);
    if ( !method->rgctx_data )
      sub_1B9D67C();
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10 = UnityEngine_Object__Instantiate_object__49839976(
            (Il2CppObject *)self,
            parent,
            worldPositionStays,
            (const MethodInfo_2F87F68 *)Method_UnityEngine_Object_Instantiate_GameObject____75575280);
    v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v10, 0LL, 0LL);
    Component_object = 0LL;
    if ( !v11 )
    {
      if ( !v10 )
        sub_1B4D1EC(v11, v12);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v10,
                           (const MethodInfo_2F53444 *)method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_68804456((UnityEngine_Object_o *)v10, 0LL);
        return 0LL;
      }
    }
  }
  return Component_object;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GameObjectHelper__IsInScene(
        UnityEngine_GameObject_o *self,
        int32_t sceneType,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v4; // x20
  int32_t *p_m_Handle; // x0
  System_String_o *name; // x20
  System_String_o *SceneName; // x0
  int32_t m_Handle; // [xsp+8h] [xbp-28h] BYREF

  v4 = self;
  if ( (byte_49BC721 & 1) == 0 )
  {
    self = (UnityEngine_GameObject_o *)sub_1B4CF90(&SceneList_TypeInfo, *(_QWORD *)&sceneType);
    byte_49BC721 = 1;
  }
  if ( !v4 )
    sub_1B4D1EC(self, *(_QWORD *)&sceneType);
  m_Handle = UnityEngine_GameObject__get_scene(v4, 0LL).fields.m_Handle;
  p_m_Handle = &m_Handle;
  name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)p_m_Handle, 0LL);
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(sceneType, 0LL);
  return System_String__op_Equality(name, SceneName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GameObjectHelper__SetActiveSafely(UnityEngine_GameObject_o *self, bool value, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_49BC722 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, value);
    byte_49BC722 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !self )
      sub_1B4D1EC(v5, v6);
    UnityEngine_GameObject__SetActive(self, value, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GameObjectHelper__addNguiDepth(
        UnityEngine_GameObject_o *self,
        int32_t depth,
        bool flg,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v17; // x8
  __int64 v18; // x9
  System_Collections_IEnumerator_c **v19; // x10
  __int64 v20; // x0
  UnityEngine_Component_o *v21; // x0
  __int64 v22; // x1
  UnityEngine_Component_o *v23; // x22
  __int64 methodPtr_low; // x9
  Il2CppObject *Component_object; // x23
  _BOOL8 v26; // x0
  __int64 v27; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v29; // x3
  __int64 v30; // x0
  __int64 v31; // x8
  __int64 v32; // x19
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0

  v6 = self;
  if ( (byte_49BC720 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&depth);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v7);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v9);
    self = (UnityEngine_GameObject_o *)sub_1B4CF90(&UnityEngine_Transform_TypeInfo, v10);
    byte_49BC720 = 1;
  }
  if ( !v6 || (self = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v6, 0LL)) == 0LL )
    sub_1B4D1EC(self, *(_QWORD *)&depth);
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)self, 0LL);
  if ( !Enumerator )
    sub_1B4D1EC(0LL, v11);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1B9D724(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v19 = (System_Collections_IEnumerator_c **)&v17->_1.interfaceOffsets->offset;
      while ( *(v19 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        v19 += 2;
        if ( !v18 )
          goto LABEL_17;
      }
      v20 = (__int64)&v17->vtable[*(_DWORD *)v19 + 1].method;
    }
    else
    {
LABEL_17:
      v20 = sub_1B9D724(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v21 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v20)(
                                       Enumerator,
                                       *(_QWORD *)(v20 + 8));
    v23 = v21;
    if ( !v21 )
      goto LABEL_39;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v21->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v21->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1B4D4AC(v21);
LABEL_39:
      sub_1B4D1EC(v21, v22);
    }
    Component_object = UnityEngine_Component__GetComponent_object_(
                         v21,
                         (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( v26 )
    {
      if ( !Component_object )
        sub_1B4D1EC(v26, v27);
      UIWidget__set_depth((UIWidget_o *)Component_object, LODWORD(Component_object[11].klass) + depth, 0LL);
    }
    if ( flg )
    {
      gameObject = UnityEngine_Component__get_gameObject(v23, 0LL);
      GameObjectHelper__addNguiDepth(gameObject, depth, 1, v29);
    }
  }
  v30 = sub_1B4D0CC(Enumerator, System_IDisposable_TypeInfo);
  if ( v30 )
  {
    v31 = *(_QWORD *)v30;
    v32 = v30;
    v33 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
    {
      v34 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_34;
      }
      v35 = v31 + 16LL * *v34 + 312;
    }
    else
    {
LABEL_34:
      v35 = sub_1B9D724(v30, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v35)(v32, *(_QWORD *)(v35 + 8));
  }
}