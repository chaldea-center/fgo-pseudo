void TutorialBigDialog___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  struct TutorialBigDialog_StaticFields *static_fields; // x0
  int32_t v4; // w1
  int32_t v5; // w1
  struct TutorialBigDialog_StaticFields *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  struct TutorialBigDialog_StaticFields *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  struct TutorialBigDialog_StaticFields *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  TutorialBigDialog_c *v17; // x8
  struct TutorialBigDialog_StaticFields *v18; // x9
  struct TutorialBigDialog_StaticFields *v19; // x8

  if ( (byte_4C36629 & 1) == 0 )
  {
    sub_1C32C20(&TutorialBigDialog_TypeInfo);
    sub_1C32C20(&StringLiteral_14615/*"Tutorial/tutorial_alpha"*/);
    sub_1C32C20(&StringLiteral_18148/*"combine_tutorial_alpha"*/);
    sub_1C32C20(&StringLiteral_14613/*"Tutorial/combine_tutorial_alpha"*/);
    sub_1C32C20(&StringLiteral_24234/*"tutorial_alpha"*/);
    byte_4C36629 = 1;
  }
  static_fields = TutorialBigDialog_TypeInfo->static_fields;
  static_fields->FADE_TIME = 0.3;
  v4 = StringLiteral_14615/*"Tutorial/tutorial_alpha"*/;
  static_fields->alphaImgPath = (struct System_String_o *)StringLiteral_14615/*"Tutorial/tutorial_alpha"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->alphaImgPath, v4, v1, v2);
  v5 = StringLiteral_24234/*"tutorial_alpha"*/;
  v6 = TutorialBigDialog_TypeInfo->static_fields;
  v6->alphaImgName = (struct System_String_o *)StringLiteral_24234/*"tutorial_alpha"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v6->alphaImgName, v5, v7, v8);
  v9 = StringLiteral_14613/*"Tutorial/combine_tutorial_alpha"*/;
  v10 = TutorialBigDialog_TypeInfo->static_fields;
  v10->alphaMiniImgPath = (struct System_String_o *)StringLiteral_14613/*"Tutorial/combine_tutorial_alpha"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v10->alphaMiniImgPath, v9, v11, v12);
  v13 = StringLiteral_18148/*"combine_tutorial_alpha"*/;
  v14 = TutorialBigDialog_TypeInfo->static_fields;
  v14->alphaMiniImgName = (struct System_String_o *)StringLiteral_18148/*"combine_tutorial_alpha"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v14->alphaMiniImgName, v13, v15, v16);
  v17 = TutorialBigDialog_TypeInfo;
  v18 = TutorialBigDialog_TypeInfo->static_fields;
  v18->baseCloseButtonPosition.fields.z = 0.0;
  *(_QWORD *)&v18->baseImgNo = 0x38400000006LL;
  *(_QWORD *)&v18->baseCloseButtonPosition.fields.x = 0x4382800043F28000LL;
  v19 = v17->static_fields;
  *(_QWORD *)&v19->miniCloseButtonPosition.fields.x = 0x4362000043BD0000LL;
  v19->miniCloseButtonPosition.fields.z = 0.0;
}


void TutorialBigDialog___ctor(TutorialBigDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C36628 & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    byte_4C36628 = 1;
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
  Il2CppObject *Component_object; // x23
  int32_t layer; // w22
  UnityEngine_Shader_o *v11; // x24
  UnityEngine_Material_o *v12; // x22
  int32_t sizeKind; // w21
  __int64 v14; // x10
  Il2CppObject *Object_object__51111776; // x0
  UnityEngine_Transform_o *v16; // x21
  UnityEngine_Transform_o *v17; // x21
  UnityEngine_Transform_o *v18; // x21
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  __int64 v24; // x8

  if ( (byte_4C36619 & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_Texture2D____78059424);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UITexture___);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C32C20(&UnityEngine_Material_TypeInfo);
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&TutorialBigDialog_TypeInfo);
    sub_1C32C20(&StringLiteral_4940/*"Custom/SpriteWithMask"*/);
    sub_1C32C20(&StringLiteral_7566/*"Image"*/);
    sub_1C32C20(&StringLiteral_16267/*"_MaskTex"*/);
    byte_4C36619 = 1;
  }
  TutorialImagePrefab = (Il2CppObject *)this->fields.TutorialImagePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__Instantiate_object_(
         TutorialImagePrefab,
         (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v7 = System_Int32__ToString((int)this + 256, 0);
  gameObject = (__int64)System_String__Concat_63518544((System_String_o *)StringLiteral_7566/*"Image"*/, v7, 0);
  if ( !v6 )
    goto LABEL_29;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v6, (System_String_o *)gameObject, 0);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v6,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_29;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)gameObject, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__SetLayer((UnityEngine_GameObject_o *)v6, layer, 0);
  v11 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4940/*"Custom/SpriteWithMask"*/, 0);
  v12 = (UnityEngine_Material_o *)sub_1C32E6C(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v12, v11, 0);
  if ( !Component_object )
    goto LABEL_29;
  gameObject = ((__int64 (__fastcall *)(Il2CppObject *, UnityEngine_Material_o *, const MethodInfo *))Component_object->klass->vtable[25].methodPtr)(
                 Component_object,
                 v12,
                 Component_object->klass->vtable[25].method);
  if ( !v12 )
    goto LABEL_29;
  UnityEngine_Material__set_mainTexture(v12, (UnityEngine_Texture_o *)tex, 0);
  sizeKind = this->fields.sizeKind;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
  gameObject = (__int64)this->fields.alphaTexAssetData;
  if ( !gameObject )
    goto LABEL_29;
  v14 = 16;
  if ( sizeKind == 2 )
    v14 = 32;
  Object_object__51111776 = AssetData__GetObject_object__51111776(
                              (AssetData_o *)gameObject,
                              *(System_String_o **)((char *)&TutorialBigDialog_TypeInfo->static_fields->FADE_TIME + v14),
                              (const MethodInfo_30BE760 *)Method_AssetData_GetObject_Texture2D____78059424);
  UnityEngine_Material__SetTexture(
    v12,
    (System_String_o *)StringLiteral_16267/*"_MaskTex"*/,
    (UnityEngine_Texture_o *)Object_object__51111776,
    0);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v6, 0, 0);
  gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v6, 0);
  if ( !this->fields.ImageRoot )
    goto LABEL_29;
  v16 = (UnityEngine_Transform_o *)gameObject;
  gameObject = (__int64)UnityEngine_GameObject__get_transform(this->fields.ImageRoot, 0);
  if ( !v16 )
    goto LABEL_29;
  UnityEngine_Transform__set_parent(v16, (UnityEngine_Transform_o *)gameObject, 0);
  gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v6, 0);
  v17 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4C313D1 )
  {
    gameObject = sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
  }
  if ( !v17 )
    goto LABEL_29;
  UnityEngine_Transform__set_localPosition(v17, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v6, 0);
  v18 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4C313D6 )
  {
    gameObject = sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D6 = 1;
  }
  if ( !v18
    || (UnityEngine_Transform__set_localScale(v18, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0),
        (gameObject = (__int64)this->fields.ImagePageList) == 0)
    || (v21 = *(_QWORD *)(gameObject + 16),
        v22 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++*(_DWORD *)(gameObject + 28),
        !v21) )
  {
LABEL_29:
    sub_1C32E7C(gameObject);
  }
  v23 = *(int *)(gameObject + 24);
  if ( (unsigned int)v23 >= *(_DWORD *)(v21 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)gameObject,
      v6,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = v21 + 8 * v23;
    *(_DWORD *)(gameObject + 24) = v23 + 1;
    *(_QWORD *)(v24 + 32) = v6;
    sub_1C32BC4((CGThumbnailListItem_o *)(v24 + 32), (int32_t)v6, v19, v20);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int v13; // w8
  __int64 v14; // x24
  unsigned int v15; // w27
  int32_t v16; // w21
  UnityEngine_Texture_o *v17; // x25
  UnityEngine_Texture_o *v18; // x19
  __int64 v19; // x20
  System_String_o **v20; // x20
  __int64 v21; // t1
  char v22; // w26
  const MethodInfo *v23; // x2
  UnityEngine_Texture_o *v24; // x23
  Il2CppObject *TutorialImageLongPrefab; // x22
  Il2CppObject *v26; // x0
  __int64 *v27; // x22
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  UnityEngine_Object_o *klass; // x24
  System_String_o *v31; // x0
  Il2CppObject *Component_object; // x0
  void **p_monitor; // x24
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  UnityEngine_GameObject_o *v36; // x26
  int32_t layer; // w27
  UnityEngine_Shader_o *v38; // x27
  UnityEngine_Material_o *v39; // x26
  UIWidget_o *v40; // x25
  UITexture_o *v41; // x25
  int v42; // w26
  int v43; // w27
  int32_t baseWidth; // w20
  int v45; // w28
  UnityEngine_Transform_o *v46; // x21
  UnityEngine_Transform_o *v47; // x21
  UnityEngine_Transform_o *v48; // x21
  __int64 v49; // x21
  const MethodInfo *v50; // x2
  TutorialBigDialog_c *v51; // x0
  System_String_o *TuorialImagePath; // x19
  Il2CppObject *object; // [xsp+8h] [xbp-78h]
  TutorialBigDialog_o *v54; // [xsp+18h] [xbp-68h]
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v57; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3661A & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_Texture2D____78059424);
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_TutorialImageLong___);
    sub_1C32C20(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C32C20(&UnityEngine_Material_TypeInfo);
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&TutorialBigDialog_TypeInfo);
    sub_1C32C20(&Method_TutorialBigDialog___c__DisplayClass56_0__AddScrollImg_b__0__);
    sub_1C32C20(&TutorialBigDialog___c__DisplayClass56_0_TypeInfo);
    sub_1C32C20(&StringLiteral_16739/*"alpha"*/);
    sub_1C32C20(&StringLiteral_4940/*"Custom/SpriteWithMask"*/);
    sub_1C32C20(&StringLiteral_7566/*"Image"*/);
    sub_1C32C20(&StringLiteral_16267/*"_MaskTex"*/);
    byte_4C3661A = 1;
  }
  v7 = sub_1C32E6C(TutorialBigDialog___c__DisplayClass56_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_62;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 40) = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 40), (int32_t)callback, v11, v12);
  if ( !data )
    goto LABEL_62;
  ObjectNameList = (__int64)AssetData__GetObjectNameList(data, 0);
  if ( !ObjectNameList )
    goto LABEL_62;
  v13 = *(_DWORD *)(ObjectNameList + 24);
  v14 = ObjectNameList;
  object = (Il2CppObject *)v7;
  v54 = this;
  if ( v13 < 1 )
  {
    v18 = 0;
    v24 = 0;
    v16 = 0;
  }
  else
  {
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    do
    {
      if ( v15 >= v13 )
        goto LABEL_61;
      v19 = v14 + 8LL * (int)v15;
      v21 = *(_QWORD *)(v19 + 32);
      v20 = (System_String_o **)(v19 + 32);
      ObjectNameList = v21;
      if ( !v21 )
        goto LABEL_62;
      ObjectNameList = System_String__Contains(
                         (System_String_o *)ObjectNameList,
                         (System_String_o *)StringLiteral_16739/*"alpha"*/,
                         0);
      if ( v15 >= *(_DWORD *)(v14 + 24) )
LABEL_61:
        sub_1C32E84(ObjectNameList);
      v22 = ObjectNameList;
      ObjectNameList = (__int64)AssetData__GetObject_object__51111776(
                                  data,
                                  *v20,
                                  (const MethodInfo_30BE760 *)Method_AssetData_GetObject_Texture2D____78059424);
      v24 = (UnityEngine_Texture_o *)ObjectNameList;
      if ( (v22 & 1) == 0 )
      {
        if ( v15 >= *(_DWORD *)(v14 + 24) )
          goto LABEL_61;
        v18 = (UnityEngine_Texture_o *)ObjectNameList;
        ObjectNameList = TutorialBigDialog__GetScrollHeightWithName((TutorialBigDialog_o *)ObjectNameList, *v20, v23);
        v16 = ObjectNameList;
        v24 = v17;
      }
      v13 = *(_DWORD *)(v14 + 24);
      ++v15;
      v17 = v24;
    }
    while ( (int)v15 < v13 );
  }
  TutorialImageLongPrefab = (Il2CppObject *)v54->fields.TutorialImageLongPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v26 = UnityEngine_Object__Instantiate_object_(
          TutorialImageLongPrefab,
          (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  object[2].klass = (Il2CppClass *)v26;
  v27 = (__int64 *)&object[2];
  sub_1C32BC4((CGThumbnailListItem_o *)&object[2], (int32_t)v26, v28, v29);
  klass = (UnityEngine_Object_o *)object[2].klass;
  v31 = System_Int32__ToString((int)v54 + 256, 0);
  ObjectNameList = (__int64)System_String__Concat_63518544((System_String_o *)StringLiteral_7566/*"Image"*/, v31, 0);
  if ( !klass )
    goto LABEL_62;
  UnityEngine_Object__set_name(klass, (System_String_o *)ObjectNameList, 0);
  ObjectNameList = *v27;
  if ( !*v27 )
    goto LABEL_62;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)ObjectNameList,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_TutorialImageLong___);
  object[1].monitor = Component_object;
  p_monitor = &object[1].monitor;
  sub_1C32BC4((CGThumbnailListItem_o *)&object[1].monitor, (int32_t)Component_object, v34, v35);
  v36 = (UnityEngine_GameObject_o *)object[2].klass;
  ObjectNameList = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v54, 0);
  if ( !ObjectNameList )
    goto LABEL_62;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)ObjectNameList, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__SetLayer(v36, layer, 0);
  v38 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4940/*"Custom/SpriteWithMask"*/, 0);
  v39 = (UnityEngine_Material_o *)sub_1C32E6C(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v39, v38, 0);
  if ( !*p_monitor )
    goto LABEL_62;
  ObjectNameList = *((_QWORD *)*p_monitor + 5);
  if ( !ObjectNameList )
    goto LABEL_62;
  ObjectNameList = (*(__int64 (__fastcall **)(__int64, UnityEngine_Material_o *, _QWORD))(*(_QWORD *)ObjectNameList
                                                                                        + 712LL))(
                     ObjectNameList,
                     v39,
                     *(_QWORD *)(*(_QWORD *)ObjectNameList + 720LL));
  if ( !v39 )
    goto LABEL_62;
  UnityEngine_Material__set_mainTexture(v39, v18, 0);
  UnityEngine_Material__SetTexture(v39, (System_String_o *)StringLiteral_16267/*"_MaskTex"*/, v24, 0);
  if ( !*p_monitor )
    goto LABEL_62;
  ObjectNameList = *((_QWORD *)*p_monitor + 5);
  if ( !ObjectNameList )
    goto LABEL_62;
  UIWidget__set_height((UIWidget_o *)ObjectNameList, v16, 0);
  if ( !*p_monitor )
    goto LABEL_62;
  v40 = (UIWidget_o *)*((_QWORD *)*p_monitor + 5);
  ObjectNameList = (__int64)TutorialBigDialog_TypeInfo;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
  if ( !v40 )
    goto LABEL_62;
  UIWidget__set_width(v40, TutorialBigDialog_TypeInfo->static_fields->baseWidth, 0);
  if ( !*p_monitor )
    goto LABEL_62;
  if ( !v18 )
    goto LABEL_62;
  v41 = (UITexture_o *)*((_QWORD *)*p_monitor + 5);
  v42 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, const MethodInfo *))v18->klass->vtable._6_get_height.methodPtr)(
          v18,
          v18->klass->vtable._6_get_height.method);
  v43 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, const MethodInfo *))v18->klass->vtable._6_get_height.methodPtr)(
          v18,
          v18->klass->vtable._6_get_height.method);
  baseWidth = TutorialBigDialog_TypeInfo->static_fields->baseWidth;
  v45 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, const MethodInfo *))v18->klass->vtable._4_get_width.methodPtr)(
          v18,
          v18->klass->vtable._4_get_width.method);
  ObjectNameList = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, const MethodInfo *))v18->klass->vtable._6_get_height.methodPtr)(
                     v18,
                     v18->klass->vtable._6_get_height.method);
  if ( !v41 )
    goto LABEL_62;
  v57.fields.m_Height = (float)v16 / (float)(int)ObjectNameList;
  v57.fields.m_Width = (float)baseWidth / (float)v45;
  v57.fields.m_YMin = (float)(v42 - v16) / (float)v43;
  v57.fields.m_XMin = 0.0;
  UITexture__set_uvRect(v41, v57, 0);
  if ( !*p_monitor )
    goto LABEL_62;
  ObjectNameList = *((_QWORD *)*p_monitor + 6);
  if ( !ObjectNameList )
    goto LABEL_62;
  v55.fields.z = 1.0;
  v55.fields.y = (float)v16;
  v55.fields.x = (float)TutorialBigDialog_TypeInfo->static_fields->baseWidth;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)ObjectNameList, v55, 0);
  if ( !*p_monitor )
    goto LABEL_62;
  ObjectNameList = *((_QWORD *)*p_monitor + 6);
  if ( !ObjectNameList )
    goto LABEL_62;
  v56.fields.y = (float)-v16 * 0.5;
  v56.fields.x = 0.0;
  v56.fields.z = 0.0;
  UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)ObjectNameList, v56, 0);
  if ( !*p_monitor )
    goto LABEL_62;
  ObjectNameList = *((_QWORD *)*p_monitor + 7);
  if ( !ObjectNameList )
    goto LABEL_62;
  UIScrollView__ResetPosition((UIScrollView_o *)ObjectNameList, 0);
  ObjectNameList = *v27;
  if ( !*v27 )
    goto LABEL_62;
  ObjectNameList = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)ObjectNameList, 0);
  if ( !v54->fields.ImageRoot )
    goto LABEL_62;
  v46 = (UnityEngine_Transform_o *)ObjectNameList;
  ObjectNameList = (__int64)UnityEngine_GameObject__get_transform(v54->fields.ImageRoot, 0);
  if ( !v46 )
    goto LABEL_62;
  UnityEngine_Transform__set_parent(v46, (UnityEngine_Transform_o *)ObjectNameList, 0);
  ObjectNameList = *v27;
  if ( !*v27 )
    goto LABEL_62;
  ObjectNameList = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)ObjectNameList, 0);
  v47 = (UnityEngine_Transform_o *)ObjectNameList;
  if ( !byte_4C313D1 )
  {
    ObjectNameList = sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
  }
  if ( !v47 )
    goto LABEL_62;
  UnityEngine_Transform__set_localPosition(v47, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  ObjectNameList = *v27;
  if ( !*v27 )
    goto LABEL_62;
  ObjectNameList = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)ObjectNameList, 0);
  v48 = (UnityEngine_Transform_o *)ObjectNameList;
  if ( !byte_4C313D6 )
  {
    ObjectNameList = sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D6 = 1;
  }
  if ( !v48 )
    goto LABEL_62;
  UnityEngine_Transform__set_localScale(v48, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  v49 = sub_1C32E6C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    (AssetLoader_LoadEndDataHandler_o *)v49,
    object,
    Method_TutorialBigDialog___c__DisplayClass56_0__AddScrollImg_b__0__,
    0);
  if ( v54->fields.baseTexLoadRequested )
  {
    if ( v49 )
    {
      (*(void (__fastcall **)(_QWORD, struct AssetData_o *, _QWORD))(v49 + 24))(
        *(_QWORD *)(v49 + 64),
        v54->fields.baseTexAssetData,
        *(_QWORD *)(v49 + 40));
      return;
    }
LABEL_62:
    sub_1C32E7C(ObjectNameList);
  }
  v54->fields.baseTexLoadRequested = 1;
  v51 = TutorialBigDialog_TypeInfo;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v51 = TutorialBigDialog_TypeInfo;
  }
  TuorialImagePath = TutorialBigDialog__GetTuorialImagePath(v54, v51->static_fields->baseImgNo, v50);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(TuorialImagePath, (AssetLoader_LoadEndDataHandler_o *)v49, 1, 0);
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
    sub_1C32E7C(this);
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
  UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)this, v9, 0);
}


