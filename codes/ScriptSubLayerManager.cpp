void __fastcall ScriptSubLayerManager___ctor(ScriptSubLayerManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4390CAD & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ScriptSubLayer___ctor__);
    sub_B775C4(&System_Collections_Generic_List_ScriptSubLayer__TypeInfo);
    byte_4390CAD = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ScriptSubLayer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ScriptSubLayer___ctor__);
  this->fields.listSubLayer = (struct System_Collections_Generic_List_ScriptSubLayer__o *)v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.listSubLayer,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// attributes: thunk
void __fastcall ScriptSubLayerManager__Awake(ScriptSubLayerManager_o *this, const MethodInfo *method)
{
  ScriptSubLayerManager__Init(this, method);
}


void __fastcall ScriptSubLayerManager__ClearSubLayer(ScriptSubLayerManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ScriptSubLayer__o *listSubLayer; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_Collections_Generic_List_Enumerator_T__o v6; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4390CAA & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ScriptSubLayer__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_ScriptSubLayer__GetEnumerator__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4390CAA = 1;
  }
  memset(&v6, 0, sizeof(v6));
  listSubLayer = this->fields.listSubLayer;
  if ( !listSubLayer )
    goto LABEL_14;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v6,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)listSubLayer,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ScriptSubLayer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v6,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__MoveNext__) )
  {
    if ( !v6.fields.current )
      sub_B7769C(0LL, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v6.fields.current,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36309980(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v6,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ScriptSubLayer__Dispose__);
  listSubLayer = this->fields.listSubLayer;
  if ( !listSubLayer )
LABEL_14:
    sub_B7769C(listSubLayer, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)listSubLayer,
    (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_ScriptSubLayer__Clear__);
}


void __fastcall ScriptSubLayerManager__CreateSubLayer(
        ScriptSubLayerManager_o *this,
        int32_t count,
        const MethodInfo *method)
{
  int32_t v5; // w22
  UnityEngine_GameObject_o *Object; // x0
  const MethodInfo *v7; // x1
  UnityEngine_GameObject_o *v8; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v9; // x21

  if ( (byte_4390CA9 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_ScriptSubLayer___);
    sub_B775C4(&Method_System_Collections_Generic_List_ScriptSubLayer__Add__);
    byte_4390CA9 = 1;
  }
  if ( count >= 1 )
  {
    v5 = 0;
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
                                                    (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_ScriptSubLayer___)) == 0LL)
        || (v9 = (EventMissionProgressRequest_Argument_ProgressData_o *)Object,
            ScriptSubLayer__StartSubLayer((ScriptSubLayer_o *)Object, v7),
            (Object = (UnityEngine_GameObject_o *)this->fields.listSubLayer) == 0LL) )
      {
        sub_B7769C(Object, v7);
      }
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Object,
        v9,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ScriptSubLayer__Add__);
      ++v5;
    }
    while ( v5 < count );
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Int32_array ***v16; // x19
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x1
  struct System_Collections_Generic_List_ScriptSubLayer__o *listSubLayer; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v25; // x24
  ScriptSubLayer_o *v26; // x22
  struct System_Collections_Generic_List_ScriptSubLayer__o *v27; // x20
  struct ScriptSubLayerManager___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__18_1; // x21
  Il2CppObject *v30; // x22
  struct ScriptSubLayerManager___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x1

  if ( (byte_4390CAB & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ScriptSubLayer__Find__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_System_Predicate_ScriptSubLayer___ctor__);
    sub_B775C4(&System_Predicate_ScriptSubLayer__TypeInfo);
    sub_B775C4(&Method_ScriptSubLayerManager___c__GetSubLayer_b__18_1__);
    sub_B775C4(&Method_ScriptSubLayerManager___c__DisplayClass18_0__GetSubLayer_b__0__);
    sub_B775C4(&ScriptSubLayerManager___c__DisplayClass18_0_TypeInfo);
    sub_B775C4(&ScriptSubLayerManager___c_TypeInfo);
    sub_B775C4(&StringLiteral_367/*"#A"*/);
    byte_4390CAB = 1;
  }
  v7 = sub_B77694(ScriptSubLayerManager___c__DisplayClass18_0_TypeInfo);
  ScriptSubLayerManager___c__DisplayClass18_0___ctor((ScriptSubLayerManager___c__DisplayClass18_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_24;
  *(_QWORD *)(v7 + 16) = layerKey;
  v16 = (System_Int32_array ***)(v7 + 16);
  sub_B77560((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)layerKey, v10, v11, v12, v13, v14, v15);
  if ( System_String__IsNullOrEmpty(*(System_String_o **)(v7 + 16), 0LL) )
  {
    v23 = (System_Int32_array **)StringLiteral_367/*"#A"*/;
    *v16 = (System_Int32_array **)StringLiteral_367/*"#A"*/;
    sub_B77560((BattleServantConfConponent_o *)(v7 + 16), v23, v17, v18, v19, v20, v21, v22);
  }
  listSubLayer = this->fields.listSubLayer;
  v25 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_ScriptSubLayer__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v25,
    (Il2CppObject *)v7,
    Method_ScriptSubLayerManager___c__DisplayClass18_0__GetSubLayer_b__0__,
    (const MethodInfo_2C3248C *)Method_System_Predicate_ScriptSubLayer___ctor__);
  if ( !listSubLayer )
    goto LABEL_24;
  v26 = (ScriptSubLayer_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                              (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)listSubLayer,
                              (System_Predicate_T__o *)v25,
                              (const MethodInfo_3053B58 *)Method_System_Collections_Generic_List_ScriptSubLayer__Find__);
  if ( isRegist )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v26, 0LL, 0LL) )
    {
      v27 = this->fields.listSubLayer;
      v8 = (char *)ScriptSubLayerManager___c_TypeInfo;
      if ( (BYTE3(ScriptSubLayerManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptSubLayerManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptSubLayerManager___c_TypeInfo);
        v8 = (char *)ScriptSubLayerManager___c_TypeInfo;
      }
      static_fields = (struct ScriptSubLayerManager___c_StaticFields *)*((_QWORD *)v8 + 23);
      _9__18_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__18_1;
      if ( !_9__18_1 )
      {
        if ( (v8[307] & 4) != 0 && !*((_DWORD *)v8 + 56) )
        {
          j_il2cpp_runtime_class_init_0(v8);
          static_fields = ScriptSubLayerManager___c_TypeInfo->static_fields;
        }
        v30 = (Il2CppObject *)static_fields->__9;
        _9__18_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_ScriptSubLayer__TypeInfo);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          _9__18_1,
          v30,
          Method_ScriptSubLayerManager___c__GetSubLayer_b__18_1__,
          (const MethodInfo_2C3248C *)Method_System_Predicate_ScriptSubLayer___ctor__);
        v31 = ScriptSubLayerManager___c_TypeInfo->static_fields;
        v31->__9__18_1 = (struct System_Predicate_ScriptSubLayer__o *)_9__18_1;
        sub_B77560(
          (BattleServantConfConponent_o *)&v31->__9__18_1,
          (System_Int32_array **)_9__18_1,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37);
      }
      if ( v27 )
      {
        v8 = (char *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                       (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v27,
                       (System_Predicate_T__o *)_9__18_1,
                       (const MethodInfo_3053B58 *)Method_System_Collections_Generic_List_ScriptSubLayer__Find__);
        if ( v8 )
        {
          v44 = *v16;
          v26 = (ScriptSubLayer_o *)v8;
          *((_QWORD *)v8 + 3) = *v16;
          sub_B77560((BattleServantConfConponent_o *)(v8 + 24), v44, v38, v39, v40, v41, v42, v43);
          return v26;
        }
      }
LABEL_24:
      sub_B7769C(v8, v9);
    }
  }
  return v26;
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
    sub_B7769C(subLayerCamera, method);
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
    sub_B7769C(0LL, v9);
  ScriptSubLayer__RegistCharaData(SubLayer, charaData, v10);
}


