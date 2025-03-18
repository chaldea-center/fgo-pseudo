void __fastcall ScriptSubLayerManager___ctor(ScriptSubLayerManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4C23D3A & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_ScriptSubLayer___ctor__, method);
    sub_1C3B764(&System_Collections_Generic_List_ScriptSubLayer__TypeInfo, v3);
    byte_4C23D3A = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ScriptSubLayer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ScriptSubLayer___ctor__);
  this->fields.listSubLayer = (struct System_Collections_Generic_List_ScriptSubLayer__o *)v4;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.listSubLayer, (int64_t)v4, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_4C23D37 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__Dispose__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__MoveNext__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__get_Current__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_ScriptSubLayer__Clear__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_ScriptSubLayer__GetEnumerator__, v6);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v7);
    byte_4C23D37 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  listSubLayer = (System_Collections_Generic_List_object__o *)this->fields.listSubLayer;
  if ( !listSubLayer )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    listSubLayer,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_ScriptSubLayer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v14,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__MoveNext__) )
  {
    if ( !v14.fields._current )
      sub_1C3B9C0(0LL, v9);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v14.fields._current,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71122748(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__Dispose__);
  v11 = this->fields.listSubLayer;
  if ( !v11 )
LABEL_15:
    sub_1C3B9C0(listSubLayer, method);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x8
  _QWORD *v17; // x9
  __int64 klass_low; // x10
  __int64 v19; // x8

  v3 = count;
  if ( (byte_4C23D36 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_ScriptSubLayer___, *(_QWORD *)&count);
    sub_1C3B764(&Method_System_Collections_Generic_List_ScriptSubLayer__Add__, v5);
    byte_4C23D36 = 1;
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
                                             (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_ScriptSubLayer___);
      if ( !Object
        || (v9 = (Il2CppObject *)Object,
            ScriptSubLayer__StartSubLayer((ScriptSubLayer_o *)Object, v7),
            (Object = (UnityEngine_GameObject_o *)this->fields.listSubLayer) == 0LL)
        || (v16 = *(_QWORD *)&Object->fields.m_CachedPtr,
            v17 = Method_System_Collections_Generic_List_ScriptSubLayer__Add__,
            ++HIDWORD(Object[1].klass),
            !v16) )
      {
LABEL_13:
        sub_1C3B9C0(Object, v7);
      }
      klass_low = SLODWORD(Object[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(v16 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Object,
          v9,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v19 = v16 + 8 * klass_low;
        LODWORD(Object[1].klass) = klass_low + 1;
        *(_QWORD *)(v19 + 32) = v9;
        sub_1C3B708((PartyOrganizationUtility_o *)(v19 + 32), (int64_t)v9, v10, v11, v12, v13, v14, v15);
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t *v23; // x19
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x1
  System_Collections_Generic_List_object__o *listSubLayer; // x22
  System_Predicate_object__o *v32; // x24
  Il2CppObject *v33; // x22
  System_Collections_Generic_List_object__o *v34; // x20
  System_Predicate_object__o *v35; // x21
  Il2CppObject *v36; // x22
  struct ScriptSubLayerManager___c_StaticFields *static_fields; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x1

  if ( (byte_4C23D38 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_ScriptSubLayer__Find__, layerKey);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v7);
    sub_1C3B764(&System_Predicate_ScriptSubLayer__TypeInfo, v8);
    sub_1C3B764(&Method_ScriptSubLayerManager___c__GetSubLayer_b__21_1__, v9);
    sub_1C3B764(&Method_ScriptSubLayerManager___c__DisplayClass21_0__GetSubLayer_b__0__, v10);
    sub_1C3B764(&ScriptSubLayerManager___c__DisplayClass21_0_TypeInfo, v11);
    sub_1C3B764(&ScriptSubLayerManager___c_TypeInfo, v12);
    sub_1C3B764(&StringLiteral_422/*"#FEEF99"*/, v13);
    byte_4C23D38 = 1;
  }
  v14 = sub_1C3B9B0(ScriptSubLayerManager___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_21;
  *(_QWORD *)(v14 + 16) = layerKey;
  v23 = (int64_t *)(v14 + 16);
  sub_1C3B708((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)layerKey, v17, v18, v19, v20, v21, v22);
  if ( System_String__IsNullOrEmpty(*(System_String_o **)(v14 + 16), 0LL) )
  {
    v30 = StringLiteral_422/*"#FEEF99"*/;
    *v23 = StringLiteral_422/*"#FEEF99"*/;
    sub_1C3B708((PartyOrganizationUtility_o *)(v14 + 16), v30, v24, v25, v26, v27, v28, v29);
  }
  listSubLayer = (System_Collections_Generic_List_object__o *)this->fields.listSubLayer;
  v32 = (System_Predicate_object__o *)sub_1C3B9B0(System_Predicate_ScriptSubLayer__TypeInfo);
  System_Predicate_object____ctor(
    v32,
    (Il2CppObject *)v14,
    Method_ScriptSubLayerManager___c__DisplayClass21_0__GetSubLayer_b__0__,
    0LL);
  if ( !listSubLayer )
    goto LABEL_21;
  v33 = System_Collections_Generic_List_object___Find(
          listSubLayer,
          (System_Predicate_T__o *)v32,
          (const MethodInfo_368C2D4 *)Method_System_Collections_Generic_List_ScriptSubLayer__Find__);
  if ( isRegist )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v33, 0LL, 0LL) )
    {
      v34 = (System_Collections_Generic_List_object__o *)this->fields.listSubLayer;
      v15 = (char *)ScriptSubLayerManager___c_TypeInfo;
      if ( !ScriptSubLayerManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptSubLayerManager___c_TypeInfo);
        v15 = (char *)ScriptSubLayerManager___c_TypeInfo;
      }
      v35 = *(System_Predicate_object__o **)(*((_QWORD *)v15 + 23) + 8LL);
      if ( !v35 )
      {
        if ( !*((_DWORD *)v15 + 56) )
        {
          j_il2cpp_runtime_class_init_0(v15);
          v15 = (char *)ScriptSubLayerManager___c_TypeInfo;
        }
        v36 = (Il2CppObject *)**((_QWORD **)v15 + 23);
        v35 = (System_Predicate_object__o *)sub_1C3B9B0(System_Predicate_ScriptSubLayer__TypeInfo);
        System_Predicate_object____ctor(v35, v36, Method_ScriptSubLayerManager___c__GetSubLayer_b__21_1__, 0LL);
        static_fields = ScriptSubLayerManager___c_TypeInfo->static_fields;
        static_fields->__9__21_1 = (struct System_Predicate_ScriptSubLayer__o *)v35;
        sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->__9__21_1, (int64_t)v35, v38, v39, v40, v41, v42, v43);
      }
      if ( v34 )
      {
        v15 = (char *)System_Collections_Generic_List_object___Find(
                        v34,
                        (System_Predicate_T__o *)v35,
                        (const MethodInfo_368C2D4 *)Method_System_Collections_Generic_List_ScriptSubLayer__Find__);
        if ( v15 )
        {
          v50 = *v23;
          v33 = (Il2CppObject *)v15;
          *((_QWORD *)v15 + 4) = *v23;
          sub_1C3B708((PartyOrganizationUtility_o *)(v15 + 32), v50, v44, v45, v46, v47, v48, v49);
          return (ScriptSubLayer_o *)v33;
        }
      }
LABEL_21:
      sub_1C3B9C0(v15, v16);
    }
  }
  return (ScriptSubLayer_o *)v33;
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
    sub_1C3B9C0(subLayerCamera, method);
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
    sub_1C3B9C0(0LL, v9);
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

  if ( (byte_4C23D34 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Count__, charaData);
    sub_1C3B764(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__, v5);
    byte_4C23D34 = 1;
  }
  listSubLayer = (System_Collections_Generic_List_object__o *)this->fields.listSubLayer;
  if ( !listSubLayer )
