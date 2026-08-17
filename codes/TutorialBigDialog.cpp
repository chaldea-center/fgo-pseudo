void TutorialBigDialog___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  __int64 v7; // x1
  struct TutorialBigDialog_StaticFields *static_fields; // x0
  int32_t v9; // w1
  struct TutorialBigDialog_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t v17; // w1
  struct TutorialBigDialog_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  int32_t v25; // w1
  struct TutorialBigDialog_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  TutorialBigDialog_c *v33; // x8
  struct TutorialBigDialog_StaticFields *v34; // x9
  struct TutorialBigDialog_StaticFields *v35; // x8

  if ( (byte_596F409 & 1) == 0 )
  {
    sub_2213A60(&TutorialBigDialog_TypeInfo);
    sub_2213A60(&StringLiteral_15219/*"Tutorial/tutorial_alpha"*/);
    sub_2213A60(&StringLiteral_18959/*"combine_tutorial_alpha"*/);
    sub_2213A60(&StringLiteral_15217/*"Tutorial/combine_tutorial_alpha"*/);
    sub_2213A60(&StringLiteral_25549/*"tutorial_alpha"*/);
    byte_596F409 = 1;
  }
  v7 = StringLiteral_15219/*"Tutorial/tutorial_alpha"*/;
  static_fields = TutorialBigDialog_TypeInfo->static_fields;
  static_fields->FADE_TIME = 0.3;
  static_fields->alphaImgPath = (struct System_String_o *)v7;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->alphaImgPath, v7, v1, v2, v3, v4, v5, v6);
  v9 = StringLiteral_25549/*"tutorial_alpha"*/;
  v10 = TutorialBigDialog_TypeInfo->static_fields;
  v10->alphaImgName = (struct System_String_o *)StringLiteral_25549/*"tutorial_alpha"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->alphaImgName, v9, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_15217/*"Tutorial/combine_tutorial_alpha"*/;
  v18 = TutorialBigDialog_TypeInfo->static_fields;
  v18->alphaMiniImgPath = (struct System_String_o *)StringLiteral_15217/*"Tutorial/combine_tutorial_alpha"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v18->alphaMiniImgPath, v17, v19, v20, v21, v22, v23, v24);
  v25 = StringLiteral_18959/*"combine_tutorial_alpha"*/;
  v26 = TutorialBigDialog_TypeInfo->static_fields;
  v26->alphaMiniImgName = (struct System_String_o *)StringLiteral_18959/*"combine_tutorial_alpha"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v26->alphaMiniImgName, v25, v27, v28, v29, v30, v31, v32);
  v33 = TutorialBigDialog_TypeInfo;
  v34 = TutorialBigDialog_TypeInfo->static_fields;
  *(_QWORD *)&v34->baseCloseButtonPosition.fields.x = 0x4382800043F28000LL;
  v34->baseCloseButtonPosition.fields.z = 0.0;
  v35 = v33->static_fields;
  *(_QWORD *)&v34->baseImgNo = 0x38400000006LL;
  *(_QWORD *)&v35->miniCloseButtonPosition.fields.x = 0x4362000043BD0000LL;
  v35->miniCloseButtonPosition.fields.z = 0.0;
}


void TutorialBigDialog___ctor(TutorialBigDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596F408 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596F408 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void TutorialBigDialog__AddImg(TutorialBigDialog_o *this, UnityEngine_Texture2D_o *tex, const MethodInfo *method)
{
  Il2CppObject *TutorialImagePrefab; // x20
  Il2CppObject *v6; // x20
  System_String_o *v7; // x0
  System_String_o *gameObject; // x0
  __int64 v9; // x1
  Il2CppObject *Component_object; // x23
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t layer; // w22
  UnityEngine_Shader_o *v14; // x24
  UnityEngine_Material_o *v15; // x22
  __int64 v16; // x2
  TutorialBigDialog_c *v17; // x0
  int v18; // w8
  System_String_o **p_alphaMiniImgName; // x8
  Il2CppObject *Object_object__58532980; // x0
  UnityEngine_Transform_o *v21; // x21
  UnityEngine_Transform_o *v22; // x21
  UnityEngine_Transform_o *v23; // x21
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_Collections_Generic_List_object__o *ImagePageList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v32; // x10
  __int64 size; // x11
  Il2CppClass **v34; // x0

  if ( (byte_596F3F9 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_Texture2D____91708360);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UITexture___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TutorialBigDialog_TypeInfo);
    sub_2213A60(&StringLiteral_5128/*"Custom/SpriteWithMask"*/);
    sub_2213A60(&StringLiteral_7894/*"Image"*/);
    sub_2213A60(&StringLiteral_16919/*"_MaskTex"*/);
    byte_596F3F9 = 1;
  }
  TutorialImagePrefab = (Il2CppObject *)this->fields.TutorialImagePrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, tex, method);
  v6 = UnityEngine_Object__Instantiate_object_(
         TutorialImagePrefab,
         (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v7 = System_Int32__ToString((int)this + 248, 0);
  gameObject = System_String__Concat_75651716((System_String_o *)StringLiteral_7894/*"Image"*/, v7, 0);
  if ( !v6 )
    goto LABEL_32;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v6, gameObject, 0);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v6,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_32;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)gameObject, 0);
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v11, v12);
  NGUITools__SetLayer((UnityEngine_GameObject_o *)v6, layer, 0);
  v14 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5128/*"Custom/SpriteWithMask"*/, 0);
  v15 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v15, v14, 0);
  if ( !Component_object )
    goto LABEL_32;
  gameObject = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, UnityEngine_Material_o *, const MethodInfo *))Component_object->klass->vtable[25].methodPtr)(
                                    Component_object,
                                    v15,
                                    Component_object->klass->vtable[25].method);
  if ( !v15 )
    goto LABEL_32;
  UnityEngine_Material__set_mainTexture(v15, (UnityEngine_Texture_o *)tex, 0);
  v17 = TutorialBigDialog_TypeInfo;
  v18 = *(&TutorialBigDialog_TypeInfo->_2.cctor_finished + 1);
  if ( this->fields.sizeKind == 2 )
  {
    if ( !v18 )
    {
      j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo, v9, v16);
      v17 = TutorialBigDialog_TypeInfo;
    }
    p_alphaMiniImgName = &v17->static_fields->alphaMiniImgName;
  }
  else
  {
    if ( !v18 )
    {
      j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo, v9, v16);
      v17 = TutorialBigDialog_TypeInfo;
    }
    p_alphaMiniImgName = &v17->static_fields->alphaImgName;
  }
  gameObject = (System_String_o *)this->fields.alphaTexAssetData;
  if ( !gameObject )
    goto LABEL_32;
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              (AssetData_o *)gameObject,
                              *p_alphaMiniImgName,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16919/*"_MaskTex"*/,
    (UnityEngine_Texture_o *)Object_object__58532980,
    0);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v6, 0, 0);
  gameObject = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v6, 0);
  if ( !this->fields.ImageRoot )
    goto LABEL_32;
  v21 = (UnityEngine_Transform_o *)gameObject;
  gameObject = (System_String_o *)UnityEngine_GameObject__get_transform(this->fields.ImageRoot, 0);
  if ( !v21 )
    goto LABEL_32;
  UnityEngine_Transform__set_parent(v21, (UnityEngine_Transform_o *)gameObject, 0);
  gameObject = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v6, 0);
  v22 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_5969AE0 )
  {
    gameObject = (System_String_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v22 )
    goto LABEL_32;
  UnityEngine_Transform__set_localPosition(v22, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  gameObject = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v6, 0);
  v23 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_5969AE5 )
  {
    gameObject = (System_String_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v23
    || (UnityEngine_Transform__set_localScale(v23, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0),
        (ImagePageList = (System_Collections_Generic_List_object__o *)this->fields.ImagePageList) == 0)
    || (items = ImagePageList->fields._items,
        v32 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++ImagePageList->fields._version,
        !items) )
  {
LABEL_32:
    sub_2213CDC(gameObject, v9);
  }
  size = ImagePageList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      ImagePageList,
      v6,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = &items->obj.klass + size;
    ImagePageList->fields._size = size + 1;
    v34[4] = (Il2CppClass *)v6;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v34 + 4), (int32_t)v6, v24, v25, v26, v27, v28, v29);
  }
}


