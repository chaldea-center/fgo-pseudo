void TutorialBigDialog___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  struct TutorialBigDialog_StaticFields *static_fields; // x0
  int32_t v8; // w1
  int32_t v9; // w1
  struct TutorialBigDialog_StaticFields *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w1
  struct TutorialBigDialog_StaticFields *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w1
  struct TutorialBigDialog_StaticFields *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  TutorialBigDialog_c *v33; // x8
  struct TutorialBigDialog_StaticFields *v34; // x9
  struct TutorialBigDialog_StaticFields *v35; // x8

  if ( (byte_4D2F646 & 1) == 0 )
  {
    sub_1C93AD4(&TutorialBigDialog_TypeInfo);
    sub_1C93AD4(&StringLiteral_14714/*"Tutorial/tutorial_alpha"*/);
    sub_1C93AD4(&StringLiteral_18298/*"combine_tutorial_alpha"*/);
    sub_1C93AD4(&StringLiteral_14712/*"Tutorial/combine_tutorial_alpha"*/);
    sub_1C93AD4(&StringLiteral_24545/*"tutorial_alpha"*/);
    byte_4D2F646 = 1;
  }
  static_fields = TutorialBigDialog_TypeInfo->static_fields;
  static_fields->FADE_TIME = 0.3;
  v8 = StringLiteral_14714/*"Tutorial/tutorial_alpha"*/;
  static_fields->alphaImgPath = (struct System_String_o *)StringLiteral_14714/*"Tutorial/tutorial_alpha"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->alphaImgPath, v8, v1, v2, v3, v4, v5, v6);
  v9 = StringLiteral_24545/*"tutorial_alpha"*/;
  v10 = TutorialBigDialog_TypeInfo->static_fields;
  v10->alphaImgName = (struct System_String_o *)StringLiteral_24545/*"tutorial_alpha"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v10->alphaImgName, v9, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_14712/*"Tutorial/combine_tutorial_alpha"*/;
  v18 = TutorialBigDialog_TypeInfo->static_fields;
  v18->alphaMiniImgPath = (struct System_String_o *)StringLiteral_14712/*"Tutorial/combine_tutorial_alpha"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v18->alphaMiniImgPath, v17, v19, v20, v21, v22, v23, v24);
  v25 = StringLiteral_18298/*"combine_tutorial_alpha"*/;
  v26 = TutorialBigDialog_TypeInfo->static_fields;
  v26->alphaMiniImgName = (struct System_String_o *)StringLiteral_18298/*"combine_tutorial_alpha"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v26->alphaMiniImgName, v25, v27, v28, v29, v30, v31, v32);
  v33 = TutorialBigDialog_TypeInfo;
  v34 = TutorialBigDialog_TypeInfo->static_fields;
  v34->baseCloseButtonPosition.fields.z = 0.0;
  *(_QWORD *)&v34->baseImgNo = 0x38400000006LL;
  *(_QWORD *)&v34->baseCloseButtonPosition.fields.x = 0x4382800043F28000LL;
  v35 = v33->static_fields;
  *(_QWORD *)&v35->miniCloseButtonPosition.fields.x = 0x4362000043BD0000LL;
  v35->miniCloseButtonPosition.fields.z = 0.0;
}


void TutorialBigDialog___ctor(TutorialBigDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4D2F645 & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    byte_4D2F645 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void TutorialBigDialog__AddImg(TutorialBigDialog_o *this, UnityEngine_Texture2D_o *tex, const MethodInfo *method)
{
  Il2CppObject *TutorialImagePrefab; // x20
  Il2CppObject *v6; // x20
  System_String_o *v7; // x0
  __int64 gameObject; // x0
  __int64 v9; // x1
  Il2CppObject *Component_object; // x23
  int32_t layer; // w22
  UnityEngine_Shader_o *v12; // x24
  UnityEngine_Material_o *v13; // x22
  int32_t sizeKind; // w21
  __int64 v15; // x10
  Il2CppObject *Object_object__51927708; // x0
  UnityEngine_Transform_o *v17; // x21
  UnityEngine_Transform_o *v18; // x21
  UnityEngine_Transform_o *v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  __int64 v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  __int64 v29; // x8

  if ( (byte_4D2F636 & 1) == 0 )
  {
    sub_1C93AD4(&Method_AssetData_GetObject_Texture2D____79057928);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UITexture___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C93AD4(&UnityEngine_Material_TypeInfo);
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&TutorialBigDialog_TypeInfo);
    sub_1C93AD4(&StringLiteral_4960/*"Custom/SpriteWithMask"*/);
    sub_1C93AD4(&StringLiteral_7611/*"Image"*/);
    sub_1C93AD4(&StringLiteral_16370/*"_MaskTex"*/);
    byte_4D2F636 = 1;
  }
  TutorialImagePrefab = (Il2CppObject *)this->fields.TutorialImagePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__Instantiate_object_(
         TutorialImagePrefab,
         (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v7 = System_Int32__ToString((int)this + 248, 0);
  gameObject = (__int64)System_String__Concat_64425724((System_String_o *)StringLiteral_7611/*"Image"*/, v7, 0);
  if ( !v6 )
    goto LABEL_29;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v6, (System_String_o *)gameObject, 0);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v6,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_29;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)gameObject, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__SetLayer((UnityEngine_GameObject_o *)v6, layer, 0);
  v12 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4960/*"Custom/SpriteWithMask"*/, 0);
  v13 = (UnityEngine_Material_o *)sub_1C93D20(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v13, v12, 0);
  if ( !Component_object )
    goto LABEL_29;
  gameObject = ((__int64 (__fastcall *)(Il2CppObject *, UnityEngine_Material_o *, const MethodInfo *))Component_object->klass->vtable[25].methodPtr)(
                 Component_object,
                 v13,
                 Component_object->klass->vtable[25].method);
  if ( !v13 )
    goto LABEL_29;
  UnityEngine_Material__set_mainTexture(v13, (UnityEngine_Texture_o *)tex, 0);
  sizeKind = this->fields.sizeKind;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
  gameObject = (__int64)this->fields.alphaTexAssetData;
  if ( !gameObject )
    goto LABEL_29;
  v15 = 16;
  if ( sizeKind == 2 )
    v15 = 32;
  Object_object__51927708 = AssetData__GetObject_object__51927708(
                              (AssetData_o *)gameObject,
                              *(System_String_o **)((char *)&TutorialBigDialog_TypeInfo->static_fields->FADE_TIME + v15),
                              (const MethodInfo_3185A9C *)Method_AssetData_GetObject_Texture2D____79057928);
  UnityEngine_Material__SetTexture(
    v13,
    (System_String_o *)StringLiteral_16370/*"_MaskTex"*/,
    (UnityEngine_Texture_o *)Object_object__51927708,
    0);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v6, 0, 0);
  gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v6, 0);
  if ( !this->fields.ImageRoot )
    goto LABEL_29;
  v17 = (UnityEngine_Transform_o *)gameObject;
  gameObject = (__int64)UnityEngine_GameObject__get_transform(this->fields.ImageRoot, 0);
  if ( !v17 )
    goto LABEL_29;
  UnityEngine_Transform__set_parent(v17, (UnityEngine_Transform_o *)gameObject, 0);
  gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v6, 0);
  v18 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4D2A139 )
  {
    gameObject = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  if ( !v18 )
    goto LABEL_29;
  UnityEngine_Transform__set_localPosition(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v6, 0);
  v19 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4D2A13E )
  {
    gameObject = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A13E = 1;
  }
  if ( !v19
    || (UnityEngine_Transform__set_localScale(v19, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0),
        (gameObject = (__int64)this->fields.ImagePageList) == 0)
    || (v26 = *(_QWORD *)(gameObject + 16),
        v27 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++*(_DWORD *)(gameObject + 28),
        !v26) )
  {
LABEL_29:
    sub_1C93D2C(gameObject, v9);
  }
  v28 = *(int *)(gameObject + 24);
  if ( (unsigned int)v28 >= *(_DWORD *)(v26 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)gameObject,
      v6,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = v26 + 8 * v28;
    *(_DWORD *)(gameObject + 24) = v28 + 1;
    *(_QWORD *)(v29 + 32) = v6;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v29 + 32), (int32_t)v6, v20, v21, v22, v23, v24, v25);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int v22; // w8
  __int64 v23; // x24
  unsigned int v24; // w27
  int32_t v25; // w21
  UnityEngine_Texture_o *v26; // x25
  UnityEngine_Texture_o *v27; // x19
  __int64 v28; // x20
  System_String_o **v29; // x20
  __int64 v30; // t1
  char v31; // w26
  const MethodInfo *v32; // x2
  UnityEngine_Texture_o *v33; // x23
  Il2CppObject *TutorialImageLongPrefab; // x22
  Il2CppObject *v35; // x0
  __int64 *v36; // x22
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  UnityEngine_Object_o *klass; // x24
  System_String_o *v44; // x0
  Il2CppObject *Component_object; // x0
  void **p_monitor; // x24
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  UnityEngine_GameObject_o *v53; // x26
  int32_t layer; // w27
  UnityEngine_Shader_o *v55; // x27
  UnityEngine_Material_o *v56; // x26
  UIWidget_o *v57; // x25
  UITexture_o *v58; // x25
  int v59; // w26
  int v60; // w27
  int32_t baseWidth; // w20
  int v62; // w28
  UnityEngine_Transform_o *v63; // x21
  UnityEngine_Transform_o *v64; // x21
  UnityEngine_Transform_o *v65; // x21
  __int64 v66; // x21
  const MethodInfo *v67; // x2
  TutorialBigDialog_c *v68; // x0
  System_String_o *TuorialImagePath; // x19
  Il2CppObject *object; // [xsp+8h] [xbp-78h]
  TutorialBigDialog_o *v71; // [xsp+18h] [xbp-68h]
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v74; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2F637 & 1) == 0 )
  {
    sub_1C93AD4(&Method_AssetData_GetObject_Texture2D____79057928);
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_TutorialImageLong___);
    sub_1C93AD4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C93AD4(&UnityEngine_Material_TypeInfo);
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&TutorialBigDialog_TypeInfo);
    sub_1C93AD4(&Method_TutorialBigDialog___c__DisplayClass52_0__AddScrollImg_b__0__);
    sub_1C93AD4(&TutorialBigDialog___c__DisplayClass52_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_16863/*"alpha"*/);
    sub_1C93AD4(&StringLiteral_4960/*"Custom/SpriteWithMask"*/);
    sub_1C93AD4(&StringLiteral_7611/*"Image"*/);
    sub_1C93AD4(&StringLiteral_16370/*"_MaskTex"*/);
    byte_4D2F637 = 1;
  }
  v7 = sub_1C93D20(TutorialBigDialog___c__DisplayClass52_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_62;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = callback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 40), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  if ( !data )
    goto LABEL_62;
  ObjectNameList = (__int64)AssetData__GetObjectNameList(data, 0);
  if ( !ObjectNameList )
    goto LABEL_62;
  v22 = *(_DWORD *)(ObjectNameList + 24);
  v23 = ObjectNameList;
  object = (Il2CppObject *)v7;
  v71 = this;
  if ( v22 < 1 )
  {
    v27 = 0;
    v33 = 0;
    v25 = 0;
  }
  else
  {
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    do
    {
      if ( v24 >= v22 )
        goto LABEL_61;
      v28 = v23 + 8LL * (int)v24;
      v30 = *(_QWORD *)(v28 + 32);
      v29 = (System_String_o **)(v28 + 32);
      ObjectNameList = v30;
      if ( !v30 )
        goto LABEL_62;
      ObjectNameList = System_String__Contains(
                         (System_String_o *)ObjectNameList,
                         (System_String_o *)StringLiteral_16863/*"alpha"*/,
                         0);
      if ( v24 >= *(_DWORD *)(v23 + 24) )
LABEL_61:
        sub_1C93D34(ObjectNameList);
      v31 = ObjectNameList;
      ObjectNameList = (__int64)AssetData__GetObject_object__51927708(
                                  data,
                                  *v29,
                                  (const MethodInfo_3185A9C *)Method_AssetData_GetObject_Texture2D____79057928);
      v33 = (UnityEngine_Texture_o *)ObjectNameList;
      if ( (v31 & 1) == 0 )
      {
        if ( v24 >= *(_DWORD *)(v23 + 24) )
          goto LABEL_61;
        v27 = (UnityEngine_Texture_o *)ObjectNameList;
        ObjectNameList = TutorialBigDialog__GetScrollHeightWithName((TutorialBigDialog_o *)ObjectNameList, *v29, v32);
        v25 = ObjectNameList;
        v33 = v26;
      }
      v22 = *(_DWORD *)(v23 + 24);
      ++v24;
      v26 = v33;
    }
    while ( (int)v24 < v22 );
  }
  TutorialImageLongPrefab = (Il2CppObject *)v71->fields.TutorialImageLongPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v35 = UnityEngine_Object__Instantiate_object_(
          TutorialImageLongPrefab,
          (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  object[2].klass = (Il2CppClass *)v35;
  v36 = (__int64 *)&object[2];
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&object[2], (int32_t)v35, v37, v38, v39, v40, v41, v42);
  klass = (UnityEngine_Object_o *)object[2].klass;
  v44 = System_Int32__ToString((int)v71 + 248, 0);
  ObjectNameList = (__int64)System_String__Concat_64425724((System_String_o *)StringLiteral_7611/*"Image"*/, v44, 0);
  if ( !klass )
    goto LABEL_62;
  UnityEngine_Object__set_name(klass, (System_String_o *)ObjectNameList, 0);
  ObjectNameList = *v36;
  if ( !*v36 )
    goto LABEL_62;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)ObjectNameList,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_TutorialImageLong___);
  object[1].monitor = Component_object;
  p_monitor = &object[1].monitor;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&object[1].monitor,
    (int32_t)Component_object,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  v53 = (UnityEngine_GameObject_o *)object[2].klass;
  ObjectNameList = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v71, 0);
  if ( !ObjectNameList )
    goto LABEL_62;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)ObjectNameList, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__SetLayer(v53, layer, 0);
  v55 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4960/*"Custom/SpriteWithMask"*/, 0);
  v56 = (UnityEngine_Material_o *)sub_1C93D20(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v56, v55, 0);
  if ( !*p_monitor )
    goto LABEL_62;
  ObjectNameList = *((_QWORD *)*p_monitor + 5);
  if ( !ObjectNameList )
    goto LABEL_62;
  ObjectNameList = (*(__int64 (__fastcall **)(__int64, UnityEngine_Material_o *, _QWORD))(*(_QWORD *)ObjectNameList
                                                                                        + 712LL))(
                     ObjectNameList,
                     v56,
                     *(_QWORD *)(*(_QWORD *)ObjectNameList + 720LL));
  if ( !v56 )
    goto LABEL_62;
  UnityEngine_Material__set_mainTexture(v56, v27, 0);
  UnityEngine_Material__SetTexture(v56, (System_String_o *)StringLiteral_16370/*"_MaskTex"*/, v33, 0);
  if ( !*p_monitor )
    goto LABEL_62;
  ObjectNameList = *((_QWORD *)*p_monitor + 5);
  if ( !ObjectNameList )
    goto LABEL_62;
  UIWidget__set_height((UIWidget_o *)ObjectNameList, v25, 0);
  if ( !*p_monitor )
    goto LABEL_62;
  v57 = (UIWidget_o *)*((_QWORD *)*p_monitor + 5);
  ObjectNameList = (__int64)TutorialBigDialog_TypeInfo;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
  if ( !v57 )
    goto LABEL_62;
  UIWidget__set_width(v57, TutorialBigDialog_TypeInfo->static_fields->baseWidth, 0);
  if ( !*p_monitor )
    goto LABEL_62;
  if ( !v27 )
    goto LABEL_62;
  v58 = (UITexture_o *)*((_QWORD *)*p_monitor + 5);
  v59 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, const MethodInfo *))v27->klass->vtable._6_get_height.methodPtr)(
          v27,
          v27->klass->vtable._6_get_height.method);
  v60 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, const MethodInfo *))v27->klass->vtable._6_get_height.methodPtr)(
          v27,
          v27->klass->vtable._6_get_height.method);
  baseWidth = TutorialBigDialog_TypeInfo->static_fields->baseWidth;
  v62 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, const MethodInfo *))v27->klass->vtable._4_get_width.methodPtr)(
          v27,
          v27->klass->vtable._4_get_width.method);
  ObjectNameList = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, const MethodInfo *))v27->klass->vtable._6_get_height.methodPtr)(
                     v27,
                     v27->klass->vtable._6_get_height.method);
  if ( !v58 )
    goto LABEL_62;
  v74.fields.m_Height = (float)v25 / (float)(int)ObjectNameList;
  v74.fields.m_Width = (float)baseWidth / (float)v62;
  v74.fields.m_YMin = (float)(v59 - v25) / (float)v60;
  v74.fields.m_XMin = 0.0;
  UITexture__set_uvRect(v58, v74, 0);
  if ( !*p_monitor )
    goto LABEL_62;
  ObjectNameList = *((_QWORD *)*p_monitor + 6);
  if ( !ObjectNameList )
    goto LABEL_62;
  v72.fields.z = 1.0;
  v72.fields.y = (float)v25;
  v72.fields.x = (float)TutorialBigDialog_TypeInfo->static_fields->baseWidth;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)ObjectNameList, v72, 0);
  if ( !*p_monitor )
    goto LABEL_62;
  ObjectNameList = *((_QWORD *)*p_monitor + 6);
  if ( !ObjectNameList )
    goto LABEL_62;
  v73.fields.y = (float)-v25 * 0.5;
  v73.fields.x = 0.0;
  v73.fields.z = 0.0;
  UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)ObjectNameList, v73, 0);
  if ( !*p_monitor )
    goto LABEL_62;
  ObjectNameList = *((_QWORD *)*p_monitor + 7);
  if ( !ObjectNameList )
    goto LABEL_62;
  UIScrollView__ResetPosition((UIScrollView_o *)ObjectNameList, 0);
  ObjectNameList = *v36;
  if ( !*v36 )
    goto LABEL_62;
  ObjectNameList = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)ObjectNameList, 0);
  if ( !v71->fields.ImageRoot )
    goto LABEL_62;
  v63 = (UnityEngine_Transform_o *)ObjectNameList;
  ObjectNameList = (__int64)UnityEngine_GameObject__get_transform(v71->fields.ImageRoot, 0);
  if ( !v63 )
    goto LABEL_62;
  UnityEngine_Transform__set_parent(v63, (UnityEngine_Transform_o *)ObjectNameList, 0);
  ObjectNameList = *v36;
  if ( !*v36 )
    goto LABEL_62;
  ObjectNameList = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)ObjectNameList, 0);
  v64 = (UnityEngine_Transform_o *)ObjectNameList;
  if ( !byte_4D2A139 )
  {
    ObjectNameList = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  if ( !v64 )
    goto LABEL_62;
  UnityEngine_Transform__set_localPosition(v64, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  ObjectNameList = *v36;
  if ( !*v36 )
    goto LABEL_62;
  ObjectNameList = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)ObjectNameList, 0);
  v65 = (UnityEngine_Transform_o *)ObjectNameList;
  if ( !byte_4D2A13E )
  {
    ObjectNameList = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A13E = 1;
  }
  if ( !v65 )
    goto LABEL_62;
  UnityEngine_Transform__set_localScale(v65, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  v66 = sub_1C93D20(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    (AssetLoader_LoadEndDataHandler_o *)v66,
    object,
    Method_TutorialBigDialog___c__DisplayClass52_0__AddScrollImg_b__0__,
    0);
  if ( v71->fields.baseTexLoadRequested )
  {
    if ( v66 )
    {
      (*(void (__fastcall **)(_QWORD, struct AssetData_o *, _QWORD))(v66 + 24))(
        *(_QWORD *)(v66 + 64),
        v71->fields.baseTexAssetData,
        *(_QWORD *)(v66 + 40));
      return;
    }
LABEL_62:
    sub_1C93D2C(ObjectNameList, v9);
  }
  v71->fields.baseTexLoadRequested = 1;
  v68 = TutorialBigDialog_TypeInfo;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v68 = TutorialBigDialog_TypeInfo;
  }
  TuorialImagePath = TutorialBigDialog__GetTuorialImagePath(v71, v68->static_fields->baseImgNo, v67);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(TuorialImagePath, (AssetLoader_LoadEndDataHandler_o *)v66, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
void TutorialBigDialog__AfterLoad(TutorialBigDialog_o *this, int32_t addCount, const MethodInfo *method)
{
  _BOOL4 loadByAsset; // w10
  int32_t v5; // w9
  int32_t v6; // w8
  struct System_String_array *assetsImageLoadList; // x8
  struct System_Int32_array *TutorialImageLoadList; // x9
  System_Collections_IEnumerator_o *v9; // x1

  loadByAsset = this->fields.loadByAsset;
  v5 = this->fields._loadIndex + addCount;
  this->fields._loadIndex = v5;
  if ( loadByAsset )
    v6 = 0;
  else
    v6 = v5;
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
      goto LABEL_11;
    }
LABEL_12:
    sub_1C93D2C(this, addCount);
  }
  TutorialImageLoadList = this->fields.TutorialImageLoadList;
  if ( !TutorialImageLoadList )
    goto LABEL_12;
  if ( v6 < SLODWORD(TutorialImageLoadList->max_length) )
  {
    TutorialBigDialog__LoadStart(this, *(const MethodInfo **)&addCount);
    return;
  }
