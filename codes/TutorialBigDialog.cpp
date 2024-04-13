void __fastcall TutorialBigDialog___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct TutorialBigDialog_StaticFields *static_fields; // x0
  System_Int32_array **v21; // x1
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
  struct TutorialBigDialog_StaticFields *v38; // x0
  System_Int32_array **v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  TutorialBigDialog_c *v46; // x8
  struct TutorialBigDialog_StaticFields *v47; // x9
  struct TutorialBigDialog_StaticFields *v48; // x8

  if ( (byte_42EAD31 & 1) == 0 )
  {
    sub_B5D5C4(&TutorialBigDialog_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_14734/*"Tutorial/tutorial_alpha"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17810/*"combine_tutorial_alpha"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_14732/*"Tutorial/combine_tutorial_alpha"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_23133/*"tutorial_alpha"*/, v17, v18, v19);
    byte_42EAD31 = 1;
  }
  TutorialBigDialog_TypeInfo->static_fields->FADE_TIME = 0.3;
  static_fields = TutorialBigDialog_TypeInfo->static_fields;
  v21 = (System_Int32_array **)StringLiteral_14734/*"Tutorial/tutorial_alpha"*/;
  static_fields->alphaImgPath = (struct System_String_o *)StringLiteral_14734/*"Tutorial/tutorial_alpha"*/;
  sub_B5D560((BattleServantConfConponent_o *)&static_fields->alphaImgPath, v21, v2, v3, v4, v5, v6, v7);
  v22 = TutorialBigDialog_TypeInfo->static_fields;
  v23 = (System_Int32_array **)StringLiteral_23133/*"tutorial_alpha"*/;
  v22->alphaImgName = (struct System_String_o *)StringLiteral_23133/*"tutorial_alpha"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v22->alphaImgName, v23, v24, v25, v26, v27, v28, v29);
  v30 = TutorialBigDialog_TypeInfo->static_fields;
  v31 = (System_Int32_array **)StringLiteral_14732/*"Tutorial/combine_tutorial_alpha"*/;
  v30->alphaMiniImgPath = (struct System_String_o *)StringLiteral_14732/*"Tutorial/combine_tutorial_alpha"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v30->alphaMiniImgPath, v31, v32, v33, v34, v35, v36, v37);
  v38 = TutorialBigDialog_TypeInfo->static_fields;
  v39 = (System_Int32_array **)StringLiteral_17810/*"combine_tutorial_alpha"*/;
  v38->alphaMiniImgName = (struct System_String_o *)StringLiteral_17810/*"combine_tutorial_alpha"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v38->alphaMiniImgName, v39, v40, v41, v42, v43, v44, v45);
  v46 = TutorialBigDialog_TypeInfo;
  TutorialBigDialog_TypeInfo->static_fields->baseImgNo = 6;
  v46->static_fields->baseWidth = 900;
  v47 = v46->static_fields;
  *(_QWORD *)&v47->baseCloseButtonPosition.fields.x = 0x4382800043F28000LL;
  v47->baseCloseButtonPosition.fields.z = 0.0;
  v48 = v46->static_fields;
  *(_QWORD *)&v48->miniCloseButtonPosition.fields.x = 0x4362000043BD0000LL;
  v48->miniCloseButtonPosition.fields.z = 0.0;
}


void __fastcall TutorialBigDialog___ctor(TutorialBigDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAD30 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAD30 = 1;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  struct UnityEngine_GameObject_o *TutorialImagePrefab; // x20
  UnityEngine_Object_o *v37; // x20
  System_String_o *v38; // x0
  System_String_o *gameObject; // x0
  __int64 v40; // x1
  srcLineSprite_o *Component_srcLineSprite; // x23
  int32_t layer; // w22
  UnityEngine_Shader_o *v43; // x24
  UnityEngine_Material_o *v44; // x22
  TutorialBigDialog_c *v45; // x0
  System_String_o **p_alphaMiniImgName; // x8
  UnityEngine_Texture_o *Object_WarBoardWaitTimeSetting; // x0
  UnityEngine_Transform_o *v48; // x21
  UnityEngine_Transform_o *transform; // x21
  int v50; // s0
  UnityEngine_Transform_o *v53; // x21
  int v54; // s0

  if ( (byte_42EAD21 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_Texture2D____68807528, (_DWORD)tex, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UITexture___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Material_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&NGUITools_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v18, v19, v20);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&TutorialBigDialog_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_4609/*"Custom/SpriteWithMask"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_7582/*"Image"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_16207/*"_MaskTex"*/, v33, v34, v35);
    byte_42EAD21 = 1;
  }
  TutorialImagePrefab = this->fields.TutorialImagePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v37 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                  (UnityEngine_UI_Dropdown_DropdownItem_o *)TutorialImagePrefab,
                                  (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v38 = System_Int32__ToString((int)this + 240, 0LL);
  gameObject = System_String__Concat_44577788((System_String_o *)StringLiteral_7582/*"Image"*/, v38, 0LL);
  if ( !v37 )
    goto LABEL_29;
  UnityEngine_Object__set_name(v37, gameObject, 0LL);
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)v37,
                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_29;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)gameObject, 0LL);
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__SetLayer((UnityEngine_GameObject_o *)v37, layer, 0LL);
  v43 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4609/*"Custom/SpriteWithMask"*/, 0LL);
  v44 = (UnityEngine_Material_o *)sub_B5D694(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v44, v43, 0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_29;
  gameObject = (System_String_o *)((__int64 (__fastcall *)(srcLineSprite_o *, UnityEngine_Material_o *, Il2CppMethodPointer))Component_srcLineSprite->klass[1].vtable._2_GetHashCode.method)(
                                    Component_srcLineSprite,
                                    v44,
                                    Component_srcLineSprite->klass[1].vtable._3_ToString.methodPtr);
  if ( !v44 )
    goto LABEL_29;
  UnityEngine_Material__set_mainTexture(v44, (UnityEngine_Texture_o *)tex, 0LL);
  v45 = TutorialBigDialog_TypeInfo;
  if ( this->fields.sizeKind == 2 )
  {
    if ( (WORD1(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
      v45 = TutorialBigDialog_TypeInfo;
    }
    p_alphaMiniImgName = &v45->static_fields->alphaMiniImgName;
  }
  else
  {
    if ( (WORD1(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
      v45 = TutorialBigDialog_TypeInfo;
    }
    p_alphaMiniImgName = &v45->static_fields->alphaImgName;
  }
  gameObject = (System_String_o *)this->fields.alphaTexAssetData;
  if ( !gameObject )
    goto LABEL_29;
  Object_WarBoardWaitTimeSetting = (UnityEngine_Texture_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                              (AssetData_o *)gameObject,
                                                              *p_alphaMiniImgName,
                                                              (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_Texture2D____68807528);
  UnityEngine_Material__SetTexture(v44, (System_String_o *)StringLiteral_16207/*"_MaskTex"*/, Object_WarBoardWaitTimeSetting, 0LL);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v37, 0, 0LL);
  gameObject = (System_String_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v37, 0LL);
  if ( !this->fields.ImageRoot )
    goto LABEL_29;
  v48 = (UnityEngine_Transform_o *)gameObject;
  gameObject = (System_String_o *)UnityEngine_GameObject__get_transform(this->fields.ImageRoot, 0LL);
  if ( !v48 )
    goto LABEL_29;
  UnityEngine_Transform__set_parent(v48, (UnityEngine_Transform_o *)gameObject, 0LL);
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v37, 0LL);
  *(UnityEngine_Vector3_o *)&v50 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v50, 0LL),
        v53 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v37, 0LL),
        *(UnityEngine_Vector3_o *)&v54 = UnityEngine_Vector3__get_one(0LL),
        !v53)
    || (UnityEngine_Transform__set_localScale(v53, *(UnityEngine_Vector3_o *)&v54, 0LL),
        (gameObject = (System_String_o *)this->fields.ImagePageList) == 0LL) )
  {
LABEL_29:
    sub_B5D69C(gameObject, v40);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)gameObject,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v37,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialBigDialog__AddScrollImg(
        TutorialBigDialog_o *this,
        AssetData_o *data,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  __int64 v49; // x19
  __int64 ObjectNameList; // x0
  __int64 v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  int v64; // w8
  __int64 v65; // x24
  unsigned int v66; // w27
  UnityEngine_Texture_o *v67; // x25
  UnityEngine_Texture_o *v68; // x20
  __int64 v69; // x21
  System_String_o **v70; // x21
  __int64 v71; // t1
  char v72; // w26
  const MethodInfo *v73; // x2
  UnityEngine_Texture_o *v74; // x23
  UnityEngine_UI_Dropdown_DropdownItem_o *TutorialImageLongPrefab; // x22
  System_Int32_array **v76; // x0
  __int64 *v77; // x22
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  UnityEngine_Object_o *v84; // x24
  System_String_o *v85; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  __int64 v87; // x24
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  UnityEngine_GameObject_o *v94; // x26
  int32_t layer; // w27
  UnityEngine_Shader_o *v96; // x27
  UnityEngine_Material_o *v97; // x26
  int klass_high; // w21
  UIWidget_o *v99; // x25
  UITexture_o *v100; // x25
  int v101; // w26
  int v102; // w27
  int32_t baseWidth; // s8
  int v104; // w28
  int v105; // w0
  float v106; // s4
  float v107; // s5
  float v108; // s6
  float v109; // s7
  UnityEngine_Transform_o *v110; // x21
  UnityEngine_Transform_o *transform; // x21
  int v112; // s0
  UnityEngine_Transform_o *v115; // x21
  int v116; // s0
  AssetLoader_LoadEndDataHandler_o *v119; // x21
  const MethodInfo *v120; // x2
  TutorialBigDialog_c *v121; // x0
  System_String_o *TuorialImagePath; // x19
  __int64 v123; // x0
  TutorialBigDialog_o *v124; // [xsp+8h] [xbp-78h]
  MethodInfo methoda; // [xsp+10h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v126; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v127; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v128; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v129; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42EAD22 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_Texture2D____68807528, (_DWORD)data, (_DWORD)callback, method);
    sub_B5D5C4(&AssetManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TutorialImageLong___, v10, v11, v12);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&UnityEngine_Material_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&NGUITools_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v22, v23, v24);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&TutorialBigDialog_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&Method_TutorialBigDialog___c__DisplayClass56_0__AddScrollImg_b__0__, v31, v32, v33);
    sub_B5D5C4(&TutorialBigDialog___c__DisplayClass56_0_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_16511/*"alpha"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_4609/*"Custom/SpriteWithMask"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_7582/*"Image"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_16207/*"_MaskTex"*/, v46, v47, v48);
    byte_42EAD22 = 1;
  }
  v49 = sub_B5D694(TutorialBigDialog___c__DisplayClass56_0_TypeInfo);
  TutorialBigDialog___c__DisplayClass56_0___ctor((TutorialBigDialog___c__DisplayClass56_0_o *)v49, 0LL);
  if ( !v49 )
    goto LABEL_63;
  *(_QWORD *)(v49 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v49 + 16), (System_Int32_array **)this, v52, v53, v54, v55, v56, v57);
  *(_QWORD *)(v49 + 40) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v49 + 40), (System_Int32_array **)callback, v58, v59, v60, v61, v62, v63);
  if ( !data )
    goto LABEL_63;
  ObjectNameList = (__int64)AssetData__GetObjectNameList(data, 0LL);
  if ( !ObjectNameList )
    goto LABEL_63;
  v124 = this;
  v64 = *(_DWORD *)(ObjectNameList + 24);
  v65 = ObjectNameList;
  if ( v64 < 1 )
  {
    v68 = 0LL;
    v74 = 0LL;
    HIDWORD(methoda.klass) = 0;
  }
  else
  {
    HIDWORD(methoda.klass) = 0;
    v66 = 0;
    v67 = 0LL;
    v68 = 0LL;
    do
    {
      if ( v66 >= v64 )
        goto LABEL_62;
      v69 = v65 + 8LL * (int)v66;
      v71 = *(_QWORD *)(v69 + 32);
      v70 = (System_String_o **)(v69 + 32);
      ObjectNameList = v71;
      if ( !v71 )
        goto LABEL_63;
      ObjectNameList = System_String__Contains(
                         (System_String_o *)ObjectNameList,
                         (System_String_o *)StringLiteral_16511/*"alpha"*/,
                         0LL);
      if ( v66 >= *(_DWORD *)(v65 + 24) )
      {
LABEL_62:
        v123 = sub_B5D6C8(ObjectNameList);
        sub_B5D668(v123, 0LL);
      }
      v72 = ObjectNameList;
      ObjectNameList = (__int64)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                  data,
                                  *v70,
                                  (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_Texture2D____68807528);
      v74 = (UnityEngine_Texture_o *)ObjectNameList;
      if ( (v72 & 1) == 0 )
      {
        if ( v66 >= *(_DWORD *)(v65 + 24) )
          goto LABEL_62;
        v68 = (UnityEngine_Texture_o *)ObjectNameList;
        ObjectNameList = TutorialBigDialog__GetScrollHeightWithName((TutorialBigDialog_o *)ObjectNameList, *v70, v73);
        v74 = v67;
        HIDWORD(methoda.klass) = ObjectNameList;
      }
      v64 = *(_DWORD *)(v65 + 24);
      ++v66;
      v67 = v74;
    }
    while ( (int)v66 < v64 );
  }
  TutorialImageLongPrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)v124->fields.TutorialImageLongPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v76 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                 TutorialImageLongPrefab,
                                 (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  *(_QWORD *)(v49 + 32) = v76;
  v77 = (__int64 *)(v49 + 32);
  sub_B5D560((BattleServantConfConponent_o *)(v49 + 32), v76, v78, v79, v80, v81, v82, v83);
  v84 = *(UnityEngine_Object_o **)(v49 + 32);
  v85 = System_Int32__ToString((int)v124 + 240, 0LL);
  ObjectNameList = (__int64)System_String__Concat_44577788((System_String_o *)StringLiteral_7582/*"Image"*/, v85, 0LL);
  if ( !v84 )
    goto LABEL_63;
  UnityEngine_Object__set_name(v84, (System_String_o *)ObjectNameList, 0LL);
  ObjectNameList = *v77;
  if ( !*v77 )
    goto LABEL_63;
  Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)ObjectNameList,
                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TutorialImageLong___);
  *(_QWORD *)(v49 + 24) = Component_srcLineSprite;
  v87 = v49 + 24;
  sub_B5D560((BattleServantConfConponent_o *)(v49 + 24), Component_srcLineSprite, v88, v89, v90, v91, v92, v93);
  v94 = *(UnityEngine_GameObject_o **)(v49 + 32);
  ObjectNameList = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v124, 0LL);
  if ( !ObjectNameList )
    goto LABEL_63;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)ObjectNameList, 0LL);
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__SetLayer(v94, layer, 0LL);
  v96 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4609/*"Custom/SpriteWithMask"*/, 0LL);
  v97 = (UnityEngine_Material_o *)sub_B5D694(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v97, v96, 0LL);
  if ( !*(_QWORD *)v87 )
    goto LABEL_63;
  ObjectNameList = *(_QWORD *)(*(_QWORD *)v87 + 32LL);
  if ( !ObjectNameList )
    goto LABEL_63;
  ObjectNameList = (*(__int64 (__fastcall **)(__int64, UnityEngine_Material_o *, _QWORD))(*(_QWORD *)ObjectNameList
                                                                                        + 712LL))(
                     ObjectNameList,
                     v97,
                     *(_QWORD *)(*(_QWORD *)ObjectNameList + 720LL));
  if ( !v97 )
    goto LABEL_63;
  UnityEngine_Material__set_mainTexture(v97, v68, 0LL);
  UnityEngine_Material__SetTexture(v97, (System_String_o *)StringLiteral_16207/*"_MaskTex"*/, v74, 0LL);
  if ( !*(_QWORD *)v87 )
    goto LABEL_63;
  ObjectNameList = *(_QWORD *)(*(_QWORD *)v87 + 32LL);
  klass_high = HIDWORD(methoda.klass);
  if ( !ObjectNameList )
    goto LABEL_63;
  UIWidget__set_height((UIWidget_o *)ObjectNameList, SHIDWORD(methoda.klass), 0LL);
  if ( !*(_QWORD *)v87 )
    goto LABEL_63;
  v99 = *(UIWidget_o **)(*(_QWORD *)v87 + 32LL);
  ObjectNameList = (__int64)TutorialBigDialog_TypeInfo;
  if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
  }
  if ( !v99 )
    goto LABEL_63;
  UIWidget__set_width(v99, TutorialBigDialog_TypeInfo->static_fields->baseWidth, 0LL);
  if ( !*(_QWORD *)v87 )
    goto LABEL_63;
  if ( !v68 )
    goto LABEL_63;
  v100 = *(UITexture_o **)(*(_QWORD *)v87 + 32LL);
  v101 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v68->klass->vtable._6_get_height.method)(
           v68,
           v68->klass->vtable._7_set_height.methodPtr);
  v102 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v68->klass->vtable._6_get_height.method)(
           v68,
           v68->klass->vtable._7_set_height.methodPtr);
  baseWidth = TutorialBigDialog_TypeInfo->static_fields->baseWidth;
  v104 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v68->klass->vtable._4_get_width.method)(
           v68,
           v68->klass->vtable._5_set_width.methodPtr);
  v105 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v68->klass->vtable._6_get_height.method)(
           v68,
           v68->klass->vtable._7_set_height.methodPtr);
  v106 = (float)(v101 - HIDWORD(methoda.klass));
  v128.fields.m_Width = (float)baseWidth / (float)v104;
  v128.fields.m_YMin = v106 / (float)v102;
  v128.fields.m_Height = (float)SHIDWORD(methoda.klass) / (float)v105;
  v128.fields.m_XMin = 0.0;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Rect___ctor(v128, v106, v107, v108, v109, &methoda);
  if ( !v100 )
    goto LABEL_63;
  *(_QWORD *)&v129.fields.m_XMin = methoda.methodPointer;
  *(_QWORD *)&v129.fields.m_Width = methoda.invoker_method;
  UITexture__set_uvRect(v100, v129, 0LL);
  if ( !*(_QWORD *)v87 )
    goto LABEL_63;
  ObjectNameList = *(_QWORD *)(*(_QWORD *)v87 + 40LL);
  if ( !ObjectNameList )
    goto LABEL_63;
  v126.fields.z = 1.0;
  v126.fields.y = (float)klass_high;
  v126.fields.x = (float)TutorialBigDialog_TypeInfo->static_fields->baseWidth;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)ObjectNameList, v126, 0LL);
  if ( !*(_QWORD *)v87 )
    goto LABEL_63;
  ObjectNameList = *(_QWORD *)(*(_QWORD *)v87 + 40LL);
  if ( !ObjectNameList )
    goto LABEL_63;
  v127.fields.y = (float)-klass_high * 0.5;
  v127.fields.x = 0.0;
  v127.fields.z = 0.0;
  UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)ObjectNameList, v127, 0LL);
  if ( !*(_QWORD *)v87 )
    goto LABEL_63;
  ObjectNameList = *(_QWORD *)(*(_QWORD *)v87 + 48LL);
  if ( !ObjectNameList )
    goto LABEL_63;
  UIScrollView__ResetPosition((UIScrollView_o *)ObjectNameList, 0LL);
  ObjectNameList = *v77;
  if ( !*v77 )
    goto LABEL_63;
  ObjectNameList = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)ObjectNameList, 0LL);
  if ( !v124->fields.ImageRoot )
    goto LABEL_63;
  v110 = (UnityEngine_Transform_o *)ObjectNameList;
  ObjectNameList = (__int64)UnityEngine_GameObject__get_transform(v124->fields.ImageRoot, 0LL);
  if ( !v110 )
    goto LABEL_63;
  UnityEngine_Transform__set_parent(v110, (UnityEngine_Transform_o *)ObjectNameList, 0LL);
  ObjectNameList = *v77;
  if ( !*v77 )
    goto LABEL_63;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)ObjectNameList, 0LL);
  *(UnityEngine_Vector3_o *)&v112 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_63;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v112, 0LL);
  ObjectNameList = *v77;
  if ( !*v77 )
    goto LABEL_63;
  v115 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)ObjectNameList, 0LL);
  *(UnityEngine_Vector3_o *)&v116 = UnityEngine_Vector3__get_one(0LL);
  if ( !v115 )
    goto LABEL_63;
  UnityEngine_Transform__set_localScale(v115, *(UnityEngine_Vector3_o *)&v116, 0LL);
  v119 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v119,
    (Il2CppObject *)v49,
    Method_TutorialBigDialog___c__DisplayClass56_0__AddScrollImg_b__0__,
    0LL);
  if ( v124->fields.baseTexLoadRequested )
  {
    if ( v119 )
    {
      AssetLoader_LoadEndDataHandler__Invoke(v119, v124->fields.baseTexAssetData, 0LL);
      return;
    }
LABEL_63:
    sub_B5D69C(ObjectNameList, v51);
  }
  v124->fields.baseTexLoadRequested = 1;
  v121 = TutorialBigDialog_TypeInfo;
  if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v121 = TutorialBigDialog_TypeInfo;
  }
  TuorialImagePath = TutorialBigDialog__GetTuorialImagePath(v124, v121->static_fields->baseImgNo, v120);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(TuorialImagePath, v119, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialBigDialog__AfterLoad(TutorialBigDialog_o *this, int32_t addCount, const MethodInfo *method)
{
  __int64 v3; // x3
  TutorialBigDialog_o *v5; // x19
  _BOOL4 loadByAsset; // w8
  int v7; // w9
  _DWORD *assetsImageLoadList; // x10

  v5 = this;
  if ( (byte_42EAD23 & 1) == 0 )
  {
    this = (TutorialBigDialog_o *)sub_B5D5C4(&StringLiteral_10210/*"OpenWindow"*/, addCount, (_DWORD)method, v3);
    byte_42EAD23 = 1;
  }
  loadByAsset = v5->fields.loadByAsset;
  v7 = v5->fields._loadIndex + addCount;
  v5->fields._loadIndex = v7;
  if ( loadByAsset )
  {
    assetsImageLoadList = v5->fields.assetsImageLoadList;
    if ( assetsImageLoadList )
      goto LABEL_5;
LABEL_10:
    sub_B5D69C(this, *(_QWORD *)&addCount);
  }
  assetsImageLoadList = v5->fields.TutorialImageLoadList;
  if ( !assetsImageLoadList )
    goto LABEL_10;
LABEL_5:
  if ( v7 >= assetsImageLoadList[6] )
  {
    v5->fields.CurrentIndex = 0;
    TutorialBigDialog__UpdatePage(v5, 0, method);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)v5,
      (System_String_o *)StringLiteral_10210/*"OpenWindow"*/,
      0.3,
      0LL);
  }
  else if ( loadByAsset )
  {
    TutorialBigDialog__LoadStartAssets(v5, *(const MethodInfo **)&addCount);
  }
  else
  {
    TutorialBigDialog__LoadStart(v5, *(const MethodInfo **)&addCount);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  AndroidBackKeyManager_c *v16; // x0
  System_Action_o *v17; // x20

  if ( (byte_42EAD29 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&AndroidBackKeyManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_TutorialBigDialog_EndClose__, v13, v14, v15);
    byte_42EAD29 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(
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
  v17 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_TutorialBigDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v17, 0LL);
}


void __fastcall TutorialBigDialog__DestroyImagePageList(TutorialBigDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x0
  Il2CppObject *current; // x20
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *v23; // x0
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EAD2F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Clear__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    byte_42EAD2F = 1;
  }
  memset(&v24, 0, sizeof(v24));
  ImagePageList = this->fields.ImagePageList;
  if ( ImagePageList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v24,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ImagePageList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v24,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v24.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v24,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v23 = this->fields.ImagePageList;
    if ( !v23 )
      sub_B5D69C(0LL, v22);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v23,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_GameObject__Clear__);
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
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B5D560(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
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
    sub_B5D560(p_endOpenCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  __int64 v3; // x3
  System_String_array *v5; // x0
  System_String_array *v6; // x1
  __int64 v8; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EAD1E & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)imageName, (_DWORD)method, v3);
    byte_42EAD1E = 1;
  }
  result = 0;
  v5 = (System_String_array *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !v5 )
    goto LABEL_9;
  v6 = v5;
  if ( !v5->max_length )
    goto LABEL_10;
  LOWORD(v5->m_Items[0]) = 95;
  if ( !imageName || (v5 = System_String__Split(imageName, (System_Char_array *)v5, 0LL), result = 0, !v5) )
