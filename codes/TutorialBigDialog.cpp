void __fastcall TutorialBigDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct TutorialBigDialog_StaticFields *static_fields; // x0
  int32_t v9; // w1
  int32_t v10; // w1
  struct TutorialBigDialog_StaticFields *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w1
  struct TutorialBigDialog_StaticFields *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w1
  struct TutorialBigDialog_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  TutorialBigDialog_c *v22; // x8
  struct TutorialBigDialog_StaticFields *v23; // x9
  struct TutorialBigDialog_StaticFields *v24; // x8

  if ( (byte_49FD1FE & 1) == 0 )
  {
    sub_1B64870(&TutorialBigDialog_TypeInfo, v1);
    sub_1B64870(&StringLiteral_14530/*"Tutorial/tutorial_alpha"*/, v4);
    sub_1B64870(&StringLiteral_18078/*"combine_tutorial_alpha"*/, v5);
    sub_1B64870(&StringLiteral_14528/*"Tutorial/combine_tutorial_alpha"*/, v6);
    sub_1B64870(&StringLiteral_24006/*"tutorial_alpha"*/, v7);
    byte_49FD1FE = 1;
  }
  static_fields = TutorialBigDialog_TypeInfo->static_fields;
  static_fields->FADE_TIME = 0.3;
  v9 = StringLiteral_14530/*"Tutorial/tutorial_alpha"*/;
  static_fields->alphaImgPath = (struct System_String_o *)StringLiteral_14530/*"Tutorial/tutorial_alpha"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->alphaImgPath, v9, v2, v3);
  v10 = StringLiteral_24006/*"tutorial_alpha"*/;
  v11 = TutorialBigDialog_TypeInfo->static_fields;
  v11->alphaImgName = (struct System_String_o *)StringLiteral_24006/*"tutorial_alpha"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v11->alphaImgName, v10, v12, v13);
  v14 = StringLiteral_14528/*"Tutorial/combine_tutorial_alpha"*/;
  v15 = TutorialBigDialog_TypeInfo->static_fields;
  v15->alphaMiniImgPath = (struct System_String_o *)StringLiteral_14528/*"Tutorial/combine_tutorial_alpha"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v15->alphaMiniImgPath, v14, v16, v17);
  v18 = StringLiteral_18078/*"combine_tutorial_alpha"*/;
  v19 = TutorialBigDialog_TypeInfo->static_fields;
  v19->alphaMiniImgName = (struct System_String_o *)StringLiteral_18078/*"combine_tutorial_alpha"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v19->alphaMiniImgName, v18, v20, v21);
  v22 = TutorialBigDialog_TypeInfo;
  v23 = TutorialBigDialog_TypeInfo->static_fields;
  v23->baseCloseButtonPosition.fields.z = 0.0;
  *(_QWORD *)&v23->baseImgNo = 0x38400000006LL;
  *(_QWORD *)&v23->baseCloseButtonPosition.fields.x = 0x4382800043F28000LL;
  v24 = v22->static_fields;
  *(_QWORD *)&v24->miniCloseButtonPosition.fields.x = 0x4362000043BD0000LL;
  v24->miniCloseButtonPosition.fields.z = 0.0;
}


void __fastcall TutorialBigDialog___ctor(TutorialBigDialog_o *this, const MethodInfo *method)
{
  if ( (byte_49FD1FD & 1) == 0 )
  {
    sub_1B64870(&BaseDialog_TypeInfo, method);
    byte_49FD1FD = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall TutorialBigDialog__AddImg(
        TutorialBigDialog_o *this,
        UnityEngine_Texture2D_o *tex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *TutorialImagePrefab; // x20
  Il2CppObject *v16; // x20
  System_String_o *v17; // x0
  __int64 gameObject; // x0
  __int64 v19; // x1
  Il2CppObject *Component_object; // x23
  int32_t layer; // w22
  UnityEngine_Shader_o *v22; // x24
  UnityEngine_Material_o *v23; // x22
  int32_t sizeKind; // w21
  __int64 v25; // x10
  Il2CppObject *Object_object__48356600; // x0
  UnityEngine_Transform_o *v27; // x21
  UnityEngine_Transform_o *v28; // x21
  UnityEngine_Transform_o *v29; // x21
  int32_t v30; // w2
  int32_t v31; // w3
  __int64 v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x8

  if ( (byte_49FD1EE & 1) == 0 )
  {
    sub_1B64870(&Method_AssetData_GetObject_Texture2D____75714464, tex);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_UITexture___, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__Add__, v6);
    sub_1B64870(&UnityEngine_Material_TypeInfo, v7);
    sub_1B64870(&NGUITools_TypeInfo, v8);
    sub_1B64870(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v10);
    sub_1B64870(&TutorialBigDialog_TypeInfo, v11);
    sub_1B64870(&StringLiteral_4952/*"Custom/SpriteWithMask"*/, v12);
    sub_1B64870(&StringLiteral_7443/*"Image"*/, v13);
    sub_1B64870(&StringLiteral_16200/*"_MaskTex"*/, v14);
    byte_49FD1EE = 1;
  }
  TutorialImagePrefab = (Il2CppObject *)this->fields.TutorialImagePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v16 = UnityEngine_Object__Instantiate_object_(
          TutorialImagePrefab,
          (const MethodInfo_2EBDF7C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v17 = System_Int32__ToString((int)this + 248, 0LL);
  gameObject = (__int64)System_String__Concat_61383576((System_String_o *)StringLiteral_7443/*"Image"*/, v17, 0LL);
  if ( !v16 )
    goto LABEL_29;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v16, (System_String_o *)gameObject, 0LL);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v16,
                       (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_29;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)gameObject, 0LL);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__SetLayer((UnityEngine_GameObject_o *)v16, layer, 0LL);
  v22 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4952/*"Custom/SpriteWithMask"*/, 0LL);
  v23 = (UnityEngine_Material_o *)sub_1B64ABC(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v23, v22, 0LL);
  if ( !Component_object )
    goto LABEL_29;
  gameObject = ((__int64 (__fastcall *)(Il2CppObject *, UnityEngine_Material_o *, Il2CppMethodPointer))Component_object->klass->vtable[25].method)(
                 Component_object,
                 v23,
                 Component_object->klass->vtable[26].methodPtr);
  if ( !v23 )
    goto LABEL_29;
  UnityEngine_Material__set_mainTexture(v23, (UnityEngine_Texture_o *)tex, 0LL);
  sizeKind = this->fields.sizeKind;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
  gameObject = (__int64)this->fields.alphaTexAssetData;
  if ( !gameObject )
    goto LABEL_29;
  v25 = 16LL;
  if ( sizeKind == 2 )
    v25 = 32LL;
  Object_object__48356600 = AssetData__GetObject_object__48356600(
                              (AssetData_o *)gameObject,
                              *(System_String_o **)((char *)&TutorialBigDialog_TypeInfo->static_fields->FADE_TIME + v25),
                              (const MethodInfo_2E1DCF8 *)Method_AssetData_GetObject_Texture2D____75714464);
  UnityEngine_Material__SetTexture(
    v23,
    (System_String_o *)StringLiteral_16200/*"_MaskTex"*/,
    (UnityEngine_Texture_o *)Object_object__48356600,
    0LL);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v16, 0, 0LL);
  gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v16, 0LL);
  if ( !this->fields.ImageRoot )
    goto LABEL_29;
  v27 = (UnityEngine_Transform_o *)gameObject;
  gameObject = (__int64)UnityEngine_GameObject__get_transform(this->fields.ImageRoot, 0LL);
  if ( !v27 )
    goto LABEL_29;
  UnityEngine_Transform__set_parent(v27, (UnityEngine_Transform_o *)gameObject, 0LL);
  gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v16, 0LL);
  v28 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_49F9201 )
  {
    gameObject = sub_1B64870(&UnityEngine_Vector3_TypeInfo, v19);
    byte_49F9201 = 1;
  }
  if ( !v28 )
    goto LABEL_29;
  UnityEngine_Transform__set_localPosition(v28, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v16, 0LL);
  v29 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_49F9206 )
  {
    gameObject = sub_1B64870(&UnityEngine_Vector3_TypeInfo, v19);
    byte_49F9206 = 1;
  }
  if ( !v29
    || (UnityEngine_Transform__set_localScale(v29, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
        (gameObject = (__int64)this->fields.ImagePageList) == 0)
    || (v32 = *(_QWORD *)(gameObject + 16),
        v33 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++*(_DWORD *)(gameObject + 28),
        !v32) )
  {
LABEL_29:
    sub_1B64ACC(gameObject, v19);
  }
  v34 = *(int *)(gameObject + 24);
  if ( (unsigned int)v34 >= *(_DWORD *)(v32 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)gameObject,
      v16,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
  }
  else
  {
    v35 = v32 + 8 * v34;
    *(_DWORD *)(gameObject + 24) = v34 + 1;
    *(_QWORD *)(v35 + 32) = v16;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v35 + 32), (int32_t)v16, v30, v31);
  }
}


