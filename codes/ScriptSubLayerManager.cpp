void __fastcall ScriptSubLayerManager___ctor(ScriptSubLayerManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_418D052 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptSubLayer___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_ScriptSubLayer__TypeInfo, v3);
    byte_418D052 = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ScriptSubLayer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ScriptSubLayer___ctor__);
  this->fields.listSubLayer = (struct System_Collections_Generic_List_ScriptSubLayer__o *)v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.listSubLayer,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 v9; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418D04F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptSubLayer__Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptSubLayer__GetEnumerator__, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_418D04F = 1;
  }
  memset(&v11, 0, sizeof(v11));
  listSubLayer = this->fields.listSubLayer;
  if ( !listSubLayer )
    goto LABEL_14;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)listSubLayer,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ScriptSubLayer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v11,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__MoveNext__) )
  {
    if ( !v11.fields.current )
      sub_B2C434(0LL, v9);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v11.fields.current,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__Dispose__);
  listSubLayer = this->fields.listSubLayer;
  if ( !listSubLayer )
LABEL_14:
    sub_B2C434(listSubLayer, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)listSubLayer,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_ScriptSubLayer__Clear__);
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
  const MethodInfo *v8; // x1
  UnityEngine_GameObject_o *v9; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v10; // x21

  if ( (byte_418D04E & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ScriptSubLayer___, *(_QWORD *)&count);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptSubLayer__Add__, v5);
    byte_418D04E = 1;
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
        || (v9 = Object,
            UnityEngine_GameObject__SetActive(Object, 1, 0LL),
            (Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    v9,
                                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ScriptSubLayer___)) == 0LL)
        || (v10 = (EventMissionProgressRequest_Argument_ProgressData_o *)Object,
            ScriptSubLayer__StartSubLayer((ScriptSubLayer_o *)Object, v8),
            (Object = (UnityEngine_GameObject_o *)this->fields.listSubLayer) == 0LL) )
      {
        sub_B2C434(Object, v8);
      }
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Object,
        v10,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ScriptSubLayer__Add__);
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
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array ***v24; // x19
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
  struct System_Collections_Generic_List_ScriptSubLayer__o *v35; // x20
  struct ScriptSubLayerManager___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__18_1; // x21
  Il2CppObject *v38; // x22
  struct ScriptSubLayerManager___c_StaticFields *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x1

  if ( (byte_418D050 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptSubLayer__Find__, layerKey);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&Method_System_Predicate_ScriptSubLayer___ctor__, v8);
    sub_B2C35C(&System_Predicate_ScriptSubLayer__TypeInfo, v9);
    sub_B2C35C(&Method_ScriptSubLayerManager___c__GetSubLayer_b__18_1__, v10);
    sub_B2C35C(&Method_ScriptSubLayerManager___c__DisplayClass18_0__GetSubLayer_b__0__, v11);
    sub_B2C35C(&ScriptSubLayerManager___c__DisplayClass18_0_TypeInfo, v12);
    sub_B2C35C(&ScriptSubLayerManager___c_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_356/*"#A"*/, v14);
    byte_418D050 = 1;
  }
  v15 = sub_B2C42C(ScriptSubLayerManager___c__DisplayClass18_0_TypeInfo);
  ScriptSubLayerManager___c__DisplayClass18_0___ctor((ScriptSubLayerManager___c__DisplayClass18_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_24;
  *(_QWORD *)(v15 + 16) = layerKey;
  v24 = (System_Int32_array ***)(v15 + 16);
  sub_B2C2F8((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)layerKey, v18, v19, v20, v21, v22, v23);
  if ( System_String__IsNullOrEmpty(*(System_String_o **)(v15 + 16), 0LL) )
  {
    v31 = (System_Int32_array **)StringLiteral_356/*"#A"*/;
    *v24 = (System_Int32_array **)StringLiteral_356/*"#A"*/;
    sub_B2C2F8((BattleServantConfConponent_o *)(v15 + 16), v31, v25, v26, v27, v28, v29, v30);
  }
  listSubLayer = this->fields.listSubLayer;
  v33 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_ScriptSubLayer__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v33,
    (Il2CppObject *)v15,
    Method_ScriptSubLayerManager___c__DisplayClass18_0__GetSubLayer_b__0__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_ScriptSubLayer___ctor__);
  if ( !listSubLayer )
    goto LABEL_24;
  v34 = (ScriptSubLayer_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                              (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)listSubLayer,
                              (System_Predicate_T__o *)v33,
                              (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_ScriptSubLayer__Find__);
  if ( isRegist )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v34, 0LL, 0LL) )
    {
      v35 = this->fields.listSubLayer;
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
        v38 = (Il2CppObject *)static_fields->__9;
        _9__18_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_ScriptSubLayer__TypeInfo);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          _9__18_1,
          v38,
          Method_ScriptSubLayerManager___c__GetSubLayer_b__18_1__,
          (const MethodInfo_2952BE4 *)Method_System_Predicate_ScriptSubLayer___ctor__);
        v39 = ScriptSubLayerManager___c_TypeInfo->static_fields;
        v39->__9__18_1 = (struct System_Predicate_ScriptSubLayer__o *)_9__18_1;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v39->__9__18_1,
          (System_Int32_array **)_9__18_1,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45);
      }
      if ( v35 )
      {
        v16 = (char *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                        (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v35,
                        (System_Predicate_T__o *)_9__18_1,
                        (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_ScriptSubLayer__Find__);
        if ( v16 )
        {
          v52 = *v24;
          v34 = (ScriptSubLayer_o *)v16;
          *((_QWORD *)v16 + 3) = *v24;
          sub_B2C2F8((BattleServantConfConponent_o *)(v16 + 24), v52, v46, v47, v48, v49, v50, v51);
          return v34;
        }
      }
LABEL_24:
      sub_B2C434(v16, v17);
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
    sub_B2C434(subLayerCamera, method);
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
    sub_B2C434(0LL, v9);
  ScriptSubLayer__RegistCharaData(SubLayer, charaData, v10);
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
  if ( (byte_418D04D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Count__, charaData);
    this = (ScriptSubLayerManager_o *)sub_B2C35C(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__, v5);
    byte_418D04D = 1;
  }
  listSubLayer = v4->fields.listSubLayer;
  if ( !listSubLayer )
LABEL_10:
    sub_B2C434(this, charaData);
  v7 = 0LL;
  while ( 1 )
  {
    size = listSubLayer->fields._size;
    if ( (int)v7 >= size )
      break;
    if ( size <= (unsigned int)v7 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
  const MethodInfo *v8; // x2
  struct System_Collections_Generic_List_ScriptSubLayer__o *v9; // x20
  __int64 v10; // x21
  int size; // w8
  __int64 v12; // x23
  ScriptSubLayer_o *v13; // x8
  struct System_Collections_Generic_List_ScriptSubLayer__o *v14; // x20
  unsigned __int64 v15; // x22
  unsigned __int64 v16; // x8
  struct System_Collections_Generic_List_ScriptSubLayer__o *v17; // x22
  ScriptSubLayer_o *v18; // x8
  struct System_Collections_Generic_List_ScriptSubLayer__o *v19; // x22
  ScriptSubLayer_o *v20; // x8
  struct System_Collections_Generic_List_ScriptSubLayer__o *v21; // x20
  ScriptSubLayer_o *v22; // x8
  UnityEngine_Object_o *edgeMaskSubMaterial_k__BackingField; // x20
  struct System_Collections_Generic_List_ScriptSubLayer__o *v24; // x20
  ScriptSubLayer_o *v25; // x8
  struct System_Collections_Generic_List_ScriptSubLayer__o *v26; // x22
  UnityEngine_RenderTexture_o *v27; // x20
  ScriptSubLayer_o *v28; // x8
  UnityEngine_Material_o *v29; // x21
  int v30; // s0
  UnityEngine_Texture_o *targetTexture; // x22
  UnityEngine_RenderTexture_o *v35; // x0
  unsigned int v36; // w21
  UnityEngine_Camera_o *subLayerCamera; // x19
  float v38; // s4
  float v39; // s5
  float v40; // s6
  float v41; // s7
  UnityEngine_RenderTextureDescriptor_o v42; // [xsp+0h] [xbp-B0h] BYREF
  MethodInfo methoda; // [xsp+38h] [xbp-78h] BYREF
  UnityEngine_Color_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_418D051 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Graphics_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Count__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    this = (ScriptSubLayerManager_o *)sub_B2C35C(&StringLiteral_15954/*"_Color"*/, v6);
    byte_418D051 = 1;
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
    v9 = v2->fields.listSubLayer;
    if ( !v9 )
      goto LABEL_84;
    v10 = 0LL;
    while ( 1 )
    {
      size = v9->fields._size;
      if ( (int)v10 >= size )
        break;
      if ( size <= (unsigned int)v10 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      this = (ScriptSubLayerManager_o *)v9->fields._items->m_Items[v10];
      if ( this )
      {
        ScriptSubLayer__RemoveInvalidCharaData((ScriptSubLayer_o *)this, method);
        v9 = v2->fields.listSubLayer;
        ++v10;
        if ( v9 )
          continue;
      }
      goto LABEL_84;
    }
    if ( size >= 1 )
    {
      v12 = 0LL;
      while ( 1 )
      {
        if ( size <= (unsigned int)v12 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v13 = v9->fields._items->m_Items[(int)v12];
        if ( !v13 )
          break;
        if ( v13->fields._isRendering_k__BackingField )
        {
          v14 = v2->fields.listSubLayer;
          if ( !v14 )
            break;
          v15 = 0LL;
          while ( 1 )
          {
            v16 = (unsigned int)v14->fields._size;
            if ( (__int64)v15 >= v14->fields._size )
              break;
            if ( v12 != v15 )
            {
              if ( v15 >= v16 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
              this = (ScriptSubLayerManager_o *)v14->fields._items->m_Items[v15];
              if ( !this )
                goto LABEL_84;
              ScriptSubLayer__SetLayer((ScriptSubLayer_o *)this, -1, v8);
              v14 = v2->fields.listSubLayer;
            }
            ++v15;
            if ( !v14 )
              goto LABEL_84;
          }
          if ( (unsigned int)v16 <= (unsigned int)v12 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          this = (ScriptSubLayerManager_o *)v14->fields._items->m_Items[(int)v12];
          if ( !this )
            break;
          ScriptSubLayer__SetLayerActive((ScriptSubLayer_o *)this, method);
          v17 = v2->fields.listSubLayer;
          if ( !v17 )
            break;
          if ( v17->fields._size <= (unsigned int)v12 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v18 = v17->fields._items->m_Items[(int)v12];
          if ( !v18 )
            break;
          if ( !v2->fields.subLayerCamera )
            break;
          UnityEngine_Camera__set_backgroundColor(
            v2->fields.subLayerCamera,
            v18->fields._backgroundColor_k__BackingField,
            0LL);
          v19 = v2->fields.listSubLayer;
          if ( !v19 )
            break;
          if ( v19->fields._size <= (unsigned int)v12 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v20 = v19->fields._items->m_Items[(int)v12];
          if ( !v20 )
            break;
          if ( !v2->fields.subLayerCamera )
            break;
          UnityEngine_Camera__set_targetTexture(
            v2->fields.subLayerCamera,
            v20->fields._renderTexture_k__BackingField,
            0LL);
          this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
          if ( !this )
            break;
          UnityEngine_Camera__Render((UnityEngine_Camera_o *)this, 0LL);
          v21 = v2->fields.listSubLayer;
          if ( !v21 )
            break;
          if ( v21->fields._size <= (unsigned int)v12 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v22 = v21->fields._items->m_Items[(int)v12];
          if ( !v22 )
            break;
          edgeMaskSubMaterial_k__BackingField = (UnityEngine_Object_o *)v22->fields._edgeMaskSubMaterial_k__BackingField;
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
            v24 = v2->fields.listSubLayer;
            if ( !v24 )
              break;
            if ( v24->fields._size <= (unsigned int)v12 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            v25 = v24->fields._items->m_Items[(int)v12];
            if ( !v25 )
              break;
            this = (ScriptSubLayerManager_o *)v25->fields._renderTexture_k__BackingField;
            if ( !this )
              break;
            UnityEngine_RenderTexture__get_descriptor(
              (UnityEngine_RenderTextureDescriptor_o *)&methoda,
              (UnityEngine_RenderTexture_o *)this,
              0LL);
            v42.fields._memoryless_k__BackingField = (int32_t)methoda.rgctx_data;
            *(_OWORD *)&v42.fields._mipCount_k__BackingField = *(_OWORD *)&methoda.name;
            *(_OWORD *)&v42.fields._dimension_k__BackingField = *(_OWORD *)&methoda.return_type;
            *(_OWORD *)&v42.fields._width_k__BackingField = *(_OWORD *)&methoda.methodPointer;
            this = (ScriptSubLayerManager_o *)UnityEngine_RenderTexture__GetTemporary(&v42, 0LL);
            v26 = v2->fields.listSubLayer;
            if ( !v26 )
              break;
            v27 = (UnityEngine_RenderTexture_o *)this;
            if ( v26->fields._size <= (unsigned int)v12 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            v28 = v26->fields._items->m_Items[(int)v12];
            if ( !v28 )
              break;
            v29 = v28->fields._edgeMaskSubMaterial_k__BackingField;
            *(UnityEngine_Color_o *)&v30 = UnityEngine_Color__get_white(0LL);
            if ( !v29 )
              break;
            UnityEngine_Material__SetColor(
              v29,
              (System_String_o *)StringLiteral_15954/*"_Color"*/,
              *(UnityEngine_Color_o *)&v30,
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
            UnityEngine_Graphics__Blit_40666156(targetTexture, v27, v29, 0LL);
            this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
            if ( !this )
              break;
            v35 = UnityEngine_Camera__get_targetTexture((UnityEngine_Camera_o *)this, 0LL);
            UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)v27, v35, 0LL);
            UnityEngine_RenderTexture__ReleaseTemporary(v27, 0LL);
          }
        }
        v9 = v2->fields.listSubLayer;
        if ( !v9 )
          break;
        size = v9->fields._size;
        if ( (int)++v12 >= size )
          goto LABEL_71;
      }
LABEL_84:
      sub_B2C434(this, method);
    }
LABEL_71:
    if ( size >= 1 )
    {
      v36 = 0;
      do
      {
        if ( size <= v36 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        this = (ScriptSubLayerManager_o *)v9->fields._items->m_Items[v36];
        if ( !this )
          goto LABEL_84;
        ScriptSubLayer__SetLayerActive((ScriptSubLayer_o *)this, method);
        v9 = v2->fields.listSubLayer;
        if ( !v9 )
          goto LABEL_84;
        size = v9->fields._size;
      }
      while ( (int)++v36 < size );
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
    v44.fields.r = 0.0;
    v44.fields.g = 0.0;
    v44.fields.b = 0.0;
    v44.fields.a = 0.0;
    methoda.methodPointer = 0LL;
    methoda.invoker_method = 0LL;
    UnityEngine_Color___ctor(v44, v38, v39, v40, v41, &methoda);
    if ( !subLayerCamera )
      goto LABEL_84;
    *(_QWORD *)&v45.fields.r = methoda.methodPointer;
    *(_QWORD *)&v45.fields.b = methoda.invoker_method;
    UnityEngine_Camera__set_backgroundColor(subLayerCamera, v45, 0LL);
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
    sub_B2C434(0LL, v7);
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
    sub_B2C434(clearFlags, v8);
  }
  UnityEngine_Camera__set_orthographicSize(v12, orthographicSize, 0LL);
  ScriptSubLayerManager__CreateSubLayer(this, count, v14);
}


void __fastcall ScriptSubLayerManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct ScriptSubLayerManager___c_StaticFields *static_fields; // x0

  if ( (byte_418554A & 1) == 0 )
  {
    sub_B2C35C(&ScriptSubLayerManager___c_TypeInfo, v1);
    byte_418554A = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ScriptSubLayerManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ScriptSubLayerManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ScriptSubLayerManager___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
  return System_String__op_Equality(l->fields._layerKey_k__BackingField, this->fields.layerKey, 0LL);
}