LABEL_9:
    sub_B5D69C(v5, v6);
  if ( v5->max_length <= 3 )
  {
LABEL_10:
    v8 = sub_B5D6C8(v5);
    sub_B5D668(v8, 0LL);
  }
  System_Int32__TryParse(v5->m_Items[3], &result, 0LL);
  return result;
}


System_String_o *__fastcall TutorialBigDialog__GetTuorialImageName(
        TutorialBigDialog_o *this,
        int32_t imgId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  int32_t v14; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EAD1D & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, imgId, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_23819/*"{0:D4}"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_23131/*"tutorial_"*/, v8, v9, v10);
    byte_42EAD1D = 1;
  }
  v14 = imgId;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v12 = System_String__Format((System_String_o *)StringLiteral_23819/*"{0:D4}"*/, v11, 0LL);
  return System_String__Concat_44577788((System_String_o *)StringLiteral_23131/*"tutorial_"*/, v12, 0LL);
}


System_String_o *__fastcall TutorialBigDialog__GetTuorialImagePath(
        TutorialBigDialog_o *this,
        int32_t imgId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *TuorialImageName; // x0

  if ( (byte_42EAD1C & 1) == 0 )
  {
    this = (TutorialBigDialog_o *)sub_B5D5C4(&StringLiteral_14731/*"Tutorial/"*/, imgId, (_DWORD)method, v3);
    byte_42EAD1C = 1;
  }
  TuorialImageName = TutorialBigDialog__GetTuorialImageName(this, imgId, method);
  return System_String__Concat_44577788((System_String_o *)StringLiteral_14731/*"Tutorial/"*/, TuorialImageName, 0LL);
}