void __fastcall TutorialBigDialog__AddScrollImg(
        TutorialBigDialog_o *this,
        AssetData_o *data,
        System_Action_o *callback,
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x20
  __int64 ObjectNameList; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  int v28; // w8
  __int64 v29; // x24
  unsigned int v30; // w27
  int32_t v31; // w21
  UnityEngine_Texture_o *v32; // x25
  UnityEngine_Texture_o *v33; // x19
  __int64 v34; // x20
  System_String_o **v35; // x20
  __int64 v36; // t1
  char v37; // w26
  const MethodInfo *v38; // x2
  UnityEngine_Texture_o *v39; // x23
  Il2CppObject *TutorialImageLongPrefab; // x22
  Il2CppObject *v41; // x0
  __int64 *v42; // x22
  int32_t v43; // w2
  int32_t v44; // w3
  UnityEngine_Object_o *klass; // x24
  System_String_o *v46; // x0
  Il2CppObject *Component_object; // x0
  void **p_monitor; // x24
  int32_t v49; // w2
  int32_t v50; // w3
  UnityEngine_GameObject_o *v51; // x26
  int32_t layer; // w27
  UnityEngine_Shader_o *v53; // x27
  UnityEngine_Material_o *v54; // x26
  UIWidget_o *v55; // x25
  UITexture_o *v56; // x25
  int v57; // w26
  int v58; // w27
  int32_t baseWidth; // w20
  int v60; // w28
  UnityEngine_Transform_o *v61; // x21
  UnityEngine_Transform_o *v62; // x21
  UnityEngine_Transform_o *v63; // x21
  __int64 v64; // x21
  const MethodInfo *v65; // x2
  TutorialBigDialog_c *v66; // x0
  System_String_o *TuorialImagePath; // x19
  Il2CppObject *object; // [xsp+8h] [xbp-78h]
  TutorialBigDialog_o *v69; // [xsp+18h] [xbp-68h]
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v72; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FD1EF & 1) == 0 )
  {
    sub_1B64870(&Method_AssetData_GetObject_Texture2D____75714464, data);
    sub_1B64870(&AssetManager_TypeInfo, v7);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_TutorialImageLong___, v8);
    sub_1B64870(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_1B64870(&UnityEngine_Material_TypeInfo, v10);
    sub_1B64870(&NGUITools_TypeInfo, v11);
    sub_1B64870(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v13);
    sub_1B64870(&TutorialBigDialog_TypeInfo, v14);
    sub_1B64870(&Method_TutorialBigDialog___c__DisplayClass56_0__AddScrollImg_b__0__, v15);
    sub_1B64870(&TutorialBigDialog___c__DisplayClass56_0_TypeInfo, v16);
    sub_1B64870(&StringLiteral_16670/*"alpha"*/, v17);
    sub_1B64870(&StringLiteral_4952/*"Custom/SpriteWithMask"*/, v18);
    sub_1B64870(&StringLiteral_7443/*"Image"*/, v19);
    sub_1B64870(&StringLiteral_16200/*"_MaskTex"*/, v20);
    byte_49FD1EF = 1;
  }
  v21 = sub_1B64ABC(TutorialBigDialog___c__DisplayClass56_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_62;
  *(_QWORD *)(v21 + 16) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v21 + 16), (int32_t)this, v24, v25);
  *(_QWORD *)(v21 + 40) = callback;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v21 + 40), (int32_t)callback, v26, v27);
  if ( !data )
    goto LABEL_62;
  ObjectNameList = (__int64)AssetData__GetObjectNameList(data, 0LL);
  if ( !ObjectNameList )
    goto LABEL_62;
  v28 = *(_DWORD *)(ObjectNameList + 24);
  v29 = ObjectNameList;
  object = (Il2CppObject *)v21;
  v69 = this;
  if ( v28 < 1 )
  {
    v33 = 0LL;
    v39 = 0LL;
    v31 = 0;
  }
  else
  {
    v30 = 0;
    v31 = 0;
    v32 = 0LL;
    v33 = 0LL;
    do
    {
      if ( v30 >= v28 )
        goto LABEL_61;
      v34 = v29 + 8LL * (int)v30;
      v36 = *(_QWORD *)(v34 + 32);
      v35 = (System_String_o **)(v34 + 32);
      ObjectNameList = v36;
      if ( !v36 )
        goto LABEL_62;
      ObjectNameList = System_String__Contains(
                         (System_String_o *)ObjectNameList,
                         (System_String_o *)StringLiteral_16670/*"alpha"*/,
                         0LL);
      if ( v30 >= *(_DWORD *)(v29 + 24) )
LABEL_61:
        sub_1B64AD4(ObjectNameList, v23);
      v37 = ObjectNameList;
      ObjectNameList = (__int64)AssetData__GetObject_object__48356600(
                                  data,
                                  *v35,
                                  (const MethodInfo_2E1DCF8 *)Method_AssetData_GetObject_Texture2D____75714464);
      v39 = (UnityEngine_Texture_o *)ObjectNameList;
      if ( (v37 & 1) == 0 )
      {
        if ( v30 >= *(_DWORD *)(v29 + 24) )
          goto LABEL_61;
        v33 = (UnityEngine_Texture_o *)ObjectNameList;
        ObjectNameList = TutorialBigDialog__GetScrollHeightWithName((TutorialBigDialog_o *)ObjectNameList, *v35, v38);
        v31 = ObjectNameList;
        v39 = v32;
      }
      v28 = *(_DWORD *)(v29 + 24);
      ++v30;
      v32 = v39;
    }
    while ( (int)v30 < v28 );
  }
  TutorialImageLongPrefab = (Il2CppObject *)v69->fields.TutorialImageLongPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v41 = UnityEngine_Object__Instantiate_object_(
          TutorialImageLongPrefab,
          (const MethodInfo_2EBDF7C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  object[2].klass = (Il2CppClass *)v41;
  v42 = (__int64 *)&object[2];
  sub_1B64814((ServantStatusBattleListViewItem_o *)&object[2], (int32_t)v41, v43, v44);
  klass = (UnityEngine_Object_o *)object[2].klass;
  v46 = System_Int32__ToString((int)v69 + 248, 0LL);
  ObjectNameList = (__int64)System_String__Concat_61383576((System_String_o *)StringLiteral_7443/*"Image"*/, v46, 0LL);
  if ( !klass )
    goto LABEL_62;
  UnityEngine_Object__set_name(klass, (System_String_o *)ObjectNameList, 0LL);
  ObjectNameList = *v42;
  if ( !*v42 )
    goto LABEL_62;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)ObjectNameList,
                       (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_TutorialImageLong___);
  object[1].monitor = Component_object;
  p_monitor = &object[1].monitor;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&object[1].monitor, (int32_t)Component_object, v49, v50);
  v51 = (UnityEngine_GameObject_o *)object[2].klass;
  ObjectNameList = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v69, 0LL);
  if ( !ObjectNameList )
    goto LABEL_62;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)ObjectNameList, 0LL);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__SetLayer(v51, layer, 0LL);
  v53 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4952/*"Custom/SpriteWithMask"*/, 0LL);
  v54 = (UnityEngine_Material_o *)sub_1B64ABC(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v54, v53, 0LL);
  if ( !*p_monitor )
    goto LABEL_62;
  ObjectNameList = *((_QWORD *)*p_monitor + 5);
  if ( !ObjectNameList )
    goto LABEL_62;
  ObjectNameList = (*(__int64 (__fastcall **)(__int64, UnityEngine_Material_o *, _QWORD))(*(_QWORD *)ObjectNameList
                                                                                        + 712LL))(
                     ObjectNameList,
                     v54,
                     *(_QWORD *)(*(_QWORD *)ObjectNameList + 720LL));
  if ( !v54 )
    goto LABEL_62;
  UnityEngine_Material__set_mainTexture(v54, v33, 0LL);
  UnityEngine_Material__SetTexture(v54, (System_String_o *)StringLiteral_16200/*"_MaskTex"*/, v39, 0LL);
  if ( !*p_monitor )
    goto LABEL_62;
  ObjectNameList = *((_QWORD *)*p_monitor + 5);
  if ( !ObjectNameList )
    goto LABEL_62;
  UIWidget__set_height((UIWidget_o *)ObjectNameList, v31, 0LL);
  if ( !*p_monitor )
    goto LABEL_62;
  v55 = (UIWidget_o *)*((_QWORD *)*p_monitor + 5);
  ObjectNameList = (__int64)TutorialBigDialog_TypeInfo;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
  if ( !v55 )
    goto LABEL_62;
  UIWidget__set_width(v55, TutorialBigDialog_TypeInfo->static_fields->baseWidth, 0LL);
  if ( !*p_monitor )
    goto LABEL_62;
  if ( !v33 )
    goto LABEL_62;
  v56 = (UITexture_o *)*((_QWORD *)*p_monitor + 5);
  v57 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v33->klass->vtable._6_get_height.method)(
          v33,
          v33->klass->vtable._7_set_height.methodPtr);
  v58 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v33->klass->vtable._6_get_height.method)(
          v33,
          v33->klass->vtable._7_set_height.methodPtr);
  baseWidth = TutorialBigDialog_TypeInfo->static_fields->baseWidth;
  v60 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v33->klass->vtable._4_get_width.method)(
          v33,
          v33->klass->vtable._5_set_width.methodPtr);
  ObjectNameList = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v33->klass->vtable._6_get_height.method)(
                     v33,
                     v33->klass->vtable._7_set_height.methodPtr);
  if ( !v56 )
    goto LABEL_62;
  v72.fields.m_Height = (float)v31 / (float)(int)ObjectNameList;
  v72.fields.m_Width = (float)baseWidth / (float)v60;
  v72.fields.m_YMin = (float)(v57 - v31) / (float)v58;
  v72.fields.m_XMin = 0.0;
  UITexture__set_uvRect(v56, v72, 0LL);
  if ( !*p_monitor )
    goto LABEL_62;
  ObjectNameList = *((_QWORD *)*p_monitor + 6);
  if ( !ObjectNameList )
    goto LABEL_62;
  v70.fields.z = 1.0;
  v70.fields.y = (float)v31;
  v70.fields.x = (float)TutorialBigDialog_TypeInfo->static_fields->baseWidth;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)ObjectNameList, v70, 0LL);
  if ( !*p_monitor )
    goto LABEL_62;
  ObjectNameList = *((_QWORD *)*p_monitor + 6);
  if ( !ObjectNameList )
    goto LABEL_62;
  v71.fields.y = (float)-v31 * 0.5;
  v71.fields.x = 0.0;
  v71.fields.z = 0.0;
  UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)ObjectNameList, v71, 0LL);
  if ( !*p_monitor )
    goto LABEL_62;
  ObjectNameList = *((_QWORD *)*p_monitor + 7);
  if ( !ObjectNameList )
    goto LABEL_62;
  UIScrollView__ResetPosition((UIScrollView_o *)ObjectNameList, 0LL);
  ObjectNameList = *v42;
  if ( !*v42 )
    goto LABEL_62;
  ObjectNameList = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)ObjectNameList, 0LL);
  if ( !v69->fields.ImageRoot )
    goto LABEL_62;
  v61 = (UnityEngine_Transform_o *)ObjectNameList;
  ObjectNameList = (__int64)UnityEngine_GameObject__get_transform(v69->fields.ImageRoot, 0LL);
  if ( !v61 )
    goto LABEL_62;
  UnityEngine_Transform__set_parent(v61, (UnityEngine_Transform_o *)ObjectNameList, 0LL);
  ObjectNameList = *v42;
  if ( !*v42 )
    goto LABEL_62;
  ObjectNameList = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)ObjectNameList, 0LL);
  v62 = (UnityEngine_Transform_o *)ObjectNameList;
  if ( !byte_49F9201 )
  {
    ObjectNameList = sub_1B64870(&UnityEngine_Vector3_TypeInfo, v23);
    byte_49F9201 = 1;
  }
  if ( !v62 )
    goto LABEL_62;
  UnityEngine_Transform__set_localPosition(v62, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  ObjectNameList = *v42;
  if ( !*v42 )
    goto LABEL_62;
  ObjectNameList = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)ObjectNameList, 0LL);
  v63 = (UnityEngine_Transform_o *)ObjectNameList;
  if ( !byte_49F9206 )
  {
    ObjectNameList = sub_1B64870(&UnityEngine_Vector3_TypeInfo, v23);
    byte_49F9206 = 1;
  }
  if ( !v63 )
    goto LABEL_62;
  UnityEngine_Transform__set_localScale(v63, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  v64 = sub_1B64ABC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    (AssetLoader_LoadEndDataHandler_o *)v64,
    object,
    Method_TutorialBigDialog___c__DisplayClass56_0__AddScrollImg_b__0__,
    0LL);
  if ( v69->fields.baseTexLoadRequested )
  {
    if ( v64 )
    {
      (*(void (__fastcall **)(_QWORD, struct AssetData_o *, _QWORD))(v64 + 24))(
        *(_QWORD *)(v64 + 64),
        v69->fields.baseTexAssetData,
        *(_QWORD *)(v64 + 40));
      return;
    }
LABEL_62:
    sub_1B64ACC(ObjectNameList, v23);
  }
  v69->fields.baseTexLoadRequested = 1;
  v66 = TutorialBigDialog_TypeInfo;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v66 = TutorialBigDialog_TypeInfo;
  }
  TuorialImagePath = TutorialBigDialog__GetTuorialImagePath(v69, v66->static_fields->baseImgNo, v65);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(TuorialImagePath, (AssetLoader_LoadEndDataHandler_o *)v64, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialBigDialog__AfterLoad(TutorialBigDialog_o *this, int32_t addCount, const MethodInfo *method)
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
  if ( !loadByAsset )
    v5 = 0;
  if ( loadByAsset )
  {
    assetsImageLoadList = this->fields.assetsImageLoadList;
    if ( assetsImageLoadList )
    {
      if ( v5 < (signed int)assetsImageLoadList->max_length )
      {
        TutorialBigDialog__LoadStartAssets(this, *(const MethodInfo **)&addCount);
        return;
      }
      goto LABEL_13;
    }
LABEL_14:
    sub_1B64ACC(this, addCount);
  }
  TutorialImageLoadList = this->fields.TutorialImageLoadList;
  if ( !TutorialImageLoadList )
    goto LABEL_14;
  if ( v6 < (signed int)TutorialImageLoadList->max_length )
  {
    TutorialBigDialog__LoadStart(this, *(const MethodInfo **)&addCount);
    return;
  }
LABEL_13:
  this->fields.CurrentIndex = 0;
  v9 = TutorialBigDialog__WaitPurchase(this, 0, method);
  UnityEngine_MonoBehaviour__StartCoroutine_69121188((UnityEngine_MonoBehaviour_o *)this, v9, 0LL);
}


