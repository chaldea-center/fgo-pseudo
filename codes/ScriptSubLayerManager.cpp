void ScriptSubLayerManager___ctor(ScriptSubLayerManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_593A763 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ScriptSubLayer___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ScriptSubLayer__TypeInfo);
    byte_593A763 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ScriptSubLayer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ScriptSubLayer___ctor__);
  this->fields.listSubLayer = (struct System_Collections_Generic_List_ScriptSubLayer__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.listSubLayer, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


// attributes: thunk
void ScriptSubLayerManager__Awake(ScriptSubLayerManager_o *this, const MethodInfo *method)
{
  ScriptSubLayerManager__Init(this, method);
}


void ScriptSubLayerManager__ClearSubLayer(ScriptSubLayerManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *listSubLayer; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_ScriptSubLayer__o *v7; // x8
  int32_t size; // w2
  int v9; // w9
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_593A760 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ScriptSubLayer__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ScriptSubLayer__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A760 = 1;
  }
  listSubLayer = (System_Collections_Generic_List_object__o *)this->fields.listSubLayer;
  memset(&v10, 0, sizeof(v10));
  if ( !listSubLayer )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    listSubLayer,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ScriptSubLayer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v10,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__MoveNext__) )
  {
    if ( !v10.fields._current )
      sub_21FFECC(0, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v10.fields._current,
                                           0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    UnityEngine_Object__Destroy_83246496(gameObject, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__Dispose__);
  v7 = this->fields.listSubLayer;
  if ( !v7 )
LABEL_15:
    sub_21FFECC(listSubLayer, method);
  size = v7->fields._size;
  v9 = v7->fields._version + 1;
  v7->fields._size = 0;
  v7->fields._version = v9;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v7->fields._items, 0, size, 0);
}


void ScriptSubLayerManager__CreateSubLayer(ScriptSubLayerManager_o *this, int32_t count, const MethodInfo *method)
{
  UnityEngine_GameObject_o *Object; // x0
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *v7; // x21
  Il2CppObject *v8; // x21
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v16; // x9
  __int64 klass_low; // x10
  intptr_t v18; // x8

  if ( (byte_593A75F & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ScriptSubLayer___);
    sub_21FFC50(&Method_System_Collections_Generic_List_ScriptSubLayer__Add__);
    byte_593A75F = 1;
  }
  if ( count >= 1 )
  {
    do
    {
      Object = BaseMonoBehaviour__createObject(
                 (BaseMonoBehaviour_o *)this,
                 this->fields.subLayerPrefab,
                 this->fields.subLayerInstanceRoot,
                 0,
                 0);
      if ( !Object )
        goto LABEL_13;
      v7 = Object;
      UnityEngine_GameObject__SetActive(Object, 1, 0);
      Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             v7,
                                             (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ScriptSubLayer___);
      if ( !Object
        || (v8 = (Il2CppObject *)Object,
            ScriptSubLayer__StartSubLayer((ScriptSubLayer_o *)Object, v6),
            (Object = (UnityEngine_GameObject_o *)this->fields.listSubLayer) == 0)
        || (m_CachedPtr = Object->fields.m_CachedPtr,
            v16 = Method_System_Collections_Generic_List_ScriptSubLayer__Add__,
            ++HIDWORD(Object[1].klass),
            !m_CachedPtr) )
      {
LABEL_13:
        sub_21FFECC(Object, v6);
      }
      klass_low = SLODWORD(Object[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Object,
          v8,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      }
      else
      {
        v18 = m_CachedPtr + 8 * klass_low;
        LODWORD(Object[1].klass) = klass_low + 1;
        *(_QWORD *)(v18 + 32) = v8;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v18 + 32), (int32_t)v8, v9, v10, v11, v12, v13, v14);
      }
      --count;
    }
    while ( count );
  }
}


ScriptSubLayer_o *ScriptSubLayerManager__GetScriptSubLayer(
        ScriptSubLayerManager_o *this,
        System_String_o *layerKey,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return ScriptSubLayerManager__GetSubLayer(this, layerKey, 1, v3);
}


