void ScriptSubLayerManager___ctor(ScriptSubLayerManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C29322 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ScriptSubLayer___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ScriptSubLayer__TypeInfo);
    byte_4C29322 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ScriptSubLayer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ScriptSubLayer___ctor__);
  this->fields.listSubLayer = (struct System_Collections_Generic_List_ScriptSubLayer__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.listSubLayer, (int32_t)v3, v4, v5);
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

  if ( (byte_4C2931F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ScriptSubLayer__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ScriptSubLayer__GetEnumerator__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2931F = 1;
  }
  memset(&v9, 0, sizeof(v9));
  listSubLayer = (System_Collections_Generic_List_object__o *)this->fields.listSubLayer;
  if ( !listSubLayer )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    listSubLayer,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ScriptSubLayer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__MoveNext__) )
  {
    if ( !v9.fields._current )
      sub_1C2D6EC(0, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v9.fields._current,
                                           0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(gameObject, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__Dispose__);
  v6 = this->fields.listSubLayer;
  if ( !v6 )
LABEL_15:
    sub_1C2D6EC(listSubLayer, method);
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
  const MethodInfo *v10; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v12; // x9
  __int64 klass_low; // x10
  intptr_t v14; // x8

  if ( (byte_4C2931E & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ScriptSubLayer___);
    sub_1C2D490(&Method_System_Collections_Generic_List_ScriptSubLayer__Add__);
    byte_4C2931E = 1;
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
                                             (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ScriptSubLayer___);
      if ( !Object
        || (v8 = (Il2CppObject *)Object,
            ScriptSubLayer__StartSubLayer((ScriptSubLayer_o *)Object, v6),
            (Object = (UnityEngine_GameObject_o *)this->fields.listSubLayer) == 0)
        || (m_CachedPtr = Object->fields.m_CachedPtr,
            v12 = Method_System_Collections_Generic_List_ScriptSubLayer__Add__,
            ++HIDWORD(Object[1].klass),
            !m_CachedPtr) )
      {
LABEL_13:
        sub_1C2D6EC(Object, v6);
      }
      klass_low = SLODWORD(Object[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Object,
          v8,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = m_CachedPtr + 8 * klass_low;
        LODWORD(Object[1].klass) = klass_low + 1;
        *(_QWORD *)(v14 + 32) = v8;
        sub_1C2D434((CGThumbnailListItem_o *)(v14 + 32), (int32_t)v8, v9, v10);
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
  const MethodInfo *v11; // x3
  __int64 *v12; // x19
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  System_Collections_Generic_List_object__o *listSubLayer; // x22
  System_Predicate_object__o *v17; // x24
  Il2CppObject *v18; // x22
  System_Collections_Generic_List_object__o *v19; // x20
  System_Predicate_object__o *v20; // x21
  Il2CppObject *v21; // x22
  struct ScriptSubLayerManager___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 v27; // x1

  if ( (byte_4C29320 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ScriptSubLayer__Find__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&System_Predicate_ScriptSubLayer__TypeInfo);
    sub_1C2D490(&Method_ScriptSubLayerManager___c__GetSubLayer_b__21_1__);
    sub_1C2D490(&Method_ScriptSubLayerManager___c__DisplayClass21_0__GetSubLayer_b__0__);
    sub_1C2D490(&ScriptSubLayerManager___c__DisplayClass21_0_TypeInfo);
    sub_1C2D490(&ScriptSubLayerManager___c_TypeInfo);
    sub_1C2D490(&StringLiteral_416/*"#A"*/);
    byte_4C29320 = 1;
  }
  v7 = sub_1C2D6DC(ScriptSubLayerManager___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_21;
  *(_QWORD *)(v7 + 16) = layerKey;
  v12 = (__int64 *)(v7 + 16);
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 16), (int32_t)layerKey, v10, v11);
  if ( System_String__IsNullOrEmpty(*(System_String_o **)(v7 + 16), 0) )
  {
    v15 = StringLiteral_416/*"#A"*/;
    *v12 = StringLiteral_416/*"#A"*/;
    sub_1C2D434((CGThumbnailListItem_o *)(v7 + 16), v15, v13, v14);
  }
  listSubLayer = (System_Collections_Generic_List_object__o *)this->fields.listSubLayer;
  v17 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_ScriptSubLayer__TypeInfo);
  System_Predicate_object____ctor(
    v17,
    (Il2CppObject *)v7,
    Method_ScriptSubLayerManager___c__DisplayClass21_0__GetSubLayer_b__0__,
    0);
  if ( !listSubLayer )
    goto LABEL_21;
  v18 = System_Collections_Generic_List_object___Find(
          listSubLayer,
          (System_Predicate_T__o *)v17,
          (const MethodInfo_378A1EC *)Method_System_Collections_Generic_List_ScriptSubLayer__Find__);
  if ( isRegist )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v18, 0, 0) )
    {
      v19 = (System_Collections_Generic_List_object__o *)this->fields.listSubLayer;
      v8 = (char *)ScriptSubLayerManager___c_TypeInfo;
      if ( !ScriptSubLayerManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptSubLayerManager___c_TypeInfo);
        v8 = (char *)ScriptSubLayerManager___c_TypeInfo;
      }
      v20 = *(System_Predicate_object__o **)(*((_QWORD *)v8 + 23) + 8LL);
      if ( !v20 )
      {
        if ( !*((_DWORD *)v8 + 56) )
        {
          j_il2cpp_runtime_class_init_0(v8);
          v8 = (char *)ScriptSubLayerManager___c_TypeInfo;
        }
        v21 = (Il2CppObject *)**((_QWORD **)v8 + 23);
        v20 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_ScriptSubLayer__TypeInfo);
        System_Predicate_object____ctor(v20, v21, Method_ScriptSubLayerManager___c__GetSubLayer_b__21_1__, 0);
        static_fields = ScriptSubLayerManager___c_TypeInfo->static_fields;
        static_fields->__9__21_1 = (struct System_Predicate_ScriptSubLayer__o *)v20;
        sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__21_1, (int32_t)v20, v23, v24);
      }
      if ( v19 )
      {
        v8 = (char *)System_Collections_Generic_List_object___Find(
                       v19,
                       (System_Predicate_T__o *)v20,
                       (const MethodInfo_378A1EC *)Method_System_Collections_Generic_List_ScriptSubLayer__Find__);
        if ( v8 )
        {
          v27 = *v12;
          v18 = (Il2CppObject *)v8;
          *((_QWORD *)v8 + 4) = *v12;
          sub_1C2D434((CGThumbnailListItem_o *)(v8 + 32), v27, v25, v26);
          return (ScriptSubLayer_o *)v18;
        }
      }