void TutorialBigDialog__AddScrollImg(
        TutorialBigDialog_o *this,
        AssetData_o *data,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 ObjectNameList; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x2
  int v23; // w8
  __int64 v24; // x25
  unsigned int v25; // w26
  int32_t v26; // w21
  UnityEngine_Texture_o *v27; // x24
  UnityEngine_Texture_o *v28; // x23
  __int64 v29; // x29
  System_String_o **v30; // x29
  __int64 v31; // t1
  unsigned int v32; // w8
  const MethodInfo *v33; // x2
  Il2CppObject *TutorialImageLongPrefab; // x22
  Il2CppObject *v35; // x0
  __int64 *v36; // x22
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  UnityEngine_Object_o *v43; // x25
  System_String_o *v44; // x0
  Il2CppObject *Component_object; // x0
  __int64 v46; // x25
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  UnityEngine_GameObject_o *v53; // x26
  __int64 v54; // x1
  __int64 v55; // x2
  int32_t layer; // w27
  UnityEngine_Shader_o *v57; // x27
  UnityEngine_Material_o *v58; // x26
  __int64 v59; // x2
  UIWidget_o *v60; // x24
  UITexture_o *v61; // x24
  int v62; // w26
  int v63; // w27
  int32_t baseWidth; // w29
  int v65; // w28
  UnityEngine_Transform_o *v66; // x21
  UnityEngine_Transform_o *v67; // x21
  UnityEngine_Transform_o *v68; // x21
  __int64 v69; // x21
  const MethodInfo *v70; // x2
  TutorialBigDialog_c *v71; // x0
  __int64 v72; // x1
  __int64 v73; // x2
  System_String_o *TuorialImagePath; // x19
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v77; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596F3FA & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_Texture2D____91708360);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TutorialImageLong___);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TutorialBigDialog_TypeInfo);
    sub_2213A60(&Method_TutorialBigDialog___c__DisplayClass52_0__AddScrollImg_b__0__);
    sub_2213A60(&TutorialBigDialog___c__DisplayClass52_0_TypeInfo);
    sub_2213A60(&StringLiteral_17450/*"alpha"*/);
    sub_2213A60(&StringLiteral_5128/*"Custom/SpriteWithMask"*/);
    sub_2213A60(&StringLiteral_7894/*"Image"*/);
    sub_2213A60(&StringLiteral_16919/*"_MaskTex"*/);
    byte_596F3FA = 1;
  }
  v7 = sub_2213CCC(TutorialBigDialog___c__DisplayClass52_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_64;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 40), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  if ( !data )
    goto LABEL_64;
  ObjectNameList = (__int64)AssetData__GetObjectNameList(data, 0);
  if ( !ObjectNameList )
    goto LABEL_64;
  v23 = *(_DWORD *)(ObjectNameList + 24);
  v24 = ObjectNameList;
  if ( v23 >= 1 )
  {
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    while ( v25 < v23 )
    {
      v29 = v24 + 8LL * (int)v25;
      v31 = *(_QWORD *)(v29 + 32);
      v30 = (System_String_o **)(v29 + 32);
      ObjectNameList = v31;
      if ( !v31 )
        goto LABEL_64;
      ObjectNameList = System_String__Contains(
                         (System_String_o *)ObjectNameList,
                         (System_String_o *)StringLiteral_17450/*"alpha"*/,
                         0);
      v32 = *(_DWORD *)(v24 + 24);
      if ( (ObjectNameList & 1) != 0 )
      {
        if ( v25 >= v32 )
          break;
        ObjectNameList = (__int64)AssetData__GetObject_object__58532980(
                                    data,
                                    *v30,
                                    (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
        v27 = (UnityEngine_Texture_o *)ObjectNameList;
      }
      else
      {
        if ( v25 >= v32 )
          break;
        ObjectNameList = (__int64)AssetData__GetObject_object__58532980(
                                    data,
                                    *v30,
                                    (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
        if ( v25 >= *(_DWORD *)(v24 + 24) )
          break;
        v28 = (UnityEngine_Texture_o *)ObjectNameList;
        ObjectNameList = TutorialBigDialog__GetScrollHeightWithName((TutorialBigDialog_o *)ObjectNameList, *v30, v33);
        v26 = ObjectNameList;
      }
      v23 = *(_DWORD *)(v24 + 24);
      if ( (int)++v25 >= v23 )
        goto LABEL_19;
    }
    sub_2213CE4(ObjectNameList);
  }
  v28 = 0;
  v27 = 0;
  v26 = 0;
LABEL_19:
  TutorialImageLongPrefab = (Il2CppObject *)this->fields.TutorialImageLongPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v22);
  v35 = UnityEngine_Object__Instantiate_object_(
          TutorialImageLongPrefab,
          (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  *(_QWORD *)(v7 + 32) = v35;
  v36 = (__int64 *)(v7 + 32);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)v35, v37, v38, v39, v40, v41, v42);
  v43 = *(UnityEngine_Object_o **)(v7 + 32);
  v44 = System_Int32__ToString((int)this + 248, 0);
  ObjectNameList = (__int64)System_String__Concat_75651716((System_String_o *)StringLiteral_7894/*"Image"*/, v44, 0);
  if ( !v43 )
    goto LABEL_64;
  UnityEngine_Object__set_name(v43, (System_String_o *)ObjectNameList, 0);
  ObjectNameList = *v36;
  if ( !*v36 )
    goto LABEL_64;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)ObjectNameList,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TutorialImageLong___);
  *(_QWORD *)(v7 + 24) = Component_object;
  v46 = v7 + 24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)Component_object, v47, v48, v49, v50, v51, v52);
  v53 = *(UnityEngine_GameObject_o **)(v7 + 32);
  ObjectNameList = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !ObjectNameList )
    goto LABEL_64;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)ObjectNameList, 0);
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v54, v55);
  NGUITools__SetLayer(v53, layer, 0);
  v57 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5128/*"Custom/SpriteWithMask"*/, 0);
  v58 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v58, v57, 0);
  if ( !*(_QWORD *)v46 )
    goto LABEL_64;
  ObjectNameList = *(_QWORD *)(*(_QWORD *)v46 + 40LL);
  if ( !ObjectNameList )
    goto LABEL_64;
  ObjectNameList = (*(__int64 (__fastcall **)(__int64, UnityEngine_Material_o *, _QWORD))(*(_QWORD *)ObjectNameList
                                                                                        + 712LL))(
                     ObjectNameList,
                     v58,
                     *(_QWORD *)(*(_QWORD *)ObjectNameList + 720LL));
  if ( !v58 )
    goto LABEL_64;
  UnityEngine_Material__set_mainTexture(v58, v28, 0);
  UnityEngine_Material__SetTexture(v58, (System_String_o *)StringLiteral_16919/*"_MaskTex"*/, v27, 0);
  if ( !*(_QWORD *)v46 )
    goto LABEL_64;
  ObjectNameList = *(_QWORD *)(*(_QWORD *)v46 + 40LL);
  if ( !ObjectNameList )
    goto LABEL_64;
  UIWidget__set_height((UIWidget_o *)ObjectNameList, v26, 0);
  if ( !*(_QWORD *)v46 )
    goto LABEL_64;
  v60 = *(UIWidget_o **)(*(_QWORD *)v46 + 40LL);
  ObjectNameList = (__int64)TutorialBigDialog_TypeInfo;
  if ( !*(&TutorialBigDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo, v9, v59);
  if ( !v60 )
    goto LABEL_64;
  UIWidget__set_width(v60, TutorialBigDialog_TypeInfo->static_fields->baseWidth, 0);
  if ( !*(_QWORD *)v46 )
    goto LABEL_64;
  if ( !v28 )
    goto LABEL_64;
  v61 = *(UITexture_o **)(*(_QWORD *)v46 + 40LL);
  v62 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, const MethodInfo *))v28->klass->vtable._6_get_height.methodPtr)(
          v28,
          v28->klass->vtable._6_get_height.method);
  v63 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, const MethodInfo *))v28->klass->vtable._6_get_height.methodPtr)(
          v28,
          v28->klass->vtable._6_get_height.method);
  baseWidth = TutorialBigDialog_TypeInfo->static_fields->baseWidth;
  v65 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, const MethodInfo *))v28->klass->vtable._4_get_width.methodPtr)(
          v28,
          v28->klass->vtable._4_get_width.method);
  ObjectNameList = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, const MethodInfo *))v28->klass->vtable._6_get_height.methodPtr)(
                     v28,
                     v28->klass->vtable._6_get_height.method);
  if ( !v61 )
    goto LABEL_64;
  v77.fields.m_Height = (float)v26 / (float)(int)ObjectNameList;
  v77.fields.m_Width = (float)baseWidth / (float)v65;
  v77.fields.m_YMin = (float)(v62 - v26) / (float)v63;
  v77.fields.m_XMin = 0.0;
  UITexture__set_uvRect(v61, v77, 0);
  if ( !*(_QWORD *)v46 )
    goto LABEL_64;
  ObjectNameList = *(_QWORD *)(*(_QWORD *)v46 + 48LL);
  if ( !ObjectNameList )
    goto LABEL_64;
  v75.fields.y = (float)v26;
  v75.fields.z = 1.0;
  v75.fields.x = (float)TutorialBigDialog_TypeInfo->static_fields->baseWidth;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)ObjectNameList, v75, 0);
  if ( !*(_QWORD *)v46 )
    goto LABEL_64;
  ObjectNameList = *(_QWORD *)(*(_QWORD *)v46 + 48LL);
  if ( !ObjectNameList )
    goto LABEL_64;
  v76.fields.x = 0.0;
  v76.fields.z = 0.0;
  v76.fields.y = vcvts_n_f32_s32(-v26, 1u);
  UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)ObjectNameList, v76, 0);
  if ( !*(_QWORD *)v46 )
    goto LABEL_64;
  ObjectNameList = *(_QWORD *)(*(_QWORD *)v46 + 56LL);
  if ( !ObjectNameList )
    goto LABEL_64;
  UIScrollView__ResetPosition((UIScrollView_o *)ObjectNameList, 0);
  ObjectNameList = *v36;
  if ( !*v36 )
    goto LABEL_64;
  ObjectNameList = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)ObjectNameList, 0);
  if ( !this->fields.ImageRoot )
    goto LABEL_64;
  v66 = (UnityEngine_Transform_o *)ObjectNameList;
  ObjectNameList = (__int64)UnityEngine_GameObject__get_transform(this->fields.ImageRoot, 0);
  if ( !v66 )
    goto LABEL_64;
  UnityEngine_Transform__set_parent(v66, (UnityEngine_Transform_o *)ObjectNameList, 0);
  ObjectNameList = *v36;
  if ( !*v36 )
    goto LABEL_64;
  ObjectNameList = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)ObjectNameList, 0);
  v67 = (UnityEngine_Transform_o *)ObjectNameList;
  if ( !byte_5969AE0 )
  {
    ObjectNameList = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v67 )
    goto LABEL_64;
  UnityEngine_Transform__set_localPosition(v67, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  ObjectNameList = *v36;
  if ( !*v36 )
    goto LABEL_64;
  ObjectNameList = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)ObjectNameList, 0);
  v68 = (UnityEngine_Transform_o *)ObjectNameList;
  if ( !byte_5969AE5 )
  {
    ObjectNameList = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v68 )
    goto LABEL_64;
  UnityEngine_Transform__set_localScale(v68, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  v69 = sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    (AssetLoader_LoadEndDataHandler_o *)v69,
    (Il2CppObject *)v7,
    Method_TutorialBigDialog___c__DisplayClass52_0__AddScrollImg_b__0__,
    0);
  if ( this->fields.baseTexLoadRequested )
  {
    if ( v69 )
    {
      (*(void (__fastcall **)(_QWORD, struct AssetData_o *, _QWORD))(v69 + 24))(
        *(_QWORD *)(v69 + 64),
        this->fields.baseTexAssetData,
        *(_QWORD *)(v69 + 40));
      return;
    }
LABEL_64:
    sub_2213CDC(ObjectNameList, v9);
  }
  v71 = TutorialBigDialog_TypeInfo;
  this->fields.baseTexLoadRequested = 1;
  if ( !*(&v71->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v71, v9, v70);
    v71 = TutorialBigDialog_TypeInfo;
  }
  TuorialImagePath = TutorialBigDialog__GetTuorialImagePath(this, v71->static_fields->baseImgNo, v70);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v72, v73);
  AssetManager__loadAssetStorage(TuorialImagePath, (AssetLoader_LoadEndDataHandler_o *)v69, 1, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void TutorialBigDialog__AfterLoad(TutorialBigDialog_o *this, int32_t addCount, const MethodInfo *method)
{
  _BOOL4 loadByAsset; // w9
  int32_t v5; // w8
  struct System_String_array *assetsImageLoadList; // x9
  struct System_Int32_array *TutorialImageLoadList; // x9
  System_Collections_IEnumerator_o *v8; // x1

  loadByAsset = this->fields.loadByAsset;
  v5 = this->fields._loadIndex + addCount;
  this->fields._loadIndex = v5;
  if ( loadByAsset )
  {
    assetsImageLoadList = this->fields.assetsImageLoadList;
    if ( assetsImageLoadList )
    {
      if ( v5 < SLODWORD(assetsImageLoadList->max_length) )
      {
        TutorialBigDialog__LoadStartAssets(this, *(const MethodInfo **)&addCount);
        return;
      }
      goto LABEL_8;
    }
LABEL_9:
    sub_2213CDC(this, *(_QWORD *)&addCount);
  }
  TutorialImageLoadList = this->fields.TutorialImageLoadList;
  if ( !TutorialImageLoadList )
    goto LABEL_9;
  if ( v5 < SLODWORD(TutorialImageLoadList->max_length) )
  {
    TutorialBigDialog__LoadStart(this, *(const MethodInfo **)&addCount);
    return;
  }
LABEL_8:
  this->fields.CurrentIndex = 0;
  v8 = TutorialBigDialog__WaitPurchase(this, 0, method);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v8, 0);
}


