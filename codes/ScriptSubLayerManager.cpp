void __fastcall ScriptSubLayerManager___ctor(ScriptSubLayerManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4219DA9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScriptSubLayer___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_ScriptSubLayer__TypeInfo, v4);
    byte_4219DA9 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_ScriptSubLayer__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ScriptSubLayer___ctor__);
  this->fields.listSubLayer = (struct System_Collections_Generic_List_ScriptSubLayer__o *)v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.listSubLayer,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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
  struct System_Collections_Generic_List_ScriptSubLayer__o *listSubLayer; // x0
  UnityEngine_Object_o *gameObject; // x20
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4219DA6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScriptSubLayer__Clear__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScriptSubLayer__GetEnumerator__, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    byte_4219DA6 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  listSubLayer = this->fields.listSubLayer;
  if ( !listSubLayer )
    goto LABEL_14;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)listSubLayer,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ScriptSubLayer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v10,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__MoveNext__) )
  {
    if ( !v10.fields.current )
      sub_B0D97C(0LL);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v10.fields.current,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__Dispose__);
  listSubLayer = this->fields.listSubLayer;
  if ( !listSubLayer )
LABEL_14:
    sub_B0D97C(listSubLayer);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)listSubLayer,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_ScriptSubLayer__Clear__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSubLayerManager__CreateSubLayer(
        ScriptSubLayerManager_o *this,
        int32_t count,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t v6; // w22
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o *v8; // x21
  const MethodInfo *v9; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v10; // x21

  if ( (byte_4219DA5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ScriptSubLayer___, *(_QWORD *)&count);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScriptSubLayer__Add__, v5);
    byte_4219DA5 = 1;
  }
  if ( count >= 1 )
  {
    v6 = 0;
    do
    {
      Object = BaseMonoBehaviour__createObject(
                 (BaseMonoBehaviour_o *)this,
                 this->fields.subLayerPrefab,
                 this->fields.subLayerInstanceRoot,
                 0LL,
                 0LL);
      if ( !Object
        || (v8 = Object,
            UnityEngine_GameObject__SetActive(Object, 1, 0LL),
            (Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    v8,
                                                    (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ScriptSubLayer___)) == 0LL)
        || (v10 = (EventMissionProgressRequest_Argument_ProgressData_o *)Object,
            ScriptSubLayer__StartSubLayer((ScriptSubLayer_o *)Object, v9),
            (Object = (UnityEngine_GameObject_o *)this->fields.listSubLayer) == 0LL) )
      {
        sub_B0D97C(Object);
      }
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Object,
        v10,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ScriptSubLayer__Add__);
      ++v6;
    }
    while ( v6 < count );
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
  __int64 v14; // x1
  __int64 v15; // x23
  char *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array ***v23; // x19
  __int64 v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  struct System_Collections_Generic_List_ScriptSubLayer__o *listSubLayer; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v33; // x24
  ScriptSubLayer_o *v34; // x22
  __int64 v35; // x1
  __int64 v36; // x2
  struct System_Collections_Generic_List_ScriptSubLayer__o *v37; // x20
  struct ScriptSubLayerManager___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__18_1; // x21
  Il2CppObject *v40; // x22
  struct ScriptSubLayerManager___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x1

  if ( (byte_4219DA7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScriptSubLayer__Find__, layerKey);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Predicate_ScriptSubLayer___ctor__, v8);
    sub_B0D8A4(&System_Predicate_ScriptSubLayer__TypeInfo, v9);
    sub_B0D8A4(&Method_ScriptSubLayerManager___c__GetSubLayer_b__18_1__, v10);
    sub_B0D8A4(&Method_ScriptSubLayerManager___c__DisplayClass18_0__GetSubLayer_b__0__, v11);
    sub_B0D8A4(&ScriptSubLayerManager___c__DisplayClass18_0_TypeInfo, v12);
    sub_B0D8A4(&ScriptSubLayerManager___c_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_361/*"#A"*/, v14);
    byte_4219DA7 = 1;
  }
  v15 = sub_B0D974(ScriptSubLayerManager___c__DisplayClass18_0_TypeInfo, layerKey, isRegist);
  ScriptSubLayerManager___c__DisplayClass18_0___ctor((ScriptSubLayerManager___c__DisplayClass18_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_24;
  *(_QWORD *)(v15 + 16) = layerKey;
  v23 = (System_Int32_array ***)(v15 + 16);
  sub_B0D840((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)layerKey, v17, v18, v19, v20, v21, v22);
  if ( System_String__IsNullOrEmpty(*(System_String_o **)(v15 + 16), 0LL) )
  {
    v31 = (System_Int32_array **)StringLiteral_361/*"#A"*/;
    *v23 = (System_Int32_array **)StringLiteral_361/*"#A"*/;
    sub_B0D840((BattleServantConfConponent_o *)(v15 + 16), v31, v25, v26, v27, v28, v29, v30);
  }
  listSubLayer = this->fields.listSubLayer;
  v33 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                   System_Predicate_ScriptSubLayer__TypeInfo,
                                                                   v24,
                                                                   v25);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v33,
    (Il2CppObject *)v15,
    Method_ScriptSubLayerManager___c__DisplayClass18_0__GetSubLayer_b__0__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_ScriptSubLayer___ctor__);
  if ( !listSubLayer )
    goto LABEL_24;
  v34 = (ScriptSubLayer_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                              (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)listSubLayer,
                              (System_Predicate_T__o *)v33,
                              (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_ScriptSubLayer__Find__);
  if ( isRegist )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v34, 0LL, 0LL) )
    {
      v37 = this->fields.listSubLayer;
      v16 = (char *)ScriptSubLayerManager___c_TypeInfo;
      if ( (BYTE3(ScriptSubLayerManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptSubLayerManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptSubLayerManager___c_TypeInfo);
        v16 = (char *)ScriptSubLayerManager___c_TypeInfo;
      }
      static_fields = (struct ScriptSubLayerManager___c_StaticFields *)*((_QWORD *)v16 + 23);
      _9__18_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__18_1;
      if ( !_9__18_1 )
      {
        if ( (v16[307] & 4) != 0 && !*((_DWORD *)v16 + 56) )
        {
          j_il2cpp_runtime_class_init_0(v16);
          static_fields = ScriptSubLayerManager___c_TypeInfo->static_fields;
        }
        v40 = (Il2CppObject *)static_fields->__9;
        _9__18_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                              System_Predicate_ScriptSubLayer__TypeInfo,
                                                                              v35,
                                                                              v36);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          _9__18_1,
          v40,
          Method_ScriptSubLayerManager___c__GetSubLayer_b__18_1__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_ScriptSubLayer___ctor__);
        v41 = ScriptSubLayerManager___c_TypeInfo->static_fields;
        v41->__9__18_1 = (struct System_Predicate_ScriptSubLayer__o *)_9__18_1;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v41->__9__18_1,
          (System_Int32_array **)_9__18_1,
          v42,
          v43,
          v44,
          v45,
          v46,
          v47);
      }
      if ( v37 )
      {
        v16 = (char *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                        (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v37,
                        (System_Predicate_T__o *)_9__18_1,
                        (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_ScriptSubLayer__Find__);
        if ( v16 )
        {
          v54 = *v23;
          v34 = (ScriptSubLayer_o *)v16;
          *((_QWORD *)v16 + 3) = *v23;
          sub_B0D840((BattleServantConfConponent_o *)(v16 + 24), v54, v48, v49, v50, v51, v52, v53);
          return v34;
        }
      }
LABEL_24:
      sub_B0D97C(v16);
    }
  }
  return v34;
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
    sub_B0D97C(subLayerCamera);
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
  const MethodInfo *v9; // x2

  ScriptSubLayerManager__RemoveCharaData(this, charaData, (const MethodInfo *)charaData);
  SubLayer = ScriptSubLayerManager__GetSubLayer(this, layerKey, 1, v7);
  if ( !SubLayer )
    sub_B0D97C(0LL);
  ScriptSubLayer__RegistCharaData(SubLayer, charaData, v9);
}