LABEL_21:
      sub_1C2D6EC(v8, v9);
    }
  }
  return (ScriptSubLayer_o *)v18;
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
    sub_1C2D6EC(subLayerCamera, method);
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
    sub_1C2D6EC(0, v9);
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

  if ( (byte_4C2931C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
    byte_4C2931C = 1;
  }
  listSubLayer = (System_Collections_Generic_List_object__o *)this->fields.listSubLayer;
  if ( !listSubLayer )
LABEL_8:
    sub_1C2D6EC(listSubLayer, charaData);
  v6 = 0;
  while ( v6 < listSubLayer->fields._size )
  {
    listSubLayer = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  listSubLayer,
                                                                  v6,
                                                                  (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
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
  int m_CancellationTokenSource; // w8
  int32_t v12; // w20
  int32_t v13; // w21
  const MethodInfo *v14; // x2
  ScriptSubLayerManager_o *v15; // x21
  ScriptSubLayerManager_o *v16; // x21
  UnityEngine_Camera_o *subLayerCamera; // x21
  UnityEngine_Camera_o *v18; // x21
  UnityEngine_Object_o *klass; // x21
  ScriptSubLayerManager_o *v20; // x21
  ScriptSubLayerManager_c *v21; // x22
  void *monitor; // x23
  UnityEngine_Matrix4x4_o *zero; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  float v26; // s1
  float v27; // s2
  float v28; // s3
  float v29; // s4
  float v30; // s5
  float v31; // s6
  float v32; // s7
  float v33; // s16
  float v34; // s17
  float v35; // s18
  float v36; // s19
  float v37; // s20
  float v38; // s21
  float v39; // s22
  float v40; // s23
  UnityEngine_Texture_o *targetTexture; // x23
  UnityEngine_RenderTexture_o *v42; // x0
  int32_t v43; // w20
  UnityEngine_Matrix4x4_o v44; // [xsp+0h] [xbp-150h] BYREF
  UnityEngine_Matrix4x4_o v45; // [xsp+40h] [xbp-110h] BYREF
  UnityEngine_RenderTextureDescriptor_o v46; // [xsp+80h] [xbp-D0h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v55; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4C29321 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Graphics_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_16220/*"_FilterParam"*/);
    this = (ScriptSubLayerManager_o *)sub_1C2D490(&StringLiteral_16169/*"_Color"*/);
    byte_4C29321 = 1;
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
    x = localPosition.fields.x;
    y = localPosition.fields.y;
    z = localPosition.fields.z;
    this = (ScriptSubLayerManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    if ( !this )
      goto LABEL_93;
    localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0);
    this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
    if ( !this )
      goto LABEL_93;
    v7 = localScale.fields.x;
    v8 = localScale.fields.y;
    v9 = localScale.fields.z;
    v10 = 0;
    while ( 1 )
    {
      m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
      if ( v10 >= m_CancellationTokenSource )
        break;
      this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)this,
                                          v10,
                                          (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
      if ( this )
      {
        ScriptSubLayer__RemoveInvalidCharaData((ScriptSubLayer_o *)this, method);
        this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
        ++v10;
        if ( this )
          continue;
      }
      goto LABEL_93;
    }
    if ( m_CancellationTokenSource >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)this,
                                            v12,
                                            (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
        if ( !this )
          break;
        if ( LOBYTE(this->fields.subLayerInstanceRoot) )
        {
          this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
          if ( !this )
            break;
          v13 = 0;
          while ( v13 < SLODWORD(this->fields.m_CancellationTokenSource) )
          {
            if ( v12 != v13 )
            {
              this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)this,
                                                  v13,
                                                  (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
              if ( !this )
                goto LABEL_93;
              ScriptSubLayer__SetLayer((ScriptSubLayer_o *)this, -1, v14);
              this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
            }
            ++v13;
            if ( !this )
              goto LABEL_93;
          }
          this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v12,
                                              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
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
            v15 = this;
            this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)v2->fields.listSubLayer,
                                                v12,
                                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
            if ( !this )
              break;
            this = (ScriptSubLayerManager_o *)this[1].fields.subLayerPrefab;
            if ( !this )
              break;
            this = (ScriptSubLayerManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
            if ( !this )
              break;
            this = (ScriptSubLayerManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
            if ( !this )
              break;
            v49 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
            if ( !v15 )
              break;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v15, v49, 0);
            this = (ScriptSubLayerManager_o *)v2->fields.stretchObj;
            if ( !this )
              break;
            this = (ScriptSubLayerManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
            if ( !v2->fields.listSubLayer )
              break;
            v16 = this;
            this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)v2->fields.listSubLayer,
                                                v12,
                                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
            if ( !this )
              break;
            this = (ScriptSubLayerManager_o *)this[1].fields.subLayerPrefab;
            if ( !this )
              break;
            this = (ScriptSubLayerManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
            if ( !this )
              break;
            this = (ScriptSubLayerManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
            if ( !this )
              break;
            v50 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0);
            if ( !v16 )
              break;
            UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v16, v50, 0);
          }
          this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
          if ( !this )
            break;
          subLayerCamera = v2->fields.subLayerCamera;
          this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v12,
                                              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
          if ( !this )
            break;
          if ( !subLayerCamera )
            break;
          v53.fields.b = *((float *)&this->fields.subLayerPrefab + 1);
          v53.fields.a = *(float *)&this->fields.stretchObj;
          v53.fields.r = *((float *)&this->fields.subLayerInstanceRoot + 1);
          v53.fields.g = *(float *)&this->fields.subLayerPrefab;
          UnityEngine_Camera__set_backgroundColor(subLayerCamera, v53, 0);
          this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
          if ( !this )
            break;
          v18 = v2->fields.subLayerCamera;
          this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v12,
                                              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
          if ( !this )
            break;
          if ( !v18 )
            break;
          UnityEngine_Camera__set_targetTexture(v18, (UnityEngine_RenderTexture_o *)this->fields.listSubLayer, 0);
          this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
          if ( !this )
            break;
          UnityEngine_Camera__Render((UnityEngine_Camera_o *)this, 0);
          this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
          if ( !this )
            break;
          this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v12,
                                              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
          if ( !this )
            break;
          klass = (UnityEngine_Object_o *)this[1].klass;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(klass, 0, 0) )
          {
            this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
            if ( !this )
              break;
            this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)this,
                                                v12,
                                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
            if ( !this )
              break;
            this = (ScriptSubLayerManager_o *)this->fields.listSubLayer;
            if ( !this )
              break;
            UnityEngine_RenderTexture__get_descriptor(
              (UnityEngine_RenderTextureDescriptor_o *)&v45,
              (UnityEngine_RenderTexture_o *)this,
              0);
            *(_OWORD *)&v46.fields._width_k__BackingField = *(_OWORD *)&v45.fields.m00;
            *(_OWORD *)&v46.fields._mipCount_k__BackingField = *(_OWORD *)&v45.fields.m01;
            *(_OWORD *)&v46.fields._dimension_k__BackingField = *(_OWORD *)&v45.fields.m02;
            v46.fields._memoryless_k__BackingField = LODWORD(v45.fields.m03);
            this = (ScriptSubLayerManager_o *)UnityEngine_RenderTexture__GetTemporary(&v46, 0);
            if ( !v2->fields.listSubLayer )
              break;
            v20 = this;
            this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)v2->fields.listSubLayer,
                                                v12,
                                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
            if ( !this )
              break;
            if ( !v2->fields.listSubLayer )
              break;
            v21 = this[1].klass;
            this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)v2->fields.listSubLayer,
                                                v12,
                                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
            if ( !this || !v21 )
              break;
            monitor = this[1].monitor;
            v54.fields.r = 1.0;
            v54.fields.g = 1.0;
            v54.fields.b = 1.0;
            v54.fields.a = 1.0;
            UnityEngine_Material__SetColor(
              (UnityEngine_Material_o *)v21,
              (System_String_o *)StringLiteral_16169/*"_Color"*/,
              v54,
              0);
            if ( monitor )
            {
              zero = UnityEngine_Matrix4x4__get_zero(&v45, 0);
              if ( *((_DWORD *)monitor + 6) < 0x10u )
                sub_1C2D6F4(zero, v24, v25);
              v26 = *((float *)monitor + 9);
              v27 = *((float *)monitor + 10);
              v28 = *((float *)monitor + 11);
              v29 = *((float *)monitor + 12);
              v30 = *((float *)monitor + 13);
              v31 = *((float *)monitor + 14);
              v32 = *((float *)monitor + 15);
              v33 = *((float *)monitor + 16);
              v34 = *((float *)monitor + 17);
              v35 = *((float *)monitor + 18);
              v36 = *((float *)monitor + 19);
              v37 = *((float *)monitor + 20);
              v38 = *((float *)monitor + 21);
              v39 = *((float *)monitor + 22);
              v40 = *((float *)monitor + 23);
              v44.fields.m00 = *((float *)monitor + 8);
              v44.fields.m10 = v29;
              v44.fields.m20 = v33;
              v44.fields.m30 = v37;
              v44.fields.m01 = v26;
              v44.fields.m11 = v30;
              v44.fields.m21 = v34;
              v44.fields.m31 = v38;
              v44.fields.m02 = v27;
              v44.fields.m12 = v31;
              v44.fields.m22 = v35;
              v44.fields.m32 = v39;
              v44.fields.m03 = v28;
              v44.fields.m13 = v32;
              v44.fields.m23 = v36;
              v44.fields.m33 = v40;
              UnityEngine_Material__SetMatrix(
                (UnityEngine_Material_o *)v21,
                (System_String_o *)StringLiteral_16220/*"_FilterParam"*/,
                &v44,
                0);
            }
            this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
            if ( !this )
              break;
            targetTexture = (UnityEngine_Texture_o *)UnityEngine_Camera__get_targetTexture(
                                                       (UnityEngine_Camera_o *)this,
                                                       0);
            if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
            UnityEngine_Graphics__Blit_71009388(
              targetTexture,
              (UnityEngine_RenderTexture_o *)v20,
              (UnityEngine_Material_o *)v21,
              0);
            this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
            if ( !this )
              break;
            v42 = UnityEngine_Camera__get_targetTexture((UnityEngine_Camera_o *)this, 0);
            UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)v20, v42, 0);
            UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)v20, 0);
          }
        }
        this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
        if ( !this )
          break;
        m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
        if ( ++v12 >= m_CancellationTokenSource )
          goto LABEL_76;
      }
