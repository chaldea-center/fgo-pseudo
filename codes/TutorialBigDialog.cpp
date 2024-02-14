void __fastcall TutorialBigDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct TutorialBigDialog_StaticFields *static_fields; // x0
  System_Int32_array **v13; // x1
  struct TutorialBigDialog_StaticFields *v14; // x0
  System_Int32_array **v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct TutorialBigDialog_StaticFields *v22; // x0
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct TutorialBigDialog_StaticFields *v30; // x0
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  TutorialBigDialog_c *v38; // x8
  struct TutorialBigDialog_StaticFields *v39; // x9
  struct TutorialBigDialog_StaticFields *v40; // x8

  if ( (byte_421689D & 1) == 0 )
  {
    sub_B0D8A4(&TutorialBigDialog_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_14622/*"Tutorial/tutorial_alpha"*/, v8);
    sub_B0D8A4(&StringLiteral_17647/*"combine_tutorial_alpha"*/, v9);
    sub_B0D8A4(&StringLiteral_14620/*"Tutorial/combine_tutorial_alpha"*/, v10);
    sub_B0D8A4(&StringLiteral_22904/*"tutorial_alpha"*/, v11);
    byte_421689D = 1;
  }
  TutorialBigDialog_TypeInfo->static_fields->FADE_TIME = 0.3;
  static_fields = TutorialBigDialog_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_14622/*"Tutorial/tutorial_alpha"*/;
  static_fields->alphaImgPath = (struct System_String_o *)StringLiteral_14622/*"Tutorial/tutorial_alpha"*/;
  sub_B0D840((BattleServantConfConponent_o *)&static_fields->alphaImgPath, v13, v2, v3, v4, v5, v6, v7);
  v14 = TutorialBigDialog_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_22904/*"tutorial_alpha"*/;
  v14->alphaImgName = (struct System_String_o *)StringLiteral_22904/*"tutorial_alpha"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v14->alphaImgName, v15, v16, v17, v18, v19, v20, v21);
  v22 = TutorialBigDialog_TypeInfo->static_fields;
  v23 = (System_Int32_array **)StringLiteral_14620/*"Tutorial/combine_tutorial_alpha"*/;
  v22->alphaMiniImgPath = (struct System_String_o *)StringLiteral_14620/*"Tutorial/combine_tutorial_alpha"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v22->alphaMiniImgPath, v23, v24, v25, v26, v27, v28, v29);
  v30 = TutorialBigDialog_TypeInfo->static_fields;
  v31 = (System_Int32_array **)StringLiteral_17647/*"combine_tutorial_alpha"*/;
  v30->alphaMiniImgName = (struct System_String_o *)StringLiteral_17647/*"combine_tutorial_alpha"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v30->alphaMiniImgName, v31, v32, v33, v34, v35, v36, v37);
  v38 = TutorialBigDialog_TypeInfo;
  TutorialBigDialog_TypeInfo->static_fields->baseImgNo = 6;
  v38->static_fields->baseWidth = 900;
  v39 = v38->static_fields;
  *(_QWORD *)&v39->baseCloseButtonPosition.fields.x = 0x4382800043F28000LL;
  v39->baseCloseButtonPosition.fields.z = 0.0;
  v40 = v38->static_fields;
  *(_QWORD *)&v40->miniCloseButtonPosition.fields.x = 0x4362000043BD0000LL;
  v40->miniCloseButtonPosition.fields.z = 0.0;
}


void __fastcall TutorialBigDialog___ctor(TutorialBigDialog_o *this, const MethodInfo *method)
{
  if ( (byte_421689C & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    byte_421689C = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  struct UnityEngine_GameObject_o *TutorialImagePrefab; // x20
  UnityEngine_Object_o *v16; // x20
  System_String_o *v17; // x0
  System_String_o *gameObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x23
  int32_t layer; // w22
  UnityEngine_Shader_o *v21; // x24
  __int64 v22; // x1
  __int64 v23; // x2
  UnityEngine_Material_o *v24; // x22
  TutorialBigDialog_c *v25; // x0
  System_String_o **p_alphaMiniImgName; // x8
  UnityEngine_Texture_o *Object_WarBoardWaitTimeSetting; // x0
  UnityEngine_Transform_o *v28; // x21
  UnityEngine_Transform_o *transform; // x21
  int v30; // s0
  UnityEngine_Transform_o *v33; // x21
  int v34; // s0

  if ( (byte_421688D & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_Texture2D____67951464, tex);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UITexture___, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Add__, v6);
    sub_B0D8A4(&UnityEngine_Material_TypeInfo, v7);
    sub_B0D8A4(&NGUITools_TypeInfo, v8);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    sub_B0D8A4(&TutorialBigDialog_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_4552/*"Custom/SpriteWithMask"*/, v12);
    sub_B0D8A4(&StringLiteral_7519/*"Image"*/, v13);
    sub_B0D8A4(&StringLiteral_16063/*"_MaskTex"*/, v14);
    byte_421688D = 1;
  }
  TutorialImagePrefab = this->fields.TutorialImagePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v16 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                  (UnityEngine_UI_Dropdown_DropdownItem_o *)TutorialImagePrefab,
                                  (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v17 = System_Int32__ToString((int)this + 240, 0LL);
  gameObject = System_String__Concat_43849904((System_String_o *)StringLiteral_7519/*"Image"*/, v17, 0LL);
  if ( !v16 )
    goto LABEL_29;
  UnityEngine_Object__set_name(v16, gameObject, 0LL);
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)v16,
                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_29;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)gameObject, 0LL);
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__SetLayer((UnityEngine_GameObject_o *)v16, layer, 0LL);
  v21 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4552/*"Custom/SpriteWithMask"*/, 0LL);
  v24 = (UnityEngine_Material_o *)sub_B0D974(UnityEngine_Material_TypeInfo, v22, v23);
  UnityEngine_Material___ctor(v24, v21, 0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_29;
  gameObject = (System_String_o *)((__int64 (__fastcall *)(srcLineSprite_o *, UnityEngine_Material_o *, Il2CppMethodPointer))Component_srcLineSprite->klass[1].vtable._2_GetHashCode.method)(
                                    Component_srcLineSprite,
                                    v24,
                                    Component_srcLineSprite->klass[1].vtable._3_ToString.methodPtr);
  if ( !v24 )
    goto LABEL_29;
  UnityEngine_Material__set_mainTexture(v24, (UnityEngine_Texture_o *)tex, 0LL);
  v25 = TutorialBigDialog_TypeInfo;
  if ( this->fields.sizeKind == 2 )
  {
    if ( (WORD1(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
      v25 = TutorialBigDialog_TypeInfo;
    }
    p_alphaMiniImgName = &v25->static_fields->alphaMiniImgName;
  }
  else
  {
    if ( (WORD1(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
      v25 = TutorialBigDialog_TypeInfo;
    }
    p_alphaMiniImgName = &v25->static_fields->alphaImgName;
  }
  gameObject = (System_String_o *)this->fields.alphaTexAssetData;
  if ( !gameObject )
    goto LABEL_29;
  Object_WarBoardWaitTimeSetting = (UnityEngine_Texture_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                              (AssetData_o *)gameObject,
                                                              *p_alphaMiniImgName,
                                                              (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_Texture2D____67951464);
  UnityEngine_Material__SetTexture(v24, (System_String_o *)StringLiteral_16063/*"_MaskTex"*/, Object_WarBoardWaitTimeSetting, 0LL);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v16, 0, 0LL);
  gameObject = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v16, 0LL);
  if ( !this->fields.ImageRoot )
    goto LABEL_29;
  v28 = (UnityEngine_Transform_o *)gameObject;
  gameObject = (System_String_o *)UnityEngine_GameObject__get_transform(this->fields.ImageRoot, 0LL);
  if ( !v28 )
    goto LABEL_29;
  UnityEngine_Transform__set_parent(v28, (UnityEngine_Transform_o *)gameObject, 0LL);
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v16, 0LL);
  *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v30, 0LL),
        v33 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v16, 0LL),
        *(UnityEngine_Vector3_o *)&v34 = UnityEngine_Vector3__get_one(0LL),
        !v33)
    || (UnityEngine_Transform__set_localScale(v33, *(UnityEngine_Vector3_o *)&v34, 0LL),
        (gameObject = (System_String_o *)this->fields.ImagePageList) == 0LL) )
  {
LABEL_29:
    sub_B0D97C(gameObject);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)gameObject,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v21; // x19
  __int64 ObjectNameList; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  int v35; // w8
  __int64 v36; // x24
  unsigned int v37; // w27
  UnityEngine_Texture_o *v38; // x25
  UnityEngine_Texture_o *v39; // x20
  __int64 v40; // x21
  System_String_o **v41; // x21
  __int64 v42; // t1
  char v43; // w26
  const MethodInfo *v44; // x2
  UnityEngine_Texture_o *v45; // x23
  UnityEngine_UI_Dropdown_DropdownItem_o *TutorialImageLongPrefab; // x22
  System_Int32_array **v47; // x0
  __int64 *v48; // x22
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  UnityEngine_Object_o *v55; // x24
  System_String_o *v56; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  __int64 v58; // x24
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  UnityEngine_GameObject_o *v65; // x26
  int32_t layer; // w27
  UnityEngine_Shader_o *v67; // x27
  __int64 v68; // x1
  __int64 v69; // x2
  UnityEngine_Material_o *v70; // x26
  int klass_high; // w21
  UIWidget_o *v72; // x25
  UITexture_o *v73; // x25
  int v74; // w26
  int v75; // w27
  int32_t baseWidth; // s8
  int v77; // w28
  int v78; // w0
  float v79; // s4
  float v80; // s5
  float v81; // s6
  float v82; // s7
  UnityEngine_Transform_o *v83; // x21
  UnityEngine_Transform_o *transform; // x21
  int v85; // s0
  UnityEngine_Transform_o *v88; // x21
  int v89; // s0
  __int64 v92; // x1
  __int64 v93; // x2
  AssetLoader_LoadEndDataHandler_o *v94; // x21
  const MethodInfo *v95; // x2
  TutorialBigDialog_c *v96; // x0
  System_String_o *TuorialImagePath; // x19
  __int64 v98; // x0
  TutorialBigDialog_o *v99; // [xsp+8h] [xbp-78h]
  MethodInfo methoda; // [xsp+10h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v101; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v102; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v103; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v104; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_421688E & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_Texture2D____67951464, data);
    sub_B0D8A4(&AssetManager_TypeInfo, v7);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_TutorialImageLong___, v8);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_B0D8A4(&UnityEngine_Material_TypeInfo, v10);
    sub_B0D8A4(&NGUITools_TypeInfo, v11);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v13);
    sub_B0D8A4(&TutorialBigDialog_TypeInfo, v14);
    sub_B0D8A4(&Method_TutorialBigDialog___c__DisplayClass56_0__AddScrollImg_b__0__, v15);
    sub_B0D8A4(&TutorialBigDialog___c__DisplayClass56_0_TypeInfo, v16);
    sub_B0D8A4(&StringLiteral_16362/*"alpha"*/, v17);
    sub_B0D8A4(&StringLiteral_4552/*"Custom/SpriteWithMask"*/, v18);
    sub_B0D8A4(&StringLiteral_7519/*"Image"*/, v19);
    sub_B0D8A4(&StringLiteral_16063/*"_MaskTex"*/, v20);
    byte_421688E = 1;
  }
  v21 = sub_B0D974(TutorialBigDialog___c__DisplayClass56_0_TypeInfo, data, callback);
  TutorialBigDialog___c__DisplayClass56_0___ctor((TutorialBigDialog___c__DisplayClass56_0_o *)v21, 0LL);
  if ( !v21 )
    goto LABEL_63;
  *(_QWORD *)(v21 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)this, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v21 + 40) = callback;
  sub_B0D840((BattleServantConfConponent_o *)(v21 + 40), (System_Int32_array **)callback, v29, v30, v31, v32, v33, v34);
  if ( !data )
    goto LABEL_63;
  ObjectNameList = (__int64)AssetData__GetObjectNameList(data, 0LL);
  if ( !ObjectNameList )
    goto LABEL_63;
  v99 = this;
  v35 = *(_DWORD *)(ObjectNameList + 24);
  v36 = ObjectNameList;
  if ( v35 < 1 )
  {
    v39 = 0LL;
    v45 = 0LL;
    HIDWORD(methoda.klass) = 0;
  }
  else
  {
    HIDWORD(methoda.klass) = 0;
    v37 = 0;
    v38 = 0LL;
    v39 = 0LL;
    do
    {
      if ( v37 >= v35 )
        goto LABEL_62;
      v40 = v36 + 8LL * (int)v37;
      v42 = *(_QWORD *)(v40 + 32);
      v41 = (System_String_o **)(v40 + 32);
      ObjectNameList = v42;
      if ( !v42 )
        goto LABEL_63;
      ObjectNameList = System_String__Contains(
                         (System_String_o *)ObjectNameList,
                         (System_String_o *)StringLiteral_16362/*"alpha"*/,
                         0LL);
      if ( v37 >= *(_DWORD *)(v36 + 24) )
      {
LABEL_62:
        v98 = sub_B0D9A8(ObjectNameList);
        sub_B0D948(v98, 0LL);
      }
      v43 = ObjectNameList;
      ObjectNameList = (__int64)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                  data,
                                  *v41,
                                  (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_Texture2D____67951464);
      v45 = (UnityEngine_Texture_o *)ObjectNameList;
      if ( (v43 & 1) == 0 )
      {
        if ( v37 >= *(_DWORD *)(v36 + 24) )
          goto LABEL_62;
        v39 = (UnityEngine_Texture_o *)ObjectNameList;
        ObjectNameList = TutorialBigDialog__GetScrollHeightWithName((TutorialBigDialog_o *)ObjectNameList, *v41, v44);
        v45 = v38;
        HIDWORD(methoda.klass) = ObjectNameList;
      }
      v35 = *(_DWORD *)(v36 + 24);
      ++v37;
      v38 = v45;
    }
    while ( (int)v37 < v35 );
  }
  TutorialImageLongPrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)v99->fields.TutorialImageLongPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v47 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                 TutorialImageLongPrefab,
                                 (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  *(_QWORD *)(v21 + 32) = v47;
  v48 = (__int64 *)(v21 + 32);
  sub_B0D840((BattleServantConfConponent_o *)(v21 + 32), v47, v49, v50, v51, v52, v53, v54);
  v55 = *(UnityEngine_Object_o **)(v21 + 32);
  v56 = System_Int32__ToString((int)v99 + 240, 0LL);
  ObjectNameList = (__int64)System_String__Concat_43849904((System_String_o *)StringLiteral_7519/*"Image"*/, v56, 0LL);
  if ( !v55 )
    goto LABEL_63;
  UnityEngine_Object__set_name(v55, (System_String_o *)ObjectNameList, 0LL);
  ObjectNameList = *v48;
  if ( !*v48 )
    goto LABEL_63;
  Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)ObjectNameList,
                                                     (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_TutorialImageLong___);
  *(_QWORD *)(v21 + 24) = Component_srcLineSprite;
  v58 = v21 + 24;
  sub_B0D840((BattleServantConfConponent_o *)(v21 + 24), Component_srcLineSprite, v59, v60, v61, v62, v63, v64);
  v65 = *(UnityEngine_GameObject_o **)(v21 + 32);
  ObjectNameList = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v99, 0LL);
  if ( !ObjectNameList )
    goto LABEL_63;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)ObjectNameList, 0LL);
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__SetLayer(v65, layer, 0LL);
  v67 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4552/*"Custom/SpriteWithMask"*/, 0LL);
  v70 = (UnityEngine_Material_o *)sub_B0D974(UnityEngine_Material_TypeInfo, v68, v69);
  UnityEngine_Material___ctor(v70, v67, 0LL);
  if ( !*(_QWORD *)v58 )
    goto LABEL_63;
  ObjectNameList = *(_QWORD *)(*(_QWORD *)v58 + 32LL);
  if ( !ObjectNameList )
    goto LABEL_63;
  ObjectNameList = (*(__int64 (__fastcall **)(__int64, UnityEngine_Material_o *, _QWORD))(*(_QWORD *)ObjectNameList
                                                                                        + 712LL))(
                     ObjectNameList,
                     v70,
                     *(_QWORD *)(*(_QWORD *)ObjectNameList + 720LL));
  if ( !v70 )
    goto LABEL_63;
  UnityEngine_Material__set_mainTexture(v70, v39, 0LL);
  UnityEngine_Material__SetTexture(v70, (System_String_o *)StringLiteral_16063/*"_MaskTex"*/, v45, 0LL);
  if ( !*(_QWORD *)v58 )
    goto LABEL_63;
  ObjectNameList = *(_QWORD *)(*(_QWORD *)v58 + 32LL);
  klass_high = HIDWORD(methoda.klass);
  if ( !ObjectNameList )
    goto LABEL_63;
  UIWidget__set_height((UIWidget_o *)ObjectNameList, SHIDWORD(methoda.klass), 0LL);
  if ( !*(_QWORD *)v58 )
    goto LABEL_63;
  v72 = *(UIWidget_o **)(*(_QWORD *)v58 + 32LL);
  ObjectNameList = (__int64)TutorialBigDialog_TypeInfo;
  if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
  }
  if ( !v72 )
    goto LABEL_63;
  UIWidget__set_width(v72, TutorialBigDialog_TypeInfo->static_fields->baseWidth, 0LL);
  if ( !*(_QWORD *)v58 )
    goto LABEL_63;
  if ( !v39 )
    goto LABEL_63;
  v73 = *(UITexture_o **)(*(_QWORD *)v58 + 32LL);
  v74 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v39->klass->vtable._6_get_height.method)(
          v39,
          v39->klass->vtable._7_set_height.methodPtr);
  v75 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v39->klass->vtable._6_get_height.method)(
          v39,
          v39->klass->vtable._7_set_height.methodPtr);
  baseWidth = TutorialBigDialog_TypeInfo->static_fields->baseWidth;
  v77 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v39->klass->vtable._4_get_width.method)(
          v39,
          v39->klass->vtable._5_set_width.methodPtr);
  v78 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v39->klass->vtable._6_get_height.method)(
          v39,
          v39->klass->vtable._7_set_height.methodPtr);
  v79 = (float)(v74 - HIDWORD(methoda.klass));
  v103.fields.m_Width = (float)baseWidth / (float)v77;
  v103.fields.m_YMin = v79 / (float)v75;
  v103.fields.m_Height = (float)SHIDWORD(methoda.klass) / (float)v78;
  v103.fields.m_XMin = 0.0;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Rect___ctor(v103, v79, v80, v81, v82, &methoda);
  if ( !v73 )
    goto LABEL_63;
  *(_QWORD *)&v104.fields.m_XMin = methoda.methodPointer;
  *(_QWORD *)&v104.fields.m_Width = methoda.invoker_method;
  UITexture__set_uvRect(v73, v104, 0LL);
  if ( !*(_QWORD *)v58 )
    goto LABEL_63;
  ObjectNameList = *(_QWORD *)(*(_QWORD *)v58 + 40LL);
  if ( !ObjectNameList )
    goto LABEL_63;
  v101.fields.z = 1.0;
  v101.fields.y = (float)klass_high;
  v101.fields.x = (float)TutorialBigDialog_TypeInfo->static_fields->baseWidth;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)ObjectNameList, v101, 0LL);
  if ( !*(_QWORD *)v58 )
    goto LABEL_63;
  ObjectNameList = *(_QWORD *)(*(_QWORD *)v58 + 40LL);
  if ( !ObjectNameList )
    goto LABEL_63;
  v102.fields.y = (float)-klass_high * 0.5;
  v102.fields.x = 0.0;
  v102.fields.z = 0.0;
  UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)ObjectNameList, v102, 0LL);
  if ( !*(_QWORD *)v58 )
    goto LABEL_63;
  ObjectNameList = *(_QWORD *)(*(_QWORD *)v58 + 48LL);
  if ( !ObjectNameList )
    goto LABEL_63;
  UIScrollView__ResetPosition((UIScrollView_o *)ObjectNameList, 0LL);
  ObjectNameList = *v48;
  if ( !*v48 )
    goto LABEL_63;
  ObjectNameList = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)ObjectNameList, 0LL);
  if ( !v99->fields.ImageRoot )
    goto LABEL_63;
  v83 = (UnityEngine_Transform_o *)ObjectNameList;
  ObjectNameList = (__int64)UnityEngine_GameObject__get_transform(v99->fields.ImageRoot, 0LL);
  if ( !v83 )
    goto LABEL_63;
  UnityEngine_Transform__set_parent(v83, (UnityEngine_Transform_o *)ObjectNameList, 0LL);
  ObjectNameList = *v48;
  if ( !*v48 )
    goto LABEL_63;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)ObjectNameList, 0LL);
  *(UnityEngine_Vector3_o *)&v85 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_63;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v85, 0LL);
  ObjectNameList = *v48;
  if ( !*v48 )
    goto LABEL_63;
  v88 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)ObjectNameList, 0LL);
  *(UnityEngine_Vector3_o *)&v89 = UnityEngine_Vector3__get_one(0LL);
  if ( !v88 )
    goto LABEL_63;
  UnityEngine_Transform__set_localScale(v88, *(UnityEngine_Vector3_o *)&v89, 0LL);
  v94 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v92, v93);
  AssetLoader_LoadEndDataHandler___ctor(
    v94,
    (Il2CppObject *)v21,
    Method_TutorialBigDialog___c__DisplayClass56_0__AddScrollImg_b__0__,
    0LL);
  if ( v99->fields.baseTexLoadRequested )
  {
    if ( v94 )
    {
      AssetLoader_LoadEndDataHandler__Invoke(v94, v99->fields.baseTexAssetData, 0LL);
      return;
    }
LABEL_63:
    sub_B0D97C(ObjectNameList);
  }
  v99->fields.baseTexLoadRequested = 1;
  v96 = TutorialBigDialog_TypeInfo;
  if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v96 = TutorialBigDialog_TypeInfo;
  }
  TuorialImagePath = TutorialBigDialog__GetTuorialImagePath(v99, v96->static_fields->baseImgNo, v95);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(TuorialImagePath, v94, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialBigDialog__AfterLoad(TutorialBigDialog_o *this, int32_t addCount, const MethodInfo *method)
{
  TutorialBigDialog_o *v4; // x19
  _BOOL4 loadByAsset; // w8
  int v6; // w9
  _DWORD *assetsImageLoadList; // x10

  v4 = this;
  if ( (byte_421688F & 1) == 0 )
  {
    this = (TutorialBigDialog_o *)sub_B0D8A4(&StringLiteral_10128/*"OpenWindow"*/, *(_QWORD *)&addCount);
    byte_421688F = 1;
  }
  loadByAsset = v4->fields.loadByAsset;
  v6 = v4->fields._loadIndex + addCount;
  v4->fields._loadIndex = v6;
  if ( loadByAsset )
  {
    assetsImageLoadList = v4->fields.assetsImageLoadList;
    if ( assetsImageLoadList )
      goto LABEL_5;
LABEL_10:
    sub_B0D97C(this);
  }
  assetsImageLoadList = v4->fields.TutorialImageLoadList;
  if ( !assetsImageLoadList )
    goto LABEL_10;
LABEL_5:
  if ( v6 >= assetsImageLoadList[6] )
  {
    v4->fields.CurrentIndex = 0;
    TutorialBigDialog__UpdatePage(v4, 0, method);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)v4,
      (System_String_o *)StringLiteral_10128/*"OpenWindow"*/,
      0.3,
      0LL);
  }
  else if ( loadByAsset )
  {
    TutorialBigDialog__LoadStartAssets(v4, *(const MethodInfo **)&addCount);
  }
  else
  {
    TutorialBigDialog__LoadStart(v4, *(const MethodInfo **)&addCount);
  }
}