void TutorialBigDialog__Close(TutorialBigDialog_o *this, System_Action_o *callback, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4C36621 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AndroidBackKeyManager_TypeInfo);
    sub_1C32C20(&Method_TutorialBigDialog_EndClose__);
    byte_4C36621 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.isButtonEnable = 0;
  AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 0;
  v6 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_TutorialBigDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


void TutorialBigDialog__DestroyImagePageList(TutorialBigDialog_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x0
  Il2CppObject *current; // x20
  __int64 v5; // x0
  struct System_Collections_Generic_List_GameObject__o *v6; // x8
  int32_t size; // w2
  int v8; // w9
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C36627 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C36627 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  ImagePageList = this->fields.ImagePageList;
  if ( ImagePageList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v9,
      (System_Collections_Generic_List_object__o *)ImagePageList,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v9,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v9.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71223640((UnityEngine_Object_o *)current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v9,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v6 = this->fields.ImagePageList;
    if ( !v6 )
      sub_1C32E7C(v5);
    size = v6->fields._size;
    v8 = v6->fields._version + 1;
    v6->fields._size = 0;
    v6->fields._version = v8;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v6->fields._items, 0, size, 0);
    this->fields.CurrentIndex = 0;
  }
}


void TutorialBigDialog__EndClose(TutorialBigDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v7; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  TutorialBigDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v7 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C32BC4(p_closeCallbackFunc, 0, v4, v5);
    ((void (__fastcall *)(intptr_t, intptr_t))v7->fields.invoke_impl)(v7->fields.method_code, v7->fields.method);
  }
}


