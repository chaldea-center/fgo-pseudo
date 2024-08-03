void __fastcall ScriptSubLayerManager___ctor(ScriptSubLayerManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FE080 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ScriptSubLayer___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_ScriptSubLayer__TypeInfo, v4);
    byte_49FE080 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_ScriptSubLayer__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ScriptSubLayer___ctor__);
  this->fields.listSubLayer = (struct System_Collections_Generic_List_ScriptSubLayer__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.listSubLayer, (int32_t)v5, v6, v7);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// attributes: thunk
void __fastcall ScriptSubLayerManager__Awake(ScriptSubLayerManager_o *this, const MethodInfo *method)
{
  ScriptSubLayerManager__Init(this, method);
}


void __fastcall ScriptSubLayerManager__ClearSubLayer(ScriptSubLayerManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *listSubLayer; // x0
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_ScriptSubLayer__o *v10; // x8
  int32_t size; // w2
  int v12; // w9
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FE07D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ScriptSubLayer__Clear__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ScriptSubLayer__GetEnumerator__, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    byte_49FE07D = 1;
  }
  memset(&v13, 0, sizeof(v13));
  listSubLayer = (System_Collections_Generic_List_object__o *)this->fields.listSubLayer;
  if ( !listSubLayer )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    listSubLayer,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ScriptSubLayer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__MoveNext__) )
  {
    if ( !v13.fields._current )
      sub_1B64324(0LL);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v13.fields._current,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__Dispose__);
  v10 = this->fields.listSubLayer;
  if ( !v10 )
LABEL_15:
    sub_1B64324(listSubLayer);
  size = v10->fields._size;
  v12 = v10->fields._version + 1;
  v10->fields._size = 0;
  v10->fields._version = v12;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v10->fields._items, 0, size, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSubLayerManager__CreateSubLayer(
        ScriptSubLayerManager_o *this,
        int32_t count,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o *v7; // x21
  const MethodInfo *v8; // x1
  Il2CppObject *v9; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x8
  _QWORD *v13; // x9
  __int64 klass_low; // x10
  __int64 v15; // x8

  v3 = count;
  if ( (byte_49FE07C & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ScriptSubLayer___, *(_QWORD *)&count);
    sub_1B640C8(&Method_System_Collections_Generic_List_ScriptSubLayer__Add__, v5);
    byte_49FE07C = 1;
  }
  if ( v3 >= 1 )
  {
    do
    {
      Object = BaseMonoBehaviour__createObject(
                 (BaseMonoBehaviour_o *)this,
                 this->fields.subLayerPrefab,
                 this->fields.subLayerInstanceRoot,
                 0LL,
                 0LL);
      if ( !Object )
        goto LABEL_13;
      v7 = Object;
      UnityEngine_GameObject__SetActive(Object, 1, 0LL);
      Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             v7,
                                             (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ScriptSubLayer___);
      if ( !Object
        || (v9 = (Il2CppObject *)Object,
            ScriptSubLayer__StartSubLayer((ScriptSubLayer_o *)Object, v8),
            (Object = (UnityEngine_GameObject_o *)this->fields.listSubLayer) == 0LL)
        || (v12 = *(_QWORD *)&Object->fields.m_CachedPtr,
            v13 = Method_System_Collections_Generic_List_ScriptSubLayer__Add__,
            ++HIDWORD(Object[1].klass),
            !v12) )
      {
LABEL_13:
        sub_1B64324(Object);
      }
      klass_low = SLODWORD(Object[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(v12 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Object,
          v9,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
      }
      else
      {
        v15 = v12 + 8 * klass_low;
        LODWORD(Object[1].klass) = klass_low + 1;
        *(_QWORD *)(v15 + 32) = v9;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 32), (int32_t)v9, v10, v11);
      }
      --v3;
    }
    while ( v3 );
  }
}