LABEL_93:
      sub_1C2D6EC(this, method);
    }
LABEL_76:
    if ( m_CancellationTokenSource >= 1 )
    {
      v43 = 0;
      do
      {
        this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)this,
                                            v43,
                                            (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
        if ( !this )
          goto LABEL_93;
        ScriptSubLayer__SetLayerActive((ScriptSubLayer_o *)this, method);
        this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
        if ( !this )
          goto LABEL_93;
      }
      while ( ++v43 < SLODWORD(this->fields.m_CancellationTokenSource) );
    }
    if ( v2->fields.isInvalidStretch )
    {
      this = (ScriptSubLayerManager_o *)v2->fields.stretchObj;
      if ( !this )
        goto LABEL_93;
      this = (ScriptSubLayerManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
      if ( !this )
        goto LABEL_93;
      v51.fields.x = x;
      v51.fields.y = y;
      v51.fields.z = z;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v51, 0);
      this = (ScriptSubLayerManager_o *)v2->fields.stretchObj;
      if ( !this )
        goto LABEL_93;
      this = (ScriptSubLayerManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
      if ( !this )
        goto LABEL_93;
      v52.fields.x = v7;
      v52.fields.y = v8;
      v52.fields.z = v9;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v52, 0);
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
    v55.fields.r = 0.0;
    v55.fields.g = 0.0;
    v55.fields.b = 0.0;
    v55.fields.a = 0.0;
    UnityEngine_Camera__set_backgroundColor((UnityEngine_Camera_o *)this, v55, 0);
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
    sub_1C2D6EC(0, v7);
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
  if ( (byte_4C2931D & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ScriptSubLayer__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Count__);
    this = (ScriptSubLayerManager_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2931D = 1;
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
          (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ScriptSubLayer__GetEnumerator__);
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v9,
                  (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__MoveNext__) )
        {
          if ( !v9.fields._current )
            sub_1C2D6EC(0, v7);
          ScriptSubLayer__SetStretchObj((ScriptSubLayer_o *)v9.fields._current, v3->fields.stretchObj, v8);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v9,
          (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__Dispose__);
        return;
      }
LABEL_16:
      sub_1C2D6EC(this, invalidStretch);
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
    sub_1C2D6EC(clearFlags, v8);
  }
  UnityEngine_Camera__set_orthographicSize(v12, orthographicSize, 0);
  ScriptSubLayerManager__CreateSubLayer(this, count, v14);
}


void ScriptSubLayerManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C29323 & 1) == 0 )
  {
    sub_1C2D490(&ScriptSubLayerManager___c_TypeInfo);
    byte_4C29323 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(ScriptSubLayerManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ScriptSubLayerManager___c_TypeInfo->static_fields->__9 = (struct ScriptSubLayerManager___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)ScriptSubLayerManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
  return System_String__op_Equality(l->fields._layerKey_k__BackingField, this->fields.layerKey, 0);
}