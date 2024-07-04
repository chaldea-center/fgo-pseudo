void __fastcall ScriptSubLayerManager___ctor(ScriptSubLayerManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_48E43D0 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_ScriptSubLayer___ctor__, method);
    sub_1B00CCC(&System_Collections_Generic_List_ScriptSubLayer__TypeInfo, v3);
    byte_48E43D0 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_ScriptSubLayer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_ScriptSubLayer___ctor__);
  this->fields.listSubLayer = (struct System_Collections_Generic_List_ScriptSubLayer__o *)v4;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.listSubLayer, (int32_t)v4, v5, v6);
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
  __int64 v9; // x1
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_ScriptSubLayer__o *v11; // x8
  int32_t size; // w2
  int v13; // w9
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_48E43CD & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__Dispose__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__MoveNext__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__get_Current__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ScriptSubLayer__Clear__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ScriptSubLayer__GetEnumerator__, v6);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v7);
    byte_48E43CD = 1;
  }
  memset(&v14, 0, sizeof(v14));
  listSubLayer = (System_Collections_Generic_List_object__o *)this->fields.listSubLayer;
  if ( !listSubLayer )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    listSubLayer,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_ScriptSubLayer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v14,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__MoveNext__) )
  {
    if ( !v14.fields._current )
      sub_1B00F28(0LL, v9);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v14.fields._current,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_68077656(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__Dispose__);
  v11 = this->fields.listSubLayer;
  if ( !v11 )
LABEL_15:
    sub_1B00F28(listSubLayer, method);
  size = v11->fields._size;
  v13 = v11->fields._version + 1;
  v11->fields._size = 0;
  v11->fields._version = v13;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v11->fields._items, 0, size, 0LL);
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
  const MethodInfo *v7; // x1
  UnityEngine_GameObject_o *v8; // x21
  Il2CppObject *v9; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x8
  _QWORD *v13; // x9
  __int64 klass_low; // x10
  __int64 v15; // x8

  v3 = count;
  if ( (byte_48E43CC & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_ScriptSubLayer___, *(_QWORD *)&count);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ScriptSubLayer__Add__, v5);
    byte_48E43CC = 1;
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
      v8 = Object;
      UnityEngine_GameObject__SetActive(Object, 1, 0LL);
      Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             v8,
                                             (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_ScriptSubLayer___);
      if ( !Object
        || (v9 = (Il2CppObject *)Object,
            ScriptSubLayer__StartSubLayer((ScriptSubLayer_o *)Object, v7),
            (Object = (UnityEngine_GameObject_o *)this->fields.listSubLayer) == 0LL)
        || (v12 = *(_QWORD *)&Object->fields.m_CachedPtr,
            v13 = Method_System_Collections_Generic_List_ScriptSubLayer__Add__,
            ++HIDWORD(Object[1].klass),
            !v12) )
      {
LABEL_13:
        sub_1B00F28(Object, v7);
      }
      klass_low = SLODWORD(Object[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(v12 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Object,
          v9,
          *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
      }
      else
      {
        v15 = v12 + 8 * klass_low;
        LODWORD(Object[1].klass) = klass_low + 1;
        *(_QWORD *)(v15 + 32) = v9;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v15 + 32), (int32_t)v9, v10, v11);
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
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 *v19; // x19
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w1
  System_Collections_Generic_List_object__o *listSubLayer; // x22
  System_Predicate_object__o *v24; // x24
  Il2CppObject *v25; // x22
  System_Collections_Generic_List_object__o *v26; // x20
  System_Predicate_object__o *v27; // x21
  Il2CppObject *v28; // x22
  struct ScriptSubLayerManager___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3
  __int64 v34; // x1

  if ( (byte_48E43CE & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_ScriptSubLayer__Find__, layerKey);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v7);
    sub_1B00CCC(&System_Predicate_ScriptSubLayer__TypeInfo, v8);
    sub_1B00CCC(&Method_ScriptSubLayerManager___c__GetSubLayer_b__18_1__, v9);
    sub_1B00CCC(&Method_ScriptSubLayerManager___c__DisplayClass18_0__GetSubLayer_b__0__, v10);
    sub_1B00CCC(&ScriptSubLayerManager___c__DisplayClass18_0_TypeInfo, v11);
    sub_1B00CCC(&ScriptSubLayerManager___c_TypeInfo, v12);
    sub_1B00CCC(&StringLiteral_443/*"#A"*/, v13);
    byte_48E43CE = 1;
  }
  v14 = sub_1B00F18(ScriptSubLayerManager___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_21;
  *(_QWORD *)(v14 + 16) = layerKey;
  v19 = (__int64 *)(v14 + 16);
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)layerKey, v17, v18);
  if ( System_String__IsNullOrEmpty(*(System_String_o **)(v14 + 16), 0LL) )
  {
    v22 = StringLiteral_443/*"#A"*/;
    *v19 = StringLiteral_443/*"#A"*/;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v14 + 16), v22, v20, v21);
  }
  listSubLayer = (System_Collections_Generic_List_object__o *)this->fields.listSubLayer;
  v24 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_ScriptSubLayer__TypeInfo);
  System_Predicate_object____ctor(
    v24,
    (Il2CppObject *)v14,
    Method_ScriptSubLayerManager___c__DisplayClass18_0__GetSubLayer_b__0__,
    0LL);
  if ( !listSubLayer )
    goto LABEL_21;
  v25 = System_Collections_Generic_List_object___Find(
          listSubLayer,
          (System_Predicate_T__o *)v24,
          (const MethodInfo_33C2038 *)Method_System_Collections_Generic_List_ScriptSubLayer__Find__);
  if ( isRegist )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v25, 0LL, 0LL) )
    {
      v26 = (System_Collections_Generic_List_object__o *)this->fields.listSubLayer;
      v15 = (char *)ScriptSubLayerManager___c_TypeInfo;
      if ( !ScriptSubLayerManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptSubLayerManager___c_TypeInfo);
        v15 = (char *)ScriptSubLayerManager___c_TypeInfo;
      }
      v27 = *(System_Predicate_object__o **)(*((_QWORD *)v15 + 23) + 8LL);
      if ( !v27 )
      {
        if ( !*((_DWORD *)v15 + 56) )
        {
          j_il2cpp_runtime_class_init_0(v15);
          v15 = (char *)ScriptSubLayerManager___c_TypeInfo;
        }
        v28 = (Il2CppObject *)**((_QWORD **)v15 + 23);
        v27 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_ScriptSubLayer__TypeInfo);
        System_Predicate_object____ctor(v27, v28, Method_ScriptSubLayerManager___c__GetSubLayer_b__18_1__, 0LL);
        static_fields = ScriptSubLayerManager___c_TypeInfo->static_fields;
        static_fields->__9__18_1 = (struct System_Predicate_ScriptSubLayer__o *)v27;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__18_1, (int32_t)v27, v30, v31);
      }
      if ( v26 )
      {
        v15 = (char *)System_Collections_Generic_List_object___Find(
                        v26,
                        (System_Predicate_T__o *)v27,
                        (const MethodInfo_33C2038 *)Method_System_Collections_Generic_List_ScriptSubLayer__Find__);
        if ( v15 )
        {
          v34 = *v19;
          v25 = (Il2CppObject *)v15;
          *((_QWORD *)v15 + 4) = *v19;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v15 + 32), v34, v32, v33);
          return (ScriptSubLayer_o *)v25;
        }
      }