void TutorialBigDialog__EndOpen(TutorialBigDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  CGThumbnailListItem_o *p_endOpenCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *endOpenCallbackFunc; // t1

  this->fields.isButtonEnable = 1;
  TutorialBigDialog__refreshCurrent(this, method);
  endOpenCallbackFunc = this->fields.endOpenCallbackFunc;
  p_endOpenCallbackFunc = (CGThumbnailListItem_o *)&this->fields.endOpenCallbackFunc;
  v6 = endOpenCallbackFunc;
  if ( endOpenCallbackFunc )
  {
    p_endOpenCallbackFunc->klass = 0;
    sub_1C32BC4(p_endOpenCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(intptr_t, intptr_t))v6->fields.invoke_impl)(v6->fields.method_code, v6->fields.method);
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
    sub_1C32E7C(this);
  if ( LODWORD(this->fields.m_CancellationTokenSource) <= 3 )
    sub_1C32E84(this);
  System_Int32__TryParse((System_String_o *)this->fields.maskSprite, &result, 0);
  return result;
}


System_String_o *TutorialBigDialog__GetTuorialImageName(
        TutorialBigDialog_o *this,
        int32_t imgId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  int32_t v12; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C36616 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&StringLiteral_25067/*"{0:D4}"*/);
    sub_1C32C20(&StringLiteral_24232/*"tutorial_"*/);
    byte_4C36616 = 1;
  }
  v12 = imgId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, method, v3, v4, v5, v6, v7);
  v10 = System_String__Format((System_String_o *)StringLiteral_25067/*"{0:D4}"*/, v9, 0);
  return System_String__Concat_63518544((System_String_o *)StringLiteral_24232/*"tutorial_"*/, v10, 0);
}


System_String_o *TutorialBigDialog__GetTuorialImagePath(
        TutorialBigDialog_o *this,
        int32_t imgId,
        const MethodInfo *method)
{
  System_String_o *TuorialImageName; // x0

  if ( (byte_4C36615 & 1) == 0 )
  {
    this = (TutorialBigDialog_o *)sub_1C32C20(&StringLiteral_14612/*"Tutorial/"*/);
    byte_4C36615 = 1;
  }
  TuorialImageName = TutorialBigDialog__GetTuorialImageName(this, imgId, method);
  return System_String__Concat_63518544((System_String_o *)StringLiteral_14612/*"Tutorial/"*/, TuorialImageName, 0);
}


void TutorialBigDialog__Init(TutorialBigDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x3
  TutorialBigDialog_c *v7; // x0
  int32_t sizeKind; // w20
  __int64 v9; // x9
  System_String_o *v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  TutorialBigDialog_c *v13; // x0
  System_String_o *TuorialImagePath; // x20
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Int32_array *TutorialImageLoadList; // x23
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v19; // x24
  System_String_o *v20; // x21
  struct System_String_array *assetsImageLoadList; // x8
  struct System_String_array **p_assetsImageLoadList; // x20
  unsigned int v23; // w23
  unsigned int v24; // w9
  System_String_o *v25; // x21

  if ( (byte_4C3660B & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&TutorialBigDialog_TypeInfo);
    byte_4C3660B = 1;
  }
  this->fields.isButtonEnable = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
LABEL_33:
    sub_1C32E7C(gameObject);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.IsFading = 0;
  TutorialBigDialog__DestroyImagePageList(this, v4);
  if ( this->fields.alphaTexLoadRequested )
  {
    v7 = TutorialBigDialog_TypeInfo;
    sizeKind = this->fields.sizeKind;
    if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
      v7 = TutorialBigDialog_TypeInfo;
    }
    v9 = 8;
    if ( sizeKind == 2 )
      v9 = 24;
    v10 = *(System_String_o **)((char *)&v7->static_fields->FADE_TIME + v9);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v10, 0);
    this->fields.alphaTexAssetData = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.alphaTexAssetData, 0, v11, v12);
    this->fields.alphaTexLoadRequested = 0;
  }
  if ( this->fields.baseTexLoadRequested )
  {
    v13 = TutorialBigDialog_TypeInfo;
    if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
      v13 = TutorialBigDialog_TypeInfo;
    }
    TuorialImagePath = TutorialBigDialog__GetTuorialImagePath(this, v13->static_fields->baseImgNo, v5);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(TuorialImagePath, 0);
    this->fields.baseTexAssetData = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.baseTexAssetData, 0, v15, v16);
    this->fields.baseTexLoadRequested = 0;
  }
  TutorialImageLoadList = this->fields.TutorialImageLoadList;
  if ( TutorialImageLoadList )
  {
    max_length = TutorialImageLoadList->max_length;
    if ( (int)max_length >= 1 )
    {
      v19 = 0;
      do
      {
        if ( v19 >= (unsigned int)max_length )
LABEL_36:
          sub_1C32E84(gameObject);
        v20 = TutorialBigDialog__GetTuorialImagePath(this, TutorialImageLoadList->m_Items[v19], v5);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetManager__releaseAssetStorage(v20, 0);
        LODWORD(max_length) = TutorialImageLoadList->max_length;
        ++v19;
      }
      while ( (__int64)v19 < (int)max_length );
    }
    this->fields.TutorialImageLoadList = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.TutorialImageLoadList, 0, (int32_t)v5, v6);
  }
  p_assetsImageLoadList = &this->fields.assetsImageLoadList;
  assetsImageLoadList = this->fields.assetsImageLoadList;
  if ( assetsImageLoadList )
  {
    v23 = 0;
    while ( 1 )
    {
      v24 = assetsImageLoadList->max_length;
      if ( (int)v23 >= (int)v24 )
        break;
      if ( v23 >= v24 )
        goto LABEL_36;
      v25 = assetsImageLoadList->m_Items[v23];
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage(v25, 0);
      assetsImageLoadList = *p_assetsImageLoadList;
      v23 += 2;
      if ( !*p_assetsImageLoadList )
        goto LABEL_33;
    }
    *p_assetsImageLoadList = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.assetsImageLoadList, 0, (int32_t)v5, v6);
  }
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void TutorialBigDialog__LoadAlpha(TutorialBigDialog_o *this, System_Action_o *callback, const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  TutorialBigDialog_c *v11; // x0
  int32_t sizeKind; // w19
  __int64 v13; // x9
  System_String_o *v14; // x19
  AssetLoader_LoadEndDataHandler_o *v15; // x21

  if ( (byte_4C3661C & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C32C20(&TutorialBigDialog_TypeInfo);
    sub_1C32C20(&Method_TutorialBigDialog___c__DisplayClass59_0__LoadAlpha_b__0__);
    sub_1C32C20(&TutorialBigDialog___c__DisplayClass59_0_TypeInfo);
    byte_4C3661C = 1;
  }
  v5 = sub_1C32E6C(TutorialBigDialog___c__DisplayClass59_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v9, v10);
  this->fields.alphaTexLoadRequested = 1;
  v11 = TutorialBigDialog_TypeInfo;
  sizeKind = this->fields.sizeKind;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v11 = TutorialBigDialog_TypeInfo;
  }
  v13 = 8;
  if ( sizeKind == 2 )
    v13 = 24;
  v14 = *(System_String_o **)((char *)&v11->static_fields->FADE_TIME + v13);
  v15 = (AssetLoader_LoadEndDataHandler_o *)sub_1C32E6C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v15,
    (Il2CppObject *)v5,
    Method_TutorialBigDialog___c__DisplayClass59_0__LoadAlpha_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v14, v15, 1, 0);
}


void TutorialBigDialog__LoadImages(TutorialBigDialog_o *this, System_Int32_array *images, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  Il2CppObject *Instance; // x0
  System_Action_o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_4C36613 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_TutorialBigDialog_LoadStart__);
    byte_4C36613 = 1;
  }
  this->fields._loadIndex = 0;
  this->fields.loadByAsset = 0;
  v4 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.ImagePageList = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.ImagePageList, (int32_t)v4, v5, v6);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
  v8 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_TutorialBigDialog_LoadStart__, 0);
  TutorialBigDialog__LoadAlpha(this, v8, v9);
}