void __fastcall TutorialBigDialog__Init(TutorialBigDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x1
  MethodInfo *v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  TutorialBigDialog_c *v17; // x0
  System_String_o **p_alphaMiniImgPath; // x8
  System_String_o *v19; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  TutorialBigDialog_c *v26; // x0
  System_String_o *TuorialImagePath; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct System_Int32_array *TutorialImageLoadList; // x22
  __int64 v35; // x8
  unsigned __int64 v36; // x23
  System_String_o *v37; // x21
  struct System_String_array *assetsImageLoadList; // x8
  struct System_String_array **p_assetsImageLoadList; // x20
  il2cpp_array_size_t v40; // w22
  il2cpp_array_size_t max_length; // w9
  System_String_o *v42; // x21
  __int64 v43; // x0

  if ( (byte_42EAD12 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&TutorialBigDialog_TypeInfo, v5, v6, v7);
    byte_42EAD12 = 1;
  }
  this->fields.isButtonEnable = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_43:
    sub_B5D69C(gameObject, v9);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.IsFading = 0;
  TutorialBigDialog__DestroyImagePageList(this, v10);
  if ( this->fields.alphaTexLoadRequested )
  {
    v17 = TutorialBigDialog_TypeInfo;
    if ( this->fields.sizeKind == 2 )
    {
      if ( (WORD1(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
        v17 = TutorialBigDialog_TypeInfo;
      }
      p_alphaMiniImgPath = &v17->static_fields->alphaMiniImgPath;
    }
    else
    {
      if ( (WORD1(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
        v17 = TutorialBigDialog_TypeInfo;
      }
      p_alphaMiniImgPath = &v17->static_fields->alphaImgPath;
    }
    v19 = *p_alphaMiniImgPath;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(v19, 0LL);
    this->fields.alphaTexAssetData = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.alphaTexAssetData, 0LL, v20, v21, v22, v23, v24, v25);
    this->fields.alphaTexLoadRequested = 0;
  }
  if ( this->fields.baseTexLoadRequested )
  {
    v26 = TutorialBigDialog_TypeInfo;
    if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
      v26 = TutorialBigDialog_TypeInfo;
    }
    TuorialImagePath = TutorialBigDialog__GetTuorialImagePath(this, v26->static_fields->baseImgNo, v11);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(TuorialImagePath, 0LL);
    this->fields.baseTexAssetData = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.baseTexAssetData, 0LL, v28, v29, v30, v31, v32, v33);
    this->fields.baseTexLoadRequested = 0;
  }
  TutorialImageLoadList = this->fields.TutorialImageLoadList;
  if ( TutorialImageLoadList )
  {
    v35 = *(_QWORD *)&TutorialImageLoadList->max_length;
    if ( (int)v35 >= 1 )
    {
      v36 = 0LL;
      do
      {
        if ( v36 >= (unsigned int)v35 )
        {
LABEL_46:
          v43 = sub_B5D6C8(gameObject);
          sub_B5D668(v43, 0LL);
        }
        v37 = TutorialBigDialog__GetTuorialImagePath(this, TutorialImageLoadList->m_Items[v36 + 1], v11);
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        AssetManager__releaseAssetStorage(v37, 0LL);
        LODWORD(v35) = TutorialImageLoadList->max_length;
        ++v36;
      }
      while ( (__int64)v36 < (int)v35 );
    }
    this->fields.TutorialImageLoadList = 0LL;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.TutorialImageLoadList,
      0LL,
      (System_String_array **)v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  p_assetsImageLoadList = &this->fields.assetsImageLoadList;
  assetsImageLoadList = this->fields.assetsImageLoadList;
  if ( assetsImageLoadList )
  {
    v40 = 0;
    while ( 1 )
    {
      max_length = assetsImageLoadList->max_length;
      if ( (int)v40 >= (int)max_length )
        break;
      if ( v40 >= max_length )
        goto LABEL_46;
      v42 = assetsImageLoadList->m_Items[v40];
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__releaseAssetStorage(v42, 0LL);
      assetsImageLoadList = *p_assetsImageLoadList;
      v40 += 2;
      if ( !*p_assetsImageLoadList )
        goto LABEL_43;
    }
    *p_assetsImageLoadList = 0LL;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.assetsImageLoadList,
      0LL,
      (System_String_array **)v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall TutorialBigDialog__LoadAlpha(
        TutorialBigDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x19
  __int64 v19; // x0
  __int64 v20; // x1
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
  TutorialBigDialog_c *v33; // x0
  System_String_o **p_alphaMiniImgPath; // x8
  System_String_o *v35; // x20
  AssetLoader_LoadEndDataHandler_o *v36; // x21

  if ( (byte_42EAD24 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&TutorialBigDialog_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_TutorialBigDialog___c__DisplayClass58_0__LoadAlpha_b__0__, v12, v13, v14);
    sub_B5D5C4(&TutorialBigDialog___c__DisplayClass58_0_TypeInfo, v15, v16, v17);
    byte_42EAD24 = 1;
  }
  v18 = sub_B5D694(TutorialBigDialog___c__DisplayClass58_0_TypeInfo);
  TutorialBigDialog___c__DisplayClass58_0___ctor((TutorialBigDialog___c__DisplayClass58_0_o *)v18, 0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  *(_QWORD *)(v18 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v18 + 24) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)callback, v27, v28, v29, v30, v31, v32);
  this->fields.alphaTexLoadRequested = 1;
  v33 = TutorialBigDialog_TypeInfo;
  if ( this->fields.sizeKind == 2 )
  {
    if ( (WORD1(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
      v33 = TutorialBigDialog_TypeInfo;
    }
    p_alphaMiniImgPath = &v33->static_fields->alphaMiniImgPath;
  }
  else
  {
    if ( (WORD1(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
      v33 = TutorialBigDialog_TypeInfo;
    }
    p_alphaMiniImgPath = &v33->static_fields->alphaImgPath;
  }
  v35 = *p_alphaMiniImgPath;
  v36 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v36,
    (Il2CppObject *)v18,
    Method_TutorialBigDialog___c__DisplayClass58_0__LoadAlpha_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v35, v36, 1, 0LL);
}


void __fastcall TutorialBigDialog__LoadImages(
        TutorialBigDialog_o *this,
        System_Int32_array *images,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  CommonUI_o *Instance; // x0
  __int64 v25; // x1
  System_Action_o *v26; // x20
  const MethodInfo *v27; // x2

  if ( (byte_42EAD1A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)images, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&Method_TutorialBigDialog_LoadStart__, v14, v15, v16);
    byte_42EAD1A = 1;
  }
  this->fields._loadIndex = 0;
  this->fields.loadByAsset = 0;
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.ImagePageList = (struct System_Collections_Generic_List_GameObject__o *)v17;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.ImagePageList,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v25);
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v26 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)this, Method_TutorialBigDialog_LoadStart__, 0LL);
  TutorialBigDialog__LoadAlpha(this, v26, v27);
}


void __fastcall TutorialBigDialog__LoadImages_29283168(
        TutorialBigDialog_o *this,
        System_String_array *images,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  CommonUI_o *Instance; // x0
  __int64 v25; // x1
  System_Action_o *v26; // x20
  const MethodInfo *v27; // x2

  if ( (byte_42EAD1B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)images, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&Method_TutorialBigDialog_LoadStartAssets__, v14, v15, v16);
    byte_42EAD1B = 1;
  }
  this->fields._loadIndex = 0;
  this->fields.loadByAsset = 1;
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.ImagePageList = (struct System_Collections_Generic_List_GameObject__o *)v17;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.ImagePageList,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v25);
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v26 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)this, Method_TutorialBigDialog_LoadStartAssets__, 0LL);
  TutorialBigDialog__LoadAlpha(this, v26, v27);
}


