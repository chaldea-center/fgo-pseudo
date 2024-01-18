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

  if ( (byte_4189A31 & 1) == 0 )
  {
    sub_B2C35C(&TutorialBigDialog_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_14577/*"Tutorial/tutorial_alpha"*/, v8);
    sub_B2C35C(&StringLiteral_17591/*"combine_tutorial_alpha"*/, v9);
    sub_B2C35C(&StringLiteral_14575/*"Tutorial/combine_tutorial_alpha"*/, v10);
    sub_B2C35C(&StringLiteral_22828/*"tutorial_alpha"*/, v11);
    byte_4189A31 = 1;
  }
  TutorialBigDialog_TypeInfo->static_fields->FADE_TIME = 0.3;
  static_fields = TutorialBigDialog_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_14577/*"Tutorial/tutorial_alpha"*/;
  static_fields->alphaImgPath = (struct System_String_o *)StringLiteral_14577/*"Tutorial/tutorial_alpha"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&static_fields->alphaImgPath, v13, v2, v3, v4, v5, v6, v7);
  v14 = TutorialBigDialog_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_22828/*"tutorial_alpha"*/;
  v14->alphaImgName = (struct System_String_o *)StringLiteral_22828/*"tutorial_alpha"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v14->alphaImgName, v15, v16, v17, v18, v19, v20, v21);
  v22 = TutorialBigDialog_TypeInfo->static_fields;
  v23 = (System_Int32_array **)StringLiteral_14575/*"Tutorial/combine_tutorial_alpha"*/;
  v22->alphaMiniImgPath = (struct System_String_o *)StringLiteral_14575/*"Tutorial/combine_tutorial_alpha"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v22->alphaMiniImgPath, v23, v24, v25, v26, v27, v28, v29);
  v30 = TutorialBigDialog_TypeInfo->static_fields;
  v31 = (System_Int32_array **)StringLiteral_17591/*"combine_tutorial_alpha"*/;
  v30->alphaMiniImgName = (struct System_String_o *)StringLiteral_17591/*"combine_tutorial_alpha"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v30->alphaMiniImgName, v31, v32, v33, v34, v35, v36, v37);
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
  if ( (byte_4189A30 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_4189A30 = 1;
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
  __int64 v19; // x1
  srcLineSprite_o *Component_srcLineSprite; // x23
  int32_t layer; // w22
  UnityEngine_Shader_o *v22; // x24
  UnityEngine_Material_o *v23; // x22
  TutorialBigDialog_c *v24; // x0
  System_String_o **p_alphaMiniImgName; // x8
  UnityEngine_Texture_o *Object_WarBoardWaitTimeSetting; // x0
  UnityEngine_Transform_o *v27; // x21
  UnityEngine_Transform_o *transform; // x21
  int v29; // s0
  UnityEngine_Transform_o *v32; // x21
  int v33; // s0

  if ( (byte_4189A21 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_Texture2D____67377648, tex);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UITexture___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, v6);
    sub_B2C35C(&UnityEngine_Material_TypeInfo, v7);
    sub_B2C35C(&NGUITools_TypeInfo, v8);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    sub_B2C35C(&TutorialBigDialog_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_4537/*"Custom/SpriteWithMask"*/, v12);
    sub_B2C35C(&StringLiteral_7498/*"Image"*/, v13);
    sub_B2C35C(&StringLiteral_16015/*"_MaskTex"*/, v14);
    byte_4189A21 = 1;
  }
  TutorialImagePrefab = this->fields.TutorialImagePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v16 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                  (UnityEngine_UI_Dropdown_DropdownItem_o *)TutorialImagePrefab,
                                  (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v17 = System_Int32__ToString((int)this + 240, 0LL);
  gameObject = System_String__Concat_44305532((System_String_o *)StringLiteral_7498/*"Image"*/, v17, 0LL);
  if ( !v16 )
    goto LABEL_29;
  UnityEngine_Object__set_name(v16, gameObject, 0LL);
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)v16,
                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_29;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)gameObject, 0LL);
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__SetLayer((UnityEngine_GameObject_o *)v16, layer, 0LL);
  v22 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4537/*"Custom/SpriteWithMask"*/, 0LL);
  v23 = (UnityEngine_Material_o *)sub_B2C42C(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v23, v22, 0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_29;
  gameObject = (System_String_o *)((__int64 (__fastcall *)(srcLineSprite_o *, UnityEngine_Material_o *, Il2CppMethodPointer))Component_srcLineSprite->klass[1].vtable._2_GetHashCode.method)(
                                    Component_srcLineSprite,
                                    v23,
                                    Component_srcLineSprite->klass[1].vtable._3_ToString.methodPtr);
  if ( !v23 )
    goto LABEL_29;
  UnityEngine_Material__set_mainTexture(v23, (UnityEngine_Texture_o *)tex, 0LL);
  v24 = TutorialBigDialog_TypeInfo;
  if ( this->fields.sizeKind == 2 )
  {
    if ( (WORD1(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
      v24 = TutorialBigDialog_TypeInfo;
    }
    p_alphaMiniImgName = &v24->static_fields->alphaMiniImgName;
  }
  else
  {
    if ( (WORD1(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
      v24 = TutorialBigDialog_TypeInfo;
    }
    p_alphaMiniImgName = &v24->static_fields->alphaImgName;
  }
  gameObject = (System_String_o *)this->fields.alphaTexAssetData;
  if ( !gameObject )
    goto LABEL_29;
  Object_WarBoardWaitTimeSetting = (UnityEngine_Texture_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                              (AssetData_o *)gameObject,
                                                              *p_alphaMiniImgName,
                                                              (const MethodInfo_1720344 *)Method_AssetData_GetObject_Texture2D____67377648);
  UnityEngine_Material__SetTexture(v23, (System_String_o *)StringLiteral_16015/*"_MaskTex"*/, Object_WarBoardWaitTimeSetting, 0LL);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v16, 0, 0LL);
  gameObject = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v16, 0LL);
  if ( !this->fields.ImageRoot )
    goto LABEL_29;
  v27 = (UnityEngine_Transform_o *)gameObject;
  gameObject = (System_String_o *)UnityEngine_GameObject__get_transform(this->fields.ImageRoot, 0LL);
  if ( !v27 )
    goto LABEL_29;
  UnityEngine_Transform__set_parent(v27, (UnityEngine_Transform_o *)gameObject, 0LL);
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v16, 0LL);
  *(UnityEngine_Vector3_o *)&v29 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v29, 0LL),
        v32 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v16, 0LL),
        *(UnityEngine_Vector3_o *)&v33 = UnityEngine_Vector3__get_one(0LL),
        !v32)
    || (UnityEngine_Transform__set_localScale(v32, *(UnityEngine_Vector3_o *)&v33, 0LL),
        (gameObject = (System_String_o *)this->fields.ImagePageList) == 0LL) )
  {
LABEL_29:
    sub_B2C434(gameObject, v19);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)gameObject,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
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
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  int v36; // w8
  __int64 v37; // x24
  unsigned int v38; // w27
  UnityEngine_Texture_o *v39; // x25
  UnityEngine_Texture_o *v40; // x20
  __int64 v41; // x21
  System_String_o **v42; // x21
  __int64 v43; // t1
  char v44; // w26
  const MethodInfo *v45; // x2
  UnityEngine_Texture_o *v46; // x23
  UnityEngine_UI_Dropdown_DropdownItem_o *TutorialImageLongPrefab; // x22
  System_Int32_array **v48; // x0
  __int64 *v49; // x22
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  UnityEngine_Object_o *v56; // x24
  System_String_o *v57; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  __int64 v59; // x24
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  UnityEngine_GameObject_o *v66; // x26
  int32_t layer; // w27
  UnityEngine_Shader_o *v68; // x27
  UnityEngine_Material_o *v69; // x26
  int klass_high; // w21
  UIWidget_o *v71; // x25
  UITexture_o *v72; // x25
  int v73; // w26
  int v74; // w27
  int32_t baseWidth; // s8
  int v76; // w28
  int v77; // w0
  float v78; // s4
  float v79; // s5
  float v80; // s6
  float v81; // s7
  UnityEngine_Transform_o *v82; // x21
  UnityEngine_Transform_o *transform; // x21
  int v84; // s0
  UnityEngine_Transform_o *v87; // x21
  int v88; // s0
  AssetLoader_LoadEndDataHandler_o *v91; // x21
  const MethodInfo *v92; // x2
  TutorialBigDialog_c *v93; // x0
  System_String_o *TuorialImagePath; // x19
  __int64 v95; // x0
  TutorialBigDialog_o *v96; // [xsp+8h] [xbp-78h]
  MethodInfo methoda; // [xsp+10h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v98; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v99; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v100; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v101; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4189A22 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_Texture2D____67377648, data);
    sub_B2C35C(&AssetManager_TypeInfo, v7);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TutorialImageLong___, v8);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Material_TypeInfo, v10);
    sub_B2C35C(&NGUITools_TypeInfo, v11);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v13);
    sub_B2C35C(&TutorialBigDialog_TypeInfo, v14);
    sub_B2C35C(&Method_TutorialBigDialog___c__DisplayClass56_0__AddScrollImg_b__0__, v15);
    sub_B2C35C(&TutorialBigDialog___c__DisplayClass56_0_TypeInfo, v16);
    sub_B2C35C(&StringLiteral_16313/*"alpha"*/, v17);
    sub_B2C35C(&StringLiteral_4537/*"Custom/SpriteWithMask"*/, v18);
    sub_B2C35C(&StringLiteral_7498/*"Image"*/, v19);
    sub_B2C35C(&StringLiteral_16015/*"_MaskTex"*/, v20);
    byte_4189A22 = 1;
  }
  v21 = sub_B2C42C(TutorialBigDialog___c__DisplayClass56_0_TypeInfo);
  TutorialBigDialog___c__DisplayClass56_0___ctor((TutorialBigDialog___c__DisplayClass56_0_o *)v21, 0LL);
  if ( !v21 )
    goto LABEL_63;
  *(_QWORD *)(v21 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v21 + 40) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v21 + 40), (System_Int32_array **)callback, v30, v31, v32, v33, v34, v35);
  if ( !data )
    goto LABEL_63;
  ObjectNameList = (__int64)AssetData__GetObjectNameList(data, 0LL);
  if ( !ObjectNameList )
    goto LABEL_63;
  v96 = this;
  v36 = *(_DWORD *)(ObjectNameList + 24);
  v37 = ObjectNameList;
  if ( v36 < 1 )
  {
    v40 = 0LL;
    v46 = 0LL;
    HIDWORD(methoda.klass) = 0;
  }
  else
  {
    HIDWORD(methoda.klass) = 0;
    v38 = 0;
    v39 = 0LL;
    v40 = 0LL;
    do
    {
      if ( v38 >= v36 )
        goto LABEL_62;
      v41 = v37 + 8LL * (int)v38;
      v43 = *(_QWORD *)(v41 + 32);
      v42 = (System_String_o **)(v41 + 32);
      ObjectNameList = v43;
      if ( !v43 )
        goto LABEL_63;
      ObjectNameList = System_String__Contains(
                         (System_String_o *)ObjectNameList,
                         (System_String_o *)StringLiteral_16313/*"alpha"*/,
                         0LL);
      if ( v38 >= *(_DWORD *)(v37 + 24) )
      {
LABEL_62:
        v95 = sub_B2C460(ObjectNameList);
        sub_B2C400(v95, 0LL);
      }
      v44 = ObjectNameList;
      ObjectNameList = (__int64)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                  data,
                                  *v42,
                                  (const MethodInfo_1720344 *)Method_AssetData_GetObject_Texture2D____67377648);
      v46 = (UnityEngine_Texture_o *)ObjectNameList;
      if ( (v44 & 1) == 0 )
      {
        if ( v38 >= *(_DWORD *)(v37 + 24) )
          goto LABEL_62;
        v40 = (UnityEngine_Texture_o *)ObjectNameList;
        ObjectNameList = TutorialBigDialog__GetScrollHeightWithName((TutorialBigDialog_o *)ObjectNameList, *v42, v45);
        v46 = v39;
        HIDWORD(methoda.klass) = ObjectNameList;
      }
      v36 = *(_DWORD *)(v37 + 24);
      ++v38;
      v39 = v46;
    }
    while ( (int)v38 < v36 );
  }
  TutorialImageLongPrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)v96->fields.TutorialImageLongPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v48 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                 TutorialImageLongPrefab,
                                 (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  *(_QWORD *)(v21 + 32) = v48;
  v49 = (__int64 *)(v21 + 32);
  sub_B2C2F8((BattleServantConfConponent_o *)(v21 + 32), v48, v50, v51, v52, v53, v54, v55);
  v56 = *(UnityEngine_Object_o **)(v21 + 32);
  v57 = System_Int32__ToString((int)v96 + 240, 0LL);
  ObjectNameList = (__int64)System_String__Concat_44305532((System_String_o *)StringLiteral_7498/*"Image"*/, v57, 0LL);
  if ( !v56 )
    goto LABEL_63;
  UnityEngine_Object__set_name(v56, (System_String_o *)ObjectNameList, 0LL);
  ObjectNameList = *v49;
  if ( !*v49 )
    goto LABEL_63;
  Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)ObjectNameList,
                                                     (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TutorialImageLong___);
  *(_QWORD *)(v21 + 24) = Component_srcLineSprite;
  v59 = v21 + 24;
  sub_B2C2F8((BattleServantConfConponent_o *)(v21 + 24), Component_srcLineSprite, v60, v61, v62, v63, v64, v65);
  v66 = *(UnityEngine_GameObject_o **)(v21 + 32);
  ObjectNameList = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v96, 0LL);
  if ( !ObjectNameList )
    goto LABEL_63;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)ObjectNameList, 0LL);
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__SetLayer(v66, layer, 0LL);
  v68 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4537/*"Custom/SpriteWithMask"*/, 0LL);
  v69 = (UnityEngine_Material_o *)sub_B2C42C(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v69, v68, 0LL);
  if ( !*(_QWORD *)v59 )
    goto LABEL_63;
  ObjectNameList = *(_QWORD *)(*(_QWORD *)v59 + 32LL);
  if ( !ObjectNameList )
    goto LABEL_63;
  ObjectNameList = (*(__int64 (__fastcall **)(__int64, UnityEngine_Material_o *, _QWORD))(*(_QWORD *)ObjectNameList
                                                                                        + 712LL))(
                     ObjectNameList,
                     v69,
                     *(_QWORD *)(*(_QWORD *)ObjectNameList + 720LL));
  if ( !v69 )
    goto LABEL_63;
  UnityEngine_Material__set_mainTexture(v69, v40, 0LL);
  UnityEngine_Material__SetTexture(v69, (System_String_o *)StringLiteral_16015/*"_MaskTex"*/, v46, 0LL);
  if ( !*(_QWORD *)v59 )
    goto LABEL_63;
  ObjectNameList = *(_QWORD *)(*(_QWORD *)v59 + 32LL);
  klass_high = HIDWORD(methoda.klass);
  if ( !ObjectNameList )
    goto LABEL_63;
  UIWidget__set_height((UIWidget_o *)ObjectNameList, SHIDWORD(methoda.klass), 0LL);
  if ( !*(_QWORD *)v59 )
    goto LABEL_63;
  v71 = *(UIWidget_o **)(*(_QWORD *)v59 + 32LL);
  ObjectNameList = (__int64)TutorialBigDialog_TypeInfo;
  if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
  }
  if ( !v71 )
    goto LABEL_63;
  UIWidget__set_width(v71, TutorialBigDialog_TypeInfo->static_fields->baseWidth, 0LL);
  if ( !*(_QWORD *)v59 )
    goto LABEL_63;
  if ( !v40 )
    goto LABEL_63;
  v72 = *(UITexture_o **)(*(_QWORD *)v59 + 32LL);
  v73 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v40->klass->vtable._6_get_height.method)(
          v40,
          v40->klass->vtable._7_set_height.methodPtr);
  v74 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v40->klass->vtable._6_get_height.method)(
          v40,
          v40->klass->vtable._7_set_height.methodPtr);
  baseWidth = TutorialBigDialog_TypeInfo->static_fields->baseWidth;
  v76 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v40->klass->vtable._4_get_width.method)(
          v40,
          v40->klass->vtable._5_set_width.methodPtr);
  v77 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v40->klass->vtable._6_get_height.method)(
          v40,
          v40->klass->vtable._7_set_height.methodPtr);
  v78 = (float)(v73 - HIDWORD(methoda.klass));
  v100.fields.m_Width = (float)baseWidth / (float)v76;
  v100.fields.m_YMin = v78 / (float)v74;
  v100.fields.m_Height = (float)SHIDWORD(methoda.klass) / (float)v77;
  v100.fields.m_XMin = 0.0;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Rect___ctor(v100, v78, v79, v80, v81, &methoda);
  if ( !v72 )
    goto LABEL_63;
  *(_QWORD *)&v101.fields.m_XMin = methoda.methodPointer;
  *(_QWORD *)&v101.fields.m_Width = methoda.invoker_method;
  UITexture__set_uvRect(v72, v101, 0LL);
  if ( !*(_QWORD *)v59 )
    goto LABEL_63;
  ObjectNameList = *(_QWORD *)(*(_QWORD *)v59 + 40LL);
  if ( !ObjectNameList )
    goto LABEL_63;
  v98.fields.z = 1.0;
  v98.fields.y = (float)klass_high;
  v98.fields.x = (float)TutorialBigDialog_TypeInfo->static_fields->baseWidth;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)ObjectNameList, v98, 0LL);
  if ( !*(_QWORD *)v59 )
    goto LABEL_63;
  ObjectNameList = *(_QWORD *)(*(_QWORD *)v59 + 40LL);
  if ( !ObjectNameList )
    goto LABEL_63;
  v99.fields.y = (float)-klass_high * 0.5;
  v99.fields.x = 0.0;
  v99.fields.z = 0.0;
  UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)ObjectNameList, v99, 0LL);
  if ( !*(_QWORD *)v59 )
    goto LABEL_63;
  ObjectNameList = *(_QWORD *)(*(_QWORD *)v59 + 48LL);
  if ( !ObjectNameList )
    goto LABEL_63;
  UIScrollView__ResetPosition((UIScrollView_o *)ObjectNameList, 0LL);
  ObjectNameList = *v49;
  if ( !*v49 )
    goto LABEL_63;
  ObjectNameList = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)ObjectNameList, 0LL);
  if ( !v96->fields.ImageRoot )
    goto LABEL_63;
  v82 = (UnityEngine_Transform_o *)ObjectNameList;
  ObjectNameList = (__int64)UnityEngine_GameObject__get_transform(v96->fields.ImageRoot, 0LL);
  if ( !v82 )
    goto LABEL_63;
  UnityEngine_Transform__set_parent(v82, (UnityEngine_Transform_o *)ObjectNameList, 0LL);
  ObjectNameList = *v49;
  if ( !*v49 )
    goto LABEL_63;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)ObjectNameList, 0LL);
  *(UnityEngine_Vector3_o *)&v84 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_63;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v84, 0LL);
  ObjectNameList = *v49;
  if ( !*v49 )
    goto LABEL_63;
  v87 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)ObjectNameList, 0LL);
  *(UnityEngine_Vector3_o *)&v88 = UnityEngine_Vector3__get_one(0LL);
  if ( !v87 )
    goto LABEL_63;
  UnityEngine_Transform__set_localScale(v87, *(UnityEngine_Vector3_o *)&v88, 0LL);
  v91 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v91,
    (Il2CppObject *)v21,
    Method_TutorialBigDialog___c__DisplayClass56_0__AddScrollImg_b__0__,
    0LL);
  if ( v96->fields.baseTexLoadRequested )
  {
    if ( v91 )
    {
      AssetLoader_LoadEndDataHandler__Invoke(v91, v96->fields.baseTexAssetData, 0LL);
      return;
    }
LABEL_63:
    sub_B2C434(ObjectNameList, v23);
  }
  v96->fields.baseTexLoadRequested = 1;
  v93 = TutorialBigDialog_TypeInfo;
  if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v93 = TutorialBigDialog_TypeInfo;
  }
  TuorialImagePath = TutorialBigDialog__GetTuorialImagePath(v96, v93->static_fields->baseImgNo, v92);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(TuorialImagePath, v91, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialBigDialog__AfterLoad(TutorialBigDialog_o *this, int32_t addCount, const MethodInfo *method)
{
  TutorialBigDialog_o *v4; // x19
  _BOOL4 loadByAsset; // w8
  int v6; // w9
  _DWORD *assetsImageLoadList; // x10

  v4 = this;
  if ( (byte_4189A23 & 1) == 0 )
  {
    this = (TutorialBigDialog_o *)sub_B2C35C(&StringLiteral_10104/*"OpenWindow"*/, *(_QWORD *)&addCount);
    byte_4189A23 = 1;
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
    sub_B2C434(this, *(_QWORD *)&addCount);
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
      (System_String_o *)StringLiteral_10104/*"OpenWindow"*/,
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
  AndroidBackKeyManager_c *v12; // x0
  System_Action_o *v13; // x20

  if ( (byte_4189A29 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&AndroidBackKeyManager_TypeInfo, v10);
    sub_B2C35C(&Method_TutorialBigDialog_EndClose__, v11);
    byte_4189A29 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v12 = AndroidBackKeyManager_TypeInfo;
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    v12 = AndroidBackKeyManager_TypeInfo;
  }
  v12->static_fields->ToastEnabled = 0;
  v13 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_TutorialBigDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
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
  __int64 v10; // x1
  struct System_Collections_Generic_List_GameObject__o *v11; // x0
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4189A2F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_4189A2F = 1;
  }
  memset(&v12, 0, sizeof(v12));
  ImagePageList = this->fields.ImagePageList;
  if ( ImagePageList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v12,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ImagePageList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v12,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v12.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35314896((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v12,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v11 = this->fields.ImagePageList;
    if ( !v11 )
      sub_B2C434(0LL, v10);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v11,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_GameObject__Clear__);
    this->fields.CurrentIndex = 0;
  }
}


void __fastcall TutorialBigDialog__EndClose(TutorialBigDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  TutorialBigDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B2C2F8(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(v12, 0LL);
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
    sub_B2C2F8(p_endOpenCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  System_String_array *v5; // x1
  __int64 v7; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4189A1E & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, imageName);
    byte_4189A1E = 1;
  }
  result = 0;
  v4 = (System_String_array *)sub_B2C374(char___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_9;
  v5 = v4;
  if ( !v4->max_length )
    goto LABEL_10;
  LOWORD(v4->m_Items[0]) = 95;
  if ( !imageName || (v4 = System_String__Split(imageName, (System_Char_array *)v4, 0LL), result = 0, !v4) )
LABEL_9:
    sub_B2C434(v4, v5);
  if ( v4->max_length <= 3 )
  {
LABEL_10:
    v7 = sub_B2C460(v4);
    sub_B2C400(v7, 0LL);
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

  if ( (byte_4189A1D & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&imgId);
    sub_B2C35C(&StringLiteral_23508/*"{0:D4}"*/, v4);
    sub_B2C35C(&StringLiteral_22826/*"tutorial_"*/, v5);
    byte_4189A1D = 1;
  }
  v9 = imgId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  v7 = System_String__Format((System_String_o *)StringLiteral_23508/*"{0:D4}"*/, v6, 0LL);
  return System_String__Concat_44305532((System_String_o *)StringLiteral_22826/*"tutorial_"*/, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TutorialBigDialog__GetTuorialImagePath(
        TutorialBigDialog_o *this,
        int32_t imgId,
        const MethodInfo *method)
{
  System_String_o *TuorialImageName; // x0

  if ( (byte_4189A1C & 1) == 0 )
  {
    this = (TutorialBigDialog_o *)sub_B2C35C(&StringLiteral_14574/*"Tutorial/"*/, *(_QWORD *)&imgId);
    byte_4189A1C = 1;
  }
  TuorialImageName = TutorialBigDialog__GetTuorialImageName(this, imgId, method);
  return System_String__Concat_44305532((System_String_o *)StringLiteral_14574/*"Tutorial/"*/, TuorialImageName, 0LL);
}


void __fastcall TutorialBigDialog__Init(TutorialBigDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  MethodInfo *v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  TutorialBigDialog_c *v13; // x0
  System_String_o **p_alphaMiniImgPath; // x8
  System_String_o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  TutorialBigDialog_c *v22; // x0
  System_String_o *TuorialImagePath; // x20
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct System_Int32_array *TutorialImageLoadList; // x22
  __int64 v31; // x8
  unsigned __int64 v32; // x23
  System_String_o *v33; // x21
  struct System_String_array *assetsImageLoadList; // x8
  struct System_String_array **p_assetsImageLoadList; // x20
  il2cpp_array_size_t v36; // w22
  il2cpp_array_size_t max_length; // w9
  System_String_o *v38; // x21
  __int64 v39; // x0

  if ( (byte_4189A12 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&TutorialBigDialog_TypeInfo, v3);
    byte_4189A12 = 1;
  }
  this->fields.isButtonEnable = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_43:
    sub_B2C434(gameObject, v5);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.IsFading = 0;
  TutorialBigDialog__DestroyImagePageList(this, v6);
  if ( this->fields.alphaTexLoadRequested )
  {
    v13 = TutorialBigDialog_TypeInfo;
    if ( this->fields.sizeKind == 2 )
    {
      if ( (WORD1(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
        v13 = TutorialBigDialog_TypeInfo;
      }
      p_alphaMiniImgPath = &v13->static_fields->alphaMiniImgPath;
    }
    else
    {
      if ( (WORD1(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
        v13 = TutorialBigDialog_TypeInfo;
      }
      p_alphaMiniImgPath = &v13->static_fields->alphaImgPath;
    }
    v15 = *p_alphaMiniImgPath;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(v15, 0LL);
    this->fields.alphaTexAssetData = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.alphaTexAssetData, 0LL, v16, v17, v18, v19, v20, v21);
    this->fields.alphaTexLoadRequested = 0;
  }
  if ( this->fields.baseTexLoadRequested )
  {
    v22 = TutorialBigDialog_TypeInfo;
    if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
      v22 = TutorialBigDialog_TypeInfo;
    }
    TuorialImagePath = TutorialBigDialog__GetTuorialImagePath(this, v22->static_fields->baseImgNo, v7);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(TuorialImagePath, 0LL);
    this->fields.baseTexAssetData = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.baseTexAssetData, 0LL, v24, v25, v26, v27, v28, v29);
    this->fields.baseTexLoadRequested = 0;
  }
  TutorialImageLoadList = this->fields.TutorialImageLoadList;
  if ( TutorialImageLoadList )
  {
    v31 = *(_QWORD *)&TutorialImageLoadList->max_length;
    if ( (int)v31 >= 1 )
    {
      v32 = 0LL;
      do
      {
        if ( v32 >= (unsigned int)v31 )
        {
LABEL_46:
          v39 = sub_B2C460(gameObject);
          sub_B2C400(v39, 0LL);
        }
        v33 = TutorialBigDialog__GetTuorialImagePath(this, TutorialImageLoadList->m_Items[v32 + 1], v7);
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        AssetManager__releaseAssetStorage(v33, 0LL);
        LODWORD(v31) = TutorialImageLoadList->max_length;
        ++v32;
      }
      while ( (__int64)v32 < (int)v31 );
    }
    this->fields.TutorialImageLoadList = 0LL;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.TutorialImageLoadList,
      0LL,
      (System_String_array **)v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  p_assetsImageLoadList = &this->fields.assetsImageLoadList;
  assetsImageLoadList = this->fields.assetsImageLoadList;
  if ( assetsImageLoadList )
  {
    v36 = 0;
    while ( 1 )
    {
      max_length = assetsImageLoadList->max_length;
      if ( (int)v36 >= (int)max_length )
        break;
      if ( v36 >= max_length )
        goto LABEL_46;
      v38 = assetsImageLoadList->m_Items[v36];
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__releaseAssetStorage(v38, 0LL);
      assetsImageLoadList = *p_assetsImageLoadList;
      v36 += 2;
      if ( !*p_assetsImageLoadList )
        goto LABEL_43;
    }
    *p_assetsImageLoadList = 0LL;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.assetsImageLoadList,
      0LL,
      (System_String_array **)v7,
      v8,
      v9,
      v10,
      v11,
      v12);
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
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  TutorialBigDialog_c *v24; // x0
  System_String_o **p_alphaMiniImgPath; // x8
  System_String_o *v26; // x20
  AssetLoader_LoadEndDataHandler_o *v27; // x21

  if ( (byte_4189A24 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, callback);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_B2C35C(&TutorialBigDialog_TypeInfo, v6);
    sub_B2C35C(&Method_TutorialBigDialog___c__DisplayClass58_0__LoadAlpha_b__0__, v7);
    sub_B2C35C(&TutorialBigDialog___c__DisplayClass58_0_TypeInfo, v8);
    byte_4189A24 = 1;
  }
  v9 = sub_B2C42C(TutorialBigDialog___c__DisplayClass58_0_TypeInfo);
  TutorialBigDialog___c__DisplayClass58_0___ctor((TutorialBigDialog___c__DisplayClass58_0_o *)v9, 0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)callback, v18, v19, v20, v21, v22, v23);
  this->fields.alphaTexLoadRequested = 1;
  v24 = TutorialBigDialog_TypeInfo;
  if ( this->fields.sizeKind == 2 )
  {
    if ( (WORD1(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
      v24 = TutorialBigDialog_TypeInfo;
    }
    p_alphaMiniImgPath = &v24->static_fields->alphaMiniImgPath;
  }
  else
  {
    if ( (WORD1(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
      v24 = TutorialBigDialog_TypeInfo;
    }
    p_alphaMiniImgPath = &v24->static_fields->alphaImgPath;
  }
  v26 = *p_alphaMiniImgPath;
  v27 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v27,
    (Il2CppObject *)v9,
    Method_TutorialBigDialog___c__DisplayClass58_0__LoadAlpha_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v26, v27, 1, 0LL);
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
  System_Action_o *v17; // x20
  const MethodInfo *v18; // x2

  if ( (byte_4189A1A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, images);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&Method_TutorialBigDialog_LoadStart__, v7);
    byte_4189A1A = 1;
  }
  this->fields._loadIndex = 0;
  this->fields.loadByAsset = 0;
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.ImagePageList = (struct System_Collections_Generic_List_GameObject__o *)v8;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.ImagePageList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v16);
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v17 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_TutorialBigDialog_LoadStart__, 0LL);
  TutorialBigDialog__LoadAlpha(this, v17, v18);
}


void __fastcall TutorialBigDialog__LoadImages_28605060(
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
  System_Action_o *v17; // x20
  const MethodInfo *v18; // x2

  if ( (byte_4189A1B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, images);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&Method_TutorialBigDialog_LoadStartAssets__, v7);
    byte_4189A1B = 1;
  }
  this->fields._loadIndex = 0;
  this->fields.loadByAsset = 1;
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.ImagePageList = (struct System_Collections_Generic_List_GameObject__o *)v8;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.ImagePageList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v16);
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v17 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_TutorialBigDialog_LoadStartAssets__, 0LL);
  TutorialBigDialog__LoadAlpha(this, v17, v18);
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
  __int64 v10; // x0

  v3 = this;
  if ( (byte_4189A1F & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    this = (TutorialBigDialog_o *)sub_B2C35C(&Method_TutorialBigDialog__LoadStart_b__53_0__, v5);
    byte_4189A1F = 1;
  }
  TutorialImageLoadList = v3->fields.TutorialImageLoadList;
  if ( !TutorialImageLoadList )
    sub_B2C434(this, method);
  loadIndex = v3->fields._loadIndex;
  if ( (unsigned int)loadIndex >= TutorialImageLoadList->max_length )
  {
    v10 = sub_B2C460(this);
    sub_B2C400(v10, 0LL);
  }
  TuorialImagePath = TutorialBigDialog__GetTuorialImagePath(v3, TutorialImageLoadList->m_Items[loadIndex + 1], v2);
  v9 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v9, (Il2CppObject *)v3, Method_TutorialBigDialog__LoadStart_b__53_0__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
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
  __int64 v9; // x0

  v2 = this;
  if ( (byte_4189A20 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v3);
    this = (TutorialBigDialog_o *)sub_B2C35C(&Method_TutorialBigDialog__LoadStartAssets_b__54_0__, v4);
    byte_4189A20 = 1;
  }
  assetsImageLoadList = v2->fields.assetsImageLoadList;
  if ( !assetsImageLoadList )
    sub_B2C434(this, method);
  loadIndex = v2->fields._loadIndex;
  if ( (unsigned int)loadIndex >= assetsImageLoadList->max_length )
  {
    v9 = sub_B2C460(this);
    sub_B2C400(v9, 0LL);
  }
  v7 = assetsImageLoadList->m_Items[loadIndex];
  v8 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v8,
    (Il2CppObject *)v2,
    Method_TutorialBigDialog__LoadStartAssets_b__54_0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v7, v8, 1, 0LL);
}


void __fastcall TutorialBigDialog__OnBottomButton(TutorialBigDialog_o *this, const MethodInfo *method)
{
  TutorialBigDialog_o *v2; // x19
  __int64 v3; // x1
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x8
  const MethodInfo *v5; // x1

  v2 = this;
  if ( (byte_4189A2C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, method);
    this = (TutorialBigDialog_o *)sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_4189A2C = 1;
  }
  if ( !v2->fields.IsFading )
  {
    ImagePageList = v2->fields.ImagePageList;
    if ( !ImagePageList )
      sub_B2C434(this, method);
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
  __int64 v15; // x1
  NetworkManager_ResultCallbackFunc_o *v16; // x20
  const MethodInfo *v17; // x3

  if ( (byte_4189A2D & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, method);
    sub_B2C35C(&Method_NetworkManager_getRequest_TutorialSetRequest___, v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_B2C35C(&SoundManager_TypeInfo, v6);
    sub_B2C35C(&Method_TutorialBigDialog_EndTurorialRequest__, v7);
    sub_B2C35C(&TutorialFlag_TypeInfo, v8);
    byte_4189A2D = 1;
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
      TutorialFlag__Set_28613060(localFlagId, v9);
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
      v13 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
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
                                                                    (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        TutorialSetRequest__beginRequest(Request_WarBoardWallAttackRequest, this->fields.flagId, 0LL);
        return;
      }
LABEL_33:
      sub_B2C434(Request_WarBoardWallAttackRequest, v15);
    }
    if ( this->fields.eventFlagId == -1 || !this->fields.eventId )
    {
      TutorialBigDialog__Close(this, this->fields.closeCallbackFunc, v10);
    }
    else
    {
      v16 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v16,
        (Il2CppObject *)this,
        Method_TutorialBigDialog_EndTurorialRequest__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (TutorialSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                    v16,
                                                                    (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
      if ( !Request_WarBoardWallAttackRequest )
        goto LABEL_33;
      TutorialEventSetRequest__beginRequest(
        (TutorialEventSetRequest_o *)Request_WarBoardWallAttackRequest,
        this->fields.eventFlagId,
        this->fields.eventId,
        v17);
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
  if ( (byte_4189A2A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, method);
    this = (TutorialBigDialog_o *)sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_4189A2A = 1;
  }
  if ( !v2->fields.IsFading )
  {
    ImagePageList = v2->fields.ImagePageList;
    if ( !ImagePageList )
      sub_B2C434(this, method);
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
  if ( (byte_4189A2E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, *(_QWORD *)&idx);
    this = (TutorialBigDialog_o *)sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_4189A2E = 1;
  }
  if ( (idx & 0x80000000) == 0 && v4->fields.CurrentIndex != idx )
  {
    ImagePageList = v4->fields.ImagePageList;
    if ( !ImagePageList )
      sub_B2C434(this, *(_QWORD *)&idx);
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

  if ( (byte_4189A2B & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4189A2B = 1;
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
  __int64 v32; // x1
  UnityEngine_GameObject_o *CloseButton; // x0
  UnityEngine_Transform_o *v34; // x21
  TutorialBigDialog_c *v35; // x8
  struct System_Int32_array *v36; // x0
  struct System_Int32_array **p_TutorialImageLoadList; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  il2cpp_array_size_t max_length; // w9
  __int64 v45; // x8
  struct System_Int32_array *v46; // x9
  __int64 v47; // x10
  System_Int32_array *v48; // x1
  const MethodInfo *v49; // x2
  const MethodInfo *v50; // x2
  __int64 v51; // x0

  if ( (byte_4189A13 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, images);
    sub_B2C35C(&TutorialBigDialog_TypeInfo, v13);
    byte_4189A13 = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&flagId);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.endOpenCallbackFunc,
    (System_Int32_array **)endOpenFunc,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.endTurorialRequestFunc,
    (System_Int32_array **)endTurorialRequestFunc,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.closeCallbackFunc = closeFunc;
  sub_B2C2F8(
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
  *(_OWORD *)&this->fields.localFlagId = xmmword_2FFCFA0;
  this->fields.sizeKind = 1;
  if ( !CloseButton )
    goto LABEL_20;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0LL);
  v34 = (UnityEngine_Transform_o *)CloseButton;
  v35 = TutorialBigDialog_TypeInfo;
  if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v35 = TutorialBigDialog_TypeInfo;
  }
  if ( !v34 )
    goto LABEL_20;
  UnityEngine_Transform__set_localPosition(v34, v35->static_fields->baseCloseButtonPosition, 0LL);
  if ( !images )
    goto LABEL_20;
  v36 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, images->max_length);
  this->fields.TutorialImageLoadList = v36;
  p_TutorialImageLoadList = &this->fields.TutorialImageLoadList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.TutorialImageLoadList,
    (System_Int32_array **)v36,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  if ( (int)*(_QWORD *)&images->max_length >= 1 )
  {
    max_length = *(_QWORD *)&images->max_length;
    v45 = 8LL;
    do
    {
      if ( v45 - 8 >= (unsigned __int64)max_length )
        goto LABEL_19;
      v46 = *p_TutorialImageLoadList;
      if ( !*p_TutorialImageLoadList )
        goto LABEL_20;
      if ( v45 - 8 >= (unsigned __int64)v46->max_length )
      {
LABEL_19:
        v51 = sub_B2C460(CloseButton);
        sub_B2C400(v51, 0LL);
      }
      *((_DWORD *)&v46->obj.klass + v45) = *((_DWORD *)&images->obj.klass + v45);
      max_length = images->max_length;
      v47 = v45 - 7;
      ++v45;
    }
    while ( v47 < (int)max_length );
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMask((BaseDialog_o *)this, 0, 0LL);
  TutorialBigDialog__LoadImages(this, v48, v49);
  CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !CloseButton )
LABEL_20:
    sub_B2C434(CloseButton, v32);
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v50);
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
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x1
  UnityEngine_GameObject_o *CloseButton; // x0
  UnityEngine_Transform_o *v37; // x21
  TutorialBigDialog_c *v38; // x8
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  srcLineSprite_o *Component_srcLineSprite; // x20
  EventDelegate_Callback_o *v46; // x22
  EventDelegate_o *v47; // x21
  System_Int32_array *v48; // x1
  const MethodInfo *v49; // x2
  const MethodInfo *v50; // x2

  if ( (byte_4189A18 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, images);
    sub_B2C35C(&EventDelegate_Callback_TypeInfo, v9);
    sub_B2C35C(&EventDelegate_TypeInfo, v10);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UITouchPress___, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventDelegate__Add__, v12);
    sub_B2C35C(&Method_TutorialBigDialog__OpenAssets_b__46_0__, v13);
    sub_B2C35C(&Method_TutorialBigDialog__OpenAssets_b__46_1__, v14);
    sub_B2C35C(&TutorialBigDialog_TypeInfo, v15);
    byte_4189A18 = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&kind);
  v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_TutorialBigDialog__OpenAssets_b__46_0__, 0LL);
  this->fields.endOpenCallbackFunc = v16;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.endOpenCallbackFunc,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.endTurorialRequestFunc = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.endTurorialRequestFunc, 0LL, v23, v24, v25, v26, v27, v28);
  this->fields.closeCallbackFunc = closeFunc;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)closeFunc,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  CloseButton = this->fields.CloseButton;
  this->fields.configFlagId = 0;
  this->fields.sizeKind = kind;
  *(_OWORD *)&this->fields.flagId = xmmword_31A0A40;
  if ( !CloseButton )
    goto LABEL_15;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0LL);
  v37 = (UnityEngine_Transform_o *)CloseButton;
  v38 = TutorialBigDialog_TypeInfo;
  if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v38 = TutorialBigDialog_TypeInfo;
  }
  if ( !v37 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v37, v38->static_fields->miniCloseButtonPosition, 0LL);
  this->fields.TutorialImageLoadList = images;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.TutorialImageLoadList,
    (System_Int32_array **)images,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  CloseButton = this->fields.TouchMask;
  this->fields.isButtonEnable = 0;
  if ( !CloseButton )
    goto LABEL_15;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              CloseButton,
                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
  v46 = (EventDelegate_Callback_o *)sub_B2C42C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v46, (Il2CppObject *)this, Method_TutorialBigDialog__OpenAssets_b__46_1__, 0LL);
  v47 = (EventDelegate_o *)sub_B2C42C(EventDelegate_TypeInfo);
  EventDelegate___ctor_29723424(v47, v46, 0LL);
  if ( !Component_srcLineSprite
    || (CloseButton = (UnityEngine_GameObject_o *)Component_srcLineSprite->fields.mFSM) == 0LL
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)CloseButton,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v47,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventDelegate__Add__),
        BaseDialog__SetMask((BaseDialog_o *)this, 0, 0LL),
        TutorialBigDialog__LoadImages(this, v48, v49),
        (CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_15:
    sub_B2C434(CloseButton, v35);
  }
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v50);
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
  __int64 v31; // x1
  UnityEngine_GameObject_o *CloseButton; // x0
  UnityEngine_Transform_o *v33; // x21
  TutorialBigDialog_c *v34; // x8
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array *v41; // x1
  const MethodInfo *v42; // x2
  const MethodInfo *v43; // x2

  if ( (byte_4189A19 & 1) == 0 )
  {
    sub_B2C35C(&TutorialBigDialog_TypeInfo, images);
    byte_4189A19 = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&configId);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.endOpenCallbackFunc,
    (System_Int32_array **)endOpenFunc,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.endTurorialRequestFunc,
    (System_Int32_array **)endTurorialRequestFunc,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.closeCallbackFunc = closeFunc;
  sub_B2C2F8(
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
  *(_OWORD *)&this->fields.flagId = xmmword_31A0A40;
  this->fields.sizeKind = 1;
  if ( !CloseButton )
    goto LABEL_12;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0LL);
  v33 = (UnityEngine_Transform_o *)CloseButton;
  v34 = TutorialBigDialog_TypeInfo;
  if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v34 = TutorialBigDialog_TypeInfo;
  }
  if ( !v33
    || (UnityEngine_Transform__set_localPosition(v33, v34->static_fields->baseCloseButtonPosition, 0LL),
        this->fields.assetsImageLoadList = images,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.assetsImageLoadList,
          (System_Int32_array **)images,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40),
        this->fields.isButtonEnable = 0,
        BaseDialog__SetMask((BaseDialog_o *)this, 0, 0LL),
        TutorialBigDialog__LoadImages_28605060(this, v41, v42),
        (CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_12:
    sub_B2C434(CloseButton, v31);
  }
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v43);
}


