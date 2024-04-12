void __fastcall TutorialBigDialog___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  struct TutorialBigDialog_StaticFields *static_fields; // x0
  System_Int32_array **v8; // x1
  struct TutorialBigDialog_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct TutorialBigDialog_StaticFields *v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct TutorialBigDialog_StaticFields *v25; // x0
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  TutorialBigDialog_c *v33; // x8
  struct TutorialBigDialog_StaticFields *v34; // x9
  struct TutorialBigDialog_StaticFields *v35; // x8

  if ( (byte_42B23CF & 1) == 0 )
  {
    sub_B52984(&TutorialBigDialog_TypeInfo);
    sub_B52984(&StringLiteral_14675/*"Tutorial/tutorial_alpha"*/);
    sub_B52984(&StringLiteral_17716/*"combine_tutorial_alpha"*/);
    sub_B52984(&StringLiteral_14673/*"Tutorial/combine_tutorial_alpha"*/);
    sub_B52984(&StringLiteral_23018/*"tutorial_alpha"*/);
    byte_42B23CF = 1;
  }
  TutorialBigDialog_TypeInfo->static_fields->FADE_TIME = 0.3;
  static_fields = TutorialBigDialog_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_14675/*"Tutorial/tutorial_alpha"*/;
  static_fields->alphaImgPath = (struct System_String_o *)StringLiteral_14675/*"Tutorial/tutorial_alpha"*/;
  sub_B52920((BattleServantConfConponent_o *)&static_fields->alphaImgPath, v8, v1, v2, v3, v4, v5, v6);
  v9 = TutorialBigDialog_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_23018/*"tutorial_alpha"*/;
  v9->alphaImgName = (struct System_String_o *)StringLiteral_23018/*"tutorial_alpha"*/;
  sub_B52920((BattleServantConfConponent_o *)&v9->alphaImgName, v10, v11, v12, v13, v14, v15, v16);
  v17 = TutorialBigDialog_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_14673/*"Tutorial/combine_tutorial_alpha"*/;
  v17->alphaMiniImgPath = (struct System_String_o *)StringLiteral_14673/*"Tutorial/combine_tutorial_alpha"*/;
  sub_B52920((BattleServantConfConponent_o *)&v17->alphaMiniImgPath, v18, v19, v20, v21, v22, v23, v24);
  v25 = TutorialBigDialog_TypeInfo->static_fields;
  v26 = (System_Int32_array **)StringLiteral_17716/*"combine_tutorial_alpha"*/;
  v25->alphaMiniImgName = (struct System_String_o *)StringLiteral_17716/*"combine_tutorial_alpha"*/;
  sub_B52920((BattleServantConfConponent_o *)&v25->alphaMiniImgName, v26, v27, v28, v29, v30, v31, v32);
  v33 = TutorialBigDialog_TypeInfo;
  TutorialBigDialog_TypeInfo->static_fields->baseImgNo = 6;
  v33->static_fields->baseWidth = 900;
  v34 = v33->static_fields;
  *(_QWORD *)&v34->baseCloseButtonPosition.fields.x = 0x4382800043F28000LL;
  v34->baseCloseButtonPosition.fields.z = 0.0;
  v35 = v33->static_fields;
  *(_QWORD *)&v35->miniCloseButtonPosition.fields.x = 0x4362000043BD0000LL;
  v35->miniCloseButtonPosition.fields.z = 0.0;
}


