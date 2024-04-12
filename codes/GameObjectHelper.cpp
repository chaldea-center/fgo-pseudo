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
  int32_t m_Handle; // [xsp+8h] [xbp-18h] BYREF

  v4 = self;
  if ( (byte_42B3B5E & 1) == 0 )
  {
    self = (UnityEngine_GameObject_o *)sub_B52984(&SceneList_TypeInfo);
    byte_42B3B5E = 1;
  }
  m_Handle = 0;
  if ( !v4 )
    sub_B52A5C(self, *(_QWORD *)&sceneType);
  m_Handle = UnityEngine_GameObject__get_scene(v4, 0LL).fields.m_Handle;
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
  __int64 v7; // x1
  __int64 v8; // x3
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v14; // x3
  System_Collections_IEnumerator_c *v15; // x8
  unsigned __int64 v16; // x10
  System_Collections_IEnumerator_c **v17; // x11
  __int64 v18; // x0
  UnityEngine_Component_o *v19; // x0
  __int64 v20; // x1
  UnityEngine_Component_o *v21; // x22
  __int64 v22; // x9
  WebViewObject_o *Component_WebViewObject; // x23
  _BOOL8 v24; // x0
  __int64 v25; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v27; // x3
  __int64 v28; // x0
  __int64 v29; // x3
  __int64 v30; // x8
  __int64 v31; // x19
  unsigned __int64 v32; // x10
  int *v33; // x11
  __int64 v34; // x0

  v6 = self;
  if ( (byte_42B3B5D & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    self = (UnityEngine_GameObject_o *)sub_B52984(&UnityEngine_Transform_TypeInfo);
    byte_42B3B5D = 1;
  }
  if ( !v6 || (self = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v6, 0LL)) == 0LL )
    sub_B52A5C(self, *(_QWORD *)&depth);
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)self, 0LL);
  if ( !Enumerator )
    sub_B52A5C(0LL, v7);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v11;
        p_offset += 4;
        if ( v11 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v8);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      v17 = (System_Collections_IEnumerator_c **)&v15->_1.interfaceOffsets->offset;
      while ( *(v17 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v16;
        v17 += 2;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v18 = (__int64)&v15->vtable[*(_DWORD *)v17 + 1].method;
    }
    else
    {
LABEL_17:
      v18 = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v14);
    }
    v19 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v18)(
                                       Enumerator,
                                       *(_QWORD *)(v18 + 8));
    v21 = v19;
    if ( !v19 )
      goto LABEL_40;
    v22 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v22
      || (UnityEngine_Transform_c *)v19->klass->_2.typeHierarchy[v22 - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_B52D50(v19);
LABEL_40:
      sub_B52A5C(v19, v20);
    }
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                v19,
                                (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v24 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL);
    if ( v24 )
    {
      if ( !Component_WebViewObject )
        sub_B52A5C(v24, v25);
      UIWidget__set_depth(
        (UIWidget_o *)Component_WebViewObject,
        LODWORD(Component_WebViewObject[1].fields.onLoaded) + depth,
        0LL);
    }
    if ( flg )
    {
      gameObject = UnityEngine_Component__get_gameObject(v21, 0LL);
      GameObjectHelper__addNguiDepth(gameObject, depth, 1, v27);
    }
  }
  v28 = sub_B52A44(Enumerator, System_IDisposable_TypeInfo);
  if ( v28 )
  {
    v30 = *(_QWORD *)v28;
    v31 = v28;
    if ( *(_WORD *)(*(_QWORD *)v28 + 298LL) )
    {
      v32 = 0LL;
      v33 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
      {
        ++v32;
        v33 += 4;
        if ( v32 >= *(unsigned __int16 *)(*(_QWORD *)v28 + 298LL) )
          goto LABEL_35;
      }
      v34 = v30 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_35:
      v34 = sub_AEB880(v28, System_IDisposable_TypeInfo, 0LL, v29);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v34)(v31, *(_QWORD *)(v34 + 8));
  }
}