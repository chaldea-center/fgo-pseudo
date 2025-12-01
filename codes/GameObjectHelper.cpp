Il2CppObject *GameObjectHelper__GetOrAddComponent_object_(
        UnityEngine_GameObject_o *self,
        const MethodInfo_31A4A18 *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *Component_object; // x21

  if ( !method->rgctx_data )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C474A0();
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0);
  Component_object = 0;
  if ( v4 )
    return Component_object;
  if ( !self )
    sub_1C71608(v4, v5);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       self,
                       (const MethodInfo_31A2ED0 *)method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
    return Component_object;
  else
    return UnityEngine_GameObject__AddComponent_object_(
             self,
             (const MethodInfo_31A2DE8 *)method->rgctx_data->_2_UnityEngine_GameObject_AddComponent_T_);
}


Il2CppObject *GameObjectHelper__Instantiate_object_(
        UnityEngine_GameObject_o *self,
        UnityEngine_Transform_o *parent,
        bool worldPositionStays,
        const MethodInfo_31A4AF4 *method)
{
  Il2CppObject *Component_object; // x23
  Il2CppObject *v9; // x20
  _BOOL8 v10; // x0
  __int64 v11; // x1

  if ( !method->rgctx_data )
  {
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_GameObject____78725200);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C474A0();
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = 0;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__Instantiate_object__52264532(
           (Il2CppObject *)self,
           parent,
           worldPositionStays,
           (const MethodInfo_31D7E54 *)Method_UnityEngine_Object_Instantiate_GameObject____78725200);
    v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v9, 0, 0);
    Component_object = 0;
    if ( !v10 )
    {
      if ( !v9 )
        sub_1C71608(v10, v11);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v9,
                           (const MethodInfo_31A2ED0 *)method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71724608((UnityEngine_Object_o *)v9, 0);
        return 0;
      }
    }
  }
  return Component_object;
}


// local variable allocation has failed, the output may be wrong!
bool GameObjectHelper__IsInScene(UnityEngine_GameObject_o *self, int32_t sceneType, const MethodInfo *method)
{
  UnityEngine_GameObject_o *v4; // x20
  int32_t *p_m_Handle; // x0
  System_String_o *name; // x20
  System_String_o *SceneName; // x0
  int32_t m_Handle; // [xsp+8h] [xbp-28h] BYREF

  v4 = self;
  if ( (byte_4CC8E25 & 1) == 0 )
  {
    self = (UnityEngine_GameObject_o *)sub_1C713B0(&SceneList_TypeInfo);
    byte_4CC8E25 = 1;
  }
  if ( !v4 )
    sub_1C71608(self, *(_QWORD *)&sceneType);
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
  __int64 v6; // x1

  if ( (byte_4CC8E26 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8E26 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0);
  if ( !v5 )
  {
    if ( !self )
      sub_1C71608(v5, v6);
    UnityEngine_GameObject__SetActive(self, value, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void GameObjectHelper__addNguiDepth(UnityEngine_GameObject_o *self, int32_t depth, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *v6; // x19
  __int64 v7; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  System_Collections_IEnumerator_c *v13; // x8
  __int64 v14; // x9
  System_Collections_IEnumerator_c **v15; // x10
  __int64 v16; // x0
  UnityEngine_Component_o *v17; // x0
  __int64 v18; // x1
  UnityEngine_Component_o *v19; // x22
  __int64 naturalAligment; // x9
  Il2CppObject *Component_object; // x23
  _BOOL8 v22; // x0
  __int64 v23; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v25; // x3
  __int64 v26; // x0
  __int64 v27; // x8
  __int64 v28; // x19
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0

  v6 = self;
  if ( (byte_4CC8E24 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    self = (UnityEngine_GameObject_o *)sub_1C713B0(&UnityEngine_Transform_TypeInfo);
    byte_4CC8E24 = 1;
  }
  if ( !v6 || (self = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v6, 0)) == 0 )
    sub_1C71608(self, *(_QWORD *)&depth);
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)self, 0);
  if ( !Enumerator )
    sub_1C71608(0, v7);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_10;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v12 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v12)(Enumerator, *(_QWORD *)(v12 + 8))
        & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v15 = (System_Collections_IEnumerator_c **)&v13->_1.interfaceOffsets->offset;
      while ( *(v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 2;
        if ( !v14 )
          goto LABEL_17;
      }
      v16 = (__int64)&v13->vtable[*(_DWORD *)v15 + 1];
    }
    else
    {
LABEL_17:
      v16 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v17 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v16)(
                                       Enumerator,
                                       *(_QWORD *)(v16 + 8));
    v19 = v17;
    if ( !v17 )
      goto LABEL_39;
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v17->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v17->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1C719A4(v17);
LABEL_39:
      sub_1C71608(v17, v18);
    }
    Component_object = UnityEngine_Component__GetComponent_object_(
                         v17,
                         (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v22 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( v22 )
    {
      if ( !Component_object )
        sub_1C71608(v22, v23);
      UIWidget__set_depth((UIWidget_o *)Component_object, LODWORD(Component_object[11].klass) + depth, 0);
    }
    if ( flg )
    {
      gameObject = UnityEngine_Component__get_gameObject(v19, 0);
      GameObjectHelper__addNguiDepth(gameObject, depth, 1, v25);
    }
  }
  v26 = sub_1C714EC(Enumerator, System_IDisposable_TypeInfo);
  if ( v26 )
  {
    v27 = *(_QWORD *)v26;
    v28 = v26;
    v29 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
    {
      v30 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_34;
      }
      v31 = v27 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_34:
      v31 = sub_1C47738(v26, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v31)(v28, *(_QWORD *)(v31 + 8));
  }
}