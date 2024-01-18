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
  if ( (byte_418B028 & 1) == 0 )
  {
    self = (UnityEngine_GameObject_o *)sub_B2C35C(&SceneList_TypeInfo, *(_QWORD *)&sceneType);
    byte_418B028 = 1;
  }
  m_Handle = 0;
  if ( !v4 )
    sub_B2C434(self, *(_QWORD *)&sceneType);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x3
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v15; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v18; // x3
  System_Collections_IEnumerator_c *v19; // x8
  unsigned __int64 v20; // x10
  System_Collections_IEnumerator_c **v21; // x11
  __int64 v22; // x0
  UnityEngine_Component_o *v23; // x0
  __int64 v24; // x1
  UnityEngine_Component_o *v25; // x22
  __int64 v26; // x9
  WebViewObject_o *Component_WebViewObject; // x23
  _BOOL8 v28; // x0
  __int64 v29; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v31; // x3
  __int64 v32; // x0
  __int64 v33; // x3
  __int64 v34; // x8
  __int64 v35; // x19
  unsigned __int64 v36; // x10
  int *v37; // x11
  __int64 v38; // x0

  v6 = self;
  if ( (byte_418B027 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&depth);
    sub_B2C35C(&System_IDisposable_TypeInfo, v7);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    self = (UnityEngine_GameObject_o *)sub_B2C35C(&UnityEngine_Transform_TypeInfo, v10);
    byte_418B027 = 1;
  }
  if ( !v6 || (self = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v6, 0LL)) == 0LL )
    sub_B2C434(self, *(_QWORD *)&depth);
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)self, 0LL);
  if ( !Enumerator )
    sub_B2C434(0LL, v11);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v15;
        p_offset += 4;
        if ( v15 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v12);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      v21 = (System_Collections_IEnumerator_c **)&v19->_1.interfaceOffsets->offset;
      while ( *(v21 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v20;
        v21 += 2;
        if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v22 = (__int64)&v19->vtable[*(_DWORD *)v21 + 1].method;
    }
    else
    {
LABEL_17:
      v22 = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v18);
    }
    v23 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v22)(
                                       Enumerator,
                                       *(_QWORD *)(v22 + 8));
    v25 = v23;
    if ( !v23 )
      goto LABEL_40;
    v26 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v23->klass->_2.bitflags2 + 1) < (unsigned int)v26
      || (UnityEngine_Transform_c *)v23->klass->_2.typeHierarchy[v26 - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_B2C728(v23);
LABEL_40:
      sub_B2C434(v23, v24);
    }
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                v23,
                                (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v28 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL);
    if ( v28 )
    {
      if ( !Component_WebViewObject )
        sub_B2C434(v28, v29);
      UIWidget__set_depth(
        (UIWidget_o *)Component_WebViewObject,
        LODWORD(Component_WebViewObject[1].fields.onLoaded) + depth,
        0LL);
    }
    if ( flg )
    {
      gameObject = UnityEngine_Component__get_gameObject(v25, 0LL);
      GameObjectHelper__addNguiDepth(gameObject, depth, 1, v31);
    }
  }
  v32 = sub_B2C41C(Enumerator, System_IDisposable_TypeInfo);
  if ( v32 )
  {
    v34 = *(_QWORD *)v32;
    v35 = v32;
    if ( *(_WORD *)(*(_QWORD *)v32 + 298LL) )
    {
      v36 = 0LL;
      v37 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
      {
        ++v36;
        v37 += 4;
        if ( v36 >= *(unsigned __int16 *)(*(_QWORD *)v32 + 298LL) )
          goto LABEL_35;
      }
      v38 = v34 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_35:
      v38 = sub_AC5258(v32, System_IDisposable_TypeInfo, 0LL, v33);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v38)(v35, *(_QWORD *)(v38 + 8));
  }
}