void TutorialBigDialog__Close(TutorialBigDialog_o *this, System_Action_o *callback, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  AndroidBackKeyManager_c *v10; // x8
  System_Action_c *v11; // x0
  System_Action_o *v12; // x20

  if ( (byte_596F401 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AndroidBackKeyManager_TypeInfo);
    sub_2213A60(&Method_TutorialBigDialog_EndClose__);
    byte_596F401 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = AndroidBackKeyManager_TypeInfo;
  v11 = System_Action_TypeInfo;
  this->fields.isButtonEnable = 0;
  v10->static_fields->ToastEnabled = 0;
  v12 = (System_Action_o *)sub_2213CCC(v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_TutorialBigDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v12, 0);
}


void TutorialBigDialog__DestroyImagePageList(TutorialBigDialog_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *current; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_List_GameObject__o *v9; // x8
  int32_t size; // w2
  int v11; // w9
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596F407 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F407 = 1;
  }
  ImagePageList = this->fields.ImagePageList;
  memset(&v12, 0, sizeof(v12));
  if ( ImagePageList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      (System_Collections_Generic_List_object__o *)ImagePageList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v12.fields._current;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
      UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v9 = this->fields.ImagePageList;
    if ( !v9 )
      sub_2213CDC(v7, v8);
    size = v9->fields._size;
    v11 = v9->fields._version + 1;
    v9->fields._size = 0;
    v9->fields._version = v11;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v9->fields._items, 0, size, 0);
    this->fields.CurrentIndex = 0;
  }
}


void TutorialBigDialog__EndClose(TutorialBigDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  TutorialBigDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_2213A04(p_closeCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))v12->fields.invoke_impl)(v12->fields.method_code, v12->fields.method);
  }
}


void TutorialBigDialog__EndOpen(TutorialBigDialog_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  MissionNaviTransitionBoardItem_o *p_endOpenCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *endOpenCallbackFunc; // t1

  this->fields.isButtonEnable = 1;
  TutorialBigDialog__refreshCurrent(this, method);
  endOpenCallbackFunc = this->fields.endOpenCallbackFunc;
  p_endOpenCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.endOpenCallbackFunc;
  v10 = endOpenCallbackFunc;
  if ( endOpenCallbackFunc )
  {
    p_endOpenCallbackFunc->klass = 0;
    sub_2213A04(p_endOpenCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void TutorialBigDialog__EndTurorialRequest(
        TutorialBigDialog_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  ActionExtensions__Call(this->fields.endTurorialRequestFunc, 0);
  TutorialBigDialog__Close(this, this->fields.closeCallbackFunc, v4);
}


int32_t TutorialBigDialog__GetScrollHeightWithName(
        TutorialBigDialog_o *this,
        System_String_o *imageName,
        const MethodInfo *method)
{
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  result = 0;
  if ( !imageName || (this = (TutorialBigDialog_o *)System_String__Split(imageName, 0x5Fu, 0, 0), result = 0, !this) )
    sub_2213CDC(this, imageName);
  if ( ((__int64)this->fields.m_CancellationTokenSource & 0xFFFFFFFC) == 0 )
    sub_2213CE4(this);
  System_Int32__TryParse((System_String_o *)this->fields.maskSprite, &result, 0);
  return result;
}


System_String_o *TutorialBigDialog__GetTuorialImageName(
        TutorialBigDialog_o *this,
        int32_t imgId,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x0
  System_String_o *v5; // x0
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596F3F6 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_26453/*"{0:D4}"*/);
    sub_2213A60(&StringLiteral_25547/*"tutorial_"*/);
    byte_596F3F6 = 1;
  }
  v7 = imgId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v7);
  v5 = System_String__Format((System_String_o *)StringLiteral_26453/*"{0:D4}"*/, v4, 0);
  return System_String__Concat_75651716((System_String_o *)StringLiteral_25547/*"tutorial_"*/, v5, 0);
}


System_String_o *TutorialBigDialog__GetTuorialImagePath(
        TutorialBigDialog_o *this,
        int32_t imgId,
        const MethodInfo *method)
{
  System_String_o *TuorialImageName; // x0

  if ( (byte_596F3F5 & 1) == 0 )
  {
    this = (TutorialBigDialog_o *)sub_2213A60(&StringLiteral_15216/*"Tutorial/"*/);
    byte_596F3F5 = 1;
  }
  TuorialImageName = TutorialBigDialog__GetTuorialImageName(this, imgId, method);
  return System_String__Concat_75651716((System_String_o *)StringLiteral_15216/*"Tutorial/"*/, TuorialImageName, 0);
}


void TutorialBigDialog__Init(TutorialBigDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  MethodInfo *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  TutorialBigDialog_c *v12; // x0
  int v13; // w8
  System_String_o **p_alphaMiniImgPath; // x8
  System_String_o *v15; // x20
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  TutorialBigDialog_c *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  System_String_o *TuorialImagePath; // x20
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  struct System_Int32_array *TutorialImageLoadList; // x23
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v34; // x24
  __int64 v35; // x1
  __int64 v36; // x2
  System_String_o *v37; // x21
  struct System_String_array *assetsImageLoadList; // x8
  struct System_String_array **p_assetsImageLoadList; // x20
  unsigned int v40; // w23
  unsigned int v41; // w9
  System_String_o *v42; // x21

  if ( (byte_596F3EE & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&TutorialBigDialog_TypeInfo);
    byte_596F3EE = 1;
  }
  this->fields.isButtonEnable = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
LABEL_36:
    sub_2213CDC(gameObject, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.IsFading = 0;
  TutorialBigDialog__DestroyImagePageList(this, v5);
  if ( this->fields.alphaTexLoadRequested )
  {
    v12 = TutorialBigDialog_TypeInfo;
    v13 = *(&TutorialBigDialog_TypeInfo->_2.cctor_finished + 1);
    if ( this->fields.sizeKind == 2 )
    {
      if ( !v13 )
      {
        j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo, v4, v6);
        v12 = TutorialBigDialog_TypeInfo;
      }
      p_alphaMiniImgPath = &v12->static_fields->alphaMiniImgPath;
    }
    else
    {
      if ( !v13 )
      {
        j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo, v4, v6);
        v12 = TutorialBigDialog_TypeInfo;
      }
      p_alphaMiniImgPath = &v12->static_fields->alphaImgPath;
    }
    v15 = *p_alphaMiniImgPath;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v4, v6);
    AssetManager__releaseAssetStorage(v15, 0);
    this->fields.alphaTexAssetData = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.alphaTexAssetData, 0, v16, v17, v18, v19, v20, v21);
    this->fields.alphaTexLoadRequested = 0;
  }
  if ( this->fields.baseTexLoadRequested )
  {
    v22 = TutorialBigDialog_TypeInfo;
    if ( !*(&TutorialBigDialog_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo, v4, v6);
      v22 = TutorialBigDialog_TypeInfo;
    }
    TuorialImagePath = TutorialBigDialog__GetTuorialImagePath(this, v22->static_fields->baseImgNo, v6);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v23, v24);
    AssetManager__releaseAssetStorage(TuorialImagePath, 0);
    this->fields.baseTexAssetData = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.baseTexAssetData, 0, v26, v27, v28, v29, v30, v31);
    this->fields.baseTexLoadRequested = 0;
  }
  TutorialImageLoadList = this->fields.TutorialImageLoadList;
  if ( TutorialImageLoadList )
  {
    max_length = TutorialImageLoadList->max_length;
    if ( (int)max_length >= 1 )
    {
      v34 = 0;
      do
      {
        if ( v34 >= (unsigned int)max_length )
LABEL_39:
          sub_2213CE4(gameObject);
        v37 = TutorialBigDialog__GetTuorialImagePath(this, TutorialImageLoadList->m_Items[v34], v6);
        if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v35, v36);
        AssetManager__releaseAssetStorage(v37, 0);
        LODWORD(max_length) = TutorialImageLoadList->max_length;
        ++v34;
      }
      while ( (__int64)v34 < (int)max_length );
    }
    this->fields.TutorialImageLoadList = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.TutorialImageLoadList,
      0,
      (System_String_o *)v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  p_assetsImageLoadList = &this->fields.assetsImageLoadList;
  assetsImageLoadList = this->fields.assetsImageLoadList;
  if ( assetsImageLoadList )
  {
    v40 = 0;
    while ( 1 )
    {
      v41 = assetsImageLoadList->max_length;
      if ( (int)v40 >= (int)v41 )
        break;
      if ( v40 >= v41 )
        goto LABEL_39;
      v42 = assetsImageLoadList->m_Items[v40];
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v4, v6);
      AssetManager__releaseAssetStorage(v42, 0);
      assetsImageLoadList = *p_assetsImageLoadList;
      v40 += 2;
      if ( !*p_assetsImageLoadList )
        goto LABEL_36;
    }
    *p_assetsImageLoadList = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.assetsImageLoadList,
      0,
      (System_String_o *)v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void TutorialBigDialog__LoadAlpha(TutorialBigDialog_o *this, System_Action_o *callback, const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  __int64 v21; // x2
  TutorialBigDialog_c *v22; // x0
  int32_t sizeKind; // w9
  int v24; // w8
  System_String_o **p_alphaMiniImgPath; // x8
  System_String_o *v26; // x20
  AssetLoader_LoadEndDataHandler_o *v27; // x21
  __int64 v28; // x1
  __int64 v29; // x2

  if ( (byte_596F3FC & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&TutorialBigDialog_TypeInfo);
    sub_2213A60(&Method_TutorialBigDialog___c__DisplayClass55_0__LoadAlpha_b__0__);
    sub_2213A60(&TutorialBigDialog___c__DisplayClass55_0_TypeInfo);
    byte_596F3FC = 1;
  }
  v5 = sub_2213CCC(TutorialBigDialog___c__DisplayClass55_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  v22 = TutorialBigDialog_TypeInfo;
  sizeKind = this->fields.sizeKind;
  this->fields.alphaTexLoadRequested = 1;
  v24 = *(&v22->_2.cctor_finished + 1);
  if ( sizeKind == 2 )
  {
    if ( !v24 )
    {
      j_il2cpp_runtime_class_init_0(v22, v20, v21);
      v22 = TutorialBigDialog_TypeInfo;
    }
    p_alphaMiniImgPath = &v22->static_fields->alphaMiniImgPath;
  }
  else
  {
    if ( !v24 )
    {
      j_il2cpp_runtime_class_init_0(v22, v20, v21);
      v22 = TutorialBigDialog_TypeInfo;
    }
    p_alphaMiniImgPath = &v22->static_fields->alphaImgPath;
  }
  v26 = *p_alphaMiniImgPath;
  v27 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v27,
    (Il2CppObject *)v5,
    Method_TutorialBigDialog___c__DisplayClass55_0__LoadAlpha_b__0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v28, v29);
  AssetManager__loadAssetStorage(v26, v27, 1, 0, 0);
}