void __fastcall TutorialBigDialog__Close(
        TutorialBigDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  AndroidBackKeyManager_c *v14; // x0
  System_Action_o *v15; // x20

  if ( (byte_4216895 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&AndroidBackKeyManager_TypeInfo, v10);
    sub_B0D8A4(&Method_TutorialBigDialog_EndClose__, v11);
    byte_4216895 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v14 = AndroidBackKeyManager_TypeInfo;
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    v14 = AndroidBackKeyManager_TypeInfo;
  }
  v14->static_fields->ToastEnabled = 0;
  v15 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v12, v13);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_TutorialBigDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
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
  struct System_Collections_Generic_List_GameObject__o *v10; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_421689B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Clear__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    byte_421689B = 1;
  }
  memset(&v11, 0, sizeof(v11));
  ImagePageList = this->fields.ImagePageList;
  if ( ImagePageList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v11,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ImagePageList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v11,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v11.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34935276((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v11,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v10 = this->fields.ImagePageList;
    if ( !v10 )
      sub_B0D97C(0LL);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v10,
      (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
    this->fields.CurrentIndex = 0;
  }
}


void __fastcall TutorialBigDialog__EndClose(TutorialBigDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v11; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  TutorialBigDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v11 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B0D840(p_closeCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
    System_Action__Invoke(v11, 0LL);
  }
}


void __fastcall TutorialBigDialog__EndOpen(TutorialBigDialog_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_endOpenCallbackFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *endOpenCallbackFunc; // t1

  this->fields.isButtonEnable = 1;
  TutorialBigDialog__refreshCurrent(this, method);
  endOpenCallbackFunc = this->fields.endOpenCallbackFunc;
  p_endOpenCallbackFunc = (BattleServantConfConponent_o *)&this->fields.endOpenCallbackFunc;
  v10 = endOpenCallbackFunc;
  if ( endOpenCallbackFunc )
  {
    p_endOpenCallbackFunc->klass = 0LL;
    sub_B0D840(p_endOpenCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
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
  System_String_array *v4; // x0
  __int64 v6; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_421688A & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, imageName);
    byte_421688A = 1;
  }
  result = 0;
  v4 = (System_String_array *)sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_9;
  if ( !v4->max_length )
    goto LABEL_10;
  LOWORD(v4->m_Items[0]) = 95;
  if ( !imageName || (v4 = System_String__Split(imageName, (System_Char_array *)v4, 0LL), result = 0, !v4) )
LABEL_9:
    sub_B0D97C(v4);
  if ( v4->max_length <= 3 )
  {
LABEL_10:
    v6 = sub_B0D9A8(v4);
    sub_B0D948(v6, 0LL);
  }
  System_Int32__TryParse(v4->m_Items[3], &result, 0LL);
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TutorialBigDialog__GetTuorialImageName(
        TutorialBigDialog_o *this,
        int32_t imgId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4216889 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&imgId);
    sub_B0D8A4(&StringLiteral_23586/*"{0:D4}"*/, v4);
    sub_B0D8A4(&StringLiteral_22902/*"tutorial_"*/, v5);
    byte_4216889 = 1;
  }
  v9 = imgId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  v7 = System_String__Format((System_String_o *)StringLiteral_23586/*"{0:D4}"*/, v6, 0LL);
  return System_String__Concat_43849904((System_String_o *)StringLiteral_22902/*"tutorial_"*/, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TutorialBigDialog__GetTuorialImagePath(
        TutorialBigDialog_o *this,
        int32_t imgId,
        const MethodInfo *method)
{
  System_String_o *TuorialImageName; // x0

  if ( (byte_4216888 & 1) == 0 )
  {
    this = (TutorialBigDialog_o *)sub_B0D8A4(&StringLiteral_14619/*"Tutorial/"*/, *(_QWORD *)&imgId);
    byte_4216888 = 1;
  }
  TuorialImageName = TutorialBigDialog__GetTuorialImageName(this, imgId, method);
  return System_String__Concat_43849904((System_String_o *)StringLiteral_14619/*"Tutorial/"*/, TuorialImageName, 0LL);
}


void __fastcall TutorialBigDialog__Init(TutorialBigDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v5; // x1
  MethodInfo *v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  TutorialBigDialog_c *v12; // x0
  System_String_o **p_alphaMiniImgPath; // x8
  System_String_o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  TutorialBigDialog_c *v21; // x0
  System_String_o *TuorialImagePath; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct System_Int32_array *TutorialImageLoadList; // x22
  __int64 v30; // x8
  unsigned __int64 v31; // x23
  System_String_o *v32; // x21
  struct System_String_array *assetsImageLoadList; // x8
  struct System_String_array **p_assetsImageLoadList; // x20
  il2cpp_array_size_t v35; // w22
  il2cpp_array_size_t max_length; // w9
  System_String_o *v37; // x21
  __int64 v38; // x0

  if ( (byte_421687E & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&TutorialBigDialog_TypeInfo, v3);
    byte_421687E = 1;
  }
  this->fields.isButtonEnable = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_43:
    sub_B0D97C(gameObject);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.IsFading = 0;
  TutorialBigDialog__DestroyImagePageList(this, v5);
  if ( this->fields.alphaTexLoadRequested )
  {
    v12 = TutorialBigDialog_TypeInfo;
    if ( this->fields.sizeKind == 2 )
    {
      if ( (WORD1(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
        v12 = TutorialBigDialog_TypeInfo;
      }
      p_alphaMiniImgPath = &v12->static_fields->alphaMiniImgPath;
    }
    else
    {
      if ( (WORD1(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
        v12 = TutorialBigDialog_TypeInfo;
      }
      p_alphaMiniImgPath = &v12->static_fields->alphaImgPath;
    }
    v14 = *p_alphaMiniImgPath;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(v14, 0LL);
    this->fields.alphaTexAssetData = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.alphaTexAssetData, 0LL, v15, v16, v17, v18, v19, v20);
    this->fields.alphaTexLoadRequested = 0;
  }
  if ( this->fields.baseTexLoadRequested )
  {
    v21 = TutorialBigDialog_TypeInfo;
    if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
      v21 = TutorialBigDialog_TypeInfo;
    }
    TuorialImagePath = TutorialBigDialog__GetTuorialImagePath(this, v21->static_fields->baseImgNo, v6);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(TuorialImagePath, 0LL);
    this->fields.baseTexAssetData = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.baseTexAssetData, 0LL, v23, v24, v25, v26, v27, v28);
    this->fields.baseTexLoadRequested = 0;
  }
  TutorialImageLoadList = this->fields.TutorialImageLoadList;
  if ( TutorialImageLoadList )
  {
    v30 = *(_QWORD *)&TutorialImageLoadList->max_length;
    if ( (int)v30 >= 1 )
    {
      v31 = 0LL;
      do
      {
        if ( v31 >= (unsigned int)v30 )
        {
LABEL_46:
          v38 = sub_B0D9A8(gameObject);
          sub_B0D948(v38, 0LL);
        }
        v32 = TutorialBigDialog__GetTuorialImagePath(this, TutorialImageLoadList->m_Items[v31 + 1], v6);
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        AssetManager__releaseAssetStorage(v32, 0LL);
        LODWORD(v30) = TutorialImageLoadList->max_length;
        ++v31;
      }
      while ( (__int64)v31 < (int)v30 );
    }
    this->fields.TutorialImageLoadList = 0LL;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.TutorialImageLoadList,
      0LL,
      (System_String_array **)v6,
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
    v35 = 0;
    while ( 1 )
    {
      max_length = assetsImageLoadList->max_length;
      if ( (int)v35 >= (int)max_length )
        break;
      if ( v35 >= max_length )
        goto LABEL_46;
      v37 = assetsImageLoadList->m_Items[v35];
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__releaseAssetStorage(v37, 0LL);
      assetsImageLoadList = *p_assetsImageLoadList;
      v35 += 2;
      if ( !*p_assetsImageLoadList )
        goto LABEL_43;
    }
    *p_assetsImageLoadList = 0LL;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.assetsImageLoadList,
      0LL,
      (System_String_array **)v6,
      v7,
      v8,
      v9,
      v10,
      v11);
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
  __int64 v9; // x19
  __int64 v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  TutorialBigDialog_c *v25; // x0
  System_String_o **p_alphaMiniImgPath; // x8
  System_String_o *v27; // x20
  AssetLoader_LoadEndDataHandler_o *v28; // x21

  if ( (byte_4216890 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, callback);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_B0D8A4(&TutorialBigDialog_TypeInfo, v6);
    sub_B0D8A4(&Method_TutorialBigDialog___c__DisplayClass58_0__LoadAlpha_b__0__, v7);
    sub_B0D8A4(&TutorialBigDialog___c__DisplayClass58_0_TypeInfo, v8);
    byte_4216890 = 1;
  }
  v9 = sub_B0D974(TutorialBigDialog___c__DisplayClass58_0_TypeInfo, callback, method);
  TutorialBigDialog___c__DisplayClass58_0___ctor((TutorialBigDialog___c__DisplayClass58_0_o *)v9, 0LL);
  if ( !v9 )
    sub_B0D97C(v10);
  *(_QWORD *)(v9 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v9 + 24) = callback;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)callback, v17, v18, v19, v20, v21, v22);
  this->fields.alphaTexLoadRequested = 1;
  v25 = TutorialBigDialog_TypeInfo;
  if ( this->fields.sizeKind == 2 )
  {
    if ( (WORD1(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
      v25 = TutorialBigDialog_TypeInfo;
    }
    p_alphaMiniImgPath = &v25->static_fields->alphaMiniImgPath;
  }
  else
  {
    if ( (WORD1(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
      v25 = TutorialBigDialog_TypeInfo;
    }
    p_alphaMiniImgPath = &v25->static_fields->alphaImgPath;
  }
  v27 = *p_alphaMiniImgPath;
  v28 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v23, v24);
  AssetLoader_LoadEndDataHandler___ctor(
    v28,
    (Il2CppObject *)v9,
    Method_TutorialBigDialog___c__DisplayClass58_0__LoadAlpha_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v27, v28, 1, 0LL);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  CommonUI_o *Instance; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  System_Action_o *v18; // x20
  const MethodInfo *v19; // x2

  if ( (byte_4216886 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, images);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_List_GameObject__TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B0D8A4(&Method_TutorialBigDialog_LoadStart__, v7);
    byte_4216886 = 1;
  }
  this->fields._loadIndex = 0;
  this->fields.loadByAsset = 0;
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                 images,
                                                                                                 method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.ImagePageList = (struct System_Collections_Generic_List_GameObject__o *)v8;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.ImagePageList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v18 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v16, v17);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_TutorialBigDialog_LoadStart__, 0LL);
  TutorialBigDialog__LoadAlpha(this, v18, v19);
}


void __fastcall TutorialBigDialog__LoadImages_28075788(
        TutorialBigDialog_o *this,
        System_String_array *images,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  CommonUI_o *Instance; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  System_Action_o *v18; // x20
  const MethodInfo *v19; // x2

  if ( (byte_4216887 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, images);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_List_GameObject__TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B0D8A4(&Method_TutorialBigDialog_LoadStartAssets__, v7);
    byte_4216887 = 1;
  }
  this->fields._loadIndex = 0;
  this->fields.loadByAsset = 1;
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                 images,
                                                                                                 method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.ImagePageList = (struct System_Collections_Generic_List_GameObject__o *)v8;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.ImagePageList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v18 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v16, v17);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_TutorialBigDialog_LoadStartAssets__, 0LL);
  TutorialBigDialog__LoadAlpha(this, v18, v19);
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
  __int64 v9; // x1
  __int64 v10; // x2
  AssetLoader_LoadEndDataHandler_o *v11; // x21
  __int64 v12; // x0

  v3 = this;
  if ( (byte_421688B & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    this = (TutorialBigDialog_o *)sub_B0D8A4(&Method_TutorialBigDialog__LoadStart_b__53_0__, v5);
    byte_421688B = 1;
  }
  TutorialImageLoadList = v3->fields.TutorialImageLoadList;
  if ( !TutorialImageLoadList )
    sub_B0D97C(this);
  loadIndex = v3->fields._loadIndex;
  if ( (unsigned int)loadIndex >= TutorialImageLoadList->max_length )
  {
    v12 = sub_B0D9A8(this);
    sub_B0D948(v12, 0LL);
  }
  TuorialImagePath = TutorialBigDialog__GetTuorialImagePath(v3, TutorialImageLoadList->m_Items[loadIndex + 1], v2);
  v11 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v9, v10);
  AssetLoader_LoadEndDataHandler___ctor(v11, (Il2CppObject *)v3, Method_TutorialBigDialog__LoadStart_b__53_0__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(TuorialImagePath, v11, 1, 0LL);
}


void __fastcall TutorialBigDialog__LoadStartAssets(TutorialBigDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  TutorialBigDialog_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_String_array *assetsImageLoadList; // x8
  __int64 loadIndex; // x9
  System_String_o *v8; // x20
  AssetLoader_LoadEndDataHandler_o *v9; // x21
  __int64 v10; // x0

  v3 = this;
  if ( (byte_421688C & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    this = (TutorialBigDialog_o *)sub_B0D8A4(&Method_TutorialBigDialog__LoadStartAssets_b__54_0__, v5);
    byte_421688C = 1;
  }
  assetsImageLoadList = v3->fields.assetsImageLoadList;
  if ( !assetsImageLoadList )
    sub_B0D97C(this);
  loadIndex = v3->fields._loadIndex;
  if ( (unsigned int)loadIndex >= assetsImageLoadList->max_length )
  {
    v10 = sub_B0D9A8(this);
    sub_B0D948(v10, 0LL);
  }
  v8 = assetsImageLoadList->m_Items[loadIndex];
  v9 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, method, v2);
  AssetLoader_LoadEndDataHandler___ctor(
    v9,
    (Il2CppObject *)v3,
    Method_TutorialBigDialog__LoadStartAssets_b__54_0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v8, v9, 1, 0LL);
}


void __fastcall TutorialBigDialog__OnBottomButton(TutorialBigDialog_o *this, const MethodInfo *method)
{
  TutorialBigDialog_o *v2; // x19
  __int64 v3; // x1
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x8
  const MethodInfo *v5; // x1

  v2 = this;
  if ( (byte_4216898 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, method);
    this = (TutorialBigDialog_o *)sub_B0D8A4(&SoundManager_TypeInfo, v3);
    byte_4216898 = 1;
  }
  if ( !v2->fields.IsFading )
  {
    ImagePageList = v2->fields.ImagePageList;
    if ( !ImagePageList )
      sub_B0D97C(this);
    if ( v2->fields.CurrentIndex == ImagePageList->fields._size - 1 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(1, 0LL);
      TutorialBigDialog__OnClickClose(v2, v5);
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
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  int32_t localFlagId; // w20
  int configFlagId; // w20
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  TutorialSetRequest_o *Request_WarBoardWallAttackRequest; // x0
  NetworkManager_ResultCallbackFunc_o *v15; // x20
  const MethodInfo *v16; // x3

  if ( (byte_4216899 & 1) == 0 )
  {
    sub_B0D8A4(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, method);
    sub_B0D8A4(&Method_NetworkManager_getRequest_TutorialSetRequest___, v3);
    sub_B0D8A4(&NetworkManager_TypeInfo, v4);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_B0D8A4(&SoundManager_TypeInfo, v6);
    sub_B0D8A4(&Method_TutorialBigDialog_EndTurorialRequest__, v7);
    sub_B0D8A4(&TutorialFlag_TypeInfo, v8);
    byte_4216899 = 1;
  }
  if ( !this->fields.IsFading && this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    localFlagId = this->fields.localFlagId;
    if ( localFlagId != -1 )
    {
      if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TutorialFlag_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      }
      TutorialFlag__Set_28083788(localFlagId, v9);
    }
    configFlagId = this->fields.configFlagId;
    if ( configFlagId >= 1 )
    {
      if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TutorialFlag_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      }
      TutorialFlag__SetConfigFlg(configFlagId, v9);
    }
    if ( this->fields.flagId != -1 )
    {
      v13 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10);
      NetworkManager_ResultCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_TutorialBigDialog_EndTurorialRequest__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (TutorialSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                    v13,
                                                                    (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        TutorialSetRequest__beginRequest(Request_WarBoardWallAttackRequest, this->fields.flagId, 0LL);
        return;
      }
LABEL_33:
      sub_B0D97C(Request_WarBoardWallAttackRequest);
    }
    if ( this->fields.eventFlagId == -1 || !this->fields.eventId )
    {
      TutorialBigDialog__Close(this, this->fields.closeCallbackFunc, v10);
    }
    else
    {
      v15 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10);
      NetworkManager_ResultCallbackFunc___ctor(
        v15,
        (Il2CppObject *)this,
        Method_TutorialBigDialog_EndTurorialRequest__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (TutorialSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                    v15,
                                                                    (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
      if ( !Request_WarBoardWallAttackRequest )
        goto LABEL_33;
      TutorialEventSetRequest__beginRequest(
        (TutorialEventSetRequest_o *)Request_WarBoardWallAttackRequest,
        this->fields.eventFlagId,
        this->fields.eventId,
        v16);
    }
  }
}


void __fastcall TutorialBigDialog__OnNextButton(TutorialBigDialog_o *this, const MethodInfo *method)
{
  TutorialBigDialog_o *v2; // x19
  __int64 v3; // x1
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x8
  const MethodInfo *v5; // x2

  v2 = this;
  if ( (byte_4216896 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, method);
    this = (TutorialBigDialog_o *)sub_B0D8A4(&SoundManager_TypeInfo, v3);
    byte_4216896 = 1;
  }
  if ( !v2->fields.IsFading )
  {
    ImagePageList = v2->fields.ImagePageList;
    if ( !ImagePageList )
      sub_B0D97C(this);
    if ( v2->fields.CurrentIndex != ImagePageList->fields._size - 1 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      TutorialBigDialog__UpdatePage(v2, v2->fields.CurrentIndex + 1, v5);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialBigDialog__OnPageChange(TutorialBigDialog_o *this, int32_t idx, const MethodInfo *method)
{
  TutorialBigDialog_o *v4; // x20
  __int64 v5; // x1
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x8

  v4 = this;
  if ( (byte_421689A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, *(_QWORD *)&idx);
    this = (TutorialBigDialog_o *)sub_B0D8A4(&SoundManager_TypeInfo, v5);
    byte_421689A = 1;
  }
  if ( (idx & 0x80000000) == 0 && v4->fields.CurrentIndex != idx )
  {
    ImagePageList = v4->fields.ImagePageList;
    if ( !ImagePageList )
      sub_B0D97C(this);
    if ( ImagePageList->fields._size > idx )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
    }
  }
}


void __fastcall TutorialBigDialog__OnPrevButton(TutorialBigDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4216897 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4216897 = 1;
  }
  if ( !this->fields.IsFading && this->fields.CurrentIndex >= 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    TutorialBigDialog__UpdatePage(this, this->fields.CurrentIndex - 1, v3);
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UnityEngine_GameObject_o *CloseButton; // x0
  UnityEngine_Transform_o *v33; // x21
  TutorialBigDialog_c *v34; // x8
  struct System_Int32_array *v35; // x0
  struct System_Int32_array **p_TutorialImageLoadList; // x21
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  il2cpp_array_size_t max_length; // w9
  __int64 v44; // x8
  struct System_Int32_array *v45; // x9
  __int64 v46; // x10
  System_Int32_array *v47; // x1
  const MethodInfo *v48; // x2
  const MethodInfo *v49; // x2
  __int64 v50; // x0

  if ( (byte_421687F & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, images);
    sub_B0D8A4(&TutorialBigDialog_TypeInfo, v13);
    byte_421687F = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&flagId);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.endOpenCallbackFunc,
    (System_Int32_array **)endOpenFunc,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.endTurorialRequestFunc,
    (System_Int32_array **)endTurorialRequestFunc,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.closeCallbackFunc = closeFunc;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)closeFunc,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  CloseButton = this->fields.CloseButton;
  this->fields.flagId = flagId;
  *(_OWORD *)&this->fields.localFlagId = xmmword_3205990;
  this->fields.sizeKind = 1;
  if ( !CloseButton )
    goto LABEL_20;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0LL);
  v33 = (UnityEngine_Transform_o *)CloseButton;
  v34 = TutorialBigDialog_TypeInfo;
  if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v34 = TutorialBigDialog_TypeInfo;
  }
  if ( !v33 )
    goto LABEL_20;
  UnityEngine_Transform__set_localPosition(v33, v34->static_fields->baseCloseButtonPosition, 0LL);
  if ( !images )
    goto LABEL_20;
  v35 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, images->max_length);
  this->fields.TutorialImageLoadList = v35;
  p_TutorialImageLoadList = &this->fields.TutorialImageLoadList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.TutorialImageLoadList,
    (System_Int32_array **)v35,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  if ( (int)*(_QWORD *)&images->max_length >= 1 )
  {
    max_length = *(_QWORD *)&images->max_length;
    v44 = 8LL;
    do
    {
      if ( v44 - 8 >= (unsigned __int64)max_length )
        goto LABEL_19;
      v45 = *p_TutorialImageLoadList;
      if ( !*p_TutorialImageLoadList )
        goto LABEL_20;
      if ( v44 - 8 >= (unsigned __int64)v45->max_length )
      {
LABEL_19:
        v50 = sub_B0D9A8(CloseButton);
        sub_B0D948(v50, 0LL);
      }
      *((_DWORD *)&v45->obj.klass + v44) = *((_DWORD *)&images->obj.klass + v44);
      max_length = images->max_length;
      v46 = v44 - 7;
      ++v44;
    }
    while ( v46 < (int)max_length );
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMask((BaseDialog_o *)this, 0, 0LL);
  TutorialBigDialog__LoadImages(this, v47, v48);
  CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !CloseButton )
LABEL_20:
    sub_B0D97C(CloseButton);
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v49);
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
  __int64 v16; // x1
  __int64 v17; // x2
  System_Action_o *v18; // x23
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  UnityEngine_GameObject_o *CloseButton; // x0
  UnityEngine_Transform_o *v38; // x21
  TutorialBigDialog_c *v39; // x8
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  srcLineSprite_o *Component_srcLineSprite; // x20
  __int64 v47; // x1
  __int64 v48; // x2
  EventDelegate_Callback_o *v49; // x22
  __int64 v50; // x1
  __int64 v51; // x2
  EventDelegate_o *v52; // x21
  System_Int32_array *v53; // x1
  const MethodInfo *v54; // x2
  const MethodInfo *v55; // x2

  if ( (byte_4216884 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, images);
    sub_B0D8A4(&EventDelegate_Callback_TypeInfo, v9);
    sub_B0D8A4(&EventDelegate_TypeInfo, v10);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UITouchPress___, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v12);
    sub_B0D8A4(&Method_TutorialBigDialog__OpenAssets_b__46_0__, v13);
    sub_B0D8A4(&Method_TutorialBigDialog__OpenAssets_b__46_1__, v14);
    sub_B0D8A4(&TutorialBigDialog_TypeInfo, v15);
    byte_4216884 = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&kind);
  v18 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v16, v17);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_TutorialBigDialog__OpenAssets_b__46_0__, 0LL);
  this->fields.endOpenCallbackFunc = v18;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.endOpenCallbackFunc,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.endTurorialRequestFunc = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.endTurorialRequestFunc, 0LL, v25, v26, v27, v28, v29, v30);
  this->fields.closeCallbackFunc = closeFunc;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)closeFunc,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  CloseButton = this->fields.CloseButton;
  this->fields.configFlagId = 0;
  this->fields.sizeKind = kind;
  *(_OWORD *)&this->fields.flagId = xmmword_3202D70;
  if ( !CloseButton )
    goto LABEL_15;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0LL);
  v38 = (UnityEngine_Transform_o *)CloseButton;
  v39 = TutorialBigDialog_TypeInfo;
  if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v39 = TutorialBigDialog_TypeInfo;
  }
  if ( !v38 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v38, v39->static_fields->miniCloseButtonPosition, 0LL);
  this->fields.TutorialImageLoadList = images;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.TutorialImageLoadList,
    (System_Int32_array **)images,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  CloseButton = this->fields.TouchMask;
  this->fields.isButtonEnable = 0;
  if ( !CloseButton )
    goto LABEL_15;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              CloseButton,
                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
  v49 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v47, v48);
  EventDelegate_Callback___ctor(v49, (Il2CppObject *)this, Method_TutorialBigDialog__OpenAssets_b__46_1__, 0LL);
  v52 = (EventDelegate_o *)sub_B0D974(EventDelegate_TypeInfo, v50, v51);
  EventDelegate___ctor_28889248(v52, v49, 0LL);
  if ( !Component_srcLineSprite
    || (CloseButton = (UnityEngine_GameObject_o *)Component_srcLineSprite->fields.mFSM) == 0LL
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)CloseButton,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v52,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventDelegate__Add__),
        BaseDialog__SetMask((BaseDialog_o *)this, 0, 0LL),
        TutorialBigDialog__LoadImages(this, v53, v54),
        (CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_15:
    sub_B0D97C(CloseButton);
  }
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v55);
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UnityEngine_GameObject_o *CloseButton; // x0
  UnityEngine_Transform_o *v32; // x21
  TutorialBigDialog_c *v33; // x8
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array *v40; // x1
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x2

  if ( (byte_4216885 & 1) == 0 )
  {
    sub_B0D8A4(&TutorialBigDialog_TypeInfo, images);
    byte_4216885 = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&configId);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.endOpenCallbackFunc,
    (System_Int32_array **)endOpenFunc,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.endTurorialRequestFunc,
    (System_Int32_array **)endTurorialRequestFunc,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.closeCallbackFunc = closeFunc;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)closeFunc,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  CloseButton = this->fields.CloseButton;
  this->fields.configFlagId = configId;
  *(_OWORD *)&this->fields.flagId = xmmword_3202D70;
  this->fields.sizeKind = 1;
  if ( !CloseButton )
    goto LABEL_12;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0LL);
  v32 = (UnityEngine_Transform_o *)CloseButton;
  v33 = TutorialBigDialog_TypeInfo;
  if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v33 = TutorialBigDialog_TypeInfo;
  }
  if ( !v32
    || (UnityEngine_Transform__set_localPosition(v32, v33->static_fields->baseCloseButtonPosition, 0LL),
        this->fields.assetsImageLoadList = images,
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.assetsImageLoadList,
          (System_Int32_array **)images,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39),
        this->fields.isButtonEnable = 0,
        BaseDialog__SetMask((BaseDialog_o *)this, 0, 0LL),
        TutorialBigDialog__LoadImages_28075788(this, v40, v41),
        (CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_12:
    sub_B0D97C(CloseButton);
  }
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v42);
}