void __fastcall TutorialBigDialog__LoadStart(TutorialBigDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  TutorialBigDialog_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct System_Int32_array *TutorialImageLoadList; // x8
  __int64 loadIndex; // x9
  System_String_o *TuorialImagePath; // x20
  AssetLoader_LoadEndDataHandler_o *v14; // x21
  __int64 v15; // x0

  v4 = this;
  if ( (byte_42EAD1F & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v5, v6, v7);
    this = (TutorialBigDialog_o *)sub_B5D5C4(&Method_TutorialBigDialog__LoadStart_b__53_0__, v8, v9, v10);
    byte_42EAD1F = 1;
  }
  TutorialImageLoadList = v4->fields.TutorialImageLoadList;
  if ( !TutorialImageLoadList )
    sub_B5D69C(this, method);
  loadIndex = v4->fields._loadIndex;
  if ( (unsigned int)loadIndex >= TutorialImageLoadList->max_length )
  {
    v15 = sub_B5D6C8(this);
    sub_B5D668(v15, 0LL);
  }
  TuorialImagePath = TutorialBigDialog__GetTuorialImagePath(v4, TutorialImageLoadList->m_Items[loadIndex + 1], v2);
  v14 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v14, (Il2CppObject *)v4, Method_TutorialBigDialog__LoadStart_b__53_0__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(TuorialImagePath, v14, 1, 0LL);
}