ScriptSubLayer_o *__fastcall ScriptSubLayerManager__GetScriptSubLayer(
        ScriptSubLayerManager_o *this,
        System_String_o *layerKey,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return ScriptSubLayerManager__GetSubLayer(this, layerKey, 1, v3);
}


// local variable allocation has failed, the output may be wrong!
ScriptSubLayer_o *__fastcall ScriptSubLayerManager__GetSubLayer(
        ScriptSubLayerManager_o *this,
        System_String_o *layerKey,
        bool isRegist,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x23
  char *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 *v18; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  int32_t v21; // w3
  int32_t v22; // w1
  System_Collections_Generic_List_object__o *listSubLayer; // x22
  System_Predicate_object__o *v24; // x24
  Il2CppObject *v25; // x22
  __int64 v26; // x1
  __int64 v27; // x2
  System_Collections_Generic_List_object__o *v28; // x20
  System_Predicate_object__o *v29; // x21
  Il2CppObject *v30; // x22
  struct ScriptSubLayerManager___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  __int64 v36; // x1

  if ( (byte_49FE07E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ScriptSubLayer__Find__, layerKey);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&System_Predicate_ScriptSubLayer__TypeInfo, v8);
    sub_1B640C8(&Method_ScriptSubLayerManager___c__GetSubLayer_b__21_1__, v9);
    sub_1B640C8(&Method_ScriptSubLayerManager___c__DisplayClass21_0__GetSubLayer_b__0__, v10);
    sub_1B640C8(&ScriptSubLayerManager___c__DisplayClass21_0_TypeInfo, v11);
    sub_1B640C8(&ScriptSubLayerManager___c_TypeInfo, v12);
    sub_1B640C8(&StringLiteral_447/*"#A"*/, v13);
    byte_49FE07E = 1;
  }
  v14 = sub_1B64314(ScriptSubLayerManager___c__DisplayClass21_0_TypeInfo, layerKey, isRegist);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_21;
  *(_QWORD *)(v14 + 16) = layerKey;
  v18 = (__int64 *)(v14 + 16);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)layerKey, v16, v17);
  if ( System_String__IsNullOrEmpty(*(System_String_o **)(v14 + 16), 0LL) )
  {
    v22 = StringLiteral_447/*"#A"*/;
    *v18 = StringLiteral_447/*"#A"*/;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 16), v22, v20, v21);
  }
  listSubLayer = (System_Collections_Generic_List_object__o *)this->fields.listSubLayer;
  v24 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_ScriptSubLayer__TypeInfo, v19, v20);
  System_Predicate_object____ctor(
    v24,
    (Il2CppObject *)v14,
    Method_ScriptSubLayerManager___c__DisplayClass21_0__GetSubLayer_b__0__,
    0LL);
  if ( !listSubLayer )
    goto LABEL_21;
  v25 = System_Collections_Generic_List_object___Find(
          listSubLayer,
          (System_Predicate_T__o *)v24,
          (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_ScriptSubLayer__Find__);
  if ( isRegist )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v25, 0LL, 0LL) )
    {
      v28 = (System_Collections_Generic_List_object__o *)this->fields.listSubLayer;
      v15 = (char *)ScriptSubLayerManager___c_TypeInfo;
      if ( !ScriptSubLayerManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptSubLayerManager___c_TypeInfo);
        v15 = (char *)ScriptSubLayerManager___c_TypeInfo;
      }
      v29 = *(System_Predicate_object__o **)(*((_QWORD *)v15 + 23) + 8LL);
      if ( !v29 )
      {
        if ( !*((_DWORD *)v15 + 56) )
        {
          j_il2cpp_runtime_class_init_0(v15);
          v15 = (char *)ScriptSubLayerManager___c_TypeInfo;
        }
        v30 = (Il2CppObject *)**((_QWORD **)v15 + 23);
        v29 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_ScriptSubLayer__TypeInfo, v26, v27);
        System_Predicate_object____ctor(v29, v30, Method_ScriptSubLayerManager___c__GetSubLayer_b__21_1__, 0LL);
        static_fields = ScriptSubLayerManager___c_TypeInfo->static_fields;
        static_fields->__9__21_1 = (struct System_Predicate_ScriptSubLayer__o *)v29;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__21_1, (int32_t)v29, v32, v33);
      }
      if ( v28 )
      {
        v15 = (char *)System_Collections_Generic_List_object___Find(
                        v28,
                        (System_Predicate_T__o *)v29,
                        (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_ScriptSubLayer__Find__);
        if ( v15 )
        {
          v36 = *v18;
          v25 = (Il2CppObject *)v15;
          *((_QWORD *)v15 + 4) = *v18;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 32), v36, v34, v35);
          return (ScriptSubLayer_o *)v25;
        }
      }
