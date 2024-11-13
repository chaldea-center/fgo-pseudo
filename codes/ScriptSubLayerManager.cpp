void __fastcall ScriptSubLayerManager___ctor(ScriptSubLayerManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B17ED8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptSubLayer___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_ScriptSubLayer__TypeInfo, v5, v6);
    byte_4B17ED8 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_ScriptSubLayer__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ScriptSubLayer___ctor__);
  this->fields.listSubLayer = (struct System_Collections_Generic_List_ScriptSubLayer__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.listSubLayer, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// attributes: thunk
void __fastcall ScriptSubLayerManager__Awake(ScriptSubLayerManager_o *this, const MethodInfo *method)
{
  ScriptSubLayerManager__Init(this, method);
}


void __fastcall ScriptSubLayerManager__ClearSubLayer(ScriptSubLayerManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_object__o *listSubLayer; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_ScriptSubLayer__o *v18; // x8
  int32_t size; // w2
  int v20; // w9
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B17ED5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptSubLayer__Clear__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptSubLayer__GetEnumerator__, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    byte_4B17ED5 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  listSubLayer = (System_Collections_Generic_List_object__o *)this->fields.listSubLayer;
  if ( !listSubLayer )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    listSubLayer,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ScriptSubLayer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__MoveNext__) )
  {
    if ( !v21.fields._current )
      sub_1BCAA3C(0LL, v15);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v21.fields._current,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__Dispose__);
  v18 = this->fields.listSubLayer;
  if ( !v18 )