LABEL_11:
  this->fields.CurrentIndex = 0;
  v9 = TutorialBigDialog__WaitPurchase(this, 0, method);
  UnityEngine_MonoBehaviour__StartCoroutine_72105100((UnityEngine_MonoBehaviour_o *)this, v9, 0);
}


void TutorialBigDialog__Close(TutorialBigDialog_o *this, System_Action_o *callback, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4D2F63E & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AndroidBackKeyManager_TypeInfo);
    sub_1C93AD4(&Method_TutorialBigDialog_EndClose__);
    byte_4D2F63E = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 0;
  v10 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_TutorialBigDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void TutorialBigDialog__DestroyImagePageList(TutorialBigDialog_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x0
  Il2CppObject *current; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_GameObject__o *v7; // x8
  int32_t size; // w2
  int v9; // w9
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D2F644 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2F644 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  ImagePageList = this->fields.ImagePageList;
  if ( ImagePageList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      (System_Collections_Generic_List_object__o *)ImagePageList,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v10.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72119908((UnityEngine_Object_o *)current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v7 = this->fields.ImagePageList;
    if ( !v7 )
      sub_1C93D2C(v5, v6);
    size = v7->fields._size;
    v9 = v7->fields._version + 1;
    v7->fields._size = 0;
    v7->fields._version = v9;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v7->fields._items, 0, size, 0);
    this->fields.CurrentIndex = 0;
  }
}