void __fastcall TutorialBigDialog__OpenWindow(TutorialBigDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *v8; // x20

  if ( (byte_4216891 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B0D8A4(&Method_TutorialBigDialog_EndOpen__, v4);
    byte_4216891 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  v8 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v6, v7);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_TutorialBigDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v8, 1, 0LL);
}


void __fastcall TutorialBigDialog__OpenWithAssets(
        TutorialBigDialog_o *this,
        System_String_array *images,
        System_Action_o *closeFunc,
        System_Action_o *endOpenFunc,
        System_Action_o *endTurorialRequestFunc,
        const MethodInfo *method)
{
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UnityEngine_GameObject_o *CloseButton; // x0
  UnityEngine_Transform_o *v30; // x21
  TutorialBigDialog_c *v31; // x8
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_array *v38; // x1
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x2

  if ( (byte_4216883 & 1) == 0 )
  {
    sub_B0D8A4(&TutorialBigDialog_TypeInfo, images);
    byte_4216883 = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, (const MethodInfo *)closeFunc);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.endOpenCallbackFunc,
    (System_Int32_array **)endOpenFunc,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.endTurorialRequestFunc,
    (System_Int32_array **)endTurorialRequestFunc,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.closeCallbackFunc = closeFunc;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)closeFunc,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  CloseButton = this->fields.CloseButton;
  this->fields.configFlagId = 0;
  *(_OWORD *)&this->fields.flagId = xmmword_3202D70;
  this->fields.sizeKind = 1;
  if ( !CloseButton )
    goto LABEL_12;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0LL);
  v30 = (UnityEngine_Transform_o *)CloseButton;
  v31 = TutorialBigDialog_TypeInfo;
  if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v31 = TutorialBigDialog_TypeInfo;
  }
  if ( !v30
    || (UnityEngine_Transform__set_localPosition(v30, v31->static_fields->baseCloseButtonPosition, 0LL),
        this->fields.assetsImageLoadList = images,
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.assetsImageLoadList,
          (System_Int32_array **)images,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37),
        this->fields.isButtonEnable = 0,
        BaseDialog__SetMask((BaseDialog_o *)this, 0, 0LL),
        TutorialBigDialog__LoadImages_28075788(this, v38, v39),
        (CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_12:
    sub_B0D97C(CloseButton);
  }
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v40);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialBigDialog__Open_28073960(
        TutorialBigDialog_o *this,
        TutorialFlag_ImageId_array *images,
        int32_t flagId,
        System_Action_o *closeFunc,
        System_Action_o *endOpenFunc,
        System_Action_o *endTurorialRequestFunc,
        const MethodInfo *method)
{
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UnityEngine_GameObject_o *CloseButton; // x0
  UnityEngine_Transform_o *v33; // x21
  TutorialBigDialog_c *v34; // x8
  struct System_Int32_array *v35; // x0
  struct System_Int32_array **p_TutorialImageLoadList; // x21
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  il2cpp_array_size_t max_length; // w9
  __int64 v44; // x8
  struct System_Int32_array *v45; // x9
  __int64 v46; // x10
  System_Int32_array *v47; // x1
  const MethodInfo *v48; // x2
  const MethodInfo *v49; // x2
  __int64 v50; // x0

  if ( (byte_4216880 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, images);
    sub_B0D8A4(&TutorialBigDialog_TypeInfo, v13);
    byte_4216880 = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&flagId);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.endOpenCallbackFunc,
    (System_Int32_array **)endOpenFunc,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.endTurorialRequestFunc,
    (System_Int32_array **)endTurorialRequestFunc,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.closeCallbackFunc = closeFunc;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)closeFunc,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  CloseButton = this->fields.CloseButton;
  this->fields.flagId = -1;
  this->fields.localFlagId = flagId;
  *(_QWORD *)&this->fields.eventFlagId = 0xFFFFFFFFLL;
  this->fields.configFlagId = 0;
  this->fields.sizeKind = 1;
  if ( !CloseButton )
    goto LABEL_20;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0LL);
  v33 = (UnityEngine_Transform_o *)CloseButton;
  v34 = TutorialBigDialog_TypeInfo;
  if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v34 = TutorialBigDialog_TypeInfo;
  }
  if ( !v33 )
    goto LABEL_20;
  UnityEngine_Transform__set_localPosition(v33, v34->static_fields->baseCloseButtonPosition, 0LL);
  if ( !images )
    goto LABEL_20;
  v35 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, images->max_length);
  this->fields.TutorialImageLoadList = v35;
  p_TutorialImageLoadList = &this->fields.TutorialImageLoadList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.TutorialImageLoadList,
    (System_Int32_array **)v35,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  if ( (int)*(_QWORD *)&images->max_length >= 1 )
  {
    max_length = *(_QWORD *)&images->max_length;
    v44 = 8LL;
    do
    {
      if ( v44 - 8 >= (unsigned __int64)max_length )
        goto LABEL_19;
      v45 = *p_TutorialImageLoadList;
      if ( !*p_TutorialImageLoadList )
        goto LABEL_20;
      if ( v44 - 8 >= (unsigned __int64)v45->max_length )
      {
LABEL_19:
        v50 = sub_B0D9A8(CloseButton);
        sub_B0D948(v50, 0LL);
      }
      *((_DWORD *)&v45->obj.klass + v44) = *((_DWORD *)&images->obj.klass + v44);
      max_length = images->max_length;
      v46 = v44 - 7;
      ++v44;
    }
    while ( v46 < (int)max_length );
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMask((BaseDialog_o *)this, 0, 0LL);
  TutorialBigDialog__LoadImages(this, v47, v48);
  CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !CloseButton )