void __fastcall TutorialBigDialog__OpenWindow(TutorialBigDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4189A25 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&Method_TutorialBigDialog_EndOpen__, v4);
    byte_4189A25 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v6);
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  v7 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
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
  __int64 v29; // x1
  UnityEngine_GameObject_o *CloseButton; // x0
  UnityEngine_Transform_o *v31; // x21
  TutorialBigDialog_c *v32; // x8
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array *v39; // x1
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x2

  if ( (byte_4189A17 & 1) == 0 )
  {
    sub_B2C35C(&TutorialBigDialog_TypeInfo, images);
    byte_4189A17 = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, (const MethodInfo *)closeFunc);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.endOpenCallbackFunc,
    (System_Int32_array **)endOpenFunc,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.endTurorialRequestFunc,
    (System_Int32_array **)endTurorialRequestFunc,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.closeCallbackFunc = closeFunc;
  sub_B2C2F8(
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
  *(_OWORD *)&this->fields.flagId = xmmword_31A0A40;
  this->fields.sizeKind = 1;
  if ( !CloseButton )
    goto LABEL_12;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0LL);
  v31 = (UnityEngine_Transform_o *)CloseButton;
  v32 = TutorialBigDialog_TypeInfo;
  if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v32 = TutorialBigDialog_TypeInfo;
  }
  if ( !v31
    || (UnityEngine_Transform__set_localPosition(v31, v32->static_fields->baseCloseButtonPosition, 0LL),
        this->fields.assetsImageLoadList = images,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.assetsImageLoadList,
          (System_Int32_array **)images,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38),
        this->fields.isButtonEnable = 0,
        BaseDialog__SetMask((BaseDialog_o *)this, 0, 0LL),
        TutorialBigDialog__LoadImages_28605060(this, v39, v40),
        (CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_12:
    sub_B2C434(CloseButton, v29);
  }
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v41);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialBigDialog__Open_28603232(
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
  __int64 v32; // x1
  UnityEngine_GameObject_o *CloseButton; // x0
  UnityEngine_Transform_o *v34; // x21
  TutorialBigDialog_c *v35; // x8
  struct System_Int32_array *v36; // x0
  struct System_Int32_array **p_TutorialImageLoadList; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  il2cpp_array_size_t max_length; // w9
  __int64 v45; // x8
  struct System_Int32_array *v46; // x9
  __int64 v47; // x10
  System_Int32_array *v48; // x1
  const MethodInfo *v49; // x2
  const MethodInfo *v50; // x2
  __int64 v51; // x0

  if ( (byte_4189A14 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, images);
    sub_B2C35C(&TutorialBigDialog_TypeInfo, v13);
    byte_4189A14 = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&flagId);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.endOpenCallbackFunc,
    (System_Int32_array **)endOpenFunc,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.endTurorialRequestFunc,
    (System_Int32_array **)endTurorialRequestFunc,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.closeCallbackFunc = closeFunc;
  sub_B2C2F8(
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
  v34 = (UnityEngine_Transform_o *)CloseButton;
  v35 = TutorialBigDialog_TypeInfo;
  if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v35 = TutorialBigDialog_TypeInfo;
  }
  if ( !v34 )
    goto LABEL_20;
  UnityEngine_Transform__set_localPosition(v34, v35->static_fields->baseCloseButtonPosition, 0LL);
  if ( !images )
    goto LABEL_20;
  v36 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, images->max_length);
  this->fields.TutorialImageLoadList = v36;
  p_TutorialImageLoadList = &this->fields.TutorialImageLoadList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.TutorialImageLoadList,
    (System_Int32_array **)v36,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  if ( (int)*(_QWORD *)&images->max_length >= 1 )
  {
    max_length = *(_QWORD *)&images->max_length;
    v45 = 8LL;
    do
    {
      if ( v45 - 8 >= (unsigned __int64)max_length )
        goto LABEL_19;
      v46 = *p_TutorialImageLoadList;
      if ( !*p_TutorialImageLoadList )
        goto LABEL_20;
      if ( v45 - 8 >= (unsigned __int64)v46->max_length )
      {
LABEL_19:
        v51 = sub_B2C460(CloseButton);
        sub_B2C400(v51, 0LL);
      }
      *((_DWORD *)&v46->obj.klass + v45) = *((_DWORD *)&images->obj.klass + v45);
      max_length = images->max_length;
      v47 = v45 - 7;
      ++v45;
    }
    while ( v47 < (int)max_length );
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMask((BaseDialog_o *)this, 0, 0LL);
  TutorialBigDialog__LoadImages(this, v48, v49);
  CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !CloseButton )