void __fastcall TutorialBigDialog___ctor(TutorialBigDialog_o *this, const MethodInfo *method)
{
  if ( (byte_42B23CE & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    byte_42B23CE = 1;
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
  struct UnityEngine_GameObject_o *TutorialImagePrefab; // x20
  UnityEngine_Object_o *v6; // x20
  System_String_o *v7; // x0
  System_String_o *gameObject; // x0
  __int64 v9; // x1
  srcLineSprite_o *Component_srcLineSprite; // x23
  int32_t layer; // w22
  UnityEngine_Shader_o *v12; // x24
  UnityEngine_Material_o *v13; // x22
  TutorialBigDialog_c *v14; // x0
  System_String_o **p_alphaMiniImgName; // x8
  UnityEngine_Texture_o *Object_WarBoardWaitTimeSetting; // x0
  UnityEngine_Transform_o *v17; // x21
  UnityEngine_Transform_o *transform; // x21
  int v19; // s0
  UnityEngine_Transform_o *v22; // x21
  int v23; // s0

  if ( (byte_42B23BF & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_Texture2D____68579976);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UITexture___);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B52984(&UnityEngine_Material_TypeInfo);
    sub_B52984(&NGUITools_TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&TutorialBigDialog_TypeInfo);
    sub_B52984(&StringLiteral_4576/*"Custom/SpriteWithMask"*/);
    sub_B52984(&StringLiteral_7545/*"Image"*/);
    sub_B52984(&StringLiteral_16122/*"_MaskTex"*/);
    byte_42B23BF = 1;
  }
  TutorialImagePrefab = this->fields.TutorialImagePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                 (UnityEngine_UI_Dropdown_DropdownItem_o *)TutorialImagePrefab,
                                 (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v7 = System_Int32__ToString((int)this + 240, 0LL);
  gameObject = System_String__Concat_44568316((System_String_o *)StringLiteral_7545/*"Image"*/, v7, 0LL);
  if ( !v6 )
    goto LABEL_29;
  UnityEngine_Object__set_name(v6, gameObject, 0LL);
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)v6,
                              (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_29;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)gameObject, 0LL);
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__SetLayer((UnityEngine_GameObject_o *)v6, layer, 0LL);
  v12 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4576/*"Custom/SpriteWithMask"*/, 0LL);
  v13 = (UnityEngine_Material_o *)sub_B52A54(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v13, v12, 0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_29;
  gameObject = (System_String_o *)((__int64 (__fastcall *)(srcLineSprite_o *, UnityEngine_Material_o *, Il2CppMethodPointer))Component_srcLineSprite->klass[1].vtable._2_GetHashCode.method)(
                                    Component_srcLineSprite,
                                    v13,
                                    Component_srcLineSprite->klass[1].vtable._3_ToString.methodPtr);
  if ( !v13 )
    goto LABEL_29;
  UnityEngine_Material__set_mainTexture(v13, (UnityEngine_Texture_o *)tex, 0LL);
  v14 = TutorialBigDialog_TypeInfo;
  if ( this->fields.sizeKind == 2 )
  {
    if ( (WORD1(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
      v14 = TutorialBigDialog_TypeInfo;
    }
    p_alphaMiniImgName = &v14->static_fields->alphaMiniImgName;
  }
  else
  {
    if ( (WORD1(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
      v14 = TutorialBigDialog_TypeInfo;
    }
    p_alphaMiniImgName = &v14->static_fields->alphaImgName;
  }
  gameObject = (System_String_o *)this->fields.alphaTexAssetData;
  if ( !gameObject )
    goto LABEL_29;
  Object_WarBoardWaitTimeSetting = (UnityEngine_Texture_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                              (AssetData_o *)gameObject,
                                                              *p_alphaMiniImgName,
                                                              (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_Texture2D____68579976);
  UnityEngine_Material__SetTexture(v13, (System_String_o *)StringLiteral_16122/*"_MaskTex"*/, Object_WarBoardWaitTimeSetting, 0LL);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v6, 0, 0LL);
  gameObject = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v6, 0LL);
  if ( !this->fields.ImageRoot )
    goto LABEL_29;
  v17 = (UnityEngine_Transform_o *)gameObject;
  gameObject = (System_String_o *)UnityEngine_GameObject__get_transform(this->fields.ImageRoot, 0LL);
  if ( !v17 )
    goto LABEL_29;
  UnityEngine_Transform__set_parent(v17, (UnityEngine_Transform_o *)gameObject, 0LL);
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v6, 0LL);
  *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v19, 0LL),
        v22 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v6, 0LL),
        *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Vector3__get_one(0LL),
        !v22)
    || (UnityEngine_Transform__set_localScale(v22, *(UnityEngine_Vector3_o *)&v23, 0LL),
        (gameObject = (System_String_o *)this->fields.ImagePageList) == 0LL) )
  {
LABEL_29:
    sub_B52A5C(gameObject, v9);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)gameObject,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v6,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GameObject__Add__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialBigDialog__AddScrollImg(
        TutorialBigDialog_o *this,
        AssetData_o *data,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x19
  __int64 ObjectNameList; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  int v22; // w8
  __int64 v23; // x24
  unsigned int v24; // w27
  UnityEngine_Texture_o *v25; // x25
  UnityEngine_Texture_o *v26; // x20
  __int64 v27; // x21
  System_String_o **v28; // x21
  __int64 v29; // t1
  char v30; // w26
  const MethodInfo *v31; // x2
  UnityEngine_Texture_o *v32; // x23
  UnityEngine_UI_Dropdown_DropdownItem_o *TutorialImageLongPrefab; // x22
  System_Int32_array **v34; // x0
  __int64 *v35; // x22
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  UnityEngine_Object_o *v42; // x24
  System_String_o *v43; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  __int64 v45; // x24
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  UnityEngine_GameObject_o *v52; // x26
  int32_t layer; // w27
  UnityEngine_Shader_o *v54; // x27
  UnityEngine_Material_o *v55; // x26
  int klass_high; // w21
  UIWidget_o *v57; // x25
  UITexture_o *v58; // x25
  int v59; // w26
  int v60; // w27
  int32_t baseWidth; // s8
  int v62; // w28
  int v63; // w0
  float v64; // s4
  float v65; // s5
  float v66; // s6
  float v67; // s7
  UnityEngine_Transform_o *v68; // x21
  UnityEngine_Transform_o *transform; // x21
  int v70; // s0
  UnityEngine_Transform_o *v73; // x21
  int v74; // s0
  AssetLoader_LoadEndDataHandler_o *v77; // x21
  const MethodInfo *v78; // x2
  TutorialBigDialog_c *v79; // x0
  System_String_o *TuorialImagePath; // x19
  __int64 v81; // x0
  TutorialBigDialog_o *v82; // [xsp+8h] [xbp-78h]
  MethodInfo methoda; // [xsp+10h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v86; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v87; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42B23C0 & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_Texture2D____68579976);
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_TutorialImageLong___);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B52984(&UnityEngine_Material_TypeInfo);
    sub_B52984(&NGUITools_TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&TutorialBigDialog_TypeInfo);
    sub_B52984(&Method_TutorialBigDialog___c__DisplayClass56_0__AddScrollImg_b__0__);
    sub_B52984(&TutorialBigDialog___c__DisplayClass56_0_TypeInfo);
    sub_B52984(&StringLiteral_16425/*"alpha"*/);
    sub_B52984(&StringLiteral_4576/*"Custom/SpriteWithMask"*/);
    sub_B52984(&StringLiteral_7545/*"Image"*/);
    sub_B52984(&StringLiteral_16122/*"_MaskTex"*/);
    byte_42B23C0 = 1;
  }
  v7 = sub_B52A54(TutorialBigDialog___c__DisplayClass56_0_TypeInfo);
  TutorialBigDialog___c__DisplayClass56_0___ctor((TutorialBigDialog___c__DisplayClass56_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_63;
  *(_QWORD *)(v7 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = callback;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)callback, v16, v17, v18, v19, v20, v21);
  if ( !data )
    goto LABEL_63;
  ObjectNameList = (__int64)AssetData__GetObjectNameList(data, 0LL);
  if ( !ObjectNameList )
    goto LABEL_63;
  v82 = this;
  v22 = *(_DWORD *)(ObjectNameList + 24);
  v23 = ObjectNameList;
  if ( v22 < 1 )
  {
    v26 = 0LL;
    v32 = 0LL;
    HIDWORD(methoda.klass) = 0;
  }
  else
  {
    HIDWORD(methoda.klass) = 0;
    v24 = 0;
    v25 = 0LL;
    v26 = 0LL;
    do
    {
      if ( v24 >= v22 )
        goto LABEL_62;
      v27 = v23 + 8LL * (int)v24;
      v29 = *(_QWORD *)(v27 + 32);
      v28 = (System_String_o **)(v27 + 32);
      ObjectNameList = v29;
      if ( !v29 )
        goto LABEL_63;
      ObjectNameList = System_String__Contains(
                         (System_String_o *)ObjectNameList,
                         (System_String_o *)StringLiteral_16425/*"alpha"*/,
                         0LL);
      if ( v24 >= *(_DWORD *)(v23 + 24) )
      {
LABEL_62:
        v81 = sub_B52A88(ObjectNameList);
        sub_B52A28(v81, 0LL);
      }
      v30 = ObjectNameList;
      ObjectNameList = (__int64)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                  data,
                                  *v28,
                                  (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_Texture2D____68579976);
      v32 = (UnityEngine_Texture_o *)ObjectNameList;
      if ( (v30 & 1) == 0 )
      {
        if ( v24 >= *(_DWORD *)(v23 + 24) )
          goto LABEL_62;
        v26 = (UnityEngine_Texture_o *)ObjectNameList;
        ObjectNameList = TutorialBigDialog__GetScrollHeightWithName((TutorialBigDialog_o *)ObjectNameList, *v28, v31);
        v32 = v25;
        HIDWORD(methoda.klass) = ObjectNameList;
      }
      v22 = *(_DWORD *)(v23 + 24);
      ++v24;
      v25 = v32;
    }
    while ( (int)v24 < v22 );
  }
  TutorialImageLongPrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)v82->fields.TutorialImageLongPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v34 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                 TutorialImageLongPrefab,
                                 (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  *(_QWORD *)(v7 + 32) = v34;
  v35 = (__int64 *)(v7 + 32);
  sub_B52920((BattleServantConfConponent_o *)(v7 + 32), v34, v36, v37, v38, v39, v40, v41);
  v42 = *(UnityEngine_Object_o **)(v7 + 32);
  v43 = System_Int32__ToString((int)v82 + 240, 0LL);
  ObjectNameList = (__int64)System_String__Concat_44568316((System_String_o *)StringLiteral_7545/*"Image"*/, v43, 0LL);
  if ( !v42 )
    goto LABEL_63;
  UnityEngine_Object__set_name(v42, (System_String_o *)ObjectNameList, 0LL);
  ObjectNameList = *v35;
  if ( !*v35 )
    goto LABEL_63;
  Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)ObjectNameList,
                                                     (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_TutorialImageLong___);
  *(_QWORD *)(v7 + 24) = Component_srcLineSprite;
  v45 = v7 + 24;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 24), Component_srcLineSprite, v46, v47, v48, v49, v50, v51);
  v52 = *(UnityEngine_GameObject_o **)(v7 + 32);
  ObjectNameList = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v82, 0LL);
  if ( !ObjectNameList )
    goto LABEL_63;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)ObjectNameList, 0LL);
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__SetLayer(v52, layer, 0LL);
  v54 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4576/*"Custom/SpriteWithMask"*/, 0LL);
  v55 = (UnityEngine_Material_o *)sub_B52A54(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v55, v54, 0LL);
  if ( !*(_QWORD *)v45 )
    goto LABEL_63;
  ObjectNameList = *(_QWORD *)(*(_QWORD *)v45 + 32LL);
  if ( !ObjectNameList )
    goto LABEL_63;
  ObjectNameList = (*(__int64 (__fastcall **)(__int64, UnityEngine_Material_o *, _QWORD))(*(_QWORD *)ObjectNameList
                                                                                        + 712LL))(
                     ObjectNameList,
                     v55,
                     *(_QWORD *)(*(_QWORD *)ObjectNameList + 720LL));
  if ( !v55 )
    goto LABEL_63;
  UnityEngine_Material__set_mainTexture(v55, v26, 0LL);
  UnityEngine_Material__SetTexture(v55, (System_String_o *)StringLiteral_16122/*"_MaskTex"*/, v32, 0LL);
  if ( !*(_QWORD *)v45 )
    goto LABEL_63;
  ObjectNameList = *(_QWORD *)(*(_QWORD *)v45 + 32LL);
  klass_high = HIDWORD(methoda.klass);
  if ( !ObjectNameList )
    goto LABEL_63;
  UIWidget__set_height((UIWidget_o *)ObjectNameList, SHIDWORD(methoda.klass), 0LL);
  if ( !*(_QWORD *)v45 )
    goto LABEL_63;
  v57 = *(UIWidget_o **)(*(_QWORD *)v45 + 32LL);
  ObjectNameList = (__int64)TutorialBigDialog_TypeInfo;
  if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
  }
  if ( !v57 )
    goto LABEL_63;
  UIWidget__set_width(v57, TutorialBigDialog_TypeInfo->static_fields->baseWidth, 0LL);
  if ( !*(_QWORD *)v45 )
    goto LABEL_63;
  if ( !v26 )
    goto LABEL_63;
  v58 = *(UITexture_o **)(*(_QWORD *)v45 + 32LL);
  v59 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v26->klass->vtable._6_get_height.method)(
          v26,
          v26->klass->vtable._7_set_height.methodPtr);
  v60 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v26->klass->vtable._6_get_height.method)(
          v26,
          v26->klass->vtable._7_set_height.methodPtr);
  baseWidth = TutorialBigDialog_TypeInfo->static_fields->baseWidth;
  v62 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v26->klass->vtable._4_get_width.method)(
          v26,
          v26->klass->vtable._5_set_width.methodPtr);
  v63 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v26->klass->vtable._6_get_height.method)(
          v26,
          v26->klass->vtable._7_set_height.methodPtr);
  v64 = (float)(v59 - HIDWORD(methoda.klass));
  v86.fields.m_Width = (float)baseWidth / (float)v62;
  v86.fields.m_YMin = v64 / (float)v60;
  v86.fields.m_Height = (float)SHIDWORD(methoda.klass) / (float)v63;
  v86.fields.m_XMin = 0.0;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Rect___ctor(v86, v64, v65, v66, v67, &methoda);
  if ( !v58 )
    goto LABEL_63;
  *(_QWORD *)&v87.fields.m_XMin = methoda.methodPointer;
  *(_QWORD *)&v87.fields.m_Width = methoda.invoker_method;
  UITexture__set_uvRect(v58, v87, 0LL);
  if ( !*(_QWORD *)v45 )
    goto LABEL_63;
  ObjectNameList = *(_QWORD *)(*(_QWORD *)v45 + 40LL);
  if ( !ObjectNameList )
    goto LABEL_63;
  v84.fields.z = 1.0;
  v84.fields.y = (float)klass_high;
  v84.fields.x = (float)TutorialBigDialog_TypeInfo->static_fields->baseWidth;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)ObjectNameList, v84, 0LL);
  if ( !*(_QWORD *)v45 )
    goto LABEL_63;
  ObjectNameList = *(_QWORD *)(*(_QWORD *)v45 + 40LL);
  if ( !ObjectNameList )
    goto LABEL_63;
  v85.fields.y = (float)-klass_high * 0.5;
  v85.fields.x = 0.0;
  v85.fields.z = 0.0;
  UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)ObjectNameList, v85, 0LL);
  if ( !*(_QWORD *)v45 )
    goto LABEL_63;
  ObjectNameList = *(_QWORD *)(*(_QWORD *)v45 + 48LL);
  if ( !ObjectNameList )
    goto LABEL_63;
  UIScrollView__ResetPosition((UIScrollView_o *)ObjectNameList, 0LL);
  ObjectNameList = *v35;
  if ( !*v35 )
    goto LABEL_63;
  ObjectNameList = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)ObjectNameList, 0LL);
  if ( !v82->fields.ImageRoot )
    goto LABEL_63;
  v68 = (UnityEngine_Transform_o *)ObjectNameList;
  ObjectNameList = (__int64)UnityEngine_GameObject__get_transform(v82->fields.ImageRoot, 0LL);
  if ( !v68 )
    goto LABEL_63;
  UnityEngine_Transform__set_parent(v68, (UnityEngine_Transform_o *)ObjectNameList, 0LL);
  ObjectNameList = *v35;
  if ( !*v35 )
    goto LABEL_63;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)ObjectNameList, 0LL);
  *(UnityEngine_Vector3_o *)&v70 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_63;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v70, 0LL);
  ObjectNameList = *v35;
  if ( !*v35 )
    goto LABEL_63;
  v73 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)ObjectNameList, 0LL);
  *(UnityEngine_Vector3_o *)&v74 = UnityEngine_Vector3__get_one(0LL);
  if ( !v73 )
    goto LABEL_63;
  UnityEngine_Transform__set_localScale(v73, *(UnityEngine_Vector3_o *)&v74, 0LL);
  v77 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v77,
    (Il2CppObject *)v7,
    Method_TutorialBigDialog___c__DisplayClass56_0__AddScrollImg_b__0__,
    0LL);
  if ( v82->fields.baseTexLoadRequested )
  {
    if ( v77 )
    {
      AssetLoader_LoadEndDataHandler__Invoke(v77, v82->fields.baseTexAssetData, 0LL);
      return;
    }
LABEL_63:
    sub_B52A5C(ObjectNameList, v9);
  }
  v82->fields.baseTexLoadRequested = 1;
  v79 = TutorialBigDialog_TypeInfo;
  if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v79 = TutorialBigDialog_TypeInfo;
  }
  TuorialImagePath = TutorialBigDialog__GetTuorialImagePath(v82, v79->static_fields->baseImgNo, v78);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(TuorialImagePath, v77, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialBigDialog__AfterLoad(TutorialBigDialog_o *this, int32_t addCount, const MethodInfo *method)
{
  TutorialBigDialog_o *v4; // x19
  _BOOL4 loadByAsset; // w8
  int v6; // w9
  _DWORD *assetsImageLoadList; // x10

  v4 = this;
  if ( (byte_42B23C1 & 1) == 0 )
  {
    this = (TutorialBigDialog_o *)sub_B52984(&StringLiteral_10168/*"OpenWindow"*/);
    byte_42B23C1 = 1;
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
    sub_B52A5C(this, *(_QWORD *)&addCount);
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
      (System_String_o *)StringLiteral_10168/*"OpenWindow"*/,
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
  AndroidBackKeyManager_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_42B23C7 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AndroidBackKeyManager_TypeInfo);
    sub_B52984(&Method_TutorialBigDialog_EndClose__);
    byte_42B23C7 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v10 = AndroidBackKeyManager_TypeInfo;
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    v10 = AndroidBackKeyManager_TypeInfo;
  }
  v10->static_fields->ToastEnabled = 0;
  v11 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_TutorialBigDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall TutorialBigDialog__DestroyImagePageList(TutorialBigDialog_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x0
  Il2CppObject *current; // x20
  __int64 v5; // x1
  struct System_Collections_Generic_List_GameObject__o *v6; // x0
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42B23CD & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B23CD = 1;
  }
  memset(&v7, 0, sizeof(v7));
  ImagePageList = this->fields.ImagePageList;
  if ( ImagePageList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v7,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ImagePageList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v7,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v7.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35616956((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v7,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v6 = this->fields.ImagePageList;
    if ( !v6 )
      sub_B52A5C(0LL, v5);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v6,
      (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_GameObject__Clear__);
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
    sub_B52A5C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B52920(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
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
    sub_B52920(p_endOpenCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_42B23BC & 1) == 0 )
  {
    sub_B52984(&char___TypeInfo);
    byte_42B23BC = 1;
  }
  result = 0;
  v4 = (System_String_array *)sub_B5299C(char___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_9;
  v5 = v4;
  if ( !v4->max_length )
    goto LABEL_10;
  LOWORD(v4->m_Items[0]) = 95;
  if ( !imageName || (v4 = System_String__Split(imageName, (System_Char_array *)v4, 0LL), result = 0, !v4) )
LABEL_9:
    sub_B52A5C(v4, v5);
  if ( v4->max_length <= 3 )
  {
LABEL_10:
    v7 = sub_B52A88(v4);
    sub_B52A28(v7, 0LL);
  }
  System_Int32__TryParse(v4->m_Items[3], &result, 0LL);
  return result;
}


System_String_o *__fastcall TutorialBigDialog__GetTuorialImageName(
        TutorialBigDialog_o *this,
        int32_t imgId,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x0
  System_String_o *v5; // x0
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42B23BB & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&StringLiteral_23701/*"{0:D4}"*/);
    sub_B52984(&StringLiteral_23016/*"tutorial_"*/);
    byte_42B23BB = 1;
  }
  v7 = imgId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v7);
  v5 = System_String__Format((System_String_o *)StringLiteral_23701/*"{0:D4}"*/, v4, 0LL);
  return System_String__Concat_44568316((System_String_o *)StringLiteral_23016/*"tutorial_"*/, v5, 0LL);
}


System_String_o *__fastcall TutorialBigDialog__GetTuorialImagePath(
        TutorialBigDialog_o *this,
        int32_t imgId,
        const MethodInfo *method)
{
  System_String_o *TuorialImageName; // x0

  if ( (byte_42B23BA & 1) == 0 )
  {
    this = (TutorialBigDialog_o *)sub_B52984(&StringLiteral_14672/*"Tutorial/"*/);
    byte_42B23BA = 1;
  }
  TuorialImageName = TutorialBigDialog__GetTuorialImageName(this, imgId, method);
  return System_String__Concat_44568316((System_String_o *)StringLiteral_14672/*"Tutorial/"*/, TuorialImageName, 0LL);
}


void __fastcall TutorialBigDialog__Init(TutorialBigDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
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

  if ( (byte_42B23B0 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&TutorialBigDialog_TypeInfo);
    byte_42B23B0 = 1;
  }
  this->fields.isButtonEnable = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_43:
    sub_B52A5C(gameObject, v4);
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
    sub_B52920((BattleServantConfConponent_o *)&this->fields.alphaTexAssetData, 0LL, v15, v16, v17, v18, v19, v20);
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
    sub_B52920((BattleServantConfConponent_o *)&this->fields.baseTexAssetData, 0LL, v23, v24, v25, v26, v27, v28);
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
          v38 = sub_B52A88(gameObject);
          sub_B52A28(v38, 0LL);
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
    sub_B52920(
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
    sub_B52920(
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
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  TutorialBigDialog_c *v20; // x0
  System_String_o **p_alphaMiniImgPath; // x8
  System_String_o *v22; // x20
  AssetLoader_LoadEndDataHandler_o *v23; // x21

  if ( (byte_42B23C2 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B52984(&TutorialBigDialog_TypeInfo);
    sub_B52984(&Method_TutorialBigDialog___c__DisplayClass58_0__LoadAlpha_b__0__);
    sub_B52984(&TutorialBigDialog___c__DisplayClass58_0_TypeInfo);
    byte_42B23C2 = 1;
  }
  v5 = sub_B52A54(TutorialBigDialog___c__DisplayClass58_0_TypeInfo);
  TutorialBigDialog___c__DisplayClass58_0___ctor((TutorialBigDialog___c__DisplayClass58_0_o *)v5, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)callback, v14, v15, v16, v17, v18, v19);
  this->fields.alphaTexLoadRequested = 1;
  v20 = TutorialBigDialog_TypeInfo;
  if ( this->fields.sizeKind == 2 )
  {
    if ( (WORD1(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
      v20 = TutorialBigDialog_TypeInfo;
    }
    p_alphaMiniImgPath = &v20->static_fields->alphaMiniImgPath;
  }
  else
  {
    if ( (WORD1(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
      v20 = TutorialBigDialog_TypeInfo;
    }
    p_alphaMiniImgPath = &v20->static_fields->alphaImgPath;
  }
  v22 = *p_alphaMiniImgPath;
  v23 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v23,
    (Il2CppObject *)v5,
    Method_TutorialBigDialog___c__DisplayClass58_0__LoadAlpha_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v22, v23, 1, 0LL);
}


void __fastcall TutorialBigDialog__LoadImages(
        TutorialBigDialog_o *this,
        System_Int32_array *images,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  CommonUI_o *Instance; // x0
  __int64 v12; // x1
  System_Action_o *v13; // x20
  const MethodInfo *v14; // x2

  if ( (byte_42B23B8 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_TutorialBigDialog_LoadStart__);
    byte_42B23B8 = 1;
  }
  this->fields._loadIndex = 0;
  this->fields.loadByAsset = 0;
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.ImagePageList = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.ImagePageList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v12);
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v13 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_TutorialBigDialog_LoadStart__, 0LL);
  TutorialBigDialog__LoadAlpha(this, v13, v14);
}


void __fastcall TutorialBigDialog__LoadImages_29205236(
        TutorialBigDialog_o *this,
        System_String_array *images,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  CommonUI_o *Instance; // x0
  __int64 v12; // x1
  System_Action_o *v13; // x20
  const MethodInfo *v14; // x2

  if ( (byte_42B23B9 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_TutorialBigDialog_LoadStartAssets__);
    byte_42B23B9 = 1;
  }
  this->fields._loadIndex = 0;
  this->fields.loadByAsset = 1;
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.ImagePageList = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.ImagePageList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v12);
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v13 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_TutorialBigDialog_LoadStartAssets__, 0LL);
  TutorialBigDialog__LoadAlpha(this, v13, v14);
}


void __fastcall TutorialBigDialog__LoadStart(TutorialBigDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TutorialBigDialog_o *v3; // x19
  struct System_Int32_array *TutorialImageLoadList; // x8
  __int64 loadIndex; // x9
  System_String_o *TuorialImagePath; // x20
  AssetLoader_LoadEndDataHandler_o *v7; // x21
  __int64 v8; // x0

  v3 = this;
  if ( (byte_42B23BD & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    this = (TutorialBigDialog_o *)sub_B52984(&Method_TutorialBigDialog__LoadStart_b__53_0__);
    byte_42B23BD = 1;
  }
  TutorialImageLoadList = v3->fields.TutorialImageLoadList;
  if ( !TutorialImageLoadList )
    sub_B52A5C(this, method);
  loadIndex = v3->fields._loadIndex;
  if ( (unsigned int)loadIndex >= TutorialImageLoadList->max_length )
  {
    v8 = sub_B52A88(this);
    sub_B52A28(v8, 0LL);
  }
  TuorialImagePath = TutorialBigDialog__GetTuorialImagePath(v3, TutorialImageLoadList->m_Items[loadIndex + 1], v2);
  v7 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v7, (Il2CppObject *)v3, Method_TutorialBigDialog__LoadStart_b__53_0__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(TuorialImagePath, v7, 1, 0LL);
}


void __fastcall TutorialBigDialog__LoadStartAssets(TutorialBigDialog_o *this, const MethodInfo *method)
{
  TutorialBigDialog_o *v2; // x19
  struct System_String_array *assetsImageLoadList; // x8
  __int64 loadIndex; // x9
  System_String_o *v5; // x20
  AssetLoader_LoadEndDataHandler_o *v6; // x21
  __int64 v7; // x0

  v2 = this;
  if ( (byte_42B23BE & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    this = (TutorialBigDialog_o *)sub_B52984(&Method_TutorialBigDialog__LoadStartAssets_b__54_0__);
    byte_42B23BE = 1;
  }
  assetsImageLoadList = v2->fields.assetsImageLoadList;
  if ( !assetsImageLoadList )
    sub_B52A5C(this, method);
  loadIndex = v2->fields._loadIndex;
  if ( (unsigned int)loadIndex >= assetsImageLoadList->max_length )
  {
    v7 = sub_B52A88(this);
    sub_B52A28(v7, 0LL);
  }
  v5 = assetsImageLoadList->m_Items[loadIndex];
  v6 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v6,
    (Il2CppObject *)v2,
    Method_TutorialBigDialog__LoadStartAssets_b__54_0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v5, v6, 1, 0LL);
}


void __fastcall TutorialBigDialog__OnBottomButton(TutorialBigDialog_o *this, const MethodInfo *method)
{
  TutorialBigDialog_o *v2; // x19
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x8
  const MethodInfo *v4; // x1

  v2 = this;
  if ( (byte_42B23CA & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    this = (TutorialBigDialog_o *)sub_B52984(&SoundManager_TypeInfo);
    byte_42B23CA = 1;
  }
  if ( !v2->fields.IsFading )
  {
    ImagePageList = v2->fields.ImagePageList;
    if ( !ImagePageList )
      sub_B52A5C(this, method);
    if ( v2->fields.CurrentIndex == ImagePageList->fields._size - 1 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(1, 0LL);
      TutorialBigDialog__OnClickClose(v2, v4);
    }
  }
}


void __fastcall TutorialBigDialog__OnClickClose(TutorialBigDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x2
  int32_t localFlagId; // w20
  int configFlagId; // w20
  NetworkManager_ResultCallbackFunc_o *v7; // x20
  TutorialSetRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v9; // x1
  NetworkManager_ResultCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3

  if ( (byte_42B23CB & 1) == 0 )
  {
    sub_B52984(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_B52984(&Method_NetworkManager_getRequest_TutorialSetRequest___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&Method_TutorialBigDialog_EndTurorialRequest__);
    sub_B52984(&TutorialFlag_TypeInfo);
    byte_42B23CB = 1;
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
      TutorialFlag__Set_29213236(localFlagId, v3);
    }
    configFlagId = this->fields.configFlagId;
    if ( configFlagId >= 1 )
    {
      if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TutorialFlag_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      }
      TutorialFlag__SetConfigFlg(configFlagId, v3);
    }
    if ( this->fields.flagId != -1 )
    {
      v7 = (NetworkManager_ResultCallbackFunc_o *)sub_B52A54(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v7,
        (Il2CppObject *)this,
        Method_TutorialBigDialog_EndTurorialRequest__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (TutorialSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                    v7,
                                                                    (const MethodInfo_1F705CC *)Method_NetworkManager_getRequest_TutorialSetRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        TutorialSetRequest__beginRequest(Request_WarBoardWallAttackRequest, this->fields.flagId, 0LL);
        return;
      }
LABEL_33:
      sub_B52A5C(Request_WarBoardWallAttackRequest, v9);
    }
    if ( this->fields.eventFlagId == -1 || !this->fields.eventId )
    {
      TutorialBigDialog__Close(this, this->fields.closeCallbackFunc, v4);
    }
    else
    {
      v10 = (NetworkManager_ResultCallbackFunc_o *)sub_B52A54(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_TutorialBigDialog_EndTurorialRequest__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (TutorialSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                    v10,
                                                                    (const MethodInfo_1F705CC *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
      if ( !Request_WarBoardWallAttackRequest )
        goto LABEL_33;
      TutorialEventSetRequest__beginRequest(
        (TutorialEventSetRequest_o *)Request_WarBoardWallAttackRequest,
        this->fields.eventFlagId,
        this->fields.eventId,
        v11);
    }
  }
}


void __fastcall TutorialBigDialog__OnNextButton(TutorialBigDialog_o *this, const MethodInfo *method)
{
  TutorialBigDialog_o *v2; // x19
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x8
  const MethodInfo *v4; // x2

  v2 = this;
  if ( (byte_42B23C8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    this = (TutorialBigDialog_o *)sub_B52984(&SoundManager_TypeInfo);
    byte_42B23C8 = 1;
  }
  if ( !v2->fields.IsFading )
  {
    ImagePageList = v2->fields.ImagePageList;
    if ( !ImagePageList )
      sub_B52A5C(this, method);
    if ( v2->fields.CurrentIndex != ImagePageList->fields._size - 1 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      TutorialBigDialog__UpdatePage(v2, v2->fields.CurrentIndex + 1, v4);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialBigDialog__OnPageChange(TutorialBigDialog_o *this, int32_t idx, const MethodInfo *method)
{
  TutorialBigDialog_o *v4; // x20
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x8

  v4 = this;
  if ( (byte_42B23CC & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    this = (TutorialBigDialog_o *)sub_B52984(&SoundManager_TypeInfo);
    byte_42B23CC = 1;
  }
  if ( (idx & 0x80000000) == 0 && v4->fields.CurrentIndex != idx )
  {
    ImagePageList = v4->fields.ImagePageList;
    if ( !ImagePageList )
      sub_B52A5C(this, *(_QWORD *)&idx);
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

  if ( (byte_42B23C9 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B23C9 = 1;
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

  if ( (byte_42B23B1 & 1) == 0 )
  {
    sub_B52984(&int___TypeInfo);
    sub_B52984(&TutorialBigDialog_TypeInfo);
    byte_42B23B1 = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&flagId);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.endOpenCallbackFunc,
    (System_Int32_array **)endOpenFunc,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.endTurorialRequestFunc,
    (System_Int32_array **)endTurorialRequestFunc,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.closeCallbackFunc = closeFunc;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)closeFunc,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  CloseButton = this->fields.CloseButton;
  this->fields.flagId = flagId;
  *(_OWORD *)&this->fields.localFlagId = xmmword_30D66F0;
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
  v35 = (struct System_Int32_array *)sub_B5299C(int___TypeInfo, images->max_length);
  this->fields.TutorialImageLoadList = v35;
  p_TutorialImageLoadList = &this->fields.TutorialImageLoadList;
  sub_B52920(
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
        v50 = sub_B52A88(CloseButton);
        sub_B52A28(v50, 0LL);
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
    sub_B52A5C(CloseButton, v31);
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
  System_Action_o *v9; // x23
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
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
  __int64 v28; // x1
  UnityEngine_GameObject_o *CloseButton; // x0
  UnityEngine_Transform_o *v30; // x21
  TutorialBigDialog_c *v31; // x8
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  srcLineSprite_o *Component_srcLineSprite; // x20
  EventDelegate_Callback_o *v39; // x22
  EventDelegate_o *v40; // x21
  System_Int32_array *v41; // x1
  const MethodInfo *v42; // x2
  const MethodInfo *v43; // x2

  if ( (byte_42B23B6 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&EventDelegate_Callback_TypeInfo);
    sub_B52984(&EventDelegate_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
    sub_B52984(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_B52984(&Method_TutorialBigDialog__OpenAssets_b__46_0__);
    sub_B52984(&Method_TutorialBigDialog__OpenAssets_b__46_1__);
    sub_B52984(&TutorialBigDialog_TypeInfo);
    byte_42B23B6 = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&kind);
  v9 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_TutorialBigDialog__OpenAssets_b__46_0__, 0LL);
  this->fields.endOpenCallbackFunc = v9;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.endOpenCallbackFunc,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  this->fields.endTurorialRequestFunc = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.endTurorialRequestFunc, 0LL, v16, v17, v18, v19, v20, v21);
  this->fields.closeCallbackFunc = closeFunc;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)closeFunc,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  CloseButton = this->fields.CloseButton;
  this->fields.configFlagId = 0;
  this->fields.sizeKind = kind;
  *(_OWORD *)&this->fields.flagId = xmmword_3279200;
  if ( !CloseButton )
    goto LABEL_15;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0LL);
  v30 = (UnityEngine_Transform_o *)CloseButton;
  v31 = TutorialBigDialog_TypeInfo;
  if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v31 = TutorialBigDialog_TypeInfo;
  }
  if ( !v30 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v30, v31->static_fields->miniCloseButtonPosition, 0LL);
  this->fields.TutorialImageLoadList = images;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.TutorialImageLoadList,
    (System_Int32_array **)images,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  CloseButton = this->fields.TouchMask;
  this->fields.isButtonEnable = 0;
  if ( !CloseButton )
    goto LABEL_15;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              CloseButton,
                              (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
  v39 = (EventDelegate_Callback_o *)sub_B52A54(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v39, (Il2CppObject *)this, Method_TutorialBigDialog__OpenAssets_b__46_1__, 0LL);
  v40 = (EventDelegate_o *)sub_B52A54(EventDelegate_TypeInfo);
  EventDelegate___ctor_29649660(v40, v39, 0LL);
  if ( !Component_srcLineSprite
    || (CloseButton = (UnityEngine_GameObject_o *)Component_srcLineSprite->fields.mFSM) == 0LL
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)CloseButton,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v40,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventDelegate__Add__),
        BaseDialog__SetMask((BaseDialog_o *)this, 0, 0LL),
        TutorialBigDialog__LoadImages(this, v41, v42),
        (CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_15:
    sub_B52A5C(CloseButton, v28);
  }
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v43);
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

  if ( (byte_42B23B7 & 1) == 0 )
  {
    sub_B52984(&TutorialBigDialog_TypeInfo);
    byte_42B23B7 = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&configId);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.endOpenCallbackFunc,
    (System_Int32_array **)endOpenFunc,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.endTurorialRequestFunc,
    (System_Int32_array **)endTurorialRequestFunc,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.closeCallbackFunc = closeFunc;
  sub_B52920(
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
  *(_OWORD *)&this->fields.flagId = xmmword_3279200;
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
        sub_B52920(
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
        TutorialBigDialog__LoadImages_29205236(this, v41, v42),
        (CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_12:
    sub_B52A5C(CloseButton, v31);
  }
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v43);
}


void __fastcall TutorialBigDialog__OpenWindow(TutorialBigDialog_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_42B23C3 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_TutorialBigDialog_EndOpen__);
    byte_42B23C3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  v5 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_TutorialBigDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v5, 1, 0LL);
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

  if ( (byte_42B23B5 & 1) == 0 )
  {
    sub_B52984(&TutorialBigDialog_TypeInfo);
    byte_42B23B5 = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, (const MethodInfo *)closeFunc);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.endOpenCallbackFunc,
    (System_Int32_array **)endOpenFunc,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.endTurorialRequestFunc,
    (System_Int32_array **)endTurorialRequestFunc,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.closeCallbackFunc = closeFunc;
  sub_B52920(
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
  *(_OWORD *)&this->fields.flagId = xmmword_3279200;
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
        sub_B52920(
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
        TutorialBigDialog__LoadImages_29205236(this, v39, v40),
        (CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_12:
    sub_B52A5C(CloseButton, v29);
  }
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v41);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialBigDialog__Open_29203408(
        TutorialBigDialog_o *this,
        TutorialFlag_ImageId_array *images,
        int32_t flagId,
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

  if ( (byte_42B23B2 & 1) == 0 )
  {
    sub_B52984(&int___TypeInfo);
    sub_B52984(&TutorialBigDialog_TypeInfo);
    byte_42B23B2 = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&flagId);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.endOpenCallbackFunc,
    (System_Int32_array **)endOpenFunc,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.endTurorialRequestFunc,
    (System_Int32_array **)endTurorialRequestFunc,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.closeCallbackFunc = closeFunc;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)closeFunc,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
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
  v35 = (struct System_Int32_array *)sub_B5299C(int___TypeInfo, images->max_length);
  this->fields.TutorialImageLoadList = v35;
  p_TutorialImageLoadList = &this->fields.TutorialImageLoadList;
  sub_B52920(
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
        v50 = sub_B52A88(CloseButton);
        sub_B52A28(v50, 0LL);
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
    sub_B52A5C(CloseButton, v31);
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v49);
}


void __fastcall TutorialBigDialog__Open_29203932(
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

  if ( (byte_42B23B3 & 1) == 0 )
  {
    sub_B52984(&TutorialBigDialog_TypeInfo);
    byte_42B23B3 = 1;
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.endOpenCallbackFunc,
    (System_Int32_array **)endOpenFunc,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.endTurorialRequestFunc,
    (System_Int32_array **)endTurorialRequestFunc,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.closeCallbackFunc = closeFunc;
  sub_B52920(
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
        sub_B52920(
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
    sub_B52A5C(CloseButton, v34);
  }
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v46);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialBigDialog__Open_29204336(
        TutorialBigDialog_o *this,
        TutorialFlag_ImageId_array *images,
        int32_t flagId,
        int32_t eventId,
        System_Action_o *closeFunc,
        System_Action_o *endOpenFunc,
        System_Action_o *endTurorialRequestFunc,
        const MethodInfo *method)
{
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
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
  __int64 v33; // x1
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

  if ( (byte_42B23B4 & 1) == 0 )
  {
    sub_B52984(&int___TypeInfo);
    sub_B52984(&TutorialBigDialog_TypeInfo);
    byte_42B23B4 = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&flagId);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.endOpenCallbackFunc,
    (System_Int32_array **)endOpenFunc,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.endTurorialRequestFunc,
    (System_Int32_array **)endTurorialRequestFunc,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.closeCallbackFunc = closeFunc;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)closeFunc,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
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
  v37 = (struct System_Int32_array *)sub_B5299C(int___TypeInfo, images->max_length);
  this->fields.TutorialImageLoadList = v37;
  p_TutorialImageLoadList = &this->fields.TutorialImageLoadList;
  sub_B52920(
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
        v52 = sub_B52A88(CloseButton);
        sub_B52A28(v52, 0LL);
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
    sub_B52A5C(CloseButton, v33);
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v51);
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
    sub_B52A5C(TouchMask, isDisp);
  }
  UnityEngine_GameObject__SetActive(TouchMask, isDisp, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialBigDialog__UpdateButtons(TutorialBigDialog_o *this, bool isDisp, const MethodInfo *method)
{
  TutorialBigDialog_o *v4; // x19
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x8
  UnityEngine_GameObject_o *CloseButton; // x20
  TutorialBigDialog_o **p_PrevButton; // x21
  UnityEngine_GameObject_o *PrevButton; // x20
  UILabel_o *basePanelList; // x20
  UILabel_o *v10; // x19
  AndroidBackKeyManager_c *v11; // x0
  __int64 v12; // x0

  v4 = this;
  if ( (byte_42B23C5 & 1) == 0 )
  {
    sub_B52984(&AndroidBackKeyManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____68597944);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_13559/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/);
    this = (TutorialBigDialog_o *)sub_B52984(&StringLiteral_13560/*"TUTORIAL_IMAGE_DIALOG_PREV"*/);
    byte_42B23C5 = 1;
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
                                    (const MethodInfo_1A49604 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____68597944);
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
    this = (TutorialBigDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13559/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, 0LL);
    if ( !basePanelList )
LABEL_45:
      sub_B52A5C(this, isDisp);
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
                                  (const MethodInfo_1A49604 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____68597944);
  if ( !this )
    goto LABEL_45;
  if ( !LODWORD(this->fields.basePanel) )
  {
LABEL_46:
    v12 = sub_B52A88(this);
    sub_B52A28(v12, 0LL);
  }
  v10 = (UILabel_o *)this->fields.basePanelList;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (TutorialBigDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13560/*"TUTORIAL_IMAGE_DIALOG_PREV"*/, 0LL);
  if ( !v10 )
    goto LABEL_45;
  UILabel__set_text(v10, (System_String_o *)this, 0LL);
LABEL_41:
  v11 = AndroidBackKeyManager_TypeInfo;
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    v11 = AndroidBackKeyManager_TypeInfo;
  }
  v11->static_fields->ToastEnabled = 1;
}


void __fastcall TutorialBigDialog__UpdatePage(TutorialBigDialog_o *this, int32_t dispIndex, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  long double v8; // q8
  long double v9; // q9
  int32_t CurrentIndex; // w25
  struct UITexture_o **p_FadeInTarget; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct UITexture_o *Component_srcLineSprite; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x23
  int size; // w26
  unsigned int v25; // w27
  __int64 v26; // x8
  UnityEngine_GameObject_o *v27; // x23
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct UITexture_o *v34; // x24
  UITexture_c *klass; // x8
  long double v36; // q0
  UnityEngine_GameObject_o *v37; // x0
  bool v38; // w1
  UnityEngine_GameObject_o *gameObject; // x21
  TutorialBigDialog_c *v40; // x8
  UnityEngine_GameObject_o *v41; // x0
  UITweener_o *v42; // x20
  EventDelegate_Callback_o *v43; // x21

  if ( (byte_42B23C4 & 1) == 0 )
  {
    sub_B52984(&EventDelegate_Callback_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UITexture___);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B52984(&Method_TutorialBigDialog__UpdatePage_b__60_0__);
    sub_B52984(&TutorialBigDialog_TypeInfo);
    byte_42B23C4 = 1;
  }
  CurrentIndex = this->fields.CurrentIndex;
  this->fields.FadeInTarget = 0LL;
  p_FadeInTarget = &this->fields.FadeInTarget;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.FadeInTarget,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.FadeOutTarget = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.FadeOutTarget, 0LL, v14, v15, v16, v17, v18, v19);
  ImagePageList = this->fields.ImagePageList;
  if ( !ImagePageList )
    goto LABEL_33;
  size = ImagePageList->fields._size;
  if ( size >= 1 )
  {
    LODWORD(v8) = 1000593162;
    v25 = 0;
    LODWORD(v9) = 1.0;
    while ( 1 )
    {
      if ( ImagePageList->fields._size <= v25 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v26 = (__int64)ImagePageList->fields._items + 8 * (int)v25;
      v27 = *(UnityEngine_GameObject_o **)(v26 + 32);
      if ( !v27 )
        goto LABEL_33;
      Component_srcLineSprite = (struct UITexture_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        *(UnityEngine_GameObject_o **)(v26 + 32),
                                                        (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
      v34 = Component_srcLineSprite;
      if ( dispIndex == v25 )
        break;
      if ( v25 == this->fields.CurrentIndex && CurrentIndex != dispIndex )
      {
        this->fields.FadeOutTarget = Component_srcLineSprite;
        sub_B52920(
          (BattleServantConfConponent_o *)&this->fields.FadeOutTarget,
          (System_Int32_array **)Component_srcLineSprite,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
LABEL_20:
        v38 = 1;
        v37 = v27;
        goto LABEL_21;
      }
      v37 = v27;
      v38 = 0;
LABEL_21:
      UnityEngine_GameObject__SetActive(v37, v38, 0LL);
      if ( (int)++v25 >= size )
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
      v36 = v9;
    }
    else
    {
      *p_FadeInTarget = Component_srcLineSprite;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.FadeInTarget,
        (System_Int32_array **)Component_srcLineSprite,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      if ( !v34 )
        goto LABEL_33;
      klass = v34->klass;
      Component_srcLineSprite = v34;
      v36 = v8;
    }
    ((void (__fastcall *)(struct UITexture_o *, Il2CppMethodPointer, long double))klass->vtable._8_set_alpha.method)(
      Component_srcLineSprite,
      klass->vtable._9_CalculateFinalAlpha.methodPtr,
      v36);
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
      v40 = TutorialBigDialog_TypeInfo;
      if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
        v40 = TutorialBigDialog_TypeInfo;
      }
      TweenAlpha__Begin(gameObject, v40->static_fields->FADE_TIME, 0.0, 0LL);
      Component_srcLineSprite = *p_FadeInTarget;
      if ( *p_FadeInTarget )
      {
        v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
        v42 = (UITweener_o *)TweenAlpha__Begin(v41, TutorialBigDialog_TypeInfo->static_fields->FADE_TIME, 1.0, 0LL);
        v43 = (EventDelegate_Callback_o *)sub_B52A54(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(v43, (Il2CppObject *)this, Method_TutorialBigDialog__UpdatePage_b__60_0__, 0LL);
        if ( v42 )
        {
          UITweener__SetOnFinished(v42, v43, 0LL);
          return;
        }
      }
    }
LABEL_33:
    sub_B52A5C(Component_srcLineSprite, v21);
  }
  TutorialBigDialog__UpdateButtons(this, 1, v22);
}


void __fastcall TutorialBigDialog___LoadStartAssets_b__54_0(
        TutorialBigDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  TutorialBigDialog_o *v4; // x19
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x3
  struct System_String_array *assetsImageLoadList; // x8
  int v8; // w9
  UnityEngine_Texture2D_o *Object_WarBoardWaitTimeSetting; // x0
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2
  __int64 v12; // x0

  v4 = this;
  if ( (byte_42B23D1 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_AssetData_GetObject_Texture2D____68579976);
    sub_B52984(&Method_TutorialBigDialog__LoadStartAssets_b__54_1__);
    this = (TutorialBigDialog_o *)sub_B52984(&StringLiteral_16114/*"_L_"*/);
    byte_42B23D1 = 1;
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
                                  (System_String_o *)StringLiteral_16114/*"_L_"*/,
                                  0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)v4, Method_TutorialBigDialog__LoadStartAssets_b__54_1__, 0LL);
    TutorialBigDialog__AddScrollImg(v4, data, v5, v6);
    return;
  }
  assetsImageLoadList = v4->fields.assetsImageLoadList;
  if ( !assetsImageLoadList )
LABEL_12:
    sub_B52A5C(this, data);
  v8 = v4->fields._loadIndex + 1;
  if ( v8 >= assetsImageLoadList->max_length )
  {
LABEL_13:
    v12 = sub_B52A88(this);
    sub_B52A28(v12, 0LL);
  }
  Object_WarBoardWaitTimeSetting = (UnityEngine_Texture2D_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                data,
                                                                assetsImageLoadList->m_Items[v8],
                                                                (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_Texture2D____68579976);
  TutorialBigDialog__AddImg(v4, Object_WarBoardWaitTimeSetting, v10);
  TutorialBigDialog__AfterLoad(v4, 2, v11);
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
  const MethodInfo *v5; // x2
  System_Action_o *v6; // x21
  const MethodInfo *v7; // x3
  struct System_Int32_array *TutorialImageLoadList; // x8
  __int64 loadIndex; // x9
  System_String_o *TuorialImageName; // x0
  UnityEngine_Texture2D_o *Object_WarBoardWaitTimeSetting; // x0
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2
  __int64 v14; // x0

  v4 = this;
  if ( (byte_42B23D0 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_AssetData_GetObject_Texture2D____68579976);
    sub_B52984(&Method_TutorialBigDialog__LoadStart_b__53_1__);
    this = (TutorialBigDialog_o *)sub_B52984(&StringLiteral_16114/*"_L_"*/);
    byte_42B23D0 = 1;
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
                                  (System_String_o *)StringLiteral_16114/*"_L_"*/,
                                  0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v6 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)v4, Method_TutorialBigDialog__LoadStart_b__53_1__, 0LL);
    TutorialBigDialog__AddScrollImg(v4, data, v6, v7);
    return;
  }
  TutorialImageLoadList = v4->fields.TutorialImageLoadList;
  if ( !TutorialImageLoadList )
LABEL_12:
    sub_B52A5C(this, data);
  loadIndex = v4->fields._loadIndex;
  if ( (unsigned int)loadIndex >= TutorialImageLoadList->max_length )
  {
LABEL_13:
    v14 = sub_B52A88(this);
    sub_B52A28(v14, 0LL);
  }
  TuorialImageName = TutorialBigDialog__GetTuorialImageName(this, TutorialImageLoadList->m_Items[loadIndex + 1], v5);
  Object_WarBoardWaitTimeSetting = (UnityEngine_Texture2D_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                data,
                                                                TuorialImageName,
                                                                (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_Texture2D____68579976);
  TutorialBigDialog__AddImg(v4, Object_WarBoardWaitTimeSetting, v12);
  TutorialBigDialog__AfterLoad(v4, 1, v13);
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
    sub_B52A5C(FadeOutTarget, v3);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)FadeOutTarget, 0, 0LL);
  this->fields.IsFading = 0;
  TutorialBigDialog__UpdateButtons(this, 1, v5);
}


void __fastcall TutorialBigDialog__refreshCurrent(TutorialBigDialog_o *this, const MethodInfo *method)
{
  TutorialBigDialog_o *v2; // x19
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x20
  int size; // w8
  __int64 CurrentIndex; // x19
  srcLineSprite_o *Component_srcLineSprite; // x19

  v2 = this;
  if ( (byte_42B23C6 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_TutorialImageLong___);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    this = (TutorialBigDialog_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B23C6 = 1;
  }
  ImagePageList = v2->fields.ImagePageList;
  if ( !ImagePageList )
    goto LABEL_16;
  size = ImagePageList->fields._size;
  CurrentIndex = v2->fields.CurrentIndex;
  if ( size > (int)CurrentIndex )
  {
    if ( size <= (unsigned int)CurrentIndex )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    this = (TutorialBigDialog_o *)ImagePageList->fields._items->m_Items[CurrentIndex];
    if ( !this )
      goto LABEL_16;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)this,
                                (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_TutorialImageLong___);
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
      sub_B52A5C(this, method);
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
  struct TutorialBigDialog_o *_4__this; // x8
  UnityEngine_Shader_o *v6; // x22
  UnityEngine_Material_o *v7; // x21
  struct TutorialImageLong_o *comp; // x8
  TutorialBigDialog_o *v9; // x22
  struct TutorialBigDialog_o *v10; // x8
  UnityEngine_Texture_o *Object_WarBoardWaitTimeSetting; // x0
  struct TutorialBigDialog_o *v12; // x8

  v4 = this;
  if ( (byte_42ADA0C & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_Texture2D____68579976);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B52984(&UnityEngine_Material_TypeInfo);
    sub_B52984(&TutorialBigDialog_TypeInfo);
    sub_B52984(&StringLiteral_4576/*"Custom/SpriteWithMask"*/);
    this = (TutorialBigDialog___c__DisplayClass56_0_o *)sub_B52984(&StringLiteral_16122/*"_MaskTex"*/);
    byte_42ADA0C = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  _4__this->fields.baseTexAssetData = aData;
  sub_B52920(&_4__this->fields.baseTexAssetData);
  v6 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4576/*"Custom/SpriteWithMask"*/, 0LL);
  v7 = (UnityEngine_Material_o *)sub_B52A54(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v7, v6, 0LL);
  comp = v4->fields.comp;
  if ( !comp )
    goto LABEL_17;
  this = (TutorialBigDialog___c__DisplayClass56_0_o *)comp->fields.BaseImage;
  if ( !this )
    goto LABEL_17;
  ((void (__fastcall *)(TutorialBigDialog___c__DisplayClass56_0_o *, UnityEngine_Material_o *, Il2CppMethodPointer))this->klass[1].vtable._2_GetHashCode.method)(
    this,
    v7,
    this->klass[1].vtable._3_ToString.methodPtr);
  v9 = v4->fields.__4__this;
  this = (TutorialBigDialog___c__DisplayClass56_0_o *)TutorialBigDialog_TypeInfo;
  if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
  }
  if ( !v9 )
    goto LABEL_17;
  this = (TutorialBigDialog___c__DisplayClass56_0_o *)TutorialBigDialog__GetTuorialImageName(
                                                        v9,
                                                        TutorialBigDialog_TypeInfo->static_fields->baseImgNo,
                                                        0LL);
  if ( !aData )
    goto LABEL_17;
  this = (TutorialBigDialog___c__DisplayClass56_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                        aData,
                                                        (System_String_o *)this,
                                                        (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_Texture2D____68579976);
  if ( !v7
    || (UnityEngine_Material__set_mainTexture(v7, (UnityEngine_Texture_o *)this, 0LL),
        (v10 = v4->fields.__4__this) == 0LL)
    || (this = (TutorialBigDialog___c__DisplayClass56_0_o *)v10->fields.alphaTexAssetData) == 0LL
    || (Object_WarBoardWaitTimeSetting = (UnityEngine_Texture_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                    (AssetData_o *)this,
                                                                    TutorialBigDialog_TypeInfo->static_fields->alphaImgName,
                                                                    (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_Texture2D____68579976),
        UnityEngine_Material__SetTexture(
          v7,
          (System_String_o *)StringLiteral_16122/*"_MaskTex"*/,
          Object_WarBoardWaitTimeSetting,
          0LL),
        (v12 = v4->fields.__4__this) == 0LL)
    || (this = (TutorialBigDialog___c__DisplayClass56_0_o *)v12->fields.ImagePageList) == 0LL )
  {
LABEL_17:
    sub_B52A5C(this, aData);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v4->fields.obj,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GameObject__Add__);
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
    sub_B52A5C(0LL, data);
  _4__this->fields.alphaTexAssetData = data;
  sub_B52920(&_4__this->fields.alphaTexAssetData);
  ActionExtensions__Call(this->fields.callback, 0LL);
}