void __fastcall ScriptSubLayerManager__RemoveCharaData(
        ScriptSubLayerManager_o *this,
        ScriptCharaData_o *charaData,
        const MethodInfo *method)
{
  ScriptSubLayerManager_o *v4; // x20
  __int64 v5; // x1
  struct System_Collections_Generic_List_ScriptSubLayer__o *listSubLayer; // x22
  __int64 v7; // x21
  int size; // w8

  v4 = this;
  if ( (byte_4219DA4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Count__, charaData);
    this = (ScriptSubLayerManager_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__, v5);
    byte_4219DA4 = 1;
  }
  listSubLayer = v4->fields.listSubLayer;
  if ( !listSubLayer )
LABEL_10:
    sub_B0D97C(this);
  v7 = 0LL;
  while ( 1 )
  {
    size = listSubLayer->fields._size;
    if ( (int)v7 >= size )
      break;
    if ( size <= (unsigned int)v7 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    this = (ScriptSubLayerManager_o *)listSubLayer->fields._items->m_Items[v7];
    if ( this )
    {
      ScriptSubLayer__RemoveCharaData((ScriptSubLayer_o *)this, charaData, method);
      listSubLayer = v4->fields.listSubLayer;
      ++v7;
      if ( listSubLayer )
        continue;
    }
    goto LABEL_10;
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
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  struct System_Collections_Generic_List_ScriptSubLayer__o *v10; // x20
  __int64 v11; // x21
  int size; // w8
  __int64 v13; // x23
  ScriptSubLayer_o *v14; // x8
  struct System_Collections_Generic_List_ScriptSubLayer__o *v15; // x20
  unsigned __int64 v16; // x22
  unsigned __int64 v17; // x8
  struct System_Collections_Generic_List_ScriptSubLayer__o *v18; // x22
  ScriptSubLayer_o *v19; // x8
  struct System_Collections_Generic_List_ScriptSubLayer__o *v20; // x22
  ScriptSubLayer_o *v21; // x8
  struct System_Collections_Generic_List_ScriptSubLayer__o *v22; // x20
  ScriptSubLayer_o *v23; // x8
  UnityEngine_Object_o *edgeMaskSubMaterial_k__BackingField; // x20
  struct System_Collections_Generic_List_ScriptSubLayer__o *v25; // x20
  ScriptSubLayer_o *v26; // x8
  struct System_Collections_Generic_List_ScriptSubLayer__o *v27; // x22
  UnityEngine_RenderTexture_o *v28; // x20
  ScriptSubLayer_o *v29; // x8
  UnityEngine_Material_o *v30; // x21
  int v31; // s0
  UnityEngine_Texture_o *targetTexture; // x22
  UnityEngine_RenderTexture_o *v36; // x0
  unsigned int v37; // w21
  UnityEngine_Camera_o *subLayerCamera; // x19
  float v39; // s4
  float v40; // s5
  float v41; // s6
  float v42; // s7
  UnityEngine_RenderTextureDescriptor_o v43; // [xsp+0h] [xbp-B0h] BYREF
  MethodInfo methoda; // [xsp+38h] [xbp-78h] BYREF
  UnityEngine_Color_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4219DA8 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Graphics_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Count__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    this = (ScriptSubLayerManager_o *)sub_B0D8A4(&StringLiteral_16002/*"_Color"*/, v6);
    byte_4219DA8 = 1;
  }
  listSubLayer = v2->fields.listSubLayer;
  if ( !listSubLayer )
    goto LABEL_84;
  if ( listSubLayer->fields._size >= 1 )
  {
    this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
    if ( !this )
      goto LABEL_84;
    this = (ScriptSubLayerManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v10 = v2->fields.listSubLayer;
    if ( !v10 )
      goto LABEL_84;
    v11 = 0LL;
    while ( 1 )
    {
      size = v10->fields._size;
      if ( (int)v11 >= size )
        break;
      if ( size <= (unsigned int)v11 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      this = (ScriptSubLayerManager_o *)v10->fields._items->m_Items[v11];
      if ( this )
      {
        ScriptSubLayer__RemoveInvalidCharaData((ScriptSubLayer_o *)this, v8);
        v10 = v2->fields.listSubLayer;
        ++v11;
        if ( v10 )
          continue;
      }
      goto LABEL_84;
    }
    if ( size >= 1 )
    {
      v13 = 0LL;
      while ( 1 )
      {
        if ( size <= (unsigned int)v13 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v14 = v10->fields._items->m_Items[(int)v13];
        if ( !v14 )
          break;
        if ( v14->fields._isRendering_k__BackingField )
        {
          v15 = v2->fields.listSubLayer;
          if ( !v15 )
            break;
          v16 = 0LL;
          while ( 1 )
          {
            v17 = (unsigned int)v15->fields._size;
            if ( (__int64)v16 >= v15->fields._size )
              break;
            if ( v13 != v16 )
            {
              if ( v16 >= v17 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
              this = (ScriptSubLayerManager_o *)v15->fields._items->m_Items[v16];
              if ( !this )
                goto LABEL_84;
              ScriptSubLayer__SetLayer((ScriptSubLayer_o *)this, -1, v9);
              v15 = v2->fields.listSubLayer;
            }
            ++v16;
            if ( !v15 )
              goto LABEL_84;
          }
          if ( (unsigned int)v17 <= (unsigned int)v13 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          this = (ScriptSubLayerManager_o *)v15->fields._items->m_Items[(int)v13];
          if ( !this )
            break;
          ScriptSubLayer__SetLayerActive((ScriptSubLayer_o *)this, v8);
          v18 = v2->fields.listSubLayer;
          if ( !v18 )
            break;
          if ( v18->fields._size <= (unsigned int)v13 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v19 = v18->fields._items->m_Items[(int)v13];
          if ( !v19 )
            break;
          if ( !v2->fields.subLayerCamera )
            break;
          UnityEngine_Camera__set_backgroundColor(
            v2->fields.subLayerCamera,
            v19->fields._backgroundColor_k__BackingField,
            0LL);
          v20 = v2->fields.listSubLayer;
          if ( !v20 )
            break;
          if ( v20->fields._size <= (unsigned int)v13 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v21 = v20->fields._items->m_Items[(int)v13];
          if ( !v21 )
            break;
          if ( !v2->fields.subLayerCamera )
            break;
          UnityEngine_Camera__set_targetTexture(
            v2->fields.subLayerCamera,
            v21->fields._renderTexture_k__BackingField,
            0LL);
          this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
          if ( !this )
            break;
          UnityEngine_Camera__Render((UnityEngine_Camera_o *)this, 0LL);
          v22 = v2->fields.listSubLayer;
          if ( !v22 )
            break;
          if ( v22->fields._size <= (unsigned int)v13 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v23 = v22->fields._items->m_Items[(int)v13];
          if ( !v23 )
            break;
          edgeMaskSubMaterial_k__BackingField = (UnityEngine_Object_o *)v23->fields._edgeMaskSubMaterial_k__BackingField;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          this = (ScriptSubLayerManager_o *)UnityEngine_Object__op_Inequality(
                                              edgeMaskSubMaterial_k__BackingField,
                                              0LL,
                                              0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v25 = v2->fields.listSubLayer;
            if ( !v25 )
              break;
            if ( v25->fields._size <= (unsigned int)v13 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
            v26 = v25->fields._items->m_Items[(int)v13];
            if ( !v26 )
              break;
            this = (ScriptSubLayerManager_o *)v26->fields._renderTexture_k__BackingField;
            if ( !this )
              break;
            UnityEngine_RenderTexture__get_descriptor(
              (UnityEngine_RenderTextureDescriptor_o *)&methoda,
              (UnityEngine_RenderTexture_o *)this,
              0LL);
            v43.fields._memoryless_k__BackingField = (int32_t)methoda.rgctx_data;
            *(_OWORD *)&v43.fields._mipCount_k__BackingField = *(_OWORD *)&methoda.name;
            *(_OWORD *)&v43.fields._dimension_k__BackingField = *(_OWORD *)&methoda.return_type;
            *(_OWORD *)&v43.fields._width_k__BackingField = *(_OWORD *)&methoda.methodPointer;
            this = (ScriptSubLayerManager_o *)UnityEngine_RenderTexture__GetTemporary(&v43, 0LL);
            v27 = v2->fields.listSubLayer;
            if ( !v27 )
              break;
            v28 = (UnityEngine_RenderTexture_o *)this;
            if ( v27->fields._size <= (unsigned int)v13 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
            v29 = v27->fields._items->m_Items[(int)v13];
            if ( !v29 )
              break;
            v30 = v29->fields._edgeMaskSubMaterial_k__BackingField;
            *(UnityEngine_Color_o *)&v31 = UnityEngine_Color__get_white(0LL);
            if ( !v30 )
              break;
            UnityEngine_Material__SetColor(
              v30,
              (System_String_o *)StringLiteral_16002/*"_Color"*/,
              *(UnityEngine_Color_o *)&v31,
              0LL);
            this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
            if ( !this )
              break;
            targetTexture = (UnityEngine_Texture_o *)UnityEngine_Camera__get_targetTexture(
                                                       (UnityEngine_Camera_o *)this,
                                                       0LL);
            if ( (BYTE3(UnityEngine_Graphics_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
            }
            UnityEngine_Graphics__Blit_40790496(targetTexture, v28, v30, 0LL);
            this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
            if ( !this )
              break;
            v36 = UnityEngine_Camera__get_targetTexture((UnityEngine_Camera_o *)this, 0LL);
            UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)v28, v36, 0LL);
            UnityEngine_RenderTexture__ReleaseTemporary(v28, 0LL);
          }
        }
        v10 = v2->fields.listSubLayer;
        if ( !v10 )
          break;
        size = v10->fields._size;
        if ( (int)++v13 >= size )
          goto LABEL_71;
      }
LABEL_84:
      sub_B0D97C(this);
    }
LABEL_71:
    if ( size >= 1 )
    {
      v37 = 0;
      do
      {
        if ( size <= v37 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        this = (ScriptSubLayerManager_o *)v10->fields._items->m_Items[v37];
        if ( !this )
          goto LABEL_84;
        ScriptSubLayer__SetLayerActive((ScriptSubLayer_o *)this, v8);
        v10 = v2->fields.listSubLayer;
        if ( !v10 )
          goto LABEL_84;
        size = v10->fields._size;
      }
      while ( (int)++v37 < size );
    }
    this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
    if ( !this )
      goto LABEL_84;
    this = (ScriptSubLayerManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
    if ( !this )
      goto LABEL_84;
    UnityEngine_Camera__set_targetTexture((UnityEngine_Camera_o *)this, 0LL, 0LL);
    subLayerCamera = v2->fields.subLayerCamera;
    v45.fields.r = 0.0;
    v45.fields.g = 0.0;
    v45.fields.b = 0.0;
    v45.fields.a = 0.0;
    methoda.methodPointer = 0LL;
    methoda.invoker_method = 0LL;
    UnityEngine_Color___ctor(v45, v39, v40, v41, v42, &methoda);
    if ( !subLayerCamera )
      goto LABEL_84;
    *(_QWORD *)&v46.fields.r = methoda.methodPointer;
    *(_QWORD *)&v46.fields.b = methoda.invoker_method;
    UnityEngine_Camera__set_backgroundColor(subLayerCamera, v46, 0LL);
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
    sub_B0D97C(0LL);
  ScriptSubLayer__SetDepth(SubLayer, depth, v7);
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
    sub_B0D97C(clearFlags);
  }
  UnityEngine_Camera__set_orthographicSize(v11, orthographicSize, 0LL);
  ScriptSubLayerManager__CreateSubLayer(this, count, v13);
}


void __fastcall ScriptSubLayerManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct ScriptSubLayerManager___c_StaticFields *static_fields; // x0

  if ( (byte_42121F3 & 1) == 0 )
  {
    sub_B0D8A4(&ScriptSubLayerManager___c_TypeInfo, v1);
    byte_42121F3 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(ScriptSubLayerManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = ScriptSubLayerManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ScriptSubLayerManager___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return System_String__op_Equality(l->fields._layerKey_k__BackingField, this->fields.layerKey, 0LL);
}