LABEL_20:
    sub_B2C434(CloseButton, v32);
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v50);
}


void __fastcall TutorialBigDialog__Open_28603756(
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
  __int64 v34; // x1
  UnityEngine_GameObject_o *CloseButton; // x0
  UnityEngine_Transform_o *v36; // x21
  TutorialBigDialog_c *v37; // x8
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array *v44; // x1
  const MethodInfo *v45; // x2
  const MethodInfo *v46; // x2

  if ( (byte_4189A15 & 1) == 0 )
  {
    sub_B2C35C(&TutorialBigDialog_TypeInfo, images);
    byte_4189A15 = 1;
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.endOpenCallbackFunc,
    (System_Int32_array **)endOpenFunc,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.endTurorialRequestFunc,
    (System_Int32_array **)endTurorialRequestFunc,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.closeCallbackFunc = closeFunc;
  sub_B2C2F8(
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
  v36 = (UnityEngine_Transform_o *)CloseButton;
  v37 = TutorialBigDialog_TypeInfo;
  if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v37 = TutorialBigDialog_TypeInfo;
  }
  if ( !v36
    || (UnityEngine_Transform__set_localPosition(v36, v37->static_fields->baseCloseButtonPosition, 0LL),
        this->fields.TutorialImageLoadList = images,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.TutorialImageLoadList,
          (System_Int32_array **)images,
          v38,
          v39,
          v40,
          v41,
          v42,
          v43),
        this->fields.isButtonEnable = 0,
        BaseDialog__SetMask((BaseDialog_o *)this, 0, 0LL),
        TutorialBigDialog__LoadImages(this, v44, v45),
        (CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_13:
    sub_B2C434(CloseButton, v34);
  }
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v46);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialBigDialog__Open_28604160(
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
  __int64 v34; // x1
  UnityEngine_GameObject_o *CloseButton; // x0
  UnityEngine_Transform_o *v36; // x21
  TutorialBigDialog_c *v37; // x8
  struct System_Int32_array *v38; // x0
  struct System_Int32_array **p_TutorialImageLoadList; // x21
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  il2cpp_array_size_t max_length; // w9
  __int64 v47; // x8
  struct System_Int32_array *v48; // x9
  __int64 v49; // x10
  System_Int32_array *v50; // x1
  const MethodInfo *v51; // x2
  const MethodInfo *v52; // x2
  __int64 v53; // x0

  if ( (byte_4189A16 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, images);
    sub_B2C35C(&TutorialBigDialog_TypeInfo, v15);
    byte_4189A16 = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&flagId);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.endOpenCallbackFunc,
    (System_Int32_array **)endOpenFunc,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.endTurorialRequestFunc,
    (System_Int32_array **)endTurorialRequestFunc,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.closeCallbackFunc = closeFunc;
  sub_B2C2F8(
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
  v36 = (UnityEngine_Transform_o *)CloseButton;
  v37 = TutorialBigDialog_TypeInfo;
  if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v37 = TutorialBigDialog_TypeInfo;
  }
  if ( !v36 )
    goto LABEL_20;
  UnityEngine_Transform__set_localPosition(v36, v37->static_fields->baseCloseButtonPosition, 0LL);
  if ( !images )
    goto LABEL_20;
  v38 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, images->max_length);
  this->fields.TutorialImageLoadList = v38;
  p_TutorialImageLoadList = &this->fields.TutorialImageLoadList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.TutorialImageLoadList,
    (System_Int32_array **)v38,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  if ( (int)*(_QWORD *)&images->max_length >= 1 )
  {
    max_length = *(_QWORD *)&images->max_length;
    v47 = 8LL;
    do
    {
      if ( v47 - 8 >= (unsigned __int64)max_length )
        goto LABEL_19;
      v48 = *p_TutorialImageLoadList;
      if ( !*p_TutorialImageLoadList )
        goto LABEL_20;
      if ( v47 - 8 >= (unsigned __int64)v48->max_length )
      {
LABEL_19:
        v53 = sub_B2C460(CloseButton);
        sub_B2C400(v53, 0LL);
      }
      *((_DWORD *)&v48->obj.klass + v47) = *((_DWORD *)&images->obj.klass + v47);
      max_length = images->max_length;
      v49 = v47 - 7;
      ++v47;
    }
    while ( v49 < (int)max_length );
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMask((BaseDialog_o *)this, 0, 0LL);
  TutorialBigDialog__LoadImages(this, v50, v51);
  CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !CloseButton )
LABEL_20:
    sub_B2C434(CloseButton, v34);
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v52);
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
    sub_B2C434(TouchMask, isDisp);
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
  if ( (byte_4189A27 & 1) == 0 )
  {
    sub_B2C35C(&AndroidBackKeyManager_TypeInfo, isDisp);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____67395032, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v6);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_13462/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, v8);
    this = (TutorialBigDialog_o *)sub_B2C35C(&StringLiteral_13463/*"TUTORIAL_IMAGE_DIALOG_PREV"*/, v9);
    byte_4189A27 = 1;
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
                                    (const MethodInfo_172DFBC *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____67395032);
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
    this = (TutorialBigDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13462/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, 0LL);
    if ( !basePanelList )