LABEL_20:
    sub_B0D97C(CloseButton);
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v49);
}


void __fastcall TutorialBigDialog__Open_28074484(
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
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UnityEngine_GameObject_o *CloseButton; // x0
  UnityEngine_Transform_o *v35; // x21
  TutorialBigDialog_c *v36; // x8
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array *v43; // x1
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x2

  if ( (byte_4216881 & 1) == 0 )
  {
    sub_B0D8A4(&TutorialBigDialog_TypeInfo, images);
    byte_4216881 = 1;
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.endOpenCallbackFunc,
    (System_Int32_array **)endOpenFunc,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.endTurorialRequestFunc,
    (System_Int32_array **)endTurorialRequestFunc,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.closeCallbackFunc = closeFunc;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)closeFunc,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  CloseButton = this->fields.CloseButton;
  *(_QWORD *)&this->fields.flagId = -1LL;
  this->fields.eventFlagId = flagId;
  this->fields.eventId = eventId;
  this->fields.configFlagId = 0;
  this->fields.sizeKind = 1;
  if ( !CloseButton )
    goto LABEL_13;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0LL);
  v35 = (UnityEngine_Transform_o *)CloseButton;
  v36 = TutorialBigDialog_TypeInfo;
  if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v36 = TutorialBigDialog_TypeInfo;
  }
  if ( !v35
    || (UnityEngine_Transform__set_localPosition(v35, v36->static_fields->baseCloseButtonPosition, 0LL),
        this->fields.TutorialImageLoadList = images,
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.TutorialImageLoadList,
          (System_Int32_array **)images,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42),
        this->fields.isButtonEnable = 0,
        BaseDialog__SetMask((BaseDialog_o *)this, 0, 0LL),
        TutorialBigDialog__LoadImages(this, v43, v44),
        (CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_13:
    sub_B0D97C(CloseButton);
  }
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v45);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialBigDialog__Open_28074888(
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
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UnityEngine_GameObject_o *CloseButton; // x0
  UnityEngine_Transform_o *v35; // x21
  TutorialBigDialog_c *v36; // x8
  struct System_Int32_array *v37; // x0
  struct System_Int32_array **p_TutorialImageLoadList; // x21
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  il2cpp_array_size_t max_length; // w9
  __int64 v46; // x8
  struct System_Int32_array *v47; // x9
  __int64 v48; // x10
  System_Int32_array *v49; // x1
  const MethodInfo *v50; // x2
  const MethodInfo *v51; // x2
  __int64 v52; // x0

  if ( (byte_4216882 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, images);
    sub_B0D8A4(&TutorialBigDialog_TypeInfo, v15);
    byte_4216882 = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&flagId);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.endOpenCallbackFunc,
    (System_Int32_array **)endOpenFunc,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.endTurorialRequestFunc,
    (System_Int32_array **)endTurorialRequestFunc,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.closeCallbackFunc = closeFunc;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)closeFunc,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  CloseButton = this->fields.CloseButton;
  *(_QWORD *)&this->fields.flagId = -1LL;
  this->fields.eventFlagId = flagId;
  this->fields.eventId = eventId;
  this->fields.configFlagId = 0;
  this->fields.sizeKind = 1;
  if ( !CloseButton )
    goto LABEL_20;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0LL);
  v35 = (UnityEngine_Transform_o *)CloseButton;
  v36 = TutorialBigDialog_TypeInfo;
  if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v36 = TutorialBigDialog_TypeInfo;
  }
  if ( !v35 )
    goto LABEL_20;
  UnityEngine_Transform__set_localPosition(v35, v36->static_fields->baseCloseButtonPosition, 0LL);
  if ( !images )
    goto LABEL_20;
  v37 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, images->max_length);
  this->fields.TutorialImageLoadList = v37;
  p_TutorialImageLoadList = &this->fields.TutorialImageLoadList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.TutorialImageLoadList,
    (System_Int32_array **)v37,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  if ( (int)*(_QWORD *)&images->max_length >= 1 )
  {
    max_length = *(_QWORD *)&images->max_length;
    v46 = 8LL;
    do
    {
      if ( v46 - 8 >= (unsigned __int64)max_length )
        goto LABEL_19;
      v47 = *p_TutorialImageLoadList;
      if ( !*p_TutorialImageLoadList )
        goto LABEL_20;
      if ( v46 - 8 >= (unsigned __int64)v47->max_length )
      {
LABEL_19:
        v52 = sub_B0D9A8(CloseButton);
        sub_B0D948(v52, 0LL);
      }
      *((_DWORD *)&v47->obj.klass + v46) = *((_DWORD *)&images->obj.klass + v46);
      max_length = images->max_length;
      v48 = v46 - 7;
      ++v46;
    }
    while ( v48 < (int)max_length );
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMask((BaseDialog_o *)this, 0, 0LL);
  TutorialBigDialog__LoadImages(this, v49, v50);
  CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !CloseButton )