LABEL_21:
      sub_1B64324(v15);
    }
  }
  return (ScriptSubLayer_o *)v25;
}


void __fastcall ScriptSubLayerManager__Init(ScriptSubLayerManager_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *subLayerCamera; // x0
  const MethodInfo *v4; // x1

  subLayerCamera = (UnityEngine_Component_o *)this->fields.subLayerCamera;
  if ( !subLayerCamera
    || (subLayerCamera = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(subLayerCamera, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)subLayerCamera, 0, 0LL),
        (subLayerCamera = (UnityEngine_Component_o *)this->fields.subLayerCamera) == 0LL) )
  {
    sub_1B64324(subLayerCamera);
  }
  UnityEngine_Camera__set_targetTexture((UnityEngine_Camera_o *)subLayerCamera, 0LL, 0LL);
  this->fields.isInvalidStretch = 0;
  ScriptSubLayerManager__ClearSubLayer(this, v4);
}


// attributes: thunk
void __fastcall ScriptSubLayerManager__LateUpdate(ScriptSubLayerManager_o *this, const MethodInfo *method)
{
  ScriptSubLayerManager__RenderingSubLayer(this, method);
}


void __fastcall ScriptSubLayerManager__RegistCharaData(
        ScriptSubLayerManager_o *this,
        System_String_o *layerKey,
        ScriptCharaData_o *charaData,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  ScriptSubLayer_o *SubLayer; // x0
  const MethodInfo *v9; // x2

  ScriptSubLayerManager__RemoveCharaData(this, charaData, (const MethodInfo *)charaData);
  SubLayer = ScriptSubLayerManager__GetSubLayer(this, layerKey, 1, v7);
  if ( !SubLayer )
    sub_1B64324(0LL);
  ScriptSubLayer__RegistCharaData(SubLayer, charaData, v9);
}