LABEL_45:
      sub_B2C434(this, isDisp);
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
                                  (const MethodInfo_172DFBC *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____67395032);
  if ( !this )
    goto LABEL_45;
  if ( !LODWORD(this->fields.basePanel) )
  {
LABEL_46:
    v17 = sub_B2C460(this);
    sub_B2C400(v17, 0LL);
  }
  v15 = (UILabel_o *)this->fields.basePanelList;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (TutorialBigDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13463/*"TUTORIAL_IMAGE_DIALOG_PREV"*/, 0LL);
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
  __int64 v26; // x1
  const MethodInfo *v27; // x2
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x23
  int size; // w26
  unsigned int v30; // w27
  __int64 v31; // x8
  UnityEngine_GameObject_o *v32; // x23
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct UITexture_o *v39; // x24
  UITexture_c *klass; // x8
  long double v41; // q0
  UnityEngine_GameObject_o *v42; // x0
  bool v43; // w1
  UnityEngine_GameObject_o *gameObject; // x21
  TutorialBigDialog_c *v45; // x8
  UnityEngine_GameObject_o *v46; // x0
  UITweener_o *v47; // x20
  EventDelegate_Callback_o *v48; // x21

  if ( (byte_4189A26 & 1) == 0 )
  {
    sub_B2C35C(&EventDelegate_Callback_TypeInfo, *(_QWORD *)&dispIndex);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UITexture___, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v14);
    sub_B2C35C(&Method_TutorialBigDialog__UpdatePage_b__60_0__, v15);
    sub_B2C35C(&TutorialBigDialog_TypeInfo, v16);
    byte_4189A26 = 1;
  }
  CurrentIndex = this->fields.CurrentIndex;
  this->fields.FadeInTarget = 0LL;
  p_FadeInTarget = &this->fields.FadeInTarget;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.FadeInTarget,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.FadeOutTarget = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.FadeOutTarget, 0LL, v19, v20, v21, v22, v23, v24);
  ImagePageList = this->fields.ImagePageList;
  if ( !ImagePageList )
    goto LABEL_33;
  size = ImagePageList->fields._size;
  if ( size >= 1 )
  {
    LODWORD(v8) = 1000593162;
    v30 = 0;
    LODWORD(v9) = 1.0;
    while ( 1 )
    {
      if ( ImagePageList->fields._size <= v30 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v31 = (__int64)ImagePageList->fields._items + 8 * (int)v30;
      v32 = *(UnityEngine_GameObject_o **)(v31 + 32);
      if ( !v32 )
        goto LABEL_33;
      Component_srcLineSprite = (struct UITexture_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        *(UnityEngine_GameObject_o **)(v31 + 32),
                                                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
      v39 = Component_srcLineSprite;
      if ( dispIndex == v30 )
        break;
      if ( v30 == this->fields.CurrentIndex && CurrentIndex != dispIndex )
      {
        this->fields.FadeOutTarget = Component_srcLineSprite;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.FadeOutTarget,
          (System_Int32_array **)Component_srcLineSprite,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
LABEL_20:
        v43 = 1;
        v42 = v32;
        goto LABEL_21;
      }
      v42 = v32;
      v43 = 0;
LABEL_21:
      UnityEngine_GameObject__SetActive(v42, v43, 0LL);
      if ( (int)++v30 >= size )
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
      v41 = v9;
    }
    else
    {
      *p_FadeInTarget = Component_srcLineSprite;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.FadeInTarget,
        (System_Int32_array **)Component_srcLineSprite,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
      if ( !v39 )
        goto LABEL_33;
      klass = v39->klass;
      Component_srcLineSprite = v39;
      v41 = v8;
    }
    ((void (__fastcall *)(struct UITexture_o *, Il2CppMethodPointer, long double))klass->vtable._8_set_alpha.method)(
      Component_srcLineSprite,
      klass->vtable._9_CalculateFinalAlpha.methodPtr,
      v41);
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
      v45 = TutorialBigDialog_TypeInfo;
      if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
        v45 = TutorialBigDialog_TypeInfo;
      }
      TweenAlpha__Begin(gameObject, v45->static_fields->FADE_TIME, 0.0, 0LL);
      Component_srcLineSprite = *p_FadeInTarget;
      if ( *p_FadeInTarget )
      {
        v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
        v47 = (UITweener_o *)TweenAlpha__Begin(v46, TutorialBigDialog_TypeInfo->static_fields->FADE_TIME, 1.0, 0LL);
        v48 = (EventDelegate_Callback_o *)sub_B2C42C(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(v48, (Il2CppObject *)this, Method_TutorialBigDialog__UpdatePage_b__60_0__, 0LL);
        if ( v47 )
        {
          UITweener__SetOnFinished(v47, v48, 0LL);
          return;
        }
      }
    }
LABEL_33:
    sub_B2C434(Component_srcLineSprite, v26);
  }
  TutorialBigDialog__UpdateButtons(this, 1, v27);
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
  UnityEngine_Texture2D_o *Object_WarBoardWaitTimeSetting; // x0
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  __int64 v15; // x0

  v4 = this;
  if ( (byte_4189A33 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, data);
    sub_B2C35C(&Method_AssetData_GetObject_Texture2D____67377648, v5);
    sub_B2C35C(&Method_TutorialBigDialog__LoadStartAssets_b__54_1__, v6);
    this = (TutorialBigDialog_o *)sub_B2C35C(&StringLiteral_16007/*"_L_"*/, v7);
    byte_4189A33 = 1;
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
                                  (System_String_o *)StringLiteral_16007/*"_L_"*/,
                                  0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)v4, Method_TutorialBigDialog__LoadStartAssets_b__54_1__, 0LL);
    TutorialBigDialog__AddScrollImg(v4, data, v8, v9);
    return;
  }
  assetsImageLoadList = v4->fields.assetsImageLoadList;
  if ( !assetsImageLoadList )