LABEL_8:
    sub_1C3B9C0(listSubLayer, charaData);
  v7 = 0;
  while ( v7 < listSubLayer->fields._size )
  {
    listSubLayer = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  listSubLayer,
                                                                  v7,
                                                                  (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
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
  __int64 v7; // x1
  struct System_Collections_Generic_List_ScriptSubLayer__o *listSubLayer; // x8
  float v9; // s0
  float v10; // s1
  float v11; // s2
  float v12; // s8
  float v13; // s9
  float v14; // s12
  float v15; // s0
  float v16; // s1
  float v17; // s2
  float v18; // s10
  float v19; // s11
  float v20; // s13
  int32_t v21; // w20
  int m_CancellationTokenSource; // w8
  int32_t v23; // w20
  int32_t v24; // w21
  const MethodInfo *v25; // x2
  ScriptSubLayerManager_o *v26; // x21
  int v27; // s0
  ScriptSubLayerManager_o *v30; // x21
  int v31; // s0
  UnityEngine_Camera_o *subLayerCamera; // x21
  UnityEngine_Camera_o *v35; // x21
  UnityEngine_Object_o *klass; // x21
  ScriptSubLayerManager_o *v37; // x21
  ScriptSubLayerManager_c *v38; // x22
  void *monitor; // x23
  UnityEngine_Matrix4x4_o *zero; // x0
  __int64 v41; // x1
  float v42; // s1
  float v43; // s2
  float v44; // s3
  float v45; // s4
  float v46; // s5
  float v47; // s6
  float v48; // s7
  float v49; // s16
  float v50; // s17
  float v51; // s18
  float v52; // s19
  float v53; // s20
  float v54; // s21
  float v55; // s22
  float v56; // s23
  UnityEngine_Texture_o *targetTexture; // x23
  UnityEngine_RenderTexture_o *v58; // x0
  int32_t v59; // w20
  UnityEngine_Matrix4x4_o v60; // [xsp+0h] [xbp-150h] BYREF
  UnityEngine_Matrix4x4_o v61; // [xsp+40h] [xbp-110h] BYREF
  UnityEngine_RenderTextureDescriptor_o v62; // [xsp+80h] [xbp-D0h] BYREF
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v65; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v66; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v67; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4C23D39 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Graphics_TypeInfo, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Count__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__, v4);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v5);
    sub_1C3B764(&StringLiteral_16540/*"arabic"*/, v6);
    this = (ScriptSubLayerManager_o *)sub_1C3B764(&StringLiteral_16494/*"application.system.language"*/, v7);
    byte_4C23D39 = 1;
  }
  listSubLayer = v2->fields.listSubLayer;
  if ( !listSubLayer )
    goto LABEL_93;
  if ( listSubLayer->fields._size >= 1 )
  {
    this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
    if ( !this )
      goto LABEL_93;
    this = (ScriptSubLayerManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_93;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (ScriptSubLayerManager_o *)v2->fields.stretchObj;
    if ( !this )
      goto LABEL_93;
    this = (ScriptSubLayerManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !this )
      goto LABEL_93;
    *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    this = (ScriptSubLayerManager_o *)v2->fields.stretchObj;
    if ( !this )
      goto LABEL_93;
    v12 = v9;
    v13 = v10;
    v14 = v11;
    this = (ScriptSubLayerManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !this )
      goto LABEL_93;
    *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0LL);
    this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
    if ( !this )
      goto LABEL_93;
    v18 = v15;
    v19 = v16;
    v20 = v17;
    v21 = 0;
    while ( 1 )
    {
      m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
      if ( v21 >= m_CancellationTokenSource )
        break;
      this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)this,
                                          v21,
                                          (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
      if ( this )
      {
        ScriptSubLayer__RemoveInvalidCharaData((ScriptSubLayer_o *)this, method);
        this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
        ++v21;
        if ( this )
          continue;
      }
      goto LABEL_93;
    }
    if ( m_CancellationTokenSource >= 1 )
    {
      v23 = 0;
      while ( 1 )
      {
        this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)this,
                                            v23,
                                            (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
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
                                                  (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
              if ( !this )
                goto LABEL_93;
              ScriptSubLayer__SetLayer((ScriptSubLayer_o *)this, -1, v25);
              this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
            }
            ++v24;
            if ( !this )
              goto LABEL_93;
          }
          this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v23,
                                              (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
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
            v26 = this;
            this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)v2->fields.listSubLayer,
                                                v23,
                                                (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
            if ( !this )
              break;
            this = (ScriptSubLayerManager_o *)this[1].fields.subLayerPrefab;
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
            *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)this,
                                               0LL);
            if ( !v26 )
              break;
            UnityEngine_Transform__set_localPosition(
              (UnityEngine_Transform_o *)v26,
              *(UnityEngine_Vector3_o *)&v27,
              0LL);
            this = (ScriptSubLayerManager_o *)v2->fields.stretchObj;
            if ( !this )
              break;
            this = (ScriptSubLayerManager_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)this,
                                                0LL);
            if ( !v2->fields.listSubLayer )
              break;
            v30 = this;
            this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)v2->fields.listSubLayer,
                                                v23,
                                                (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
            if ( !this )
              break;
            this = (ScriptSubLayerManager_o *)this[1].fields.subLayerPrefab;
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
            *(UnityEngine_Vector3_o *)&v31 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0LL);
            if ( !v30 )
              break;
            UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v30, *(UnityEngine_Vector3_o *)&v31, 0LL);
          }
          this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
          if ( !this )
            break;
          subLayerCamera = v2->fields.subLayerCamera;
          this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v23,
                                              (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
          if ( !this )
            break;
          if ( !subLayerCamera )
            break;
          v65.fields.b = *((float *)&this->fields.subLayerPrefab + 1);
          v65.fields.a = *(float *)&this->fields.stretchObj;
          v65.fields.r = *((float *)&this->fields.subLayerInstanceRoot + 1);
          v65.fields.g = *(float *)&this->fields.subLayerPrefab;
          UnityEngine_Camera__set_backgroundColor(subLayerCamera, v65, 0LL);
          this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
          if ( !this )
            break;
          v35 = v2->fields.subLayerCamera;
          this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v23,
                                              (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
          if ( !this )
            break;
          if ( !v35 )
            break;
          UnityEngine_Camera__set_targetTexture(v35, (UnityEngine_RenderTexture_o *)this->fields.listSubLayer, 0LL);
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
                                              (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
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
                                                (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
            if ( !this )
              break;
            this = (ScriptSubLayerManager_o *)this->fields.listSubLayer;
            if ( !this )
              break;
            UnityEngine_RenderTexture__get_descriptor(
              (UnityEngine_RenderTextureDescriptor_o *)&v61,
              (UnityEngine_RenderTexture_o *)this,
              0LL);
            *(_OWORD *)&v62.fields._width_k__BackingField = *(_OWORD *)&v61.fields.m00;
            *(_OWORD *)&v62.fields._mipCount_k__BackingField = *(_OWORD *)&v61.fields.m01;
            *(_OWORD *)&v62.fields._dimension_k__BackingField = *(_OWORD *)&v61.fields.m02;
            v62.fields._memoryless_k__BackingField = LODWORD(v61.fields.m03);
            this = (ScriptSubLayerManager_o *)UnityEngine_RenderTexture__GetTemporary(&v62, 0LL);
            if ( !v2->fields.listSubLayer )
              break;
            v37 = this;
            this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)v2->fields.listSubLayer,
                                                v23,
                                                (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
            if ( !this )
              break;
            if ( !v2->fields.listSubLayer )
              break;
            v38 = this[1].klass;
            this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)v2->fields.listSubLayer,
                                                v23,
                                                (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
            if ( !this || !v38 )
              break;
            monitor = this[1].monitor;
            v66.fields.r = 1.0;
            v66.fields.g = 1.0;
            v66.fields.b = 1.0;
            v66.fields.a = 1.0;
            UnityEngine_Material__SetColor(
              (UnityEngine_Material_o *)v38,
              (System_String_o *)StringLiteral_16494/*"application.system.language"*/,
              v66,
              0LL);
            if ( monitor )
            {
              zero = UnityEngine_Matrix4x4__get_zero(&v61, 0LL);
              if ( *((_DWORD *)monitor + 6) < 0x10u )
                sub_1C3B9C8(zero, v41);
              v42 = *((float *)monitor + 9);
              v43 = *((float *)monitor + 10);
              v44 = *((float *)monitor + 11);
              v45 = *((float *)monitor + 12);
              v46 = *((float *)monitor + 13);
              v47 = *((float *)monitor + 14);
              v48 = *((float *)monitor + 15);
              v49 = *((float *)monitor + 16);
              v50 = *((float *)monitor + 17);
              v51 = *((float *)monitor + 18);
              v52 = *((float *)monitor + 19);
              v53 = *((float *)monitor + 20);
              v54 = *((float *)monitor + 21);
              v55 = *((float *)monitor + 22);
              v56 = *((float *)monitor + 23);
              v60.fields.m00 = *((float *)monitor + 8);
              v60.fields.m10 = v45;
              v60.fields.m20 = v49;
              v60.fields.m30 = v53;
              v60.fields.m01 = v42;
              v60.fields.m11 = v46;
              v60.fields.m21 = v50;
              v60.fields.m31 = v54;
              v60.fields.m02 = v43;
              v60.fields.m12 = v47;
              v60.fields.m22 = v51;
              v60.fields.m32 = v55;
              v60.fields.m03 = v44;
              v60.fields.m13 = v48;
              v60.fields.m23 = v52;
              v60.fields.m33 = v56;
              UnityEngine_Material__SetMatrix(
                (UnityEngine_Material_o *)v38,
                (System_String_o *)StringLiteral_16540/*"arabic"*/,
                &v60,
                0LL);
            }
            this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
            if ( !this )
              break;
            targetTexture = (UnityEngine_Texture_o *)UnityEngine_Camera__get_targetTexture(
                                                       (UnityEngine_Camera_o *)this,
                                                       0LL);
            if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
            UnityEngine_Graphics__Blit_70968476(
              targetTexture,
              (UnityEngine_RenderTexture_o *)v37,
              (UnityEngine_Material_o *)v38,
              0LL);
            this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
            if ( !this )
              break;
            v58 = UnityEngine_Camera__get_targetTexture((UnityEngine_Camera_o *)this, 0LL);
            UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)v37, v58, 0LL);
            UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)v37, 0LL);
          }
        }
        this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
        if ( !this )
          break;
        m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
        if ( ++v23 >= m_CancellationTokenSource )
          goto LABEL_76;
      }
