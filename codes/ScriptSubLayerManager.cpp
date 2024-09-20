void __fastcall ScriptSubLayerManager___ctor(ScriptSubLayerManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5CE0E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ScriptSubLayer___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ScriptSubLayer__TypeInfo);
    byte_4A5CE0E = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ScriptSubLayer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ScriptSubLayer___ctor__);
  this->fields.listSubLayer = (struct System_Collections_Generic_List_ScriptSubLayer__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.listSubLayer, (int32_t)v3, v4, v5);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// attributes: thunk
void __fastcall ScriptSubLayerManager__Awake(ScriptSubLayerManager_o *this, const MethodInfo *method)
{
  ScriptSubLayerManager__Init(this, method);
}


void __fastcall ScriptSubLayerManager__ClearSubLayer(ScriptSubLayerManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *listSubLayer; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_ScriptSubLayer__o *v6; // x8
  int32_t size; // w2
  int v8; // w9
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5CE0B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ScriptSubLayer__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ScriptSubLayer__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5CE0B = 1;
  }
  memset(&v9, 0, sizeof(v9));
  listSubLayer = (System_Collections_Generic_List_object__o *)this->fields.listSubLayer;
  if ( !listSubLayer )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    listSubLayer,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ScriptSubLayer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__MoveNext__) )
  {
    if ( !v9.fields._current )
      sub_1B8880C(0LL, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v9.fields._current,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__Dispose__);
  v6 = this->fields.listSubLayer;
  if ( !v6 )
LABEL_15:
    sub_1B8880C(listSubLayer, method);
  size = v6->fields._size;
  v8 = v6->fields._version + 1;
  v6->fields._size = 0;
  v6->fields._version = v8;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v6->fields._items, 0, size, 0LL);
}


void __fastcall ScriptSubLayerManager__CreateSubLayer(
        ScriptSubLayerManager_o *this,
        int32_t count,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *Object; // x0
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *v7; // x21
  Il2CppObject *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x8
  _QWORD *v12; // x9
  __int64 klass_low; // x10
  __int64 v14; // x8

  if ( (byte_4A5CE0A & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ScriptSubLayer___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ScriptSubLayer__Add__);
    byte_4A5CE0A = 1;
  }
  if ( count >= 1 )
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
                                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ScriptSubLayer___);
      if ( !Object
        || (v8 = (Il2CppObject *)Object,
            ScriptSubLayer__StartSubLayer((ScriptSubLayer_o *)Object, v6),
            (Object = (UnityEngine_GameObject_o *)this->fields.listSubLayer) == 0LL)
        || (v11 = *(_QWORD *)&Object->fields.m_CachedPtr,
            v12 = Method_System_Collections_Generic_List_ScriptSubLayer__Add__,
            ++HIDWORD(Object[1].klass),
            !v11) )
      {
LABEL_13:
        sub_1B8880C(Object, v6);
      }
      klass_low = SLODWORD(Object[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(v11 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Object,
          v8,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = v11 + 8 * klass_low;
        LODWORD(Object[1].klass) = klass_low + 1;
        *(_QWORD *)(v14 + 32) = v8;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 32), (int32_t)v8, v9, v10);
      }
      --count;
    }
    while ( count );
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
  __int64 v7; // x23
  char *v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 *v12; // x19
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w1
  System_Collections_Generic_List_object__o *listSubLayer; // x22
  System_Predicate_object__o *v17; // x24
  Il2CppObject *v18; // x22
  System_Collections_Generic_List_object__o *v19; // x20
  System_Predicate_object__o *v20; // x21
  Il2CppObject *v21; // x22
  struct ScriptSubLayerManager___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x1

  if ( (byte_4A5CE0C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ScriptSubLayer__Find__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&System_Predicate_ScriptSubLayer__TypeInfo);
    sub_1B885B0(&Method_ScriptSubLayerManager___c__GetSubLayer_b__21_1__);
    sub_1B885B0(&Method_ScriptSubLayerManager___c__DisplayClass21_0__GetSubLayer_b__0__);
    sub_1B885B0(&ScriptSubLayerManager___c__DisplayClass21_0_TypeInfo);
    sub_1B885B0(&ScriptSubLayerManager___c_TypeInfo);
    sub_1B885B0(&StringLiteral_446/*"#A"*/);
    byte_4A5CE0C = 1;
  }
  v7 = sub_1B887FC(ScriptSubLayerManager___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_21;
  *(_QWORD *)(v7 + 16) = layerKey;
  v12 = (__int64 *)(v7 + 16);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)layerKey, v10, v11);
  if ( System_String__IsNullOrEmpty(*(System_String_o **)(v7 + 16), 0LL) )
  {
    v15 = StringLiteral_446/*"#A"*/;
    *v12 = StringLiteral_446/*"#A"*/;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), v15, v13, v14);
  }
  listSubLayer = (System_Collections_Generic_List_object__o *)this->fields.listSubLayer;
  v17 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_ScriptSubLayer__TypeInfo);
  System_Predicate_object____ctor(
    v17,
    (Il2CppObject *)v7,
    Method_ScriptSubLayerManager___c__DisplayClass21_0__GetSubLayer_b__0__,
    0LL);
  if ( !listSubLayer )
    goto LABEL_21;
  v18 = System_Collections_Generic_List_object___Find(
          listSubLayer,
          (System_Predicate_T__o *)v17,
          (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_ScriptSubLayer__Find__);
  if ( isRegist )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v18, 0LL, 0LL) )
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
        v20 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_ScriptSubLayer__TypeInfo);
        System_Predicate_object____ctor(v20, v21, Method_ScriptSubLayerManager___c__GetSubLayer_b__21_1__, 0LL);
        static_fields = ScriptSubLayerManager___c_TypeInfo->static_fields;
        static_fields->__9__21_1 = (struct System_Predicate_ScriptSubLayer__o *)v20;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__21_1, (int32_t)v20, v23, v24);
      }
      if ( v19 )
      {
        v8 = (char *)System_Collections_Generic_List_object___Find(
                       v19,
                       (System_Predicate_T__o *)v20,
                       (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_ScriptSubLayer__Find__);
        if ( v8 )
        {
          v27 = *v12;
          v18 = (Il2CppObject *)v8;
          *((_QWORD *)v8 + 4) = *v12;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v8 + 32), v27, v25, v26);
          return (ScriptSubLayer_o *)v18;
        }
      }