LABEL_15:
    sub_1BCAA3C(listSubLayer, method);
  size = v18->fields._size;
  v20 = v18->fields._version + 1;
  v18->fields._size = 0;
  v18->fields._version = v20;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v18->fields._items, 0, size, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSubLayerManager__CreateSubLayer(
        ScriptSubLayerManager_o *this,
        int32_t count,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_GameObject_o *Object; // x0
  const MethodInfo *v8; // x1
  UnityEngine_GameObject_o *v9; // x21
  Il2CppObject *v10; // x21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  __int64 v17; // x8
  _QWORD *v18; // x9
  __int64 klass_low; // x10
  __int64 v20; // x8

  v3 = count;
  if ( (byte_4B17ED4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ScriptSubLayer___, *(_QWORD *)&count, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptSubLayer__Add__, v5, v6);
    byte_4B17ED4 = 1;
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
      v9 = Object;
      UnityEngine_GameObject__SetActive(Object, 1, 0LL);
      Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             v9,
                                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ScriptSubLayer___);
      if ( !Object
        || (v10 = (Il2CppObject *)Object,
            ScriptSubLayer__StartSubLayer((ScriptSubLayer_o *)Object, v8),
            (Object = (UnityEngine_GameObject_o *)this->fields.listSubLayer) == 0LL)
        || (v17 = *(_QWORD *)&Object->fields.m_CachedPtr,
            v18 = Method_System_Collections_Generic_List_ScriptSubLayer__Add__,
            ++HIDWORD(Object[1].klass),
            !v17) )
      {
LABEL_13:
        sub_1BCAA3C(Object, v8);
      }
      klass_low = SLODWORD(Object[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(v17 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Object,
          v10,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = v17 + 8 * klass_low;
        LODWORD(Object[1].klass) = klass_low + 1;
        *(_QWORD *)(v20 + 32) = v10;
        sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 32), (int64_t)v10, v11, v12, v13, v14, v15, v16);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x23
  char *v22; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t *v30; // x19
  __int64 v31; // x1
  int64_t v32; // x2
  __int64 v33; // x3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x1
  System_Collections_Generic_List_object__o *listSubLayer; // x22
  System_Predicate_object__o *v40; // x24
  __int64 v41; // x1
  Il2CppObject *v42; // x22
  __int64 v43; // x2
  __int64 v44; // x3
  System_Collections_Generic_List_object__o *v45; // x20
  System_Predicate_object__o *v46; // x21
  Il2CppObject *v47; // x22
  struct ScriptSubLayerManager___c_StaticFields *static_fields; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  int64_t v61; // x1

  if ( (byte_4B17ED6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptSubLayer__Find__, layerKey, isRegist);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Predicate_ScriptSubLayer__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_ScriptSubLayerManager___c__GetSubLayer_b__21_1__, v11, v12);
    sub_1BCA7E0(&Method_ScriptSubLayerManager___c__DisplayClass21_0__GetSubLayer_b__0__, v13, v14);
    sub_1BCA7E0(&ScriptSubLayerManager___c__DisplayClass21_0_TypeInfo, v15, v16);
    sub_1BCA7E0(&ScriptSubLayerManager___c_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_441/*"#A"*/, v19, v20);
    byte_4B17ED6 = 1;
  }
  v21 = sub_1BCAA2C(ScriptSubLayerManager___c__DisplayClass21_0_TypeInfo, layerKey, isRegist, method);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_21;
  *(_QWORD *)(v21 + 16) = layerKey;
  v30 = (int64_t *)(v21 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 16), (int64_t)layerKey, v24, v25, v26, v27, v28, v29);
  if ( System_String__IsNullOrEmpty(*(System_String_o **)(v21 + 16), 0LL) )
  {
    v38 = StringLiteral_441/*"#A"*/;
    *v30 = StringLiteral_441/*"#A"*/;
    sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 16), v38, v32, v33, v34, v35, v36, v37);
  }
  listSubLayer = (System_Collections_Generic_List_object__o *)this->fields.listSubLayer;
  v40 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_ScriptSubLayer__TypeInfo, v31, v32, v33);
  System_Predicate_object____ctor(
    v40,
    (Il2CppObject *)v21,
    Method_ScriptSubLayerManager___c__DisplayClass21_0__GetSubLayer_b__0__,
    0LL);
  if ( !listSubLayer )
    goto LABEL_21;
  v42 = System_Collections_Generic_List_object___Find(
          listSubLayer,
          (System_Predicate_T__o *)v40,
          (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_ScriptSubLayer__Find__);
  if ( isRegist )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v42, 0LL, 0LL) )
    {
      v45 = (System_Collections_Generic_List_object__o *)this->fields.listSubLayer;
      v22 = (char *)ScriptSubLayerManager___c_TypeInfo;
      if ( !ScriptSubLayerManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptSubLayerManager___c_TypeInfo, v23);
        v22 = (char *)ScriptSubLayerManager___c_TypeInfo;
      }
      v46 = *(System_Predicate_object__o **)(*((_QWORD *)v22 + 23) + 8LL);
      if ( !v46 )
      {
        if ( !*((_DWORD *)v22 + 56) )
        {
          j_il2cpp_runtime_class_init_0(v22, v23);
          v22 = (char *)ScriptSubLayerManager___c_TypeInfo;
        }
        v47 = (Il2CppObject *)**((_QWORD **)v22 + 23);
        v46 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_ScriptSubLayer__TypeInfo, v23, v43, v44);
        System_Predicate_object____ctor(v46, v47, Method_ScriptSubLayerManager___c__GetSubLayer_b__21_1__, 0LL);
        static_fields = ScriptSubLayerManager___c_TypeInfo->static_fields;
        static_fields->__9__21_1 = (struct System_Predicate_ScriptSubLayer__o *)v46;
        sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__21_1, (int64_t)v46, v49, v50, v51, v52, v53, v54);
      }
      if ( v45 )
      {
        v22 = (char *)System_Collections_Generic_List_object___Find(
                        v45,
                        (System_Predicate_T__o *)v46,
                        (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_ScriptSubLayer__Find__);
        if ( v22 )
        {
          v61 = *v30;
          v42 = (Il2CppObject *)v22;
          *((_QWORD *)v22 + 4) = *v30;
          sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 32), v61, v55, v56, v57, v58, v59, v60);
          return (ScriptSubLayer_o *)v42;
        }
      }
LABEL_21:
      sub_1BCAA3C(v22, v23);
    }
  }
  return (ScriptSubLayer_o *)v42;
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
    sub_1BCAA3C(subLayerCamera, method);
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
    sub_1BCAA3C(0LL, v9);
  ScriptSubLayer__RegistCharaData(SubLayer, charaData, v10);
}