void TutorialBigDialog__LoadImages(TutorialBigDialog_o *this, System_Int32_array *images, const MethodInfo *method)
{
  System_Collections_Generic_List_GameObject__c *v4; // x0
  System_Collections_Generic_List_object__o *v5; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  System_Action_o *v14; // x20
  const MethodInfo *v15; // x2

  if ( (byte_596F3F3 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_TutorialBigDialog_LoadStart__);
    byte_596F3F3 = 1;
  }
  v4 = System_Collections_Generic_List_GameObject__TypeInfo;
  this->fields._loadIndex = 0;
  this->fields.loadByAsset = 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v4);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.ImagePageList = (struct System_Collections_Generic_List_GameObject__o *)v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.ImagePageList, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v13);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
  v14 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_TutorialBigDialog_LoadStart__, 0);
  TutorialBigDialog__LoadAlpha(this, v14, v15);
}


void TutorialBigDialog__LoadImages_47092164(
        TutorialBigDialog_o *this,
        System_String_array *images,
        const MethodInfo *method)
{
  System_Collections_Generic_List_GameObject__c *v4; // x0
  System_Collections_Generic_List_object__o *v5; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  System_Action_o *v14; // x20
  const MethodInfo *v15; // x2

  if ( (byte_596F3F4 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_TutorialBigDialog_LoadStartAssets__);
    byte_596F3F4 = 1;
  }
  v4 = System_Collections_Generic_List_GameObject__TypeInfo;
  this->fields._loadIndex = 0;
  this->fields.loadByAsset = 1;
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v4);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.ImagePageList = (struct System_Collections_Generic_List_GameObject__o *)v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.ImagePageList, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v13);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
  v14 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_TutorialBigDialog_LoadStartAssets__, 0);
  TutorialBigDialog__LoadAlpha(this, v14, v15);
}


void TutorialBigDialog__LoadStart(TutorialBigDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TutorialBigDialog_o *v3; // x19
  struct System_Int32_array *TutorialImageLoadList; // x8
  __int64 loadIndex; // x9
  System_String_o *TuorialImagePath; // x20
  AssetLoader_LoadEndDataHandler_o *v7; // x21
  __int64 v8; // x1
  __int64 v9; // x2

  v3 = this;
  if ( (byte_596F3F7 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    this = (TutorialBigDialog_o *)sub_2213A60(&Method_TutorialBigDialog__LoadStart_b__49_0__);
    byte_596F3F7 = 1;
  }
  TutorialImageLoadList = v3->fields.TutorialImageLoadList;
  if ( !TutorialImageLoadList )
    sub_2213CDC(this, method);
  loadIndex = v3->fields._loadIndex;
  if ( (unsigned int)loadIndex >= LODWORD(TutorialImageLoadList->max_length) )
    sub_2213CE4(this);
  TuorialImagePath = TutorialBigDialog__GetTuorialImagePath(v3, TutorialImageLoadList->m_Items[loadIndex], v2);
  v7 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v7, (Il2CppObject *)v3, Method_TutorialBigDialog__LoadStart_b__49_0__, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v8, v9);
  AssetManager__loadAssetStorage(TuorialImagePath, v7, 1, 0, 0);
}


void TutorialBigDialog__LoadStartAssets(TutorialBigDialog_o *this, const MethodInfo *method)
{
  TutorialBigDialog_o *v2; // x19
  struct System_String_array *assetsImageLoadList; // x8
  __int64 loadIndex; // x9
  System_String_o *v5; // x20
  AssetLoader_LoadEndDataHandler_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x2

  v2 = this;
  if ( (byte_596F3F8 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    this = (TutorialBigDialog_o *)sub_2213A60(&Method_TutorialBigDialog__LoadStartAssets_b__50_0__);
    byte_596F3F8 = 1;
  }
  assetsImageLoadList = v2->fields.assetsImageLoadList;
  if ( !assetsImageLoadList )
    sub_2213CDC(this, method);
  loadIndex = v2->fields._loadIndex;
  if ( (unsigned int)loadIndex >= LODWORD(assetsImageLoadList->max_length) )
    sub_2213CE4(this);
  v5 = assetsImageLoadList->m_Items[loadIndex];
  v6 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v6, (Il2CppObject *)v2, Method_TutorialBigDialog__LoadStartAssets_b__50_0__, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7, v8);
  AssetManager__loadAssetStorage(v5, v6, 1, 0, 0);
}