void __fastcall TutorialBigDialog__Close(
        TutorialBigDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  System_Action_o *v8; // x20

  if ( (byte_49FD1F6 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, callback);
    sub_1B64870(&AndroidBackKeyManager_TypeInfo, v6);
    sub_1B64870(&Method_TutorialBigDialog_EndClose__, v7);
    byte_49FD1F6 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  this->fields.isButtonEnable = 0;
  AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 0;
  v8 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_TutorialBigDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v8, 0LL);
}


void __fastcall TutorialBigDialog__DestroyImagePageList(TutorialBigDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x0
  Il2CppObject *current; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_GameObject__o *v12; // x8
  int32_t size; // w2
  int v14; // w9
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FD1FC & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__Clear__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v6);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v7);
    byte_49FD1FC = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ImagePageList = this->fields.ImagePageList;
  if ( ImagePageList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      (System_Collections_Generic_List_object__o *)ImagePageList,
      (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v15.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69135916((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v12 = this->fields.ImagePageList;
    if ( !v12 )
      sub_1B64ACC(v10, v11);
    size = v12->fields._size;
    v14 = v12->fields._version + 1;
    v12->fields._size = 0;
    v12->fields._version = v14;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v12->fields._items, 0, size, 0LL);
    this->fields.CurrentIndex = 0;
  }
}


void __fastcall TutorialBigDialog__EndClose(TutorialBigDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v8; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  TutorialBigDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64ACC(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v8 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B64814(p_closeCallbackFunc, 0, v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v8->fields.m_target)(
      v8->fields.original_method_info,
      *(_QWORD *)&v8->fields.extra_arg);
  }
}


void __fastcall TutorialBigDialog__EndOpen(TutorialBigDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_endOpenCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *endOpenCallbackFunc; // t1

  this->fields.isButtonEnable = 1;
  TutorialBigDialog__refreshCurrent(this, method);
  endOpenCallbackFunc = this->fields.endOpenCallbackFunc;
  p_endOpenCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.endOpenCallbackFunc;
  v6 = endOpenCallbackFunc;
  if ( endOpenCallbackFunc )
  {
    p_endOpenCallbackFunc->klass = 0LL;
    sub_1B64814(p_endOpenCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall TutorialBigDialog__EndTurorialRequest(
        TutorialBigDialog_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  ActionExtensions__Call(this->fields.endTurorialRequestFunc, 0LL);
  TutorialBigDialog__Close(this, this->fields.closeCallbackFunc, v4);
}


int32_t __fastcall TutorialBigDialog__GetScrollHeightWithName(
        TutorialBigDialog_o *this,
        System_String_o *imageName,
        const MethodInfo *method)
{
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  if ( !imageName || (this = (TutorialBigDialog_o *)System_String__Split(imageName, 0x5Fu, 0, 0LL), result = 0, !this) )
    sub_1B64ACC(this, imageName);
  if ( LODWORD(this->fields.m_CancellationTokenSource) <= 3 )
    sub_1B64AD4(this, imageName);
  System_Int32__TryParse((System_String_o *)this->fields.maskSprite, &result, 0LL);
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TutorialBigDialog__GetTuorialImageName(
        TutorialBigDialog_o *this,
        int32_t imgId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  int32_t v11; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FD1EB & 1) == 0 )
  {
    sub_1B64870(&int_TypeInfo, *(_QWORD *)&imgId);
    sub_1B64870(&StringLiteral_24856/*"{0:D4}"*/, v6);
    sub_1B64870(&StringLiteral_24004/*"tutorial_"*/, v7);
    byte_49FD1EB = 1;
  }
  v11 = imgId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, method, v3, v4);
  v9 = System_String__Format((System_String_o *)StringLiteral_24856/*"{0:D4}"*/, v8, 0LL);
  return System_String__Concat_61383576((System_String_o *)StringLiteral_24004/*"tutorial_"*/, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TutorialBigDialog__GetTuorialImagePath(
        TutorialBigDialog_o *this,
        int32_t imgId,
        const MethodInfo *method)
{
  System_String_o *TuorialImageName; // x0

  if ( (byte_49FD1EA & 1) == 0 )
  {
    this = (TutorialBigDialog_o *)sub_1B64870(&StringLiteral_14527/*"Tutorial/"*/, *(_QWORD *)&imgId);
    byte_49FD1EA = 1;
  }
  TuorialImageName = TutorialBigDialog__GetTuorialImageName(this, imgId, method);
  return System_String__Concat_61383576((System_String_o *)StringLiteral_14527/*"Tutorial/"*/, TuorialImageName, 0LL);
}


void __fastcall TutorialBigDialog__Init(TutorialBigDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  int32_t v8; // w3
  TutorialBigDialog_c *v9; // x0
  int32_t sizeKind; // w20
  __int64 v11; // x9
  System_String_o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  TutorialBigDialog_c *v15; // x0
  System_String_o *TuorialImagePath; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  struct System_Int32_array *TutorialImageLoadList; // x23
  __int64 v20; // x8
  unsigned __int64 v21; // x24
  System_String_o *v22; // x21
  struct System_String_array *assetsImageLoadList; // x8
  struct System_String_array **p_assetsImageLoadList; // x20
  il2cpp_array_size_t v25; // w23
  il2cpp_array_size_t max_length; // w9
  System_String_o *v27; // x21

  if ( (byte_49FD1E0 & 1) == 0 )
  {
    sub_1B64870(&AssetManager_TypeInfo, method);
    sub_1B64870(&TutorialBigDialog_TypeInfo, v3);
    byte_49FD1E0 = 1;
  }
  this->fields.isButtonEnable = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_33:
    sub_1B64ACC(gameObject, v5);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.IsFading = 0;
  TutorialBigDialog__DestroyImagePageList(this, v6);
  if ( this->fields.alphaTexLoadRequested )
  {
    v9 = TutorialBigDialog_TypeInfo;
    sizeKind = this->fields.sizeKind;
    if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
      v9 = TutorialBigDialog_TypeInfo;
    }
    v11 = 8LL;
    if ( sizeKind == 2 )
      v11 = 24LL;
    v12 = *(System_String_o **)((char *)&v9->static_fields->FADE_TIME + v11);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v12, 0LL);
    this->fields.alphaTexAssetData = 0LL;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.alphaTexAssetData, 0, v13, v14);
    this->fields.alphaTexLoadRequested = 0;
  }
  if ( this->fields.baseTexLoadRequested )
  {
    v15 = TutorialBigDialog_TypeInfo;
    if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
      v15 = TutorialBigDialog_TypeInfo;
    }
    TuorialImagePath = TutorialBigDialog__GetTuorialImagePath(this, v15->static_fields->baseImgNo, v7);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(TuorialImagePath, 0LL);
    this->fields.baseTexAssetData = 0LL;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.baseTexAssetData, 0, v17, v18);
    this->fields.baseTexLoadRequested = 0;
  }
  TutorialImageLoadList = this->fields.TutorialImageLoadList;
  if ( TutorialImageLoadList )
  {
    v20 = *(_QWORD *)&TutorialImageLoadList->max_length;
    if ( (int)v20 >= 1 )
    {
      v21 = 0LL;
      do
      {
        if ( v21 >= (unsigned int)v20 )
LABEL_36:
          sub_1B64AD4(gameObject, v5);
        v22 = TutorialBigDialog__GetTuorialImagePath(this, TutorialImageLoadList->m_Items[v21 + 1], v7);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetManager__releaseAssetStorage(v22, 0LL);
        LODWORD(v20) = TutorialImageLoadList->max_length;
        ++v21;
      }
      while ( (__int64)v21 < (int)v20 );
    }
    this->fields.TutorialImageLoadList = 0LL;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.TutorialImageLoadList, 0, (int32_t)v7, v8);
  }
  p_assetsImageLoadList = &this->fields.assetsImageLoadList;
  assetsImageLoadList = this->fields.assetsImageLoadList;
  if ( assetsImageLoadList )
  {
    v25 = 0;
    while ( 1 )
    {
      max_length = assetsImageLoadList->max_length;
      if ( (int)v25 >= (int)max_length )
        break;
      if ( v25 >= max_length )
        goto LABEL_36;
      v27 = assetsImageLoadList->m_Items[v25];
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage(v27, 0LL);
      assetsImageLoadList = *p_assetsImageLoadList;
      v25 += 2;
      if ( !*p_assetsImageLoadList )
        goto LABEL_33;
    }
    *p_assetsImageLoadList = 0LL;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.assetsImageLoadList, 0, (int32_t)v7, v8);
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall TutorialBigDialog__LoadAlpha(
        TutorialBigDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  TutorialBigDialog_c *v16; // x0
  int32_t sizeKind; // w19
  __int64 v18; // x9
  System_String_o *v19; // x19
  AssetLoader_LoadEndDataHandler_o *v20; // x21

  if ( (byte_49FD1F1 & 1) == 0 )
  {
    sub_1B64870(&AssetManager_TypeInfo, callback);
    sub_1B64870(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1B64870(&TutorialBigDialog_TypeInfo, v6);
    sub_1B64870(&Method_TutorialBigDialog___c__DisplayClass59_0__LoadAlpha_b__0__, v7);
    sub_1B64870(&TutorialBigDialog___c__DisplayClass59_0_TypeInfo, v8);
    byte_49FD1F1 = 1;
  }
  v9 = sub_1B64ABC(TutorialBigDialog___c__DisplayClass59_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1B64ACC(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = callback;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)callback, v14, v15);
  this->fields.alphaTexLoadRequested = 1;
  v16 = TutorialBigDialog_TypeInfo;
  sizeKind = this->fields.sizeKind;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v16 = TutorialBigDialog_TypeInfo;
  }
  v18 = 8LL;
  if ( sizeKind == 2 )
    v18 = 24LL;
  v19 = *(System_String_o **)((char *)&v16->static_fields->FADE_TIME + v18);
  v20 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64ABC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v20,
    (Il2CppObject *)v9,
    Method_TutorialBigDialog___c__DisplayClass59_0__LoadAlpha_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v19, v20, 1, 0LL);
}


void __fastcall TutorialBigDialog__LoadImages(
        TutorialBigDialog_o *this,
        System_Int32_array *images,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  System_Action_o *v13; // x20
  const MethodInfo *v14; // x2

  if ( (byte_49FD1E8 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, images);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject___ctor__, v4);
    sub_1B64870(&System_Collections_Generic_List_GameObject__TypeInfo, v5);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B64870(&Method_TutorialBigDialog_LoadStart__, v7);
    byte_49FD1E8 = 1;
  }
  this->fields._loadIndex = 0;
  this->fields.loadByAsset = 0;
  v8 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.ImagePageList = (struct System_Collections_Generic_List_GameObject__o *)v8;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.ImagePageList, (int32_t)v8, v9, v10);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v12);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  v13 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_TutorialBigDialog_LoadStart__, 0LL);
  TutorialBigDialog__LoadAlpha(this, v13, v14);
}