void __fastcall ScriptSubLayerManager__RemoveCharaData(
        ScriptSubLayerManager_o *this,
        ScriptCharaData_o *charaData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *listSubLayer; // x0
  int32_t v8; // w21
  const MethodInfo *v9; // x2

  if ( (byte_4B17ED2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Count__, charaData, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__, v5, v6);
    byte_4B17ED2 = 1;
  }
  listSubLayer = (System_Collections_Generic_List_object__o *)this->fields.listSubLayer;
  if ( !listSubLayer )
LABEL_8:
    sub_1BCAA3C(listSubLayer, charaData);
  v8 = 0;
  while ( v8 < listSubLayer->fields._size )
  {
    listSubLayer = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  listSubLayer,
                                                                  v8,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
    if ( listSubLayer )
    {
      ScriptSubLayer__RemoveCharaData((ScriptSubLayer_o *)listSubLayer, charaData, v9);
      listSubLayer = (System_Collections_Generic_List_object__o *)this->fields.listSubLayer;
      ++v8;
      if ( listSubLayer )
        continue;
    }
    goto LABEL_8;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSubLayerManager__RenderingSubLayer(ScriptSubLayerManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ScriptSubLayerManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct System_Collections_Generic_List_ScriptSubLayer__o *listSubLayer; // x8
  float v13; // s0
  float v14; // s1
  float v15; // s2
  float v16; // s8
  float v17; // s9
  float v18; // s12
  float v19; // s0
  float v20; // s1
  float v21; // s2
  float v22; // s10
  float v23; // s11
  float v24; // s13
  int32_t v25; // w20
  int m_CancellationTokenSource; // w8
  int32_t v27; // w20
  int32_t v28; // w21
  const MethodInfo *v29; // x2
  ScriptSubLayerManager_o *v30; // x21
  int v31; // s0
  ScriptSubLayerManager_o *v34; // x21
  int v35; // s0
  UnityEngine_Camera_o *subLayerCamera; // x21
  UnityEngine_Camera_o *v39; // x21
  UnityEngine_Object_o *klass; // x21
  ScriptSubLayerManager_o *v41; // x21
  ScriptSubLayerManager_c *v42; // x22
  __int64 v43; // x1
  UnityEngine_Texture_o *targetTexture; // x23
  UnityEngine_RenderTexture_o *v45; // x0
  int32_t v46; // w20
  UnityEngine_RenderTextureDescriptor_o v47; // [xsp+0h] [xbp-F0h] BYREF
  UnityEngine_RenderTextureDescriptor_o v48; // [xsp+38h] [xbp-B8h] BYREF
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v51; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = this;
  if ( (byte_4B17ED7 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Graphics_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    this = (ScriptSubLayerManager_o *)sub_1BCA7E0(&StringLiteral_16346/*"_Color"*/, v10, v11);
    byte_4B17ED7 = 1;
  }
  listSubLayer = v3->fields.listSubLayer;
  if ( !listSubLayer )
    goto LABEL_88;
  if ( listSubLayer->fields._size >= 1 )
  {
    this = (ScriptSubLayerManager_o *)v3->fields.subLayerCamera;
    if ( !this )
      goto LABEL_88;
    this = (ScriptSubLayerManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_88;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (ScriptSubLayerManager_o *)v3->fields.stretchObj;
    if ( !this )
      goto LABEL_88;
    this = (ScriptSubLayerManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !this )
      goto LABEL_88;
    *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    this = (ScriptSubLayerManager_o *)v3->fields.stretchObj;
    if ( !this )
      goto LABEL_88;
    v16 = v13;
    v17 = v14;
    v18 = v15;
    this = (ScriptSubLayerManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !this )
      goto LABEL_88;
    *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0LL);
    this = (ScriptSubLayerManager_o *)v3->fields.listSubLayer;
    if ( !this )
      goto LABEL_88;
    v22 = v19;
    v23 = v20;
    v24 = v21;
    v25 = 0;
    while ( 1 )
    {
      m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
      if ( v25 >= m_CancellationTokenSource )
        break;
      this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)this,
                                          v25,
                                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
      if ( this )
      {
        ScriptSubLayer__RemoveInvalidCharaData((ScriptSubLayer_o *)this, method);
        this = (ScriptSubLayerManager_o *)v3->fields.listSubLayer;
        ++v25;
        if ( this )
          continue;
      }
      goto LABEL_88;
    }
    if ( m_CancellationTokenSource >= 1 )
    {
      v27 = 0;
      while ( 1 )
      {
        this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)this,
                                            v27,
                                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
        if ( !this )
          break;
        if ( LOBYTE(this->fields.subLayerInstanceRoot) )
        {
          this = (ScriptSubLayerManager_o *)v3->fields.listSubLayer;
          if ( !this )
            break;
          v28 = 0;
          while ( v28 < SLODWORD(this->fields.m_CancellationTokenSource) )
          {
            if ( v27 != v28 )
            {
              this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)this,
                                                  v28,
                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
              if ( !this )
                goto LABEL_88;
              ScriptSubLayer__SetLayer((ScriptSubLayer_o *)this, -1, v29);
              this = (ScriptSubLayerManager_o *)v3->fields.listSubLayer;
            }
            ++v28;
            if ( !this )
              goto LABEL_88;
          }
          this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v27,
                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
          if ( !this )
            break;
          ScriptSubLayer__SetLayerActive((ScriptSubLayer_o *)this, method);
          if ( v3->fields.isInvalidStretch )
          {
            this = (ScriptSubLayerManager_o *)v3->fields.stretchObj;
            if ( !this )
              break;
            this = (ScriptSubLayerManager_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)this,
                                                0LL);
            if ( !v3->fields.listSubLayer )
              break;
            v30 = this;
            this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)v3->fields.listSubLayer,
                                                v27,
                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
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
            *(UnityEngine_Vector3_o *)&v31 = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)this,
                                               0LL);
            if ( !v30 )
              break;
            UnityEngine_Transform__set_localPosition(
              (UnityEngine_Transform_o *)v30,
              *(UnityEngine_Vector3_o *)&v31,
              0LL);
            this = (ScriptSubLayerManager_o *)v3->fields.stretchObj;
            if ( !this )
              break;
            this = (ScriptSubLayerManager_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)this,
                                                0LL);
            if ( !v3->fields.listSubLayer )
              break;
            v34 = this;
            this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)v3->fields.listSubLayer,
                                                v27,
                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
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
            *(UnityEngine_Vector3_o *)&v35 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0LL);
            if ( !v34 )
              break;
            UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v34, *(UnityEngine_Vector3_o *)&v35, 0LL);
          }
          this = (ScriptSubLayerManager_o *)v3->fields.listSubLayer;
          if ( !this )
            break;
          subLayerCamera = v3->fields.subLayerCamera;
          this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v27,
                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
          if ( !this )
            break;
          if ( !subLayerCamera )
            break;
          v51.fields.b = *((float *)&this->fields.subLayerPrefab + 1);
          v51.fields.a = *(float *)&this->fields.stretchObj;
          v51.fields.r = *((float *)&this->fields.subLayerInstanceRoot + 1);
          v51.fields.g = *(float *)&this->fields.subLayerPrefab;
          UnityEngine_Camera__set_backgroundColor(subLayerCamera, v51, 0LL);
          this = (ScriptSubLayerManager_o *)v3->fields.listSubLayer;
          if ( !this )
            break;
          v39 = v3->fields.subLayerCamera;
          this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v27,
                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
          if ( !this )
            break;
          if ( !v39 )
            break;
          UnityEngine_Camera__set_targetTexture(v39, (UnityEngine_RenderTexture_o *)this->fields.listSubLayer, 0LL);
          this = (ScriptSubLayerManager_o *)v3->fields.subLayerCamera;
          if ( !this )
            break;
          UnityEngine_Camera__Render((UnityEngine_Camera_o *)this, 0LL);
          this = (ScriptSubLayerManager_o *)v3->fields.listSubLayer;
          if ( !this )
            break;
          this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v27,
                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
          if ( !this )
            break;
          klass = (UnityEngine_Object_o *)this[1].klass;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
          if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
          {
            this = (ScriptSubLayerManager_o *)v3->fields.listSubLayer;
            if ( !this )
              break;
            this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)this,
                                                v27,
                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
            if ( !this )
              break;
            this = (ScriptSubLayerManager_o *)this->fields.listSubLayer;
            if ( !this )
              break;
            UnityEngine_RenderTexture__get_descriptor(&v48, (UnityEngine_RenderTexture_o *)this, 0LL);
            v47 = v48;
            this = (ScriptSubLayerManager_o *)UnityEngine_RenderTexture__GetTemporary(&v47, 0LL);
            if ( !v3->fields.listSubLayer )
              break;
            v41 = this;
            this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)v3->fields.listSubLayer,
                                                v27,
                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
            if ( !this )
              break;
            v42 = this[1].klass;
            if ( !v42 )
              break;
            v52.fields.r = 1.0;
            v52.fields.g = 1.0;
            v52.fields.b = 1.0;
            v52.fields.a = 1.0;
            UnityEngine_Material__SetColor(
              (UnityEngine_Material_o *)this[1].klass,
              (System_String_o *)StringLiteral_16346/*"_Color"*/,
              v52,
              0LL);
            this = (ScriptSubLayerManager_o *)v3->fields.subLayerCamera;
            if ( !this )
              break;
            targetTexture = (UnityEngine_Texture_o *)UnityEngine_Camera__get_targetTexture(
                                                       (UnityEngine_Camera_o *)this,
                                                       0LL);
            if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo, v43);
            UnityEngine_Graphics__Blit_70000204(
              targetTexture,
              (UnityEngine_RenderTexture_o *)v41,
              (UnityEngine_Material_o *)v42,
              0LL);
            this = (ScriptSubLayerManager_o *)v3->fields.subLayerCamera;
            if ( !this )
              break;
            v45 = UnityEngine_Camera__get_targetTexture((UnityEngine_Camera_o *)this, 0LL);
            UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)v41, v45, 0LL);
            UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)v41, 0LL);
          }
        }
        this = (ScriptSubLayerManager_o *)v3->fields.listSubLayer;
        if ( !this )
          break;
        m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
        if ( ++v27 >= m_CancellationTokenSource )
          goto LABEL_71;
      }