void __fastcall ScriptSubLayerManager__RemoveCharaData(
        ScriptSubLayerManager_o *this,
        ScriptCharaData_o *charaData,
        const MethodInfo *method)
{
  ScriptSubLayerManager_o *v4; // x20
  struct System_Collections_Generic_List_ScriptSubLayer__o *listSubLayer; // x22
  __int64 v6; // x21
  int size; // w8

  v4 = this;
  if ( (byte_4390CA8 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Count__);
    this = (ScriptSubLayerManager_o *)sub_B775C4(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
    byte_4390CA8 = 1;
  }
  listSubLayer = v4->fields.listSubLayer;
  if ( !listSubLayer )
LABEL_10:
    sub_B7769C(this, charaData);
  v6 = 0LL;
  while ( 1 )
  {
    size = listSubLayer->fields._size;
    if ( (int)v6 >= size )
      break;
    if ( size <= (unsigned int)v6 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    this = (ScriptSubLayerManager_o *)listSubLayer->fields._items->m_Items[v6];
    if ( this )
    {
      ScriptSubLayer__RemoveCharaData((ScriptSubLayer_o *)this, charaData, method);
      listSubLayer = v4->fields.listSubLayer;
      ++v6;
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
  struct System_Collections_Generic_List_ScriptSubLayer__o *listSubLayer; // x8
  const MethodInfo *v4; // x2
  struct System_Collections_Generic_List_ScriptSubLayer__o *v5; // x20
  __int64 v6; // x21
  int size; // w8
  __int64 v8; // x23
  ScriptSubLayer_o *v9; // x8
  struct System_Collections_Generic_List_ScriptSubLayer__o *v10; // x20
  unsigned __int64 v11; // x22
  unsigned __int64 v12; // x8
  struct System_Collections_Generic_List_ScriptSubLayer__o *v13; // x22
  ScriptSubLayer_o *v14; // x8
  struct System_Collections_Generic_List_ScriptSubLayer__o *v15; // x22
  ScriptSubLayer_o *v16; // x8
  struct System_Collections_Generic_List_ScriptSubLayer__o *v17; // x20
  ScriptSubLayer_o *v18; // x8
  UnityEngine_Object_o *edgeMaskSubMaterial_k__BackingField; // x20
  struct System_Collections_Generic_List_ScriptSubLayer__o *v20; // x20
  ScriptSubLayer_o *v21; // x8
  struct System_Collections_Generic_List_ScriptSubLayer__o *v22; // x22
  UnityEngine_RenderTexture_o *v23; // x20
  ScriptSubLayer_o *v24; // x8
  UnityEngine_Material_o *v25; // x21
  int v26; // s0
  UnityEngine_Texture_o *targetTexture; // x22
  UnityEngine_RenderTexture_o *v31; // x0
  unsigned int v32; // w21
  UnityEngine_Camera_o *subLayerCamera; // x19
  float v34; // s4
  float v35; // s5
  float v36; // s6
  float v37; // s7
  UnityEngine_RenderTextureDescriptor_o v38; // [xsp+0h] [xbp-B0h] BYREF
  MethodInfo methoda; // [xsp+38h] [xbp-78h] BYREF
  UnityEngine_Color_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4390CAC & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Graphics_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ScriptSubLayer__get_Item__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    this = (ScriptSubLayerManager_o *)sub_B775C4(&StringLiteral_16248/*"_Color"*/);
    byte_4390CAC = 1;
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
    v5 = v2->fields.listSubLayer;
    if ( !v5 )
      goto LABEL_84;
    v6 = 0LL;
    while ( 1 )
    {
      size = v5->fields._size;
      if ( (int)v6 >= size )
        break;
      if ( size <= (unsigned int)v6 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      this = (ScriptSubLayerManager_o *)v5->fields._items->m_Items[v6];
      if ( this )
      {
        ScriptSubLayer__RemoveInvalidCharaData((ScriptSubLayer_o *)this, method);
        v5 = v2->fields.listSubLayer;
        ++v6;
        if ( v5 )
          continue;
      }
      goto LABEL_84;
    }
    if ( size >= 1 )
    {
      v8 = 0LL;
      while ( 1 )
      {
        if ( size <= (unsigned int)v8 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v9 = v5->fields._items->m_Items[(int)v8];
        if ( !v9 )
          break;
        if ( v9->fields._isRendering_k__BackingField )
        {
          v10 = v2->fields.listSubLayer;
          if ( !v10 )
            break;
          v11 = 0LL;
          while ( 1 )
          {
            v12 = (unsigned int)v10->fields._size;
            if ( (__int64)v11 >= v10->fields._size )
              break;
            if ( v8 != v11 )
            {
              if ( v11 >= v12 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
              this = (ScriptSubLayerManager_o *)v10->fields._items->m_Items[v11];
              if ( !this )
                goto LABEL_84;
              ScriptSubLayer__SetLayer((ScriptSubLayer_o *)this, -1, v4);
              v10 = v2->fields.listSubLayer;
            }
            ++v11;
            if ( !v10 )
              goto LABEL_84;
          }
          if ( (unsigned int)v12 <= (unsigned int)v8 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
          this = (ScriptSubLayerManager_o *)v10->fields._items->m_Items[(int)v8];
          if ( !this )
            break;
          ScriptSubLayer__SetLayerActive((ScriptSubLayer_o *)this, method);
          v13 = v2->fields.listSubLayer;
          if ( !v13 )
            break;
          if ( v13->fields._size <= (unsigned int)v8 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
          v14 = v13->fields._items->m_Items[(int)v8];
          if ( !v14 )
            break;
          if ( !v2->fields.subLayerCamera )
            break;
          UnityEngine_Camera__set_backgroundColor(
            v2->fields.subLayerCamera,
            v14->fields._backgroundColor_k__BackingField,
            0LL);
          v15 = v2->fields.listSubLayer;
          if ( !v15 )
            break;
          if ( v15->fields._size <= (unsigned int)v8 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
          v16 = v15->fields._items->m_Items[(int)v8];
          if ( !v16 )
            break;
          if ( !v2->fields.subLayerCamera )
            break;
          UnityEngine_Camera__set_targetTexture(
            v2->fields.subLayerCamera,
            v16->fields._renderTexture_k__BackingField,
            0LL);
          this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
          if ( !this )
            break;
          UnityEngine_Camera__Render((UnityEngine_Camera_o *)this, 0LL);
          v17 = v2->fields.listSubLayer;
          if ( !v17 )
            break;
          if ( v17->fields._size <= (unsigned int)v8 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
          v18 = v17->fields._items->m_Items[(int)v8];
          if ( !v18 )
            break;
          edgeMaskSubMaterial_k__BackingField = (UnityEngine_Object_o *)v18->fields._edgeMaskSubMaterial_k__BackingField;
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
            v20 = v2->fields.listSubLayer;
            if ( !v20 )
              break;
            if ( v20->fields._size <= (unsigned int)v8 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
            v21 = v20->fields._items->m_Items[(int)v8];
            if ( !v21 )
              break;
            this = (ScriptSubLayerManager_o *)v21->fields._renderTexture_k__BackingField;
            if ( !this )
              break;
            UnityEngine_RenderTexture__get_descriptor(
              (UnityEngine_RenderTextureDescriptor_o *)&methoda,
              (UnityEngine_RenderTexture_o *)this,
              0LL);
            v38.fields._memoryless_k__BackingField = (int32_t)methoda.rgctx_data;
            *(_OWORD *)&v38.fields._mipCount_k__BackingField = *(_OWORD *)&methoda.name;
            *(_OWORD *)&v38.fields._dimension_k__BackingField = *(_OWORD *)&methoda.return_type;
            *(_OWORD *)&v38.fields._width_k__BackingField = *(_OWORD *)&methoda.methodPointer;
            this = (ScriptSubLayerManager_o *)UnityEngine_RenderTexture__GetTemporary(&v38, 0LL);
            v22 = v2->fields.listSubLayer;
            if ( !v22 )
              break;
            v23 = (UnityEngine_RenderTexture_o *)this;
            if ( v22->fields._size <= (unsigned int)v8 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
            v24 = v22->fields._items->m_Items[(int)v8];
            if ( !v24 )
              break;
            v25 = v24->fields._edgeMaskSubMaterial_k__BackingField;
            *(UnityEngine_Color_o *)&v26 = UnityEngine_Color__get_white(0LL);
            if ( !v25 )
              break;
            UnityEngine_Material__SetColor(
              v25,
              (System_String_o *)StringLiteral_16248/*"_Color"*/,
              *(UnityEngine_Color_o *)&v26,
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
            UnityEngine_Graphics__Blit_41444448(targetTexture, v23, v25, 0LL);
            this = (ScriptSubLayerManager_o *)v2->fields.subLayerCamera;
            if ( !this )
              break;
            v31 = UnityEngine_Camera__get_targetTexture((UnityEngine_Camera_o *)this, 0LL);
            UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)v23, v31, 0LL);
            UnityEngine_RenderTexture__ReleaseTemporary(v23, 0LL);
          }
        }
        v5 = v2->fields.listSubLayer;
        if ( !v5 )
          break;
        size = v5->fields._size;
        if ( (int)++v8 >= size )
          goto LABEL_71;
      }
LABEL_84:
      sub_B7769C(this, method);
    }
LABEL_71:
    if ( size >= 1 )
    {
      v32 = 0;
      do
      {
        if ( size <= v32 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        this = (ScriptSubLayerManager_o *)v5->fields._items->m_Items[v32];
        if ( !this )
          goto LABEL_84;
        ScriptSubLayer__SetLayerActive((ScriptSubLayer_o *)this, method);
        v5 = v2->fields.listSubLayer;
        if ( !v5 )
          goto LABEL_84;
        size = v5->fields._size;
      }
      while ( (int)++v32 < size );
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
    v40.fields.r = 0.0;
    v40.fields.g = 0.0;
    v40.fields.b = 0.0;
    v40.fields.a = 0.0;
    methoda.methodPointer = 0LL;
    methoda.invoker_method = 0LL;
    UnityEngine_Color___ctor(v40, v34, v35, v36, v37, &methoda);
    if ( !subLayerCamera )
      goto LABEL_84;
    *(_QWORD *)&v41.fields.r = methoda.methodPointer;
    *(_QWORD *)&v41.fields.b = methoda.invoker_method;
    UnityEngine_Camera__set_backgroundColor(subLayerCamera, v41, 0LL);
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
    sub_B7769C(0LL, v7);
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
    sub_B7769C(clearFlags, v8);
  }
  UnityEngine_Camera__set_orthographicSize(v12, orthographicSize, 0LL);
  ScriptSubLayerManager__CreateSubLayer(this, count, v14);
}


void __fastcall ScriptSubLayerManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct ScriptSubLayerManager___c_StaticFields *static_fields; // x0

  if ( (byte_43887DC & 1) == 0 )
  {
    sub_B775C4(&ScriptSubLayerManager___c_TypeInfo);
    byte_43887DC = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(ScriptSubLayerManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ScriptSubLayerManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ScriptSubLayerManager___c_o *)v1;
  sub_B77560(static_fields);
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
    sub_B7769C(this, 0LL);
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
    sub_B7769C(this, 0LL);
  return System_String__op_Equality(l->fields._layerKey_k__BackingField, this->fields.layerKey, 0LL);
}