void __fastcall TutorialBigDialog__LoadImages_37039832(
        TutorialBigDialog_o *this,
        System_String_array *images,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  System_Action_o *v13; // x20
  const MethodInfo *v14; // x2

  if ( (byte_49FD1E9 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, images);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject___ctor__, v4);
    sub_1B64870(&System_Collections_Generic_List_GameObject__TypeInfo, v5);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B64870(&Method_TutorialBigDialog_LoadStartAssets__, v7);
    byte_49FD1E9 = 1;
  }
  this->fields._loadIndex = 0;
  this->fields.loadByAsset = 1;
  v8 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.ImagePageList = (struct System_Collections_Generic_List_GameObject__o *)v8;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.ImagePageList, (int32_t)v8, v9, v10);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v12);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  v13 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_TutorialBigDialog_LoadStartAssets__, 0LL);
  TutorialBigDialog__LoadAlpha(this, v13, v14);
}


void __fastcall TutorialBigDialog__LoadStart(TutorialBigDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TutorialBigDialog_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Int32_array *TutorialImageLoadList; // x8
  __int64 loadIndex; // x9
  System_String_o *TuorialImagePath; // x20
  AssetLoader_LoadEndDataHandler_o *v9; // x21

  v3 = this;
  if ( (byte_49FD1EC & 1) == 0 )
  {
    sub_1B64870(&AssetManager_TypeInfo, method);
    sub_1B64870(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    this = (TutorialBigDialog_o *)sub_1B64870(&Method_TutorialBigDialog__LoadStart_b__53_0__, v5);
    byte_49FD1EC = 1;
  }
  TutorialImageLoadList = v3->fields.TutorialImageLoadList;
  if ( !TutorialImageLoadList )
    sub_1B64ACC(this, method);
  loadIndex = v3->fields._loadIndex;
  if ( (unsigned int)loadIndex >= TutorialImageLoadList->max_length )
    sub_1B64AD4(this, method);
  TuorialImagePath = TutorialBigDialog__GetTuorialImagePath(v3, TutorialImageLoadList->m_Items[loadIndex + 1], v2);
  v9 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64ABC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v9, (Il2CppObject *)v3, Method_TutorialBigDialog__LoadStart_b__53_0__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(TuorialImagePath, v9, 1, 0LL);
}


void __fastcall TutorialBigDialog__LoadStartAssets(TutorialBigDialog_o *this, const MethodInfo *method)
{
  TutorialBigDialog_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_String_array *assetsImageLoadList; // x8
  __int64 loadIndex; // x9
  System_String_o *v7; // x20
  AssetLoader_LoadEndDataHandler_o *v8; // x21

  v2 = this;
  if ( (byte_49FD1ED & 1) == 0 )
  {
    sub_1B64870(&AssetManager_TypeInfo, method);
    sub_1B64870(&AssetLoader_LoadEndDataHandler_TypeInfo, v3);
    this = (TutorialBigDialog_o *)sub_1B64870(&Method_TutorialBigDialog__LoadStartAssets_b__54_0__, v4);
    byte_49FD1ED = 1;
  }
  assetsImageLoadList = v2->fields.assetsImageLoadList;
  if ( !assetsImageLoadList )
    sub_1B64ACC(this, method);
  loadIndex = v2->fields._loadIndex;
  if ( (unsigned int)loadIndex >= assetsImageLoadList->max_length )
    sub_1B64AD4(this, method);
  v7 = assetsImageLoadList->m_Items[loadIndex];
  v8 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64ABC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v8,
    (Il2CppObject *)v2,
    Method_TutorialBigDialog__LoadStartAssets_b__54_0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v7, v8, 1, 0LL);
}