void __fastcall TutorialBigDialog__LoadStartAssets(TutorialBigDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TutorialBigDialog_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct System_String_array *assetsImageLoadList; // x8
  __int64 loadIndex; // x9
  System_String_o *v13; // x20
  AssetLoader_LoadEndDataHandler_o *v14; // x21
  __int64 v15; // x0

  v4 = this;
  if ( (byte_42EAD20 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v5, v6, v7);
    this = (TutorialBigDialog_o *)sub_B5D5C4(&Method_TutorialBigDialog__LoadStartAssets_b__54_0__, v8, v9, v10);
    byte_42EAD20 = 1;
  }
  assetsImageLoadList = v4->fields.assetsImageLoadList;
  if ( !assetsImageLoadList )
    sub_B5D69C(this, method);
  loadIndex = v4->fields._loadIndex;
  if ( (unsigned int)loadIndex >= assetsImageLoadList->max_length )
  {
    v15 = sub_B5D6C8(this);
    sub_B5D668(v15, 0LL);
  }
  v13 = assetsImageLoadList->m_Items[loadIndex];
  v14 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v14,
    (Il2CppObject *)v4,
    Method_TutorialBigDialog__LoadStartAssets_b__54_0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v13, v14, 1, 0LL);
}


void __fastcall TutorialBigDialog__OnBottomButton(TutorialBigDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TutorialBigDialog_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x8
  const MethodInfo *v9; // x1

  v4 = this;
  if ( (byte_42EAD2C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, (_DWORD)method, v2, v3);
    this = (TutorialBigDialog_o *)sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42EAD2C = 1;
  }
  if ( !v4->fields.IsFading )
  {
    ImagePageList = v4->fields.ImagePageList;
    if ( !ImagePageList )
      sub_B5D69C(this, method);
    if ( v4->fields.CurrentIndex == ImagePageList->fields._size - 1 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(1, 0LL);
      TutorialBigDialog__OnClickClose(v4, v9);
    }
  }
}


void __fastcall TutorialBigDialog__OnClickClose(TutorialBigDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x2
  int32_t localFlagId; // w20
  int configFlagId; // w20
  NetworkManager_ResultCallbackFunc_o *v27; // x20
  TutorialSetRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v29; // x1
  NetworkManager_ResultCallbackFunc_o *v30; // x20
  const MethodInfo *v31; // x3

  if ( (byte_42EAD2D & 1) == 0 )
  {
    sub_B5D5C4(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_TutorialSetRequest___, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&SoundManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_TutorialBigDialog_EndTurorialRequest__, v17, v18, v19);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v20, v21, v22);
    byte_42EAD2D = 1;
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
      TutorialFlag__Set_29291168(localFlagId, v23);
    }
    configFlagId = this->fields.configFlagId;
    if ( configFlagId >= 1 )
    {
      if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TutorialFlag_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      }
      TutorialFlag__SetConfigFlg(configFlagId, v23);
    }
    if ( this->fields.flagId != -1 )
    {
      v27 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v27,
        (Il2CppObject *)this,
        Method_TutorialBigDialog_EndTurorialRequest__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (TutorialSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                    v27,
                                                                    (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_TutorialSetRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        TutorialSetRequest__beginRequest(Request_WarBoardWallAttackRequest, this->fields.flagId, 0LL);
        return;
      }
LABEL_33:
      sub_B5D69C(Request_WarBoardWallAttackRequest, v29);
    }
    if ( this->fields.eventFlagId == -1 || !this->fields.eventId )
    {
      TutorialBigDialog__Close(this, this->fields.closeCallbackFunc, v24);
    }
    else
    {
      v30 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v30,
        (Il2CppObject *)this,
        Method_TutorialBigDialog_EndTurorialRequest__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (TutorialSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                    v30,
                                                                    (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
      if ( !Request_WarBoardWallAttackRequest )
        goto LABEL_33;
      TutorialEventSetRequest__beginRequest(
        (TutorialEventSetRequest_o *)Request_WarBoardWallAttackRequest,
        this->fields.eventFlagId,
        this->fields.eventId,
        v31);
    }
  }
}


void __fastcall TutorialBigDialog__OnNextButton(TutorialBigDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TutorialBigDialog_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x8
  const MethodInfo *v9; // x2

  v4 = this;
  if ( (byte_42EAD2A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, (_DWORD)method, v2, v3);
    this = (TutorialBigDialog_o *)sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42EAD2A = 1;
  }
  if ( !v4->fields.IsFading )
  {
    ImagePageList = v4->fields.ImagePageList;
    if ( !ImagePageList )
      sub_B5D69C(this, method);
    if ( v4->fields.CurrentIndex != ImagePageList->fields._size - 1 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      TutorialBigDialog__UpdatePage(v4, v4->fields.CurrentIndex + 1, v9);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialBigDialog__OnPageChange(TutorialBigDialog_o *this, int32_t idx, const MethodInfo *method)
{
  __int64 v3; // x3
  TutorialBigDialog_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x8

  v5 = this;
  if ( (byte_42EAD2E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, idx, (_DWORD)method, v3);
    this = (TutorialBigDialog_o *)sub_B5D5C4(&SoundManager_TypeInfo, v6, v7, v8);
    byte_42EAD2E = 1;
  }
  if ( (idx & 0x80000000) == 0 && v5->fields.CurrentIndex != idx )
  {
    ImagePageList = v5->fields.ImagePageList;
    if ( !ImagePageList )
      sub_B5D69C(this, *(_QWORD *)&idx);
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
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42EAD2B & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAD2B = 1;
  }
  if ( !this->fields.IsFading && this->fields.CurrentIndex >= 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
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

  if ( (byte_42EAD13 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)images, flagId, closeFunc);
    sub_B5D5C4(&TutorialBigDialog_TypeInfo, v13, v14, v15);
    byte_42EAD13 = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&flagId);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.endOpenCallbackFunc,
    (System_Int32_array **)endOpenFunc,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.endTurorialRequestFunc,
    (System_Int32_array **)endTurorialRequestFunc,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.closeCallbackFunc = closeFunc;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)closeFunc,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  CloseButton = this->fields.CloseButton;
  this->fields.flagId = flagId;
  *(_OWORD *)&this->fields.localFlagId = xmmword_30FCB40;
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
  v38 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, images->max_length);
  this->fields.TutorialImageLoadList = v38;
  p_TutorialImageLoadList = &this->fields.TutorialImageLoadList;
  sub_B5D560(
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
        v53 = sub_B5D6C8(CloseButton);
        sub_B5D668(v53, 0LL);
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
    sub_B5D69C(CloseButton, v34);
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v52);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialBigDialog__OpenAssets(
        TutorialBigDialog_o *this,
        System_Int32_array *images,
        int32_t kind,
        System_Action_o *closeFunc,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_Action_o *v30; // x23
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 v49; // x1
  UnityEngine_GameObject_o *CloseButton; // x0
  UnityEngine_Transform_o *v51; // x21
  TutorialBigDialog_c *v52; // x8
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  srcLineSprite_o *Component_srcLineSprite; // x20
  EventDelegate_Callback_o *v60; // x22
  EventDelegate_o *v61; // x21
  System_Int32_array *v62; // x1
  const MethodInfo *v63; // x2
  const MethodInfo *v64; // x2

  if ( (byte_42EAD18 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)images, kind, closeFunc);
    sub_B5D5C4(&EventDelegate_Callback_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&EventDelegate_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UITouchPress___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_TutorialBigDialog__OpenAssets_b__46_0__, v21, v22, v23);
    sub_B5D5C4(&Method_TutorialBigDialog__OpenAssets_b__46_1__, v24, v25, v26);
    sub_B5D5C4(&TutorialBigDialog_TypeInfo, v27, v28, v29);
    byte_42EAD18 = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&kind);
  v30 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v30, (Il2CppObject *)this, Method_TutorialBigDialog__OpenAssets_b__46_0__, 0LL);
  this->fields.endOpenCallbackFunc = v30;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.endOpenCallbackFunc,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  this->fields.endTurorialRequestFunc = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.endTurorialRequestFunc, 0LL, v37, v38, v39, v40, v41, v42);
  this->fields.closeCallbackFunc = closeFunc;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)closeFunc,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  CloseButton = this->fields.CloseButton;
  this->fields.configFlagId = 0;
  this->fields.sizeKind = kind;
  *(_OWORD *)&this->fields.flagId = xmmword_32A0110;
  if ( !CloseButton )
    goto LABEL_15;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0LL);
  v51 = (UnityEngine_Transform_o *)CloseButton;
  v52 = TutorialBigDialog_TypeInfo;
  if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v52 = TutorialBigDialog_TypeInfo;
  }
  if ( !v51 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v51, v52->static_fields->miniCloseButtonPosition, 0LL);
  this->fields.TutorialImageLoadList = images;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.TutorialImageLoadList,
    (System_Int32_array **)images,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  CloseButton = this->fields.TouchMask;
  this->fields.isButtonEnable = 0;
  if ( !CloseButton )
    goto LABEL_15;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              CloseButton,
                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
  v60 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v60, (Il2CppObject *)this, Method_TutorialBigDialog__OpenAssets_b__46_1__, 0LL);
  v61 = (EventDelegate_o *)sub_B5D694(EventDelegate_TypeInfo);
  EventDelegate___ctor_29822308(v61, v60, 0LL);
  if ( !Component_srcLineSprite
    || (CloseButton = (UnityEngine_GameObject_o *)Component_srcLineSprite->fields.mFSM) == 0LL
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)CloseButton,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v61,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventDelegate__Add__),
        BaseDialog__SetMask((BaseDialog_o *)this, 0, 0LL),
        TutorialBigDialog__LoadImages(this, v62, v63),
        (CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_15:
    sub_B5D69C(CloseButton, v49);
  }
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
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

  if ( (byte_42EAD19 & 1) == 0 )
  {
    sub_B5D5C4(&TutorialBigDialog_TypeInfo, (_DWORD)images, configId, closeFunc);
    byte_42EAD19 = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&configId);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.endOpenCallbackFunc,
    (System_Int32_array **)endOpenFunc,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.endTurorialRequestFunc,
    (System_Int32_array **)endTurorialRequestFunc,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.closeCallbackFunc = closeFunc;
  sub_B5D560(
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
  *(_OWORD *)&this->fields.flagId = xmmword_32A0110;
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
        sub_B5D560(
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
        TutorialBigDialog__LoadImages_29283168(this, v41, v42),
        (CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_12:
    sub_B5D69C(CloseButton, v31);
  }
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v43);
}


