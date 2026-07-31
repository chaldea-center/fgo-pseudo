Il2CppObject *GameObjectHelper__GetOrAddComponent_object_(
        UnityEngine_GameObject_o *self,
        const MethodInfo_3885308 *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *Component_object; // x21
  __int64 v7; // x1

  if ( !method->rgctx_data )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      sub_2237B54();
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0);
  Component_object = 0;
  if ( v4 )
    return Component_object;
  if ( !self )
    sub_21FFECC(v4, v5);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       self,
                       (const MethodInfo_3883A78 *)method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
    return Component_object;
  else
    return UnityEngine_GameObject__AddComponent_object_(
             self,
             (const MethodInfo_38839E8 *)method->rgctx_data->_2_UnityEngine_GameObject_AddComponent_T_);
}


Il2CppObject *GameObjectHelper__Instantiate_object_(
        UnityEngine_GameObject_o *self,
        UnityEngine_Transform_o *parent,
        bool worldPositionStays,
        const MethodInfo_38853E4 *method)
{
  __int64 v8; // x1
  Il2CppObject *Component_object; // x23
  Il2CppObject *v10; // x20
  _BOOL8 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1

  if ( !method->rgctx_data )
  {
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575184);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      sub_2237B54();
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, parent);
  Component_object = 0;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0) )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    v10 = UnityEngine_Object__Instantiate_object__59507108(
            (Il2CppObject *)self,
            parent,
            worldPositionStays,
            (const MethodInfo_38C01A4 *)Method_UnityEngine_Object_Instantiate_GameObject____91575184);
    v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v10, 0, 0);
    Component_object = 0;
    if ( !v11 )
    {
      if ( !v10 )
        sub_21FFECC(v11, v12);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v10,
                           (const MethodInfo_3883A78 *)method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
      {
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
        UnityEngine_Object__Destroy_83246496((UnityEngine_Object_o *)v10, 0);
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
  __int64 v6; // x1
  System_String_o *name; // x20
  System_String_o *SceneName; // x0
  int32_t m_Handle; // [xsp+Ch] [xbp-24h] BYREF

  v4 = self;
  if ( (byte_593A0FB & 1) == 0 )
  {
    self = (UnityEngine_GameObject_o *)sub_21FFC50(&SceneList_TypeInfo);
    byte_593A0FB = 1;
  }
  m_Handle = 0;
  if ( !v4 )
    sub_21FFECC(self, *(_QWORD *)&sceneType);
  m_Handle = UnityEngine_GameObject__get_scene(v4, 0).fields.m_Handle;
  p_m_Handle = &m_Handle;
  name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)p_m_Handle, 0);
  if ( !*(&SceneList_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, v6);
  SceneName = SceneList__getSceneName(sceneType, 0);
  return System_String__op_Equality(name, SceneName, 0);
}


// local variable allocation has failed, the output may be wrong!
void GameObjectHelper__SetActiveSafely(UnityEngine_GameObject_o *self, bool value, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_593A0FC & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A0FC = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0);
  if ( !v5 )
  {
    if ( !self )
      sub_21FFECC(v5, v6);
    UnityEngine_GameObject__SetActive(self, value, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void GameObjectHelper__addNguiDepth(UnityEngine_GameObject_o *self, int32_t depth, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *v6; // x21
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v8; // x1
  System_Collections_IEnumerator_o *i; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v11; // x9
  int *p_offset; // x10
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  System_Collections_IEnumerator_c *v16; // x8
  __int64 v17; // x9
  System_Collections_IEnumerator_c **v18; // x10
  __int64 v19; // x0
  UnityEngine_Component_o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_Component_o *v23; // x21
  __int64 naturalAligment; // x9
  __int64 v25; // x1
  Il2CppObject *Component_object; // x22
  _BOOL8 v27; // x0
  __int64 v28; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v30; // x3
  __int64 v31; // x0
  __int64 v32; // x8
  __int64 v33; // x20
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  System_Collections_IEnumerator_o *v37; // [xsp+28h] [xbp-48h]

  v6 = self;
  if ( (byte_593A0FA & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    self = (UnityEngine_GameObject_o *)sub_21FFC50(&UnityEngine_Transform_TypeInfo);
    byte_593A0FA = 1;
  }
  if ( !v6 || (self = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v6, 0)) == 0 )
    sub_21FFECC(self, *(_QWORD *)&depth);
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)self, 0);
  v37 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v8);
  for ( i = Enumerator; ; i = v37 )
  {
    klass = i->klass;
    v11 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_11;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v13 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v14 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v13)(i, *(_QWORD *)(v13 + 8));
    if ( (v14 & 1) == 0 )
      break;
    if ( !v37 )
      sub_21FFECC(v14, v15);
    v16 = v37->klass;
    v17 = *(unsigned __int16 *)&v37->klass->_2.rank;
    if ( *(_WORD *)&v37->klass->_2.rank )
    {
      v18 = (System_Collections_IEnumerator_c **)&v16->_1.interfaceOffsets->offset;
      while ( *(v18 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        v18 += 2;
        if ( !v17 )
          goto LABEL_19;
      }
      v19 = (__int64)&v16->vtable[*(_DWORD *)v18 + 1];
    }
    else
    {
LABEL_19:
      v19 = sub_2237E2C(v37, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v20 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v19)(
                                       v37,
                                       *(_QWORD *)(v19 + 8));
    v23 = v20;
    if ( !v20 )
      goto LABEL_43;
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v20->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v20->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_220024C(v20, UnityEngine_Transform_TypeInfo, v22);
LABEL_43:
      sub_21FFECC(v20, v21);
    }
    Component_object = UnityEngine_Component__GetComponent_object_(
                         v20,
                         (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
    v27 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( v27 )
    {
      if ( !Component_object )
        sub_21FFECC(v27, v28);
      UIWidget__set_depth((UIWidget_o *)Component_object, LODWORD(Component_object[11].klass) + depth, 0);
    }
    if ( flg )
    {
      gameObject = UnityEngine_Component__get_gameObject(v23, 0);
      GameObjectHelper__addNguiDepth(gameObject, depth, 1, v30);
    }
  }
  v31 = sub_21FFDA4(v37, System_IDisposable_TypeInfo);
  if ( v31 )
  {
    v32 = *(_QWORD *)v31;
    v33 = v31;
    v34 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
    {
      v35 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_38;
      }
      v36 = v32 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_38:
      v36 = sub_2237E2C(v31, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v36)(v33, *(_QWORD *)(v36 + 8));
  }
}