LABEL_20:
    sub_B0D97C(CloseButton);
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v51);
}


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
    sub_B0D97C(TouchMask);
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
  UnityEngine_GameObject_o *CloseButton; // x20
  TutorialBigDialog_o **p_PrevButton; // x21
  UnityEngine_GameObject_o *PrevButton; // x20
  UILabel_o *basePanelList; // x20
  UILabel_o *v15; // x19
  AndroidBackKeyManager_c *v16; // x0
  __int64 v17; // x0

  v4 = this;
  if ( (byte_4216893 & 1) == 0 )
  {
    sub_B0D8A4(&AndroidBackKeyManager_TypeInfo, isDisp);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____67969368, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v6);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_13506/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, v8);
    this = (TutorialBigDialog_o *)sub_B0D8A4(&StringLiteral_13507/*"TUTORIAL_IMAGE_DIALOG_PREV"*/, v9);
    byte_4216893 = 1;
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
    goto LABEL_45;
  }
  ImagePageList = v4->fields.ImagePageList;
  if ( !ImagePageList )
    goto LABEL_45;
  this = (TutorialBigDialog_o *)v4->fields.CloseButton;
  if ( !this )
    goto LABEL_45;
  if ( v4->fields.CurrentIndex == ImagePageList->fields._size - 1 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (TutorialBigDialog_o *)v4->fields.NextButton;
    if ( !this )
      goto LABEL_45;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    CloseButton = v4->fields.CloseButton;
    if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    }
    AndroidBackKeyManager__AddBackBtn(CloseButton, 0LL);
    p_PrevButton = (TutorialBigDialog_o **)&v4->fields.PrevButton;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (TutorialBigDialog_o *)v4->fields.NextButton;
    if ( !this )
      goto LABEL_45;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    p_PrevButton = (TutorialBigDialog_o **)&v4->fields.PrevButton;
    PrevButton = v4->fields.PrevButton;
    if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    }
    AndroidBackKeyManager__AddBackBtn(PrevButton, 0LL);
    this = (TutorialBigDialog_o *)v4->fields.NextButton;
    if ( !this )
      goto LABEL_45;
    this = (TutorialBigDialog_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !this )
      goto LABEL_45;
    this = (TutorialBigDialog_o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                    (UnityEngine_Component_o *)this,
                                    1,
                                    (const MethodInfo_170EAD0 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____67969368);
    if ( !this )
      goto LABEL_45;
    if ( !LODWORD(this->fields.basePanel) )
      goto LABEL_46;
    basePanelList = (UILabel_o *)this->fields.basePanelList;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (TutorialBigDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13506/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, 0LL);
    if ( !basePanelList )
LABEL_45:
      sub_B0D97C(this);
    UILabel__set_text(basePanelList, (System_String_o *)this, 0LL);
  }
  this = *p_PrevButton;
  if ( !*p_PrevButton )
    goto LABEL_45;
  if ( v4->fields.CurrentIndex < 1 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    goto LABEL_41;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = *p_PrevButton;
  if ( !*p_PrevButton )
    goto LABEL_45;
  this = (TutorialBigDialog_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_45;
  this = (TutorialBigDialog_o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                  (UnityEngine_Component_o *)this,
                                  1,
                                  (const MethodInfo_170EAD0 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____67969368);
  if ( !this )
    goto LABEL_45;
  if ( !LODWORD(this->fields.basePanel) )
  {
LABEL_46:
    v17 = sub_B0D9A8(this);
    sub_B0D948(v17, 0LL);
  }
  v15 = (UILabel_o *)this->fields.basePanelList;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (TutorialBigDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13507/*"TUTORIAL_IMAGE_DIALOG_PREV"*/, 0LL);
  if ( !v15 )
    goto LABEL_45;
  UILabel__set_text(v15, (System_String_o *)this, 0LL);
LABEL_41:
  v16 = AndroidBackKeyManager_TypeInfo;
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    v16 = AndroidBackKeyManager_TypeInfo;
  }
  v16->static_fields->ToastEnabled = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialBigDialog__UpdatePage(TutorialBigDialog_o *this, int32_t dispIndex, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  long double v8; // q8
  long double v9; // q9
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  int32_t CurrentIndex; // w25
  struct UITexture_o **p_FadeInTarget; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct UITexture_o *Component_srcLineSprite; // x0
  const MethodInfo *v26; // x2
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x23
  int size; // w26
  unsigned int v29; // w27
  __int64 v30; // x8
  UnityEngine_GameObject_o *v31; // x23
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct UITexture_o *v38; // x24
  UITexture_c *klass; // x8
  long double v40; // q0
  UnityEngine_GameObject_o *v41; // x0
  bool v42; // w1
  UnityEngine_GameObject_o *gameObject; // x21
  TutorialBigDialog_c *v44; // x8
  UnityEngine_GameObject_o *v45; // x0
  UITweener_o *v46; // x20
  __int64 v47; // x1
  __int64 v48; // x2
  EventDelegate_Callback_o *v49; // x21

  if ( (byte_4216892 & 1) == 0 )
  {
    sub_B0D8A4(&EventDelegate_Callback_TypeInfo, *(_QWORD *)&dispIndex);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UITexture___, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v14);
    sub_B0D8A4(&Method_TutorialBigDialog__UpdatePage_b__60_0__, v15);
    sub_B0D8A4(&TutorialBigDialog_TypeInfo, v16);
    byte_4216892 = 1;
  }
  CurrentIndex = this->fields.CurrentIndex;
  this->fields.FadeInTarget = 0LL;
  p_FadeInTarget = &this->fields.FadeInTarget;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.FadeInTarget,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.FadeOutTarget = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.FadeOutTarget, 0LL, v19, v20, v21, v22, v23, v24);
  ImagePageList = this->fields.ImagePageList;
  if ( !ImagePageList )
    goto LABEL_33;
  size = ImagePageList->fields._size;
  if ( size >= 1 )
  {
    LODWORD(v8) = 1000593162;
    v29 = 0;
    LODWORD(v9) = 1.0;
    while ( 1 )
    {
      if ( ImagePageList->fields._size <= v29 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v30 = (__int64)ImagePageList->fields._items + 8 * (int)v29;
      v31 = *(UnityEngine_GameObject_o **)(v30 + 32);
      if ( !v31 )
        goto LABEL_33;
      Component_srcLineSprite = (struct UITexture_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        *(UnityEngine_GameObject_o **)(v30 + 32),
                                                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
      v38 = Component_srcLineSprite;
      if ( dispIndex == v29 )
        break;
      if ( v29 == this->fields.CurrentIndex && CurrentIndex != dispIndex )
      {
        this->fields.FadeOutTarget = Component_srcLineSprite;
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.FadeOutTarget,
          (System_Int32_array **)Component_srcLineSprite,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37);
LABEL_20:
        v42 = 1;
        v41 = v31;
        goto LABEL_21;
      }
      v41 = v31;
      v42 = 0;
LABEL_21:
      UnityEngine_GameObject__SetActive(v41, v42, 0LL);
      if ( (int)++v29 >= size )
        goto LABEL_24;
      ImagePageList = this->fields.ImagePageList;
      if ( !ImagePageList )
        goto LABEL_33;
    }
    if ( CurrentIndex == dispIndex )
    {
      if ( !Component_srcLineSprite )
        goto LABEL_33;
      klass = Component_srcLineSprite->klass;
      v40 = v9;
    }
    else
    {
      *p_FadeInTarget = Component_srcLineSprite;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.FadeInTarget,
        (System_Int32_array **)Component_srcLineSprite,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
      if ( !v38 )
        goto LABEL_33;
      klass = v38->klass;
      Component_srcLineSprite = v38;
      v40 = v8;
    }
    ((void (__fastcall *)(struct UITexture_o *, Il2CppMethodPointer, long double))klass->vtable._8_set_alpha.method)(
      Component_srcLineSprite,
      klass->vtable._9_CalculateFinalAlpha.methodPtr,
      v40);
    goto LABEL_20;
  }
LABEL_24:
  this->fields.CurrentIndex = dispIndex;
  if ( CurrentIndex != dispIndex )
  {
    Component_srcLineSprite = this->fields.FadeOutTarget;
    this->fields.IsFading = 1;
    if ( Component_srcLineSprite )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
      v44 = TutorialBigDialog_TypeInfo;
      if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
        v44 = TutorialBigDialog_TypeInfo;
      }
      TweenAlpha__Begin(gameObject, v44->static_fields->FADE_TIME, 0.0, 0LL);
      Component_srcLineSprite = *p_FadeInTarget;
      if ( *p_FadeInTarget )
      {
        v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
        v46 = (UITweener_o *)TweenAlpha__Begin(v45, TutorialBigDialog_TypeInfo->static_fields->FADE_TIME, 1.0, 0LL);
        v49 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v47, v48);
        EventDelegate_Callback___ctor(v49, (Il2CppObject *)this, Method_TutorialBigDialog__UpdatePage_b__60_0__, 0LL);
        if ( v46 )
        {
          UITweener__SetOnFinished(v46, v49, 0LL);
          return;
        }
      }
    }