LABEL_12:
    sub_B2C434(this, data);
  v11 = v4->fields._loadIndex + 1;
  if ( v11 >= assetsImageLoadList->max_length )
  {
LABEL_13:
    v15 = sub_B2C460(this);
    sub_B2C400(v15, 0LL);
  }
  Object_WarBoardWaitTimeSetting = (UnityEngine_Texture2D_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                data,
                                                                assetsImageLoadList->m_Items[v11],
                                                                (const MethodInfo_1720344 *)Method_AssetData_GetObject_Texture2D____67377648);
  TutorialBigDialog__AddImg(v4, Object_WarBoardWaitTimeSetting, v13);
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
  UnityEngine_Texture2D_o *Object_WarBoardWaitTimeSetting; // x0
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  __int64 v17; // x0

  v4 = this;
  if ( (byte_4189A32 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, data);
    sub_B2C35C(&Method_AssetData_GetObject_Texture2D____67377648, v5);
    sub_B2C35C(&Method_TutorialBigDialog__LoadStart_b__53_1__, v6);
    this = (TutorialBigDialog_o *)sub_B2C35C(&StringLiteral_16007/*"_L_"*/, v7);
    byte_4189A32 = 1;
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
                                  (System_String_o *)StringLiteral_16007/*"_L_"*/,
                                  0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)v4, Method_TutorialBigDialog__LoadStart_b__53_1__, 0LL);
    TutorialBigDialog__AddScrollImg(v4, data, v9, v10);
    return;
  }
  TutorialImageLoadList = v4->fields.TutorialImageLoadList;
  if ( !TutorialImageLoadList )
