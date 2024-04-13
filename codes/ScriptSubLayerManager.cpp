void __fastcall ScriptSubLayerManager___ctor(ScriptSubLayerManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42EE333 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptSubLayer___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_ScriptSubLayer__TypeInfo, v5, v6, v7);
    byte_42EE333 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ScriptSubLayer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ScriptSubLayer___ctor__);
  this->fields.listSubLayer = (struct System_Collections_Generic_List_ScriptSubLayer__o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.listSubLayer,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// attributes: thunk
void __fastcall ScriptSubLayerManager__Awake(ScriptSubLayerManager_o *this, const MethodInfo *method)
{
  ScriptSubLayerManager__Init(this, method);
}


void __fastcall ScriptSubLayerManager__ClearSubLayer(ScriptSubLayerManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct System_Collections_Generic_List_ScriptSubLayer__o *listSubLayer; // x0
  __int64 v21; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EE330 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptSubLayer__Clear__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptSubLayer__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    byte_42EE330 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  listSubLayer = this->fields.listSubLayer;
  if ( !listSubLayer )
    goto LABEL_14;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v23,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)listSubLayer,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ScriptSubLayer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__MoveNext__) )
  {
    if ( !v23.fields.current )
      sub_B5D69C(0LL, v21);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v23.fields.current,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__Dispose__);
  listSubLayer = this->fields.listSubLayer;
  if ( !listSubLayer )
LABEL_14:
    sub_B5D69C(listSubLayer, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)listSubLayer,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_ScriptSubLayer__Clear__);
}