LABEL_33:
    sub_B0D97C(Component_srcLineSprite);
  }
  TutorialBigDialog__UpdateButtons(this, 1, v26);
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
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_o *v10; // x21
  const MethodInfo *v11; // x3
  struct System_String_array *assetsImageLoadList; // x8
  int v13; // w9
  UnityEngine_Texture2D_o *Object_WarBoardWaitTimeSetting; // x0
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  __int64 v17; // x0

  v4 = this;
  if ( (byte_421689F & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, data);
    sub_B0D8A4(&Method_AssetData_GetObject_Texture2D____67951464, v5);
    sub_B0D8A4(&Method_TutorialBigDialog__LoadStartAssets_b__54_1__, v6);
    this = (TutorialBigDialog_o *)sub_B0D8A4(&StringLiteral_16055/*"_L_"*/, v7);
    byte_421689F = 1;
  }
  if ( !data )
    goto LABEL_12;
  this = (TutorialBigDialog_o *)AssetData__GetObjectNameList(data, 0LL);
  if ( !this )
    goto LABEL_12;
  if ( !LODWORD(this->fields.basePanel) )
    goto LABEL_13;
  this = (TutorialBigDialog_o *)this->fields.basePanelList;
  if ( !this )
    goto LABEL_12;
  this = (TutorialBigDialog_o *)System_String__Contains(
                                  (System_String_o *)this,
                                  (System_String_o *)StringLiteral_16055/*"_L_"*/,
                                  0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v10 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v8, v9);
    System_Action___ctor(v10, (Il2CppObject *)v4, Method_TutorialBigDialog__LoadStartAssets_b__54_1__, 0LL);
    TutorialBigDialog__AddScrollImg(v4, data, v10, v11);
    return;
  }
  assetsImageLoadList = v4->fields.assetsImageLoadList;
  if ( !assetsImageLoadList )