void __fastcall TutorialBigDialog__OpenWindow(TutorialBigDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  CommonUI_o *Instance; // x0
  __int64 v12; // x1
  System_Action_o *v13; // x20

  if ( (byte_42EAD25 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_TutorialBigDialog_EndOpen__, v8, v9, v10);
    byte_42EAD25 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v12);
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_TutorialBigDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v13, 1, 0LL);
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

  if ( (byte_42EAD17 & 1) == 0 )
  {
    sub_B5D5C4(&TutorialBigDialog_TypeInfo, (_DWORD)images, (_DWORD)closeFunc, endOpenFunc);
    byte_42EAD17 = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, (const MethodInfo *)closeFunc);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.endOpenCallbackFunc,
    (System_Int32_array **)endOpenFunc,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.endTurorialRequestFunc,
    (System_Int32_array **)endTurorialRequestFunc,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.closeCallbackFunc = closeFunc;
  sub_B5D560(
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
  *(_OWORD *)&this->fields.flagId = xmmword_32A0110;
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
        sub_B5D560(
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
        TutorialBigDialog__LoadImages_29283168(this, v39, v40),
        (CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_12:
    sub_B5D69C(CloseButton, v29);
  }
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v41);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialBigDialog__Open_29281340(
        TutorialBigDialog_o *this,
        TutorialFlag_ImageId_array *images,
        int32_t flagId,
        System_Action_o *closeFunc,
        System_Action_o *endOpenFunc,
        System_Action_o *endTurorialRequestFunc,
        const MethodInfo *method)
{
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
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

  if ( (byte_42EAD14 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)images, flagId, closeFunc);
    sub_B5D5C4(&TutorialBigDialog_TypeInfo, v13, v14, v15);
    byte_42EAD14 = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&flagId);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.endOpenCallbackFunc,
    (System_Int32_array **)endOpenFunc,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.endTurorialRequestFunc,
    (System_Int32_array **)endTurorialRequestFunc,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.closeCallbackFunc = closeFunc;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)closeFunc,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  CloseButton = this->fields.CloseButton;
  this->fields.flagId = -1;
  this->fields.localFlagId = flagId;
  *(_QWORD *)&this->fields.eventFlagId = 0xFFFFFFFFLL;
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
  v38 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, images->max_length);
  this->fields.TutorialImageLoadList = v38;
  p_TutorialImageLoadList = &this->fields.TutorialImageLoadList;
  sub_B5D560(
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
        v53 = sub_B5D6C8(CloseButton);
        sub_B5D668(v53, 0LL);
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
    sub_B5D69C(CloseButton, v34);
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v52);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialBigDialog__Open_29281864(
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

  if ( (byte_42EAD15 & 1) == 0 )
  {
    sub_B5D5C4(&TutorialBigDialog_TypeInfo, (_DWORD)images, flagId, *(_QWORD *)&eventId);
    byte_42EAD15 = 1;
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.endOpenCallbackFunc,
    (System_Int32_array **)endOpenFunc,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.endTurorialRequestFunc,
    (System_Int32_array **)endTurorialRequestFunc,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.closeCallbackFunc = closeFunc;
  sub_B5D560(
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
        sub_B5D560(
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
    sub_B5D69C(CloseButton, v34);
  }
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v46);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialBigDialog__Open_29282268(
        TutorialBigDialog_o *this,
        TutorialFlag_ImageId_array *images,
        int32_t flagId,
        int32_t eventId,
        System_Action_o *closeFunc,
        System_Action_o *endOpenFunc,
        System_Action_o *endTurorialRequestFunc,
        const MethodInfo *method)
{
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
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
  __int64 v36; // x1
  UnityEngine_GameObject_o *CloseButton; // x0
  UnityEngine_Transform_o *v38; // x21
  TutorialBigDialog_c *v39; // x8
  struct System_Int32_array *v40; // x0
  struct System_Int32_array **p_TutorialImageLoadList; // x21
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  il2cpp_array_size_t max_length; // w9
  __int64 v49; // x8
  struct System_Int32_array *v50; // x9
  __int64 v51; // x10
  System_Int32_array *v52; // x1
  const MethodInfo *v53; // x2
  const MethodInfo *v54; // x2
  __int64 v55; // x0

  if ( (byte_42EAD16 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)images, flagId, *(_QWORD *)&eventId);
    sub_B5D5C4(&TutorialBigDialog_TypeInfo, v15, v16, v17);
    byte_42EAD16 = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&flagId);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.endOpenCallbackFunc,
    (System_Int32_array **)endOpenFunc,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.endTurorialRequestFunc,
    (System_Int32_array **)endTurorialRequestFunc,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields.closeCallbackFunc = closeFunc;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)closeFunc,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  CloseButton = this->fields.CloseButton;
  *(_QWORD *)&this->fields.flagId = -1LL;
  this->fields.eventFlagId = flagId;
  this->fields.eventId = eventId;
  this->fields.configFlagId = 0;
  this->fields.sizeKind = 1;
  if ( !CloseButton )
    goto LABEL_20;
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
    goto LABEL_20;
  UnityEngine_Transform__set_localPosition(v38, v39->static_fields->baseCloseButtonPosition, 0LL);
  if ( !images )
    goto LABEL_20;
  v40 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, images->max_length);
  this->fields.TutorialImageLoadList = v40;
  p_TutorialImageLoadList = &this->fields.TutorialImageLoadList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.TutorialImageLoadList,
    (System_Int32_array **)v40,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  if ( (int)*(_QWORD *)&images->max_length >= 1 )
  {
    max_length = *(_QWORD *)&images->max_length;
    v49 = 8LL;
    do
    {
      if ( v49 - 8 >= (unsigned __int64)max_length )
        goto LABEL_19;
      v50 = *p_TutorialImageLoadList;
      if ( !*p_TutorialImageLoadList )
        goto LABEL_20;
      if ( v49 - 8 >= (unsigned __int64)v50->max_length )
      {
LABEL_19:
        v55 = sub_B5D6C8(CloseButton);
        sub_B5D668(v55, 0LL);
      }
      *((_DWORD *)&v50->obj.klass + v49) = *((_DWORD *)&images->obj.klass + v49);
      max_length = images->max_length;
      v51 = v49 - 7;
      ++v49;
    }
    while ( v51 < (int)max_length );
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMask((BaseDialog_o *)this, 0, 0LL);
  TutorialBigDialog__LoadImages(this, v52, v53);
  CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !CloseButton )