void TutorialBigDialog__OnBottomButton(TutorialBigDialog_o *this, const MethodInfo *method)
{
  TutorialBigDialog_o *v2; // x19
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  v2 = this;
  if ( (byte_596F404 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    this = (TutorialBigDialog_o *)sub_2213A60(&Method_TutorialBigDialog_OnBottomButton__);
    byte_596F404 = 1;
  }
  if ( !v2->fields.IsFading )
  {
    ImagePageList = v2->fields.ImagePageList;
    if ( !ImagePageList )
      sub_2213CDC(this, method);
    if ( v2->fields.CurrentIndex == ImagePageList->fields._size - 1 )
    {
      v4 = Method_TutorialBigDialog_OnBottomButton__;
      if ( (*((_BYTE *)Method_TutorialBigDialog_OnBottomButton__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_2213A78(Method_TutorialBigDialog_OnBottomButton__);
      v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
      TutorialBigDialog__OnClickClose(v2, v6);
    }
  }
}


void TutorialBigDialog__OnClickClose(TutorialBigDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  NetworkManager_ResultCallbackFunc_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Request_object; // x0
  __int64 v10; // x1
  int32_t eventFlagId; // w1
  int32_t eventId; // w0
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2

  if ( (byte_596F405 & 1) == 0 )
  {
    sub_2213A60(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_2213A60(&Method_NetworkManager_getRequest_TutorialSetRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&Method_TutorialBigDialog_EndTurorialRequest__);
    sub_2213A60(&Method_TutorialBigDialog_OnClickClose__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596F405 = 1;
  }
  if ( !this->fields.IsFading && this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v3 = Method_TutorialBigDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_TutorialBigDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_TutorialBigDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    if ( this->fields.flagId != -1 )
    {
      v6 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_TutorialBigDialog_EndTurorialRequest__,
        0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v8);
      Request_object = NetworkManager__getRequest_object_(
                         v6,
                         (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
      if ( Request_object )
      {
        TutorialSetRequest__beginRequest((TutorialSetRequest_o *)Request_object, this->fields.flagId, 0);
        return;
      }
LABEL_22:
      sub_2213CDC(Request_object, v10);
    }
    eventFlagId = this->fields.eventFlagId;
    if ( eventFlagId == -1 )
      goto LABEL_17;
    eventId = this->fields.eventId;
    if ( !eventId )
      goto LABEL_17;
    if ( this->fields.isNoRequestTutorialFlag )
    {
      EventTutorialMaster__SaveOnceDailyDispTutorialTime(eventId, eventFlagId, 0);
      ActionExtensions__Call(this->fields.endTurorialRequestFunc, 0);
LABEL_17:
      TutorialBigDialog__Close(this, this->fields.closeCallbackFunc, v5);
      return;
    }
    v13 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_TutorialBigDialog_EndTurorialRequest__,
      0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14, v15);
    Request_object = NetworkManager__getRequest_object_(
                       v13,
                       (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    if ( !Request_object )
      goto LABEL_22;
    TutorialEventSetRequest__beginRequest(
      (TutorialEventSetRequest_o *)Request_object,
      this->fields.eventFlagId,
      this->fields.eventId,
      0);
  }
}


void TutorialBigDialog__OnNextButton(TutorialBigDialog_o *this, const MethodInfo *method)
{
  TutorialBigDialog_o *v2; // x19
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  v2 = this;
  if ( (byte_596F402 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    this = (TutorialBigDialog_o *)sub_2213A60(&Method_TutorialBigDialog_OnNextButton__);
    byte_596F402 = 1;
  }
  if ( !v2->fields.IsFading )
  {
    ImagePageList = v2->fields.ImagePageList;
    if ( !ImagePageList )
      sub_2213CDC(this, method);
    if ( v2->fields.CurrentIndex != ImagePageList->fields._size - 1 )
    {
      v4 = Method_TutorialBigDialog_OnNextButton__;
      if ( (*((_BYTE *)Method_TutorialBigDialog_OnNextButton__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_2213A78(Method_TutorialBigDialog_OnNextButton__);
      v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
      TutorialBigDialog__UpdatePage(v2, v2->fields.CurrentIndex + 1, v6);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void TutorialBigDialog__OnPageChange(TutorialBigDialog_o *this, int32_t idx, const MethodInfo *method)
{
  TutorialBigDialog_o *v4; // x20
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x8
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0

  v4 = this;
  if ( (byte_596F406 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    this = (TutorialBigDialog_o *)sub_2213A60(&Method_TutorialBigDialog_OnPageChange__);
    byte_596F406 = 1;
  }
  if ( (idx & 0x80000000) == 0 && v4->fields.CurrentIndex != idx )
  {
    ImagePageList = v4->fields.ImagePageList;
    if ( !ImagePageList )
      sub_2213CDC(this, *(_QWORD *)&idx);
    if ( ImagePageList->fields._size > idx )
    {
      v6 = Method_TutorialBigDialog_OnPageChange__;
      if ( (*((_BYTE *)Method_TutorialBigDialog_OnPageChange__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_2213A78(Method_TutorialBigDialog_OnPageChange__);
      v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
    }
  }
}


void TutorialBigDialog__OnPrevButton(TutorialBigDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_596F403 & 1) == 0 )
  {
    sub_2213A60(&Method_TutorialBigDialog_OnPrevButton__);
    byte_596F403 = 1;
  }
  if ( !this->fields.IsFading && this->fields.CurrentIndex >= 1 )
  {
    v3 = Method_TutorialBigDialog_OnPrevButton__;
    if ( (*((_BYTE *)Method_TutorialBigDialog_OnPrevButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_TutorialBigDialog_OnPrevButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    TutorialBigDialog__UpdatePage(this, this->fields.CurrentIndex - 1, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void TutorialBigDialog__Open(
        TutorialBigDialog_o *this,
        TutorialFlag_ImageId_array *images,
        int32_t flagId,
        System_Action_o *closeFunc,
        System_Action_o *endOpenFunc,
        System_Action_o *endTurorialRequestFunc,
        const MethodInfo *method)
{
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  __int64 v31; // x1
  UnityEngine_GameObject_o *CloseButton; // x0
  __int64 v33; // x2
  UnityEngine_Transform_o *v34; // x21
  struct System_Int32_array *v35; // x0
  struct System_Int32_array **p_TutorialImageLoadList; // x21
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  struct System_Int32_array *v43; // x9
  unsigned __int64 v44; // x8
  __int64 max_length; // x10
  __int64 m_Items; // x12
  System_Int32_array *v47; // x1
  const MethodInfo *v48; // x2
  const MethodInfo *v49; // x2

  if ( (byte_596F3EF & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&TutorialBigDialog_TypeInfo);
    byte_596F3EF = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&flagId);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.endOpenCallbackFunc,
    (int32_t)endOpenFunc,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.endTurorialRequestFunc,
    (int32_t)endTurorialRequestFunc,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.closeCallbackFunc = closeFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)closeFunc,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  CloseButton = this->fields.CloseButton;
  this->fields.flagId = flagId;
  this->fields.sizeKind = 1;
  *(_QWORD *)&this->fields.eventFlagId = 0xFFFFFFFFLL;
  if ( !CloseButton )
    goto LABEL_17;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0);
  v34 = (UnityEngine_Transform_o *)CloseButton;
  if ( !*(&TutorialBigDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo, v31, v33);
  if ( !v34 )
    goto LABEL_17;
  UnityEngine_Transform__set_localPosition(v34, TutorialBigDialog_TypeInfo->static_fields->baseCloseButtonPosition, 0);
  if ( !images )
    goto LABEL_17;
  v35 = (struct System_Int32_array *)sub_2213B20(int___TypeInfo, LODWORD(images->max_length));
  this->fields.TutorialImageLoadList = v35;
  p_TutorialImageLoadList = &this->fields.TutorialImageLoadList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.TutorialImageLoadList,
    (int32_t)v35,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  if ( (int)images->max_length >= 1 )
  {
    v43 = *p_TutorialImageLoadList;
    v44 = 0;
    max_length = (unsigned int)images->max_length;
    m_Items = (__int64)(*p_TutorialImageLoadList)->m_Items;
    while ( v43 )
    {
      if ( v44 >= LODWORD(v43->max_length) )
        sub_2213CE4(CloseButton);
      *(_DWORD *)(m_Items + 4 * v44) = images->m_Items[v44];
      if ( max_length == ++v44 )
        goto LABEL_15;
    }
LABEL_17:
    sub_2213CDC(CloseButton, v31);
  }
LABEL_15:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMask((BaseDialog_o *)this, 0, 0);
  TutorialBigDialog__LoadImages(this, v47, v48);
  CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !CloseButton )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0);
  TutorialBigDialog__UpdateButtons(this, 1, v49);
}


// local variable allocation has failed, the output may be wrong!
void TutorialBigDialog__OpenAssets(
        TutorialBigDialog_o *this,
        System_Int32_array *images,
        int32_t kind,
        System_Action_o *closeFunc,
        const MethodInfo *method)
{
  System_Action_o *v9; // x23
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x1
  UnityEngine_GameObject_o *CloseButton; // x0
  __int64 v30; // x2
  UnityEngine_Transform_o *v31; // x21
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  Il2CppObject *Component_object; // x21
  EventDelegate_Callback_o *v39; // x22
  EventDelegate_o *v40; // x20
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v48; // x9
  __int64 klass_low; // x10
  intptr_t v50; // x8
  System_Int32_array *v51; // x1
  const MethodInfo *v52; // x2
  const MethodInfo *v53; // x2

  if ( (byte_596F3F2 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_2213A60(&Method_TutorialBigDialog__OpenAssets_b__43_0__);
    sub_2213A60(&Method_TutorialBigDialog__OpenAssets_b__43_1__);
    sub_2213A60(&TutorialBigDialog_TypeInfo);
    byte_596F3F2 = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&kind);
  v9 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_TutorialBigDialog__OpenAssets_b__43_0__, 0);
  this->fields.endOpenCallbackFunc = v9;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.endOpenCallbackFunc,
    (int32_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  this->fields.endTurorialRequestFunc = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.endTurorialRequestFunc, 0, v16, v17, v18, v19, v20, v21);
  this->fields.closeCallbackFunc = closeFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)closeFunc,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  CloseButton = this->fields.CloseButton;
  this->fields.eventId = 0;
  this->fields.sizeKind = kind;
  *(_QWORD *)&this->fields.flagId = -1;
  if ( !CloseButton )
    goto LABEL_18;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0);
  v31 = (UnityEngine_Transform_o *)CloseButton;
  if ( !*(&TutorialBigDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo, v28, v30);
  if ( !v31 )
    goto LABEL_18;
  UnityEngine_Transform__set_localPosition(v31, TutorialBigDialog_TypeInfo->static_fields->miniCloseButtonPosition, 0);
  this->fields.TutorialImageLoadList = images;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.TutorialImageLoadList,
    (int32_t)images,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  CloseButton = this->fields.TouchMask;
  this->fields.isButtonEnable = 0;
  if ( !CloseButton )
    goto LABEL_18;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       CloseButton,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
  v39 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v39, (Il2CppObject *)this, Method_TutorialBigDialog__OpenAssets_b__43_1__, 0);
  v40 = (EventDelegate_o *)sub_2213CCC(EventDelegate_TypeInfo);
  EventDelegate___ctor_56337280(v40, v39, 0);
  if ( !Component_object )
    goto LABEL_18;
  CloseButton = (UnityEngine_GameObject_o *)Component_object[2].klass;
  if ( !CloseButton )
    goto LABEL_18;
  m_CachedPtr = CloseButton->fields.m_CachedPtr;
  v48 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++HIDWORD(CloseButton[1].klass);
  if ( !m_CachedPtr )
    goto LABEL_18;
  klass_low = SLODWORD(CloseButton[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)CloseButton,
      (Il2CppObject *)v40,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
  }
  else
  {
    v50 = m_CachedPtr + 8 * klass_low;
    LODWORD(CloseButton[1].klass) = klass_low + 1;
    *(_QWORD *)(v50 + 32) = v40;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v50 + 32), (int32_t)v40, v41, v42, v43, v44, v45, v46);
  }
  BaseDialog__SetMask((BaseDialog_o *)this, 0, 0);
  TutorialBigDialog__LoadImages(this, v51, v52);
  CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !CloseButton )
LABEL_18:
    sub_2213CDC(CloseButton, v28);
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0);
  TutorialBigDialog__UpdateButtons(this, 1, v53);
}


void TutorialBigDialog__OpenWindow(TutorialBigDialog_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_596F3FD & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_TutorialBigDialog_EndOpen__);
    byte_596F3FD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
  v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_TutorialBigDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v5, 1, 0, 0);
}


void TutorialBigDialog__OpenWithAssets(
        TutorialBigDialog_o *this,
        System_String_array *images,
        System_Action_o *closeFunc,
        System_Action_o *endOpenFunc,
        System_Action_o *endTurorialRequestFunc,
        const MethodInfo *method)
{
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  __int64 v29; // x1
  UnityEngine_GameObject_o *CloseButton; // x0
  __int64 v31; // x2
  UnityEngine_Transform_o *v32; // x21
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_String_array *v39; // x1
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x2

  if ( (byte_596F3F1 & 1) == 0 )
  {
    sub_2213A60(&TutorialBigDialog_TypeInfo);
    byte_596F3F1 = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, (const MethodInfo *)closeFunc);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.endOpenCallbackFunc,
    (int32_t)endOpenFunc,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.endTurorialRequestFunc,
    (int32_t)endTurorialRequestFunc,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.closeCallbackFunc = closeFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)closeFunc,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  CloseButton = this->fields.CloseButton;
  this->fields.eventId = 0;
  this->fields.sizeKind = 1;
  *(_QWORD *)&this->fields.flagId = -1;
  if ( !CloseButton )
    goto LABEL_11;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0);
  v32 = (UnityEngine_Transform_o *)CloseButton;
  if ( !*(&TutorialBigDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo, v29, v31);
  if ( !v32
    || (UnityEngine_Transform__set_localPosition(
          v32,
          TutorialBigDialog_TypeInfo->static_fields->baseCloseButtonPosition,
          0),
        this->fields.assetsImageLoadList = images,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.assetsImageLoadList,
          (int32_t)images,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38),
        this->fields.isButtonEnable = 0,
        BaseDialog__SetMask((BaseDialog_o *)this, 0, 0),
        TutorialBigDialog__LoadImages_47092164(this, v39, v40),
        (CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_11:
    sub_2213CDC(CloseButton, v29);
  }
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0);
  TutorialBigDialog__UpdateButtons(this, 1, v41);
}


void TutorialBigDialog__Open_47091404(
        TutorialBigDialog_o *this,
        System_Int32_array *images,
        int32_t flagId,
        int32_t eventId,
        System_Action_o *closeFunc,
        System_Action_o *endOpenFunc,
        System_Action_o *endTurorialRequestFunc,
        bool inputIsNoRequestTutorialFlag,
        const MethodInfo *method)
{
  const MethodInfo *v17; // x2
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  __int64 v36; // x1
  UnityEngine_GameObject_o *CloseButton; // x0
  __int64 v38; // x2
  UnityEngine_Transform_o *v39; // x22
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  System_Int32_array *v46; // x1
  const MethodInfo *v47; // x2
  const MethodInfo *v48; // x2

  if ( (byte_596F3F0 & 1) == 0 )
  {
    sub_2213A60(&TutorialBigDialog_TypeInfo);
    byte_596F3F0 = 1;
  }
  if ( this->fields.IsInitialized )
  {
    TutorialBigDialog__DestroyImagePageList(this, (const MethodInfo *)images);
  }
  else
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, v17);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.endOpenCallbackFunc,
    (int32_t)endOpenFunc,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.endTurorialRequestFunc,
    (int32_t)endTurorialRequestFunc,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields.closeCallbackFunc = closeFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)closeFunc,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  CloseButton = this->fields.CloseButton;
  this->fields.eventId = eventId;
  this->fields.flagId = -1;
  this->fields.eventFlagId = flagId;
  this->fields.sizeKind = 1;
  if ( !CloseButton )
    goto LABEL_12;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0);
  v39 = (UnityEngine_Transform_o *)CloseButton;
  if ( !*(&TutorialBigDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo, v36, v38);
  if ( !v39 )
    goto LABEL_12;
  UnityEngine_Transform__set_localPosition(v39, TutorialBigDialog_TypeInfo->static_fields->baseCloseButtonPosition, 0);
  this->fields.TutorialImageLoadList = images;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.TutorialImageLoadList,
    (int32_t)images,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  this->fields.isButtonEnable = 0;
  this->fields.isNoRequestTutorialFlag = inputIsNoRequestTutorialFlag;
  BaseDialog__SetMask((BaseDialog_o *)this, 0, 0);
  TutorialBigDialog__LoadImages(this, v46, v47);
  CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !CloseButton )
LABEL_12:
    sub_2213CDC(CloseButton, v36);
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0);
  TutorialBigDialog__UpdateButtons(this, 1, v48);
}


// local variable allocation has failed, the output may be wrong!
void TutorialBigDialog__SetTouchMask(TutorialBigDialog_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_GameObject_o *TouchMask; // x0

  TouchMask = this->fields.TouchMask;
  if ( !TouchMask
    || (TouchMask = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(TouchMask, 0)) == 0
    || (TouchMask = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                  (UnityEngine_Transform_o *)TouchMask,
                                                  0)) == 0
    || (TouchMask = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)TouchMask, 0)) == 0 )
  {
    sub_2213CDC(TouchMask, isDisp);
  }
  UnityEngine_GameObject__SetActive(TouchMask, isDisp, 0);
}


// local variable allocation has failed, the output may be wrong!
void TutorialBigDialog__UpdateButtons(TutorialBigDialog_o *this, bool isDisp, const MethodInfo *method)
{
  TutorialBigDialog_o *v4; // x19
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x8
  __int64 v6; // x2
  UILabel_o *basePanel; // x20
  __int64 v8; // x2
  UILabel_o *v9; // x19

  v4 = this;
  if ( (byte_596F3FF & 1) == 0 )
  {
    sub_2213A60(&AndroidBackKeyManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____91731968);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_14097/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/);
    this = (TutorialBigDialog_o *)sub_2213A60(&StringLiteral_14098/*"TUTORIAL_IMAGE_DIALOG_PREV"*/);
    byte_596F3FF = 1;
  }
  if ( !isDisp )
  {
    this = (TutorialBigDialog_o *)v4->fields.CloseButton;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      this = (TutorialBigDialog_o *)v4->fields.NextButton;
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        this = (TutorialBigDialog_o *)v4->fields.PrevButton;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
          return;
        }
      }
    }
    goto LABEL_36;
  }
  ImagePageList = v4->fields.ImagePageList;
  if ( !ImagePageList )
    goto LABEL_36;
  this = (TutorialBigDialog_o *)v4->fields.CloseButton;
  if ( v4->fields.CurrentIndex == ImagePageList->fields._size - 1 )
  {
    if ( !this )
      goto LABEL_36;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (TutorialBigDialog_o *)v4->fields.NextButton;
    if ( !this )
      goto LABEL_36;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    AndroidBackKeyManager__AddBackBtn(v4->fields.CloseButton, 0);
  }
  else
  {
    if ( !this )
      goto LABEL_36;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = (TutorialBigDialog_o *)v4->fields.NextButton;
    if ( !this )
      goto LABEL_36;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    AndroidBackKeyManager__AddBackBtn(v4->fields.PrevButton, 0);
    this = (TutorialBigDialog_o *)v4->fields.NextButton;
    if ( !this )
      goto LABEL_36;
    this = (TutorialBigDialog_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    if ( !this )
      goto LABEL_36;
    this = (TutorialBigDialog_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                    (UnityEngine_Component_o *)this,
                                    1,
                                    (const MethodInfo_38217CC *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____91731968);
    if ( !this )
      goto LABEL_36;
    if ( !LODWORD(this->fields.m_CancellationTokenSource) )
LABEL_37:
      sub_2213CE4(this);
    basePanel = (UILabel_o *)this->fields.basePanel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, isDisp, v6);
    this = (TutorialBigDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14097/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, 0);
    if ( !basePanel )
LABEL_36:
      sub_2213CDC(this, isDisp);
    UILabel__set_text(basePanel, (System_String_o *)this, 0);
  }
  this = (TutorialBigDialog_o *)v4->fields.PrevButton;
  if ( v4->fields.CurrentIndex < 1 )
  {
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      goto LABEL_35;
    }
    goto LABEL_36;
  }
  if ( !this )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  this = (TutorialBigDialog_o *)v4->fields.PrevButton;
  if ( !this )
    goto LABEL_36;
  this = (TutorialBigDialog_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_36;
  this = (TutorialBigDialog_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                  (UnityEngine_Component_o *)this,
                                  1,
                                  (const MethodInfo_38217CC *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____91731968);
  if ( !this )
    goto LABEL_36;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_37;
  v9 = (UILabel_o *)this->fields.basePanel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, isDisp, v8);
  this = (TutorialBigDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14098/*"TUTORIAL_IMAGE_DIALOG_PREV"*/, 0);
  if ( !v9 )
    goto LABEL_36;
  UILabel__set_text(v9, (System_String_o *)this, 0);
LABEL_35:
  AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 1;
}


void TutorialBigDialog__UpdatePage(TutorialBigDialog_o *this, int32_t dispIndex, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t CurrentIndex; // w26
  struct UITexture_o **p_FadeInTarget; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x8
  int size; // w27
  int32_t i; // w23
  UnityEngine_GameObject_o *v24; // x24
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  long double v31; // q0
  System_Collections_Generic_List_object__o *v32; // x25
  bool v33; // w1
  __int64 v34; // x1
  __int64 v35; // x2
  UnityEngine_GameObject_o *gameObject; // x21
  TutorialBigDialog_c *v37; // x8
  UnityEngine_GameObject_o *v38; // x0
  UITweener_o *v39; // x20
  EventDelegate_Callback_o *v40; // x21

  if ( (byte_596F3FE & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UITexture___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&Method_TutorialBigDialog__UpdatePage_b__57_0__);
    sub_2213A60(&TutorialBigDialog_TypeInfo);
    byte_596F3FE = 1;
  }
  CurrentIndex = this->fields.CurrentIndex;
  this->fields.FadeInTarget = 0;
  p_FadeInTarget = &this->fields.FadeInTarget;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.FadeInTarget,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.FadeOutTarget = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.FadeOutTarget, 0, v12, v13, v14, v15, v16, v17);
  ImagePageList = this->fields.ImagePageList;
  if ( !ImagePageList )
    goto LABEL_27;
  size = ImagePageList->fields._size;
  if ( size >= 1 )
  {
    for ( i = 0; size != i; ++i )
    {
      Item = (System_Collections_Generic_List_object__o *)this->fields.ImagePageList;
      if ( !Item )
        goto LABEL_27;
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            Item,
                                                            i,
                                                            (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !Item )
        goto LABEL_27;
      v24 = (UnityEngine_GameObject_o *)Item;
      Item = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                            (UnityEngine_GameObject_o *)Item,
                                                            (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
      v32 = Item;
      if ( dispIndex == i )
      {
        if ( CurrentIndex == dispIndex )
        {
          LODWORD(v31) = 1.0;
          if ( !Item )
            goto LABEL_27;
        }
        else
        {
          *p_FadeInTarget = (struct UITexture_o *)Item;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.FadeInTarget,
            (int32_t)Item,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30);
          LODWORD(v31) = 1000593162;
          if ( !v32 )
            goto LABEL_27;
        }
        ((void (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *, long double))v32->klass->vtable._8_unknown.methodPtr)(
          v32,
          v32->klass->vtable._8_unknown.method,
          v31);
      }
      else
      {
        v33 = 0;
        if ( i != this->fields.CurrentIndex || CurrentIndex == dispIndex )
          goto LABEL_18;
        this->fields.FadeOutTarget = (struct UITexture_o *)Item;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.FadeOutTarget,
          (int32_t)Item,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30);
      }
      v33 = 1;
LABEL_18:
      UnityEngine_GameObject__SetActive(v24, v33, 0);
    }
  }
  this->fields.CurrentIndex = dispIndex;
  if ( CurrentIndex == dispIndex )
  {
    TutorialBigDialog__UpdateButtons(this, 1, v20);
    return;
  }
  Item = (System_Collections_Generic_List_object__o *)this->fields.FadeOutTarget;
  this->fields.IsFading = 1;
  if ( !Item )
    goto LABEL_27;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Item, 0);
  v37 = TutorialBigDialog_TypeInfo;
  if ( !*(&TutorialBigDialog_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo, v34, v35);
    v37 = TutorialBigDialog_TypeInfo;
  }
  TweenAlpha__Begin(gameObject, v37->static_fields->FADE_TIME, 0.0, 0);
  Item = (System_Collections_Generic_List_object__o *)*p_FadeInTarget;
  if ( !*p_FadeInTarget
    || (v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Item, 0),
        v39 = (UITweener_o *)TweenAlpha__Begin(v38, TutorialBigDialog_TypeInfo->static_fields->FADE_TIME, 1.0, 0),
        v40 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(v40, (Il2CppObject *)this, Method_TutorialBigDialog__UpdatePage_b__57_0__, 0),
        !v39) )
  {
LABEL_27:
    sub_2213CDC(Item, v19);
  }
  UITweener__SetOnFinished(v39, v40, 0);
}