LABEL_12:
    sub_B0D97C(this);
  v13 = v4->fields._loadIndex + 1;
  if ( v13 >= assetsImageLoadList->max_length )
  {
LABEL_13:
    v17 = sub_B0D9A8(this);
    sub_B0D948(v17, 0LL);
  }
  Object_WarBoardWaitTimeSetting = (UnityEngine_Texture2D_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                data,
                                                                assetsImageLoadList->m_Items[v13],
                                                                (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_Texture2D____67951464);
  TutorialBigDialog__AddImg(v4, Object_WarBoardWaitTimeSetting, v15);
  TutorialBigDialog__AfterLoad(v4, 2, v16);
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
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  System_Action_o *v10; // x21
  const MethodInfo *v11; // x3
  struct System_Int32_array *TutorialImageLoadList; // x8
  __int64 loadIndex; // x9
  System_String_o *TuorialImageName; // x0
  UnityEngine_Texture2D_o *Object_WarBoardWaitTimeSetting; // x0
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  __int64 v18; // x0

  v4 = this;
  if ( (byte_421689E & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, data);
    sub_B0D8A4(&Method_AssetData_GetObject_Texture2D____67951464, v5);
    sub_B0D8A4(&Method_TutorialBigDialog__LoadStart_b__53_1__, v6);
    this = (TutorialBigDialog_o *)sub_B0D8A4(&StringLiteral_16055/*"_L_"*/, v7);
    byte_421689E = 1;
  }
  if ( !data )
    goto LABEL_12;
  this = (TutorialBigDialog_o *)AssetData__GetObjectNameList(data, 0LL);
  if ( !this )
    goto LABEL_12;
  if ( !LODWORD(this->fields.basePanel) )
    goto LABEL_13;
  this = (TutorialBigDialog_o *)this->fields.basePanelList;
  if ( !this )
    goto LABEL_12;
  this = (TutorialBigDialog_o *)System_String__Contains(
                                  (System_String_o *)this,
                                  (System_String_o *)StringLiteral_16055/*"_L_"*/,
                                  0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v10 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v8, v9);
    System_Action___ctor(v10, (Il2CppObject *)v4, Method_TutorialBigDialog__LoadStart_b__53_1__, 0LL);
    TutorialBigDialog__AddScrollImg(v4, data, v10, v11);
    return;
  }
  TutorialImageLoadList = v4->fields.TutorialImageLoadList;
  if ( !TutorialImageLoadList )