void __fastcall ScriptSubLayerManager__RemoveCharaData(
        ScriptSubLayerManager_o *this,
        ScriptCharaData_o *charaData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *listSubLayer; // x0
  int32_t v7; // w21
  const MethodInfo *v8; // x2

  if ( (byte_49FE07A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Count__, charaData);
    sub_1B640C8(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__, v5);
    byte_49FE07A = 1;
  }
  listSubLayer = (System_Collections_Generic_List_object__o *)this->fields.listSubLayer;
  if ( !listSubLayer )
LABEL_8:
    sub_1B64324(listSubLayer);
  v7 = 0;
  while ( v7 < listSubLayer->fields._size )
  {
    listSubLayer = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  listSubLayer,
                                                                  v7,
                                                                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
    if ( listSubLayer )
    {
      ScriptSubLayer__RemoveCharaData((ScriptSubLayer_o *)listSubLayer, charaData, v8);
      listSubLayer = (System_Collections_Generic_List_object__o *)this->fields.listSubLayer;
      ++v7;
      if ( listSubLayer )
        continue;
    }
    goto LABEL_8;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSubLayerManager__RenderingSubLayer(ScriptSubLayerManager_o *this, const MethodInfo *method)
{
  ScriptSubLayerManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ScriptSubLayer__o *listSubLayer; // x8
  float v8; // s0
  float v9; // s1
  float v10; // s2
  float v11; // s8
  float v12; // s9
  float v13; // s12
  float v14; // s0
  float v15; // s1
  float v16; // s2
  float v17; // s10
  float v18; // s11
  float v19; // s13
  int32_t v20; // w20
  int m_CancellationTokenSource; // w8
  const MethodInfo *v22; // x1
  int32_t v23; // w20
  int32_t v24; // w21
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x1
  ScriptSubLayerManager_o *v27; // x21
  int v28; // s0
  ScriptSubLayerManager_o *v31; // x21
  int v32; // s0
  UnityEngine_Camera_o *subLayerCamera; // x21
  UnityEngine_Camera_o *v36; // x21
  UnityEngine_Object_o *klass; // x21
  ScriptSubLayerManager_o *v38; // x21
  ScriptSubLayerManager_c *v39; // x22
  UnityEngine_Texture_o *targetTexture; // x23
  UnityEngine_RenderTexture_o *v41; // x0
  int32_t v42; // w20
  const MethodInfo *v43; // x1
  UnityEngine_RenderTextureDescriptor_o v44; // [xsp+0h] [xbp-F0h] BYREF
  UnityEngine_RenderTextureDescriptor_o v45; // [xsp+38h] [xbp-B8h] BYREF
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v48; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v49; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_49FE07F & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Graphics_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Count__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    this = (ScriptSubLayerManager_o *)sub_1B640C8(&StringLiteral_16110/*"_Color"*/, v6);
    byte_49FE07F = 1;
  }
  listSubLayer = v2->fields.listSubLayer;
  if ( !listSubLayer )
    goto LABEL_88;
  if ( listSubLayer->fields._size >= 1 )
  {
    this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
    if ( !this )
      goto LABEL_88;
    this = (ScriptSubLayerManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_88;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (ScriptSubLayerManager_o *)v2->fields.stretchObj;
    if ( !this )
      goto LABEL_88;
    this = (ScriptSubLayerManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !this )
      goto LABEL_88;
    *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    this = (ScriptSubLayerManager_o *)v2->fields.stretchObj;
    if ( !this )
      goto LABEL_88;
    v11 = v8;
    v12 = v9;
    v13 = v10;
    this = (ScriptSubLayerManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !this )
      goto LABEL_88;
    *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0LL);
    this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
    if ( !this )
      goto LABEL_88;
    v17 = v14;
    v18 = v15;
    v19 = v16;
    v20 = 0;
    while ( 1 )
    {
      m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
      if ( v20 >= m_CancellationTokenSource )
        break;
      this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)this,
                                          v20,
                                          (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
      if ( this )
      {
        ScriptSubLayer__RemoveInvalidCharaData((ScriptSubLayer_o *)this, v22);
        this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
        ++v20;
        if ( this )
          continue;
      }
      goto LABEL_88;
    }
    if ( m_CancellationTokenSource >= 1 )
    {
      v23 = 0;
      while ( 1 )
      {
        this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)this,
                                            v23,
                                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
        if ( !this )
          break;
        if ( LOBYTE(this->fields.subLayerInstanceRoot) )
        {
          this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
          if ( !this )
            break;
          v24 = 0;
          while ( v24 < SLODWORD(this->fields.m_CancellationTokenSource) )
          {
            if ( v23 != v24 )
            {
              this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)this,
                                                  v24,
                                                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
              if ( !this )
                goto LABEL_88;
              ScriptSubLayer__SetLayer((ScriptSubLayer_o *)this, -1, v25);
              this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
            }
            ++v24;
            if ( !this )
              goto LABEL_88;
          }
          this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v23,
                                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
          if ( !this )
            break;
          ScriptSubLayer__SetLayerActive((ScriptSubLayer_o *)this, v26);
          if ( v2->fields.isInvalidStretch )
          {
            this = (ScriptSubLayerManager_o *)v2->fields.stretchObj;
            if ( !this )
              break;
            this = (ScriptSubLayerManager_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)this,
                                                0LL);
            if ( !v2->fields.listSubLayer )
              break;
            v27 = this;
            this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)v2->fields.listSubLayer,
                                                v23,
                                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
            if ( !this )
              break;
            this = (ScriptSubLayerManager_o *)this[1].fields.subLayerInstanceRoot;
            if ( !this )
              break;
            this = (ScriptSubLayerManager_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
            if ( !this )
              break;
            this = (ScriptSubLayerManager_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)this,
                                                0LL);
            if ( !this )
              break;
            *(UnityEngine_Vector3_o *)&v28 = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)this,
                                               0LL);
            if ( !v27 )
              break;
            UnityEngine_Transform__set_localPosition(
              (UnityEngine_Transform_o *)v27,
              *(UnityEngine_Vector3_o *)&v28,
              0LL);
            this = (ScriptSubLayerManager_o *)v2->fields.stretchObj;
            if ( !this )
              break;
            this = (ScriptSubLayerManager_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)this,
                                                0LL);
            if ( !v2->fields.listSubLayer )
              break;
            v31 = this;
            this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)v2->fields.listSubLayer,
                                                v23,
                                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
            if ( !this )
              break;
            this = (ScriptSubLayerManager_o *)this[1].fields.subLayerInstanceRoot;
            if ( !this )
              break;
            this = (ScriptSubLayerManager_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
            if ( !this )
              break;
            this = (ScriptSubLayerManager_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)this,
                                                0LL);
            if ( !this )
              break;
            *(UnityEngine_Vector3_o *)&v32 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0LL);
            if ( !v31 )
              break;
            UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v31, *(UnityEngine_Vector3_o *)&v32, 0LL);
          }
          this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
          if ( !this )
            break;
          subLayerCamera = v2->fields.subLayerCamera;
          this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v23,
                                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
          if ( !this )
            break;
          if ( !subLayerCamera )
            break;
          v48.fields.b = *((float *)&this->fields.subLayerPrefab + 1);
          v48.fields.a = *(float *)&this->fields.stretchObj;
          v48.fields.r = *((float *)&this->fields.subLayerInstanceRoot + 1);
          v48.fields.g = *(float *)&this->fields.subLayerPrefab;
          UnityEngine_Camera__set_backgroundColor(subLayerCamera, v48, 0LL);
          this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
          if ( !this )
            break;
          v36 = v2->fields.subLayerCamera;
          this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v23,
                                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
          if ( !this )
            break;
          if ( !v36 )
            break;
          UnityEngine_Camera__set_targetTexture(v36, (UnityEngine_RenderTexture_o *)this->fields.listSubLayer, 0LL);
          this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
          if ( !this )
            break;
          UnityEngine_Camera__Render((UnityEngine_Camera_o *)this, 0LL);
          this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
          if ( !this )
            break;
          this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v23,
                                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
          if ( !this )
            break;
          klass = (UnityEngine_Object_o *)this[1].klass;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
          {
            this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
            if ( !this )
              break;
            this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)this,
                                                v23,
                                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
            if ( !this )
              break;
            this = (ScriptSubLayerManager_o *)this->fields.listSubLayer;
            if ( !this )
              break;
            UnityEngine_RenderTexture__get_descriptor(&v45, (UnityEngine_RenderTexture_o *)this, 0LL);
            v44 = v45;
            this = (ScriptSubLayerManager_o *)UnityEngine_RenderTexture__GetTemporary(&v44, 0LL);
            if ( !v2->fields.listSubLayer )
              break;
            v38 = this;
            this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)v2->fields.listSubLayer,
                                                v23,
                                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
            if ( !this )
              break;
            v39 = this[1].klass;
            if ( !v39 )
              break;
            v49.fields.r = 1.0;
            v49.fields.g = 1.0;
            v49.fields.b = 1.0;
            v49.fields.a = 1.0;
            UnityEngine_Material__SetColor(
              (UnityEngine_Material_o *)this[1].klass,
              (System_String_o *)StringLiteral_16110/*"_Color"*/,
              v49,
              0LL);
            this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
            if ( !this )
              break;
            targetTexture = (UnityEngine_Texture_o *)UnityEngine_Camera__get_targetTexture(
                                                       (UnityEngine_Camera_o *)this,
                                                       0LL);
            if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
            UnityEngine_Graphics__Blit_68973784(
              targetTexture,
              (UnityEngine_RenderTexture_o *)v38,
              (UnityEngine_Material_o *)v39,
              0LL);
            this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
            if ( !this )
              break;
            v41 = UnityEngine_Camera__get_targetTexture((UnityEngine_Camera_o *)this, 0LL);
            UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)v38, v41, 0LL);
            UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)v38, 0LL);
          }
        }
        this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
        if ( !this )
          break;
        m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
        if ( ++v23 >= m_CancellationTokenSource )
          goto LABEL_71;
      }