ScriptSubLayer_o *ScriptSubLayerManager__GetSubLayer(
        ScriptSubLayerManager_o *this,
        System_String_o *layerKey,
        bool isRegist,
        const MethodInfo *method)
{
  __int64 v7; // x23
  char *v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 *v16; // x19
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  int32_t v23; // w1
  System_Collections_Generic_List_object__o *listSubLayer; // x22
  System_Predicate_object__o *v25; // x24
  __int64 v26; // x1
  Il2CppObject *v27; // x22
  System_Collections_Generic_List_object__o *v28; // x20
  struct ScriptSubLayerManager___c_StaticFields *static_fields; // x8
  System_Predicate_object__o *_9__21_1; // x21
  Il2CppObject *v31; // x22
  struct ScriptSubLayerManager___c_StaticFields *v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  __int64 v45; // x1

  if ( (byte_593A761 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ScriptSubLayer__Find__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&System_Predicate_ScriptSubLayer__TypeInfo);
    sub_21FFC50(&Method_ScriptSubLayerManager___c__GetSubLayer_b__21_1__);
    sub_21FFC50(&Method_ScriptSubLayerManager___c__DisplayClass21_0__GetSubLayer_b__0__);
    sub_21FFC50(&ScriptSubLayerManager___c__DisplayClass21_0_TypeInfo);
    sub_21FFC50(&ScriptSubLayerManager___c_TypeInfo);
    sub_21FFC50(&StringLiteral_442/*"#A"*/);
    byte_593A761 = 1;
  }
  v7 = sub_21FFEBC(ScriptSubLayerManager___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_21;
  *(_QWORD *)(v7 + 16) = layerKey;
  v16 = (__int64 *)(v7 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)layerKey, v10, v11, v12, v13, v14, v15);
  if ( System_String__IsNullOrEmpty(*(System_String_o **)(v7 + 16), 0) )
  {
    v23 = StringLiteral_442/*"#A"*/;
    *v16 = StringLiteral_442/*"#A"*/;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), v23, v17, v18, v19, v20, v21, v22);
  }
  listSubLayer = (System_Collections_Generic_List_object__o *)this->fields.listSubLayer;
  v25 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_ScriptSubLayer__TypeInfo);
  System_Predicate_object____ctor(
    v25,
    (Il2CppObject *)v7,
    Method_ScriptSubLayerManager___c__DisplayClass21_0__GetSubLayer_b__0__,
    0);
  if ( !listSubLayer )
    goto LABEL_21;
  v27 = System_Collections_Generic_List_object___Find(
          listSubLayer,
          (System_Predicate_T__o *)v25,
          (const MethodInfo_4450188 *)Method_System_Collections_Generic_List_ScriptSubLayer__Find__);
  if ( isRegist )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v27, 0, 0) )
    {
      v28 = (System_Collections_Generic_List_object__o *)this->fields.listSubLayer;
      v8 = (char *)ScriptSubLayerManager___c_TypeInfo;
      if ( !*(&ScriptSubLayerManager___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ScriptSubLayerManager___c_TypeInfo, v9);
        v8 = (char *)ScriptSubLayerManager___c_TypeInfo;
      }
      static_fields = (struct ScriptSubLayerManager___c_StaticFields *)*((_QWORD *)v8 + 23);
      _9__21_1 = (System_Predicate_object__o *)static_fields->__9__21_1;
      if ( !_9__21_1 )
      {
        if ( !*((_DWORD *)v8 + 57) )
        {
          j_il2cpp_runtime_class_init_0(v8, v9);
          static_fields = ScriptSubLayerManager___c_TypeInfo->static_fields;
        }
        v31 = (Il2CppObject *)static_fields->__9;
        _9__21_1 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_ScriptSubLayer__TypeInfo);
        System_Predicate_object____ctor(_9__21_1, v31, Method_ScriptSubLayerManager___c__GetSubLayer_b__21_1__, 0);
        v32 = ScriptSubLayerManager___c_TypeInfo->static_fields;
        v32->__9__21_1 = (struct System_Predicate_ScriptSubLayer__o *)_9__21_1;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v32->__9__21_1,
          (int32_t)_9__21_1,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
      }
      if ( v28 )
      {
        v8 = (char *)System_Collections_Generic_List_object___Find(
                       v28,
                       (System_Predicate_T__o *)_9__21_1,
                       (const MethodInfo_4450188 *)Method_System_Collections_Generic_List_ScriptSubLayer__Find__);
        if ( v8 )
        {
          v45 = *v16;
          v27 = (Il2CppObject *)v8;
          *((_QWORD *)v8 + 4) = *v16;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v8 + 32), v45, v39, v40, v41, v42, v43, v44);
          return (ScriptSubLayer_o *)v27;
        }
      }