LABEL_88:
      sub_1BCAA3C(this, method);
    }
LABEL_71:
    if ( m_CancellationTokenSource >= 1 )
    {
      v46 = 0;
      do
      {
        this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)this,
                                            v46,
                                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
        if ( !this )
          goto LABEL_88;
        ScriptSubLayer__SetLayerActive((ScriptSubLayer_o *)this, method);
        this = (ScriptSubLayerManager_o *)v3->fields.listSubLayer;
        if ( !this )
          goto LABEL_88;
      }
      while ( ++v46 < SLODWORD(this->fields.m_CancellationTokenSource) );
    }
    if ( v3->fields.isInvalidStretch )
    {
      this = (ScriptSubLayerManager_o *)v3->fields.stretchObj;
      if ( !this )
        goto LABEL_88;
      this = (ScriptSubLayerManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( !this )
        goto LABEL_88;
      v49.fields.x = v16;
      v49.fields.y = v17;
      v49.fields.z = v18;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v49, 0LL);
      this = (ScriptSubLayerManager_o *)v3->fields.stretchObj;
      if ( !this )
        goto LABEL_88;
      this = (ScriptSubLayerManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( !this )
        goto LABEL_88;
      v50.fields.x = v22;
      v50.fields.y = v23;
      v50.fields.z = v24;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v50, 0LL);
    }
    this = (ScriptSubLayerManager_o *)v3->fields.subLayerCamera;
    if ( !this )
      goto LABEL_88;
    this = (ScriptSubLayerManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_88;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (ScriptSubLayerManager_o *)v3->fields.subLayerCamera;
    if ( !this )
      goto LABEL_88;
    UnityEngine_Camera__set_targetTexture((UnityEngine_Camera_o *)this, 0LL, 0LL);
    this = (ScriptSubLayerManager_o *)v3->fields.subLayerCamera;
    if ( !this )
      goto LABEL_88;
    v53.fields.r = 0.0;
    v53.fields.g = 0.0;
    v53.fields.b = 0.0;
    v53.fields.a = 0.0;
    UnityEngine_Camera__set_backgroundColor((UnityEngine_Camera_o *)this, v53, 0LL);
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
    sub_1BCAA3C(0LL, v7);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  struct System_Collections_Generic_List_ScriptSubLayer__o *listSubLayer; // x8
  UnityEngine_Object_o *stretchObj; // x20
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-38h] BYREF

  v3 = this;
  v4 = invalidStretch;
  if ( (byte_4B17ED3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__Dispose__, invalidStretch, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptSubLayer__GetEnumerator__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Count__, v11, v12);
    this = (ScriptSubLayerManager_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    byte_4B17ED3 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  listSubLayer = v3->fields.listSubLayer;
  v3->fields.isInvalidStretch = v4;
  if ( !listSubLayer )
    goto LABEL_16;
  if ( listSubLayer->fields._size >= 1 )
  {
    stretchObj = (UnityEngine_Object_o *)v3->fields.stretchObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, invalidStretch);
    if ( !UnityEngine_Object__op_Equality(stretchObj, 0LL, 0LL) )
    {
      this = (ScriptSubLayerManager_o *)v3->fields.listSubLayer;
      if ( this )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v19,
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ScriptSubLayer__GetEnumerator__);
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v19,
                  (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__MoveNext__) )
        {
          if ( !v19.fields._current )
            sub_1BCAA3C(0LL, v17);
          ScriptSubLayer__SetStretchObj((ScriptSubLayer_o *)v19.fields._current, v3->fields.stretchObj, v18);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v19,
          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__Dispose__);
        return;
      }
LABEL_16:
      sub_1BCAA3C(this, invalidStretch);
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
    sub_1BCAA3C(clearFlags, v8);
  }
  UnityEngine_Camera__set_orthographicSize(v12, orthographicSize, 0LL);
  ScriptSubLayerManager__CreateSubLayer(this, count, v14);
}


void __fastcall ScriptSubLayerManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B17ED9 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptSubLayerManager___c_TypeInfo, v1, v2);
    byte_4B17ED9 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ScriptSubLayerManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ScriptSubLayerManager___c_TypeInfo->static_fields->__9 = (struct ScriptSubLayerManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ScriptSubLayerManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  return System_String__op_Equality(l->fields._layerKey_k__BackingField, this->fields.layerKey, 0LL);
}