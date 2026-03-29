void ScriptSubLayerManager___ctor(ScriptSubLayerManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D32A47 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptSubLayer___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ScriptSubLayer__TypeInfo);
    byte_4D32A47 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ScriptSubLayer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ScriptSubLayer___ctor__);
  this->fields.listSubLayer = (struct System_Collections_Generic_List_ScriptSubLayer__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.listSubLayer, (int32_t)v3, v4, v5, v6, v7, v8, v9);
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
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_ScriptSubLayer__o *v6; // x8
  int32_t size; // w2
  int v8; // w9
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D32A44 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptSubLayer__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptSubLayer__GetEnumerator__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D32A44 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  listSubLayer = (System_Collections_Generic_List_object__o *)this->fields.listSubLayer;
  if ( !listSubLayer )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    listSubLayer,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ScriptSubLayer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__MoveNext__) )
  {
    if ( !v9.fields._current )
      sub_1C93D2C(0, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v9.fields._current,
                                           0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908(gameObject, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__Dispose__);
  v6 = this->fields.listSubLayer;
  if ( !v6 )
LABEL_15:
    sub_1C93D2C(listSubLayer, method);
  size = v6->fields._size;
  v8 = v6->fields._version + 1;
  v6->fields._size = 0;
  v6->fields._version = v8;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v6->fields._items, 0, size, 0);
}


void ScriptSubLayerManager__CreateSubLayer(ScriptSubLayerManager_o *this, int32_t count, const MethodInfo *method)
{
  UnityEngine_GameObject_o *Object; // x0
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *v7; // x21
  Il2CppObject *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v16; // x9
  __int64 klass_low; // x10
  intptr_t v18; // x8

  if ( (byte_4D32A43 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_ScriptSubLayer___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptSubLayer__Add__);
    byte_4D32A43 = 1;
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
                                             (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ScriptSubLayer___);
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
        sub_1C93D2C(Object, v6);
      }
      klass_low = SLODWORD(Object[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Object,
          v8,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      }
      else
      {
        v18 = m_CachedPtr + 8 * klass_low;
        LODWORD(Object[1].klass) = klass_low + 1;
        *(_QWORD *)(v18 + 32) = v8;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v18 + 32), (int32_t)v8, v9, v10, v11, v12, v13, v14);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  __int64 *v16; // x19
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w1
  System_Collections_Generic_List_object__o *listSubLayer; // x22
  System_Predicate_object__o *v25; // x24
  Il2CppObject *v26; // x22
  System_Collections_Generic_List_object__o *v27; // x20
  System_Predicate_object__o *v28; // x21
  Il2CppObject *v29; // x22
  struct ScriptSubLayerManager___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  __int64 v43; // x1

  if ( (byte_4D32A45 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptSubLayer__Find__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&System_Predicate_ScriptSubLayer__TypeInfo);
    sub_1C93AD4(&Method_ScriptSubLayerManager___c__GetSubLayer_b__21_1__);
    sub_1C93AD4(&Method_ScriptSubLayerManager___c__DisplayClass21_0__GetSubLayer_b__0__);
    sub_1C93AD4(&ScriptSubLayerManager___c__DisplayClass21_0_TypeInfo);
    sub_1C93AD4(&ScriptSubLayerManager___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_416/*"#A"*/);
    byte_4D32A45 = 1;
  }
  v7 = sub_1C93D20(ScriptSubLayerManager___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_21;
  *(_QWORD *)(v7 + 16) = layerKey;
  v16 = (__int64 *)(v7 + 16);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)layerKey, v10, v11, v12, v13, v14, v15);
  if ( System_String__IsNullOrEmpty(*(System_String_o **)(v7 + 16), 0) )
  {
    v23 = StringLiteral_416/*"#A"*/;
    *v16 = StringLiteral_416/*"#A"*/;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), v23, v17, v18, v19, v20, v21, v22);
  }
  listSubLayer = (System_Collections_Generic_List_object__o *)this->fields.listSubLayer;
  v25 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_ScriptSubLayer__TypeInfo);
  System_Predicate_object____ctor(
    v25,
    (Il2CppObject *)v7,
    Method_ScriptSubLayerManager___c__DisplayClass21_0__GetSubLayer_b__0__,
    0);
  if ( !listSubLayer )
    goto LABEL_21;
  v26 = System_Collections_Generic_List_object___Find(
          listSubLayer,
          (System_Predicate_T__o *)v25,
          (const MethodInfo_387A004 *)Method_System_Collections_Generic_List_ScriptSubLayer__Find__);
  if ( isRegist )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v26, 0, 0) )
    {
      v27 = (System_Collections_Generic_List_object__o *)this->fields.listSubLayer;
      v8 = (char *)ScriptSubLayerManager___c_TypeInfo;
      if ( !ScriptSubLayerManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptSubLayerManager___c_TypeInfo);
        v8 = (char *)ScriptSubLayerManager___c_TypeInfo;
      }
      v28 = *(System_Predicate_object__o **)(*((_QWORD *)v8 + 23) + 8LL);
      if ( !v28 )
      {
        if ( !*((_DWORD *)v8 + 56) )
        {
          j_il2cpp_runtime_class_init_0(v8);
          v8 = (char *)ScriptSubLayerManager___c_TypeInfo;
        }
        v29 = (Il2CppObject *)**((_QWORD **)v8 + 23);
        v28 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_ScriptSubLayer__TypeInfo);
        System_Predicate_object____ctor(v28, v29, Method_ScriptSubLayerManager___c__GetSubLayer_b__21_1__, 0);
        static_fields = ScriptSubLayerManager___c_TypeInfo->static_fields;
        static_fields->__9__21_1 = (struct System_Predicate_ScriptSubLayer__o *)v28;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__21_1,
          (int32_t)v28,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36);
      }
      if ( v27 )
      {
        v8 = (char *)System_Collections_Generic_List_object___Find(
                       v27,
                       (System_Predicate_T__o *)v28,
                       (const MethodInfo_387A004 *)Method_System_Collections_Generic_List_ScriptSubLayer__Find__);
        if ( v8 )
        {
          v43 = *v16;
          v26 = (Il2CppObject *)v8;
          *((_QWORD *)v8 + 4) = *v16;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v8 + 32), v43, v37, v38, v39, v40, v41, v42);
          return (ScriptSubLayer_o *)v26;
        }
      }