LABEL_21:
      sub_1B8880C(v8, v9);
    }
  }
  return (ScriptSubLayer_o *)v18;
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
    sub_1B8880C(subLayerCamera, method);
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
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  ScriptSubLayerManager__RemoveCharaData(this, charaData, (const MethodInfo *)charaData);
  SubLayer = ScriptSubLayerManager__GetSubLayer(this, layerKey, 1, v7);
  if ( !SubLayer )
    sub_1B8880C(0LL, v9);
  ScriptSubLayer__RegistCharaData(SubLayer, charaData, v10);
}


void __fastcall ScriptSubLayerManager__RemoveCharaData(
        ScriptSubLayerManager_o *this,
        ScriptCharaData_o *charaData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *listSubLayer; // x0
  int32_t v6; // w21
  const MethodInfo *v7; // x2

  if ( (byte_4A5CE08 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
    byte_4A5CE08 = 1;
  }
  listSubLayer = (System_Collections_Generic_List_object__o *)this->fields.listSubLayer;
  if ( !listSubLayer )
LABEL_8:
    sub_1B8880C(listSubLayer, charaData);
  v6 = 0;
  while ( v6 < listSubLayer->fields._size )
  {
    listSubLayer = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  listSubLayer,
                                                                  v6,
                                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSubLayerManager__RenderingSubLayer(ScriptSubLayerManager_o *this, const MethodInfo *method)
{
  ScriptSubLayerManager_o *v2; // x19
  struct System_Collections_Generic_List_ScriptSubLayer__o *listSubLayer; // x8
  float v4; // s0
  float v5; // s1
  float v6; // s2
  float v7; // s8
  float v8; // s9
  float v9; // s12
  float v10; // s0
  float v11; // s1
  float v12; // s2
  float v13; // s10
  float v14; // s11
  float v15; // s13
  int32_t v16; // w20
  int m_CancellationTokenSource; // w8
  int32_t v18; // w20
  int32_t v19; // w21
  const MethodInfo *v20; // x2
  ScriptSubLayerManager_o *v21; // x21
  int v22; // s0
  ScriptSubLayerManager_o *v25; // x21
  int v26; // s0
  UnityEngine_Camera_o *subLayerCamera; // x21
  UnityEngine_Camera_o *v30; // x21
  UnityEngine_Object_o *klass; // x21
  ScriptSubLayerManager_o *v32; // x21
  ScriptSubLayerManager_c *v33; // x22
  UnityEngine_Texture_o *targetTexture; // x23
  UnityEngine_RenderTexture_o *v35; // x0
  int32_t v36; // w20
  UnityEngine_RenderTextureDescriptor_o v37; // [xsp+0h] [xbp-F0h] BYREF
  UnityEngine_RenderTextureDescriptor_o v38; // [xsp+38h] [xbp-B8h] BYREF
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4A5CE0D & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Graphics_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (ScriptSubLayerManager_o *)sub_1B885B0(&StringLiteral_16179/*"_Color"*/);
    byte_4A5CE0D = 1;
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
    *(UnityEngine_Vector3_o *)&v4 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    this = (ScriptSubLayerManager_o *)v2->fields.stretchObj;
    if ( !this )
      goto LABEL_88;
    v7 = v4;
    v8 = v5;
    v9 = v6;
    this = (ScriptSubLayerManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !this )
      goto LABEL_88;
    *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0LL);
    this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
    if ( !this )
      goto LABEL_88;
    v13 = v10;
    v14 = v11;
    v15 = v12;
    v16 = 0;
    while ( 1 )
    {
      m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
      if ( v16 >= m_CancellationTokenSource )
        break;
      this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)this,
                                          v16,
                                          (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
      if ( this )
      {
        ScriptSubLayer__RemoveInvalidCharaData((ScriptSubLayer_o *)this, method);
        this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
        ++v16;
        if ( this )
          continue;
      }
      goto LABEL_88;
    }
    if ( m_CancellationTokenSource >= 1 )
    {
      v18 = 0;
      while ( 1 )
      {
        this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)this,
                                            v18,
                                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
        if ( !this )
          break;
        if ( LOBYTE(this->fields.subLayerInstanceRoot) )
        {
          this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
          if ( !this )
            break;
          v19 = 0;
          while ( v19 < SLODWORD(this->fields.m_CancellationTokenSource) )
          {
            if ( v18 != v19 )
            {
              this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)this,
                                                  v19,
                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
              if ( !this )
                goto LABEL_88;
              ScriptSubLayer__SetLayer((ScriptSubLayer_o *)this, -1, v20);
              this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
            }
            ++v19;
            if ( !this )
              goto LABEL_88;
          }
          this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v18,
                                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
          if ( !this )
            break;
          ScriptSubLayer__SetLayerActive((ScriptSubLayer_o *)this, method);
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
            v21 = this;
            this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)v2->fields.listSubLayer,
                                                v18,
                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
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
            *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)this,
                                               0LL);
            if ( !v21 )
              break;
            UnityEngine_Transform__set_localPosition(
              (UnityEngine_Transform_o *)v21,
              *(UnityEngine_Vector3_o *)&v22,
              0LL);
            this = (ScriptSubLayerManager_o *)v2->fields.stretchObj;
            if ( !this )
              break;
            this = (ScriptSubLayerManager_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)this,
                                                0LL);
            if ( !v2->fields.listSubLayer )
              break;
            v25 = this;
            this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)v2->fields.listSubLayer,
                                                v18,
                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
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
            *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0LL);
            if ( !v25 )
              break;
            UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v25, *(UnityEngine_Vector3_o *)&v26, 0LL);
          }
          this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
          if ( !this )
            break;
          subLayerCamera = v2->fields.subLayerCamera;
          this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v18,
                                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
          if ( !this )
            break;
          if ( !subLayerCamera )
            break;
          v41.fields.b = *((float *)&this->fields.subLayerPrefab + 1);
          v41.fields.a = *(float *)&this->fields.stretchObj;
          v41.fields.r = *((float *)&this->fields.subLayerInstanceRoot + 1);
          v41.fields.g = *(float *)&this->fields.subLayerPrefab;
          UnityEngine_Camera__set_backgroundColor(subLayerCamera, v41, 0LL);
          this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
          if ( !this )
            break;
          v30 = v2->fields.subLayerCamera;
          this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v18,
                                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
          if ( !this )
            break;
          if ( !v30 )
            break;
          UnityEngine_Camera__set_targetTexture(v30, (UnityEngine_RenderTexture_o *)this->fields.listSubLayer, 0LL);
          this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
          if ( !this )
            break;
          UnityEngine_Camera__Render((UnityEngine_Camera_o *)this, 0LL);
          this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
          if ( !this )
            break;
          this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v18,
                                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
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
                                                v18,
                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
            if ( !this )
              break;
            this = (ScriptSubLayerManager_o *)this->fields.listSubLayer;
            if ( !this )
              break;
            UnityEngine_RenderTexture__get_descriptor(&v38, (UnityEngine_RenderTexture_o *)this, 0LL);
            v37 = v38;
            this = (ScriptSubLayerManager_o *)UnityEngine_RenderTexture__GetTemporary(&v37, 0LL);
            if ( !v2->fields.listSubLayer )
              break;
            v32 = this;
            this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)v2->fields.listSubLayer,
                                                v18,
                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
            if ( !this )
              break;
            v33 = this[1].klass;
            if ( !v33 )
              break;
            v42.fields.r = 1.0;
            v42.fields.g = 1.0;
            v42.fields.b = 1.0;
            v42.fields.a = 1.0;
            UnityEngine_Material__SetColor(
              (UnityEngine_Material_o *)this[1].klass,
              (System_String_o *)StringLiteral_16179/*"_Color"*/,
              v42,
              0LL);
            this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
            if ( !this )
              break;
            targetTexture = (UnityEngine_Texture_o *)UnityEngine_Camera__get_targetTexture(
                                                       (UnityEngine_Camera_o *)this,
                                                       0LL);
            if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
            UnityEngine_Graphics__Blit_69305428(
              targetTexture,
              (UnityEngine_RenderTexture_o *)v32,
              (UnityEngine_Material_o *)v33,
              0LL);
            this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
            if ( !this )
              break;
            v35 = UnityEngine_Camera__get_targetTexture((UnityEngine_Camera_o *)this, 0LL);
            UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)v32, v35, 0LL);
            UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)v32, 0LL);
          }
        }
        this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
        if ( !this )
          break;
        m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
        if ( ++v18 >= m_CancellationTokenSource )
          goto LABEL_71;
      }