void __fastcall TutorialBigDialog__OnBottomButton(TutorialBigDialog_o *this, const MethodInfo *method)
{
  TutorialBigDialog_o *v2; // x19
  __int64 v3; // x1
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x8
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  v2 = this;
  if ( (byte_49FD1F9 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__get_Count__, method);
    this = (TutorialBigDialog_o *)sub_1B64870(&Method_TutorialBigDialog_OnBottomButton__, v3);
    byte_49FD1F9 = 1;
  }
  if ( !v2->fields.IsFading )
  {
    ImagePageList = v2->fields.ImagePageList;
    if ( !ImagePageList )
      sub_1B64ACC(this, method);
    if ( v2->fields.CurrentIndex == ImagePageList->fields._size - 1 )
    {
      v5 = Method_TutorialBigDialog_OnBottomButton__;
      if ( (*((_BYTE *)Method_TutorialBigDialog_OnBottomButton__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1B64888(Method_TutorialBigDialog_OnBottomButton__);
      v6 = (System_Reflection_MethodBase_o *)sub_1B64854(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
      TutorialBigDialog__OnClickClose(v2, v7);
    }
  }
}


void __fastcall TutorialBigDialog__OnClickClose(TutorialBigDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  const MethodInfo *v11; // x2
  int32_t localFlagId; // w20
  int configFlagId; // w20
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  Il2CppObject *Request_object; // x0
  __int64 v16; // x1
  NetworkManager_ResultCallbackFunc_o *v17; // x20

  if ( (byte_49FD1FA & 1) == 0 )
  {
    sub_1B64870(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, method);
    sub_1B64870(&Method_NetworkManager_getRequest_TutorialSetRequest___, v3);
    sub_1B64870(&NetworkManager_TypeInfo, v4);
    sub_1B64870(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1B64870(&Method_TutorialBigDialog_EndTurorialRequest__, v6);
    sub_1B64870(&Method_TutorialBigDialog_OnClickClose__, v7);
    sub_1B64870(&TutorialFlag_TypeInfo, v8);
    byte_49FD1FA = 1;
  }
  if ( !this->fields.IsFading && this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v9 = Method_TutorialBigDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_TutorialBigDialog_OnClickClose__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1B64888(Method_TutorialBigDialog_OnClickClose__);
    v10 = (System_Reflection_MethodBase_o *)sub_1B64854(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 1, 0LL);
    localFlagId = this->fields.localFlagId;
    if ( localFlagId != -1 )
    {
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      TutorialFlag__Set_37414020(localFlagId, 0LL);
    }
    configFlagId = this->fields.configFlagId;
    if ( configFlagId >= 1 )
    {
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      TutorialFlag__SetConfigFlg(configFlagId, 0LL);
    }
    if ( this->fields.flagId != -1 )
    {
      v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64ABC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_TutorialBigDialog_EndTurorialRequest__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v14,
                         (const MethodInfo_2EBCCAC *)Method_NetworkManager_getRequest_TutorialSetRequest___);
      if ( Request_object )
      {
        TutorialSetRequest__beginRequest((TutorialSetRequest_o *)Request_object, this->fields.flagId, 0LL);
        return;
      }
LABEL_28:
      sub_1B64ACC(Request_object, v16);
    }
    if ( this->fields.eventFlagId == -1 || !this->fields.eventId )
    {
      TutorialBigDialog__Close(this, this->fields.closeCallbackFunc, v11);
    }
    else
    {
      v17 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64ABC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_TutorialBigDialog_EndTurorialRequest__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v17,
                         (const MethodInfo_2EBCCAC *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
      if ( !Request_object )
        goto LABEL_28;
      TutorialEventSetRequest__beginRequest(
        (TutorialEventSetRequest_o *)Request_object,
        this->fields.eventFlagId,
        this->fields.eventId,
        0LL);
    }
  }
}


void __fastcall TutorialBigDialog__OnNextButton(TutorialBigDialog_o *this, const MethodInfo *method)
{
  TutorialBigDialog_o *v2; // x19
  __int64 v3; // x1
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x8
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2

  v2 = this;
  if ( (byte_49FD1F7 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__get_Count__, method);
    this = (TutorialBigDialog_o *)sub_1B64870(&Method_TutorialBigDialog_OnNextButton__, v3);
    byte_49FD1F7 = 1;
  }
  if ( !v2->fields.IsFading )
  {
    ImagePageList = v2->fields.ImagePageList;
    if ( !ImagePageList )
      sub_1B64ACC(this, method);
    if ( v2->fields.CurrentIndex != ImagePageList->fields._size - 1 )
    {
      v5 = Method_TutorialBigDialog_OnNextButton__;
      if ( (*((_BYTE *)Method_TutorialBigDialog_OnNextButton__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1B64888(Method_TutorialBigDialog_OnNextButton__);
      v6 = (System_Reflection_MethodBase_o *)sub_1B64854(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
      TutorialBigDialog__UpdatePage(v2, v2->fields.CurrentIndex + 1, v7);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialBigDialog__OnPageChange(TutorialBigDialog_o *this, int32_t idx, const MethodInfo *method)
{
  TutorialBigDialog_o *v4; // x20
  __int64 v5; // x1
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x8
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0

  v4 = this;
  if ( (byte_49FD1FB & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__get_Count__, *(_QWORD *)&idx);
    this = (TutorialBigDialog_o *)sub_1B64870(&Method_TutorialBigDialog_OnPageChange__, v5);
    byte_49FD1FB = 1;
  }
  if ( (idx & 0x80000000) == 0 && v4->fields.CurrentIndex != idx )
  {
    ImagePageList = v4->fields.ImagePageList;
    if ( !ImagePageList )
      sub_1B64ACC(this, *(_QWORD *)&idx);
    if ( ImagePageList->fields._size > idx )
    {
      v7 = Method_TutorialBigDialog_OnPageChange__;
      if ( (*((_BYTE *)Method_TutorialBigDialog_OnPageChange__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1B64888(Method_TutorialBigDialog_OnPageChange__);
      v8 = (System_Reflection_MethodBase_o *)sub_1B64854(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    }
  }
}


void __fastcall TutorialBigDialog__OnPrevButton(TutorialBigDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_49FD1F8 & 1) == 0 )
  {
    sub_1B64870(&Method_TutorialBigDialog_OnPrevButton__, method);
    byte_49FD1F8 = 1;
  }
  if ( !this->fields.IsFading && this->fields.CurrentIndex >= 1 )
  {
    v3 = Method_TutorialBigDialog_OnPrevButton__;
    if ( (*((_BYTE *)Method_TutorialBigDialog_OnPrevButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B64888(Method_TutorialBigDialog_OnPrevButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B64854(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    TutorialBigDialog__UpdatePage(this, this->fields.CurrentIndex - 1, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialBigDialog__Open(
        TutorialBigDialog_o *this,
        TutorialFlag_ImageId_array *images,
        int32_t flagId,
        System_Action_o *closeFunc,
        System_Action_o *endOpenFunc,
        System_Action_o *endTurorialRequestFunc,
        const MethodInfo *method)
{
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x1
  UnityEngine_GameObject_o *CloseButton; // x0
  TutorialBigDialog_c *v22; // x8
  UnityEngine_Transform_o *v23; // x21
  struct System_Int32_array *v24; // x0
  struct System_Int32_array **p_TutorialImageLoadList; // x21
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_Int32_array *v28; // x9
  unsigned __int64 v29; // x10
  unsigned __int64 v30; // x8
  __int64 v31; // x13
  System_Int32_array *v32; // x1
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x2

  if ( (byte_49FD1E1 & 1) == 0 )
  {
    sub_1B64870(&int___TypeInfo, images);
    sub_1B64870(&TutorialBigDialog_TypeInfo, v13);
    byte_49FD1E1 = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&flagId);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.endOpenCallbackFunc, (int32_t)endOpenFunc, v14, v15);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.endTurorialRequestFunc,
    (int32_t)endTurorialRequestFunc,
    v16,
    v17);
  this->fields.closeCallbackFunc = closeFunc;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, (int32_t)closeFunc, v18, v19);
  CloseButton = this->fields.CloseButton;
  this->fields.flagId = flagId;
  *(_OWORD *)&this->fields.localFlagId = xmmword_BA3500;
  this->fields.sizeKind = 1;
  if ( !CloseButton )
    goto LABEL_19;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0LL);
  v22 = TutorialBigDialog_TypeInfo;
  v23 = (UnityEngine_Transform_o *)CloseButton;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v22 = TutorialBigDialog_TypeInfo;
  }
  if ( !v23 )
    goto LABEL_19;
  UnityEngine_Transform__set_localPosition(v23, v22->static_fields->baseCloseButtonPosition, 0LL);
  if ( !images )
    goto LABEL_19;
  v24 = (struct System_Int32_array *)sub_1B64918(int___TypeInfo, images->max_length);
  this->fields.TutorialImageLoadList = v24;
  p_TutorialImageLoadList = &this->fields.TutorialImageLoadList;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.TutorialImageLoadList, (int32_t)v24, v26, v27);
  if ( (int)*(_QWORD *)&images->max_length >= 1 )
  {
    v28 = *p_TutorialImageLoadList;
    v29 = (unsigned int)*(_QWORD *)&images->max_length;
    v30 = 0LL;
    v31 = (__int64)&(*p_TutorialImageLoadList)->m_Items[1];
    do
    {
      if ( v30 >= v29 )
        goto LABEL_18;
      if ( !v28 )
        goto LABEL_19;
      if ( v30 >= v28->max_length )
LABEL_18:
        sub_1B64AD4(CloseButton, v20);
      *(_DWORD *)(v31 + 4 * v30) = images->m_Items[v30 + 1];
      ++v30;
    }
    while ( (__int64)v30 < (int)v29 );
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMask((BaseDialog_o *)this, 0, 0LL);
  TutorialBigDialog__LoadImages(this, v32, v33);
  CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !CloseButton )
LABEL_19:
    sub_1B64ACC(CloseButton, v20);
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v34);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialBigDialog__OpenAssets(
        TutorialBigDialog_o *this,
        System_Int32_array *images,
        int32_t kind,
        System_Action_o *closeFunc,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Action_o *v16; // x23
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x1
  UnityEngine_GameObject_o *CloseButton; // x0
  TutorialBigDialog_c *v25; // x8
  UnityEngine_Transform_o *v26; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  Il2CppObject *Component_object; // x21
  EventDelegate_Callback_o *v30; // x22
  EventDelegate_o *v31; // x20
  int32_t v32; // w2
  int32_t v33; // w3
  __int64 v34; // x8
  _QWORD *v35; // x9
  __int64 klass_low; // x10
  __int64 v37; // x8
  System_Int32_array *v38; // x1
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x2

  if ( (byte_49FD1E6 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, images);
    sub_1B64870(&EventDelegate_Callback_TypeInfo, v9);
    sub_1B64870(&EventDelegate_TypeInfo, v10);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_UITouchPress___, v11);
    sub_1B64870(&Method_System_Collections_Generic_List_EventDelegate__Add__, v12);
    sub_1B64870(&Method_TutorialBigDialog__OpenAssets_b__46_0__, v13);
    sub_1B64870(&Method_TutorialBigDialog__OpenAssets_b__46_1__, v14);
    sub_1B64870(&TutorialBigDialog_TypeInfo, v15);
    byte_49FD1E6 = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&kind);
  v16 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_TutorialBigDialog__OpenAssets_b__46_0__, 0LL);
  this->fields.endOpenCallbackFunc = v16;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.endOpenCallbackFunc, (int32_t)v16, v17, v18);
  this->fields.endTurorialRequestFunc = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.endTurorialRequestFunc, 0, v19, v20);
  this->fields.closeCallbackFunc = closeFunc;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, (int32_t)closeFunc, v21, v22);
  CloseButton = this->fields.CloseButton;
  this->fields.configFlagId = 0;
  this->fields.sizeKind = kind;
  *(_OWORD *)&this->fields.flagId = xmmword_BA3770;
  if ( !CloseButton )
    goto LABEL_18;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0LL);
  v25 = TutorialBigDialog_TypeInfo;
  v26 = (UnityEngine_Transform_o *)CloseButton;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v25 = TutorialBigDialog_TypeInfo;
  }
  if ( !v26 )
    goto LABEL_18;
  UnityEngine_Transform__set_localPosition(v26, v25->static_fields->miniCloseButtonPosition, 0LL);
  this->fields.TutorialImageLoadList = images;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.TutorialImageLoadList, (int32_t)images, v27, v28);
  CloseButton = this->fields.TouchMask;
  this->fields.isButtonEnable = 0;
  if ( !CloseButton )
    goto LABEL_18;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       CloseButton,
                       (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
  v30 = (EventDelegate_Callback_o *)sub_1B64ABC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v30, (Il2CppObject *)this, Method_TutorialBigDialog__OpenAssets_b__46_1__, 0LL);
  v31 = (EventDelegate_o *)sub_1B64ABC(EventDelegate_TypeInfo);
  EventDelegate___ctor_46517468(v31, v30, 0LL);
  if ( !Component_object )
    goto LABEL_18;
  CloseButton = (UnityEngine_GameObject_o *)Component_object[2].klass;
  if ( !CloseButton )
    goto LABEL_18;
  v34 = *(_QWORD *)&CloseButton->fields.m_CachedPtr;
  v35 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++HIDWORD(CloseButton[1].klass);
  if ( !v34 )
    goto LABEL_18;
  klass_low = SLODWORD(CloseButton[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(v34 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)CloseButton,
      (Il2CppObject *)v31,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
  }
  else
  {
    v37 = v34 + 8 * klass_low;
    LODWORD(CloseButton[1].klass) = klass_low + 1;
    *(_QWORD *)(v37 + 32) = v31;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v37 + 32), (int32_t)v31, v32, v33);
  }
  BaseDialog__SetMask((BaseDialog_o *)this, 0, 0LL);
  TutorialBigDialog__LoadImages(this, v38, v39);
  CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !CloseButton )
LABEL_18:
    sub_1B64ACC(CloseButton, v23);
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v40);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialBigDialog__OpenByConfigId(
        TutorialBigDialog_o *this,
        System_String_array *images,
        int32_t configId,
        System_Action_o *closeFunc,
        System_Action_o *endOpenFunc,
        System_Action_o *endTurorialRequestFunc,
        const MethodInfo *method)
{
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x1
  UnityEngine_GameObject_o *CloseButton; // x0
  TutorialBigDialog_c *v21; // x8
  UnityEngine_Transform_o *v22; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_array *v25; // x1
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x2

  if ( (byte_49FD1E7 & 1) == 0 )
  {
    sub_1B64870(&TutorialBigDialog_TypeInfo, images);
    byte_49FD1E7 = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&configId);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.endOpenCallbackFunc, (int32_t)endOpenFunc, v13, v14);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.endTurorialRequestFunc,
    (int32_t)endTurorialRequestFunc,
    v15,
    v16);
  this->fields.closeCallbackFunc = closeFunc;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, (int32_t)closeFunc, v17, v18);
  CloseButton = this->fields.CloseButton;
  this->fields.configFlagId = configId;
  *(_OWORD *)&this->fields.flagId = xmmword_BA3770;
  this->fields.sizeKind = 1;
  if ( !CloseButton )
    goto LABEL_11;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0LL);
  v21 = TutorialBigDialog_TypeInfo;
  v22 = (UnityEngine_Transform_o *)CloseButton;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v21 = TutorialBigDialog_TypeInfo;
  }
  if ( !v22
    || (UnityEngine_Transform__set_localPosition(v22, v21->static_fields->baseCloseButtonPosition, 0LL),
        this->fields.assetsImageLoadList = images,
        sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.assetsImageLoadList, (int32_t)images, v23, v24),
        this->fields.isButtonEnable = 0,
        BaseDialog__SetMask((BaseDialog_o *)this, 0, 0LL),
        TutorialBigDialog__LoadImages_37039832(this, v25, v26),
        (CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_11:
    sub_1B64ACC(CloseButton, v19);
  }
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v27);
}


void __fastcall TutorialBigDialog__OpenWindow(TutorialBigDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_49FD1F2 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B64870(&Method_TutorialBigDialog_EndOpen__, v4);
    byte_49FD1F2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v6);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  v7 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_TutorialBigDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v7, 1, 0LL);
}


void __fastcall TutorialBigDialog__OpenWithAssets(
        TutorialBigDialog_o *this,
        System_String_array *images,
        System_Action_o *closeFunc,
        System_Action_o *endOpenFunc,
        System_Action_o *endTurorialRequestFunc,
        const MethodInfo *method)
{
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x1
  UnityEngine_GameObject_o *CloseButton; // x0
  TutorialBigDialog_c *v19; // x8
  UnityEngine_Transform_o *v20; // x21
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_array *v23; // x1
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x2

  if ( (byte_49FD1E5 & 1) == 0 )
  {
    sub_1B64870(&TutorialBigDialog_TypeInfo, images);
    byte_49FD1E5 = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, (const MethodInfo *)closeFunc);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.endOpenCallbackFunc, (int32_t)endOpenFunc, v11, v12);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.endTurorialRequestFunc,
    (int32_t)endTurorialRequestFunc,
    v13,
    v14);
  this->fields.closeCallbackFunc = closeFunc;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, (int32_t)closeFunc, v15, v16);
  CloseButton = this->fields.CloseButton;
  this->fields.configFlagId = 0;
  *(_OWORD *)&this->fields.flagId = xmmword_BA3770;
  this->fields.sizeKind = 1;
  if ( !CloseButton )
    goto LABEL_11;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0LL);
  v19 = TutorialBigDialog_TypeInfo;
  v20 = (UnityEngine_Transform_o *)CloseButton;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v19 = TutorialBigDialog_TypeInfo;
  }
  if ( !v20
    || (UnityEngine_Transform__set_localPosition(v20, v19->static_fields->baseCloseButtonPosition, 0LL),
        this->fields.assetsImageLoadList = images,
        sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.assetsImageLoadList, (int32_t)images, v21, v22),
        this->fields.isButtonEnable = 0,
        BaseDialog__SetMask((BaseDialog_o *)this, 0, 0LL),
        TutorialBigDialog__LoadImages_37039832(this, v23, v24),
        (CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_11:
    sub_1B64ACC(CloseButton, v17);
  }
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v25);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialBigDialog__Open_37038076(
        TutorialBigDialog_o *this,
        TutorialFlag_ImageId_array *images,
        int32_t flagId,
        System_Action_o *closeFunc,
        System_Action_o *endOpenFunc,
        System_Action_o *endTurorialRequestFunc,
        const MethodInfo *method)
{
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x1
  UnityEngine_GameObject_o *CloseButton; // x0
  TutorialBigDialog_c *v22; // x8
  UnityEngine_Transform_o *v23; // x21
  struct System_Int32_array *v24; // x0
  struct System_Int32_array **p_TutorialImageLoadList; // x21
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_Int32_array *v28; // x9
  unsigned __int64 v29; // x10
  unsigned __int64 v30; // x8
  __int64 v31; // x13
  System_Int32_array *v32; // x1
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x2

  if ( (byte_49FD1E2 & 1) == 0 )
  {
    sub_1B64870(&int___TypeInfo, images);
    sub_1B64870(&TutorialBigDialog_TypeInfo, v13);
    byte_49FD1E2 = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&flagId);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.endOpenCallbackFunc, (int32_t)endOpenFunc, v14, v15);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.endTurorialRequestFunc,
    (int32_t)endTurorialRequestFunc,
    v16,
    v17);
  this->fields.closeCallbackFunc = closeFunc;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, (int32_t)closeFunc, v18, v19);
  CloseButton = this->fields.CloseButton;
  this->fields.flagId = -1;
  this->fields.localFlagId = flagId;
  *(_QWORD *)&this->fields.eventFlagId = 0xFFFFFFFFLL;
  this->fields.configFlagId = 0;
  this->fields.sizeKind = 1;
  if ( !CloseButton )
    goto LABEL_19;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0LL);
  v22 = TutorialBigDialog_TypeInfo;
  v23 = (UnityEngine_Transform_o *)CloseButton;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v22 = TutorialBigDialog_TypeInfo;
  }
  if ( !v23 )
    goto LABEL_19;
  UnityEngine_Transform__set_localPosition(v23, v22->static_fields->baseCloseButtonPosition, 0LL);
  if ( !images )
    goto LABEL_19;
  v24 = (struct System_Int32_array *)sub_1B64918(int___TypeInfo, images->max_length);
  this->fields.TutorialImageLoadList = v24;
  p_TutorialImageLoadList = &this->fields.TutorialImageLoadList;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.TutorialImageLoadList, (int32_t)v24, v26, v27);
  if ( (int)*(_QWORD *)&images->max_length >= 1 )
  {
    v28 = *p_TutorialImageLoadList;
    v29 = (unsigned int)*(_QWORD *)&images->max_length;
    v30 = 0LL;
    v31 = (__int64)&(*p_TutorialImageLoadList)->m_Items[1];
    do
    {
      if ( v30 >= v29 )
        goto LABEL_18;
      if ( !v28 )
        goto LABEL_19;
      if ( v30 >= v28->max_length )
LABEL_18:
        sub_1B64AD4(CloseButton, v20);
      *(_DWORD *)(v31 + 4 * v30) = images->m_Items[v30 + 1];
      ++v30;
    }
    while ( (__int64)v30 < (int)v29 );
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMask((BaseDialog_o *)this, 0, 0LL);
  TutorialBigDialog__LoadImages(this, v32, v33);
  CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !CloseButton )