LABEL_21:
      sub_1B00F28(v15, v16);
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
    sub_1B00F28(subLayerCamera, method);
  }
  UnityEngine_Camera__set_targetTexture((UnityEngine_Camera_o *)subLayerCamera, 0LL, 0LL);
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
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  ScriptSubLayerManager__RemoveCharaData(this, charaData, (const MethodInfo *)charaData);
  SubLayer = ScriptSubLayerManager__GetSubLayer(this, layerKey, 1, v7);
  if ( !SubLayer )
    sub_1B00F28(0LL, v9);
  ScriptSubLayer__RegistCharaData(SubLayer, charaData, v10);
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

  if ( (byte_48E43CB & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Count__, charaData);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__, v5);
    byte_48E43CB = 1;
  }
  listSubLayer = (System_Collections_Generic_List_object__o *)this->fields.listSubLayer;
  if ( !listSubLayer )
LABEL_8:
    sub_1B00F28(listSubLayer, charaData);
  v7 = 0;
  while ( v7 < listSubLayer->fields._size )
  {
    listSubLayer = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  listSubLayer,
                                                                  v7,
                                                                  (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
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


void __fastcall ScriptSubLayerManager__RenderingSubLayer(ScriptSubLayerManager_o *this, const MethodInfo *method)
{
  ScriptSubLayerManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ScriptSubLayer__o *listSubLayer; // x8
  int32_t v8; // w20
  int m_CancellationTokenSource; // w8
  int32_t v10; // w20
  int32_t v11; // w21
  const MethodInfo *v12; // x2
  UnityEngine_Camera_o *subLayerCamera; // x21
  UnityEngine_Camera_o *v14; // x21
  UnityEngine_Object_o *v15; // x21
  ScriptSubLayerManager_o *v16; // x21
  UnityEngine_Material_o *v17; // x22
  UnityEngine_Texture_o *targetTexture; // x23
  UnityEngine_RenderTexture_o *v19; // x0
  int32_t v20; // w20
  UnityEngine_RenderTextureDescriptor_o v21; // [xsp+0h] [xbp-C0h] BYREF
  UnityEngine_RenderTextureDescriptor_o v22; // [xsp+38h] [xbp-88h] BYREF
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_48E43CF & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Graphics_TypeInfo, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Count__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__, v4);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v5);
    this = (ScriptSubLayerManager_o *)sub_1B00CCC(&StringLiteral_15947/*"_Color"*/, v6);
    byte_48E43CF = 1;
  }
  listSubLayer = v2->fields.listSubLayer;
  if ( !listSubLayer )
    goto LABEL_62;
  if ( listSubLayer->fields._size >= 1 )
  {
    this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
    if ( !this )
      goto LABEL_62;
    this = (ScriptSubLayerManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_62;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
    if ( !this )
      goto LABEL_62;
    v8 = 0;
    while ( 1 )
    {
      m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
      if ( v8 >= m_CancellationTokenSource )
        break;
      this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)this,
                                          v8,
                                          (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
      if ( this )
      {
        ScriptSubLayer__RemoveInvalidCharaData((ScriptSubLayer_o *)this, method);
        this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
        ++v8;
        if ( this )
          continue;
      }
      goto LABEL_62;
    }
    if ( m_CancellationTokenSource >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)this,
                                            v10,
                                            (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
        if ( !this )
          break;
        if ( LOBYTE(this->fields.subLayerInstanceRoot) )
        {
          this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
          if ( !this )
            break;
          v11 = 0;
          while ( v11 < SLODWORD(this->fields.m_CancellationTokenSource) )
          {
            if ( v10 != v11 )
            {
              this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)this,
                                                  v11,
                                                  (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
              if ( !this )
                goto LABEL_62;
              ScriptSubLayer__SetLayer((ScriptSubLayer_o *)this, -1, v12);
              this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
            }
            ++v11;
            if ( !this )
              goto LABEL_62;
          }
          this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v10,
                                              (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
          if ( !this )
            break;
          ScriptSubLayer__SetLayerActive((ScriptSubLayer_o *)this, method);
          this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
          if ( !this )
            break;
          subLayerCamera = v2->fields.subLayerCamera;
          this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v10,
                                              (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
          if ( !this )
            break;
          if ( !subLayerCamera )
            break;
          v23.fields.b = *((float *)&this->fields.subLayerPrefab + 1);
          v23.fields.a = *(float *)&this->fields.listSubLayer;
          v23.fields.r = *((float *)&this->fields.subLayerInstanceRoot + 1);
          v23.fields.g = *(float *)&this->fields.subLayerPrefab;
          UnityEngine_Camera__set_backgroundColor(subLayerCamera, v23, 0LL);
          this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
          if ( !this )
            break;
          v14 = v2->fields.subLayerCamera;
          this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v10,
                                              (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
          if ( !this )
            break;
          if ( !v14 )
            break;
          UnityEngine_Camera__set_targetTexture(v14, (UnityEngine_RenderTexture_o *)this[1].klass, 0LL);
          this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
          if ( !this )
            break;
          UnityEngine_Camera__Render((UnityEngine_Camera_o *)this, 0LL);
          this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
          if ( !this )
            break;
          this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v10,
                                              (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
          if ( !this )
            break;
          v15 = *(UnityEngine_Object_o **)&this[1].fields.m_CachedPtr;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
          {
            this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
            if ( !this )
              break;
            this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)this,
                                                v10,
                                                (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
            if ( !this )
              break;
            this = (ScriptSubLayerManager_o *)this[1].klass;
            if ( !this )
              break;
            UnityEngine_RenderTexture__get_descriptor(&v22, (UnityEngine_RenderTexture_o *)this, 0LL);
            v21 = v22;
            this = (ScriptSubLayerManager_o *)UnityEngine_RenderTexture__GetTemporary(&v21, 0LL);
            if ( !v2->fields.listSubLayer )
              break;
            v16 = this;
            this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)v2->fields.listSubLayer,
                                                v10,
                                                (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
            if ( !this )
              break;
            v17 = *(UnityEngine_Material_o **)&this[1].fields.m_CachedPtr;
            if ( !v17 )
              break;
            v24.fields.r = 1.0;
            v24.fields.g = 1.0;
            v24.fields.b = 1.0;
            v24.fields.a = 1.0;
            UnityEngine_Material__SetColor(
              *(UnityEngine_Material_o **)&this[1].fields.m_CachedPtr,
              (System_String_o *)StringLiteral_15947/*"_Color"*/,
              v24,
              0LL);
            this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
            if ( !this )
              break;
            targetTexture = (UnityEngine_Texture_o *)UnityEngine_Camera__get_targetTexture(
                                                       (UnityEngine_Camera_o *)this,
                                                       0LL);
            if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
            UnityEngine_Graphics__Blit_67923704(targetTexture, (UnityEngine_RenderTexture_o *)v16, v17, 0LL);
            this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
            if ( !this )
              break;
            v19 = UnityEngine_Camera__get_targetTexture((UnityEngine_Camera_o *)this, 0LL);
            UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)v16, v19, 0LL);
            UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)v16, 0LL);
          }
        }
        this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
        if ( !this )
          break;
        m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
        if ( ++v10 >= m_CancellationTokenSource )
          goto LABEL_51;
      }
LABEL_62:
      sub_1B00F28(this, method);
    }
LABEL_51:
    if ( m_CancellationTokenSource >= 1 )
    {
      v20 = 0;
      do
      {
        this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)this,
                                            v20,
                                            (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
        if ( !this )
          goto LABEL_62;
        ScriptSubLayer__SetLayerActive((ScriptSubLayer_o *)this, method);
        this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
        if ( !this )
          goto LABEL_62;
      }
      while ( ++v20 < SLODWORD(this->fields.m_CancellationTokenSource) );
    }
    this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
    if ( !this )
      goto LABEL_62;
    this = (ScriptSubLayerManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_62;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
    if ( !this )
      goto LABEL_62;
    UnityEngine_Camera__set_targetTexture((UnityEngine_Camera_o *)this, 0LL, 0LL);
    this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
    if ( !this )
      goto LABEL_62;
    v25.fields.r = 0.0;
    v25.fields.g = 0.0;
    v25.fields.b = 0.0;
    v25.fields.a = 0.0;
    UnityEngine_Camera__set_backgroundColor((UnityEngine_Camera_o *)this, v25, 0LL);
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
    sub_1B00F28(0LL, v7);
  ScriptSubLayer__SetDepth(SubLayer, depth, v7);
}


void __fastcall ScriptSubLayerManager__StartSubLayer(
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
  depth = UnityEngine_Camera__get_depth(targetCamera, 0LL);
  if ( !subLayerCamera
    || (UnityEngine_Camera__set_depth(subLayerCamera, depth, 0LL),
        v11 = this->fields.subLayerCamera,
        clearFlags = UnityEngine_Camera__get_clearFlags(targetCamera, 0LL),
        !v11)
    || (UnityEngine_Camera__set_clearFlags(v11, clearFlags, 0LL),
        v12 = this->fields.subLayerCamera,
        orthographicSize = UnityEngine_Camera__get_orthographicSize(targetCamera, 0LL),
        !v12) )
  {
LABEL_6:
    sub_1B00F28(clearFlags, v8);
  }
  UnityEngine_Camera__set_orthographicSize(v12, orthographicSize, 0LL);
  ScriptSubLayerManager__CreateSubLayer(this, count, v14);
}


void __fastcall ScriptSubLayerManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_48E43D1 & 1) == 0 )
  {
    sub_1B00CCC(&ScriptSubLayerManager___c_TypeInfo, v1);
    byte_48E43D1 = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(ScriptSubLayerManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ScriptSubLayerManager___c_TypeInfo->static_fields->__9 = (struct ScriptSubLayerManager___c_o *)v2;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)ScriptSubLayerManager___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall ScriptSubLayerManager___c___ctor(ScriptSubLayerManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ScriptSubLayerManager___c___GetSubLayer_b__18_1(
        ScriptSubLayerManager___c_o *this,
        ScriptSubLayer_o *l,
        const MethodInfo *method)
{
  if ( !l )
    sub_1B00F28(this, 0LL);
  return System_String__IsNullOrEmpty(l->fields._layerKey_k__BackingField, 0LL);
}


void __fastcall ScriptSubLayerManager___c__DisplayClass18_0___ctor(
        ScriptSubLayerManager___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ScriptSubLayerManager___c__DisplayClass18_0___GetSubLayer_b__0(
        ScriptSubLayerManager___c__DisplayClass18_0_o *this,
        ScriptSubLayer_o *l,
        const MethodInfo *method)
{
  if ( !l )
    sub_1B00F28(this, 0LL);
  return System_String__op_Equality(l->fields._layerKey_k__BackingField, this->fields.layerKey, 0LL);
}