void __fastcall ScriptSubLayerManager__CreateSubLayer(
        ScriptSubLayerManager_o *this,
        int32_t count,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int32_t v9; // w22
  UnityEngine_GameObject_o *Object; // x0
  const MethodInfo *v11; // x1
  UnityEngine_GameObject_o *v12; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v13; // x21

  if ( (byte_42EE32F & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ScriptSubLayer___, count, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptSubLayer__Add__, v6, v7, v8);
    byte_42EE32F = 1;
  }
  if ( count >= 1 )
  {
    v9 = 0;
    do
    {
      Object = BaseMonoBehaviour__createObject(
                 (BaseMonoBehaviour_o *)this,
                 this->fields.subLayerPrefab,
                 this->fields.subLayerInstanceRoot,
                 0LL,
                 0LL);
      if ( !Object
        || (v12 = Object,
            UnityEngine_GameObject__SetActive(Object, 1, 0LL),
            (Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    v12,
                                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ScriptSubLayer___)) == 0LL)
        || (v13 = (EventMissionProgressRequest_Argument_ProgressData_o *)Object,
            ScriptSubLayer__StartSubLayer((ScriptSubLayer_o *)Object, v11),
            (Object = (UnityEngine_GameObject_o *)this->fields.listSubLayer) == 0LL) )
      {
        sub_B5D69C(Object, v11);
      }
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Object,
        v13,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ScriptSubLayer__Add__);
      ++v9;
    }
    while ( v9 < count );
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  int v25; // w1
  char v26; // w2
  __int64 v27; // x3
  int v28; // w1
  char v29; // w2
  __int64 v30; // x3
  __int64 v31; // x23
  char *v32; // x0
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array ***v40; // x19
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x1
  struct System_Collections_Generic_List_ScriptSubLayer__o *listSubLayer; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v49; // x24
  ScriptSubLayer_o *v50; // x22
  struct System_Collections_Generic_List_ScriptSubLayer__o *v51; // x20
  struct ScriptSubLayerManager___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__18_1; // x21
  Il2CppObject *v54; // x22
  struct ScriptSubLayerManager___c_StaticFields *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array **v68; // x1

  if ( (byte_42EE331 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptSubLayer__Find__, (_DWORD)layerKey, isRegist, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Predicate_ScriptSubLayer___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Predicate_ScriptSubLayer__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_ScriptSubLayerManager___c__GetSubLayer_b__18_1__, v16, v17, v18);
    sub_B5D5C4(&Method_ScriptSubLayerManager___c__DisplayClass18_0__GetSubLayer_b__0__, v19, v20, v21);
    sub_B5D5C4(&ScriptSubLayerManager___c__DisplayClass18_0_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&ScriptSubLayerManager___c_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_362/*"#A"*/, v28, v29, v30);
    byte_42EE331 = 1;
  }
  v31 = sub_B5D694(ScriptSubLayerManager___c__DisplayClass18_0_TypeInfo);
  ScriptSubLayerManager___c__DisplayClass18_0___ctor((ScriptSubLayerManager___c__DisplayClass18_0_o *)v31, 0LL);
  if ( !v31 )
    goto LABEL_24;
  *(_QWORD *)(v31 + 16) = layerKey;
  v40 = (System_Int32_array ***)(v31 + 16);
  sub_B5D560((BattleServantConfConponent_o *)(v31 + 16), (System_Int32_array **)layerKey, v34, v35, v36, v37, v38, v39);
  if ( System_String__IsNullOrEmpty(*(System_String_o **)(v31 + 16), 0LL) )
  {
    v47 = (System_Int32_array **)StringLiteral_362/*"#A"*/;
    *v40 = (System_Int32_array **)StringLiteral_362/*"#A"*/;
    sub_B5D560((BattleServantConfConponent_o *)(v31 + 16), v47, v41, v42, v43, v44, v45, v46);
  }
  listSubLayer = this->fields.listSubLayer;
  v49 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_ScriptSubLayer__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v49,
    (Il2CppObject *)v31,
    Method_ScriptSubLayerManager___c__DisplayClass18_0__GetSubLayer_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_ScriptSubLayer___ctor__);
  if ( !listSubLayer )
    goto LABEL_24;
  v50 = (ScriptSubLayer_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                              (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)listSubLayer,
                              (System_Predicate_T__o *)v49,
                              (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_ScriptSubLayer__Find__);
  if ( isRegist )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v50, 0LL, 0LL) )
    {
      v51 = this->fields.listSubLayer;
      v32 = (char *)ScriptSubLayerManager___c_TypeInfo;
      if ( (BYTE3(ScriptSubLayerManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptSubLayerManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptSubLayerManager___c_TypeInfo);
        v32 = (char *)ScriptSubLayerManager___c_TypeInfo;
      }
      static_fields = (struct ScriptSubLayerManager___c_StaticFields *)*((_QWORD *)v32 + 23);
      _9__18_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__18_1;
      if ( !_9__18_1 )
      {
        if ( (v32[307] & 4) != 0 && !*((_DWORD *)v32 + 56) )
        {
          j_il2cpp_runtime_class_init_0(v32);
          static_fields = ScriptSubLayerManager___c_TypeInfo->static_fields;
        }
        v54 = (Il2CppObject *)static_fields->__9;
        _9__18_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_ScriptSubLayer__TypeInfo);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          _9__18_1,
          v54,
          Method_ScriptSubLayerManager___c__GetSubLayer_b__18_1__,
          (const MethodInfo_2B9320C *)Method_System_Predicate_ScriptSubLayer___ctor__);
        v55 = ScriptSubLayerManager___c_TypeInfo->static_fields;
        v55->__9__18_1 = (struct System_Predicate_ScriptSubLayer__o *)_9__18_1;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v55->__9__18_1,
          (System_Int32_array **)_9__18_1,
          v56,
          v57,
          v58,
          v59,
          v60,
          v61);
      }
      if ( v51 )
      {
        v32 = (char *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                        (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v51,
                        (System_Predicate_T__o *)_9__18_1,
                        (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_ScriptSubLayer__Find__);
        if ( v32 )
        {
          v68 = *v40;
          v50 = (ScriptSubLayer_o *)v32;
          *((_QWORD *)v32 + 3) = *v40;
          sub_B5D560((BattleServantConfConponent_o *)(v32 + 24), v68, v62, v63, v64, v65, v66, v67);
          return v50;
        }
      }
LABEL_24:
      sub_B5D69C(v32, v33);
    }
  }
  return v50;
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
    sub_B5D69C(subLayerCamera, method);
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
    sub_B5D69C(0LL, v9);
  ScriptSubLayer__RegistCharaData(SubLayer, charaData, v10);
}