LABEL_19:
    sub_1B64ACC(CloseButton, v20);
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v34);
}


void __fastcall TutorialBigDialog__Open_37038572(
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
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x1
  UnityEngine_GameObject_o *CloseButton; // x0
  TutorialBigDialog_c *v24; // x8
  UnityEngine_Transform_o *v25; // x21
  int32_t v26; // w2
  int32_t v27; // w3
  System_Int32_array *v28; // x1
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x2

  if ( (byte_49FD1E3 & 1) == 0 )
  {
    sub_1B64870(&TutorialBigDialog_TypeInfo, images);
    byte_49FD1E3 = 1;
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
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.endOpenCallbackFunc, (int32_t)endOpenFunc, v16, v17);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.endTurorialRequestFunc,
    (int32_t)endTurorialRequestFunc,
    v18,
    v19);
  this->fields.closeCallbackFunc = closeFunc;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, (int32_t)closeFunc, v20, v21);
  CloseButton = this->fields.CloseButton;
  *(_QWORD *)&this->fields.flagId = -1LL;
  this->fields.eventFlagId = flagId;
  this->fields.eventId = eventId;
  this->fields.configFlagId = 0;
  this->fields.sizeKind = 1;
  if ( !CloseButton )
    goto LABEL_12;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0LL);
  v24 = TutorialBigDialog_TypeInfo;
  v25 = (UnityEngine_Transform_o *)CloseButton;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v24 = TutorialBigDialog_TypeInfo;
  }
  if ( !v25
    || (UnityEngine_Transform__set_localPosition(v25, v24->static_fields->baseCloseButtonPosition, 0LL),
        this->fields.TutorialImageLoadList = images,
        sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.TutorialImageLoadList, (int32_t)images, v26, v27),
        this->fields.isButtonEnable = 0,
        BaseDialog__SetMask((BaseDialog_o *)this, 0, 0LL),
        TutorialBigDialog__LoadImages(this, v28, v29),
        (CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_12:
    sub_1B64ACC(CloseButton, v22);
  }
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v30);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialBigDialog__Open_37038964(
        TutorialBigDialog_o *this,
        TutorialFlag_ImageId_array *images,
        int32_t flagId,
        int32_t eventId,
        System_Action_o *closeFunc,
        System_Action_o *endOpenFunc,
        System_Action_o *endTurorialRequestFunc,
        const MethodInfo *method)
{
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x1
  UnityEngine_GameObject_o *CloseButton; // x0
  TutorialBigDialog_c *v24; // x8
  UnityEngine_Transform_o *v25; // x21
  struct System_Int32_array *v26; // x0
  struct System_Int32_array **p_TutorialImageLoadList; // x21
  int32_t v28; // w2
  int32_t v29; // w3
  struct System_Int32_array *v30; // x9
  unsigned __int64 v31; // x10
  unsigned __int64 v32; // x8
  __int64 v33; // x13
  System_Int32_array *v34; // x1
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x2

  if ( (byte_49FD1E4 & 1) == 0 )
  {
    sub_1B64870(&int___TypeInfo, images);
    sub_1B64870(&TutorialBigDialog_TypeInfo, v15);
    byte_49FD1E4 = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&flagId);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.endOpenCallbackFunc, (int32_t)endOpenFunc, v16, v17);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.endTurorialRequestFunc,
    (int32_t)endTurorialRequestFunc,
    v18,
    v19);
  this->fields.closeCallbackFunc = closeFunc;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, (int32_t)closeFunc, v20, v21);
  CloseButton = this->fields.CloseButton;
  *(_QWORD *)&this->fields.flagId = -1LL;
  this->fields.eventFlagId = flagId;
  this->fields.eventId = eventId;
  this->fields.configFlagId = 0;
  this->fields.sizeKind = 1;
  if ( !CloseButton )
    goto LABEL_19;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0LL);
  v24 = TutorialBigDialog_TypeInfo;
  v25 = (UnityEngine_Transform_o *)CloseButton;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v24 = TutorialBigDialog_TypeInfo;
  }
  if ( !v25 )
    goto LABEL_19;
  UnityEngine_Transform__set_localPosition(v25, v24->static_fields->baseCloseButtonPosition, 0LL);
  if ( !images )
    goto LABEL_19;
  v26 = (struct System_Int32_array *)sub_1B64918(int___TypeInfo, images->max_length);
  this->fields.TutorialImageLoadList = v26;
  p_TutorialImageLoadList = &this->fields.TutorialImageLoadList;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.TutorialImageLoadList, (int32_t)v26, v28, v29);
  if ( (int)*(_QWORD *)&images->max_length >= 1 )
  {
    v30 = *p_TutorialImageLoadList;
    v31 = (unsigned int)*(_QWORD *)&images->max_length;
    v32 = 0LL;
    v33 = (__int64)&(*p_TutorialImageLoadList)->m_Items[1];
    do
    {
      if ( v32 >= v31 )
        goto LABEL_18;
      if ( !v30 )
        goto LABEL_19;
      if ( v32 >= v30->max_length )
LABEL_18:
        sub_1B64AD4(CloseButton, v22);
      *(_DWORD *)(v33 + 4 * v32) = images->m_Items[v32 + 1];
      ++v32;
    }
    while ( (__int64)v32 < (int)v31 );
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMask((BaseDialog_o *)this, 0, 0LL);
  TutorialBigDialog__LoadImages(this, v34, v35);
  CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !CloseButton )