LABEL_21:
      sub_21FFECC(v8, v9);
    }
  }
  return (ScriptSubLayer_o *)v27;
}


void ScriptSubLayerManager__Init(ScriptSubLayerManager_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *subLayerCamera; // x0
  const MethodInfo *v4; // x1

  subLayerCamera = (UnityEngine_Component_o *)this->fields.subLayerCamera;
  if ( !subLayerCamera
    || (subLayerCamera = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(subLayerCamera, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)subLayerCamera, 0, 0),
        (subLayerCamera = (UnityEngine_Component_o *)this->fields.subLayerCamera) == 0) )
  {
    sub_21FFECC(subLayerCamera, method);
  }
  UnityEngine_Camera__set_targetTexture((UnityEngine_Camera_o *)subLayerCamera, 0, 0);
  this->fields.isInvalidStretch = 0;
  ScriptSubLayerManager__ClearSubLayer(this, v4);
}


// attributes: thunk
void ScriptSubLayerManager__LateUpdate(ScriptSubLayerManager_o *this, const MethodInfo *method)
{
  ScriptSubLayerManager__RenderingSubLayer(this, method);
}


void ScriptSubLayerManager__RegistCharaData(
        ScriptSubLayerManager_o *this,
        System_String_o *layerKey,
        ScriptCharaData_o *charaData,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  ScriptSubLayer_o *SubLayer; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  ScriptSubLayerManager__RemoveCharaData(this, charaData, (const MethodInfo *)charaData);
  SubLayer = ScriptSubLayerManager__GetSubLayer(this, layerKey, 1, v7);
  if ( !SubLayer )
    sub_21FFECC(0, v9);
  ScriptSubLayer__RegistCharaData(SubLayer, charaData, v10);
}