void __fastcall ScriptSubLayerManager__RemoveCharaData(
        ScriptSubLayerManager_o *this,
        ScriptCharaData_o *charaData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ScriptSubLayerManager_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_ScriptSubLayer__o *listSubLayer; // x22
  __int64 v10; // x21
  int size; // w8

  v5 = this;
  if ( (byte_42EE32E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ScriptSubLayer__get_Count__,
      (_DWORD)charaData,
      (_DWORD)method,
      v3);
    this = (ScriptSubLayerManager_o *)sub_B5D5C4(
                                        &Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__,
                                        v6,
                                        v7,
                                        v8);
    byte_42EE32E = 1;
  }
  listSubLayer = v5->fields.listSubLayer;
  if ( !listSubLayer )
LABEL_10:
    sub_B5D69C(this, charaData);
  v10 = 0LL;
  while ( 1 )
  {
    size = listSubLayer->fields._size;
    if ( (int)v10 >= size )
      break;
    if ( size <= (unsigned int)v10 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    this = (ScriptSubLayerManager_o *)listSubLayer->fields._items->m_Items[v10];
    if ( this )
    {
      ScriptSubLayer__RemoveCharaData((ScriptSubLayer_o *)this, charaData, method);
      listSubLayer = v5->fields.listSubLayer;
      ++v10;
      if ( listSubLayer )
        continue;
    }
    goto LABEL_10;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSubLayerManager__RenderingSubLayer(ScriptSubLayerManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ScriptSubLayerManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct System_Collections_Generic_List_ScriptSubLayer__o *listSubLayer; // x8
  const MethodInfo *v18; // x2
  struct System_Collections_Generic_List_ScriptSubLayer__o *v19; // x20
  __int64 v20; // x21
  int size; // w8
  __int64 v22; // x23
  ScriptSubLayer_o *v23; // x8
  struct System_Collections_Generic_List_ScriptSubLayer__o *v24; // x20
  unsigned __int64 v25; // x22
  unsigned __int64 v26; // x8
  struct System_Collections_Generic_List_ScriptSubLayer__o *v27; // x22
  ScriptSubLayer_o *v28; // x8
  struct System_Collections_Generic_List_ScriptSubLayer__o *v29; // x22
  ScriptSubLayer_o *v30; // x8
  struct System_Collections_Generic_List_ScriptSubLayer__o *v31; // x20
  ScriptSubLayer_o *v32; // x8
  UnityEngine_Object_o *edgeMaskSubMaterial_k__BackingField; // x20
  struct System_Collections_Generic_List_ScriptSubLayer__o *v34; // x20
  ScriptSubLayer_o *v35; // x8
  struct System_Collections_Generic_List_ScriptSubLayer__o *v36; // x22
  UnityEngine_RenderTexture_o *v37; // x20
  ScriptSubLayer_o *v38; // x8
  UnityEngine_Material_o *v39; // x21
  int v40; // s0
  UnityEngine_Texture_o *targetTexture; // x22
  UnityEngine_RenderTexture_o *v45; // x0
  unsigned int v46; // w21
  UnityEngine_Camera_o *subLayerCamera; // x19
  float v48; // s4
  float v49; // s5
  float v50; // s6
  float v51; // s7
  UnityEngine_RenderTextureDescriptor_o v52; // [xsp+0h] [xbp-B0h] BYREF
  MethodInfo methoda; // [xsp+38h] [xbp-78h] BYREF
  UnityEngine_Color_o v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v55; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_42EE332 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Graphics_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Count__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    this = (ScriptSubLayerManager_o *)sub_B5D5C4(&StringLiteral_16146/*"_Color"*/, v14, v15, v16);
    byte_42EE332 = 1;
  }
  listSubLayer = v4->fields.listSubLayer;
  if ( !listSubLayer )
    goto LABEL_84;
  if ( listSubLayer->fields._size >= 1 )
  {
    this = (ScriptSubLayerManager_o *)v4->fields.subLayerCamera;
    if ( !this )
      goto LABEL_84;
    this = (ScriptSubLayerManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v19 = v4->fields.listSubLayer;
    if ( !v19 )
      goto LABEL_84;
    v20 = 0LL;
    while ( 1 )
    {
      size = v19->fields._size;
      if ( (int)v20 >= size )
        break;
      if ( size <= (unsigned int)v20 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      this = (ScriptSubLayerManager_o *)v19->fields._items->m_Items[v20];
      if ( this )
      {
        ScriptSubLayer__RemoveInvalidCharaData((ScriptSubLayer_o *)this, method);
        v19 = v4->fields.listSubLayer;
        ++v20;
        if ( v19 )
          continue;
      }
      goto LABEL_84;
    }
    if ( size >= 1 )
    {
      v22 = 0LL;
      while ( 1 )
      {
        if ( size <= (unsigned int)v22 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v23 = v19->fields._items->m_Items[(int)v22];
        if ( !v23 )
          break;
        if ( v23->fields._isRendering_k__BackingField )
        {
          v24 = v4->fields.listSubLayer;
          if ( !v24 )
            break;
          v25 = 0LL;
          while ( 1 )
          {
            v26 = (unsigned int)v24->fields._size;
            if ( (__int64)v25 >= v24->fields._size )
              break;
            if ( v22 != v25 )
            {
              if ( v25 >= v26 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
              this = (ScriptSubLayerManager_o *)v24->fields._items->m_Items[v25];
              if ( !this )
                goto LABEL_84;
              ScriptSubLayer__SetLayer((ScriptSubLayer_o *)this, -1, v18);
              v24 = v4->fields.listSubLayer;
            }
            ++v25;
            if ( !v24 )
              goto LABEL_84;
          }
          if ( (unsigned int)v26 <= (unsigned int)v22 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          this = (ScriptSubLayerManager_o *)v24->fields._items->m_Items[(int)v22];
          if ( !this )
            break;
          ScriptSubLayer__SetLayerActive((ScriptSubLayer_o *)this, method);
          v27 = v4->fields.listSubLayer;
          if ( !v27 )
            break;
          if ( v27->fields._size <= (unsigned int)v22 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v28 = v27->fields._items->m_Items[(int)v22];
          if ( !v28 )
            break;
          if ( !v4->fields.subLayerCamera )
            break;
          UnityEngine_Camera__set_backgroundColor(
            v4->fields.subLayerCamera,
            v28->fields._backgroundColor_k__BackingField,
            0LL);
          v29 = v4->fields.listSubLayer;
          if ( !v29 )
            break;
          if ( v29->fields._size <= (unsigned int)v22 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v30 = v29->fields._items->m_Items[(int)v22];
          if ( !v30 )
            break;
          if ( !v4->fields.subLayerCamera )
            break;
          UnityEngine_Camera__set_targetTexture(
            v4->fields.subLayerCamera,
            v30->fields._renderTexture_k__BackingField,
            0LL);
          this = (ScriptSubLayerManager_o *)v4->fields.subLayerCamera;
          if ( !this )
            break;
          UnityEngine_Camera__Render((UnityEngine_Camera_o *)this, 0LL);
          v31 = v4->fields.listSubLayer;
          if ( !v31 )
            break;
          if ( v31->fields._size <= (unsigned int)v22 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v32 = v31->fields._items->m_Items[(int)v22];
          if ( !v32 )
            break;
          edgeMaskSubMaterial_k__BackingField = (UnityEngine_Object_o *)v32->fields._edgeMaskSubMaterial_k__BackingField;
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
            v34 = v4->fields.listSubLayer;
            if ( !v34 )
              break;
            if ( v34->fields._size <= (unsigned int)v22 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            v35 = v34->fields._items->m_Items[(int)v22];
            if ( !v35 )
              break;
            this = (ScriptSubLayerManager_o *)v35->fields._renderTexture_k__BackingField;
            if ( !this )
              break;
            UnityEngine_RenderTexture__get_descriptor(
              (UnityEngine_RenderTextureDescriptor_o *)&methoda,
              (UnityEngine_RenderTexture_o *)this,
              0LL);
            v52.fields._memoryless_k__BackingField = (int32_t)methoda.rgctx_data;
            *(_OWORD *)&v52.fields._mipCount_k__BackingField = *(_OWORD *)&methoda.name;
            *(_OWORD *)&v52.fields._dimension_k__BackingField = *(_OWORD *)&methoda.return_type;
            *(_OWORD *)&v52.fields._width_k__BackingField = *(_OWORD *)&methoda.methodPointer;
            this = (ScriptSubLayerManager_o *)UnityEngine_RenderTexture__GetTemporary(&v52, 0LL);
            v36 = v4->fields.listSubLayer;
            if ( !v36 )
              break;
            v37 = (UnityEngine_RenderTexture_o *)this;
            if ( v36->fields._size <= (unsigned int)v22 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            v38 = v36->fields._items->m_Items[(int)v22];
            if ( !v38 )
              break;
            v39 = v38->fields._edgeMaskSubMaterial_k__BackingField;
            *(UnityEngine_Color_o *)&v40 = UnityEngine_Color__get_white(0LL);
            if ( !v39 )
              break;
            UnityEngine_Material__SetColor(
              v39,
              (System_String_o *)StringLiteral_16146/*"_Color"*/,
              *(UnityEngine_Color_o *)&v40,
              0LL);
            this = (ScriptSubLayerManager_o *)v4->fields.subLayerCamera;
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
            UnityEngine_Graphics__Blit_41600788(targetTexture, v37, v39, 0LL);
            this = (ScriptSubLayerManager_o *)v4->fields.subLayerCamera;
            if ( !this )
              break;
            v45 = UnityEngine_Camera__get_targetTexture((UnityEngine_Camera_o *)this, 0LL);
            UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)v37, v45, 0LL);
            UnityEngine_RenderTexture__ReleaseTemporary(v37, 0LL);
          }
        }
        v19 = v4->fields.listSubLayer;
        if ( !v19 )
          break;
        size = v19->fields._size;
        if ( (int)++v22 >= size )
          goto LABEL_71;
      }
LABEL_84:
      sub_B5D69C(this, method);
    }
LABEL_71:
    if ( size >= 1 )
    {
      v46 = 0;
      do
      {
        if ( size <= v46 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        this = (ScriptSubLayerManager_o *)v19->fields._items->m_Items[v46];
        if ( !this )
          goto LABEL_84;
        ScriptSubLayer__SetLayerActive((ScriptSubLayer_o *)this, method);
        v19 = v4->fields.listSubLayer;
        if ( !v19 )
          goto LABEL_84;
        size = v19->fields._size;
      }
      while ( (int)++v46 < size );
    }
    this = (ScriptSubLayerManager_o *)v4->fields.subLayerCamera;
    if ( !this )
      goto LABEL_84;
    this = (ScriptSubLayerManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (ScriptSubLayerManager_o *)v4->fields.subLayerCamera;
    if ( !this )
      goto LABEL_84;
    UnityEngine_Camera__set_targetTexture((UnityEngine_Camera_o *)this, 0LL, 0LL);
    subLayerCamera = v4->fields.subLayerCamera;
    v54.fields.r = 0.0;
    v54.fields.g = 0.0;
    v54.fields.b = 0.0;
    v54.fields.a = 0.0;
    methoda.methodPointer = 0LL;
    methoda.invoker_method = 0LL;
    UnityEngine_Color___ctor(v54, v48, v49, v50, v51, &methoda);
    if ( !subLayerCamera )
      goto LABEL_84;
    *(_QWORD *)&v55.fields.r = methoda.methodPointer;
    *(_QWORD *)&v55.fields.b = methoda.invoker_method;
    UnityEngine_Camera__set_backgroundColor(subLayerCamera, v55, 0LL);
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
    sub_B5D69C(0LL, v7);
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
    sub_B5D69C(clearFlags, v8);
  }
  UnityEngine_Camera__set_orthographicSize(v12, orthographicSize, 0LL);
  ScriptSubLayerManager__CreateSubLayer(this, count, v14);
}


void __fastcall ScriptSubLayerManager___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ScriptSubLayerManager___c_StaticFields *static_fields; // x0

  if ( (byte_42E5D1C & 1) == 0 )
  {
    sub_B5D5C4(&ScriptSubLayerManager___c_TypeInfo, v1, v2, v3);
    byte_42E5D1C = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ScriptSubLayerManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ScriptSubLayerManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ScriptSubLayerManager___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
  return System_String__op_Equality(l->fields._layerKey_k__BackingField, this->fields.layerKey, 0LL);
}