LABEL_20:
    sub_B5D69C(CloseButton, v36);
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v54);
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
    sub_B5D69C(TouchMask, isDisp);
  }
  UnityEngine_GameObject__SetActive(TouchMask, isDisp, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialBigDialog__UpdateButtons(TutorialBigDialog_o *this, bool isDisp, const MethodInfo *method)
{
  __int64 v3; // x3
  TutorialBigDialog_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x8
  UnityEngine_GameObject_o *CloseButton; // x20
  TutorialBigDialog_o **p_PrevButton; // x21
  UnityEngine_GameObject_o *PrevButton; // x20
  UILabel_o *basePanelList; // x20
  UILabel_o *v26; // x19
  AndroidBackKeyManager_c *v27; // x0
  __int64 v28; // x0

  v5 = this;
  if ( (byte_42EAD27 & 1) == 0 )
  {
    sub_B5D5C4(&AndroidBackKeyManager_TypeInfo, isDisp, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____68825840, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v9, v10, v11);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_13618/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, v15, v16, v17);
    this = (TutorialBigDialog_o *)sub_B5D5C4(&StringLiteral_13619/*"TUTORIAL_IMAGE_DIALOG_PREV"*/, v18, v19, v20);
    byte_42EAD27 = 1;
  }
  if ( !isDisp )
  {
    this = (TutorialBigDialog_o *)v5->fields.CloseButton;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (TutorialBigDialog_o *)v5->fields.NextButton;
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (TutorialBigDialog_o *)v5->fields.PrevButton;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          return;
        }
      }
    }
    goto LABEL_45;
  }
  ImagePageList = v5->fields.ImagePageList;
  if ( !ImagePageList )
    goto LABEL_45;
  this = (TutorialBigDialog_o *)v5->fields.CloseButton;
  if ( !this )
    goto LABEL_45;
  if ( v5->fields.CurrentIndex == ImagePageList->fields._size - 1 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (TutorialBigDialog_o *)v5->fields.NextButton;
    if ( !this )
      goto LABEL_45;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    CloseButton = v5->fields.CloseButton;
    if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    }
    AndroidBackKeyManager__AddBackBtn(CloseButton, 0LL);
    p_PrevButton = (TutorialBigDialog_o **)&v5->fields.PrevButton;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (TutorialBigDialog_o *)v5->fields.NextButton;
    if ( !this )
      goto LABEL_45;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    p_PrevButton = (TutorialBigDialog_o **)&v5->fields.PrevButton;
    PrevButton = v5->fields.PrevButton;
    if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    }
    AndroidBackKeyManager__AddBackBtn(PrevButton, 0LL);
    this = (TutorialBigDialog_o *)v5->fields.NextButton;
    if ( !this )
      goto LABEL_45;
    this = (TutorialBigDialog_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !this )
      goto LABEL_45;
    this = (TutorialBigDialog_o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                    (UnityEngine_Component_o *)this,
                                    1,
                                    (const MethodInfo_1ADE6CC *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____68825840);
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
    this = (TutorialBigDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13618/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, 0LL);
    if ( !basePanelList )
LABEL_45:
      sub_B5D69C(this, isDisp);
    UILabel__set_text(basePanelList, (System_String_o *)this, 0LL);
  }
  this = *p_PrevButton;
  if ( !*p_PrevButton )
    goto LABEL_45;
  if ( v5->fields.CurrentIndex < 1 )
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
                                  (const MethodInfo_1ADE6CC *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____68825840);
  if ( !this )
    goto LABEL_45;
  if ( !LODWORD(this->fields.basePanel) )
  {
LABEL_46:
    v28 = sub_B5D6C8(this);
    sub_B5D668(v28, 0LL);
  }
  v26 = (UILabel_o *)this->fields.basePanelList;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (TutorialBigDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13619/*"TUTORIAL_IMAGE_DIALOG_PREV"*/, 0LL);
  if ( !v26 )
    goto LABEL_45;
  UILabel__set_text(v26, (System_String_o *)this, 0LL);
LABEL_41:
  v27 = AndroidBackKeyManager_TypeInfo;
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    v27 = AndroidBackKeyManager_TypeInfo;
  }
  v27->static_fields->ToastEnabled = 1;
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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int32_t CurrentIndex; // w25
  struct UITexture_o **p_FadeInTarget; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct UITexture_o *Component_srcLineSprite; // x0
  __int64 v36; // x1
  const MethodInfo *v37; // x2
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x23
  int size; // w26
  unsigned int v40; // w27
  __int64 v41; // x8
  UnityEngine_GameObject_o *v42; // x23
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct UITexture_o *v49; // x24
  UITexture_c *klass; // x8
  long double v51; // q0
  UnityEngine_GameObject_o *v52; // x0
  bool v53; // w1
  UnityEngine_GameObject_o *gameObject; // x21
  TutorialBigDialog_c *v55; // x8
  UnityEngine_GameObject_o *v56; // x0
  UITweener_o *v57; // x20
  EventDelegate_Callback_o *v58; // x21

  if ( (byte_42EAD26 & 1) == 0 )
  {
    sub_B5D5C4(&EventDelegate_Callback_TypeInfo, dispIndex, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UITexture___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v18, v19, v20);
    sub_B5D5C4(&Method_TutorialBigDialog__UpdatePage_b__60_0__, v21, v22, v23);
    sub_B5D5C4(&TutorialBigDialog_TypeInfo, v24, v25, v26);
    byte_42EAD26 = 1;
  }
  CurrentIndex = this->fields.CurrentIndex;
  this->fields.FadeInTarget = 0LL;
  p_FadeInTarget = &this->fields.FadeInTarget;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.FadeInTarget,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.FadeOutTarget = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.FadeOutTarget, 0LL, v29, v30, v31, v32, v33, v34);
  ImagePageList = this->fields.ImagePageList;
  if ( !ImagePageList )
    goto LABEL_33;
  size = ImagePageList->fields._size;
  if ( size >= 1 )
  {
    LODWORD(v8) = 1000593162;
    v40 = 0;
    LODWORD(v9) = 1.0;
    while ( 1 )
    {
      if ( ImagePageList->fields._size <= v40 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v41 = (__int64)ImagePageList->fields._items + 8 * (int)v40;
      v42 = *(UnityEngine_GameObject_o **)(v41 + 32);
      if ( !v42 )
        goto LABEL_33;
      Component_srcLineSprite = (struct UITexture_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        *(UnityEngine_GameObject_o **)(v41 + 32),
                                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
      v49 = Component_srcLineSprite;
      if ( dispIndex == v40 )
        break;
      if ( v40 == this->fields.CurrentIndex && CurrentIndex != dispIndex )
      {
        this->fields.FadeOutTarget = Component_srcLineSprite;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.FadeOutTarget,
          (System_Int32_array **)Component_srcLineSprite,
          v43,
          v44,
          v45,
          v46,
          v47,
          v48);
LABEL_20:
        v53 = 1;
        v52 = v42;
        goto LABEL_21;
      }
      v52 = v42;
      v53 = 0;
LABEL_21:
      UnityEngine_GameObject__SetActive(v52, v53, 0LL);
      if ( (int)++v40 >= size )
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
      v51 = v9;
    }
    else
    {
      *p_FadeInTarget = Component_srcLineSprite;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.FadeInTarget,
        (System_Int32_array **)Component_srcLineSprite,
        v43,
        v44,
        v45,
        v46,
        v47,
        v48);
      if ( !v49 )
        goto LABEL_33;
      klass = v49->klass;
      Component_srcLineSprite = v49;
      v51 = v8;
    }
    ((void (__fastcall *)(struct UITexture_o *, Il2CppMethodPointer, long double))klass->vtable._8_set_alpha.method)(
      Component_srcLineSprite,
      klass->vtable._9_CalculateFinalAlpha.methodPtr,
      v51);
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
      v55 = TutorialBigDialog_TypeInfo;
      if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
        v55 = TutorialBigDialog_TypeInfo;
      }
      TweenAlpha__Begin(gameObject, v55->static_fields->FADE_TIME, 0.0, 0LL);
      Component_srcLineSprite = *p_FadeInTarget;
      if ( *p_FadeInTarget )
      {
        v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
        v57 = (UITweener_o *)TweenAlpha__Begin(v56, TutorialBigDialog_TypeInfo->static_fields->FADE_TIME, 1.0, 0LL);
        v58 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(v58, (Il2CppObject *)this, Method_TutorialBigDialog__UpdatePage_b__60_0__, 0LL);
        if ( v57 )
        {
          UITweener__SetOnFinished(v57, v58, 0LL);
          return;
        }
      }
    }
LABEL_33:
    sub_B5D69C(Component_srcLineSprite, v36);
  }
  TutorialBigDialog__UpdateButtons(this, 1, v37);
}