LABEL_19:
    sub_1B64ACC(CloseButton, v22);
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v36);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialBigDialog__SetTouchMask(TutorialBigDialog_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_GameObject_o *TouchMask; // x0

  TouchMask = this->fields.TouchMask;
  if ( !TouchMask
    || (TouchMask = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(TouchMask, 0LL)) == 0LL
    || (TouchMask = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                  (UnityEngine_Transform_o *)TouchMask,
                                                  0LL)) == 0LL
    || (TouchMask = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)TouchMask, 0LL)) == 0LL )
  {
    sub_1B64ACC(TouchMask, isDisp);
  }
  UnityEngine_GameObject__SetActive(TouchMask, isDisp, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialBigDialog__UpdateButtons(TutorialBigDialog_o *this, bool isDisp, const MethodInfo *method)
{
  TutorialBigDialog_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x8
  UILabel_o *basePanel; // x20
  UILabel_o *v12; // x19

  v4 = this;
  if ( (byte_49FD1F4 & 1) == 0 )
  {
    sub_1B64870(&AndroidBackKeyManager_TypeInfo, isDisp);
    sub_1B64870(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____75736584, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__get_Count__, v6);
    sub_1B64870(&LocalizationManager_TypeInfo, v7);
    sub_1B64870(&StringLiteral_13382/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, v8);
    this = (TutorialBigDialog_o *)sub_1B64870(&StringLiteral_13383/*"TUTORIAL_IMAGE_DIALOG_PREV"*/, v9);
    byte_49FD1F4 = 1;
  }
  if ( !isDisp )
  {
    this = (TutorialBigDialog_o *)v4->fields.CloseButton;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (TutorialBigDialog_o *)v4->fields.NextButton;
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (TutorialBigDialog_o *)v4->fields.PrevButton;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
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
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (TutorialBigDialog_o *)v4->fields.NextButton;
    if ( !this )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    AndroidBackKeyManager__AddBackBtn(v4->fields.CloseButton, 0LL);
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (TutorialBigDialog_o *)v4->fields.NextButton;
    if ( !this )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    AndroidBackKeyManager__AddBackBtn(v4->fields.PrevButton, 0LL);
    this = (TutorialBigDialog_o *)v4->fields.NextButton;
    if ( !this )
      goto LABEL_34;
    this = (TutorialBigDialog_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !this )
      goto LABEL_34;
    this = (TutorialBigDialog_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                    (UnityEngine_Component_o *)this,
                                    1,
                                    (const MethodInfo_2E32C58 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____75736584);
    if ( !this )
      goto LABEL_34;
    if ( !LODWORD(this->fields.m_CancellationTokenSource) )
LABEL_35:
      sub_1B64AD4(this, isDisp);
    basePanel = (UILabel_o *)this->fields.basePanel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (TutorialBigDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13382/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, 0LL);
    if ( !basePanel )
LABEL_34:
      sub_1B64ACC(this, isDisp);
    UILabel__set_text(basePanel, (System_String_o *)this, 0LL);
  }
  this = (TutorialBigDialog_o *)v4->fields.PrevButton;
  if ( !this )
    goto LABEL_34;
  if ( v4->fields.CurrentIndex < 1 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    goto LABEL_33;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (TutorialBigDialog_o *)v4->fields.PrevButton;
  if ( !this )
    goto LABEL_34;
  this = (TutorialBigDialog_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_34;
  this = (TutorialBigDialog_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                  (UnityEngine_Component_o *)this,
                                  1,
                                  (const MethodInfo_2E32C58 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____75736584);
  if ( !this )
    goto LABEL_34;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_35;
  v12 = (UILabel_o *)this->fields.basePanel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (TutorialBigDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13383/*"TUTORIAL_IMAGE_DIALOG_PREV"*/, 0LL);
  if ( !v12 )
    goto LABEL_34;
  UILabel__set_text(v12, (System_String_o *)this, 0LL);
LABEL_33:
  AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialBigDialog__UpdatePage(TutorialBigDialog_o *this, int32_t dispIndex, const MethodInfo *method)
{
  int32_t v3; // w3
  long double v4; // q8
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t CurrentIndex; // w26
  struct UITexture_o **p_FadeInTarget; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  System_Collections_Generic_List_object__o *ImagePageList; // x0
  int size; // w8
  int v20; // w27
  int32_t v21; // w23
  UnityEngine_GameObject_o *v22; // x24
  int32_t v23; // w2
  int32_t v24; // w3
  long double v25; // q0
  System_Collections_Generic_List_object__o *v26; // x25
  System_Collections_Generic_List_object__c *klass; // x8
  bool v28; // w1
  UnityEngine_GameObject_o *gameObject; // x21
  TutorialBigDialog_c *v30; // x8
  UnityEngine_GameObject_o *v31; // x0
  UITweener_o *v32; // x20
  EventDelegate_Callback_o *v33; // x21

  if ( (byte_49FD1F3 & 1) == 0 )
  {
    sub_1B64870(&EventDelegate_Callback_TypeInfo, *(_QWORD *)&dispIndex);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_UITexture___, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__get_Item__, v9);
    sub_1B64870(&Method_TutorialBigDialog__UpdatePage_b__61_0__, v10);
    sub_1B64870(&TutorialBigDialog_TypeInfo, v11);
    byte_49FD1F3 = 1;
  }
  CurrentIndex = this->fields.CurrentIndex;
  this->fields.FadeInTarget = 0LL;
  p_FadeInTarget = &this->fields.FadeInTarget;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.FadeInTarget, 0, (int32_t)method, v3);
  this->fields.FadeOutTarget = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.FadeOutTarget, 0, v14, v15);
  ImagePageList = (System_Collections_Generic_List_object__o *)this->fields.ImagePageList;
  if ( !ImagePageList )
    goto LABEL_29;
  size = ImagePageList->fields._size;
  v20 = size - 1;
  if ( size >= 1 )
  {
    LODWORD(v4) = 1000593162;
    v21 = 0;
    while ( 1 )
    {
      ImagePageList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                     ImagePageList,
                                                                     v21,
                                                                     (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !ImagePageList )
        goto LABEL_29;
      v22 = (UnityEngine_GameObject_o *)ImagePageList;
      ImagePageList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                     (UnityEngine_GameObject_o *)ImagePageList,
                                                                     (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
      v26 = ImagePageList;
      if ( dispIndex == v21 )
      {
        if ( CurrentIndex == dispIndex )
        {
          if ( !ImagePageList )
            goto LABEL_29;
          klass = ImagePageList->klass;
          LODWORD(v25) = 1.0;
        }
        else
        {
          *p_FadeInTarget = (struct UITexture_o *)ImagePageList;
          sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.FadeInTarget, (int32_t)ImagePageList, v23, v24);
          if ( !v26 )
            goto LABEL_29;
          klass = v26->klass;
          ImagePageList = v26;
          v25 = v4;
        }
        ((void (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppMethodPointer, long double))klass->vtable._8_unknown.method)(
          ImagePageList,
          klass->vtable._9_unknown.methodPtr,
          v25);
      }
      else
      {
        v28 = 0;
        if ( v21 != this->fields.CurrentIndex || CurrentIndex == dispIndex )
          goto LABEL_18;
        this->fields.FadeOutTarget = (struct UITexture_o *)ImagePageList;
        sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.FadeOutTarget, (int32_t)ImagePageList, v23, v24);
      }
      v28 = 1;
LABEL_18:
      UnityEngine_GameObject__SetActive(v22, v28, 0LL);
      if ( v20 == v21 )
        break;
      ImagePageList = (System_Collections_Generic_List_object__o *)this->fields.ImagePageList;
      ++v21;
      if ( !ImagePageList )
        goto LABEL_29;
    }
  }
  this->fields.CurrentIndex = dispIndex;
  if ( CurrentIndex == dispIndex )
  {
    TutorialBigDialog__UpdateButtons(this, 1, v17);
    return;
  }
  ImagePageList = (System_Collections_Generic_List_object__o *)this->fields.FadeOutTarget;
  this->fields.IsFading = 1;
  if ( !ImagePageList )
    goto LABEL_29;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ImagePageList, 0LL);
  v30 = TutorialBigDialog_TypeInfo;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v30 = TutorialBigDialog_TypeInfo;
  }
  TweenAlpha__Begin(gameObject, v30->static_fields->FADE_TIME, 0.0, 0LL);
  ImagePageList = (System_Collections_Generic_List_object__o *)*p_FadeInTarget;
  if ( !*p_FadeInTarget
    || (v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ImagePageList, 0LL),
        v32 = (UITweener_o *)TweenAlpha__Begin(v31, TutorialBigDialog_TypeInfo->static_fields->FADE_TIME, 1.0, 0LL),
        v33 = (EventDelegate_Callback_o *)sub_1B64ABC(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(v33, (Il2CppObject *)this, Method_TutorialBigDialog__UpdatePage_b__61_0__, 0LL),
        !v32) )
  {
LABEL_29:
    sub_1B64ACC(ImagePageList, v16);
  }
  UITweener__SetOnFinished(v32, v33, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall TutorialBigDialog__WaitPurchase(
        TutorialBigDialog_o *this,
        int32_t CurrentIndex,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FD1F0 & 1) == 0 )
  {
    sub_1B64870(&TutorialBigDialog__WaitPurchase_d__58_TypeInfo, *(_QWORD *)&CurrentIndex);
    byte_49FD1F0 = 1;
  }
  v5 = sub_1B64ABC(TutorialBigDialog__WaitPurchase_d__58_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_DWORD *)(v5 + 40) = CurrentIndex;
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall TutorialBigDialog___LoadStartAssets_b__54_0(
        TutorialBigDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  TutorialBigDialog_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Action_o *v8; // x21
  const MethodInfo *v9; // x3
  struct System_String_array *assetsImageLoadList; // x8
  int v11; // w9
  Il2CppObject *Object_object__48356600; // x0
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2

  v4 = this;
  if ( (byte_49FD200 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, data);
    sub_1B64870(&Method_AssetData_GetObject_Texture2D____75714464, v5);
    sub_1B64870(&Method_TutorialBigDialog__LoadStartAssets_b__54_1__, v6);
    this = (TutorialBigDialog_o *)sub_1B64870(&StringLiteral_16188/*"_L_"*/, v7);
    byte_49FD200 = 1;
  }
  if ( !data )
    goto LABEL_12;
  this = (TutorialBigDialog_o *)AssetData__GetObjectNameList(data, 0LL);
  if ( !this )
    goto LABEL_12;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_13;
  this = (TutorialBigDialog_o *)this->fields.basePanel;
  if ( !this )
    goto LABEL_12;
  this = (TutorialBigDialog_o *)System_String__Contains(
                                  (System_String_o *)this,
                                  (System_String_o *)StringLiteral_16188/*"_L_"*/,
                                  0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v8 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)v4, Method_TutorialBigDialog__LoadStartAssets_b__54_1__, 0LL);
    TutorialBigDialog__AddScrollImg(v4, data, v8, v9);
    return;
  }
  assetsImageLoadList = v4->fields.assetsImageLoadList;
  if ( !assetsImageLoadList )
LABEL_12:
    sub_1B64ACC(this, data);
  v11 = v4->fields._loadIndex + 1;
  if ( v11 >= assetsImageLoadList->max_length )
LABEL_13:
    sub_1B64AD4(this, data);
  Object_object__48356600 = AssetData__GetObject_object__48356600(
                              data,
                              assetsImageLoadList->m_Items[v11],
                              (const MethodInfo_2E1DCF8 *)Method_AssetData_GetObject_Texture2D____75714464);
  TutorialBigDialog__AddImg(v4, (UnityEngine_Texture2D_o *)Object_object__48356600, v13);
  TutorialBigDialog__AfterLoad(v4, 2, v14);
}


void __fastcall TutorialBigDialog___LoadStartAssets_b__54_1(TutorialBigDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TutorialBigDialog__AfterLoad(this, 2, v2);
}


void __fastcall TutorialBigDialog___LoadStart_b__53_0(
        TutorialBigDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  TutorialBigDialog_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  System_Action_o *v9; // x21
  const MethodInfo *v10; // x3
  struct System_Int32_array *TutorialImageLoadList; // x8
  __int64 loadIndex; // x9
  System_String_o *TuorialImageName; // x0
  Il2CppObject *Object_object__48356600; // x0
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2

  v4 = this;
  if ( (byte_49FD1FF & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, data);
    sub_1B64870(&Method_AssetData_GetObject_Texture2D____75714464, v5);
    sub_1B64870(&Method_TutorialBigDialog__LoadStart_b__53_1__, v6);
    this = (TutorialBigDialog_o *)sub_1B64870(&StringLiteral_16188/*"_L_"*/, v7);
    byte_49FD1FF = 1;
  }
  if ( !data )
    goto LABEL_12;
  this = (TutorialBigDialog_o *)AssetData__GetObjectNameList(data, 0LL);
  if ( !this )
    goto LABEL_12;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_13;
  this = (TutorialBigDialog_o *)this->fields.basePanel;
  if ( !this )
    goto LABEL_12;
  this = (TutorialBigDialog_o *)System_String__Contains(
                                  (System_String_o *)this,
                                  (System_String_o *)StringLiteral_16188/*"_L_"*/,
                                  0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)v4, Method_TutorialBigDialog__LoadStart_b__53_1__, 0LL);
    TutorialBigDialog__AddScrollImg(v4, data, v9, v10);
    return;
  }
  TutorialImageLoadList = v4->fields.TutorialImageLoadList;
  if ( !TutorialImageLoadList )
LABEL_12:
    sub_1B64ACC(this, data);
  loadIndex = v4->fields._loadIndex;
  if ( (unsigned int)loadIndex >= TutorialImageLoadList->max_length )
LABEL_13:
    sub_1B64AD4(this, data);
  TuorialImageName = TutorialBigDialog__GetTuorialImageName(this, TutorialImageLoadList->m_Items[loadIndex + 1], v8);
  Object_object__48356600 = AssetData__GetObject_object__48356600(
                              data,
                              TuorialImageName,
                              (const MethodInfo_2E1DCF8 *)Method_AssetData_GetObject_Texture2D____75714464);
  TutorialBigDialog__AddImg(v4, (UnityEngine_Texture2D_o *)Object_object__48356600, v15);
  TutorialBigDialog__AfterLoad(v4, 1, v16);
}


void __fastcall TutorialBigDialog___LoadStart_b__53_1(TutorialBigDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TutorialBigDialog__AfterLoad(this, 1, v2);
}


void __fastcall TutorialBigDialog___OpenAssets_b__46_0(TutorialBigDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TutorialBigDialog__SetTouchMask(this, 1, v2);
}


void __fastcall TutorialBigDialog___UpdatePage_b__61_0(TutorialBigDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *FadeOutTarget; // x0
  const MethodInfo *v5; // x2

  TutorialBigDialog__refreshCurrent(this, method);
  FadeOutTarget = (UnityEngine_Component_o *)this->fields.FadeOutTarget;
  if ( !FadeOutTarget
    || (FadeOutTarget = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(FadeOutTarget, 0LL)) == 0LL )
  {
    sub_1B64ACC(FadeOutTarget, v3);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)FadeOutTarget, 0, 0LL);
  this->fields.IsFading = 0;
  TutorialBigDialog__UpdateButtons(this, 1, v5);
}