void TutorialBigDialog__LoadImages_40040384(
        TutorialBigDialog_o *this,
        System_String_array *images,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  Il2CppObject *Instance; // x0
  System_Action_o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_4C36614 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_TutorialBigDialog_LoadStartAssets__);
    byte_4C36614 = 1;
  }
  this->fields._loadIndex = 0;
  this->fields.loadByAsset = 1;
  v4 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.ImagePageList = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.ImagePageList, (int32_t)v4, v5, v6);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
  v8 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_TutorialBigDialog_LoadStartAssets__, 0);
  TutorialBigDialog__LoadAlpha(this, v8, v9);
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
  if ( (byte_4C36617 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&AssetLoader_LoadEndDataHandler_TypeInfo);
    this = (TutorialBigDialog_o *)sub_1C32C20(&Method_TutorialBigDialog__LoadStart_b__53_0__);
    byte_4C36617 = 1;
  }
  TutorialImageLoadList = v3->fields.TutorialImageLoadList;
  if ( !TutorialImageLoadList )
    sub_1C32E7C(this);
  loadIndex = v3->fields._loadIndex;
  if ( (unsigned int)loadIndex >= LODWORD(TutorialImageLoadList->max_length) )
    sub_1C32E84(this);
  TuorialImagePath = TutorialBigDialog__GetTuorialImagePath(v3, TutorialImageLoadList->m_Items[loadIndex], v2);
  v7 = (AssetLoader_LoadEndDataHandler_o *)sub_1C32E6C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v7, (Il2CppObject *)v3, Method_TutorialBigDialog__LoadStart_b__53_0__, 0);
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
  if ( (byte_4C36618 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&AssetLoader_LoadEndDataHandler_TypeInfo);
    this = (TutorialBigDialog_o *)sub_1C32C20(&Method_TutorialBigDialog__LoadStartAssets_b__54_0__);
    byte_4C36618 = 1;
  }
  assetsImageLoadList = v2->fields.assetsImageLoadList;
  if ( !assetsImageLoadList )
    sub_1C32E7C(this);
  loadIndex = v2->fields._loadIndex;
  if ( (unsigned int)loadIndex >= LODWORD(assetsImageLoadList->max_length) )
    sub_1C32E84(this);
  v5 = assetsImageLoadList->m_Items[loadIndex];
  v6 = (AssetLoader_LoadEndDataHandler_o *)sub_1C32E6C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v6, (Il2CppObject *)v2, Method_TutorialBigDialog__LoadStartAssets_b__54_0__, 0);
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
  if ( (byte_4C36624 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    this = (TutorialBigDialog_o *)sub_1C32C20(&Method_TutorialBigDialog_OnBottomButton__);
    byte_4C36624 = 1;
  }
  if ( !v2->fields.IsFading )
  {
    ImagePageList = v2->fields.ImagePageList;
    if ( !ImagePageList )
      sub_1C32E7C(this);
    if ( v2->fields.CurrentIndex == ImagePageList->fields._size - 1 )
    {
      v4 = Method_TutorialBigDialog_OnBottomButton__;
      if ( (*((_BYTE *)Method_TutorialBigDialog_OnBottomButton__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1C32C38(Method_TutorialBigDialog_OnBottomButton__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C32C04(v4, v4[4]);
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
  int32_t localFlagId; // w20
  int configFlagId; // w20
  NetworkManager_ResultCallbackFunc_o *v8; // x20
  Il2CppObject *Request_object; // x0
  NetworkManager_ResultCallbackFunc_o *v10; // x20

  if ( (byte_4C36625 & 1) == 0 )
  {
    sub_1C32C20(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_1C32C20(&Method_NetworkManager_getRequest_TutorialSetRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C32C20(&Method_TutorialBigDialog_EndTurorialRequest__);
    sub_1C32C20(&Method_TutorialBigDialog_OnClickClose__);
    sub_1C32C20(&TutorialFlag_TypeInfo);
    byte_4C36625 = 1;
  }
  if ( !this->fields.IsFading && this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v3 = Method_TutorialBigDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_TutorialBigDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_TutorialBigDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    localFlagId = this->fields.localFlagId;
    if ( localFlagId != -1 )
    {
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      TutorialFlag__Set_40364756(localFlagId, 0);
    }
    configFlagId = this->fields.configFlagId;
    if ( configFlagId >= 1 )
    {
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      TutorialFlag__SetConfigFlg(configFlagId, 0);
    }
    if ( this->fields.flagId != -1 )
    {
      v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_TutorialBigDialog_EndTurorialRequest__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v8,
                         (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
      if ( Request_object )
      {
        TutorialSetRequest__beginRequest((TutorialSetRequest_o *)Request_object, this->fields.flagId, 0);
        return;
      }
LABEL_28:
      sub_1C32E7C(Request_object);
    }
    if ( this->fields.eventFlagId == -1 || !this->fields.eventId )
    {
      TutorialBigDialog__Close(this, this->fields.closeCallbackFunc, v5);
    }
    else
    {
      v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_TutorialBigDialog_EndTurorialRequest__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v10,
                         (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
      if ( !Request_object )
        goto LABEL_28;
      TutorialEventSetRequest__beginRequest(
        (TutorialEventSetRequest_o *)Request_object,
        this->fields.eventFlagId,
        this->fields.eventId,
        0);
    }
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
  if ( (byte_4C36622 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    this = (TutorialBigDialog_o *)sub_1C32C20(&Method_TutorialBigDialog_OnNextButton__);
    byte_4C36622 = 1;
  }
  if ( !v2->fields.IsFading )
  {
    ImagePageList = v2->fields.ImagePageList;
    if ( !ImagePageList )
      sub_1C32E7C(this);
    if ( v2->fields.CurrentIndex != ImagePageList->fields._size - 1 )
    {
      v4 = Method_TutorialBigDialog_OnNextButton__;
      if ( (*((_BYTE *)Method_TutorialBigDialog_OnNextButton__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1C32C38(Method_TutorialBigDialog_OnNextButton__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C32C04(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
      TutorialBigDialog__UpdatePage(v2, v2->fields.CurrentIndex + 1, v6);
    }
  }
}


void TutorialBigDialog__OnPageChange(TutorialBigDialog_o *this, int32_t idx, const MethodInfo *method)
{
  TutorialBigDialog_o *v4; // x20
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x8
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0

  v4 = this;
  if ( (byte_4C36626 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    this = (TutorialBigDialog_o *)sub_1C32C20(&Method_TutorialBigDialog_OnPageChange__);
    byte_4C36626 = 1;
  }
  if ( (idx & 0x80000000) == 0 && v4->fields.CurrentIndex != idx )
  {
    ImagePageList = v4->fields.ImagePageList;
    if ( !ImagePageList )
      sub_1C32E7C(this);
    if ( ImagePageList->fields._size > idx )
    {
      v6 = Method_TutorialBigDialog_OnPageChange__;
      if ( (*((_BYTE *)Method_TutorialBigDialog_OnPageChange__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1C32C38(Method_TutorialBigDialog_OnPageChange__);
      v7 = (System_Reflection_MethodBase_o *)sub_1C32C04(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
    }
  }
}


void TutorialBigDialog__OnPrevButton(TutorialBigDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C36623 & 1) == 0 )
  {
    sub_1C32C20(&Method_TutorialBigDialog_OnPrevButton__);
    byte_4C36623 = 1;
  }
  if ( !this->fields.IsFading && this->fields.CurrentIndex >= 1 )
  {
    v3 = Method_TutorialBigDialog_OnPrevButton__;
    if ( (*((_BYTE *)Method_TutorialBigDialog_OnPrevButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_TutorialBigDialog_OnPrevButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
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
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  UnityEngine_GameObject_o *CloseButton; // x0
  TutorialBigDialog_c *v20; // x8
  UnityEngine_Transform_o *v21; // x21
  struct System_Int32_array *v22; // x0
  struct System_Int32_array **p_TutorialImageLoadList; // x21
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct System_Int32_array *v26; // x9
  unsigned __int64 max_length; // x10
  unsigned __int64 v28; // x8
  __int64 m_Items; // x13
  System_Int32_array *v30; // x1
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x2

  if ( (byte_4C3660C & 1) == 0 )
  {
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&TutorialBigDialog_TypeInfo);
    byte_4C3660C = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&flagId);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.endOpenCallbackFunc, (int32_t)endOpenFunc, v13, v14);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.endTurorialRequestFunc, (int32_t)endTurorialRequestFunc, v15, v16);
  this->fields.closeCallbackFunc = closeFunc;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)closeFunc, v17, v18);
  CloseButton = this->fields.CloseButton;
  this->fields.flagId = flagId;
  *(_OWORD *)&this->fields.localFlagId = xmmword_C0CDB0;
  this->fields.sizeKind = 1;
  if ( !CloseButton )
    goto LABEL_19;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0);
  v20 = TutorialBigDialog_TypeInfo;
  v21 = (UnityEngine_Transform_o *)CloseButton;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v20 = TutorialBigDialog_TypeInfo;
  }
  if ( !v21 )
    goto LABEL_19;
  UnityEngine_Transform__set_localPosition(v21, v20->static_fields->baseCloseButtonPosition, 0);
  if ( !images )
    goto LABEL_19;
  v22 = (struct System_Int32_array *)sub_1C32CC8(int___TypeInfo, LODWORD(images->max_length));
  this->fields.TutorialImageLoadList = v22;
  p_TutorialImageLoadList = &this->fields.TutorialImageLoadList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.TutorialImageLoadList, (int32_t)v22, v24, v25);
  if ( (int)images->max_length >= 1 )
  {
    v26 = *p_TutorialImageLoadList;
    max_length = (unsigned int)images->max_length;
    v28 = 0;
    m_Items = (__int64)(*p_TutorialImageLoadList)->m_Items;
    do
    {
      if ( v28 >= max_length )
        goto LABEL_18;
      if ( !v26 )
        goto LABEL_19;
      if ( v28 >= LODWORD(v26->max_length) )
LABEL_18:
        sub_1C32E84(CloseButton);
      *(_DWORD *)(m_Items + 4 * v28) = images->m_Items[v28];
      ++v28;
    }
    while ( (__int64)v28 < (int)max_length );
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMask((BaseDialog_o *)this, 0, 0);
  TutorialBigDialog__LoadImages(this, v30, v31);
  CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !CloseButton )
LABEL_19:
    sub_1C32E7C(CloseButton);
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0);
  TutorialBigDialog__UpdateButtons(this, 1, v32);
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
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UnityEngine_GameObject_o *CloseButton; // x0
  TutorialBigDialog_c *v17; // x8
  UnityEngine_Transform_o *v18; // x21
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppObject *Component_object; // x21
  EventDelegate_Callback_o *v22; // x22
  EventDelegate_o *v23; // x20
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v27; // x9
  __int64 klass_low; // x10
  intptr_t v29; // x8
  System_Int32_array *v30; // x1
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x2

  if ( (byte_4C36611 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&EventDelegate_Callback_TypeInfo);
    sub_1C32C20(&EventDelegate_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C32C20(&Method_TutorialBigDialog__OpenAssets_b__46_0__);
    sub_1C32C20(&Method_TutorialBigDialog__OpenAssets_b__46_1__);
    sub_1C32C20(&TutorialBigDialog_TypeInfo);
    byte_4C36611 = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&kind);
  v9 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_TutorialBigDialog__OpenAssets_b__46_0__, 0);
  this->fields.endOpenCallbackFunc = v9;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.endOpenCallbackFunc, (int32_t)v9, v10, v11);
  this->fields.endTurorialRequestFunc = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.endTurorialRequestFunc, 0, v12, v13);
  this->fields.closeCallbackFunc = closeFunc;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)closeFunc, v14, v15);
  CloseButton = this->fields.CloseButton;
  this->fields.configFlagId = 0;
  this->fields.sizeKind = kind;
  *(_OWORD *)&this->fields.flagId = xmmword_C0D060;
  if ( !CloseButton )
    goto LABEL_18;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0);
  v17 = TutorialBigDialog_TypeInfo;
  v18 = (UnityEngine_Transform_o *)CloseButton;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v17 = TutorialBigDialog_TypeInfo;
  }
  if ( !v18 )
    goto LABEL_18;
  UnityEngine_Transform__set_localPosition(v18, v17->static_fields->miniCloseButtonPosition, 0);
  this->fields.TutorialImageLoadList = images;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.TutorialImageLoadList, (int32_t)images, v19, v20);
  CloseButton = this->fields.TouchMask;
  this->fields.isButtonEnable = 0;
  if ( !CloseButton )
    goto LABEL_18;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       CloseButton,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
  v22 = (EventDelegate_Callback_o *)sub_1C32E6C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v22, (Il2CppObject *)this, Method_TutorialBigDialog__OpenAssets_b__46_1__, 0);
  v23 = (EventDelegate_o *)sub_1C32E6C(EventDelegate_TypeInfo);
  EventDelegate___ctor_49230836(v23, v22, 0);
  if ( !Component_object )
    goto LABEL_18;
  CloseButton = (UnityEngine_GameObject_o *)Component_object[2].klass;
  if ( !CloseButton )
    goto LABEL_18;
  m_CachedPtr = CloseButton->fields.m_CachedPtr;
  v27 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++HIDWORD(CloseButton[1].klass);
  if ( !m_CachedPtr )
    goto LABEL_18;
  klass_low = SLODWORD(CloseButton[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)CloseButton,
      (Il2CppObject *)v23,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = m_CachedPtr + 8 * klass_low;
    LODWORD(CloseButton[1].klass) = klass_low + 1;
    *(_QWORD *)(v29 + 32) = v23;
    sub_1C32BC4((CGThumbnailListItem_o *)(v29 + 32), (int32_t)v23, v24, v25);
  }
  BaseDialog__SetMask((BaseDialog_o *)this, 0, 0);
  TutorialBigDialog__LoadImages(this, v30, v31);
  CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !CloseButton )
LABEL_18:
    sub_1C32E7C(CloseButton);
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0);
  TutorialBigDialog__UpdateButtons(this, 1, v32);
}


// local variable allocation has failed, the output may be wrong!
void TutorialBigDialog__OpenByConfigId(
        TutorialBigDialog_o *this,
        System_String_array *images,
        int32_t configId,
        System_Action_o *closeFunc,
        System_Action_o *endOpenFunc,
        System_Action_o *endTurorialRequestFunc,
        const MethodInfo *method)
{
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  UnityEngine_GameObject_o *CloseButton; // x0
  TutorialBigDialog_c *v20; // x8
  UnityEngine_Transform_o *v21; // x21
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_String_array *v24; // x1
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x2

  if ( (byte_4C36612 & 1) == 0 )
  {
    sub_1C32C20(&TutorialBigDialog_TypeInfo);
    byte_4C36612 = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&configId);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.endOpenCallbackFunc, (int32_t)endOpenFunc, v13, v14);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.endTurorialRequestFunc, (int32_t)endTurorialRequestFunc, v15, v16);
  this->fields.closeCallbackFunc = closeFunc;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)closeFunc, v17, v18);
  CloseButton = this->fields.CloseButton;
  this->fields.configFlagId = configId;
  *(_OWORD *)&this->fields.flagId = xmmword_C0D060;
  this->fields.sizeKind = 1;
  if ( !CloseButton )
    goto LABEL_11;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0);
  v20 = TutorialBigDialog_TypeInfo;
  v21 = (UnityEngine_Transform_o *)CloseButton;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v20 = TutorialBigDialog_TypeInfo;
  }
  if ( !v21
    || (UnityEngine_Transform__set_localPosition(v21, v20->static_fields->baseCloseButtonPosition, 0),
        this->fields.assetsImageLoadList = images,
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.assetsImageLoadList, (int32_t)images, v22, v23),
        this->fields.isButtonEnable = 0,
        BaseDialog__SetMask((BaseDialog_o *)this, 0, 0),
        TutorialBigDialog__LoadImages_40040384(this, v24, v25),
        (CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_11:
    sub_1C32E7C(CloseButton);
  }
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0);
  TutorialBigDialog__UpdateButtons(this, 1, v26);
}