LABEL_12:
    sub_B2C434(this, data);
  loadIndex = v4->fields._loadIndex;
  if ( (unsigned int)loadIndex >= TutorialImageLoadList->max_length )
  {
LABEL_13:
    v17 = sub_B2C460(this);
    sub_B2C400(v17, 0LL);
  }
  TuorialImageName = TutorialBigDialog__GetTuorialImageName(this, TutorialImageLoadList->m_Items[loadIndex + 1], v8);
  Object_WarBoardWaitTimeSetting = (UnityEngine_Texture2D_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                data,
                                                                TuorialImageName,
                                                                (const MethodInfo_1720344 *)Method_AssetData_GetObject_Texture2D____67377648);
  TutorialBigDialog__AddImg(v4, Object_WarBoardWaitTimeSetting, v15);
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


void __fastcall TutorialBigDialog___UpdatePage_b__60_0(TutorialBigDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *FadeOutTarget; // x0
  const MethodInfo *v5; // x2

  TutorialBigDialog__refreshCurrent(this, method);
  FadeOutTarget = (UnityEngine_Component_o *)this->fields.FadeOutTarget;
  if ( !FadeOutTarget
    || (FadeOutTarget = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(FadeOutTarget, 0LL)) == 0LL )
  {
    sub_B2C434(FadeOutTarget, v3);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)FadeOutTarget, 0, 0LL);
  this->fields.IsFading = 0;
  TutorialBigDialog__UpdateButtons(this, 1, v5);
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
  if ( (byte_4189A28 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TutorialImageLong___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    this = (TutorialBigDialog_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_4189A28 = 1;
  }
  ImagePageList = v2->fields.ImagePageList;
  if ( !ImagePageList )
    goto LABEL_16;
  size = ImagePageList->fields._size;
  CurrentIndex = v2->fields.CurrentIndex;
  if ( size > (int)CurrentIndex )
  {
    if ( size <= (unsigned int)CurrentIndex )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    this = (TutorialBigDialog_o *)ImagePageList->fields._items->m_Items[CurrentIndex];
    if ( !this )
      goto LABEL_16;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)this,
                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TutorialImageLong___);
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
      sub_B2C434(this, method);
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
  UnityEngine_Material_o *v12; // x21
  struct TutorialImageLong_o *comp; // x8
  TutorialBigDialog_o *v14; // x22
  struct TutorialBigDialog_o *v15; // x8
  UnityEngine_Texture_o *Object_WarBoardWaitTimeSetting; // x0
  struct TutorialBigDialog_o *v17; // x8

  v4 = this;
  if ( (byte_4185366 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_Texture2D____67377648, aData);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, v5);
    sub_B2C35C(&UnityEngine_Material_TypeInfo, v6);
    sub_B2C35C(&TutorialBigDialog_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_4537/*"Custom/SpriteWithMask"*/, v8);
    this = (TutorialBigDialog___c__DisplayClass56_0_o *)sub_B2C35C(&StringLiteral_16015/*"_MaskTex"*/, v9);
    byte_4185366 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  _4__this->fields.baseTexAssetData = aData;
  sub_B2C2F8(&_4__this->fields.baseTexAssetData, aData);
  v11 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4537/*"Custom/SpriteWithMask"*/, 0LL);
  v12 = (UnityEngine_Material_o *)sub_B2C42C(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v12, v11, 0LL);
  comp = v4->fields.comp;
  if ( !comp )
    goto LABEL_17;
  this = (TutorialBigDialog___c__DisplayClass56_0_o *)comp->fields.BaseImage;
  if ( !this )
    goto LABEL_17;
  ((void (__fastcall *)(TutorialBigDialog___c__DisplayClass56_0_o *, UnityEngine_Material_o *, Il2CppMethodPointer))this->klass[1].vtable._2_GetHashCode.method)(
    this,
    v12,
    this->klass[1].vtable._3_ToString.methodPtr);
  v14 = v4->fields.__4__this;
  this = (TutorialBigDialog___c__DisplayClass56_0_o *)TutorialBigDialog_TypeInfo;
  if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
  }
  if ( !v14 )
    goto LABEL_17;
  this = (TutorialBigDialog___c__DisplayClass56_0_o *)TutorialBigDialog__GetTuorialImageName(
                                                        v14,
                                                        TutorialBigDialog_TypeInfo->static_fields->baseImgNo,
                                                        0LL);
  if ( !aData )
    goto LABEL_17;
  this = (TutorialBigDialog___c__DisplayClass56_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                        aData,
                                                        (System_String_o *)this,
                                                        (const MethodInfo_1720344 *)Method_AssetData_GetObject_Texture2D____67377648);
  if ( !v12
    || (UnityEngine_Material__set_mainTexture(v12, (UnityEngine_Texture_o *)this, 0LL),
        (v15 = v4->fields.__4__this) == 0LL)
    || (this = (TutorialBigDialog___c__DisplayClass56_0_o *)v15->fields.alphaTexAssetData) == 0LL
    || (Object_WarBoardWaitTimeSetting = (UnityEngine_Texture_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                    (AssetData_o *)this,
                                                                    TutorialBigDialog_TypeInfo->static_fields->alphaImgName,
                                                                    (const MethodInfo_1720344 *)Method_AssetData_GetObject_Texture2D____67377648),
        UnityEngine_Material__SetTexture(
          v12,
          (System_String_o *)StringLiteral_16015/*"_MaskTex"*/,
          Object_WarBoardWaitTimeSetting,
          0LL),
        (v17 = v4->fields.__4__this) == 0LL)
    || (this = (TutorialBigDialog___c__DisplayClass56_0_o *)v17->fields.ImagePageList) == 0LL )
  {
LABEL_17:
    sub_B2C434(this, aData);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v4->fields.obj,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
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
    sub_B2C434(0LL, data);
  _4__this->fields.alphaTexAssetData = data;
  sub_B2C2F8(&_4__this->fields.alphaTexAssetData, data);
  ActionExtensions__Call(this->fields.callback, 0LL);
}