LABEL_88:
      sub_1B8880C(this, method);
    }
LABEL_71:
    if ( m_CancellationTokenSource >= 1 )
    {
      v36 = 0;
      do
      {
        this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)this,
                                            v36,
                                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
        if ( !this )
          goto LABEL_88;
        ScriptSubLayer__SetLayerActive((ScriptSubLayer_o *)this, method);
        this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
        if ( !this )
          goto LABEL_88;
      }
      while ( ++v36 < SLODWORD(this->fields.m_CancellationTokenSource) );
    }
    if ( v2->fields.isInvalidStretch )
    {
      this = (ScriptSubLayerManager_o *)v2->fields.stretchObj;
      if ( !this )
        goto LABEL_88;
      this = (ScriptSubLayerManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( !this )
        goto LABEL_88;
      v39.fields.x = v7;
      v39.fields.y = v8;
      v39.fields.z = v9;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v39, 0LL);
      this = (ScriptSubLayerManager_o *)v2->fields.stretchObj;
      if ( !this )
        goto LABEL_88;
      this = (ScriptSubLayerManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( !this )
        goto LABEL_88;
      v40.fields.x = v13;
      v40.fields.y = v14;
      v40.fields.z = v15;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v40, 0LL);
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
    v43.fields.r = 0.0;
    v43.fields.g = 0.0;
    v43.fields.b = 0.0;
    v43.fields.a = 0.0;
    UnityEngine_Camera__set_backgroundColor((UnityEngine_Camera_o *)this, v43, 0LL);
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
    sub_1B8880C(0LL, v7);
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
  struct System_Collections_Generic_List_ScriptSubLayer__o *listSubLayer; // x8
  UnityEngine_Object_o *stretchObj; // x20
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  v3 = this;
  v4 = invalidStretch;
  if ( (byte_4A5CE09 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ScriptSubLayer__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Count__);
    this = (ScriptSubLayerManager_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5CE09 = 1;
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
    if ( !UnityEngine_Object__op_Equality(stretchObj, 0LL, 0LL) )
    {
      this = (ScriptSubLayerManager_o *)v3->fields.listSubLayer;
      if ( this )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v9,
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ScriptSubLayer__GetEnumerator__);
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v9,
                  (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__MoveNext__) )
        {
          if ( !v9.fields._current )
            sub_1B8880C(0LL, v7);
          ScriptSubLayer__SetStretchObj((ScriptSubLayer_o *)v9.fields._current, v3->fields.stretchObj, v8);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v9,
          (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__Dispose__);
        return;
      }
LABEL_16:
      sub_1B8880C(this, invalidStretch);
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
    sub_1B8880C(clearFlags, v8);
  }
  UnityEngine_Camera__set_orthographicSize(v12, orthographicSize, 0LL);
  ScriptSubLayerManager__CreateSubLayer(this, count, v14);
}


void __fastcall ScriptSubLayerManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5CE0F & 1) == 0 )
  {
    sub_1B885B0(&ScriptSubLayerManager___c_TypeInfo);
    byte_4A5CE0F = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(ScriptSubLayerManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ScriptSubLayerManager___c_TypeInfo->static_fields->__9 = (struct ScriptSubLayerManager___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)ScriptSubLayerManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
  return System_String__op_Equality(l->fields._layerKey_k__BackingField, this->fields.layerKey, 0LL);
}