void TutorialBigDialog__OpenWindow(TutorialBigDialog_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  System_Action_o *v4; // x20

  if ( (byte_4C3661D & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_TutorialBigDialog_EndOpen__);
    byte_4C3661D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
  v4 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_TutorialBigDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v4, 1, 0, 0);
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
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UnityEngine_GameObject_o *CloseButton; // x0
  TutorialBigDialog_c *v18; // x8
  UnityEngine_Transform_o *v19; // x21
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_String_array *v22; // x1
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x2

  if ( (byte_4C36610 & 1) == 0 )
  {
    sub_1C32C20(&TutorialBigDialog_TypeInfo);
    byte_4C36610 = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, (const MethodInfo *)closeFunc);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.endOpenCallbackFunc, (int32_t)endOpenFunc, v11, v12);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.endTurorialRequestFunc, (int32_t)endTurorialRequestFunc, v13, v14);
  this->fields.closeCallbackFunc = closeFunc;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)closeFunc, v15, v16);
  CloseButton = this->fields.CloseButton;
  this->fields.configFlagId = 0;
  *(_OWORD *)&this->fields.flagId = xmmword_C0D060;
  this->fields.sizeKind = 1;
  if ( !CloseButton )
    goto LABEL_11;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0);
  v18 = TutorialBigDialog_TypeInfo;
  v19 = (UnityEngine_Transform_o *)CloseButton;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v18 = TutorialBigDialog_TypeInfo;
  }
  if ( !v19
    || (UnityEngine_Transform__set_localPosition(v19, v18->static_fields->baseCloseButtonPosition, 0),
        this->fields.assetsImageLoadList = images,
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.assetsImageLoadList, (int32_t)images, v20, v21),
        this->fields.isButtonEnable = 0,
        BaseDialog__SetMask((BaseDialog_o *)this, 0, 0),
        TutorialBigDialog__LoadImages_40040384(this, v22, v23),
        (CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_11:
    sub_1C32E7C(CloseButton);
  }
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0);
  TutorialBigDialog__UpdateButtons(this, 1, v24);
}