LABEL_88:
      sub_1B64324(this);
    }
LABEL_71:
    if ( m_CancellationTokenSource >= 1 )
    {
      v42 = 0;
      do
      {
        this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)this,
                                            v42,
                                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
        if ( !this )
          goto LABEL_88;
        ScriptSubLayer__SetLayerActive((ScriptSubLayer_o *)this, v43);
        this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
        if ( !this )
          goto LABEL_88;
      }
      while ( ++v42 < SLODWORD(this->fields.m_CancellationTokenSource) );
    }
    if ( v2->fields.isInvalidStretch )
    {
      this = (ScriptSubLayerManager_o *)v2->fields.stretchObj;
      if ( !this )
        goto LABEL_88;
      this = (ScriptSubLayerManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( !this )
        goto LABEL_88;
      v46.fields.x = v11;
      v46.fields.y = v12;
      v46.fields.z = v13;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v46, 0LL);
      this = (ScriptSubLayerManager_o *)v2->fields.stretchObj;
      if ( !this )
        goto LABEL_88;
      this = (ScriptSubLayerManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( !this )
        goto LABEL_88;
      v47.fields.x = v17;
      v47.fields.y = v18;
      v47.fields.z = v19;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v47, 0LL);
    }
    this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
    if ( !this )
      goto LABEL_88;
    this = (ScriptSubLayerManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_88;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
    if ( !this )
      goto LABEL_88;
    UnityEngine_Camera__set_targetTexture((UnityEngine_Camera_o *)this, 0LL, 0LL);
    this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
    if ( !this )
      goto LABEL_88;
    v50.fields.r = 0.0;
    v50.fields.g = 0.0;
    v50.fields.b = 0.0;
    v50.fields.a = 0.0;
    UnityEngine_Camera__set_backgroundColor((UnityEngine_Camera_o *)this, v50, 0LL);
  }
}