void TutorialBigDialog__EndClose(TutorialBigDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  GrandQuestFolderBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  TutorialBigDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C93D2C(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C93A78(p_closeCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))v12->fields.invoke_impl)(v12->fields.method_code, v12->fields.method);
  }
}


void TutorialBigDialog__EndOpen(TutorialBigDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  GrandQuestFolderBoardItem_o *p_endOpenCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *endOpenCallbackFunc; // t1

  this->fields.isButtonEnable = 1;
  TutorialBigDialog__refreshCurrent(this, method);
  endOpenCallbackFunc = this->fields.endOpenCallbackFunc;
  p_endOpenCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.endOpenCallbackFunc;
  v10 = endOpenCallbackFunc;
  if ( endOpenCallbackFunc )
  {
    p_endOpenCallbackFunc->klass = 0;
    sub_1C93A78(p_endOpenCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
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

  if ( !imageName || (this = (TutorialBigDialog_o *)System_String__Split(imageName, 0x5Fu, 0, 0), result = 0, !this) )
    sub_1C93D2C(this, imageName);
  if ( LODWORD(this->fields.m_CancellationTokenSource) <= 3 )
    sub_1C93D34(this);
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
  int32_t v7; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D2F633 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&StringLiteral_25396/*"{0:D4}"*/);
    sub_1C93AD4(&StringLiteral_24543/*"tutorial_"*/);
    byte_4D2F633 = 1;
  }
  v7 = imgId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v7);
  v5 = System_String__Format((System_String_o *)StringLiteral_25396/*"{0:D4}"*/, v4, 0);
  return System_String__Concat_64425724((System_String_o *)StringLiteral_24543/*"tutorial_"*/, v5, 0);
}


System_String_o *TutorialBigDialog__GetTuorialImagePath(
        TutorialBigDialog_o *this,
        int32_t imgId,
        const MethodInfo *method)
{
  System_String_o *TuorialImageName; // x0

  if ( (byte_4D2F632 & 1) == 0 )
  {
    this = (TutorialBigDialog_o *)sub_1C93AD4(&StringLiteral_14711/*"Tutorial/"*/);
    byte_4D2F632 = 1;
  }
  TuorialImageName = TutorialBigDialog__GetTuorialImageName(this, imgId, method);
  return System_String__Concat_64425724((System_String_o *)StringLiteral_14711/*"Tutorial/"*/, TuorialImageName, 0);
}