System_Collections_IEnumerator_o *TutorialBigDialog__WaitPurchase(
        TutorialBigDialog_o *this,
        int32_t CurrentIndex,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Collections_IEnumerator_o *result; // x0

  if ( (byte_596F3FB & 1) == 0 )
  {
    sub_2213A60(&TutorialBigDialog__WaitPurchase_d__54_TypeInfo);
    byte_596F3FB = 1;
  }
  v5 = sub_2213CCC(TutorialBigDialog__WaitPurchase_d__54_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  result = (System_Collections_IEnumerator_o *)v5;
  *(_DWORD *)(v5 + 40) = CurrentIndex;
  return result;
}


void TutorialBigDialog___LoadStartAssets_b__50_0(
        TutorialBigDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  TutorialBigDialog_o *v4; // x19
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x3
  struct System_String_array *assetsImageLoadList; // x8
  int v8; // w9
  Il2CppObject *Object_object__58532980; // x0
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  v4 = this;
  if ( (byte_596F40B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_AssetData_GetObject_Texture2D____91708360);
    sub_2213A60(&Method_TutorialBigDialog__LoadStartAssets_b__50_1__);
    this = (TutorialBigDialog_o *)sub_2213A60(&StringLiteral_16907/*"_L_"*/);
    byte_596F40B = 1;
  }
  if ( !data )
    goto LABEL_12;
  this = (TutorialBigDialog_o *)AssetData__GetObjectNameList(data, 0);
  if ( !this )
    goto LABEL_12;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_13;
  this = (TutorialBigDialog_o *)this->fields.basePanel;
  if ( !this )
    goto LABEL_12;
  this = (TutorialBigDialog_o *)System_String__Contains(
                                  (System_String_o *)this,
                                  (System_String_o *)StringLiteral_16907/*"_L_"*/,
                                  0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)v4, Method_TutorialBigDialog__LoadStartAssets_b__50_1__, 0);
    TutorialBigDialog__AddScrollImg(v4, data, v5, v6);
    return;
  }
  assetsImageLoadList = v4->fields.assetsImageLoadList;
  if ( !assetsImageLoadList )