void __fastcall ScriptSubLayerManager__SetDepth(
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
    sub_1B64324(0LL);
  ScriptSubLayer__SetDepth(SubLayer, depth, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSubLayerManager__SetSubStretch(
        ScriptSubLayerManager_o *this,
        bool invalidStretch,
        const MethodInfo *method)
{
  ScriptSubLayerManager_o *v3; // x19
  bool v4; // w20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_ScriptSubLayer__o *listSubLayer; // x8
  UnityEngine_Object_o *stretchObj; // x20
  const MethodInfo *v12; // x2
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-38h] BYREF

  v3 = this;
  v4 = invalidStretch;
  if ( (byte_49FE07B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__Dispose__, invalidStretch);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ScriptSubLayer__GetEnumerator__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Count__, v8);
    this = (ScriptSubLayerManager_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    byte_49FE07B = 1;
  }
  memset(&v13, 0, sizeof(v13));
  listSubLayer = v3->fields.listSubLayer;
  v3->fields.isInvalidStretch = v4;
  if ( !listSubLayer )
    goto LABEL_16;
  if ( listSubLayer->fields._size >= 1 )
  {
    stretchObj = (UnityEngine_Object_o *)v3->fields.stretchObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(stretchObj, 0LL, 0LL) )
    {
      this = (ScriptSubLayerManager_o *)v3->fields.listSubLayer;
      if ( this )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v13,
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ScriptSubLayer__GetEnumerator__);
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v13,
                  (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__MoveNext__) )
        {
          if ( !v13.fields._current )
            sub_1B64324(0LL);
          ScriptSubLayer__SetStretchObj((ScriptSubLayer_o *)v13.fields._current, v3->fields.stretchObj, v12);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v13,
          (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__Dispose__);
        return;
      }
LABEL_16:
      sub_1B64324(this);
    }
  }
}


