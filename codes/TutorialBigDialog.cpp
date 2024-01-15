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

  if ( (byte_40FB8F8 & 1) == 0 )
  {
    sub_B16FFC(&TutorialBigDialog_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_14517/*"Tutorial/tutorial_alpha"*/, v8);
    sub_B16FFC(&StringLiteral_17524/*"combine_tutorial_alpha"*/, v9);
    sub_B16FFC(&StringLiteral_14515/*"Tutorial/combine_tutorial_alpha"*/, v10);
    sub_B16FFC(&StringLiteral_22735/*"tutorial_alpha"*/, v11);
    byte_40FB8F8 = 1;
  }
  TutorialBigDialog_TypeInfo->static_fields->FADE_TIME = 0.3;
  static_fields = TutorialBigDialog_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_14517/*"Tutorial/tutorial_alpha"*/;
  static_fields->alphaImgPath = (struct System_String_o *)StringLiteral_14517/*"Tutorial/tutorial_alpha"*/;
  sub_B16F98((BattleServantConfConponent_o *)&static_fields->alphaImgPath, v13, v2, v3, v4, v5, v6, v7);
  v14 = TutorialBigDialog_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_22735/*"tutorial_alpha"*/;
  v14->alphaImgName = (struct System_String_o *)StringLiteral_22735/*"tutorial_alpha"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v14->alphaImgName, v15, v16, v17, v18, v19, v20, v21);
  v22 = TutorialBigDialog_TypeInfo->static_fields;
  v23 = (System_Int32_array **)StringLiteral_14515/*"Tutorial/combine_tutorial_alpha"*/;
  v22->alphaMiniImgPath = (struct System_String_o *)StringLiteral_14515/*"Tutorial/combine_tutorial_alpha"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v22->alphaMiniImgPath, v23, v24, v25, v26, v27, v28, v29);
  v30 = TutorialBigDialog_TypeInfo->static_fields;
  v31 = (System_Int32_array **)StringLiteral_17524/*"combine_tutorial_alpha"*/;
  v30->alphaMiniImgName = (struct System_String_o *)StringLiteral_17524/*"combine_tutorial_alpha"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v30->alphaMiniImgName, v31, v32, v33, v34, v35, v36, v37);
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
  if ( (byte_40FB8F7 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FB8F7 = 1;
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
  System_String_o *v18; // x0
  srcLineSprite_o *Component_srcLineSprite; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t layer; // w22
  UnityEngine_Shader_o *v22; // x24
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  UnityEngine_Material_o *v27; // x22
  TutorialBigDialog_c *v28; // x0
  System_String_o **p_alphaMiniImgName; // x8
  AssetData_o *alphaTexAssetData; // x0
  UnityEngine_Texture_o *Object_WarBoardWaitTimeSetting; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v33; // x21
  UnityEngine_Transform_o *v34; // x0
  UnityEngine_Transform_o *v35; // x21
  int v36; // s0
  UnityEngine_Transform_o *v39; // x21
  int v40; // s0
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x0

  if ( (byte_40FB8E8 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_Texture2D____66802808, tex);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UITexture___, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v6);
    sub_B16FFC(&UnityEngine_Material_TypeInfo, v7);
    sub_B16FFC(&NGUITools_TypeInfo, v8);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&TutorialBigDialog_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_4519/*"Custom/SpriteWithMask"*/, v12);
    sub_B16FFC(&StringLiteral_7470/*"Image"*/, v13);
    sub_B16FFC(&StringLiteral_15952/*"_MaskTex"*/, v14);
    byte_40FB8E8 = 1;
  }
  TutorialImagePrefab = this->fields.TutorialImagePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v16 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                  (UnityEngine_UI_Dropdown_DropdownItem_o *)TutorialImagePrefab,
                                  (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v17 = System_Int32__ToString((int)this + 240, 0LL);
  v18 = System_String__Concat_43743732((System_String_o *)StringLiteral_7470/*"Image"*/, v17, 0LL);
  if ( !v16 )
    goto LABEL_29;
  UnityEngine_Object__set_name(v16, v18, 0LL);
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)v16,
                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_29;
  layer = UnityEngine_GameObject__get_layer(gameObject, 0LL);
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__SetLayer((UnityEngine_GameObject_o *)v16, layer, 0LL);
  v22 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4519/*"Custom/SpriteWithMask"*/, 0LL);
  v27 = (UnityEngine_Material_o *)sub_B170CC(UnityEngine_Material_TypeInfo, v23, v24, v25, v26);
  UnityEngine_Material___ctor(v27, v22, 0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_29;
  ((void (__fastcall *)(srcLineSprite_o *, UnityEngine_Material_o *, Il2CppMethodPointer))Component_srcLineSprite->klass[1].vtable._2_GetHashCode.method)(
    Component_srcLineSprite,
    v27,
    Component_srcLineSprite->klass[1].vtable._3_ToString.methodPtr);
  if ( !v27 )
    goto LABEL_29;
  UnityEngine_Material__set_mainTexture(v27, (UnityEngine_Texture_o *)tex, 0LL);
  v28 = TutorialBigDialog_TypeInfo;
  if ( this->fields.sizeKind == 2 )
  {
    if ( (WORD1(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
      v28 = TutorialBigDialog_TypeInfo;
    }
    p_alphaMiniImgName = &v28->static_fields->alphaMiniImgName;
  }
  else
  {
    if ( (WORD1(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
      v28 = TutorialBigDialog_TypeInfo;
    }
    p_alphaMiniImgName = &v28->static_fields->alphaImgName;
  }
  alphaTexAssetData = this->fields.alphaTexAssetData;
  if ( !alphaTexAssetData )
    goto LABEL_29;
  Object_WarBoardWaitTimeSetting = (UnityEngine_Texture_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                              alphaTexAssetData,
                                                              *p_alphaMiniImgName,
                                                              (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_Texture2D____66802808);
  UnityEngine_Material__SetTexture(v27, (System_String_o *)StringLiteral_15952/*"_MaskTex"*/, Object_WarBoardWaitTimeSetting, 0LL);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v16, 0, 0LL);
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v16, 0LL);
  if ( !this->fields.ImageRoot )
    goto LABEL_29;
  v33 = transform;
  v34 = UnityEngine_GameObject__get_transform(this->fields.ImageRoot, 0LL);
  if ( !v33 )
    goto LABEL_29;
  UnityEngine_Transform__set_parent(v33, v34, 0LL);
  v35 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v16, 0LL);
  *(UnityEngine_Vector3_o *)&v36 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v35
    || (UnityEngine_Transform__set_localPosition(v35, *(UnityEngine_Vector3_o *)&v36, 0LL),
        v39 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v16, 0LL),
        *(UnityEngine_Vector3_o *)&v40 = UnityEngine_Vector3__get_one(0LL),
        !v39)
    || (UnityEngine_Transform__set_localScale(v39, *(UnityEngine_Vector3_o *)&v40, 0LL),
        (ImagePageList = this->fields.ImagePageList) == 0LL) )
  {
LABEL_29:
    sub_B170D4();
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)ImagePageList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialBigDialog__AddScrollImg(
        TutorialBigDialog_o *this,
        AssetData_o *data,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  __int64 v21; // x1
  __int64 v22; // x19
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
  void *ObjectNameList; // x0
  __int64 v36; // x1
  const MethodInfo *v37; // x2
  int v38; // w8
  _DWORD *v39; // x24
  unsigned int v40; // w27
  UnityEngine_Texture_o *v41; // x25
  UnityEngine_Texture_o *v42; // x20
  char *v43; // x21
  System_String_o *v44; // x0
  System_String_o **v45; // x21
  System_String_o *v46; // t1
  char v47; // w26
  UnityEngine_Texture_o *v48; // x23
  UnityEngine_UI_Dropdown_DropdownItem_o *TutorialImageLongPrefab; // x22
  System_Int32_array **v50; // x0
  UnityEngine_GameObject_o **v51; // x22
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  UnityEngine_Object_o *v58; // x24
  System_String_o *v59; // x0
  System_String_o *v60; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  __int64 v62; // x24
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  UnityEngine_GameObject_o *v69; // x26
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t layer; // w27
  UnityEngine_Shader_o *v72; // x27
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  UnityEngine_Material_o *v77; // x26
  __int64 v78; // x0
  UIWidget_o *v79; // x0
  int klass_high; // w21
  UIWidget_o *v81; // x25
  UITexture_o *v82; // x25
  int v83; // w26
  int v84; // w27
  int32_t baseWidth; // s8
  int v86; // w28
  int v87; // w0
  float v88; // s4
  float v89; // s5
  float v90; // s6
  float v91; // s7
  UnityEngine_BoxCollider_o *v92; // x0
  UnityEngine_BoxCollider_o *v93; // x0
  UIScrollView_o *v94; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v96; // x21
  UnityEngine_Transform_o *v97; // x0
  UnityEngine_Transform_o *v98; // x21
  int v99; // s0
  UnityEngine_Transform_o *v102; // x21
  int v103; // s0
  __int64 v106; // x1
  __int64 v107; // x2
  __int64 v108; // x3
  __int64 v109; // x4
  AssetLoader_LoadEndDataHandler_o *v110; // x21
  const MethodInfo *v111; // x2
  TutorialBigDialog_c *v112; // x0
  System_String_o *TuorialImagePath; // x19
  TutorialBigDialog_o *v114; // [xsp+8h] [xbp-78h]
  MethodInfo methoda; // [xsp+10h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v116; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v117; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v118; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v119; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FB8E9 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_Texture2D____66802808, data);
    sub_B16FFC(&AssetManager_TypeInfo, v8);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TutorialImageLong___, v9);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Material_TypeInfo, v11);
    sub_B16FFC(&NGUITools_TypeInfo, v12);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    sub_B16FFC(&TutorialBigDialog_TypeInfo, v15);
    sub_B16FFC(&Method_TutorialBigDialog___c__DisplayClass56_0__AddScrollImg_b__0__, v16);
    sub_B16FFC(&TutorialBigDialog___c__DisplayClass56_0_TypeInfo, v17);
    sub_B16FFC(&StringLiteral_16248/*"alpha"*/, v18);
    sub_B16FFC(&StringLiteral_4519/*"Custom/SpriteWithMask"*/, v19);
    sub_B16FFC(&StringLiteral_7470/*"Image"*/, v20);
    sub_B16FFC(&StringLiteral_15952/*"_MaskTex"*/, v21);
    byte_40FB8E9 = 1;
  }
  v22 = sub_B170CC(TutorialBigDialog___c__DisplayClass56_0_TypeInfo, data, callback, method, v4);
  TutorialBigDialog___c__DisplayClass56_0___ctor((TutorialBigDialog___c__DisplayClass56_0_o *)v22, 0LL);
  if ( !v22 )
    goto LABEL_63;
  *(_QWORD *)(v22 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v22 + 16), (System_Int32_array **)this, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v22 + 40) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v22 + 40), (System_Int32_array **)callback, v29, v30, v31, v32, v33, v34);
  if ( !data )
    goto LABEL_63;
  ObjectNameList = AssetData__GetObjectNameList(data, 0LL);
  if ( !ObjectNameList )
    goto LABEL_63;
  v114 = this;
  v38 = *((_DWORD *)ObjectNameList + 6);
  v39 = ObjectNameList;
  if ( v38 < 1 )
  {
    v42 = 0LL;
    v48 = 0LL;
    HIDWORD(methoda.klass) = 0;
  }
  else
  {
    HIDWORD(methoda.klass) = 0;
    v40 = 0;
    v41 = 0LL;
    v42 = 0LL;
    do
    {
      if ( v40 >= v38 )
        goto LABEL_62;
      v43 = (char *)&v39[2 * v40];
      v46 = (System_String_o *)*((_QWORD *)v43 + 4);
      v45 = (System_String_o **)(v43 + 32);
      v44 = v46;
      if ( !v46 )
        goto LABEL_63;
      ObjectNameList = (void *)System_String__Contains(v44, (System_String_o *)StringLiteral_16248/*"alpha"*/, 0LL);
      if ( v40 >= v39[6] )
      {
LABEL_62:
        sub_B17100(ObjectNameList, v36, v37);
        sub_B170A0();
      }
      v47 = (char)ObjectNameList;
      ObjectNameList = AssetData__GetObject_WarBoardWaitTimeSetting_(
                         data,
                         *v45,
                         (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_Texture2D____66802808);
      v48 = (UnityEngine_Texture_o *)ObjectNameList;
      if ( (v47 & 1) == 0 )
      {
        if ( v40 >= v39[6] )
          goto LABEL_62;
        v42 = (UnityEngine_Texture_o *)ObjectNameList;
        ObjectNameList = (void *)TutorialBigDialog__GetScrollHeightWithName(
                                   (TutorialBigDialog_o *)ObjectNameList,
                                   *v45,
                                   v37);
        v48 = v41;
        HIDWORD(methoda.klass) = (_DWORD)ObjectNameList;
      }
      v38 = v39[6];
      ++v40;
      v41 = v48;
    }
    while ( (int)v40 < v38 );
  }
  TutorialImageLongPrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)v114->fields.TutorialImageLongPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v50 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                 TutorialImageLongPrefab,
                                 (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  *(_QWORD *)(v22 + 32) = v50;
  v51 = (UnityEngine_GameObject_o **)(v22 + 32);
  sub_B16F98((BattleServantConfConponent_o *)(v22 + 32), v50, v52, v53, v54, v55, v56, v57);
  v58 = *(UnityEngine_Object_o **)(v22 + 32);
  v59 = System_Int32__ToString((int)v114 + 240, 0LL);
  v60 = System_String__Concat_43743732((System_String_o *)StringLiteral_7470/*"Image"*/, v59, 0LL);
  if ( !v58 )
    goto LABEL_63;
  UnityEngine_Object__set_name(v58, v60, 0LL);
  if ( !*v51 )
    goto LABEL_63;
  Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     *v51,
                                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TutorialImageLong___);
  *(_QWORD *)(v22 + 24) = Component_srcLineSprite;
  v62 = v22 + 24;
  sub_B16F98((BattleServantConfConponent_o *)(v22 + 24), Component_srcLineSprite, v63, v64, v65, v66, v67, v68);
  v69 = *(UnityEngine_GameObject_o **)(v22 + 32);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v114, 0LL);
  if ( !gameObject )
    goto LABEL_63;
  layer = UnityEngine_GameObject__get_layer(gameObject, 0LL);
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__SetLayer(v69, layer, 0LL);
  v72 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4519/*"Custom/SpriteWithMask"*/, 0LL);
  v77 = (UnityEngine_Material_o *)sub_B170CC(UnityEngine_Material_TypeInfo, v73, v74, v75, v76);
  UnityEngine_Material___ctor(v77, v72, 0LL);
  if ( !*(_QWORD *)v62 )
    goto LABEL_63;
  v78 = *(_QWORD *)(*(_QWORD *)v62 + 32LL);
  if ( !v78 )
    goto LABEL_63;
  (*(void (__fastcall **)(__int64, UnityEngine_Material_o *, _QWORD))(*(_QWORD *)v78 + 712LL))(
    v78,
    v77,
    *(_QWORD *)(*(_QWORD *)v78 + 720LL));
  if ( !v77 )
    goto LABEL_63;
  UnityEngine_Material__set_mainTexture(v77, v42, 0LL);
  UnityEngine_Material__SetTexture(v77, (System_String_o *)StringLiteral_15952/*"_MaskTex"*/, v48, 0LL);
  if ( !*(_QWORD *)v62 )
    goto LABEL_63;
  v79 = *(UIWidget_o **)(*(_QWORD *)v62 + 32LL);
  klass_high = HIDWORD(methoda.klass);
  if ( !v79 )
    goto LABEL_63;
  UIWidget__set_height(v79, SHIDWORD(methoda.klass), 0LL);
  if ( !*(_QWORD *)v62 )
    goto LABEL_63;
  v81 = *(UIWidget_o **)(*(_QWORD *)v62 + 32LL);
  if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
  }
  if ( !v81 )
    goto LABEL_63;
  UIWidget__set_width(v81, TutorialBigDialog_TypeInfo->static_fields->baseWidth, 0LL);
  if ( !*(_QWORD *)v62 )
    goto LABEL_63;
  if ( !v42 )
    goto LABEL_63;
  v82 = *(UITexture_o **)(*(_QWORD *)v62 + 32LL);
  v83 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v42->klass->vtable._6_get_height.method)(
          v42,
          v42->klass->vtable._7_set_height.methodPtr);
  v84 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v42->klass->vtable._6_get_height.method)(
          v42,
          v42->klass->vtable._7_set_height.methodPtr);
  baseWidth = TutorialBigDialog_TypeInfo->static_fields->baseWidth;
  v86 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v42->klass->vtable._4_get_width.method)(
          v42,
          v42->klass->vtable._5_set_width.methodPtr);
  v87 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v42->klass->vtable._6_get_height.method)(
          v42,
          v42->klass->vtable._7_set_height.methodPtr);
  v88 = (float)(v83 - HIDWORD(methoda.klass));
  v118.fields.m_Width = (float)baseWidth / (float)v86;
  v118.fields.m_YMin = v88 / (float)v84;
  v118.fields.m_Height = (float)SHIDWORD(methoda.klass) / (float)v87;
  v118.fields.m_XMin = 0.0;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Rect___ctor(v118, v88, v89, v90, v91, &methoda);
  if ( !v82 )
    goto LABEL_63;
  *(_QWORD *)&v119.fields.m_XMin = methoda.methodPointer;
  *(_QWORD *)&v119.fields.m_Width = methoda.invoker_method;
  UITexture__set_uvRect(v82, v119, 0LL);
  if ( !*(_QWORD *)v62 )
    goto LABEL_63;
  v92 = *(UnityEngine_BoxCollider_o **)(*(_QWORD *)v62 + 40LL);
  if ( !v92 )
    goto LABEL_63;
  v116.fields.z = 1.0;
  v116.fields.y = (float)klass_high;
  v116.fields.x = (float)TutorialBigDialog_TypeInfo->static_fields->baseWidth;
  UnityEngine_BoxCollider__set_size(v92, v116, 0LL);
  if ( !*(_QWORD *)v62 )
    goto LABEL_63;
  v93 = *(UnityEngine_BoxCollider_o **)(*(_QWORD *)v62 + 40LL);
  if ( !v93 )
    goto LABEL_63;
  v117.fields.y = (float)-klass_high * 0.5;
  v117.fields.x = 0.0;
  v117.fields.z = 0.0;
  UnityEngine_BoxCollider__set_center(v93, v117, 0LL);
  if ( !*(_QWORD *)v62 )
    goto LABEL_63;
  v94 = *(UIScrollView_o **)(*(_QWORD *)v62 + 48LL);
  if ( !v94 )
    goto LABEL_63;
  UIScrollView__ResetPosition(v94, 0LL);
  if ( !*v51 )
    goto LABEL_63;
  transform = UnityEngine_GameObject__get_transform(*v51, 0LL);
  if ( !v114->fields.ImageRoot )
    goto LABEL_63;
  v96 = transform;
  v97 = UnityEngine_GameObject__get_transform(v114->fields.ImageRoot, 0LL);
  if ( !v96 )
    goto LABEL_63;
  UnityEngine_Transform__set_parent(v96, v97, 0LL);
  if ( !*v51 )
    goto LABEL_63;
  v98 = UnityEngine_GameObject__get_transform(*v51, 0LL);
  *(UnityEngine_Vector3_o *)&v99 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v98 )
    goto LABEL_63;
  UnityEngine_Transform__set_localPosition(v98, *(UnityEngine_Vector3_o *)&v99, 0LL);
  if ( !*v51 )
    goto LABEL_63;
  v102 = UnityEngine_GameObject__get_transform(*v51, 0LL);
  *(UnityEngine_Vector3_o *)&v103 = UnityEngine_Vector3__get_one(0LL);
  if ( !v102 )
    goto LABEL_63;
  UnityEngine_Transform__set_localScale(v102, *(UnityEngine_Vector3_o *)&v103, 0LL);
  v110 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v106, v107, v108, v109);
  AssetLoader_LoadEndDataHandler___ctor(
    v110,
    (Il2CppObject *)v22,
    Method_TutorialBigDialog___c__DisplayClass56_0__AddScrollImg_b__0__,
    0LL);
  if ( v114->fields.baseTexLoadRequested )
  {
    if ( v110 )
    {
      AssetLoader_LoadEndDataHandler__Invoke(v110, v114->fields.baseTexAssetData, 0LL);
      return;
    }
LABEL_63:
    sub_B170D4();
  }
  v114->fields.baseTexLoadRequested = 1;
  v112 = TutorialBigDialog_TypeInfo;
  if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v112 = TutorialBigDialog_TypeInfo;
  }
  TuorialImagePath = TutorialBigDialog__GetTuorialImagePath(v114, v112->static_fields->baseImgNo, v111);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(TuorialImagePath, v110, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialBigDialog__AfterLoad(TutorialBigDialog_o *this, int32_t addCount, const MethodInfo *method)
{
  _BOOL4 loadByAsset; // w8
  int32_t v6; // w9
  _DWORD *assetsImageLoadList; // x10

  if ( (byte_40FB8EA & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_10072/*"OpenWindow"*/, *(_QWORD *)&addCount);
    byte_40FB8EA = 1;
  }
  loadByAsset = this->fields.loadByAsset;
  v6 = this->fields._loadIndex + addCount;
  this->fields._loadIndex = v6;
  if ( loadByAsset )
  {
    assetsImageLoadList = this->fields.assetsImageLoadList;
    if ( assetsImageLoadList )
      goto LABEL_5;
LABEL_10:
    sub_B170D4();
  }
  assetsImageLoadList = this->fields.TutorialImageLoadList;
  if ( !assetsImageLoadList )
    goto LABEL_10;
LABEL_5:
  if ( v6 >= assetsImageLoadList[6] )
  {
    this->fields.CurrentIndex = 0;
    TutorialBigDialog__UpdatePage(this, 0, method);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10072/*"OpenWindow"*/,
      0.3,
      0LL);
  }
  else if ( loadByAsset )
  {
    TutorialBigDialog__LoadStartAssets(this, *(const MethodInfo **)&addCount);
  }
  else
  {
    TutorialBigDialog__LoadStart(this, *(const MethodInfo **)&addCount);
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
  __int64 v14; // x3
  __int64 v15; // x4
  AndroidBackKeyManager_c *v16; // x0
  System_Action_o *v17; // x20

  if ( (byte_40FB8F0 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&AndroidBackKeyManager_TypeInfo, v10);
    sub_B16FFC(&Method_TutorialBigDialog_EndClose__, v11);
    byte_40FB8F0 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v16 = AndroidBackKeyManager_TypeInfo;
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    v16 = AndroidBackKeyManager_TypeInfo;
  }
  v16->static_fields->ToastEnabled = 0;
  v17 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v12, v13, v14, v15);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_TutorialBigDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v17, 0LL);
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

  if ( (byte_40FB8F6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Clear__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40FB8F6 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  ImagePageList = this->fields.ImagePageList;
  if ( ImagePageList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v11,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ImagePageList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v11,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v11.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v11,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v10 = this->fields.ImagePageList;
    if ( !v10 )
      sub_B170D4();
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v10,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
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
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v11 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B16F98(p_closeCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
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
    sub_B16F98(p_endOpenCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  __int64 v5; // x2
  System_String_array *v6; // x1
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FB8E5 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, imageName);
    byte_40FB8E5 = 1;
  }
  result = 0;
  v4 = (System_String_array *)sub_B17014(char___TypeInfo, 1LL, method);
  if ( !v4 )
    goto LABEL_9;
  v6 = v4;
  if ( !v4->max_length )
    goto LABEL_10;
  LOWORD(v4->m_Items[0]) = 95;
  if ( !imageName || (v4 = System_String__Split(imageName, (System_Char_array *)v4, 0LL), result = 0, !v4) )
LABEL_9:
    sub_B170D4();
  if ( v4->max_length <= 3 )
  {
LABEL_10:
    sub_B17100(v4, v6, v5);
    sub_B170A0();
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

  if ( (byte_40FB8E4 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&imgId);
    sub_B16FFC(&StringLiteral_23414/*"{0:D4}"*/, v4);
    sub_B16FFC(&StringLiteral_22733/*"tutorial_"*/, v5);
    byte_40FB8E4 = 1;
  }
  v9 = imgId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  v7 = System_String__Format((System_String_o *)StringLiteral_23414/*"{0:D4}"*/, v6, 0LL);
  return System_String__Concat_43743732((System_String_o *)StringLiteral_22733/*"tutorial_"*/, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TutorialBigDialog__GetTuorialImagePath(
        TutorialBigDialog_o *this,
        int32_t imgId,
        const MethodInfo *method)
{
  System_String_o *TuorialImageName; // x0

  if ( (byte_40FB8E3 & 1) == 0 )
  {
    this = (TutorialBigDialog_o *)sub_B16FFC(&StringLiteral_14514/*"Tutorial/"*/, *(_QWORD *)&imgId);
    byte_40FB8E3 = 1;
  }
  TuorialImageName = TutorialBigDialog__GetTuorialImageName(this, imgId, method);
  return System_String__Concat_43743732((System_String_o *)StringLiteral_14514/*"Tutorial/"*/, TuorialImageName, 0LL);
}


void __fastcall TutorialBigDialog__Init(TutorialBigDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x0
  __int64 v7; // x1
  MethodInfo *v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  TutorialBigDialog_c *v14; // x0
  System_String_o **p_alphaMiniImgPath; // x8
  System_String_o *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  TutorialBigDialog_c *v23; // x0
  System_String_o *TuorialImagePath; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct System_Int32_array *TutorialImageLoadList; // x22
  __int64 v32; // x8
  unsigned __int64 v33; // x23
  System_String_o *v34; // x21
  struct System_String_array *assetsImageLoadList; // x8
  struct System_String_array **p_assetsImageLoadList; // x20
  il2cpp_array_size_t v37; // w22
  il2cpp_array_size_t max_length; // w9
  System_String_o *v39; // x21

  if ( (byte_40FB8D9 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&TutorialBigDialog_TypeInfo, v3);
    byte_40FB8D9 = 1;
  }
  this->fields.isButtonEnable = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_43:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.IsFading = 0;
  TutorialBigDialog__DestroyImagePageList(this, v5);
  if ( this->fields.alphaTexLoadRequested )
  {
    v14 = TutorialBigDialog_TypeInfo;
    if ( this->fields.sizeKind == 2 )
    {
      if ( (WORD1(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
        v14 = TutorialBigDialog_TypeInfo;
      }
      p_alphaMiniImgPath = &v14->static_fields->alphaMiniImgPath;
    }
    else
    {
      if ( (WORD1(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
        v14 = TutorialBigDialog_TypeInfo;
      }
      p_alphaMiniImgPath = &v14->static_fields->alphaImgPath;
    }
    v16 = *p_alphaMiniImgPath;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(v16, 0LL);
    this->fields.alphaTexAssetData = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.alphaTexAssetData, 0LL, v17, v18, v19, v20, v21, v22);
    this->fields.alphaTexLoadRequested = 0;
  }
  if ( this->fields.baseTexLoadRequested )
  {
    v23 = TutorialBigDialog_TypeInfo;
    if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
      v23 = TutorialBigDialog_TypeInfo;
    }
    TuorialImagePath = TutorialBigDialog__GetTuorialImagePath(this, v23->static_fields->baseImgNo, v8);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(TuorialImagePath, 0LL);
    this->fields.baseTexAssetData = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.baseTexAssetData, 0LL, v25, v26, v27, v28, v29, v30);
    this->fields.baseTexLoadRequested = 0;
  }
  TutorialImageLoadList = this->fields.TutorialImageLoadList;
  if ( TutorialImageLoadList )
  {
    v32 = *(_QWORD *)&TutorialImageLoadList->max_length;
    if ( (int)v32 >= 1 )
    {
      v33 = 0LL;
      do
      {
        if ( v33 >= (unsigned int)v32 )
        {
LABEL_46:
          sub_B17100(v6, v7, v8);
          sub_B170A0();
        }
        v34 = TutorialBigDialog__GetTuorialImagePath(this, TutorialImageLoadList->m_Items[v33 + 1], v8);
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        AssetManager__releaseAssetStorage(v34, 0LL);
        LODWORD(v32) = TutorialImageLoadList->max_length;
        ++v33;
      }
      while ( (__int64)v33 < (int)v32 );
    }
    this->fields.TutorialImageLoadList = 0LL;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.TutorialImageLoadList,
      0LL,
      (System_String_array **)v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  p_assetsImageLoadList = &this->fields.assetsImageLoadList;
  assetsImageLoadList = this->fields.assetsImageLoadList;
  if ( assetsImageLoadList )
  {
    v37 = 0;
    while ( 1 )
    {
      max_length = assetsImageLoadList->max_length;
      if ( (int)v37 >= (int)max_length )
        break;
      if ( v37 >= max_length )
        goto LABEL_46;
      v39 = assetsImageLoadList->m_Items[v37];
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__releaseAssetStorage(v39, 0LL);
      assetsImageLoadList = *p_assetsImageLoadList;
      v37 += 2;
      if ( !*p_assetsImageLoadList )
        goto LABEL_43;
    }
    *p_assetsImageLoadList = 0LL;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.assetsImageLoadList,
      0LL,
      (System_String_array **)v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall TutorialBigDialog__LoadAlpha(
        TutorialBigDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
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
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  TutorialBigDialog_c *v28; // x0
  System_String_o **p_alphaMiniImgPath; // x8
  System_String_o *v30; // x20
  AssetLoader_LoadEndDataHandler_o *v31; // x21

  if ( (byte_40FB8EB & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, callback);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_B16FFC(&TutorialBigDialog_TypeInfo, v8);
    sub_B16FFC(&Method_TutorialBigDialog___c__DisplayClass58_0__LoadAlpha_b__0__, v9);
    sub_B16FFC(&TutorialBigDialog___c__DisplayClass58_0_TypeInfo, v10);
    byte_40FB8EB = 1;
  }
  v11 = sub_B170CC(TutorialBigDialog___c__DisplayClass58_0_TypeInfo, callback, method, v3, v4);
  TutorialBigDialog___c__DisplayClass58_0___ctor((TutorialBigDialog___c__DisplayClass58_0_o *)v11, 0LL);
  if ( !v11 )
    sub_B170D4();
  *(_QWORD *)(v11 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v11 + 24) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)callback, v18, v19, v20, v21, v22, v23);
  this->fields.alphaTexLoadRequested = 1;
  v28 = TutorialBigDialog_TypeInfo;
  if ( this->fields.sizeKind == 2 )
  {
    if ( (WORD1(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
      v28 = TutorialBigDialog_TypeInfo;
    }
    p_alphaMiniImgPath = &v28->static_fields->alphaMiniImgPath;
  }
  else
  {
    if ( (WORD1(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
      v28 = TutorialBigDialog_TypeInfo;
    }
    p_alphaMiniImgPath = &v28->static_fields->alphaImgPath;
  }
  v30 = *p_alphaMiniImgPath;
  v31 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v24, v25, v26, v27);
  AssetLoader_LoadEndDataHandler___ctor(
    v31,
    (Il2CppObject *)v11,
    Method_TutorialBigDialog___c__DisplayClass58_0__LoadAlpha_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v30, v31, 1, 0LL);
}


void __fastcall TutorialBigDialog__LoadImages(
        TutorialBigDialog_o *this,
        System_Int32_array *images,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  CommonUI_o *Instance; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Action_o *v22; // x20
  const MethodInfo *v23; // x2

  if ( (byte_40FB8E1 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, images);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&Method_TutorialBigDialog_LoadStart__, v9);
    byte_40FB8E1 = 1;
  }
  this->fields._loadIndex = 0;
  this->fields.loadByAsset = 0;
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  images,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.ImagePageList = (struct System_Collections_Generic_List_GameObject__o *)v10;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.ImagePageList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v22 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v18, v19, v20, v21);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_TutorialBigDialog_LoadStart__, 0LL);
  TutorialBigDialog__LoadAlpha(this, v22, v23);
}


void __fastcall TutorialBigDialog__LoadImages_28010644(
        TutorialBigDialog_o *this,
        System_String_array *images,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  CommonUI_o *Instance; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Action_o *v22; // x20
  const MethodInfo *v23; // x2

  if ( (byte_40FB8E2 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, images);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&Method_TutorialBigDialog_LoadStartAssets__, v9);
    byte_40FB8E2 = 1;
  }
  this->fields._loadIndex = 0;
  this->fields.loadByAsset = 1;
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  images,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.ImagePageList = (struct System_Collections_Generic_List_GameObject__o *)v10;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.ImagePageList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v22 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v18, v19, v20, v21);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_TutorialBigDialog_LoadStartAssets__, 0LL);
  TutorialBigDialog__LoadAlpha(this, v22, v23);
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
  __int64 v11; // x3
  __int64 v12; // x4
  AssetLoader_LoadEndDataHandler_o *v13; // x21

  v3 = this;
  if ( (byte_40FB8E6 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    this = (TutorialBigDialog_o *)sub_B16FFC(&Method_TutorialBigDialog__LoadStart_b__53_0__, v5);
    byte_40FB8E6 = 1;
  }
  TutorialImageLoadList = v3->fields.TutorialImageLoadList;
  if ( !TutorialImageLoadList )
    sub_B170D4();
  loadIndex = v3->fields._loadIndex;
  if ( (unsigned int)loadIndex >= TutorialImageLoadList->max_length )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  TuorialImagePath = TutorialBigDialog__GetTuorialImagePath(v3, TutorialImageLoadList->m_Items[loadIndex + 1], v2);
  v13 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v9, v10, v11, v12);
  AssetLoader_LoadEndDataHandler___ctor(v13, (Il2CppObject *)v3, Method_TutorialBigDialog__LoadStart_b__53_0__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(TuorialImagePath, v13, 1, 0LL);
}


void __fastcall TutorialBigDialog__LoadStartAssets(TutorialBigDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  TutorialBigDialog_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_String_array *assetsImageLoadList; // x8
  __int64 loadIndex; // x9
  System_String_o *v10; // x20
  AssetLoader_LoadEndDataHandler_o *v11; // x21

  v5 = this;
  if ( (byte_40FB8E7 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    this = (TutorialBigDialog_o *)sub_B16FFC(&Method_TutorialBigDialog__LoadStartAssets_b__54_0__, v7);
    byte_40FB8E7 = 1;
  }
  assetsImageLoadList = v5->fields.assetsImageLoadList;
  if ( !assetsImageLoadList )
    sub_B170D4();
  loadIndex = v5->fields._loadIndex;
  if ( (unsigned int)loadIndex >= assetsImageLoadList->max_length )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  v10 = assetsImageLoadList->m_Items[loadIndex];
  v11 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, method, v2, v3, v4);
  AssetLoader_LoadEndDataHandler___ctor(
    v11,
    (Il2CppObject *)v5,
    Method_TutorialBigDialog__LoadStartAssets_b__54_0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v10, v11, 1, 0LL);
}


void __fastcall TutorialBigDialog__OnBottomButton(TutorialBigDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x8
  const MethodInfo *v5; // x1

  if ( (byte_40FB8F3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40FB8F3 = 1;
  }
  if ( !this->fields.IsFading )
  {
    ImagePageList = this->fields.ImagePageList;
    if ( !ImagePageList )
      sub_B170D4();
    if ( this->fields.CurrentIndex == ImagePageList->fields._size - 1 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(1, 0LL);
      TutorialBigDialog__OnClickClose(this, v5);
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
  __int64 v11; // x3
  __int64 v12; // x4
  int32_t localFlagId; // w20
  int configFlagId; // w20
  NetworkManager_ResultCallbackFunc_o *v15; // x20
  TutorialSetRequest_o *Request_WarBoardWallAttackRequest; // x0
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  TutorialEventSetRequest_o *v18; // x0
  const MethodInfo *v19; // x3

  if ( (byte_40FB8F4 & 1) == 0 )
  {
    sub_B16FFC(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, method);
    sub_B16FFC(&Method_NetworkManager_getRequest_TutorialSetRequest___, v3);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    sub_B16FFC(&Method_TutorialBigDialog_EndTurorialRequest__, v7);
    sub_B16FFC(&TutorialFlag_TypeInfo, v8);
    byte_40FB8F4 = 1;
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
      TutorialFlag__Set_28018644(localFlagId, v9);
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
      v15 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v9,
                                                     v10,
                                                     v11,
                                                     v12);
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
                                                                    (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        TutorialSetRequest__beginRequest(Request_WarBoardWallAttackRequest, this->fields.flagId, 0LL);
        return;
      }
LABEL_33:
      sub_B170D4();
    }
    if ( this->fields.eventFlagId == -1 || !this->fields.eventId )
    {
      TutorialBigDialog__Close(this, this->fields.closeCallbackFunc, v10);
    }
    else
    {
      v17 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v9,
                                                     v10,
                                                     v11,
                                                     v12);
      NetworkManager_ResultCallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_TutorialBigDialog_EndTurorialRequest__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v18 = (TutorialEventSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                           v17,
                                           (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
      if ( !v18 )
        goto LABEL_33;
      TutorialEventSetRequest__beginRequest(v18, this->fields.eventFlagId, this->fields.eventId, v19);
    }
  }
}


void __fastcall TutorialBigDialog__OnNextButton(TutorialBigDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x8
  const MethodInfo *v5; // x2

  if ( (byte_40FB8F1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40FB8F1 = 1;
  }
  if ( !this->fields.IsFading )
  {
    ImagePageList = this->fields.ImagePageList;
    if ( !ImagePageList )
      sub_B170D4();
    if ( this->fields.CurrentIndex != ImagePageList->fields._size - 1 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      TutorialBigDialog__UpdatePage(this, this->fields.CurrentIndex + 1, v5);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialBigDialog__OnPageChange(TutorialBigDialog_o *this, int32_t idx, const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x8

  if ( (byte_40FB8F5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, *(_QWORD *)&idx);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40FB8F5 = 1;
  }
  if ( (idx & 0x80000000) == 0 && this->fields.CurrentIndex != idx )
  {
    ImagePageList = this->fields.ImagePageList;
    if ( !ImagePageList )
      sub_B170D4();
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

  if ( (byte_40FB8F2 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FB8F2 = 1;
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
  UnityEngine_Transform_o *transform; // x21
  TutorialBigDialog_c *v34; // x8
  __int64 v35; // x2
  struct System_Int32_array *v36; // x0
  struct System_Int32_array **p_TutorialImageLoadList; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  il2cpp_array_size_t max_length; // w9
  __int64 v48; // x8
  struct System_Int32_array *v49; // x9
  __int64 v50; // x10
  System_Int32_array *v51; // x1
  const MethodInfo *v52; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v54; // x2

  if ( (byte_40FB8DA & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, images);
    sub_B16FFC(&TutorialBigDialog_TypeInfo, v13);
    byte_40FB8DA = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&flagId);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.endOpenCallbackFunc,
    (System_Int32_array **)endOpenFunc,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.endTurorialRequestFunc,
    (System_Int32_array **)endTurorialRequestFunc,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.closeCallbackFunc = closeFunc;
  sub_B16F98(
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
  *(_OWORD *)&this->fields.localFlagId = xmmword_2F92C30;
  this->fields.sizeKind = 1;
  if ( !CloseButton )
    goto LABEL_20;
  transform = UnityEngine_GameObject__get_transform(CloseButton, 0LL);
  v34 = TutorialBigDialog_TypeInfo;
  if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v34 = TutorialBigDialog_TypeInfo;
  }
  if ( !transform )
    goto LABEL_20;
  UnityEngine_Transform__set_localPosition(transform, v34->static_fields->baseCloseButtonPosition, 0LL);
  if ( !images )
    goto LABEL_20;
  v36 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, images->max_length, v35);
  this->fields.TutorialImageLoadList = v36;
  p_TutorialImageLoadList = &this->fields.TutorialImageLoadList;
  sub_B16F98(
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
    v48 = 8LL;
    do
    {
      if ( v48 - 8 >= (unsigned __int64)max_length )
        goto LABEL_19;
      v49 = *p_TutorialImageLoadList;
      if ( !*p_TutorialImageLoadList )
        goto LABEL_20;
      if ( v48 - 8 >= (unsigned __int64)v49->max_length )
      {
LABEL_19:
        sub_B17100(v44, v45, v46);
        sub_B170A0();
      }
      *((_DWORD *)&v49->obj.klass + v48) = *((_DWORD *)&images->obj.klass + v48);
      max_length = images->max_length;
      v50 = v48 - 7;
      ++v48;
    }
    while ( v50 < (int)max_length );
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMask((BaseDialog_o *)this, 0, 0LL);
  TutorialBigDialog__LoadImages(this, v51, v52);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_20:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v54);
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
  __int64 v18; // x3
  __int64 v19; // x4
  System_Action_o *v20; // x23
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  UnityEngine_GameObject_o *CloseButton; // x0
  UnityEngine_Transform_o *transform; // x21
  TutorialBigDialog_c *v41; // x8
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  UnityEngine_GameObject_o *TouchMask; // x0
  srcLineSprite_o *Component_srcLineSprite; // x20
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  EventDelegate_Callback_o *v54; // x22
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  EventDelegate_o *v59; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *mFSM; // x0
  System_Int32_array *v61; // x1
  const MethodInfo *v62; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v64; // x2

  if ( (byte_40FB8DF & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, images);
    sub_B16FFC(&EventDelegate_Callback_TypeInfo, v9);
    sub_B16FFC(&EventDelegate_TypeInfo, v10);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UITouchPress___, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDelegate__Add__, v12);
    sub_B16FFC(&Method_TutorialBigDialog__OpenAssets_b__46_0__, v13);
    sub_B16FFC(&Method_TutorialBigDialog__OpenAssets_b__46_1__, v14);
    sub_B16FFC(&TutorialBigDialog_TypeInfo, v15);
    byte_40FB8DF = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&kind);
  v20 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_TutorialBigDialog__OpenAssets_b__46_0__, 0LL);
  this->fields.endOpenCallbackFunc = v20;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.endOpenCallbackFunc,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.endTurorialRequestFunc = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.endTurorialRequestFunc, 0LL, v27, v28, v29, v30, v31, v32);
  this->fields.closeCallbackFunc = closeFunc;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)closeFunc,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  CloseButton = this->fields.CloseButton;
  this->fields.configFlagId = 0;
  this->fields.sizeKind = kind;
  *(_OWORD *)&this->fields.flagId = xmmword_3133190;
  if ( !CloseButton )
    goto LABEL_15;
  transform = UnityEngine_GameObject__get_transform(CloseButton, 0LL);
  v41 = TutorialBigDialog_TypeInfo;
  if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v41 = TutorialBigDialog_TypeInfo;
  }
  if ( !transform )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(transform, v41->static_fields->miniCloseButtonPosition, 0LL);
  this->fields.TutorialImageLoadList = images;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.TutorialImageLoadList,
    (System_Int32_array **)images,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  TouchMask = this->fields.TouchMask;
  this->fields.isButtonEnable = 0;
  if ( !TouchMask )
    goto LABEL_15;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              TouchMask,
                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
  v54 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v50, v51, v52, v53);
  EventDelegate_Callback___ctor(v54, (Il2CppObject *)this, Method_TutorialBigDialog__OpenAssets_b__46_1__, 0LL);
  v59 = (EventDelegate_o *)sub_B170CC(EventDelegate_TypeInfo, v55, v56, v57, v58);
  EventDelegate___ctor_29412484(v59, v54, 0LL);
  if ( !Component_srcLineSprite
    || (mFSM = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_srcLineSprite->fields.mFSM) == 0LL
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          mFSM,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v59,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventDelegate__Add__),
        BaseDialog__SetMask((BaseDialog_o *)this, 0, 0LL),
        TutorialBigDialog__LoadImages(this, v61, v62),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_15:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v64);
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
  UnityEngine_Transform_o *transform; // x21
  TutorialBigDialog_c *v33; // x8
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array *v40; // x1
  const MethodInfo *v41; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v43; // x2

  if ( (byte_40FB8E0 & 1) == 0 )
  {
    sub_B16FFC(&TutorialBigDialog_TypeInfo, images);
    byte_40FB8E0 = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&configId);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.endOpenCallbackFunc,
    (System_Int32_array **)endOpenFunc,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.endTurorialRequestFunc,
    (System_Int32_array **)endTurorialRequestFunc,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.closeCallbackFunc = closeFunc;
  sub_B16F98(
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
  *(_OWORD *)&this->fields.flagId = xmmword_3133190;
  this->fields.sizeKind = 1;
  if ( !CloseButton )
    goto LABEL_12;
  transform = UnityEngine_GameObject__get_transform(CloseButton, 0LL);
  v33 = TutorialBigDialog_TypeInfo;
  if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v33 = TutorialBigDialog_TypeInfo;
  }
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, v33->static_fields->baseCloseButtonPosition, 0LL),
        this->fields.assetsImageLoadList = images,
        sub_B16F98(
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
        TutorialBigDialog__LoadImages_28010644(this, v40, v41),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_12:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v43);
}


void __fastcall TutorialBigDialog__OpenWindow(TutorialBigDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  System_Action_o *v10; // x20

  if ( (byte_40FB8EC & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&Method_TutorialBigDialog_EndOpen__, v4);
    byte_40FB8EC = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  v10 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_TutorialBigDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v10, 1, 0LL);
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
  UnityEngine_Transform_o *transform; // x21
  TutorialBigDialog_c *v31; // x8
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_array *v38; // x1
  const MethodInfo *v39; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v41; // x2

  if ( (byte_40FB8DE & 1) == 0 )
  {
    sub_B16FFC(&TutorialBigDialog_TypeInfo, images);
    byte_40FB8DE = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, (const MethodInfo *)closeFunc);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.endOpenCallbackFunc,
    (System_Int32_array **)endOpenFunc,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.endTurorialRequestFunc,
    (System_Int32_array **)endTurorialRequestFunc,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.closeCallbackFunc = closeFunc;
  sub_B16F98(
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
  *(_OWORD *)&this->fields.flagId = xmmword_3133190;
  this->fields.sizeKind = 1;
  if ( !CloseButton )
    goto LABEL_12;
  transform = UnityEngine_GameObject__get_transform(CloseButton, 0LL);
  v31 = TutorialBigDialog_TypeInfo;
  if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v31 = TutorialBigDialog_TypeInfo;
  }
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, v31->static_fields->baseCloseButtonPosition, 0LL),
        this->fields.assetsImageLoadList = images,
        sub_B16F98(
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
        TutorialBigDialog__LoadImages_28010644(this, v38, v39),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_12:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v41);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialBigDialog__Open_28008816(
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
  UnityEngine_Transform_o *transform; // x21
  TutorialBigDialog_c *v34; // x8
  __int64 v35; // x2
  struct System_Int32_array *v36; // x0
  struct System_Int32_array **p_TutorialImageLoadList; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  il2cpp_array_size_t max_length; // w9
  __int64 v48; // x8
  struct System_Int32_array *v49; // x9
  __int64 v50; // x10
  System_Int32_array *v51; // x1
  const MethodInfo *v52; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v54; // x2

  if ( (byte_40FB8DB & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, images);
    sub_B16FFC(&TutorialBigDialog_TypeInfo, v13);
    byte_40FB8DB = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&flagId);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.endOpenCallbackFunc,
    (System_Int32_array **)endOpenFunc,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.endTurorialRequestFunc,
    (System_Int32_array **)endTurorialRequestFunc,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.closeCallbackFunc = closeFunc;
  sub_B16F98(
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
  transform = UnityEngine_GameObject__get_transform(CloseButton, 0LL);
  v34 = TutorialBigDialog_TypeInfo;
  if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v34 = TutorialBigDialog_TypeInfo;
  }
  if ( !transform )
    goto LABEL_20;
  UnityEngine_Transform__set_localPosition(transform, v34->static_fields->baseCloseButtonPosition, 0LL);
  if ( !images )
    goto LABEL_20;
  v36 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, images->max_length, v35);
  this->fields.TutorialImageLoadList = v36;
  p_TutorialImageLoadList = &this->fields.TutorialImageLoadList;
  sub_B16F98(
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
    v48 = 8LL;
    do
    {
      if ( v48 - 8 >= (unsigned __int64)max_length )
        goto LABEL_19;
      v49 = *p_TutorialImageLoadList;
      if ( !*p_TutorialImageLoadList )
        goto LABEL_20;
      if ( v48 - 8 >= (unsigned __int64)v49->max_length )
      {
LABEL_19:
        sub_B17100(v44, v45, v46);
        sub_B170A0();
      }
      *((_DWORD *)&v49->obj.klass + v48) = *((_DWORD *)&images->obj.klass + v48);
      max_length = images->max_length;
      v50 = v48 - 7;
      ++v48;
    }
    while ( v50 < (int)max_length );
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMask((BaseDialog_o *)this, 0, 0LL);
  TutorialBigDialog__LoadImages(this, v51, v52);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_20:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v54);
}


void __fastcall TutorialBigDialog__Open_28009340(
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
  UnityEngine_Transform_o *transform; // x21
  TutorialBigDialog_c *v36; // x8
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array *v43; // x1
  const MethodInfo *v44; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v46; // x2

  if ( (byte_40FB8DC & 1) == 0 )
  {
    sub_B16FFC(&TutorialBigDialog_TypeInfo, images);
    byte_40FB8DC = 1;
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.endOpenCallbackFunc,
    (System_Int32_array **)endOpenFunc,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.endTurorialRequestFunc,
    (System_Int32_array **)endTurorialRequestFunc,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.closeCallbackFunc = closeFunc;
  sub_B16F98(
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
  transform = UnityEngine_GameObject__get_transform(CloseButton, 0LL);
  v36 = TutorialBigDialog_TypeInfo;
  if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v36 = TutorialBigDialog_TypeInfo;
  }
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, v36->static_fields->baseCloseButtonPosition, 0LL),
        this->fields.TutorialImageLoadList = images,
        sub_B16F98(
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
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_13:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v46);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialBigDialog__Open_28009744(
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
  UnityEngine_Transform_o *transform; // x21
  TutorialBigDialog_c *v36; // x8
  __int64 v37; // x2
  struct System_Int32_array *v38; // x0
  struct System_Int32_array **p_TutorialImageLoadList; // x21
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  __int64 v46; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  il2cpp_array_size_t max_length; // w9
  __int64 v50; // x8
  struct System_Int32_array *v51; // x9
  __int64 v52; // x10
  System_Int32_array *v53; // x1
  const MethodInfo *v54; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v56; // x2

  if ( (byte_40FB8DD & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, images);
    sub_B16FFC(&TutorialBigDialog_TypeInfo, v15);
    byte_40FB8DD = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&flagId);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.endOpenCallbackFunc,
    (System_Int32_array **)endOpenFunc,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.endTurorialRequestFunc,
    (System_Int32_array **)endTurorialRequestFunc,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.closeCallbackFunc = closeFunc;
  sub_B16F98(
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
  transform = UnityEngine_GameObject__get_transform(CloseButton, 0LL);
  v36 = TutorialBigDialog_TypeInfo;
  if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v36 = TutorialBigDialog_TypeInfo;
  }
  if ( !transform )
    goto LABEL_20;
  UnityEngine_Transform__set_localPosition(transform, v36->static_fields->baseCloseButtonPosition, 0LL);
  if ( !images )
    goto LABEL_20;
  v38 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, images->max_length, v37);
  this->fields.TutorialImageLoadList = v38;
  p_TutorialImageLoadList = &this->fields.TutorialImageLoadList;
  sub_B16F98(
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
    v50 = 8LL;
    do
    {
      if ( v50 - 8 >= (unsigned __int64)max_length )
        goto LABEL_19;
      v51 = *p_TutorialImageLoadList;
      if ( !*p_TutorialImageLoadList )
        goto LABEL_20;
      if ( v50 - 8 >= (unsigned __int64)v51->max_length )
      {
LABEL_19:
        sub_B17100(v46, v47, v48);
        sub_B170A0();
      }
      *((_DWORD *)&v51->obj.klass + v50) = *((_DWORD *)&images->obj.klass + v50);
      max_length = images->max_length;
      v52 = v50 - 7;
      ++v50;
    }
    while ( v52 < (int)max_length );
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMask((BaseDialog_o *)this, 0, 0LL);
  TutorialBigDialog__LoadImages(this, v53, v54);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_20:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v56);
}


void __fastcall TutorialBigDialog__SetTouchMask(TutorialBigDialog_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_GameObject_o *TouchMask; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  TouchMask = this->fields.TouchMask;
  if ( !TouchMask
    || (transform = UnityEngine_GameObject__get_transform(TouchMask, 0LL)) == 0LL
    || (parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL)) == 0LL
    || (gameObject = UnityEngine_Component__get_gameObject(parent, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, isDisp, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialBigDialog__UpdateButtons(TutorialBigDialog_o *this, bool isDisp, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x8
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_GameObject_o *v13; // x20
  UnityEngine_GameObject_o **p_PrevButton; // x21
  UnityEngine_GameObject_o *CloseButton; // x0
  UnityEngine_GameObject_o *NextButton; // x0
  UnityEngine_GameObject_o *PrevButton; // x0
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x20
  UnityEngine_GameObject_o *v20; // x0
  UnityEngine_Component_o *transform; // x0
  WarBoardControlPlayTalkUiComponent_array *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  UILabel_o *v25; // x20
  System_String_o *v26; // x0
  UnityEngine_GameObject_o *v27; // x0
  UnityEngine_Component_o *v28; // x0
  UILabel_o *v29; // x19
  System_String_o *v30; // x0
  AndroidBackKeyManager_c *v31; // x0

  if ( (byte_40FB8EE & 1) == 0 )
  {
    sub_B16FFC(&AndroidBackKeyManager_TypeInfo, isDisp);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____66819928, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v6);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_13406/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, v8);
    sub_B16FFC(&StringLiteral_13407/*"TUTORIAL_IMAGE_DIALOG_PREV"*/, v9);
    byte_40FB8EE = 1;
  }
  if ( !isDisp )
  {
    CloseButton = this->fields.CloseButton;
    if ( CloseButton )
    {
      UnityEngine_GameObject__SetActive(CloseButton, 0, 0LL);
      NextButton = this->fields.NextButton;
      if ( NextButton )
      {
        UnityEngine_GameObject__SetActive(NextButton, 0, 0LL);
        PrevButton = this->fields.PrevButton;
        if ( PrevButton )
        {
          UnityEngine_GameObject__SetActive(PrevButton, 0, 0LL);
          return;
        }
      }
    }
    goto LABEL_45;
  }
  ImagePageList = this->fields.ImagePageList;
  if ( !ImagePageList )
    goto LABEL_45;
  v11 = this->fields.CloseButton;
  if ( !v11 )
    goto LABEL_45;
  if ( this->fields.CurrentIndex == ImagePageList->fields._size - 1 )
  {
    UnityEngine_GameObject__SetActive(v11, 1, 0LL);
    v12 = this->fields.NextButton;
    if ( !v12 )
      goto LABEL_45;
    UnityEngine_GameObject__SetActive(v12, 0, 0LL);
    v13 = this->fields.CloseButton;
    if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    }
    AndroidBackKeyManager__AddBackBtn(v13, 0LL);
    p_PrevButton = &this->fields.PrevButton;
  }
  else
  {
    UnityEngine_GameObject__SetActive(v11, 0, 0LL);
    v18 = this->fields.NextButton;
    if ( !v18 )
      goto LABEL_45;
    UnityEngine_GameObject__SetActive(v18, 1, 0LL);
    p_PrevButton = &this->fields.PrevButton;
    v19 = this->fields.PrevButton;
    if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    }
    AndroidBackKeyManager__AddBackBtn(v19, 0LL);
    v20 = this->fields.NextButton;
    if ( !v20 )
      goto LABEL_45;
    transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v20, 0LL);
    if ( !transform )
      goto LABEL_45;
    ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                transform,
                                                                1,
                                                                (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____66819928);
    if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
      goto LABEL_45;
    if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length )
      goto LABEL_46;
    v25 = (UILabel_o *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent->m_Items[0];
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_13406/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, 0LL);
    if ( !v25 )
LABEL_45:
      sub_B170D4();
    UILabel__set_text(v25, v26, 0LL);
  }
  v27 = *p_PrevButton;
  if ( !*p_PrevButton )
    goto LABEL_45;
  if ( this->fields.CurrentIndex < 1 )
  {
    UnityEngine_GameObject__SetActive(v27, 0, 0LL);
    goto LABEL_41;
  }
  UnityEngine_GameObject__SetActive(v27, 1, 0LL);
  if ( !*p_PrevButton )
    goto LABEL_45;
  v28 = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(*p_PrevButton, 0LL);
  if ( !v28 )
    goto LABEL_45;
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                              v28,
                                                              1,
                                                              (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____66819928);
  if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
    goto LABEL_45;
  if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length )
  {
LABEL_46:
    sub_B17100(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v23, v24);
    sub_B170A0();
  }
  v29 = (UILabel_o *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent->m_Items[0];
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_13407/*"TUTORIAL_IMAGE_DIALOG_PREV"*/, 0LL);
  if ( !v29 )
    goto LABEL_45;
  UILabel__set_text(v29, v30, 0LL);
LABEL_41:
  v31 = AndroidBackKeyManager_TypeInfo;
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    v31 = AndroidBackKeyManager_TypeInfo;
  }
  v31->static_fields->ToastEnabled = 1;
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
  UnityEngine_Component_o **p_FadeInTarget; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x2
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x23
  int size; // w26
  unsigned int v28; // w27
  __int64 v29; // x8
  UnityEngine_GameObject_o *v30; // x23
  struct UITexture_o *Component_srcLineSprite; // x0
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
  UnityEngine_Component_o *FadeOutTarget; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  TutorialBigDialog_c *v45; // x8
  UnityEngine_GameObject_o *v46; // x0
  UITweener_o *v47; // x20
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  EventDelegate_Callback_o *v52; // x21

  if ( (byte_40FB8ED & 1) == 0 )
  {
    sub_B16FFC(&EventDelegate_Callback_TypeInfo, *(_QWORD *)&dispIndex);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UITexture___, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v14);
    sub_B16FFC(&Method_TutorialBigDialog__UpdatePage_b__60_0__, v15);
    sub_B16FFC(&TutorialBigDialog_TypeInfo, v16);
    byte_40FB8ED = 1;
  }
  CurrentIndex = this->fields.CurrentIndex;
  this->fields.FadeInTarget = 0LL;
  p_FadeInTarget = (UnityEngine_Component_o **)&this->fields.FadeInTarget;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.FadeInTarget,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.FadeOutTarget = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.FadeOutTarget, 0LL, v19, v20, v21, v22, v23, v24);
  ImagePageList = this->fields.ImagePageList;
  if ( !ImagePageList )
    goto LABEL_33;
  size = ImagePageList->fields._size;
  if ( size >= 1 )
  {
    LODWORD(v8) = 1000593162;
    v28 = 0;
    LODWORD(v9) = 1.0;
    while ( 1 )
    {
      if ( ImagePageList->fields._size <= v28 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v29 = (__int64)ImagePageList->fields._items + 8 * (int)v28;
      v30 = *(UnityEngine_GameObject_o **)(v29 + 32);
      if ( !v30 )
        goto LABEL_33;
      Component_srcLineSprite = (struct UITexture_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        *(UnityEngine_GameObject_o **)(v29 + 32),
                                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
      v38 = Component_srcLineSprite;
      if ( dispIndex == v28 )
        break;
      if ( v28 == this->fields.CurrentIndex && CurrentIndex != dispIndex )
      {
        this->fields.FadeOutTarget = Component_srcLineSprite;
        sub_B16F98(
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
        v41 = v30;
        goto LABEL_21;
      }
      v41 = v30;
      v42 = 0;
LABEL_21:
      UnityEngine_GameObject__SetActive(v41, v42, 0LL);
      if ( (int)++v28 >= size )
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
      *p_FadeInTarget = (UnityEngine_Component_o *)Component_srcLineSprite;
      sub_B16F98(
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
    FadeOutTarget = (UnityEngine_Component_o *)this->fields.FadeOutTarget;
    this->fields.IsFading = 1;
    if ( FadeOutTarget )
    {
      gameObject = UnityEngine_Component__get_gameObject(FadeOutTarget, 0LL);
      v45 = TutorialBigDialog_TypeInfo;
      if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
        v45 = TutorialBigDialog_TypeInfo;
      }
      TweenAlpha__Begin(gameObject, v45->static_fields->FADE_TIME, 0.0, 0LL);
      if ( *p_FadeInTarget )
      {
        v46 = UnityEngine_Component__get_gameObject(*p_FadeInTarget, 0LL);
        v47 = (UITweener_o *)TweenAlpha__Begin(v46, TutorialBigDialog_TypeInfo->static_fields->FADE_TIME, 1.0, 0LL);
        v52 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v48, v49, v50, v51);
        EventDelegate_Callback___ctor(v52, (Il2CppObject *)this, Method_TutorialBigDialog__UpdatePage_b__60_0__, 0LL);
        if ( v47 )
        {
          UITweener__SetOnFinished(v47, v52, 0LL);
          return;
        }
      }
    }
LABEL_33:
    sub_B170D4();
  }
  TutorialBigDialog__UpdateButtons(this, 1, v25);
}


void __fastcall TutorialBigDialog___LoadStartAssets_b__54_0(
        TutorialBigDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_array *ObjectNameList; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_o *v11; // x0
  __int64 v12; // x3
  __int64 v13; // x4
  System_Action_o *v14; // x21
  const MethodInfo *v15; // x3
  struct System_String_array *assetsImageLoadList; // x8
  int v17; // w9
  UnityEngine_Texture2D_o *Object_WarBoardWaitTimeSetting; // x0
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2

  if ( (byte_40FB8FA & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, data);
    sub_B16FFC(&Method_AssetData_GetObject_Texture2D____66802808, v5);
    sub_B16FFC(&Method_TutorialBigDialog__LoadStartAssets_b__54_1__, v6);
    sub_B16FFC(&StringLiteral_15944/*"_L_"*/, v7);
    byte_40FB8FA = 1;
  }
  if ( !data )
    goto LABEL_12;
  ObjectNameList = AssetData__GetObjectNameList(data, 0LL);
  if ( !ObjectNameList )
    goto LABEL_12;
  if ( !ObjectNameList->max_length )
    goto LABEL_13;
  v11 = ObjectNameList->m_Items[0];
  if ( !v11 )
    goto LABEL_12;
  ObjectNameList = (System_String_array *)System_String__Contains(v11, (System_String_o *)StringLiteral_15944/*"_L_"*/, 0LL);
  if ( ((unsigned __int8)ObjectNameList & 1) != 0 )
  {
    v14 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v12, v13);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_TutorialBigDialog__LoadStartAssets_b__54_1__, 0LL);
    TutorialBigDialog__AddScrollImg(this, data, v14, v15);
    return;
  }
  assetsImageLoadList = this->fields.assetsImageLoadList;
  if ( !assetsImageLoadList )
LABEL_12:
    sub_B170D4();
  v17 = this->fields._loadIndex + 1;
  if ( v17 >= assetsImageLoadList->max_length )
  {
LABEL_13:
    sub_B17100(ObjectNameList, v9, v10);
    sub_B170A0();
  }
  Object_WarBoardWaitTimeSetting = (UnityEngine_Texture2D_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                data,
                                                                assetsImageLoadList->m_Items[v17],
                                                                (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_Texture2D____66802808);
  TutorialBigDialog__AddImg(this, Object_WarBoardWaitTimeSetting, v19);
  TutorialBigDialog__AfterLoad(this, 2, v20);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_array *ObjectNameList; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  System_String_o *v11; // x0
  __int64 v12; // x3
  __int64 v13; // x4
  System_Action_o *v14; // x21
  const MethodInfo *v15; // x3
  struct System_Int32_array *TutorialImageLoadList; // x8
  __int64 loadIndex; // x9
  System_String_o *TuorialImageName; // x0
  UnityEngine_Texture2D_o *Object_WarBoardWaitTimeSetting; // x0
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2

  if ( (byte_40FB8F9 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, data);
    sub_B16FFC(&Method_AssetData_GetObject_Texture2D____66802808, v5);
    sub_B16FFC(&Method_TutorialBigDialog__LoadStart_b__53_1__, v6);
    sub_B16FFC(&StringLiteral_15944/*"_L_"*/, v7);
    byte_40FB8F9 = 1;
  }
  if ( !data )
    goto LABEL_12;
  ObjectNameList = AssetData__GetObjectNameList(data, 0LL);
  if ( !ObjectNameList )
    goto LABEL_12;
  if ( !ObjectNameList->max_length )
    goto LABEL_13;
  v11 = ObjectNameList->m_Items[0];
  if ( !v11 )
    goto LABEL_12;
  ObjectNameList = (System_String_array *)System_String__Contains(v11, (System_String_o *)StringLiteral_15944/*"_L_"*/, 0LL);
  if ( ((unsigned __int8)ObjectNameList & 1) != 0 )
  {
    v14 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v12, v13);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_TutorialBigDialog__LoadStart_b__53_1__, 0LL);
    TutorialBigDialog__AddScrollImg(this, data, v14, v15);
    return;
  }
  TutorialImageLoadList = this->fields.TutorialImageLoadList;
  if ( !TutorialImageLoadList )