LABEL_12:
    sub_B0D97C(this);
  loadIndex = v4->fields._loadIndex;
  if ( (unsigned int)loadIndex >= TutorialImageLoadList->max_length )
  {
LABEL_13:
    v18 = sub_B0D9A8(this);
    sub_B0D948(v18, 0LL);
  }
  TuorialImageName = TutorialBigDialog__GetTuorialImageName(this, TutorialImageLoadList->m_Items[loadIndex + 1], v9);
  Object_WarBoardWaitTimeSetting = (UnityEngine_Texture2D_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                data,
                                                                TuorialImageName,
                                                                (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_Texture2D____67951464);
  TutorialBigDialog__AddImg(v4, Object_WarBoardWaitTimeSetting, v16);
  TutorialBigDialog__AfterLoad(v4, 1, v17);
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


void __fastcall TutorialBigDialog___UpdatePage_b__60_0(TutorialBigDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *FadeOutTarget; // x0
  const MethodInfo *v4; // x2

  TutorialBigDialog__refreshCurrent(this, method);
  FadeOutTarget = (UnityEngine_Component_o *)this->fields.FadeOutTarget;
  if ( !FadeOutTarget
    || (FadeOutTarget = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(FadeOutTarget, 0LL)) == 0LL )
  {
    sub_B0D97C(FadeOutTarget);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)FadeOutTarget, 0, 0LL);
  this->fields.IsFading = 0;
  TutorialBigDialog__UpdateButtons(this, 1, v4);
}


void __fastcall TutorialBigDialog__refreshCurrent(TutorialBigDialog_o *this, const MethodInfo *method)
{
  TutorialBigDialog_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x20
  int size; // w8
  __int64 CurrentIndex; // x19
  srcLineSprite_o *Component_srcLineSprite; // x19

  v2 = this;
  if ( (byte_4216894 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_TutorialImageLong___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    this = (TutorialBigDialog_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_4216894 = 1;
  }
  ImagePageList = v2->fields.ImagePageList;
  if ( !ImagePageList )
    goto LABEL_16;
  size = ImagePageList->fields._size;
  CurrentIndex = v2->fields.CurrentIndex;
  if ( size > (int)CurrentIndex )
  {
    if ( size <= (unsigned int)CurrentIndex )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    this = (TutorialBigDialog_o *)ImagePageList->fields._items->m_Items[CurrentIndex];
    if ( !this )
      goto LABEL_16;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)this,
                                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_TutorialImageLong___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (TutorialBigDialog_o *)UnityEngine_Object__op_Inequality(
                                    (UnityEngine_Object_o *)Component_srcLineSprite,
                                    0LL,
                                    0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( Component_srcLineSprite )
      {
        this = (TutorialBigDialog_o *)Component_srcLineSprite->fields.mcLineSprite;
        if ( this )
        {
          UIScrollView__ResetPosition((UIScrollView_o *)this, 0LL);
          return;
        }
      }
LABEL_16:
      sub_B0D97C(this);
    }
  }
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
  TutorialBigDialog___c__DisplayClass56_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct TutorialBigDialog_o *_4__this; // x8
  UnityEngine_Shader_o *v11; // x22
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Material_o *v14; // x21
  struct TutorialImageLong_o *comp; // x8
  TutorialBigDialog_o *v16; // x22
  struct TutorialBigDialog_o *v17; // x8
  UnityEngine_Texture_o *Object_WarBoardWaitTimeSetting; // x0
  struct TutorialBigDialog_o *v19; // x8

  v4 = this;
  if ( (byte_42125CE & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_Texture2D____67951464, aData);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Add__, v5);
    sub_B0D8A4(&UnityEngine_Material_TypeInfo, v6);
    sub_B0D8A4(&TutorialBigDialog_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_4552/*"Custom/SpriteWithMask"*/, v8);
    this = (TutorialBigDialog___c__DisplayClass56_0_o *)sub_B0D8A4(&StringLiteral_16063/*"_MaskTex"*/, v9);
    byte_42125CE = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  _4__this->fields.baseTexAssetData = aData;
  sub_B0D840(&_4__this->fields.baseTexAssetData, aData);
  v11 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4552/*"Custom/SpriteWithMask"*/, 0LL);
  v14 = (UnityEngine_Material_o *)sub_B0D974(UnityEngine_Material_TypeInfo, v12, v13);
  UnityEngine_Material___ctor(v14, v11, 0LL);
  comp = v4->fields.comp;
  if ( !comp )
    goto LABEL_17;
  this = (TutorialBigDialog___c__DisplayClass56_0_o *)comp->fields.BaseImage;
  if ( !this )
    goto LABEL_17;
  ((void (__fastcall *)(TutorialBigDialog___c__DisplayClass56_0_o *, UnityEngine_Material_o *, Il2CppMethodPointer))this->klass[1].vtable._2_GetHashCode.method)(
    this,
    v14,
    this->klass[1].vtable._3_ToString.methodPtr);
  v16 = v4->fields.__4__this;
  this = (TutorialBigDialog___c__DisplayClass56_0_o *)TutorialBigDialog_TypeInfo;
  if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
  }
  if ( !v16 )
    goto LABEL_17;
  this = (TutorialBigDialog___c__DisplayClass56_0_o *)TutorialBigDialog__GetTuorialImageName(
                                                        v16,
                                                        TutorialBigDialog_TypeInfo->static_fields->baseImgNo,
                                                        0LL);
  if ( !aData )
    goto LABEL_17;
  this = (TutorialBigDialog___c__DisplayClass56_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                        aData,
                                                        (System_String_o *)this,
                                                        (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_Texture2D____67951464);
  if ( !v14
    || (UnityEngine_Material__set_mainTexture(v14, (UnityEngine_Texture_o *)this, 0LL),
        (v17 = v4->fields.__4__this) == 0LL)
    || (this = (TutorialBigDialog___c__DisplayClass56_0_o *)v17->fields.alphaTexAssetData) == 0LL
    || (Object_WarBoardWaitTimeSetting = (UnityEngine_Texture_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                    (AssetData_o *)this,
                                                                    TutorialBigDialog_TypeInfo->static_fields->alphaImgName,
                                                                    (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_Texture2D____67951464),
        UnityEngine_Material__SetTexture(
          v14,
          (System_String_o *)StringLiteral_16063/*"_MaskTex"*/,
          Object_WarBoardWaitTimeSetting,
          0LL),
        (v19 = v4->fields.__4__this) == 0LL)
    || (this = (TutorialBigDialog___c__DisplayClass56_0_o *)v19->fields.ImagePageList) == 0LL )
  {
LABEL_17:
    sub_B0D97C(this);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v4->fields.obj,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
  ActionExtensions__Call(v4->fields.callback, 0LL);
}


void __fastcall TutorialBigDialog___c__DisplayClass58_0___ctor(
        TutorialBigDialog___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TutorialBigDialog___c__DisplayClass58_0___LoadAlpha_b__0(
        TutorialBigDialog___c__DisplayClass58_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  struct TutorialBigDialog_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
  _4__this->fields.alphaTexAssetData = data;
  sub_B0D840(&_4__this->fields.alphaTexAssetData, data);
  ActionExtensions__Call(this->fields.callback, 0LL);
}