LABEL_12:
    sub_2213CDC(this, data);
  v8 = v4->fields._loadIndex + 1;
  if ( (unsigned int)v8 >= LODWORD(assetsImageLoadList->max_length) )
LABEL_13:
    sub_2213CE4(this);
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              data,
                              assetsImageLoadList->m_Items[v8],
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
  TutorialBigDialog__AddImg(v4, (UnityEngine_Texture2D_o *)Object_object__58532980, v10);
  TutorialBigDialog__AfterLoad(v4, 2, v11);
}


void TutorialBigDialog___LoadStartAssets_b__50_1(TutorialBigDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TutorialBigDialog__AfterLoad(this, 2, v2);
}


void TutorialBigDialog___LoadStart_b__49_0(TutorialBigDialog_o *this, AssetData_o *data, const MethodInfo *method)
{
  TutorialBigDialog_o *v4; // x19
  const MethodInfo *v5; // x2
  System_Action_o *v6; // x21
  const MethodInfo *v7; // x3
  struct System_Int32_array *TutorialImageLoadList; // x8
  __int64 loadIndex; // x9
  System_String_o *TuorialImageName; // x0
  Il2CppObject *Object_object__58532980; // x0
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2

  v4 = this;
  if ( (byte_596F40A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_AssetData_GetObject_Texture2D____91708360);
    sub_2213A60(&Method_TutorialBigDialog__LoadStart_b__49_1__);
    this = (TutorialBigDialog_o *)sub_2213A60(&StringLiteral_16907/*"_L_"*/);
    byte_596F40A = 1;
  }
  if ( !data )
    goto LABEL_12;
  this = (TutorialBigDialog_o *)AssetData__GetObjectNameList(data, 0);
  if ( !this )
    goto LABEL_12;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_13;
  this = (TutorialBigDialog_o *)this->fields.basePanel;
  if ( !this )
    goto LABEL_12;
  this = (TutorialBigDialog_o *)System_String__Contains(
                                  (System_String_o *)this,
                                  (System_String_o *)StringLiteral_16907/*"_L_"*/,
                                  0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v6 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)v4, Method_TutorialBigDialog__LoadStart_b__49_1__, 0);
    TutorialBigDialog__AddScrollImg(v4, data, v6, v7);
    return;
  }
  TutorialImageLoadList = v4->fields.TutorialImageLoadList;
  if ( !TutorialImageLoadList )
LABEL_12:
    sub_2213CDC(this, data);
  loadIndex = v4->fields._loadIndex;
  if ( (unsigned int)loadIndex >= LODWORD(TutorialImageLoadList->max_length) )
LABEL_13:
    sub_2213CE4(this);
  TuorialImageName = TutorialBigDialog__GetTuorialImageName(this, TutorialImageLoadList->m_Items[loadIndex], v5);
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              data,
                              TuorialImageName,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
  TutorialBigDialog__AddImg(v4, (UnityEngine_Texture2D_o *)Object_object__58532980, v12);
  TutorialBigDialog__AfterLoad(v4, 1, v13);
}


void TutorialBigDialog___LoadStart_b__49_1(TutorialBigDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TutorialBigDialog__AfterLoad(this, 1, v2);
}


void TutorialBigDialog___OpenAssets_b__43_0(TutorialBigDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TutorialBigDialog__SetTouchMask(this, 1, v2);
}


void TutorialBigDialog___UpdatePage_b__57_0(TutorialBigDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *FadeOutTarget; // x0
  const MethodInfo *v5; // x2

  TutorialBigDialog__refreshCurrent(this, method);
  FadeOutTarget = (UnityEngine_Component_o *)this->fields.FadeOutTarget;
  if ( !FadeOutTarget
    || (FadeOutTarget = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(FadeOutTarget, 0)) == 0 )
  {
    sub_2213CDC(FadeOutTarget, v3);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)FadeOutTarget, 0, 0);
  this->fields.IsFading = 0;
  TutorialBigDialog__UpdateButtons(this, 1, v5);
}


void TutorialBigDialog__refreshCurrent(TutorialBigDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ImagePageList; // x0
  int32_t CurrentIndex; // w1
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *Component_object; // x19

  if ( (byte_596F400 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TutorialImageLong___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F400 = 1;
  }
  ImagePageList = (System_Collections_Generic_List_object__o *)this->fields.ImagePageList;
  if ( !ImagePageList )
    goto LABEL_13;
  CurrentIndex = this->fields.CurrentIndex;
  if ( ImagePageList->fields._size > CurrentIndex )
  {
    ImagePageList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                   ImagePageList,
                                                                   CurrentIndex,
                                                                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !ImagePageList )
      goto LABEL_13;
    Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)ImagePageList,
                                                 (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TutorialImageLong___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    ImagePageList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                   Component_object,
                                                                   0,
                                                                   0);
    if ( ((unsigned __int8)ImagePageList & 1) != 0 )
    {
      if ( Component_object )
      {
        ImagePageList = (System_Collections_Generic_List_object__o *)Component_object[2].monitor;
        if ( ImagePageList )
        {
          UIScrollView__ResetPosition((UIScrollView_o *)ImagePageList, 0);
          return;
        }
      }
LABEL_13:
      sub_2213CDC(ImagePageList, method);
    }
  }
}