LABEL_12:
    sub_B170D4();
  loadIndex = this->fields._loadIndex;
  if ( (unsigned int)loadIndex >= TutorialImageLoadList->max_length )
  {
LABEL_13:
    sub_B17100(ObjectNameList, v9, v10);
    sub_B170A0();
  }
  TuorialImageName = TutorialBigDialog__GetTuorialImageName(
                       (TutorialBigDialog_o *)ObjectNameList,
                       TutorialImageLoadList->m_Items[loadIndex + 1],
                       v10);
  Object_WarBoardWaitTimeSetting = (UnityEngine_Texture2D_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                data,
                                                                TuorialImageName,
                                                                (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_Texture2D____66802808);
  TutorialBigDialog__AddImg(this, Object_WarBoardWaitTimeSetting, v20);
  TutorialBigDialog__AfterLoad(this, 1, v21);
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
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v5; // x2

  TutorialBigDialog__refreshCurrent(this, method);
  FadeOutTarget = (UnityEngine_Component_o *)this->fields.FadeOutTarget;
  if ( !FadeOutTarget || (gameObject = UnityEngine_Component__get_gameObject(FadeOutTarget, 0LL)) == 0LL )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.IsFading = 0;
  TutorialBigDialog__UpdateButtons(this, 1, v5);
}