// local variable allocation has failed, the output may be wrong!
void TutorialBigDialog__Open_40038628(
        TutorialBigDialog_o *this,
        TutorialFlag_ImageId_array *images,
        int32_t flagId,
        System_Action_o *closeFunc,
        System_Action_o *endOpenFunc,
        System_Action_o *endTurorialRequestFunc,
        const MethodInfo *method)
{
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  UnityEngine_GameObject_o *CloseButton; // x0
  TutorialBigDialog_c *v20; // x8
  UnityEngine_Transform_o *v21; // x21
  struct System_Int32_array *v22; // x0
  struct System_Int32_array **p_TutorialImageLoadList; // x21
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct System_Int32_array *v26; // x9
  unsigned __int64 max_length; // x10
  unsigned __int64 v28; // x8
  __int64 m_Items; // x13
  System_Int32_array *v30; // x1
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x2

  if ( (byte_4C3660D & 1) == 0 )
  {
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&TutorialBigDialog_TypeInfo);
    byte_4C3660D = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&flagId);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.endOpenCallbackFunc, (int32_t)endOpenFunc, v13, v14);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.endTurorialRequestFunc, (int32_t)endTurorialRequestFunc, v15, v16);
  this->fields.closeCallbackFunc = closeFunc;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)closeFunc, v17, v18);
  CloseButton = this->fields.CloseButton;
  this->fields.flagId = -1;
  this->fields.localFlagId = flagId;
  *(_QWORD *)&this->fields.eventFlagId = 0xFFFFFFFFLL;
  this->fields.configFlagId = 0;
  this->fields.sizeKind = 1;
  if ( !CloseButton )
    goto LABEL_19;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0);
  v20 = TutorialBigDialog_TypeInfo;
  v21 = (UnityEngine_Transform_o *)CloseButton;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v20 = TutorialBigDialog_TypeInfo;
  }
  if ( !v21 )
    goto LABEL_19;
  UnityEngine_Transform__set_localPosition(v21, v20->static_fields->baseCloseButtonPosition, 0);
  if ( !images )
    goto LABEL_19;
  v22 = (struct System_Int32_array *)sub_1C32CC8(int___TypeInfo, LODWORD(images->max_length));
  this->fields.TutorialImageLoadList = v22;
  p_TutorialImageLoadList = &this->fields.TutorialImageLoadList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.TutorialImageLoadList, (int32_t)v22, v24, v25);
  if ( (int)images->max_length >= 1 )
  {
    v26 = *p_TutorialImageLoadList;
    max_length = (unsigned int)images->max_length;
    v28 = 0;
    m_Items = (__int64)(*p_TutorialImageLoadList)->m_Items;
    do
    {
      if ( v28 >= max_length )
        goto LABEL_18;
      if ( !v26 )
        goto LABEL_19;
      if ( v28 >= LODWORD(v26->max_length) )
LABEL_18:
        sub_1C32E84(CloseButton);
      *(_DWORD *)(m_Items + 4 * v28) = images->m_Items[v28];
      ++v28;
    }
    while ( (__int64)v28 < (int)max_length );
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMask((BaseDialog_o *)this, 0, 0);
  TutorialBigDialog__LoadImages(this, v30, v31);
  CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !CloseButton )
LABEL_19:
    sub_1C32E7C(CloseButton);
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0);
  TutorialBigDialog__UpdateButtons(this, 1, v32);
}


void TutorialBigDialog__Open_40039124(
        TutorialBigDialog_o *this,
        System_Int32_array *images,
        int32_t flagId,
        int32_t eventId,
        System_Action_o *closeFunc,
        System_Action_o *endOpenFunc,
        System_Action_o *endTurorialRequestFunc,
        const MethodInfo *method)
{
  const MethodInfo *v15; // x2
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  UnityEngine_GameObject_o *CloseButton; // x0
  TutorialBigDialog_c *v23; // x8
  UnityEngine_Transform_o *v24; // x21
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Int32_array *v27; // x1
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x2

  if ( (byte_4C3660E & 1) == 0 )
  {
    sub_1C32C20(&TutorialBigDialog_TypeInfo);
    byte_4C3660E = 1;
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
  TutorialBigDialog__SetTouchMask(this, 0, v15);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.endOpenCallbackFunc, (int32_t)endOpenFunc, v16, v17);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.endTurorialRequestFunc, (int32_t)endTurorialRequestFunc, v18, v19);
  this->fields.closeCallbackFunc = closeFunc;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)closeFunc, v20, v21);
  CloseButton = this->fields.CloseButton;
  *(_QWORD *)&this->fields.flagId = -1;
  this->fields.eventFlagId = flagId;
  this->fields.eventId = eventId;
  this->fields.configFlagId = 0;
  this->fields.sizeKind = 1;
  if ( !CloseButton )
    goto LABEL_12;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0);
  v23 = TutorialBigDialog_TypeInfo;
  v24 = (UnityEngine_Transform_o *)CloseButton;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v23 = TutorialBigDialog_TypeInfo;
  }
  if ( !v24
    || (UnityEngine_Transform__set_localPosition(v24, v23->static_fields->baseCloseButtonPosition, 0),
        this->fields.TutorialImageLoadList = images,
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.TutorialImageLoadList, (int32_t)images, v25, v26),
        this->fields.isButtonEnable = 0,
        BaseDialog__SetMask((BaseDialog_o *)this, 0, 0),
        TutorialBigDialog__LoadImages(this, v27, v28),
        (CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_12:
    sub_1C32E7C(CloseButton);
  }
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0);
  TutorialBigDialog__UpdateButtons(this, 1, v29);
}


// local variable allocation has failed, the output may be wrong!
void TutorialBigDialog__Open_40039516(
        TutorialBigDialog_o *this,
        TutorialFlag_ImageId_array *images,
        int32_t flagId,
        int32_t eventId,
        System_Action_o *closeFunc,
        System_Action_o *endOpenFunc,
        System_Action_o *endTurorialRequestFunc,
        const MethodInfo *method)
{
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  UnityEngine_GameObject_o *CloseButton; // x0
  TutorialBigDialog_c *v22; // x8
  UnityEngine_Transform_o *v23; // x21
  struct System_Int32_array *v24; // x0
  struct System_Int32_array **p_TutorialImageLoadList; // x21
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Int32_array *v28; // x9
  unsigned __int64 max_length; // x10
  unsigned __int64 v30; // x8
  __int64 m_Items; // x13
  System_Int32_array *v32; // x1
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x2

  if ( (byte_4C3660F & 1) == 0 )
  {
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&TutorialBigDialog_TypeInfo);
    byte_4C3660F = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&flagId);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.endOpenCallbackFunc, (int32_t)endOpenFunc, v15, v16);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.endTurorialRequestFunc, (int32_t)endTurorialRequestFunc, v17, v18);
  this->fields.closeCallbackFunc = closeFunc;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)closeFunc, v19, v20);
  CloseButton = this->fields.CloseButton;
  *(_QWORD *)&this->fields.flagId = -1;
  this->fields.eventFlagId = flagId;
  this->fields.eventId = eventId;
  this->fields.configFlagId = 0;
  this->fields.sizeKind = 1;
  if ( !CloseButton )
    goto LABEL_19;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0);
  v22 = TutorialBigDialog_TypeInfo;
  v23 = (UnityEngine_Transform_o *)CloseButton;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v22 = TutorialBigDialog_TypeInfo;
  }
  if ( !v23 )
    goto LABEL_19;
  UnityEngine_Transform__set_localPosition(v23, v22->static_fields->baseCloseButtonPosition, 0);
  if ( !images )
    goto LABEL_19;
  v24 = (struct System_Int32_array *)sub_1C32CC8(int___TypeInfo, LODWORD(images->max_length));
  this->fields.TutorialImageLoadList = v24;
  p_TutorialImageLoadList = &this->fields.TutorialImageLoadList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.TutorialImageLoadList, (int32_t)v24, v26, v27);
  if ( (int)images->max_length >= 1 )
  {
    v28 = *p_TutorialImageLoadList;
    max_length = (unsigned int)images->max_length;
    v30 = 0;
    m_Items = (__int64)(*p_TutorialImageLoadList)->m_Items;
    do
    {
      if ( v30 >= max_length )
        goto LABEL_18;
      if ( !v28 )
        goto LABEL_19;
      if ( v30 >= LODWORD(v28->max_length) )
LABEL_18:
        sub_1C32E84(CloseButton);
      *(_DWORD *)(m_Items + 4 * v30) = images->m_Items[v30];
      ++v30;
    }
    while ( (__int64)v30 < (int)max_length );
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMask((BaseDialog_o *)this, 0, 0);
  TutorialBigDialog__LoadImages(this, v32, v33);
  CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !CloseButton )
LABEL_19:
    sub_1C32E7C(CloseButton);
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0);
  TutorialBigDialog__UpdateButtons(this, 1, v34);
}


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
    sub_1C32E7C(TouchMask);
  }
  UnityEngine_GameObject__SetActive(TouchMask, isDisp, 0);
}


void TutorialBigDialog__UpdateButtons(TutorialBigDialog_o *this, bool isDisp, const MethodInfo *method)
{
  TutorialBigDialog_o *v4; // x19
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x8
  UILabel_o *basePanel; // x20
  UILabel_o *v7; // x19

  v4 = this;
  if ( (byte_4C3661F & 1) == 0 )
  {
    sub_1C32C20(&AndroidBackKeyManager_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____78081936);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_13539/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/);
    this = (TutorialBigDialog_o *)sub_1C32C20(&StringLiteral_13540/*"TUTORIAL_IMAGE_DIALOG_PREV"*/);
    byte_4C3661F = 1;
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
                                    (const MethodInfo_30D48E4 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____78081936);
    if ( !this )
      goto LABEL_34;
    if ( !LODWORD(this->fields.m_CancellationTokenSource) )
LABEL_35:
      sub_1C32E84(this);
    basePanel = (UILabel_o *)this->fields.basePanel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (TutorialBigDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13539/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, 0);
    if ( !basePanel )
LABEL_34:
      sub_1C32E7C(this);
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
                                  (const MethodInfo_30D48E4 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____78081936);
  if ( !this )
    goto LABEL_34;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_35;
  v7 = (UILabel_o *)this->fields.basePanel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (TutorialBigDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13540/*"TUTORIAL_IMAGE_DIALOG_PREV"*/, 0);
  if ( !v7 )
    goto LABEL_34;
  UILabel__set_text(v7, (System_String_o *)this, 0);
LABEL_33:
  AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 1;
}