void ScriptSubLayerManager__RemoveCharaData(
        ScriptSubLayerManager_o *this,
        ScriptCharaData_o *charaData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *listSubLayer; // x0
  int32_t v6; // w21
  const MethodInfo *v7; // x2

  if ( (byte_593A75D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
    byte_593A75D = 1;
  }
  listSubLayer = (System_Collections_Generic_List_object__o *)this->fields.listSubLayer;
  if ( !listSubLayer )
LABEL_8:
    sub_21FFECC(listSubLayer, charaData);
  v6 = 0;
  while ( v6 < listSubLayer->fields._size )
  {
    listSubLayer = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  listSubLayer,
                                                                  v6,
                                                                  (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
    if ( listSubLayer )
    {
      ScriptSubLayer__RemoveCharaData((ScriptSubLayer_o *)listSubLayer, charaData, v7);
      listSubLayer = (System_Collections_Generic_List_object__o *)this->fields.listSubLayer;
      ++v6;
      if ( listSubLayer )
        continue;
    }
    goto LABEL_8;
  }
}


void ScriptSubLayerManager__RenderingSubLayer(ScriptSubLayerManager_o *this, const MethodInfo *method)
{
  ScriptSubLayerManager_o *v2; // x19
  struct System_Collections_Generic_List_ScriptSubLayer__o *listSubLayer; // x8
  float x; // s8
  float y; // s9
  float z; // s12
  float v7; // s10
  float v8; // s11
  float v9; // s13
  int32_t v10; // w20
  int32_t v11; // w20
  int32_t v12; // w21
  const MethodInfo *v13; // x2
  ScriptSubLayerManager_o *v14; // x21
  ScriptSubLayerManager_o *v15; // x21
  UnityEngine_Camera_o *subLayerCamera; // x21
  UnityEngine_Camera_o *v17; // x21
  UnityEngine_Object_o *klass; // x21
  ScriptSubLayerManager_o *v19; // x21
  ScriptSubLayerManager_c *v20; // x22
  void *monitor; // x23
  UnityEngine_Matrix4x4_o *zero; // x0
  float v23; // s1
  float v24; // s2
  float v25; // s3
  float v26; // s4
  float v27; // s5
  float v28; // s6
  float v29; // s7
  float v30; // s16
  float v31; // s17
  float v32; // s18
  float v33; // s19
  float v34; // s20
  float v35; // s21
  float v36; // s22
  float v37; // s23
  __int64 v38; // x1
  UnityEngine_Texture_o *targetTexture; // x23
  UnityEngine_RenderTexture_o *v40; // x0
  int32_t v41; // w20
  UnityEngine_Matrix4x4_o v42; // [xsp+0h] [xbp-150h] BYREF
  UnityEngine_Matrix4x4_o v43; // [xsp+40h] [xbp-110h] BYREF
  UnityEngine_RenderTextureDescriptor_o v44; // [xsp+80h] [xbp-D0h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v51; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_593A762 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Graphics_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_16838/*"_FilterParam"*/);
    this = (ScriptSubLayerManager_o *)sub_21FFC50(&StringLiteral_16781/*"_Color"*/);
    byte_593A762 = 1;
  }
  listSubLayer = v2->fields.listSubLayer;
  if ( !listSubLayer )
    goto LABEL_80;
  if ( listSubLayer->fields._size < 1 )
    return;
  this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
  if ( !this )
    goto LABEL_80;
  this = (ScriptSubLayerManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_80;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  this = (ScriptSubLayerManager_o *)v2->fields.stretchObj;
  if ( !this )
    goto LABEL_80;
  this = (ScriptSubLayerManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_80;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (ScriptSubLayerManager_o *)v2->fields.stretchObj;
  if ( !this )
    goto LABEL_80;
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  this = (ScriptSubLayerManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_80;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0);
  this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
  if ( !this )
    goto LABEL_80;
  v7 = localScale.fields.x;
  v8 = localScale.fields.y;
  v9 = localScale.fields.z;
  v10 = 0;
  while ( v10 < SLODWORD(this->fields.m_CancellationTokenSource) )
  {
    this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)this,
                                        v10,
                                        (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
    if ( this )
    {
      ScriptSubLayer__RemoveInvalidCharaData((ScriptSubLayer_o *)this, method);
      this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
      ++v10;
      if ( this )
        continue;
    }
    goto LABEL_80;
  }
  v11 = 0;
  while ( v11 < SLODWORD(this->fields.m_CancellationTokenSource) )
  {
    this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)this,
                                        v11,
                                        (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
    if ( !this )
      goto LABEL_80;
    if ( LOBYTE(this->fields.subLayerInstanceRoot) )
    {
      this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
      if ( !this )
        goto LABEL_80;
      v12 = 0;
      while ( v12 < SLODWORD(this->fields.m_CancellationTokenSource) )
      {
        if ( v11 != v12 )
        {
          this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v12,
                                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
          if ( !this )
            goto LABEL_80;
          ScriptSubLayer__SetLayer((ScriptSubLayer_o *)this, -1, v13);
          this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
        }
        ++v12;
        if ( !this )
          goto LABEL_80;
      }
      this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)this,
                                          v11,
                                          (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
      if ( !this )
        goto LABEL_80;
      ScriptSubLayer__SetLayerActive((ScriptSubLayer_o *)this, method);
      if ( v2->fields.isInvalidStretch )
      {
        this = (ScriptSubLayerManager_o *)v2->fields.stretchObj;
        if ( !this )
          goto LABEL_80;
        this = (ScriptSubLayerManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
        if ( !v2->fields.listSubLayer )
          goto LABEL_80;
        v14 = this;
        this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)v2->fields.listSubLayer,
                                            v11,
                                            (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
        if ( !this )
          goto LABEL_80;
        this = (ScriptSubLayerManager_o *)this[1].fields.subLayerPrefab;
        if ( !this )
          goto LABEL_80;
        this = (ScriptSubLayerManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_80;
        this = (ScriptSubLayerManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
        if ( !this )
          goto LABEL_80;
        v47 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
        if ( !v14 )
          goto LABEL_80;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v14, v47, 0);
        this = (ScriptSubLayerManager_o *)v2->fields.stretchObj;
        if ( !this )
          goto LABEL_80;
        this = (ScriptSubLayerManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
        if ( !v2->fields.listSubLayer )
          goto LABEL_80;
        v15 = this;
        this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)v2->fields.listSubLayer,
                                            v11,
                                            (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
        if ( !this )
          goto LABEL_80;
        this = (ScriptSubLayerManager_o *)this[1].fields.subLayerPrefab;
        if ( !this )
          goto LABEL_80;
        this = (ScriptSubLayerManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_80;
        this = (ScriptSubLayerManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
        if ( !this )
          goto LABEL_80;
        v48 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0);
        if ( !v15 )
          goto LABEL_80;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v15, v48, 0);
      }
      this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
      if ( !this )
        goto LABEL_80;
      subLayerCamera = v2->fields.subLayerCamera;
      this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)this,
                                          v11,
                                          (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
      if ( !this )
        goto LABEL_80;
      if ( !subLayerCamera )
        goto LABEL_80;
      v51.fields.b = *((float *)&this->fields.subLayerPrefab + 1);
      v51.fields.a = *(float *)&this->fields.stretchObj;
      v51.fields.r = *((float *)&this->fields.subLayerInstanceRoot + 1);
      v51.fields.g = *(float *)&this->fields.subLayerPrefab;
      UnityEngine_Camera__set_backgroundColor(subLayerCamera, v51, 0);
      this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
      if ( !this )
        goto LABEL_80;
      v17 = v2->fields.subLayerCamera;
      this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)this,
                                          v11,
                                          (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
      if ( !this )
        goto LABEL_80;
      if ( !v17 )
        goto LABEL_80;
      UnityEngine_Camera__set_targetTexture(v17, (UnityEngine_RenderTexture_o *)this->fields.listSubLayer, 0);
      this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
      if ( !this )
        goto LABEL_80;
      UnityEngine_Camera__Render((UnityEngine_Camera_o *)this, 0);
      this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
      if ( !this )
        goto LABEL_80;
      this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)this,
                                          v11,
                                          (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
      if ( !this )
        goto LABEL_80;
      klass = (UnityEngine_Object_o *)this[1].klass;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(klass, 0, 0) )
      {
        this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
        if ( !this )
          goto LABEL_80;
        this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)this,
                                            v11,
                                            (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
        if ( !this )
          goto LABEL_80;
        this = (ScriptSubLayerManager_o *)this->fields.listSubLayer;
        if ( !this )
          goto LABEL_80;
        UnityEngine_RenderTexture__get_descriptor(
          (UnityEngine_RenderTextureDescriptor_o *)&v43,
          (UnityEngine_RenderTexture_o *)this,
          0);
        *(_OWORD *)&v44.fields._width_k__BackingField = *(_OWORD *)&v43.fields.m00;
        *(_OWORD *)&v44.fields._mipCount_k__BackingField = *(_OWORD *)&v43.fields.m01;
        *(_OWORD *)&v44.fields._dimension_k__BackingField = *(_OWORD *)&v43.fields.m02;
        v44.fields._memoryless_k__BackingField = LODWORD(v43.fields.m03);
        this = (ScriptSubLayerManager_o *)UnityEngine_RenderTexture__GetTemporary(&v44, 0);
        if ( !v2->fields.listSubLayer )
          goto LABEL_80;
        v19 = this;
        this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)v2->fields.listSubLayer,
                                            v11,
                                            (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
        if ( !this )
          goto LABEL_80;
        if ( !v2->fields.listSubLayer )
          goto LABEL_80;
        v20 = this[1].klass;
        this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)v2->fields.listSubLayer,
                                            v11,
                                            (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
        if ( !this || !v20 )
          goto LABEL_80;
        v52.fields.r = 1.0;
        v52.fields.g = 1.0;
        v52.fields.b = 1.0;
        v52.fields.a = 1.0;
        monitor = this[1].monitor;
        UnityEngine_Material__SetColor((UnityEngine_Material_o *)v20, (System_String_o *)StringLiteral_16781/*"_Color"*/, v52, 0);
        if ( monitor )
        {
          zero = UnityEngine_Matrix4x4__get_zero(&v43, 0);
          if ( *((_DWORD *)monitor + 6) < 0x10u )
            sub_21FFED4(zero);
          v23 = *((float *)monitor + 9);
          v24 = *((float *)monitor + 10);
          v25 = *((float *)monitor + 11);
          v26 = *((float *)monitor + 12);
          v27 = *((float *)monitor + 13);
          v28 = *((float *)monitor + 14);
          v29 = *((float *)monitor + 15);
          v30 = *((float *)monitor + 16);
          v31 = *((float *)monitor + 17);
          v32 = *((float *)monitor + 18);
          v33 = *((float *)monitor + 19);
          v34 = *((float *)monitor + 20);
          v35 = *((float *)monitor + 21);
          v36 = *((float *)monitor + 22);
          v37 = *((float *)monitor + 23);
          v42.fields.m00 = *((float *)monitor + 8);
          v42.fields.m10 = v26;
          v42.fields.m01 = v23;
          v42.fields.m11 = v27;
          v42.fields.m20 = v30;
          v42.fields.m30 = v34;
          v42.fields.m21 = v31;
          v42.fields.m31 = v35;
          v42.fields.m02 = v24;
          v42.fields.m12 = v28;
          v42.fields.m22 = v32;
          v42.fields.m32 = v36;
          v42.fields.m03 = v25;
          v42.fields.m13 = v29;
          v42.fields.m23 = v33;
          v42.fields.m33 = v37;
          UnityEngine_Material__SetMatrix(
            (UnityEngine_Material_o *)v20,
            (System_String_o *)StringLiteral_16838/*"_FilterParam"*/,
            &v42,
            0);
        }
        this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
        if ( !this )
          goto LABEL_80;
        targetTexture = (UnityEngine_Texture_o *)UnityEngine_Camera__get_targetTexture((UnityEngine_Camera_o *)this, 0);
        if ( !*(&UnityEngine_Graphics_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo, v38);
        UnityEngine_Graphics__Blit_83030636(
          targetTexture,
          (UnityEngine_RenderTexture_o *)v19,
          (UnityEngine_Material_o *)v20,
          0);
        this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
        if ( !this )
          goto LABEL_80;
        v40 = UnityEngine_Camera__get_targetTexture((UnityEngine_Camera_o *)this, 0);
        UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)v19, v40, 0);
        UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)v19, 0);
      }
    }
    this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
    ++v11;
    if ( !this )
      goto LABEL_80;
  }
  v41 = 0;
  while ( v41 < SLODWORD(this->fields.m_CancellationTokenSource) )
  {
    this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)this,
                                        v41,
                                        (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
    if ( this )
    {
      ScriptSubLayer__SetLayerActive((ScriptSubLayer_o *)this, method);
      this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
      ++v41;
      if ( this )
        continue;
    }
    goto LABEL_80;
  }
  if ( v2->fields.isInvalidStretch )
  {
    this = (ScriptSubLayerManager_o *)v2->fields.stretchObj;
    if ( this )
    {
      this = (ScriptSubLayerManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
      if ( this )
      {
        v49.fields.x = x;
        v49.fields.y = y;
        v49.fields.z = z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v49, 0);
        this = (ScriptSubLayerManager_o *)v2->fields.stretchObj;
        if ( this )
        {
          this = (ScriptSubLayerManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
          if ( this )
          {
            v50.fields.x = v7;
            v50.fields.y = v8;
            v50.fields.z = v9;
            UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v50, 0);
            goto LABEL_87;
          }
        }
      }
    }
LABEL_80:
    sub_21FFECC(this, method);
  }
LABEL_87:
  this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
  if ( !this )
    goto LABEL_80;
  this = (ScriptSubLayerManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_80;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
  if ( !this )
    goto LABEL_80;
  UnityEngine_Camera__set_targetTexture((UnityEngine_Camera_o *)this, 0, 0);
  this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
  if ( !this )
    goto LABEL_80;
  v53.fields.r = 0.0;
  v53.fields.g = 0.0;
  v53.fields.b = 0.0;
  v53.fields.a = 0.0;
  UnityEngine_Camera__set_backgroundColor((UnityEngine_Camera_o *)this, v53, 0);
}


void ScriptSubLayerManager__SetDepth(
        ScriptSubLayerManager_o *this,
        System_String_o *layerKey,
        float depth,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3
  ScriptSubLayer_o *SubLayer; // x0
  const MethodInfo *v7; // x1

  SubLayer = ScriptSubLayerManager__GetSubLayer(this, layerKey, 1, v4);
  if ( !SubLayer )
    sub_21FFECC(0, v7);
  ScriptSubLayer__SetDepth(SubLayer, depth, v7);
}


// local variable allocation has failed, the output may be wrong!
void ScriptSubLayerManager__SetSubStretch(ScriptSubLayerManager_o *this, bool invalidStretch, const MethodInfo *method)
{
  ScriptSubLayerManager_o *v3; // x19
  bool v4; // w20
  struct System_Collections_Generic_List_ScriptSubLayer__o *listSubLayer; // x8
  UnityEngine_Object_o *stretchObj; // x20
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+18h] [xbp-38h] BYREF

  v3 = this;
  v4 = invalidStretch;
  if ( (byte_593A75E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ScriptSubLayer__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Count__);
    this = (ScriptSubLayerManager_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A75E = 1;
  }
  listSubLayer = v3->fields.listSubLayer;
  memset(&v9, 0, sizeof(v9));
  v3->fields.isInvalidStretch = v4;
  if ( !listSubLayer )
    goto LABEL_16;
  if ( listSubLayer->fields._size >= 1 )
  {
    stretchObj = (UnityEngine_Object_o *)v3->fields.stretchObj;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, invalidStretch);
    if ( !UnityEngine_Object__op_Equality(stretchObj, 0, 0) )
    {
      this = (ScriptSubLayerManager_o *)v3->fields.listSubLayer;
      if ( this )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v9,
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ScriptSubLayer__GetEnumerator__);
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v9,
                  (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__MoveNext__) )
        {
          if ( !v9.fields._current )
            sub_21FFECC(0, v7);
          ScriptSubLayer__SetStretchObj((ScriptSubLayer_o *)v9.fields._current, v3->fields.stretchObj, v8);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v9,
          (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__Dispose__);
        return;
      }
LABEL_16:
      sub_21FFECC(this, invalidStretch);
    }
  }
}