void __fastcall TutorialBigDialog__refreshCurrent(TutorialBigDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x20
  int size; // w8
  __int64 CurrentIndex; // x19
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x19
  UIScrollView_o *klass; // x0

  if ( (byte_40FB8EF & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TutorialImageLong___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FB8EF = 1;
  }
  ImagePageList = this->fields.ImagePageList;
  if ( !ImagePageList )
    goto LABEL_16;
  size = ImagePageList->fields._size;
  CurrentIndex = this->fields.CurrentIndex;
  if ( size > (int)CurrentIndex )
  {
    if ( size <= (unsigned int)CurrentIndex )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v9 = ImagePageList->fields._items->m_Items[CurrentIndex];
    if ( !v9 )
      goto LABEL_16;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        v9,
                                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TutorialImageLong___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
    {
      if ( Component_srcLineSprite )
      {
        klass = (UIScrollView_o *)Component_srcLineSprite[2].klass;
        if ( klass )
        {
          UIScrollView__ResetPosition(klass, 0LL);
          return;
        }
      }
LABEL_16:
      sub_B170D4();
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct TutorialBigDialog_o *_4__this; // x8
  UnityEngine_Shader_o *v16; // x22
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  UnityEngine_Material_o *v21; // x21
  struct TutorialImageLong_o *comp; // x8
  struct UITexture_o *BaseImage; // x0
  TutorialBigDialog_o *v24; // x22
  System_String_o *TuorialImageName; // x0
  UnityEngine_Texture_o *Object_WarBoardWaitTimeSetting; // x0
  struct TutorialBigDialog_o *v27; // x8
  AssetData_o *alphaTexAssetData; // x0
  UnityEngine_Texture_o *v29; // x0
  struct TutorialBigDialog_o *v30; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *ImagePageList; // x0

  if ( (byte_40F7931 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_Texture2D____66802808, aData);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v10);
    sub_B16FFC(&UnityEngine_Material_TypeInfo, v11);
    sub_B16FFC(&TutorialBigDialog_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_4519/*"Custom/SpriteWithMask"*/, v13);
    sub_B16FFC(&StringLiteral_15952/*"_MaskTex"*/, v14);
    byte_40F7931 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  _4__this->fields.baseTexAssetData = aData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&_4__this->fields.baseTexAssetData,
    (System_Int32_array **)aData,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v16 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4519/*"Custom/SpriteWithMask"*/, 0LL);
  v21 = (UnityEngine_Material_o *)sub_B170CC(UnityEngine_Material_TypeInfo, v17, v18, v19, v20);
  UnityEngine_Material___ctor(v21, v16, 0LL);
  comp = this->fields.comp;
  if ( !comp )
    goto LABEL_17;
  BaseImage = comp->fields.BaseImage;
  if ( !BaseImage )
    goto LABEL_17;
  ((void (__fastcall *)(struct UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))BaseImage->klass->vtable._25_set_material.method)(
    BaseImage,
    v21,
    BaseImage->klass->vtable._26_get_mainTexture.methodPtr);
  v24 = this->fields.__4__this;
  if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
  }
  if ( !v24 )
    goto LABEL_17;
  TuorialImageName = TutorialBigDialog__GetTuorialImageName(
                       v24,
                       TutorialBigDialog_TypeInfo->static_fields->baseImgNo,
                       0LL);
  if ( !aData )
    goto LABEL_17;
  Object_WarBoardWaitTimeSetting = (UnityEngine_Texture_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                              aData,
                                                              TuorialImageName,
                                                              (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_Texture2D____66802808);
  if ( !v21
    || (UnityEngine_Material__set_mainTexture(v21, Object_WarBoardWaitTimeSetting, 0LL),
        (v27 = this->fields.__4__this) == 0LL)
    || (alphaTexAssetData = v27->fields.alphaTexAssetData) == 0LL
    || (v29 = (UnityEngine_Texture_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                         alphaTexAssetData,
                                         TutorialBigDialog_TypeInfo->static_fields->alphaImgName,
                                         (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_Texture2D____66802808),
        UnityEngine_Material__SetTexture(v21, (System_String_o *)StringLiteral_15952/*"_MaskTex"*/, v29, 0LL),
        (v30 = this->fields.__4__this) == 0LL)
    || (ImagePageList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v30->fields.ImagePageList) == 0LL )
  {
LABEL_17:
    sub_B170D4();
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    ImagePageList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.obj,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
  ActionExtensions__Call(this->fields.callback, 0LL);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct TutorialBigDialog_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  _4__this->fields.alphaTexAssetData = data;
  sub_B16F98(
    (BattleServantConfConponent_o *)&_4__this->fields.alphaTexAssetData,
    (System_Int32_array **)data,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ActionExtensions__Call(this->fields.callback, 0LL);
}