void TutorialBigDialog__UpdatePage(TutorialBigDialog_o *this, int32_t dispIndex, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  long double v4; // q8
  int32_t CurrentIndex; // w26
  struct UITexture_o **p_FadeInTarget; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  System_Collections_Generic_List_object__o *ImagePageList; // x0
  int size; // w8
  int v14; // w27
  int32_t v15; // w23
  UnityEngine_GameObject_o *v16; // x24
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  long double v19; // q0
  System_Collections_Generic_List_object__o *v20; // x25
  System_Collections_Generic_List_object__c *klass; // x8
  bool v22; // w1
  UnityEngine_GameObject_o *gameObject; // x21
  TutorialBigDialog_c *v24; // x8
  UnityEngine_GameObject_o *v25; // x0
  UITweener_o *v26; // x20
  EventDelegate_Callback_o *v27; // x21

  if ( (byte_4C3661E & 1) == 0 )
  {
    sub_1C32C20(&EventDelegate_Callback_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UITexture___);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C32C20(&Method_TutorialBigDialog__UpdatePage_b__61_0__);
    sub_1C32C20(&TutorialBigDialog_TypeInfo);
    byte_4C3661E = 1;
  }
  CurrentIndex = this->fields.CurrentIndex;
  this->fields.FadeInTarget = 0;
  p_FadeInTarget = &this->fields.FadeInTarget;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.FadeInTarget, 0, (int32_t)method, v3);
  this->fields.FadeOutTarget = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.FadeOutTarget, 0, v9, v10);
  ImagePageList = (System_Collections_Generic_List_object__o *)this->fields.ImagePageList;
  if ( !ImagePageList )
    goto LABEL_29;
  size = ImagePageList->fields._size;
  v14 = size - 1;
  if ( size >= 1 )
  {
    LODWORD(v4) = 1000593162;
    v15 = 0;
    while ( 1 )
    {
      ImagePageList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                     ImagePageList,
                                                                     v15,
                                                                     (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !ImagePageList )
        goto LABEL_29;
      v16 = (UnityEngine_GameObject_o *)ImagePageList;
      ImagePageList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                     (UnityEngine_GameObject_o *)ImagePageList,
                                                                     (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
      v20 = ImagePageList;
      if ( dispIndex == v15 )
      {
        if ( CurrentIndex == dispIndex )
        {
          if ( !ImagePageList )
            goto LABEL_29;
          klass = ImagePageList->klass;
          LODWORD(v19) = 1.0;
        }
        else
        {
          *p_FadeInTarget = (struct UITexture_o *)ImagePageList;
          sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.FadeInTarget, (int32_t)ImagePageList, v17, v18);
          if ( !v20 )
            goto LABEL_29;
          klass = v20->klass;
          ImagePageList = v20;
          v19 = v4;
        }
        ((void (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *, long double))klass->vtable._8_unknown.methodPtr)(
          ImagePageList,
          klass->vtable._8_unknown.method,
          v19);
      }
      else
      {
        v22 = 0;
        if ( v15 != this->fields.CurrentIndex || CurrentIndex == dispIndex )
          goto LABEL_18;
        this->fields.FadeOutTarget = (struct UITexture_o *)ImagePageList;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.FadeOutTarget, (int32_t)ImagePageList, v17, v18);
      }
      v22 = 1;
LABEL_18:
      UnityEngine_GameObject__SetActive(v16, v22, 0);
      if ( v14 == v15 )
        break;
      ImagePageList = (System_Collections_Generic_List_object__o *)this->fields.ImagePageList;
      ++v15;
      if ( !ImagePageList )
        goto LABEL_29;
    }
  }
  this->fields.CurrentIndex = dispIndex;
  if ( CurrentIndex == dispIndex )
  {
    TutorialBigDialog__UpdateButtons(this, 1, v11);
    return;
  }
  ImagePageList = (System_Collections_Generic_List_object__o *)this->fields.FadeOutTarget;
  this->fields.IsFading = 1;
  if ( !ImagePageList )
    goto LABEL_29;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ImagePageList, 0);
  v24 = TutorialBigDialog_TypeInfo;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v24 = TutorialBigDialog_TypeInfo;
  }
  TweenAlpha__Begin(gameObject, v24->static_fields->FADE_TIME, 0.0, 0);
  ImagePageList = (System_Collections_Generic_List_object__o *)*p_FadeInTarget;
  if ( !*p_FadeInTarget
    || (v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ImagePageList, 0),
        v26 = (UITweener_o *)TweenAlpha__Begin(v25, TutorialBigDialog_TypeInfo->static_fields->FADE_TIME, 1.0, 0),
        v27 = (EventDelegate_Callback_o *)sub_1C32E6C(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(v27, (Il2CppObject *)this, Method_TutorialBigDialog__UpdatePage_b__61_0__, 0),
        !v26) )
  {
LABEL_29:
    sub_1C32E7C(ImagePageList);
  }
  UITweener__SetOnFinished(v26, v27, 0);
}


System_Collections_IEnumerator_o *TutorialBigDialog__WaitPurchase(
        TutorialBigDialog_o *this,
        int32_t CurrentIndex,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C3661B & 1) == 0 )
  {
    sub_1C32C20(&TutorialBigDialog__WaitPurchase_d__58_TypeInfo);
    byte_4C3661B = 1;
  }
  v5 = sub_1C32E6C(TutorialBigDialog__WaitPurchase_d__58_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_DWORD *)(v5 + 40) = CurrentIndex;
  return (System_Collections_IEnumerator_o *)v5;
}


void TutorialBigDialog___LoadStartAssets_b__54_0(
        TutorialBigDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  TutorialBigDialog_o *v4; // x19
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x3
  struct System_String_array *assetsImageLoadList; // x8
  int v8; // w9
  Il2CppObject *Object_object__51111776; // x0
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  v4 = this;
  if ( (byte_4C3662B & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_AssetData_GetObject_Texture2D____78059424);
    sub_1C32C20(&Method_TutorialBigDialog__LoadStartAssets_b__54_1__);
    this = (TutorialBigDialog_o *)sub_1C32C20(&StringLiteral_16255/*"_L_"*/);
    byte_4C3662B = 1;
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
                                  (System_String_o *)StringLiteral_16255/*"_L_"*/,
                                  0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)v4, Method_TutorialBigDialog__LoadStartAssets_b__54_1__, 0);
    TutorialBigDialog__AddScrollImg(v4, data, v5, v6);
    return;
  }
  assetsImageLoadList = v4->fields.assetsImageLoadList;
  if ( !assetsImageLoadList )
LABEL_12:
    sub_1C32E7C(this);
  v8 = v4->fields._loadIndex + 1;
  if ( (unsigned int)v8 >= LODWORD(assetsImageLoadList->max_length) )
LABEL_13:
    sub_1C32E84(this);
  Object_object__51111776 = AssetData__GetObject_object__51111776(
                              data,
                              assetsImageLoadList->m_Items[v8],
                              (const MethodInfo_30BE760 *)Method_AssetData_GetObject_Texture2D____78059424);
  TutorialBigDialog__AddImg(v4, (UnityEngine_Texture2D_o *)Object_object__51111776, v10);
  TutorialBigDialog__AfterLoad(v4, 2, v11);
}


void TutorialBigDialog___LoadStartAssets_b__54_1(TutorialBigDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TutorialBigDialog__AfterLoad(this, 2, v2);
}


void TutorialBigDialog___LoadStart_b__53_0(TutorialBigDialog_o *this, AssetData_o *data, const MethodInfo *method)
{
  TutorialBigDialog_o *v4; // x19
  const MethodInfo *v5; // x2
  System_Action_o *v6; // x21
  const MethodInfo *v7; // x3
  struct System_Int32_array *TutorialImageLoadList; // x8
  __int64 loadIndex; // x9
  System_String_o *TuorialImageName; // x0
  Il2CppObject *Object_object__51111776; // x0
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2

  v4 = this;
  if ( (byte_4C3662A & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_AssetData_GetObject_Texture2D____78059424);
    sub_1C32C20(&Method_TutorialBigDialog__LoadStart_b__53_1__);
    this = (TutorialBigDialog_o *)sub_1C32C20(&StringLiteral_16255/*"_L_"*/);
    byte_4C3662A = 1;
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
                                  (System_String_o *)StringLiteral_16255/*"_L_"*/,
                                  0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v6 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)v4, Method_TutorialBigDialog__LoadStart_b__53_1__, 0);
    TutorialBigDialog__AddScrollImg(v4, data, v6, v7);
    return;
  }
  TutorialImageLoadList = v4->fields.TutorialImageLoadList;
  if ( !TutorialImageLoadList )
LABEL_12:
    sub_1C32E7C(this);
  loadIndex = v4->fields._loadIndex;
  if ( (unsigned int)loadIndex >= LODWORD(TutorialImageLoadList->max_length) )
LABEL_13:
    sub_1C32E84(this);
  TuorialImageName = TutorialBigDialog__GetTuorialImageName(this, TutorialImageLoadList->m_Items[loadIndex], v5);
  Object_object__51111776 = AssetData__GetObject_object__51111776(
                              data,
                              TuorialImageName,
                              (const MethodInfo_30BE760 *)Method_AssetData_GetObject_Texture2D____78059424);
  TutorialBigDialog__AddImg(v4, (UnityEngine_Texture2D_o *)Object_object__51111776, v12);
  TutorialBigDialog__AfterLoad(v4, 1, v13);
}


void TutorialBigDialog___LoadStart_b__53_1(TutorialBigDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TutorialBigDialog__AfterLoad(this, 1, v2);
}


void TutorialBigDialog___OpenAssets_b__46_0(TutorialBigDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TutorialBigDialog__SetTouchMask(this, 1, v2);
}


void TutorialBigDialog___UpdatePage_b__61_0(TutorialBigDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *FadeOutTarget; // x0
  const MethodInfo *v4; // x2

  TutorialBigDialog__refreshCurrent(this, method);
  FadeOutTarget = (UnityEngine_Component_o *)this->fields.FadeOutTarget;
  if ( !FadeOutTarget
    || (FadeOutTarget = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(FadeOutTarget, 0)) == 0 )
  {
    sub_1C32E7C(FadeOutTarget);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)FadeOutTarget, 0, 0);
  this->fields.IsFading = 0;
  TutorialBigDialog__UpdateButtons(this, 1, v4);
}


void TutorialBigDialog__refreshCurrent(TutorialBigDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ImagePageList; // x0
  int32_t CurrentIndex; // w1
  UnityEngine_Object_o *Component_object; // x19

  if ( (byte_4C36620 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_TutorialImageLong___);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C36620 = 1;
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
                                                                   (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !ImagePageList )
      goto LABEL_13;
    Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)ImagePageList,
                                                 (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_TutorialImageLong___);
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
      sub_1C32E7C(ImagePageList);
    }
  }
}