void ScriptSubLayerManager__StartSubLayer(
        ScriptSubLayerManager_o *this,
        UnityEngine_Camera_o *targetCamera,
        int32_t count,
        const MethodInfo *method)
{
  __int64 clearFlags; // x0
  __int64 v8; // x1
  UnityEngine_Camera_o *subLayerCamera; // x22
  float depth; // s0
  UnityEngine_Camera_o *v11; // x22
  UnityEngine_Camera_o *v12; // x22
  float orthographicSize; // s0
  const MethodInfo *v14; // x2

  ScriptSubLayerManager__Init(this, (const MethodInfo *)targetCamera);
  if ( !targetCamera )
    goto LABEL_6;
  subLayerCamera = this->fields.subLayerCamera;
  depth = UnityEngine_Camera__get_depth(targetCamera, 0);
  if ( !subLayerCamera
    || (UnityEngine_Camera__set_depth(subLayerCamera, depth, 0),
        v11 = this->fields.subLayerCamera,
        clearFlags = UnityEngine_Camera__get_clearFlags(targetCamera, 0),
        !v11)
    || (UnityEngine_Camera__set_clearFlags(v11, clearFlags, 0),
        v12 = this->fields.subLayerCamera,
        orthographicSize = UnityEngine_Camera__get_orthographicSize(targetCamera, 0),
        !v12) )
  {
LABEL_6:
    sub_21FFECC(clearFlags, v8);
  }
  UnityEngine_Camera__set_orthographicSize(v12, orthographicSize, 0);
  ScriptSubLayerManager__CreateSubLayer(this, count, v14);
}


void ScriptSubLayerManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593A764 & 1) == 0 )
  {
    sub_21FFC50(&ScriptSubLayerManager___c_TypeInfo);
    byte_593A764 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ScriptSubLayerManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ScriptSubLayerManager___c_TypeInfo->static_fields->__9 = (struct ScriptSubLayerManager___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ScriptSubLayerManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ScriptSubLayerManager___c___ctor(ScriptSubLayerManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ScriptSubLayerManager___c___GetSubLayer_b__21_1(
        ScriptSubLayerManager___c_o *this,
        ScriptSubLayer_o *l,
        const MethodInfo *method)
{
  if ( !l )
    sub_21FFECC(this, 0);
  return System_String__IsNullOrEmpty(l->fields._layerKey_k__BackingField, 0);
}


void ScriptSubLayerManager___c__DisplayClass21_0___ctor(
        ScriptSubLayerManager___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ScriptSubLayerManager___c__DisplayClass21_0___GetSubLayer_b__0(
        ScriptSubLayerManager___c__DisplayClass21_0_o *this,
        ScriptSubLayer_o *l,
        const MethodInfo *method)
{
  if ( !l )
    sub_21FFECC(this, 0);
  return System_String__op_Equality(l->fields._layerKey_k__BackingField, this->fields.layerKey, 0);
}