LABEL_93:
      sub_1C3B9C0(this, method);
    }
LABEL_76:
    if ( m_CancellationTokenSource >= 1 )
    {
      v59 = 0;
      do
      {
        this = (ScriptSubLayerManager_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)this,
                                            v59,
                                            (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
        if ( !this )
          goto LABEL_93;
        ScriptSubLayer__SetLayerActive((ScriptSubLayer_o *)this, method);
        this = (ScriptSubLayerManager_o *)v2->fields.listSubLayer;
        if ( !this )
          goto LABEL_93;
      }
      while ( ++v59 < SLODWORD(this->fields.m_CancellationTokenSource) );
    }
    if ( v2->fields.isInvalidStretch )
    {
      this = (ScriptSubLayerManager_o *)v2->fields.stretchObj;
      if ( !this )
        goto LABEL_93;
      this = (ScriptSubLayerManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( !this )
        goto LABEL_93;
      v63.fields.x = v12;
      v63.fields.y = v13;
      v63.fields.z = v14;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v63, 0LL);
      this = (ScriptSubLayerManager_o *)v2->fields.stretchObj;
      if ( !this )
        goto LABEL_93;
      this = (ScriptSubLayerManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( !this )
        goto LABEL_93;
      v64.fields.x = v18;
      v64.fields.y = v19;
      v64.fields.z = v20;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v64, 0LL);
    }
    this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
    if ( !this )
      goto LABEL_93;
    this = (ScriptSubLayerManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_93;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
    if ( !this )
      goto LABEL_93;
    UnityEngine_Camera__set_targetTexture((UnityEngine_Camera_o *)this, 0LL, 0LL);
    this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
    if ( !this )
      goto LABEL_93;
    v67.fields.r = 0.0;
    v67.fields.g = 0.0;
    v67.fields.b = 0.0;
    v67.fields.a = 0.0;
    UnityEngine_Camera__set_backgroundColor((UnityEngine_Camera_o *)this, v67, 0LL);
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
    sub_1C3B9C0(0LL, v7);
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
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-38h] BYREF

  v3 = this;
  v4 = invalidStretch;
  if ( (byte_4C23D35 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__Dispose__, invalidStretch);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__MoveNext__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__get_Current__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_ScriptSubLayer__GetEnumerator__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Count__, v8);
    this = (ScriptSubLayerManager_o *)sub_1C3B764(&UnityEngine_Object_TypeInfo, v9);
    byte_4C23D35 = 1;
  }
  memset(&v14, 0, sizeof(v14));
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
          (System_Collections_Generic_List_Enumerator_T__o *)&v14,
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_ScriptSubLayer__GetEnumerator__);
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v14,
                  (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__MoveNext__) )
        {
          if ( !v14.fields._current )
            sub_1C3B9C0(0LL, v12);
          ScriptSubLayer__SetStretchObj((ScriptSubLayer_o *)v14.fields._current, v3->fields.stretchObj, v13);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v14,
          (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__Dispose__);
        return;
      }
LABEL_16:
      sub_1C3B9C0(this, invalidStretch);
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
    sub_1C3B9C0(clearFlags, v8);
  }
  UnityEngine_Camera__set_orthographicSize(v12, orthographicSize, 0LL);
  ScriptSubLayerManager__CreateSubLayer(this, count, v14);
}


void __fastcall ScriptSubLayerManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C23D3B & 1) == 0 )
  {
    sub_1C3B764(&ScriptSubLayerManager___c_TypeInfo, v1);
    byte_4C23D3B = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(ScriptSubLayerManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ScriptSubLayerManager___c_TypeInfo->static_fields->__9 = (struct ScriptSubLayerManager___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)ScriptSubLayerManager___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C3B9C0(this, 0LL);
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
    sub_1C3B9C0(this, 0LL);
  return System_String__op_Equality(l->fields._layerKey_k__BackingField, this->fields.layerKey, 0LL);
}