void TutorialBigDialog__WaitPurchase_d__58___ctor(
        TutorialBigDialog__WaitPurchase_d__58_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool TutorialBigDialog__WaitPurchase_d__58__MoveNext(
        TutorialBigDialog__WaitPurchase_d__58_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TutorialBigDialog__WaitPurchase_d__58_o *v3; // x19
  int32_t _1__state; // w8
  TutorialBigDialog___c_c *v5; // x0
  System_Func_bool__o *_9__58_0; // x20
  Il2CppObject *v7; // x21
  struct TutorialBigDialog___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  UnityEngine_WaitUntil_o *v11; // x21
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  bool result; // w0
  TutorialBigDialog_o *_4__this; // x20

  v3 = this;
  if ( (byte_4C3662F & 1) == 0 )
  {
    sub_1C32C20(&System_Func_bool__TypeInfo);
    sub_1C32C20(&Method_TutorialBigDialog___c__WaitPurchase_b__58_0__);
    sub_1C32C20(&TutorialBigDialog___c_TypeInfo);
    sub_1C32C20(&UnityEngine_WaitUntil_TypeInfo);
    this = (TutorialBigDialog__WaitPurchase_d__58_o *)sub_1C32C20(&StringLiteral_10007/*"OpenWindow"*/);
    byte_4C3662F = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v3->fields.__4__this;
    v3->fields.__1__state = -1;
    if ( !_4__this )
      sub_1C32E7C(this);
    TutorialBigDialog__UpdatePage(_4__this, v3->fields.CurrentIndex, v2);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)_4__this,
      (System_String_o *)StringLiteral_10007/*"OpenWindow"*/,
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
  _9__58_0 = v5->static_fields->__9__58_0;
  if ( !_9__58_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = TutorialBigDialog___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__58_0 = (System_Func_bool__o *)sub_1C32E6C(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(_9__58_0, v7, Method_TutorialBigDialog___c__WaitPurchase_b__58_0__, 0);
    static_fields = TutorialBigDialog___c_TypeInfo->static_fields;
    static_fields->__9__58_0 = _9__58_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__58_0, (int32_t)_9__58_0, v9, v10);
  }
  v11 = (UnityEngine_WaitUntil_o *)sub_1C32E6C(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v11, _9__58_0, 0);
  v3->fields.__2__current = (Il2CppObject *)v11;
  p__2__current = (CGThumbnailListItem_o *)&v3->fields.__2__current;
  sub_1C32BC4(p__2__current, (int32_t)v11, v13, v14);
  result = 1;
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return result;
}


Il2CppObject *TutorialBigDialog__WaitPurchase_d__58__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TutorialBigDialog__WaitPurchase_d__58_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn TutorialBigDialog__WaitPurchase_d__58__System_Collections_IEnumerator_Reset(
        TutorialBigDialog__WaitPurchase_d__58_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_TutorialBigDialog__WaitPurchase_d__58_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
}


Il2CppObject *TutorialBigDialog__WaitPurchase_d__58__System_Collections_IEnumerator_get_Current(
        TutorialBigDialog__WaitPurchase_d__58_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void TutorialBigDialog__WaitPurchase_d__58__System_IDisposable_Dispose(
        TutorialBigDialog__WaitPurchase_d__58_o *this,
        const MethodInfo *method)
{
  ;
}


void TutorialBigDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3662C & 1) == 0 )
  {
    sub_1C32C20(&TutorialBigDialog___c_TypeInfo);
    byte_4C3662C = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(TutorialBigDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TutorialBigDialog___c_TypeInfo->static_fields->__9 = (struct TutorialBigDialog___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)TutorialBigDialog___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void TutorialBigDialog___c___ctor(TutorialBigDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool TutorialBigDialog___c___WaitPurchase_b__58_0(TutorialBigDialog___c_o *this, const MethodInfo *method)
{
  PurchaseBehaviour_c *v2; // x0

  if ( (byte_4C3662D & 1) == 0 )
  {
    sub_1C32C20(&PurchaseBehaviour_TypeInfo);
    byte_4C3662D = 1;
  }
  v2 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    v2 = PurchaseBehaviour_TypeInfo;
  }
  return !v2->static_fields->isOpenPurchaseDialogEvent;
}


void TutorialBigDialog___c__DisplayClass56_0___ctor(
        TutorialBigDialog___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TutorialBigDialog___c__DisplayClass56_0___AddScrollImg_b__0(
        TutorialBigDialog___c__DisplayClass56_0_o *this,
        AssetData_o *aData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  TutorialBigDialog___c__DisplayClass56_0_o *v5; // x19
  struct TutorialBigDialog_o *_4__this; // x8
  UnityEngine_Shader_o *v7; // x22
  UnityEngine_Material_o *v8; // x21
  struct TutorialImageLong_o *comp; // x8
  const MethodInfo *v10; // x2
  struct TutorialBigDialog_o *v11; // x23
  struct TutorialBigDialog_o *v12; // x8
  Il2CppObject *Object_object__51111776; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct TutorialBigDialog_o *v16; // x8
  Il2CppObject *obj; // x1
  struct TutorialBigDialog_o *v18; // x8
  _QWORD *v19; // x9
  __int64 comp_low; // x10
  TutorialBigDialog_c **v21; // x8

  v5 = this;
  if ( (byte_4C3662E & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_Texture2D____78059424);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C32C20(&UnityEngine_Material_TypeInfo);
    sub_1C32C20(&TutorialBigDialog_TypeInfo);
    sub_1C32C20(&StringLiteral_4940/*"Custom/SpriteWithMask"*/);
    this = (TutorialBigDialog___c__DisplayClass56_0_o *)sub_1C32C20(&StringLiteral_16267/*"_MaskTex"*/);
    byte_4C3662E = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  _4__this->fields.baseTexAssetData = aData;
  sub_1C32BC4((CGThumbnailListItem_o *)&_4__this->fields.baseTexAssetData, (int32_t)aData, (int32_t)method, v3);
  v7 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4940/*"Custom/SpriteWithMask"*/, 0);
  v8 = (UnityEngine_Material_o *)sub_1C32E6C(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v8, v7, 0);
  comp = v5->fields.comp;
  if ( !comp )
    goto LABEL_20;
  this = (TutorialBigDialog___c__DisplayClass56_0_o *)comp->fields.BaseImage;
  if ( !this )
    goto LABEL_20;
  ((void (__fastcall *)(TutorialBigDialog___c__DisplayClass56_0_o *, UnityEngine_Material_o *, Il2CppMethodPointer))this->klass[1].vtable._1_Finalize.method)(
    this,
    v8,
    this->klass[1].vtable._2_GetHashCode.methodPtr);
  this = (TutorialBigDialog___c__DisplayClass56_0_o *)TutorialBigDialog_TypeInfo;
  v11 = v5->fields.__4__this;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
  if ( !v11 )
    goto LABEL_20;
  this = (TutorialBigDialog___c__DisplayClass56_0_o *)TutorialBigDialog__GetTuorialImageName(
                                                        (TutorialBigDialog_o *)this,
                                                        TutorialBigDialog_TypeInfo->static_fields->baseImgNo,
                                                        v10);
  if ( !aData )
    goto LABEL_20;
  this = (TutorialBigDialog___c__DisplayClass56_0_o *)AssetData__GetObject_object__51111776(
                                                        aData,
                                                        (System_String_o *)this,
                                                        (const MethodInfo_30BE760 *)Method_AssetData_GetObject_Texture2D____78059424);
  if ( !v8 )
    goto LABEL_20;
  UnityEngine_Material__set_mainTexture(v8, (UnityEngine_Texture_o *)this, 0);
  v12 = v5->fields.__4__this;
  if ( !v12 )
    goto LABEL_20;
  this = (TutorialBigDialog___c__DisplayClass56_0_o *)v12->fields.alphaTexAssetData;
  if ( !this )
    goto LABEL_20;
  Object_object__51111776 = AssetData__GetObject_object__51111776(
                              (AssetData_o *)this,
                              TutorialBigDialog_TypeInfo->static_fields->alphaImgName,
                              (const MethodInfo_30BE760 *)Method_AssetData_GetObject_Texture2D____78059424);
  UnityEngine_Material__SetTexture(
    v8,
    (System_String_o *)StringLiteral_16267/*"_MaskTex"*/,
    (UnityEngine_Texture_o *)Object_object__51111776,
    0);
  v16 = v5->fields.__4__this;
  if ( !v16
    || (this = (TutorialBigDialog___c__DisplayClass56_0_o *)v16->fields.ImagePageList) == 0
    || (obj = (Il2CppObject *)v5->fields.obj,
        v18 = this->fields.__4__this,
        v19 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++HIDWORD(this->fields.comp),
        !v18) )
  {
LABEL_20:
    sub_1C32E7C(this);
  }
  comp_low = SLODWORD(this->fields.comp);
  if ( (unsigned int)comp_low >= LODWORD(v18->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      obj,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &v18->klass + comp_low;
    LODWORD(this->fields.comp) = comp_low + 1;
    v21[4] = (TutorialBigDialog_c *)obj;
    sub_1C32BC4((CGThumbnailListItem_o *)(v21 + 4), (int32_t)obj, v14, v15);
  }
  ActionExtensions__Call(v5->fields.callback, 0);
}


void TutorialBigDialog___c__DisplayClass59_0___ctor(
        TutorialBigDialog___c__DisplayClass59_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TutorialBigDialog___c__DisplayClass59_0___LoadAlpha_b__0(
        TutorialBigDialog___c__DisplayClass59_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct TutorialBigDialog_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C32E7C(this);
  _4__this->fields.alphaTexAssetData = data;
  sub_1C32BC4((CGThumbnailListItem_o *)&_4__this->fields.alphaTexAssetData, (int32_t)data, (int32_t)method, v3);
  ActionExtensions__Call(this->fields.callback, 0);
}