void __fastcall TutorialBigDialog__refreshCurrent(TutorialBigDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *ImagePageList; // x0
  int32_t CurrentIndex; // w1
  UnityEngine_Object_o *Component_object; // x19

  if ( (byte_49FD1F5 & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_TutorialImageLong___, method);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v5);
    byte_49FD1F5 = 1;
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
                                                                   (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !ImagePageList )
      goto LABEL_13;
    Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)ImagePageList,
                                                 (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_TutorialImageLong___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    ImagePageList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                   Component_object,
                                                                   0LL,
                                                                   0LL);
    if ( ((unsigned __int8)ImagePageList & 1) != 0 )
    {
      if ( Component_object )
      {
        ImagePageList = (System_Collections_Generic_List_object__o *)Component_object[2].monitor;
        if ( ImagePageList )
        {
          UIScrollView__ResetPosition((UIScrollView_o *)ImagePageList, 0LL);
          return;
        }
      }
LABEL_13:
      sub_1B64ACC(ImagePageList, method);
    }
  }
}


void __fastcall TutorialBigDialog__WaitPurchase_d__58___ctor(
        TutorialBigDialog__WaitPurchase_d__58_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TutorialBigDialog__WaitPurchase_d__58__MoveNext(
        TutorialBigDialog__WaitPurchase_d__58_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TutorialBigDialog__WaitPurchase_d__58_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t _1__state; // w8
  TutorialBigDialog___c_c *v9; // x0
  System_Func_bool__o *_9__58_0; // x20
  Il2CppObject *v11; // x21
  struct TutorialBigDialog___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  UnityEngine_WaitUntil_o *v15; // x21
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v17; // w2
  int32_t v18; // w3
  bool result; // w0
  TutorialBigDialog_o *_4__this; // x20

  v3 = this;
  if ( (byte_49FD204 & 1) == 0 )
  {
    sub_1B64870(&System_Func_bool__TypeInfo, method);
    sub_1B64870(&Method_TutorialBigDialog___c__WaitPurchase_b__58_0__, v4);
    sub_1B64870(&TutorialBigDialog___c_TypeInfo, v5);
    sub_1B64870(&UnityEngine_WaitUntil_TypeInfo, v6);
    this = (TutorialBigDialog__WaitPurchase_d__58_o *)sub_1B64870(&StringLiteral_9960/*"OpenWindow"*/, v7);
    byte_49FD204 = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v3->fields.__4__this;
    v3->fields.__1__state = -1;
    if ( !_4__this )
      sub_1B64ACC(this, method);
    TutorialBigDialog__UpdatePage(_4__this, v3->fields.CurrentIndex, v2);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)_4__this,
      (System_String_o *)StringLiteral_9960/*"OpenWindow"*/,
      0.3,
      0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  v3->fields.__1__state = -1;
  v9 = TutorialBigDialog___c_TypeInfo;
  if ( !TutorialBigDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog___c_TypeInfo);
    v9 = TutorialBigDialog___c_TypeInfo;
  }
  _9__58_0 = v9->static_fields->__9__58_0;
  if ( !_9__58_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = TutorialBigDialog___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__58_0 = (System_Func_bool__o *)sub_1B64ABC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(_9__58_0, v11, Method_TutorialBigDialog___c__WaitPurchase_b__58_0__, 0LL);
    static_fields = TutorialBigDialog___c_TypeInfo->static_fields;
    static_fields->__9__58_0 = _9__58_0;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__58_0, (int32_t)_9__58_0, v13, v14);
  }
  v15 = (UnityEngine_WaitUntil_o *)sub_1B64ABC(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v15, _9__58_0, 0LL);
  v3->fields.__2__current = (Il2CppObject *)v15;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
  sub_1B64814(p__2__current, (int32_t)v15, v17, v18);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
  return result;
}


Il2CppObject *__fastcall TutorialBigDialog__WaitPurchase_d__58__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TutorialBigDialog__WaitPurchase_d__58_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TutorialBigDialog__WaitPurchase_d__58__System_Collections_IEnumerator_Reset(
        TutorialBigDialog__WaitPurchase_d__58_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B64884(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B64ABC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B64884(&Method_TutorialBigDialog__WaitPurchase_d__58_System_Collections_IEnumerator_Reset__);
  sub_1B64998(v3, v4);
}


Il2CppObject *__fastcall TutorialBigDialog__WaitPurchase_d__58__System_Collections_IEnumerator_get_Current(
        TutorialBigDialog__WaitPurchase_d__58_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TutorialBigDialog__WaitPurchase_d__58__System_IDisposable_Dispose(
        TutorialBigDialog__WaitPurchase_d__58_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TutorialBigDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_49FD201 & 1) == 0 )
  {
    sub_1B64870(&TutorialBigDialog___c_TypeInfo, v1);
    byte_49FD201 = 1;
  }
  v2 = (Il2CppObject *)sub_1B64ABC(TutorialBigDialog___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TutorialBigDialog___c_TypeInfo->static_fields->__9 = (struct TutorialBigDialog___c_o *)v2;
  sub_1B64814((ServantStatusBattleListViewItem_o *)TutorialBigDialog___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall TutorialBigDialog___c___ctor(TutorialBigDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall TutorialBigDialog___c___WaitPurchase_b__58_0(TutorialBigDialog___c_o *this, const MethodInfo *method)
{
  PurchaseBehaviour_c *v2; // x0

  if ( (byte_49FD202 & 1) == 0 )
  {
    sub_1B64870(&PurchaseBehaviour_TypeInfo, method);
    byte_49FD202 = 1;
  }
  v2 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    v2 = PurchaseBehaviour_TypeInfo;
  }
  return !v2->static_fields->isOpenPurchaseDialogEvent;
}


void __fastcall TutorialBigDialog___c__DisplayClass56_0___ctor(
        TutorialBigDialog___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TutorialBigDialog___c__DisplayClass56_0___AddScrollImg_b__0(
        TutorialBigDialog___c__DisplayClass56_0_o *this,
        AssetData_o *aData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  AssetData_o *v4; // x20
  TutorialBigDialog___c__DisplayClass56_0_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct TutorialBigDialog_o *_4__this; // x8
  UnityEngine_Shader_o *v12; // x22
  UnityEngine_Material_o *v13; // x21
  struct TutorialImageLong_o *comp; // x8
  const MethodInfo *v15; // x2
  struct TutorialBigDialog_o *v16; // x23
  struct TutorialBigDialog_o *v17; // x8
  Il2CppObject *Object_object__48356600; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  struct TutorialBigDialog_o *v21; // x8
  struct TutorialBigDialog_o *v22; // x8
  _QWORD *v23; // x9
  __int64 comp_low; // x10
  TutorialBigDialog_c **v25; // x8

  v4 = aData;
  v5 = this;
  if ( (byte_49FD203 & 1) == 0 )
  {
    sub_1B64870(&Method_AssetData_GetObject_Texture2D____75714464, aData);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__Add__, v6);
    sub_1B64870(&UnityEngine_Material_TypeInfo, v7);
    sub_1B64870(&TutorialBigDialog_TypeInfo, v8);
    sub_1B64870(&StringLiteral_4952/*"Custom/SpriteWithMask"*/, v9);
    this = (TutorialBigDialog___c__DisplayClass56_0_o *)sub_1B64870(&StringLiteral_16200/*"_MaskTex"*/, v10);
    byte_49FD203 = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  _4__this->fields.baseTexAssetData = v4;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&_4__this->fields.baseTexAssetData, (int32_t)v4, (int32_t)method, v3);
  v12 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4952/*"Custom/SpriteWithMask"*/, 0LL);
  v13 = (UnityEngine_Material_o *)sub_1B64ABC(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v13, v12, 0LL);
  comp = v5->fields.comp;
  if ( !comp )
    goto LABEL_20;
  this = (TutorialBigDialog___c__DisplayClass56_0_o *)comp->fields.BaseImage;
  if ( !this )
    goto LABEL_20;
  ((void (__fastcall *)(TutorialBigDialog___c__DisplayClass56_0_o *, UnityEngine_Material_o *, Il2CppMethodPointer))this->klass[1].vtable._2_GetHashCode.method)(
    this,
    v13,
    this->klass[1].vtable._3_ToString.methodPtr);
  this = (TutorialBigDialog___c__DisplayClass56_0_o *)TutorialBigDialog_TypeInfo;
  v16 = v5->fields.__4__this;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
  if ( !v16 )
    goto LABEL_20;
  this = (TutorialBigDialog___c__DisplayClass56_0_o *)TutorialBigDialog__GetTuorialImageName(
                                                        (TutorialBigDialog_o *)this,
                                                        TutorialBigDialog_TypeInfo->static_fields->baseImgNo,
                                                        v15);
  if ( !v4 )
    goto LABEL_20;
  this = (TutorialBigDialog___c__DisplayClass56_0_o *)AssetData__GetObject_object__48356600(
                                                        v4,
                                                        (System_String_o *)this,
                                                        (const MethodInfo_2E1DCF8 *)Method_AssetData_GetObject_Texture2D____75714464);
  if ( !v13 )
    goto LABEL_20;
  UnityEngine_Material__set_mainTexture(v13, (UnityEngine_Texture_o *)this, 0LL);
  v17 = v5->fields.__4__this;
  if ( !v17 )
    goto LABEL_20;
  this = (TutorialBigDialog___c__DisplayClass56_0_o *)v17->fields.alphaTexAssetData;
  if ( !this )
    goto LABEL_20;
  Object_object__48356600 = AssetData__GetObject_object__48356600(
                              (AssetData_o *)this,
                              TutorialBigDialog_TypeInfo->static_fields->alphaImgName,
                              (const MethodInfo_2E1DCF8 *)Method_AssetData_GetObject_Texture2D____75714464);
  UnityEngine_Material__SetTexture(
    v13,
    (System_String_o *)StringLiteral_16200/*"_MaskTex"*/,
    (UnityEngine_Texture_o *)Object_object__48356600,
    0LL);
  v21 = v5->fields.__4__this;
  if ( !v21
    || (this = (TutorialBigDialog___c__DisplayClass56_0_o *)v21->fields.ImagePageList) == 0LL
    || (aData = (AssetData_o *)v5->fields.obj,
        v22 = this->fields.__4__this,
        v23 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++HIDWORD(this->fields.comp),
        !v22) )
  {
LABEL_20:
    sub_1B64ACC(this, aData);
  }
  comp_low = SLODWORD(this->fields.comp);
  if ( (unsigned int)comp_low >= LODWORD(v22->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)aData,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &v22->klass + comp_low;
    LODWORD(this->fields.comp) = comp_low + 1;
    v25[4] = (TutorialBigDialog_c *)aData;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)aData, v19, v20);
  }
  ActionExtensions__Call(v5->fields.callback, 0LL);
}


void __fastcall TutorialBigDialog___c__DisplayClass59_0___ctor(
        TutorialBigDialog___c__DisplayClass59_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TutorialBigDialog___c__DisplayClass59_0___LoadAlpha_b__0(
        TutorialBigDialog___c__DisplayClass59_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct TutorialBigDialog_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64ACC(this, data);
  _4__this->fields.alphaTexAssetData = data;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&_4__this->fields.alphaTexAssetData,
    (int32_t)data,
    (int32_t)method,
    v3);
  ActionExtensions__Call(this->fields.callback, 0LL);
}