void TutorialBigDialog__WaitPurchase_d__54___ctor(
        TutorialBigDialog__WaitPurchase_d__54_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool TutorialBigDialog__WaitPurchase_d__54__MoveNext(
        TutorialBigDialog__WaitPurchase_d__54_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TutorialBigDialog__WaitPurchase_d__54_o *v3; // x19
  int32_t _1__state; // w22
  TutorialBigDialog_o *_4__this; // x20
  TutorialBigDialog___c_c *v6; // x0
  struct TutorialBigDialog___c_StaticFields *static_fields; // x8
  System_Func_bool__o *_9__54_0; // x20
  Il2CppObject *v9; // x21
  struct TutorialBigDialog___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  UnityEngine_WaitUntil_o *v17; // x21
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  v3 = this;
  if ( (byte_596F40F & 1) == 0 )
  {
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&Method_TutorialBigDialog___c__WaitPurchase_b__54_0__);
    sub_2213A60(&TutorialBigDialog___c_TypeInfo);
    sub_2213A60(&UnityEngine_WaitUntil_TypeInfo);
    this = (TutorialBigDialog__WaitPurchase_d__54_o *)sub_2213A60(&StringLiteral_10413/*"OpenWindow"*/);
    byte_596F40F = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      _4__this = v3->fields.__4__this;
      v3->fields.__1__state = -1;
      if ( !_4__this )
        sub_2213CDC(this, method);
      TutorialBigDialog__UpdatePage(_4__this, v3->fields.CurrentIndex, v2);
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)_4__this,
        (System_String_o *)StringLiteral_10413/*"OpenWindow"*/,
        0.3,
        0);
    }
  }
  else
  {
    v3->fields.__1__state = -1;
    v6 = TutorialBigDialog___c_TypeInfo;
    if ( !*(&TutorialBigDialog___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TutorialBigDialog___c_TypeInfo, method, v2);
      v6 = TutorialBigDialog___c_TypeInfo;
    }
    static_fields = v6->static_fields;
    _9__54_0 = static_fields->__9__54_0;
    if ( !_9__54_0 )
    {
      if ( !*(&v6->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v6, method, v2);
        static_fields = TutorialBigDialog___c_TypeInfo->static_fields;
      }
      v9 = (Il2CppObject *)static_fields->__9;
      _9__54_0 = (System_Func_bool__o *)sub_2213CCC(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(_9__54_0, v9, Method_TutorialBigDialog___c__WaitPurchase_b__54_0__, 0);
      v10 = TutorialBigDialog___c_TypeInfo->static_fields;
      v10->__9__54_0 = _9__54_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->__9__54_0, (int32_t)_9__54_0, v11, v12, v13, v14, v15, v16);
    }
    v17 = (UnityEngine_WaitUntil_o *)sub_2213CCC(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v17, _9__54_0, 0);
    v3->fields.__2__current = (Il2CppObject *)v17;
    p__2__current = (MissionNaviTransitionBoardItem_o *)&v3->fields.__2__current;
    sub_2213A04(p__2__current, (int32_t)v17, v19, v20, v21, v22, v23, v24);
    p__2__current[-1].fields._BoardType_k__BackingField = 1;
  }
  return _1__state == 0;
}


Il2CppObject *TutorialBigDialog__WaitPurchase_d__54__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TutorialBigDialog__WaitPurchase_d__54_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn TutorialBigDialog__WaitPurchase_d__54__System_Collections_IEnumerator_Reset(
        TutorialBigDialog__WaitPurchase_d__54_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_TutorialBigDialog__WaitPurchase_d__54_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *TutorialBigDialog__WaitPurchase_d__54__System_Collections_IEnumerator_get_Current(
        TutorialBigDialog__WaitPurchase_d__54_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void TutorialBigDialog__WaitPurchase_d__54__System_IDisposable_Dispose(
        TutorialBigDialog__WaitPurchase_d__54_o *this,
        const MethodInfo *method)
{
  ;
}


void TutorialBigDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596F40C & 1) == 0 )
  {
    sub_2213A60(&TutorialBigDialog___c_TypeInfo);
    byte_596F40C = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(TutorialBigDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TutorialBigDialog___c_TypeInfo->static_fields->__9 = (struct TutorialBigDialog___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)TutorialBigDialog___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TutorialBigDialog___c___ctor(TutorialBigDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool TutorialBigDialog___c___WaitPurchase_b__54_0(TutorialBigDialog___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PurchaseBehaviour_c *v3; // x0

  if ( (byte_596F40D & 1) == 0 )
  {
    sub_2213A60(&PurchaseBehaviour_TypeInfo);
    byte_596F40D = 1;
  }
  v3 = PurchaseBehaviour_TypeInfo;
  if ( !*(&PurchaseBehaviour_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, method, v2);
    v3 = PurchaseBehaviour_TypeInfo;
  }
  return !v3->static_fields->isOpenPurchaseDialogEvent;
}


void TutorialBigDialog___c__DisplayClass52_0___ctor(
        TutorialBigDialog___c__DisplayClass52_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TutorialBigDialog___c__DisplayClass52_0___AddScrollImg_b__0(
        TutorialBigDialog___c__DisplayClass52_0_o *this,
        AssetData_o *aData,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  AssetData_o *v8; // x20
  TutorialBigDialog___c__DisplayClass52_0_o *v9; // x19
  struct TutorialBigDialog_o *_4__this; // x8
  UnityEngine_Shader_o *v11; // x22
  UnityEngine_Material_o *v12; // x21
  struct TutorialImageLong_o *comp; // x8
  const MethodInfo *v14; // x2
  struct TutorialBigDialog_o *v15; // x23
  struct TutorialBigDialog_o *v16; // x8
  Il2CppObject *Object_object__58532980; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct TutorialBigDialog_o *v24; // x8
  struct TutorialBigDialog_o *v25; // x8
  _QWORD *v26; // x9
  __int64 comp_low; // x10
  TutorialBigDialog_c **v28; // x8

  v8 = aData;
  v9 = this;
  if ( (byte_596F40E & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_Texture2D____91708360);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&TutorialBigDialog_TypeInfo);
    sub_2213A60(&StringLiteral_5128/*"Custom/SpriteWithMask"*/);
    this = (TutorialBigDialog___c__DisplayClass52_0_o *)sub_2213A60(&StringLiteral_16919/*"_MaskTex"*/);
    byte_596F40E = 1;
  }
  _4__this = v9->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  _4__this->fields.baseTexAssetData = v8;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields.baseTexAssetData,
    (int32_t)v8,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5128/*"Custom/SpriteWithMask"*/, 0);
  v12 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v12, v11, 0);
  comp = v9->fields.comp;
  if ( !comp )
    goto LABEL_20;
  this = (TutorialBigDialog___c__DisplayClass52_0_o *)comp->fields.BaseImage;
  if ( !this )
    goto LABEL_20;
  ((void (__fastcall *)(TutorialBigDialog___c__DisplayClass52_0_o *, UnityEngine_Material_o *, Il2CppMethodPointer))this->klass[1].vtable._1_Finalize.method)(
    this,
    v12,
    this->klass[1].vtable._2_GetHashCode.methodPtr);
  this = (TutorialBigDialog___c__DisplayClass52_0_o *)TutorialBigDialog_TypeInfo;
  v15 = v9->fields.__4__this;
  if ( !*(&TutorialBigDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo, aData, v14);
  if ( !v15 )
    goto LABEL_20;
  this = (TutorialBigDialog___c__DisplayClass52_0_o *)TutorialBigDialog__GetTuorialImageName(
                                                        (TutorialBigDialog_o *)this,
                                                        TutorialBigDialog_TypeInfo->static_fields->baseImgNo,
                                                        v14);
  if ( !v8 )
    goto LABEL_20;
  this = (TutorialBigDialog___c__DisplayClass52_0_o *)AssetData__GetObject_object__58532980(
                                                        v8,
                                                        (System_String_o *)this,
                                                        (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
  if ( !v12 )
    goto LABEL_20;
  UnityEngine_Material__set_mainTexture(v12, (UnityEngine_Texture_o *)this, 0);
  v16 = v9->fields.__4__this;
  if ( !v16 )
    goto LABEL_20;
  this = (TutorialBigDialog___c__DisplayClass52_0_o *)v16->fields.alphaTexAssetData;
  if ( !this )
    goto LABEL_20;
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              (AssetData_o *)this,
                              TutorialBigDialog_TypeInfo->static_fields->alphaImgName,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
  UnityEngine_Material__SetTexture(
    v12,
    (System_String_o *)StringLiteral_16919/*"_MaskTex"*/,
    (UnityEngine_Texture_o *)Object_object__58532980,
    0);
  v24 = v9->fields.__4__this;
  if ( !v24
    || (this = (TutorialBigDialog___c__DisplayClass52_0_o *)v24->fields.ImagePageList) == 0
    || (v25 = this->fields.__4__this,
        aData = (AssetData_o *)v9->fields.obj,
        v26 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++HIDWORD(this->fields.comp),
        !v25) )
  {
LABEL_20:
    sub_2213CDC(this, aData);
  }
  comp_low = SLODWORD(this->fields.comp);
  if ( (unsigned int)comp_low >= LODWORD(v25->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)aData,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = &v25->klass + comp_low;
    LODWORD(this->fields.comp) = comp_low + 1;
    v28[4] = (TutorialBigDialog_c *)aData;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v28 + 4), (int32_t)aData, v18, v19, v20, v21, v22, v23);
  }
  ActionExtensions__Call(v9->fields.callback, 0);
}


void TutorialBigDialog___c__DisplayClass55_0___ctor(
        TutorialBigDialog___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TutorialBigDialog___c__DisplayClass55_0___LoadAlpha_b__0(
        TutorialBigDialog___c__DisplayClass55_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct TutorialBigDialog_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(this, data);
  _4__this->fields.alphaTexAssetData = data;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields.alphaTexAssetData,
    (int32_t)data,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ActionExtensions__Call(this->fields.callback, 0);
}