void __fastcall TutorialBigDialog___LoadStartAssets_b__54_0(
        TutorialBigDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  TutorialBigDialog_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Action_o *v15; // x21
  const MethodInfo *v16; // x3
  struct System_String_array *assetsImageLoadList; // x8
  int v18; // w9
  UnityEngine_Texture2D_o *Object_WarBoardWaitTimeSetting; // x0
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2
  __int64 v22; // x0

  v5 = this;
  if ( (byte_42EAD33 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&Method_AssetData_GetObject_Texture2D____68807528, v6, v7, v8);
    sub_B5D5C4(&Method_TutorialBigDialog__LoadStartAssets_b__54_1__, v9, v10, v11);
    this = (TutorialBigDialog_o *)sub_B5D5C4(&StringLiteral_16199/*"_L_"*/, v12, v13, v14);
    byte_42EAD33 = 1;
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
                                  (System_String_o *)StringLiteral_16199/*"_L_"*/,
                                  0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v15 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v15, (Il2CppObject *)v5, Method_TutorialBigDialog__LoadStartAssets_b__54_1__, 0LL);
    TutorialBigDialog__AddScrollImg(v5, data, v15, v16);
    return;
  }
  assetsImageLoadList = v5->fields.assetsImageLoadList;
  if ( !assetsImageLoadList )
LABEL_12:
    sub_B5D69C(this, data);
  v18 = v5->fields._loadIndex + 1;
  if ( v18 >= assetsImageLoadList->max_length )
  {
LABEL_13:
    v22 = sub_B5D6C8(this);
    sub_B5D668(v22, 0LL);
  }
  Object_WarBoardWaitTimeSetting = (UnityEngine_Texture2D_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                data,
                                                                assetsImageLoadList->m_Items[v18],
                                                                (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_Texture2D____68807528);
  TutorialBigDialog__AddImg(v5, Object_WarBoardWaitTimeSetting, v20);
  TutorialBigDialog__AfterLoad(v5, 2, v21);
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
  __int64 v3; // x3
  TutorialBigDialog_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  const MethodInfo *v15; // x2
  System_Action_o *v16; // x21
  const MethodInfo *v17; // x3
  struct System_Int32_array *TutorialImageLoadList; // x8
  __int64 loadIndex; // x9
  System_String_o *TuorialImageName; // x0
  UnityEngine_Texture2D_o *Object_WarBoardWaitTimeSetting; // x0
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x2
  __int64 v24; // x0

  v5 = this;
  if ( (byte_42EAD32 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&Method_AssetData_GetObject_Texture2D____68807528, v6, v7, v8);
    sub_B5D5C4(&Method_TutorialBigDialog__LoadStart_b__53_1__, v9, v10, v11);
    this = (TutorialBigDialog_o *)sub_B5D5C4(&StringLiteral_16199/*"_L_"*/, v12, v13, v14);
    byte_42EAD32 = 1;
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
                                  (System_String_o *)StringLiteral_16199/*"_L_"*/,
                                  0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v16 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v16, (Il2CppObject *)v5, Method_TutorialBigDialog__LoadStart_b__53_1__, 0LL);
    TutorialBigDialog__AddScrollImg(v5, data, v16, v17);
    return;
  }
  TutorialImageLoadList = v5->fields.TutorialImageLoadList;
  if ( !TutorialImageLoadList )
LABEL_12:
    sub_B5D69C(this, data);
  loadIndex = v5->fields._loadIndex;
  if ( (unsigned int)loadIndex >= TutorialImageLoadList->max_length )
  {
LABEL_13:
    v24 = sub_B5D6C8(this);
    sub_B5D668(v24, 0LL);
  }
  TuorialImageName = TutorialBigDialog__GetTuorialImageName(this, TutorialImageLoadList->m_Items[loadIndex + 1], v15);
  Object_WarBoardWaitTimeSetting = (UnityEngine_Texture2D_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                data,
                                                                TuorialImageName,
                                                                (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_Texture2D____68807528);
  TutorialBigDialog__AddImg(v5, Object_WarBoardWaitTimeSetting, v22);
  TutorialBigDialog__AfterLoad(v5, 1, v23);
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
    sub_B5D69C(FadeOutTarget, v3);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)FadeOutTarget, 0, 0LL);
  this->fields.IsFading = 0;
  TutorialBigDialog__UpdateButtons(this, 1, v5);
}


void __fastcall TutorialBigDialog__refreshCurrent(TutorialBigDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TutorialBigDialog_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x20
  int size; // w8
  __int64 CurrentIndex; // x19
  srcLineSprite_o *Component_srcLineSprite; // x19

  v4 = this;
  if ( (byte_42EAD28 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TutorialImageLong___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v8, v9, v10);
    this = (TutorialBigDialog_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    byte_42EAD28 = 1;
  }
  ImagePageList = v4->fields.ImagePageList;
  if ( !ImagePageList )
    goto LABEL_16;
  size = ImagePageList->fields._size;
  CurrentIndex = v4->fields.CurrentIndex;
  if ( size > (int)CurrentIndex )
  {
    if ( size <= (unsigned int)CurrentIndex )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    this = (TutorialBigDialog_o *)ImagePageList->fields._items->m_Items[CurrentIndex];
    if ( !this )
      goto LABEL_16;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)this,
                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TutorialImageLong___);
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
      sub_B5D69C(this, method);
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
  __int64 v3; // x3
  TutorialBigDialog___c__DisplayClass56_0_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  struct TutorialBigDialog_o *_4__this; // x8
  UnityEngine_Shader_o *v22; // x22
  UnityEngine_Material_o *v23; // x21
  struct TutorialImageLong_o *comp; // x8
  TutorialBigDialog_o *v25; // x22
  struct TutorialBigDialog_o *v26; // x8
  UnityEngine_Texture_o *Object_WarBoardWaitTimeSetting; // x0
  struct TutorialBigDialog_o *v28; // x8

  v5 = this;
  if ( (byte_42E626E & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_Texture2D____68807528, (_DWORD)aData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Material_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&TutorialBigDialog_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_4609/*"Custom/SpriteWithMask"*/, v15, v16, v17);
    this = (TutorialBigDialog___c__DisplayClass56_0_o *)sub_B5D5C4(&StringLiteral_16207/*"_MaskTex"*/, v18, v19, v20);
    byte_42E626E = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  _4__this->fields.baseTexAssetData = aData;
  sub_B5D560(&_4__this->fields.baseTexAssetData);
  v22 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4609/*"Custom/SpriteWithMask"*/, 0LL);
  v23 = (UnityEngine_Material_o *)sub_B5D694(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v23, v22, 0LL);
  comp = v5->fields.comp;
  if ( !comp )
    goto LABEL_17;
  this = (TutorialBigDialog___c__DisplayClass56_0_o *)comp->fields.BaseImage;
  if ( !this )
    goto LABEL_17;
  ((void (__fastcall *)(TutorialBigDialog___c__DisplayClass56_0_o *, UnityEngine_Material_o *, Il2CppMethodPointer))this->klass[1].vtable._2_GetHashCode.method)(
    this,
    v23,
    this->klass[1].vtable._3_ToString.methodPtr);
  v25 = v5->fields.__4__this;
  this = (TutorialBigDialog___c__DisplayClass56_0_o *)TutorialBigDialog_TypeInfo;
  if ( (BYTE3(TutorialBigDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
  }
  if ( !v25 )
    goto LABEL_17;
  this = (TutorialBigDialog___c__DisplayClass56_0_o *)TutorialBigDialog__GetTuorialImageName(
                                                        v25,
                                                        TutorialBigDialog_TypeInfo->static_fields->baseImgNo,
                                                        0LL);
  if ( !aData )
    goto LABEL_17;
  this = (TutorialBigDialog___c__DisplayClass56_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                        aData,
                                                        (System_String_o *)this,
                                                        (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_Texture2D____68807528);
  if ( !v23
    || (UnityEngine_Material__set_mainTexture(v23, (UnityEngine_Texture_o *)this, 0LL),
        (v26 = v5->fields.__4__this) == 0LL)
    || (this = (TutorialBigDialog___c__DisplayClass56_0_o *)v26->fields.alphaTexAssetData) == 0LL
    || (Object_WarBoardWaitTimeSetting = (UnityEngine_Texture_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                    (AssetData_o *)this,
                                                                    TutorialBigDialog_TypeInfo->static_fields->alphaImgName,
                                                                    (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_Texture2D____68807528),
        UnityEngine_Material__SetTexture(
          v23,
          (System_String_o *)StringLiteral_16207/*"_MaskTex"*/,
          Object_WarBoardWaitTimeSetting,
          0LL),
        (v28 = v5->fields.__4__this) == 0LL)
    || (this = (TutorialBigDialog___c__DisplayClass56_0_o *)v28->fields.ImagePageList) == 0LL )
  {
LABEL_17:
    sub_B5D69C(this, aData);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v5->fields.obj,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
  ActionExtensions__Call(v5->fields.callback, 0LL);
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
    sub_B5D69C(0LL, data);
  _4__this->fields.alphaTexAssetData = data;
  sub_B5D560(&_4__this->fields.alphaTexAssetData);
  ActionExtensions__Call(this->fields.callback, 0LL);
}