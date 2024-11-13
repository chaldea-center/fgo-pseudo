// local variable allocation has failed, the output may be wrong!
bool __fastcall GameObjectHelper__IsInScene(
        UnityEngine_GameObject_o *self,
        int32_t sceneType,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v4; // x20
  int32_t *p_m_Handle; // x0
  __int64 v6; // x1
  System_String_o *name; // x20
  System_String_o *SceneName; // x0
  int32_t m_Handle; // [xsp+8h] [xbp-28h] BYREF

  v4 = self;
  if ( (byte_4B179A9 & 1) == 0 )
  {
    self = (UnityEngine_GameObject_o *)sub_1BCA7E0(&SceneList_TypeInfo, *(_QWORD *)&sceneType, method);
    byte_4B179A9 = 1;
  }
  if ( !v4 )
    sub_1BCAA3C(self, *(_QWORD *)&sceneType);
  m_Handle = UnityEngine_GameObject__get_scene(v4, 0LL).fields.m_Handle;
  p_m_Handle = &m_Handle;
  name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)p_m_Handle, 0LL);
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, v6);
  SceneName = SceneList__getSceneName(sceneType, 0LL);
  return System_String__op_Equality(name, SceneName, 0LL);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v21; // x8
  __int64 v22; // x9
  System_Collections_IEnumerator_c **v23; // x10
  __int64 v24; // x0
  UnityEngine_Component_o *v25; // x0
  __int64 v26; // x1
  UnityEngine_Component_o *v27; // x22
  __int64 methodPtr_low; // x9
  __int64 v29; // x1
  Il2CppObject *Component_object; // x23
  _BOOL8 v31; // x0
  __int64 v32; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v34; // x3
  __int64 v35; // x0
  __int64 v36; // x8
  __int64 v37; // x19
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0

  v6 = self;
  if ( (byte_4B179A8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&depth, flg);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    self = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Transform_TypeInfo, v13, v14);
    byte_4B179A8 = 1;
  }
  if ( !v6 || (self = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v6, 0LL)) == 0LL )
    sub_1BCAA3C(self, *(_QWORD *)&depth);
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)self, 0LL);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v23 = (System_Collections_IEnumerator_c **)&v21->_1.interfaceOffsets->offset;
      while ( *(v23 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v22;
        v23 += 2;
        if ( !v22 )
          goto LABEL_17;
      }
      v24 = (__int64)&v21->vtable[*(_DWORD *)v23 + 1].method;
    }
    else
    {
LABEL_17:
      v24 = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v25 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v24)(
                                       Enumerator,
                                       *(_QWORD *)(v24 + 8));
    v27 = v25;
    if ( !v25 )
      goto LABEL_39;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v25->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v25->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1BCACFC(v25);
LABEL_39:
      sub_1BCAA3C(v25, v26);
    }
    Component_object = UnityEngine_Component__GetComponent_object_(
                         v25,
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
    v31 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( v31 )
    {
      if ( !Component_object )
        sub_1BCAA3C(v31, v32);
      UIWidget__set_depth((UIWidget_o *)Component_object, LODWORD(Component_object[11].klass) + depth, 0LL);
    }
    if ( flg )
    {
      gameObject = UnityEngine_Component__get_gameObject(v27, 0LL);
      GameObjectHelper__addNguiDepth(gameObject, depth, 1, v34);
    }
  }
  v35 = sub_1BCA91C(Enumerator, System_IDisposable_TypeInfo);
  if ( v35 )
  {
    v36 = *(_QWORD *)v35;
    v37 = v35;
    v38 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
    {
      v39 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_34;
      }
      v40 = v36 + 16LL * *v39 + 312;
    }
    else
    {
LABEL_34:
      v40 = sub_1C1C7C0(v35, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v40)(v37, *(_QWORD *)(v40 + 8));
  }
}