void __fastcall ScriptSubLayerManager__StartSubLayer(
        ScriptSubLayerManager_o *this,
        UnityEngine_Camera_o *targetCamera,
        int32_t count,
        const MethodInfo *method)
{
  __int64 clearFlags; // x0
  UnityEngine_Camera_o *subLayerCamera; // x22
  float depth; // s0
  UnityEngine_Camera_o *v10; // x22
  UnityEngine_Camera_o *v11; // x22
  float orthographicSize; // s0
  const MethodInfo *v13; // x2

  ScriptSubLayerManager__Init(this, (const MethodInfo *)targetCamera);
  if ( !targetCamera )
    goto LABEL_6;
  subLayerCamera = this->fields.subLayerCamera;
  depth = UnityEngine_Camera__get_depth(targetCamera, 0LL);
  if ( !subLayerCamera
    || (UnityEngine_Camera__set_depth(subLayerCamera, depth, 0LL),
        v10 = this->fields.subLayerCamera,
        clearFlags = UnityEngine_Camera__get_clearFlags(targetCamera, 0LL),
        !v10)
    || (UnityEngine_Camera__set_clearFlags(v10, clearFlags, 0LL),
        v11 = this->fields.subLayerCamera,
        orthographicSize = UnityEngine_Camera__get_orthographicSize(targetCamera, 0LL),
        !v11) )
  {
LABEL_6:
    sub_1B64324(clearFlags);
  }
  UnityEngine_Camera__set_orthographicSize(v11, orthographicSize, 0LL);
  ScriptSubLayerManager__CreateSubLayer(this, count, v13);
}


void __fastcall ScriptSubLayerManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FE081 & 1) == 0 )
  {
    sub_1B640C8(&ScriptSubLayerManager___c_TypeInfo, v1);
    byte_49FE081 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ScriptSubLayerManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ScriptSubLayerManager___c_TypeInfo->static_fields->__9 = (struct ScriptSubLayerManager___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ScriptSubLayerManager___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
}


void __fastcall ScriptSubLayerManager___c___ctor(ScriptSubLayerManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ScriptSubLayerManager___c___GetSubLayer_b__21_1(
        ScriptSubLayerManager___c_o *this,
        ScriptSubLayer_o *l,
        const MethodInfo *method)
{
  if ( !l )
    sub_1B64324(this);
  return System_String__IsNullOrEmpty(l->fields._layerKey_k__BackingField, 0LL);
}


void __fastcall ScriptSubLayerManager___c__DisplayClass21_0___ctor(
        ScriptSubLayerManager___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ScriptSubLayerManager___c__DisplayClass21_0___GetSubLayer_b__0(
        ScriptSubLayerManager___c__DisplayClass21_0_o *this,
        ScriptSubLayer_o *l,
        const MethodInfo *method)
{
  if ( !l )
    sub_1B64324(this);
  return System_String__op_Equality(l->fields._layerKey_k__BackingField, this->fields.layerKey, 0LL);
}