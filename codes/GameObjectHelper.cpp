// local variable allocation has failed, the output may be wrong!
bool __fastcall GameObjectHelper__IsInScene(
        UnityEngine_GameObject_o *self,
        int32_t sceneType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_GameObject_o *v5; // x20
  int32_t *p_m_Handle; // x0
  System_String_o *name; // x20
  System_String_o *SceneName; // x0
  int32_t m_Handle; // [xsp+8h] [xbp-18h] BYREF

  v5 = self;
  if ( (byte_42EC64E & 1) == 0 )
  {
    self = (UnityEngine_GameObject_o *)sub_B5D5C4(&SceneList_TypeInfo, sceneType, (_DWORD)method, v3);
    byte_42EC64E = 1;
  }
  m_Handle = 0;
  if ( !v5 )
    sub_B5D69C(self, *(_QWORD *)&sceneType);
  m_Handle = UnityEngine_GameObject__get_scene(v5, 0LL).fields.m_Handle;
  p_m_Handle = &m_Handle;
  name = UnityEngine_SceneManagement_Scene__get_name((UnityEngine_SceneManagement_Scene_o)p_m_Handle, 0LL);
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  __int64 v19; // x1
  __int64 v20; // x3
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v23; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v26; // x3
  System_Collections_IEnumerator_c *v27; // x8
  unsigned __int64 v28; // x10
  System_Collections_IEnumerator_c **v29; // x11
  __int64 v30; // x0
  UnityEngine_Component_o *v31; // x0
  __int64 v32; // x1
  UnityEngine_Component_o *v33; // x22
  __int64 v34; // x9
  WebViewObject_o *Component_WebViewObject; // x23
  _BOOL8 v36; // x0
  __int64 v37; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v39; // x3
  __int64 v40; // x0
  __int64 v41; // x3
  __int64 v42; // x8
  __int64 v43; // x19
  unsigned __int64 v44; // x10
  int *v45; // x11
  __int64 v46; // x0

  v6 = self;
  if ( (byte_42EC64D & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, depth, flg, method);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    self = (UnityEngine_GameObject_o *)sub_B5D5C4(&UnityEngine_Transform_TypeInfo, v16, v17, v18);
    byte_42EC64D = 1;
  }
  if ( !v6 || (self = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v6, 0LL)) == 0LL )
    sub_B5D69C(self, *(_QWORD *)&depth);
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)self, 0LL);
  if ( !Enumerator )
    sub_B5D69C(0LL, v19);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v23;
        p_offset += 4;
        if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v20);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v27 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v28 = 0LL;
      v29 = (System_Collections_IEnumerator_c **)&v27->_1.interfaceOffsets->offset;
      while ( *(v29 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v28;
        v29 += 2;
        if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v30 = (__int64)&v27->vtable[*(_DWORD *)v29 + 1].method;
    }
    else
    {
LABEL_17:
      v30 = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v26);
    }
    v31 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v30)(
                                       Enumerator,
                                       *(_QWORD *)(v30 + 8));
    v33 = v31;
    if ( !v31 )
      goto LABEL_40;
    v34 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v31->klass->_2.bitflags2 + 1) < (unsigned int)v34
      || (UnityEngine_Transform_c *)v31->klass->_2.typeHierarchy[v34 - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_B5D990(v31);
LABEL_40:
      sub_B5D69C(v31, v32);
    }
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                v31,
                                (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v36 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL);
    if ( v36 )
    {
      if ( !Component_WebViewObject )
        sub_B5D69C(v36, v37);
      UIWidget__set_depth(
        (UIWidget_o *)Component_WebViewObject,
        LODWORD(Component_WebViewObject[1].fields.onLoaded) + depth,
        0LL);
    }
    if ( flg )
    {
      gameObject = UnityEngine_Component__get_gameObject(v33, 0LL);
      GameObjectHelper__addNguiDepth(gameObject, depth, 1, v39);
    }
  }
  v40 = sub_B5D684(Enumerator, System_IDisposable_TypeInfo);
  if ( v40 )
  {
    v42 = *(_QWORD *)v40;
    v43 = v40;
    if ( *(_WORD *)(*(_QWORD *)v40 + 298LL) )
    {
      v44 = 0LL;
      v45 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
      {
        ++v44;
        v45 += 4;
        if ( v44 >= *(unsigned __int16 *)(*(_QWORD *)v40 + 298LL) )
          goto LABEL_35;
      }
      v46 = v42 + 16LL * *v45 + 312;
    }
    else
    {
LABEL_35:
      v46 = sub_AF54C0(v40, System_IDisposable_TypeInfo, 0LL, v41);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v46)(v43, *(_QWORD *)(v46 + 8));
  }
}