LABEL_21:
      sub_1C93D2C(v8, v9);
    }
  }
  return (ScriptSubLayer_o *)v26;
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
    sub_1C93D2C(subLayerCamera, method);
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
    sub_1C93D2C(0, v9);
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

  if ( (byte_4D32A41 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
    byte_4D32A41 = 1;
  }
  listSubLayer = (System_Collections_Generic_List_object__o *)this->fields.listSubLayer;
  if ( !listSubLayer )
LABEL_8:
    sub_1C93D2C(listSubLayer, charaData);
  v6 = 0;
  while ( v6 < listSubLayer->fields._size )
  {
    listSubLayer = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  listSubLayer,
                                                                  v6,
                                                                  (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
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
  int32_t v4; // w20
  int m_CancellationTokenSource; // w8
  int32_t v6; // w20
  int32_t v7; // w21
  const MethodInfo *v8; // x2
  ScriptSubLayerManager_o *v9; // x21
  ScriptSubLayerManager_o *v10; // x21
  UnityEngine_Camera_o *subLayerCamera; // x21
  UnityEngine_Camera_o *v12; // x21
  UnityEngine_Object_o *v13; // x21
  ScriptSubLayerManager_o *v14; // x21
  UnityEngine_Material_o *v15; // x22
  __int64 v16; // x23
  UnityEngine_Matrix4x4_o *zero; // x0
  float v18; // s1
  float v19; // s2
  float v20; // s3
  float v21; // s4
  float v22; // s5
  float v23; // s6
  float v24; // s7
  float v25; // s16
  float v26; // s17
  float v27; // s18
  float v28; // s19
  float v29; // s20
  float v30; // s21
  float v31; // s22
  float v32; // s23
  UnityEngine_Texture_o *targetTexture; // x23
  UnityEngine_RenderTexture_o *v34; // x0
  int32_t v35; // w20
  UnityEngine_Matrix4x4_o v36; // [xsp+0h] [xbp-150h] BYREF
  UnityEngine_Matrix4x4_o v37; // [xsp+40h] [xbp-110h] BYREF
  UnityEngine_RenderTextureDescriptor_o v38; // [xsp+80h] [xbp-D0h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o localScale; // 0:kr14_12.12
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4D32A46 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Graphics_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_16324/*"_FilterParam"*/);
    this = (ScriptSubLayerManager_o *)sub_1C93AD4(&StringLiteral_16273/*"_Color"*/);
    byte_4D32A46 = 1;
  }
  listSubLayer = v2->fields.listSubLayer;
  if ( !listSubLayer )
    goto LABEL_93;
  if ( listSubLayer->fields._size >= 1 )
  {
    this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
    if ( !this )
      goto LABEL_93;
    this = (ScriptSubLayerManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_93;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (ScriptSubLayerManager_o *)v2->fields.stretchObj;
    if ( !this )
      goto LABEL_93;
    this = (ScriptSubLayerManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    if ( !this )
      goto LABEL_93;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    this = (ScriptSubLayerManager_o *)v2->fields.stretchObj;
    if ( !this )
      goto LABEL_93;
    this = (ScriptSubLayerManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    if ( !this )
      goto LABEL_93;
    localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0);
    this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
    if ( !this )
      goto LABEL_93;
    v4 = 0;
    while ( 1 )
    {
      m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
      if ( v4 >= m_CancellationTokenSource )
        break;
      this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)this,
                                          v4,
                                          (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
      if ( this )
      {
        ScriptSubLayer__RemoveInvalidCharaData((ScriptSubLayer_o *)this, method);
        this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
        ++v4;
        if ( this )
          continue;
      }
      goto LABEL_93;
    }
    if ( m_CancellationTokenSource >= 1 )
    {
      v6 = 0;
      while ( 1 )
      {
        this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)this,
                                            v6,
                                            (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
        if ( !this )
          break;
        if ( LOBYTE(this->fields.subLayerInstanceRoot) )
        {
          this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
          if ( !this )
            break;
          v7 = 0;
          while ( v7 < SLODWORD(this->fields.m_CancellationTokenSource) )
          {
            if ( v6 != v7 )
            {
              this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)this,
                                                  v7,
                                                  (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
              if ( !this )
                goto LABEL_93;
              ScriptSubLayer__SetLayer((ScriptSubLayer_o *)this, -1, v8);
              this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
            }
            ++v7;
            if ( !this )
              goto LABEL_93;
          }
          this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v6,
                                              (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
          if ( !this )
            break;
          ScriptSubLayer__SetLayerActive((ScriptSubLayer_o *)this, method);
          if ( v2->fields.isInvalidStretch )
          {
            this = (ScriptSubLayerManager_o *)v2->fields.stretchObj;
            if ( !this )
              break;
            this = (ScriptSubLayerManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
            if ( !v2->fields.listSubLayer )
              break;
            v9 = this;
            this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)v2->fields.listSubLayer,
                                                v6,
                                                (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
            if ( !this )
              break;
            this = (ScriptSubLayerManager_o *)*((_QWORD *)this + 16);
            if ( !this )
              break;
            this = (ScriptSubLayerManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
            if ( !this )
              break;
            this = (ScriptSubLayerManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
            if ( !this )
              break;
            v41 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
            if ( !v9 )
              break;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v9, v41, 0);
            this = (ScriptSubLayerManager_o *)v2->fields.stretchObj;
            if ( !this )
              break;
            this = (ScriptSubLayerManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
            if ( !v2->fields.listSubLayer )
              break;
            v10 = this;
            this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)v2->fields.listSubLayer,
                                                v6,
                                                (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
            if ( !this )
              break;
            this = (ScriptSubLayerManager_o *)*((_QWORD *)this + 16);
            if ( !this )
              break;
            this = (ScriptSubLayerManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
            if ( !this )
              break;
            this = (ScriptSubLayerManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
            if ( !this )
              break;
            v42 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0);
            if ( !v10 )
              break;
            UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v10, v42, 0);
          }
          this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
          if ( !this )
            break;
          subLayerCamera = v2->fields.subLayerCamera;
          this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v6,
                                              (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
          if ( !this )
            break;
          if ( !subLayerCamera )
            break;
          UnityEngine_Camera__set_backgroundColor(
            subLayerCamera,
            *(UnityEngine_Color_o *)((char *)&this->fields.subLayerInstanceRoot + 4),
            0);
          this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
          if ( !this )
            break;
          v12 = v2->fields.subLayerCamera;
          this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v6,
                                              (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
          if ( !this )
            break;
          if ( !v12 )
            break;
          UnityEngine_Camera__set_targetTexture(v12, (UnityEngine_RenderTexture_o *)this->fields.listSubLayer, 0);
          this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
          if ( !this )
            break;
          UnityEngine_Camera__Render((UnityEngine_Camera_o *)this, 0);
          this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
          if ( !this )
            break;
          this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v6,
                                              (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
          if ( !this )
            break;
          v13 = (UnityEngine_Object_o *)*((_QWORD *)this + 10);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v13, 0, 0) )
          {
            this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
            if ( !this )
              break;
            this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)this,
                                                v6,
                                                (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
            if ( !this )
              break;
            this = (ScriptSubLayerManager_o *)this->fields.listSubLayer;
            if ( !this )
              break;
            UnityEngine_RenderTexture__get_descriptor(
              (UnityEngine_RenderTextureDescriptor_o *)&v37,
              (UnityEngine_RenderTexture_o *)this,
              0);
            v38 = *(UnityEngine_RenderTextureDescriptor_o *)&v37.fields.m00;
            this = (ScriptSubLayerManager_o *)UnityEngine_RenderTexture__GetTemporary(&v38, 0);
            if ( !v2->fields.listSubLayer )
              break;
            v14 = this;
            this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)v2->fields.listSubLayer,
                                                v6,
                                                (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
            if ( !this )
              break;
            if ( !v2->fields.listSubLayer )
              break;
            v15 = (UnityEngine_Material_o *)*((_QWORD *)this + 10);
            this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)v2->fields.listSubLayer,
                                                v6,
                                                (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
            if ( !this || !v15 )
              break;
            v16 = *((_QWORD *)this + 11);
            v43.fields.r = 1.0;
            v43.fields.g = 1.0;
            v43.fields.b = 1.0;
            v43.fields.a = 1.0;
            UnityEngine_Material__SetColor(v15, (System_String_o *)StringLiteral_16273/*"_Color"*/, v43, 0);
            if ( v16 )
            {
              zero = UnityEngine_Matrix4x4__get_zero(&v37, 0);
              if ( *(_DWORD *)(v16 + 24) < 0x10u )
                sub_1C93D34(zero);
              v18 = *(float *)(v16 + 36);
              v19 = *(float *)(v16 + 40);
              v20 = *(float *)(v16 + 44);
              v21 = *(float *)(v16 + 48);
              v22 = *(float *)(v16 + 52);
              v23 = *(float *)(v16 + 56);
              v24 = *(float *)(v16 + 60);
              v25 = *(float *)(v16 + 64);
              v26 = *(float *)(v16 + 68);
              v27 = *(float *)(v16 + 72);
              v28 = *(float *)(v16 + 76);
              v29 = *(float *)(v16 + 80);
              v30 = *(float *)(v16 + 84);
              v31 = *(float *)(v16 + 88);
              v32 = *(float *)(v16 + 92);
              v36.fields.m00 = *(float *)(v16 + 32);
              v36.fields.m10 = v21;
              v36.fields.m20 = v25;
              v36.fields.m30 = v29;
              v36.fields.m01 = v18;
              v36.fields.m11 = v22;
              v36.fields.m21 = v26;
              v36.fields.m31 = v30;
              v36.fields.m02 = v19;
              v36.fields.m12 = v23;
              v36.fields.m22 = v27;
              v36.fields.m32 = v31;
              v36.fields.m03 = v20;
              v36.fields.m13 = v24;
              v36.fields.m23 = v28;
              v36.fields.m33 = v32;
              UnityEngine_Material__SetMatrix(v15, (System_String_o *)StringLiteral_16324/*"_FilterParam"*/, &v36, 0);
            }
            this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
            if ( !this )
              break;
            targetTexture = (UnityEngine_Texture_o *)UnityEngine_Camera__get_targetTexture(
                                                       (UnityEngine_Camera_o *)this,
                                                       0);
            if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
            UnityEngine_Graphics__Blit_71964832(targetTexture, (UnityEngine_RenderTexture_o *)v14, v15, 0);
            this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
            if ( !this )
              break;
            v34 = UnityEngine_Camera__get_targetTexture((UnityEngine_Camera_o *)this, 0);
            UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)v14, v34, 0);
            UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)v14, 0);
          }
        }
        this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
        if ( !this )
          break;
        m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
        if ( ++v6 >= m_CancellationTokenSource )
          goto LABEL_76;
      }
LABEL_93:
      sub_1C93D2C(this, method);
    }
LABEL_76:
    if ( m_CancellationTokenSource >= 1 )
    {
      v35 = 0;
      do
      {
        this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)this,
                                            v35,
                                            (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
        if ( !this )
          goto LABEL_93;
        ScriptSubLayer__SetLayerActive((ScriptSubLayer_o *)this, method);
        this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
        if ( !this )
          goto LABEL_93;
      }
      while ( ++v35 < SLODWORD(this->fields.m_CancellationTokenSource) );
    }
    if ( v2->fields.isInvalidStretch )
    {
      this = (ScriptSubLayerManager_o *)v2->fields.stretchObj;
      if ( !this )
        goto LABEL_93;
      this = (ScriptSubLayerManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
      if ( !this )
        goto LABEL_93;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, localPosition, 0);
      this = (ScriptSubLayerManager_o *)v2->fields.stretchObj;
      if ( !this )
        goto LABEL_93;
      this = (ScriptSubLayerManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
      if ( !this )
        goto LABEL_93;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, localScale, 0);
    }
    this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
    if ( !this )
      goto LABEL_93;
    this = (ScriptSubLayerManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_93;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
    if ( !this )
      goto LABEL_93;
    UnityEngine_Camera__set_targetTexture((UnityEngine_Camera_o *)this, 0, 0);
    this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
    if ( !this )
      goto LABEL_93;
    v44.fields.r = 0.0;
    v44.fields.g = 0.0;
    v44.fields.b = 0.0;
    v44.fields.a = 0.0;
    UnityEngine_Camera__set_backgroundColor((UnityEngine_Camera_o *)this, v44, 0);
  }
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
    sub_1C93D2C(0, v7);
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
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  v3 = this;
  v4 = invalidStretch;
  if ( (byte_4D32A42 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptSubLayer__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Count__);
    this = (ScriptSubLayerManager_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D32A42 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  listSubLayer = v3->fields.listSubLayer;
  v3->fields.isInvalidStretch = v4;
  if ( !listSubLayer )
    goto LABEL_16;
  if ( listSubLayer->fields._size >= 1 )
  {
    stretchObj = (UnityEngine_Object_o *)v3->fields.stretchObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(stretchObj, 0, 0) )
    {
      this = (ScriptSubLayerManager_o *)v3->fields.listSubLayer;
      if ( this )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v9,
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ScriptSubLayer__GetEnumerator__);
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v9,
                  (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__MoveNext__) )
        {
          if ( !v9.fields._current )
            sub_1C93D2C(0, v7);
          ScriptSubLayer__SetStretchObj((ScriptSubLayer_o *)v9.fields._current, v3->fields.stretchObj, v8);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v9,
          (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__Dispose__);
        return;
      }
LABEL_16:
      sub_1C93D2C(this, invalidStretch);
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
    sub_1C93D2C(clearFlags, v8);
  }
  UnityEngine_Camera__set_orthographicSize(v12, orthographicSize, 0);
  ScriptSubLayerManager__CreateSubLayer(this, count, v14);
}


void ScriptSubLayerManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D32A48 & 1) == 0 )
  {
    sub_1C93AD4(&ScriptSubLayerManager___c_TypeInfo);
    byte_4D32A48 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(ScriptSubLayerManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ScriptSubLayerManager___c_TypeInfo->static_fields->__9 = (struct ScriptSubLayerManager___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)ScriptSubLayerManager___c_TypeInfo->static_fields,
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
    sub_1C93D2C(this, 0);
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
    sub_1C93D2C(this, 0);
  return System_String__op_Equality(l->fields._layerKey_k__BackingField, this->fields.layerKey, 0);
}