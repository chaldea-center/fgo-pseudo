Il2CppObject *GameObjectHelper__GetOrAddComponent_object_(
        UnityEngine_GameObject_o *self,
        const MethodInfo_31364B8 *method)
{
  _BOOL8 v4; // x0
  Il2CppObject *Component_object; // x21

  if ( !method->rgctx_data )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C83390();
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0);
  Component_object = 0;
  if ( v4 )
    return Component_object;
  if ( !self )
    sub_1C32E7C(v4);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       self,
                       (const MethodInfo_3134970 *)method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
    return Component_object;
  else
    return UnityEngine_GameObject__AddComponent_object_(
             self,
             (const MethodInfo_3134888 *)method->rgctx_data->_2_UnityEngine_GameObject_AddComponent_T_);
}


Il2CppObject *GameObjectHelper__Instantiate_object_(
        UnityEngine_GameObject_o *self,
        UnityEngine_Transform_o *parent,
        bool worldPositionStays,
        const MethodInfo_3136594 *method)
{
  Il2CppObject *Component_object; // x23
  Il2CppObject *v9; // x20
  _BOOL8 v10; // x0

  if ( !method->rgctx_data )
  {
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject____78147224);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C83390();
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = 0;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__Instantiate_object__51812596(
           (Il2CppObject *)self,
           parent,
           worldPositionStays,
           (const MethodInfo_31698F4 *)Method_UnityEngine_Object_Instantiate_GameObject____78147224);
    v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v9, 0, 0);
    Component_object = 0;
    if ( !v10 )
    {
      if ( !v9 )
        sub_1C32E7C(v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v9,
                           (const MethodInfo_3134970 *)method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71223640((UnityEngine_Object_o *)v9, 0);
        return 0;
      }
    }
  }
  return Component_object;
}


bool GameObjectHelper__IsInScene(UnityEngine_GameObject_o *self, int32_t sceneType, const MethodInfo *method)
{
  UnityEngine_GameObject_o *v4; // x20
  int32_t *p_m_Handle; // x0
  System_String_o *name; // x20
  System_String_o *SceneName; // x0
  int32_t m_Handle; // [xsp+8h] [xbp-28h] BYREF

  v4 = self;
  if ( (byte_4C393BE & 1) == 0 )
  {
    self = (UnityEngine_GameObject_o *)sub_1C32C20(&SceneList_TypeInfo);
    byte_4C393BE = 1;
  }
  if ( !v4 )
    sub_1C32E7C(self);
  m_Handle = UnityEngine_GameObject__get_scene(v4, 0).fields.m_Handle;
  p_m_Handle = &m_Handle;
  name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)p_m_Handle, 0);
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(sceneType, 0);
  return System_String__op_Equality(name, SceneName, 0);
}


void GameObjectHelper__SetActiveSafely(UnityEngine_GameObject_o *self, bool value, const MethodInfo *method)
{
  _BOOL8 v5; // x0

  if ( (byte_4C393BF & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C393BF = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0);
  if ( !v5 )
  {
    if ( !self )
      sub_1C32E7C(v5);
    UnityEngine_GameObject__SetActive(self, value, 0);
  }
}


void GameObjectHelper__addNguiDepth(UnityEngine_GameObject_o *self, int32_t depth, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *v6; // x19
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  System_Collections_IEnumerator_c *v12; // x8
  __int64 v13; // x9
  System_Collections_IEnumerator_c **v14; // x10
  __int64 v15; // x0
  UnityEngine_Component_o *v16; // x0
  UnityEngine_Component_o *v17; // x22
  __int64 naturalAligment; // x9
  Il2CppObject *Component_object; // x23
  _BOOL8 v20; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v22; // x3
  __int64 v23; // x0
  __int64 v24; // x8
  __int64 v25; // x19
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0

  v6 = self;
  if ( (byte_4C393BD & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    self = (UnityEngine_GameObject_o *)sub_1C32C20(&UnityEngine_Transform_TypeInfo);
    byte_4C393BD = 1;
  }
  if ( !v6 || (self = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v6, 0)) == 0 )
    sub_1C32E7C(self);
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)self, 0);
  if ( !Enumerator )
    sub_1C32E7C(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_10;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v11 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v11)(Enumerator, *(_QWORD *)(v11 + 8))
        & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v14 = (System_Collections_IEnumerator_c **)&v12->_1.interfaceOffsets->offset;
      while ( *(v14 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        v14 += 2;
        if ( !v13 )
          goto LABEL_17;
      }
      v15 = (__int64)&v12->vtable[*(_DWORD *)v14 + 1];
    }
    else
    {
LABEL_17:
      v15 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v16 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v15)(
                                       Enumerator,
                                       *(_QWORD *)(v15 + 8));
    v17 = v16;
    if ( !v16 )
      goto LABEL_39;
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v16->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v16->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1C3313C(v16);
LABEL_39:
      sub_1C32E7C(v16);
    }
    Component_object = UnityEngine_Component__GetComponent_object_(
                         v16,
                         (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v20 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( v20 )
    {
      if ( !Component_object )
        sub_1C32E7C(v20);
      UIWidget__set_depth((UIWidget_o *)Component_object, LODWORD(Component_object[11].klass) + depth, 0);
    }
    if ( flg )
    {
      gameObject = UnityEngine_Component__get_gameObject(v17, 0);
      GameObjectHelper__addNguiDepth(gameObject, depth, 1, v22);
    }
  }
  v23 = sub_1C32D5C(Enumerator, System_IDisposable_TypeInfo);
  if ( v23 )
  {
    v24 = *(_QWORD *)v23;
    v25 = v23;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
    {
      v27 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_34;
      }
      v28 = v24 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_34:
      v28 = sub_1C83438(v23, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v28)(v25, *(_QWORD *)(v28 + 8));
  }
}