void TutorialBigDialog__Init(TutorialBigDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  TutorialBigDialog_c *v12; // x0
  int32_t sizeKind; // w20
  __int64 v14; // x9
  System_String_o *v15; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  TutorialBigDialog_c *v22; // x0
  System_String_o *TuorialImagePath; // x20
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct System_Int32_array *TutorialImageLoadList; // x23
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v32; // x24
  System_String_o *v33; // x21
  struct System_String_array *assetsImageLoadList; // x8
  struct System_String_array **p_assetsImageLoadList; // x20
  unsigned int v36; // w23
  unsigned int v37; // w9
  System_String_o *v38; // x21

  if ( (byte_4D2F62B & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&TutorialBigDialog_TypeInfo);
    byte_4D2F62B = 1;
  }
  this->fields.isButtonEnable = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
LABEL_33:
    sub_1C93D2C(gameObject, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.IsFading = 0;
  TutorialBigDialog__DestroyImagePageList(this, v5);
  if ( this->fields.alphaTexLoadRequested )
  {
    v12 = TutorialBigDialog_TypeInfo;
    sizeKind = this->fields.sizeKind;
    if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
      v12 = TutorialBigDialog_TypeInfo;
    }
    v14 = 8;
    if ( sizeKind == 2 )
      v14 = 24;
    v15 = *(System_String_o **)((char *)&v12->static_fields->FADE_TIME + v14);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v15, 0);
    this->fields.alphaTexAssetData = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.alphaTexAssetData, 0, v16, v17, v18, v19, v20, v21);
    this->fields.alphaTexLoadRequested = 0;
  }
  if ( this->fields.baseTexLoadRequested )
  {
    v22 = TutorialBigDialog_TypeInfo;
    if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
      v22 = TutorialBigDialog_TypeInfo;
    }
    TuorialImagePath = TutorialBigDialog__GetTuorialImagePath(this, v22->static_fields->baseImgNo, v6);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(TuorialImagePath, 0);
    this->fields.baseTexAssetData = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.baseTexAssetData, 0, v24, v25, v26, v27, v28, v29);
    this->fields.baseTexLoadRequested = 0;
  }
  TutorialImageLoadList = this->fields.TutorialImageLoadList;
  if ( TutorialImageLoadList )
  {
    max_length = TutorialImageLoadList->max_length;
    if ( (int)max_length >= 1 )
    {
      v32 = 0;
      do
      {
        if ( v32 >= (unsigned int)max_length )
LABEL_36:
          sub_1C93D34(gameObject);
        v33 = TutorialBigDialog__GetTuorialImagePath(this, TutorialImageLoadList->m_Items[v32], v6);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetManager__releaseAssetStorage(v33, 0);
        LODWORD(max_length) = TutorialImageLoadList->max_length;
        ++v32;
      }
      while ( (__int64)v32 < (int)max_length );
    }
    this->fields.TutorialImageLoadList = 0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.TutorialImageLoadList,
      0,
      (int32_t)v6,
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
    v36 = 0;
    while ( 1 )
    {
      v37 = assetsImageLoadList->max_length;
      if ( (int)v36 >= (int)v37 )
        break;
      if ( v36 >= v37 )
        goto LABEL_36;
      v38 = assetsImageLoadList->m_Items[v36];
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage(v38, 0);
      assetsImageLoadList = *p_assetsImageLoadList;
      v36 += 2;
      if ( !*p_assetsImageLoadList )
        goto LABEL_33;
    }
    *p_assetsImageLoadList = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.assetsImageLoadList, 0, (int32_t)v6, v7, v8, v9, v10, v11);
  }
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void TutorialBigDialog__LoadAlpha(TutorialBigDialog_o *this, System_Action_o *callback, const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  TutorialBigDialog_c *v20; // x0
  int32_t sizeKind; // w19
  __int64 v22; // x9
  System_String_o *v23; // x19
  AssetLoader_LoadEndDataHandler_o *v24; // x21

  if ( (byte_4D2F639 & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C93AD4(&TutorialBigDialog_TypeInfo);
    sub_1C93AD4(&Method_TutorialBigDialog___c__DisplayClass55_0__LoadAlpha_b__0__);
    sub_1C93AD4(&TutorialBigDialog___c__DisplayClass55_0_TypeInfo);
    byte_4D2F639 = 1;
  }
  v5 = sub_1C93D20(TutorialBigDialog___c__DisplayClass55_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  this->fields.alphaTexLoadRequested = 1;
  v20 = TutorialBigDialog_TypeInfo;
  sizeKind = this->fields.sizeKind;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v20 = TutorialBigDialog_TypeInfo;
  }
  v22 = 8;
  if ( sizeKind == 2 )
    v22 = 24;
  v23 = *(System_String_o **)((char *)&v20->static_fields->FADE_TIME + v22);
  v24 = (AssetLoader_LoadEndDataHandler_o *)sub_1C93D20(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v24,
    (Il2CppObject *)v5,
    Method_TutorialBigDialog___c__DisplayClass55_0__LoadAlpha_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v23, v24, 1, 0);
}


void TutorialBigDialog__LoadImages(TutorialBigDialog_o *this, System_Int32_array *images, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  System_Action_o *v13; // x20
  const MethodInfo *v14; // x2

  if ( (byte_4D2F630 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_TutorialBigDialog_LoadStart__);
    byte_4D2F630 = 1;
  }
  this->fields._loadIndex = 0;
  this->fields.loadByAsset = 0;
  v4 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.ImagePageList = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.ImagePageList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v12);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
  v13 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_TutorialBigDialog_LoadStart__, 0);
  TutorialBigDialog__LoadAlpha(this, v13, v14);
}


void TutorialBigDialog__LoadImages_40849496(
        TutorialBigDialog_o *this,
        System_String_array *images,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  System_Action_o *v13; // x20
  const MethodInfo *v14; // x2

  if ( (byte_4D2F631 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_TutorialBigDialog_LoadStartAssets__);
    byte_4D2F631 = 1;
  }
  this->fields._loadIndex = 0;
  this->fields.loadByAsset = 1;
  v4 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.ImagePageList = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.ImagePageList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v12);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
  v13 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_TutorialBigDialog_LoadStartAssets__, 0);
  TutorialBigDialog__LoadAlpha(this, v13, v14);
}


void TutorialBigDialog__LoadStart(TutorialBigDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TutorialBigDialog_o *v3; // x19
  struct System_Int32_array *TutorialImageLoadList; // x8
  __int64 loadIndex; // x9
  System_String_o *TuorialImagePath; // x20
  AssetLoader_LoadEndDataHandler_o *v7; // x21

  v3 = this;
  if ( (byte_4D2F634 & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    this = (TutorialBigDialog_o *)sub_1C93AD4(&Method_TutorialBigDialog__LoadStart_b__49_0__);
    byte_4D2F634 = 1;
  }
  TutorialImageLoadList = v3->fields.TutorialImageLoadList;
  if ( !TutorialImageLoadList )
    sub_1C93D2C(this, method);
  loadIndex = v3->fields._loadIndex;
  if ( (unsigned int)loadIndex >= LODWORD(TutorialImageLoadList->max_length) )
    sub_1C93D34(this);
  TuorialImagePath = TutorialBigDialog__GetTuorialImagePath(v3, TutorialImageLoadList->m_Items[loadIndex], v2);
  v7 = (AssetLoader_LoadEndDataHandler_o *)sub_1C93D20(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v7, (Il2CppObject *)v3, Method_TutorialBigDialog__LoadStart_b__49_0__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(TuorialImagePath, v7, 1, 0);
}


void TutorialBigDialog__LoadStartAssets(TutorialBigDialog_o *this, const MethodInfo *method)
{
  TutorialBigDialog_o *v2; // x19
  struct System_String_array *assetsImageLoadList; // x8
  __int64 loadIndex; // x9
  System_String_o *v5; // x20
  AssetLoader_LoadEndDataHandler_o *v6; // x21

  v2 = this;
  if ( (byte_4D2F635 & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    this = (TutorialBigDialog_o *)sub_1C93AD4(&Method_TutorialBigDialog__LoadStartAssets_b__50_0__);
    byte_4D2F635 = 1;
  }
  assetsImageLoadList = v2->fields.assetsImageLoadList;
  if ( !assetsImageLoadList )
    sub_1C93D2C(this, method);
  loadIndex = v2->fields._loadIndex;
  if ( (unsigned int)loadIndex >= LODWORD(assetsImageLoadList->max_length) )
    sub_1C93D34(this);
  v5 = assetsImageLoadList->m_Items[loadIndex];
  v6 = (AssetLoader_LoadEndDataHandler_o *)sub_1C93D20(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v6, (Il2CppObject *)v2, Method_TutorialBigDialog__LoadStartAssets_b__50_0__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v5, v6, 1, 0);
}


void TutorialBigDialog__OnBottomButton(TutorialBigDialog_o *this, const MethodInfo *method)
{
  TutorialBigDialog_o *v2; // x19
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  v2 = this;
  if ( (byte_4D2F641 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    this = (TutorialBigDialog_o *)sub_1C93AD4(&Method_TutorialBigDialog_OnBottomButton__);
    byte_4D2F641 = 1;
  }
  if ( !v2->fields.IsFading )
  {
    ImagePageList = v2->fields.ImagePageList;
    if ( !ImagePageList )
      sub_1C93D2C(this, method);
    if ( v2->fields.CurrentIndex == ImagePageList->fields._size - 1 )
    {
      v4 = Method_TutorialBigDialog_OnBottomButton__;
      if ( (*((_BYTE *)Method_TutorialBigDialog_OnBottomButton__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1C93AEC(Method_TutorialBigDialog_OnBottomButton__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v4, v4[4]);
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
  Il2CppObject *Request_object; // x0
  __int64 v8; // x1
  int32_t eventFlagId; // w1
  int32_t eventId; // w0
  NetworkManager_ResultCallbackFunc_o *v11; // x20

  if ( (byte_4D2F642 & 1) == 0 )
  {
    sub_1C93AD4(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_1C93AD4(&Method_NetworkManager_getRequest_TutorialSetRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_TutorialBigDialog_EndTurorialRequest__);
    sub_1C93AD4(&Method_TutorialBigDialog_OnClickClose__);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2F642 = 1;
  }
  if ( !this->fields.IsFading && this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v3 = Method_TutorialBigDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_TutorialBigDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_TutorialBigDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    if ( this->fields.flagId != -1 )
    {
      v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_TutorialBigDialog_EndTurorialRequest__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v6,
                         (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_TutorialSetRequest___);
      if ( Request_object )
      {
        TutorialSetRequest__beginRequest((TutorialSetRequest_o *)Request_object, this->fields.flagId, 0);
        return;
      }
LABEL_22:
      sub_1C93D2C(Request_object, v8);
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
    v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_TutorialBigDialog_EndTurorialRequest__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v11,
                       (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
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
  if ( (byte_4D2F63F & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    this = (TutorialBigDialog_o *)sub_1C93AD4(&Method_TutorialBigDialog_OnNextButton__);
    byte_4D2F63F = 1;
  }
  if ( !v2->fields.IsFading )
  {
    ImagePageList = v2->fields.ImagePageList;
    if ( !ImagePageList )
      sub_1C93D2C(this, method);
    if ( v2->fields.CurrentIndex != ImagePageList->fields._size - 1 )
    {
      v4 = Method_TutorialBigDialog_OnNextButton__;
      if ( (*((_BYTE *)Method_TutorialBigDialog_OnNextButton__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1C93AEC(Method_TutorialBigDialog_OnNextButton__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v4, v4[4]);
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
  if ( (byte_4D2F643 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    this = (TutorialBigDialog_o *)sub_1C93AD4(&Method_TutorialBigDialog_OnPageChange__);
    byte_4D2F643 = 1;
  }
  if ( (idx & 0x80000000) == 0 && v4->fields.CurrentIndex != idx )
  {
    ImagePageList = v4->fields.ImagePageList;
    if ( !ImagePageList )
      sub_1C93D2C(this, *(_QWORD *)&idx);
    if ( ImagePageList->fields._size > idx )
    {
      v6 = Method_TutorialBigDialog_OnPageChange__;
      if ( (*((_BYTE *)Method_TutorialBigDialog_OnPageChange__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1C93AEC(Method_TutorialBigDialog_OnPageChange__);
      v7 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
    }
  }
}


void TutorialBigDialog__OnPrevButton(TutorialBigDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4D2F640 & 1) == 0 )
  {
    sub_1C93AD4(&Method_TutorialBigDialog_OnPrevButton__);
    byte_4D2F640 = 1;
  }
  if ( !this->fields.IsFading && this->fields.CurrentIndex >= 1 )
  {
    v3 = Method_TutorialBigDialog_OnPrevButton__;
    if ( (*((_BYTE *)Method_TutorialBigDialog_OnPrevButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_TutorialBigDialog_OnPrevButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
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
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  __int64 v31; // x1
  UnityEngine_GameObject_o *CloseButton; // x0
  TutorialBigDialog_c *v33; // x8
  UnityEngine_Transform_o *v34; // x21
  struct System_Int32_array *v35; // x0
  struct System_Int32_array **p_TutorialImageLoadList; // x21
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  struct System_Int32_array *v43; // x9
  unsigned __int64 max_length; // x10
  unsigned __int64 v45; // x8
  __int64 m_Items; // x13
  System_Int32_array *v47; // x1
  const MethodInfo *v48; // x2
  const MethodInfo *v49; // x2

  if ( (byte_4D2F62C & 1) == 0 )
  {
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&TutorialBigDialog_TypeInfo);
    byte_4D2F62C = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&flagId);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.endOpenCallbackFunc,
    (int32_t)endOpenFunc,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.endTurorialRequestFunc,
    (int32_t)endTurorialRequestFunc,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.closeCallbackFunc = closeFunc;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)closeFunc,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  CloseButton = this->fields.CloseButton;
  this->fields.flagId = flagId;
  *(_QWORD *)&this->fields.eventFlagId = 0xFFFFFFFFLL;
  this->fields.sizeKind = 1;
  if ( !CloseButton )
    goto LABEL_19;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0);
  v33 = TutorialBigDialog_TypeInfo;
  v34 = (UnityEngine_Transform_o *)CloseButton;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v33 = TutorialBigDialog_TypeInfo;
  }
  if ( !v34 )
    goto LABEL_19;
  UnityEngine_Transform__set_localPosition(v34, v33->static_fields->baseCloseButtonPosition, 0);
  if ( !images )
    goto LABEL_19;
  v35 = (struct System_Int32_array *)sub_1C93B7C(int___TypeInfo, LODWORD(images->max_length));
  this->fields.TutorialImageLoadList = v35;
  p_TutorialImageLoadList = &this->fields.TutorialImageLoadList;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.TutorialImageLoadList,
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
    max_length = (unsigned int)images->max_length;
    v45 = 0;
    m_Items = (__int64)(*p_TutorialImageLoadList)->m_Items;
    do
    {
      if ( v45 >= max_length )
        goto LABEL_18;
      if ( !v43 )
        goto LABEL_19;
      if ( v45 >= LODWORD(v43->max_length) )
LABEL_18:
        sub_1C93D34(CloseButton);
      *(_DWORD *)(m_Items + 4 * v45) = images->m_Items[v45];
      ++v45;
    }
    while ( (__int64)v45 < (int)max_length );
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMask((BaseDialog_o *)this, 0, 0);
  TutorialBigDialog__LoadImages(this, v47, v48);
  CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !CloseButton )
LABEL_19:
    sub_1C93D2C(CloseButton, v31);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  __int64 v28; // x1
  UnityEngine_GameObject_o *CloseButton; // x0
  TutorialBigDialog_c *v30; // x8
  UnityEngine_Transform_o *v31; // x21
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  Il2CppObject *Component_object; // x21
  EventDelegate_Callback_o *v39; // x22
  EventDelegate_o *v40; // x20
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v48; // x9
  __int64 klass_low; // x10
  intptr_t v50; // x8
  System_Int32_array *v51; // x1
  const MethodInfo *v52; // x2
  const MethodInfo *v53; // x2

  if ( (byte_4D2F62F & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&EventDelegate_Callback_TypeInfo);
    sub_1C93AD4(&EventDelegate_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C93AD4(&Method_TutorialBigDialog__OpenAssets_b__43_0__);
    sub_1C93AD4(&Method_TutorialBigDialog__OpenAssets_b__43_1__);
    sub_1C93AD4(&TutorialBigDialog_TypeInfo);
    byte_4D2F62F = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&kind);
  v9 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_TutorialBigDialog__OpenAssets_b__43_0__, 0);
  this->fields.endOpenCallbackFunc = v9;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.endOpenCallbackFunc,
    (int32_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  this->fields.endTurorialRequestFunc = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.endTurorialRequestFunc, 0, v16, v17, v18, v19, v20, v21);
  this->fields.closeCallbackFunc = closeFunc;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)closeFunc,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  CloseButton = this->fields.CloseButton;
  *(_QWORD *)&this->fields.flagId = -1;
  this->fields.eventId = 0;
  this->fields.sizeKind = kind;
  if ( !CloseButton )
    goto LABEL_18;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0);
  v30 = TutorialBigDialog_TypeInfo;
  v31 = (UnityEngine_Transform_o *)CloseButton;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v30 = TutorialBigDialog_TypeInfo;
  }
  if ( !v31 )
    goto LABEL_18;
  UnityEngine_Transform__set_localPosition(v31, v30->static_fields->miniCloseButtonPosition, 0);
  this->fields.TutorialImageLoadList = images;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.TutorialImageLoadList,
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
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
  v39 = (EventDelegate_Callback_o *)sub_1C93D20(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v39, (Il2CppObject *)this, Method_TutorialBigDialog__OpenAssets_b__43_1__, 0);
  v40 = (EventDelegate_o *)sub_1C93D20(EventDelegate_TypeInfo);
  EventDelegate___ctor_49997180(v40, v39, 0);
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
      *(const MethodInfo_387999C **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
  }
  else
  {
    v50 = m_CachedPtr + 8 * klass_low;
    LODWORD(CloseButton[1].klass) = klass_low + 1;
    *(_QWORD *)(v50 + 32) = v40;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v50 + 32), (int32_t)v40, v41, v42, v43, v44, v45, v46);
  }
  BaseDialog__SetMask((BaseDialog_o *)this, 0, 0);
  TutorialBigDialog__LoadImages(this, v51, v52);
  CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !CloseButton )
LABEL_18:
    sub_1C93D2C(CloseButton, v28);
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0);
  TutorialBigDialog__UpdateButtons(this, 1, v53);
}


void TutorialBigDialog__OpenWindow(TutorialBigDialog_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_4D2F63A & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_TutorialBigDialog_EndOpen__);
    byte_4D2F63A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v4);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
  v5 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
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
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  __int64 v29; // x1
  UnityEngine_GameObject_o *CloseButton; // x0
  TutorialBigDialog_c *v31; // x8
  UnityEngine_Transform_o *v32; // x21
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  System_String_array *v39; // x1
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x2

  if ( (byte_4D2F62E & 1) == 0 )
  {
    sub_1C93AD4(&TutorialBigDialog_TypeInfo);
    byte_4D2F62E = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, (const MethodInfo *)closeFunc);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.endOpenCallbackFunc,
    (int32_t)endOpenFunc,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.endTurorialRequestFunc,
    (int32_t)endTurorialRequestFunc,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.closeCallbackFunc = closeFunc;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)closeFunc,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  CloseButton = this->fields.CloseButton;
  *(_QWORD *)&this->fields.flagId = -1;
  this->fields.eventId = 0;
  this->fields.sizeKind = 1;
  if ( !CloseButton )
    goto LABEL_11;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0);
  v31 = TutorialBigDialog_TypeInfo;
  v32 = (UnityEngine_Transform_o *)CloseButton;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v31 = TutorialBigDialog_TypeInfo;
  }
  if ( !v32
    || (UnityEngine_Transform__set_localPosition(v32, v31->static_fields->baseCloseButtonPosition, 0),
        this->fields.assetsImageLoadList = images,
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&this->fields.assetsImageLoadList,
          (int32_t)images,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38),
        this->fields.isButtonEnable = 0,
        BaseDialog__SetMask((BaseDialog_o *)this, 0, 0),
        TutorialBigDialog__LoadImages_40849496(this, v39, v40),
        (CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_11:
    sub_1C93D2C(CloseButton, v29);
  }
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0);
  TutorialBigDialog__UpdateButtons(this, 1, v41);
}


void TutorialBigDialog__Open_40848736(
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
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  __int64 v36; // x1
  UnityEngine_GameObject_o *CloseButton; // x0
  TutorialBigDialog_c *v38; // x8
  UnityEngine_Transform_o *v39; // x22
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  System_Int32_array *v46; // x1
  const MethodInfo *v47; // x2
  const MethodInfo *v48; // x2

  if ( (byte_4D2F62D & 1) == 0 )
  {
    sub_1C93AD4(&TutorialBigDialog_TypeInfo);
    byte_4D2F62D = 1;
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
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.endOpenCallbackFunc,
    (int32_t)endOpenFunc,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.endTurorialRequestFunc,
    (int32_t)endTurorialRequestFunc,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields.closeCallbackFunc = closeFunc;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)closeFunc,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  CloseButton = this->fields.CloseButton;
  this->fields.flagId = -1;
  this->fields.eventFlagId = flagId;
  this->fields.eventId = eventId;
  this->fields.sizeKind = 1;
  if ( !CloseButton )
    goto LABEL_12;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0);
  v38 = TutorialBigDialog_TypeInfo;
  v39 = (UnityEngine_Transform_o *)CloseButton;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v38 = TutorialBigDialog_TypeInfo;
  }
  if ( !v39 )
    goto LABEL_12;
  UnityEngine_Transform__set_localPosition(v39, v38->static_fields->baseCloseButtonPosition, 0);
  this->fields.TutorialImageLoadList = images;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.TutorialImageLoadList,
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
    sub_1C93D2C(CloseButton, v36);
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
    sub_1C93D2C(TouchMask, isDisp);
  }
  UnityEngine_GameObject__SetActive(TouchMask, isDisp, 0);
}


// local variable allocation has failed, the output may be wrong!
void TutorialBigDialog__UpdateButtons(TutorialBigDialog_o *this, bool isDisp, const MethodInfo *method)
{
  TutorialBigDialog_o *v4; // x19
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x8
  UILabel_o *basePanel; // x20
  UILabel_o *v7; // x19

  v4 = this;
  if ( (byte_4D2F63C & 1) == 0 )
  {
    sub_1C93AD4(&AndroidBackKeyManager_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____79080840);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_13638/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/);
    this = (TutorialBigDialog_o *)sub_1C93AD4(&StringLiteral_13639/*"TUTORIAL_IMAGE_DIALOG_PREV"*/);
    byte_4D2F63C = 1;
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
    goto LABEL_34;
  }
  ImagePageList = v4->fields.ImagePageList;
  if ( !ImagePageList )
    goto LABEL_34;
  this = (TutorialBigDialog_o *)v4->fields.CloseButton;
  if ( !this )
    goto LABEL_34;
  if ( v4->fields.CurrentIndex == ImagePageList->fields._size - 1 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (TutorialBigDialog_o *)v4->fields.NextButton;
    if ( !this )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    AndroidBackKeyManager__AddBackBtn(v4->fields.CloseButton, 0);
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = (TutorialBigDialog_o *)v4->fields.NextButton;
    if ( !this )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    AndroidBackKeyManager__AddBackBtn(v4->fields.PrevButton, 0);
    this = (TutorialBigDialog_o *)v4->fields.NextButton;
    if ( !this )
      goto LABEL_34;
    this = (TutorialBigDialog_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    if ( !this )
      goto LABEL_34;
    this = (TutorialBigDialog_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                    (UnityEngine_Component_o *)this,
                                    1,
                                    (const MethodInfo_319BF30 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____79080840);
    if ( !this )
      goto LABEL_34;
    if ( !LODWORD(this->fields.m_CancellationTokenSource) )
LABEL_35:
      sub_1C93D34(this);
    basePanel = (UILabel_o *)this->fields.basePanel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (TutorialBigDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13638/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, 0);
    if ( !basePanel )
LABEL_34:
      sub_1C93D2C(this, isDisp);
    UILabel__set_text(basePanel, (System_String_o *)this, 0);
  }
  this = (TutorialBigDialog_o *)v4->fields.PrevButton;
  if ( !this )
    goto LABEL_34;
  if ( v4->fields.CurrentIndex < 1 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    goto LABEL_33;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  this = (TutorialBigDialog_o *)v4->fields.PrevButton;
  if ( !this )
    goto LABEL_34;
  this = (TutorialBigDialog_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_34;
  this = (TutorialBigDialog_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                  (UnityEngine_Component_o *)this,
                                  1,
                                  (const MethodInfo_319BF30 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____79080840);
  if ( !this )
    goto LABEL_34;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_35;
  v7 = (UILabel_o *)this->fields.basePanel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (TutorialBigDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13639/*"TUTORIAL_IMAGE_DIALOG_PREV"*/, 0);
  if ( !v7 )
    goto LABEL_34;
  UILabel__set_text(v7, (System_String_o *)this, 0);
LABEL_33:
  AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 1;
}


void TutorialBigDialog__UpdatePage(TutorialBigDialog_o *this, int32_t dispIndex, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  long double v8; // q8
  int32_t CurrentIndex; // w26
  struct UITexture_o **p_FadeInTarget; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  System_Collections_Generic_List_object__o *ImagePageList; // x0
  int size; // w8
  int v23; // w27
  int32_t v24; // w23
  UnityEngine_GameObject_o *v25; // x24
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  long double v32; // q0
  System_Collections_Generic_List_object__o *v33; // x25
  System_Collections_Generic_List_object__c *klass; // x8
  bool v35; // w1
  UnityEngine_GameObject_o *gameObject; // x21
  TutorialBigDialog_c *v37; // x8
  UnityEngine_GameObject_o *v38; // x0
  UITweener_o *v39; // x20
  EventDelegate_Callback_o *v40; // x21

  if ( (byte_4D2F63B & 1) == 0 )
  {
    sub_1C93AD4(&EventDelegate_Callback_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UITexture___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C93AD4(&Method_TutorialBigDialog__UpdatePage_b__57_0__);
    sub_1C93AD4(&TutorialBigDialog_TypeInfo);
    byte_4D2F63B = 1;
  }
  CurrentIndex = this->fields.CurrentIndex;
  this->fields.FadeInTarget = 0;
  p_FadeInTarget = &this->fields.FadeInTarget;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.FadeInTarget, 0, (int32_t)method, v3, v4, v5, v6, v7);
  this->fields.FadeOutTarget = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.FadeOutTarget, 0, v13, v14, v15, v16, v17, v18);
  ImagePageList = (System_Collections_Generic_List_object__o *)this->fields.ImagePageList;
  if ( !ImagePageList )
    goto LABEL_29;
  size = ImagePageList->fields._size;
  v23 = size - 1;
  if ( size >= 1 )
  {
    LODWORD(v8) = 1000593162;
    v24 = 0;
    while ( 1 )
    {
      ImagePageList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                     ImagePageList,
                                                                     v24,
                                                                     (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !ImagePageList )
        goto LABEL_29;
      v25 = (UnityEngine_GameObject_o *)ImagePageList;
      ImagePageList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                     (UnityEngine_GameObject_o *)ImagePageList,
                                                                     (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
      v33 = ImagePageList;
      if ( dispIndex == v24 )
      {
        if ( CurrentIndex == dispIndex )
        {
          if ( !ImagePageList )
            goto LABEL_29;
          klass = ImagePageList->klass;
          LODWORD(v32) = 1.0;
        }
        else
        {
          *p_FadeInTarget = (struct UITexture_o *)ImagePageList;
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&this->fields.FadeInTarget,
            (int32_t)ImagePageList,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31);
          if ( !v33 )
            goto LABEL_29;
          klass = v33->klass;
          ImagePageList = v33;
          v32 = v8;
        }
        ((void (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *, long double))klass->vtable._8_unknown.methodPtr)(
          ImagePageList,
          klass->vtable._8_unknown.method,
          v32);
      }
      else
      {
        v35 = 0;
        if ( v24 != this->fields.CurrentIndex || CurrentIndex == dispIndex )
          goto LABEL_18;
        this->fields.FadeOutTarget = (struct UITexture_o *)ImagePageList;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&this->fields.FadeOutTarget,
          (int32_t)ImagePageList,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
      }
      v35 = 1;
LABEL_18:
      UnityEngine_GameObject__SetActive(v25, v35, 0);
      if ( v23 == v24 )
        break;
      ImagePageList = (System_Collections_Generic_List_object__o *)this->fields.ImagePageList;
      ++v24;
      if ( !ImagePageList )
        goto LABEL_29;
    }
  }
  this->fields.CurrentIndex = dispIndex;
  if ( CurrentIndex == dispIndex )
  {
    TutorialBigDialog__UpdateButtons(this, 1, v20);
    return;
  }
  ImagePageList = (System_Collections_Generic_List_object__o *)this->fields.FadeOutTarget;
  this->fields.IsFading = 1;
  if ( !ImagePageList )
    goto LABEL_29;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ImagePageList, 0);
  v37 = TutorialBigDialog_TypeInfo;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v37 = TutorialBigDialog_TypeInfo;
  }
  TweenAlpha__Begin(gameObject, v37->static_fields->FADE_TIME, 0.0, 0);
  ImagePageList = (System_Collections_Generic_List_object__o *)*p_FadeInTarget;
  if ( !*p_FadeInTarget
    || (v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ImagePageList, 0),
        v39 = (UITweener_o *)TweenAlpha__Begin(v38, TutorialBigDialog_TypeInfo->static_fields->FADE_TIME, 1.0, 0),
        v40 = (EventDelegate_Callback_o *)sub_1C93D20(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(v40, (Il2CppObject *)this, Method_TutorialBigDialog__UpdatePage_b__57_0__, 0),
        !v39) )
  {
LABEL_29:
    sub_1C93D2C(ImagePageList, v19);
  }
  UITweener__SetOnFinished(v39, v40, 0);
}


System_Collections_IEnumerator_o *TutorialBigDialog__WaitPurchase(
        TutorialBigDialog_o *this,
        int32_t CurrentIndex,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D2F638 & 1) == 0 )
  {
    sub_1C93AD4(&TutorialBigDialog__WaitPurchase_d__54_TypeInfo);
    byte_4D2F638 = 1;
  }
  v5 = sub_1C93D20(TutorialBigDialog__WaitPurchase_d__54_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_DWORD *)(v5 + 40) = CurrentIndex;
  return (System_Collections_IEnumerator_o *)v5;
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
  Il2CppObject *Object_object__51927708; // x0
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  v4 = this;
  if ( (byte_4D2F648 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_AssetData_GetObject_Texture2D____79057928);
    sub_1C93AD4(&Method_TutorialBigDialog__LoadStartAssets_b__50_1__);
    this = (TutorialBigDialog_o *)sub_1C93AD4(&StringLiteral_16358/*"_L_"*/);
    byte_4D2F648 = 1;
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
                                  (System_String_o *)StringLiteral_16358/*"_L_"*/,
                                  0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)v4, Method_TutorialBigDialog__LoadStartAssets_b__50_1__, 0);
    TutorialBigDialog__AddScrollImg(v4, data, v5, v6);
    return;
  }
  assetsImageLoadList = v4->fields.assetsImageLoadList;
  if ( !assetsImageLoadList )
LABEL_12:
    sub_1C93D2C(this, data);
  v8 = v4->fields._loadIndex + 1;
  if ( (unsigned int)v8 >= LODWORD(assetsImageLoadList->max_length) )
LABEL_13:
    sub_1C93D34(this);
  Object_object__51927708 = AssetData__GetObject_object__51927708(
                              data,
                              assetsImageLoadList->m_Items[v8],
                              (const MethodInfo_3185A9C *)Method_AssetData_GetObject_Texture2D____79057928);
  TutorialBigDialog__AddImg(v4, (UnityEngine_Texture2D_o *)Object_object__51927708, v10);
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
  Il2CppObject *Object_object__51927708; // x0
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2

  v4 = this;
  if ( (byte_4D2F647 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_AssetData_GetObject_Texture2D____79057928);
    sub_1C93AD4(&Method_TutorialBigDialog__LoadStart_b__49_1__);
    this = (TutorialBigDialog_o *)sub_1C93AD4(&StringLiteral_16358/*"_L_"*/);
    byte_4D2F647 = 1;
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
                                  (System_String_o *)StringLiteral_16358/*"_L_"*/,
                                  0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v6 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)v4, Method_TutorialBigDialog__LoadStart_b__49_1__, 0);
    TutorialBigDialog__AddScrollImg(v4, data, v6, v7);
    return;
  }
  TutorialImageLoadList = v4->fields.TutorialImageLoadList;
  if ( !TutorialImageLoadList )
LABEL_12:
    sub_1C93D2C(this, data);
  loadIndex = v4->fields._loadIndex;
  if ( (unsigned int)loadIndex >= LODWORD(TutorialImageLoadList->max_length) )
LABEL_13:
    sub_1C93D34(this);
  TuorialImageName = TutorialBigDialog__GetTuorialImageName(this, TutorialImageLoadList->m_Items[loadIndex], v5);
  Object_object__51927708 = AssetData__GetObject_object__51927708(
                              data,
                              TuorialImageName,
                              (const MethodInfo_3185A9C *)Method_AssetData_GetObject_Texture2D____79057928);
  TutorialBigDialog__AddImg(v4, (UnityEngine_Texture2D_o *)Object_object__51927708, v12);
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
    sub_1C93D2C(FadeOutTarget, v3);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)FadeOutTarget, 0, 0);
  this->fields.IsFading = 0;
  TutorialBigDialog__UpdateButtons(this, 1, v5);
}


void TutorialBigDialog__refreshCurrent(TutorialBigDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ImagePageList; // x0
  int32_t CurrentIndex; // w1
  UnityEngine_Object_o *Component_object; // x19

  if ( (byte_4D2F63D & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_TutorialImageLong___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2F63D = 1;
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
                                                                   (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !ImagePageList )
      goto LABEL_13;
    Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)ImagePageList,
                                                 (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_TutorialImageLong___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      sub_1C93D2C(ImagePageList, method);
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
  int32_t _1__state; // w8
  TutorialBigDialog___c_c *v5; // x0
  System_Func_bool__o *_9__54_0; // x20
  Il2CppObject *v7; // x21
  struct TutorialBigDialog___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  UnityEngine_WaitUntil_o *v15; // x21
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  TutorialBigDialog_o *_4__this; // x20

  v3 = this;
  if ( (byte_4D2F64C & 1) == 0 )
  {
    sub_1C93AD4(&System_Func_bool__TypeInfo);
    sub_1C93AD4(&Method_TutorialBigDialog___c__WaitPurchase_b__54_0__);
    sub_1C93AD4(&TutorialBigDialog___c_TypeInfo);
    sub_1C93AD4(&UnityEngine_WaitUntil_TypeInfo);
    this = (TutorialBigDialog__WaitPurchase_d__54_o *)sub_1C93AD4(&StringLiteral_10066/*"OpenWindow"*/);
    byte_4D2F64C = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v3->fields.__4__this;
    v3->fields.__1__state = -1;
    if ( !_4__this )
      sub_1C93D2C(this, method);
    TutorialBigDialog__UpdatePage(_4__this, v3->fields.CurrentIndex, v2);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)_4__this,
      (System_String_o *)StringLiteral_10066/*"OpenWindow"*/,
      0.3,
      0);
    return 0;
  }
  if ( _1__state )
    return 0;
  v3->fields.__1__state = -1;
  v5 = TutorialBigDialog___c_TypeInfo;
  if ( !TutorialBigDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog___c_TypeInfo);
    v5 = TutorialBigDialog___c_TypeInfo;
  }
  _9__54_0 = v5->static_fields->__9__54_0;
  if ( !_9__54_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = TutorialBigDialog___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__54_0 = (System_Func_bool__o *)sub_1C93D20(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(_9__54_0, v7, Method_TutorialBigDialog___c__WaitPurchase_b__54_0__, 0);
    static_fields = TutorialBigDialog___c_TypeInfo->static_fields;
    static_fields->__9__54_0 = _9__54_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__54_0,
      (int32_t)_9__54_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = (UnityEngine_WaitUntil_o *)sub_1C93D20(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v15, _9__54_0, 0);
  v3->fields.__2__current = (Il2CppObject *)v15;
  p__2__current = (GrandQuestFolderBoardItem_o *)&v3->fields.__2__current;
  sub_1C93A78(p__2__current, (int32_t)v15, v17, v18, v19, v20, v21, v22);
  LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
  return 1;
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

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_TutorialBigDialog__WaitPurchase_d__54_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2F649 & 1) == 0 )
  {
    sub_1C93AD4(&TutorialBigDialog___c_TypeInfo);
    byte_4D2F649 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(TutorialBigDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TutorialBigDialog___c_TypeInfo->static_fields->__9 = (struct TutorialBigDialog___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)TutorialBigDialog___c_TypeInfo->static_fields,
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
  PurchaseBehaviour_c *v2; // x0

  if ( (byte_4D2F64A & 1) == 0 )
  {
    sub_1C93AD4(&PurchaseBehaviour_TypeInfo);
    byte_4D2F64A = 1;
  }
  v2 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    v2 = PurchaseBehaviour_TypeInfo;
  }
  return !v2->static_fields->isOpenPurchaseDialogEvent;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  AssetData_o *v8; // x20
  TutorialBigDialog___c__DisplayClass52_0_o *v9; // x19
  struct TutorialBigDialog_o *_4__this; // x8
  UnityEngine_Shader_o *v11; // x22
  UnityEngine_Material_o *v12; // x21
  struct TutorialImageLong_o *comp; // x8
  const MethodInfo *v14; // x2
  struct TutorialBigDialog_o *v15; // x23
  struct TutorialBigDialog_o *v16; // x8
  Il2CppObject *Object_object__51927708; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  struct TutorialBigDialog_o *v24; // x8
  struct TutorialBigDialog_o *v25; // x8
  _QWORD *v26; // x9
  __int64 comp_low; // x10
  TutorialBigDialog_c **v28; // x8

  v8 = aData;
  v9 = this;
  if ( (byte_4D2F64B & 1) == 0 )
  {
    sub_1C93AD4(&Method_AssetData_GetObject_Texture2D____79057928);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C93AD4(&UnityEngine_Material_TypeInfo);
    sub_1C93AD4(&TutorialBigDialog_TypeInfo);
    sub_1C93AD4(&StringLiteral_4960/*"Custom/SpriteWithMask"*/);
    this = (TutorialBigDialog___c__DisplayClass52_0_o *)sub_1C93AD4(&StringLiteral_16370/*"_MaskTex"*/);
    byte_4D2F64B = 1;
  }
  _4__this = v9->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  _4__this->fields.baseTexAssetData = v8;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&_4__this->fields.baseTexAssetData,
    (int32_t)v8,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4960/*"Custom/SpriteWithMask"*/, 0);
  v12 = (UnityEngine_Material_o *)sub_1C93D20(UnityEngine_Material_TypeInfo);
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
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
  if ( !v15 )
    goto LABEL_20;
  this = (TutorialBigDialog___c__DisplayClass52_0_o *)TutorialBigDialog__GetTuorialImageName(
                                                        (TutorialBigDialog_o *)this,
                                                        TutorialBigDialog_TypeInfo->static_fields->baseImgNo,
                                                        v14);
  if ( !v8 )
    goto LABEL_20;
  this = (TutorialBigDialog___c__DisplayClass52_0_o *)AssetData__GetObject_object__51927708(
                                                        v8,
                                                        (System_String_o *)this,
                                                        (const MethodInfo_3185A9C *)Method_AssetData_GetObject_Texture2D____79057928);
  if ( !v12 )
    goto LABEL_20;
  UnityEngine_Material__set_mainTexture(v12, (UnityEngine_Texture_o *)this, 0);
  v16 = v9->fields.__4__this;
  if ( !v16 )
    goto LABEL_20;
  this = (TutorialBigDialog___c__DisplayClass52_0_o *)v16->fields.alphaTexAssetData;
  if ( !this )
    goto LABEL_20;
  Object_object__51927708 = AssetData__GetObject_object__51927708(
                              (AssetData_o *)this,
                              TutorialBigDialog_TypeInfo->static_fields->alphaImgName,
                              (const MethodInfo_3185A9C *)Method_AssetData_GetObject_Texture2D____79057928);
  UnityEngine_Material__SetTexture(
    v12,
    (System_String_o *)StringLiteral_16370/*"_MaskTex"*/,
    (UnityEngine_Texture_o *)Object_object__51927708,
    0);
  v24 = v9->fields.__4__this;
  if ( !v24
    || (this = (TutorialBigDialog___c__DisplayClass52_0_o *)v24->fields.ImagePageList) == 0
    || (aData = (AssetData_o *)v9->fields.obj,
        v25 = this->fields.__4__this,
        v26 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++HIDWORD(this->fields.comp),
        !v25) )
  {
LABEL_20:
    sub_1C93D2C(this, aData);
  }
  comp_low = SLODWORD(this->fields.comp);
  if ( (unsigned int)comp_low >= LODWORD(v25->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)aData,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = &v25->klass + comp_low;
    LODWORD(this->fields.comp) = comp_low + 1;
    v28[4] = (TutorialBigDialog_c *)aData;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v28 + 4), (int32_t)aData, v18, v19, v20, v21, v22, v23);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct TutorialBigDialog_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(this, data);
  _4__this->fields.alphaTexAssetData = data;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&_4__this->fields.alphaTexAssetData,
    (int32_t)data,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ActionExtensions__Call(this->fields.callback, 0);
}