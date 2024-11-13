void __fastcall TutorialBigDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  struct TutorialBigDialog_StaticFields *static_fields; // x0
  int64_t v17; // x1
  int64_t v18; // x1
  struct TutorialBigDialog_StaticFields *v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x1
  struct TutorialBigDialog_StaticFields *v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x1
  struct TutorialBigDialog_StaticFields *v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  TutorialBigDialog_c *v42; // x8
  struct TutorialBigDialog_StaticFields *v43; // x9
  struct TutorialBigDialog_StaticFields *v44; // x8

  if ( (byte_4B14E8B & 1) == 0 )
  {
    sub_1BCA7E0(&TutorialBigDialog_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_14762/*"Tutorial/tutorial_alpha"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_18330/*"combine_tutorial_alpha"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_14760/*"Tutorial/combine_tutorial_alpha"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_24353/*"tutorial_alpha"*/, v14, v15);
    byte_4B14E8B = 1;
  }
  static_fields = TutorialBigDialog_TypeInfo->static_fields;
  static_fields->FADE_TIME = 0.3;
  v17 = StringLiteral_14762/*"Tutorial/tutorial_alpha"*/;
  static_fields->alphaImgPath = (struct System_String_o *)StringLiteral_14762/*"Tutorial/tutorial_alpha"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->alphaImgPath, v17, v2, v3, v4, v5, v6, v7);
  v18 = StringLiteral_24353/*"tutorial_alpha"*/;
  v19 = TutorialBigDialog_TypeInfo->static_fields;
  v19->alphaImgName = (struct System_String_o *)StringLiteral_24353/*"tutorial_alpha"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v19->alphaImgName, v18, v20, v21, v22, v23, v24, v25);
  v26 = StringLiteral_14760/*"Tutorial/combine_tutorial_alpha"*/;
  v27 = TutorialBigDialog_TypeInfo->static_fields;
  v27->alphaMiniImgPath = (struct System_String_o *)StringLiteral_14760/*"Tutorial/combine_tutorial_alpha"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v27->alphaMiniImgPath, v26, v28, v29, v30, v31, v32, v33);
  v34 = StringLiteral_18330/*"combine_tutorial_alpha"*/;
  v35 = TutorialBigDialog_TypeInfo->static_fields;
  v35->alphaMiniImgName = (struct System_String_o *)StringLiteral_18330/*"combine_tutorial_alpha"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v35->alphaMiniImgName, v34, v36, v37, v38, v39, v40, v41);
  v42 = TutorialBigDialog_TypeInfo;
  v43 = TutorialBigDialog_TypeInfo->static_fields;
  v43->baseCloseButtonPosition.fields.z = 0.0;
  *(_QWORD *)&v43->baseImgNo = 0x38400000006LL;
  *(_QWORD *)&v43->baseCloseButtonPosition.fields.x = 0x4382800043F28000LL;
  v44 = v42->static_fields;
  *(_QWORD *)&v44->miniCloseButtonPosition.fields.x = 0x4362000043BD0000LL;
  v44->miniCloseButtonPosition.fields.z = 0.0;
}


void __fastcall TutorialBigDialog___ctor(TutorialBigDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B14E8A & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B14E8A = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall TutorialBigDialog__AddImg(
        TutorialBigDialog_o *this,
        UnityEngine_Texture2D_o *tex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  Il2CppObject *TutorialImagePrefab; // x20
  Il2CppObject *v26; // x20
  System_String_o *v27; // x0
  __int64 gameObject; // x0
  __int64 v29; // x1
  Il2CppObject *Component_object; // x23
  __int64 v31; // x1
  int32_t layer; // w22
  UnityEngine_Shader_o *v33; // x24
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  UnityEngine_Material_o *v37; // x22
  int32_t sizeKind; // w21
  __int64 v39; // x10
  Il2CppObject *Object_object__49237568; // x0
  UnityEngine_Transform_o *v41; // x21
  __int64 v42; // x2
  UnityEngine_Transform_o *v43; // x21
  __int64 v44; // x2
  UnityEngine_Transform_o *v45; // x21
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  __int64 v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  __int64 v55; // x8

  if ( (byte_4B14E7B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_Texture2D____76836720, tex, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UITexture___, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v7, v8);
    sub_1BCA7E0(&UnityEngine_Material_TypeInfo, v9, v10);
    sub_1BCA7E0(&NGUITools_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&TutorialBigDialog_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_5048/*"Custom/SpriteWithMask"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_7601/*"Image"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_16436/*"_MaskTex"*/, v23, v24);
    byte_4B14E7B = 1;
  }
  TutorialImagePrefab = (Il2CppObject *)this->fields.TutorialImagePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, tex);
  v26 = UnityEngine_Object__Instantiate_object_(
          TutorialImagePrefab,
          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v27 = System_Int32__ToString((int)this + 248, 0LL);
  gameObject = (__int64)System_String__Concat_62401220((System_String_o *)StringLiteral_7601/*"Image"*/, v27, 0LL);
  if ( !v26 )
    goto LABEL_29;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v26, (System_String_o *)gameObject, 0LL);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v26,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_29;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)gameObject, 0LL);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v31);
  NGUITools__SetLayer((UnityEngine_GameObject_o *)v26, layer, 0LL);
  v33 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5048/*"Custom/SpriteWithMask"*/, 0LL);
  v37 = (UnityEngine_Material_o *)sub_1BCAA2C(UnityEngine_Material_TypeInfo, v34, v35, v36);
  UnityEngine_Material___ctor(v37, v33, 0LL);
  if ( !Component_object )
    goto LABEL_29;
  gameObject = ((__int64 (__fastcall *)(Il2CppObject *, UnityEngine_Material_o *, Il2CppMethodPointer))Component_object->klass->vtable[25].method)(
                 Component_object,
                 v37,
                 Component_object->klass->vtable[26].methodPtr);
  if ( !v37 )
    goto LABEL_29;
  UnityEngine_Material__set_mainTexture(v37, (UnityEngine_Texture_o *)tex, 0LL);
  sizeKind = this->fields.sizeKind;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo, v29);
  gameObject = (__int64)this->fields.alphaTexAssetData;
  if ( !gameObject )
    goto LABEL_29;
  v39 = 16LL;
  if ( sizeKind == 2 )
    v39 = 32LL;
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              (AssetData_o *)gameObject,
                              *(System_String_o **)((char *)&TutorialBigDialog_TypeInfo->static_fields->FADE_TIME + v39),
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_Texture2D____76836720);
  UnityEngine_Material__SetTexture(
    v37,
    (System_String_o *)StringLiteral_16436/*"_MaskTex"*/,
    (UnityEngine_Texture_o *)Object_object__49237568,
    0LL);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v26, 0, 0LL);
  gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v26, 0LL);
  if ( !this->fields.ImageRoot )
    goto LABEL_29;
  v41 = (UnityEngine_Transform_o *)gameObject;
  gameObject = (__int64)UnityEngine_GameObject__get_transform(this->fields.ImageRoot, 0LL);
  if ( !v41 )
    goto LABEL_29;
  UnityEngine_Transform__set_parent(v41, (UnityEngine_Transform_o *)gameObject, 0LL);
  gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v26, 0LL);
  v43 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4B109C1 )
  {
    gameObject = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v29, v42);
    byte_4B109C1 = 1;
  }
  if ( !v43 )
    goto LABEL_29;
  UnityEngine_Transform__set_localPosition(v43, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v26, 0LL);
  v45 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4B109C6 )
  {
    gameObject = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v29, v44);
    byte_4B109C6 = 1;
  }
  if ( !v45
    || (UnityEngine_Transform__set_localScale(v45, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
        (gameObject = (__int64)this->fields.ImagePageList) == 0)
    || (v52 = *(_QWORD *)(gameObject + 16),
        v53 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++*(_DWORD *)(gameObject + 28),
        !v52) )
  {
LABEL_29:
    sub_1BCAA3C(gameObject, v29);
  }
  v54 = *(int *)(gameObject + 24);
  if ( (unsigned int)v54 >= *(_DWORD *)(v52 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)gameObject,
      v26,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
  }
  else
  {
    v55 = v52 + 8 * v54;
    *(_DWORD *)(gameObject + 24) = v54 + 1;
    *(_QWORD *)(v55 + 32) = v26;
    sub_1BCA784((PartyOrganizationUtility_o *)(v55 + 32), (int64_t)v26, v46, v47, v48, v49, v50, v51);
  }
}


void __fastcall TutorialBigDialog__AddScrollImg(
        TutorialBigDialog_o *this,
        AssetData_o *data,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x20
  __int64 ObjectNameList; // x0
  __int64 v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int v50; // w8
  __int64 v51; // x24
  unsigned int v52; // w27
  int32_t v53; // w21
  UnityEngine_Texture_o *v54; // x25
  UnityEngine_Texture_o *v55; // x19
  __int64 v56; // x20
  System_String_o **v57; // x20
  __int64 v58; // t1
  char v59; // w26
  const MethodInfo *v60; // x2
  UnityEngine_Texture_o *v61; // x23
  Il2CppObject *TutorialImageLongPrefab; // x22
  Il2CppObject *v63; // x0
  __int64 *v64; // x22
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  UnityEngine_Object_o *klass; // x24
  System_String_o *v72; // x0
  Il2CppObject *Component_object; // x0
  void **p_monitor; // x24
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  UnityEngine_GameObject_o *v81; // x26
  __int64 v82; // x1
  int32_t layer; // w27
  UnityEngine_Shader_o *v84; // x27
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x3
  UnityEngine_Material_o *v88; // x26
  UIWidget_o *v89; // x25
  UITexture_o *v90; // x25
  int v91; // w26
  int v92; // w27
  int32_t baseWidth; // w20
  int v94; // w28
  UnityEngine_Transform_o *v95; // x21
  __int64 v96; // x2
  UnityEngine_Transform_o *v97; // x21
  __int64 v98; // x2
  UnityEngine_Transform_o *v99; // x21
  __int64 v100; // x1
  __int64 v101; // x2
  __int64 v102; // x3
  __int64 v103; // x21
  const MethodInfo *v104; // x2
  TutorialBigDialog_c *v105; // x0
  __int64 v106; // x1
  System_String_o *TuorialImagePath; // x19
  Il2CppObject *object; // [xsp+8h] [xbp-78h]
  TutorialBigDialog_o *v109; // [xsp+18h] [xbp-68h]
  UnityEngine_Vector3_o v110; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v111; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v112; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B14E7C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_Texture2D____76836720, data, callback);
    sub_1BCA7E0(&AssetManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TutorialImageLong___, v9, v10);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v11, v12);
    sub_1BCA7E0(&UnityEngine_Material_TypeInfo, v13, v14);
    sub_1BCA7E0(&NGUITools_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    sub_1BCA7E0(&TutorialBigDialog_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_TutorialBigDialog___c__DisplayClass56_0__AddScrollImg_b__0__, v23, v24);
    sub_1BCA7E0(&TutorialBigDialog___c__DisplayClass56_0_TypeInfo, v25, v26);
    sub_1BCA7E0(&StringLiteral_16906/*"alpha"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_5048/*"Custom/SpriteWithMask"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_7601/*"Image"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_16436/*"_MaskTex"*/, v33, v34);
    byte_4B14E7C = 1;
  }
  v35 = sub_1BCAA2C(TutorialBigDialog___c__DisplayClass56_0_TypeInfo, data, callback, method);
  System_Object___ctor((Il2CppObject *)v35, 0LL);
  if ( !v35 )
    goto LABEL_62;
  *(_QWORD *)(v35 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v35 + 16), (int64_t)this, v38, v39, v40, v41, v42, v43);
  *(_QWORD *)(v35 + 40) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v35 + 40), (int64_t)callback, v44, v45, v46, v47, v48, v49);
  if ( !data )
    goto LABEL_62;
  ObjectNameList = (__int64)AssetData__GetObjectNameList(data, 0LL);
  if ( !ObjectNameList )
    goto LABEL_62;
  v50 = *(_DWORD *)(ObjectNameList + 24);
  v51 = ObjectNameList;
  object = (Il2CppObject *)v35;
  v109 = this;
  if ( v50 < 1 )
  {
    v55 = 0LL;
    v61 = 0LL;
    v53 = 0;
  }
  else
  {
    v52 = 0;
    v53 = 0;
    v54 = 0LL;
    v55 = 0LL;
    do
    {
      if ( v52 >= v50 )
        goto LABEL_61;
      v56 = v51 + 8LL * (int)v52;
      v58 = *(_QWORD *)(v56 + 32);
      v57 = (System_String_o **)(v56 + 32);
      ObjectNameList = v58;
      if ( !v58 )
        goto LABEL_62;
      ObjectNameList = System_String__Contains(
                         (System_String_o *)ObjectNameList,
                         (System_String_o *)StringLiteral_16906/*"alpha"*/,
                         0LL);
      if ( v52 >= *(_DWORD *)(v51 + 24) )
LABEL_61:
        sub_1BCAA44(ObjectNameList, v37);
      v59 = ObjectNameList;
      ObjectNameList = (__int64)AssetData__GetObject_object__49237568(
                                  data,
                                  *v57,
                                  (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_Texture2D____76836720);
      v61 = (UnityEngine_Texture_o *)ObjectNameList;
      if ( (v59 & 1) == 0 )
      {
        if ( v52 >= *(_DWORD *)(v51 + 24) )
          goto LABEL_61;
        v55 = (UnityEngine_Texture_o *)ObjectNameList;
        ObjectNameList = TutorialBigDialog__GetScrollHeightWithName((TutorialBigDialog_o *)ObjectNameList, *v57, v60);
        v53 = ObjectNameList;
        v61 = v54;
      }
      v50 = *(_DWORD *)(v51 + 24);
      ++v52;
      v54 = v61;
    }
    while ( (int)v52 < v50 );
  }
  TutorialImageLongPrefab = (Il2CppObject *)v109->fields.TutorialImageLongPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37);
  v63 = UnityEngine_Object__Instantiate_object_(
          TutorialImageLongPrefab,
          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  object[2].klass = (Il2CppClass *)v63;
  v64 = (__int64 *)&object[2];
  sub_1BCA784((PartyOrganizationUtility_o *)&object[2], (int64_t)v63, v65, v66, v67, v68, v69, v70);
  klass = (UnityEngine_Object_o *)object[2].klass;
  v72 = System_Int32__ToString((int)v109 + 248, 0LL);
  ObjectNameList = (__int64)System_String__Concat_62401220((System_String_o *)StringLiteral_7601/*"Image"*/, v72, 0LL);
  if ( !klass )
    goto LABEL_62;
  UnityEngine_Object__set_name(klass, (System_String_o *)ObjectNameList, 0LL);
  ObjectNameList = *v64;
  if ( !*v64 )
    goto LABEL_62;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)ObjectNameList,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TutorialImageLong___);
  object[1].monitor = Component_object;
  p_monitor = &object[1].monitor;
  sub_1BCA784((PartyOrganizationUtility_o *)&object[1].monitor, (int64_t)Component_object, v75, v76, v77, v78, v79, v80);
  v81 = (UnityEngine_GameObject_o *)object[2].klass;
  ObjectNameList = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v109, 0LL);
  if ( !ObjectNameList )
    goto LABEL_62;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)ObjectNameList, 0LL);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v82);
  NGUITools__SetLayer(v81, layer, 0LL);
  v84 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5048/*"Custom/SpriteWithMask"*/, 0LL);
  v88 = (UnityEngine_Material_o *)sub_1BCAA2C(UnityEngine_Material_TypeInfo, v85, v86, v87);
  UnityEngine_Material___ctor(v88, v84, 0LL);
  if ( !*p_monitor )
    goto LABEL_62;
  ObjectNameList = *((_QWORD *)*p_monitor + 5);
  if ( !ObjectNameList )
    goto LABEL_62;
  ObjectNameList = (*(__int64 (__fastcall **)(__int64, UnityEngine_Material_o *, _QWORD))(*(_QWORD *)ObjectNameList
                                                                                        + 712LL))(
                     ObjectNameList,
                     v88,
                     *(_QWORD *)(*(_QWORD *)ObjectNameList + 720LL));
  if ( !v88 )
    goto LABEL_62;
  UnityEngine_Material__set_mainTexture(v88, v55, 0LL);
  UnityEngine_Material__SetTexture(v88, (System_String_o *)StringLiteral_16436/*"_MaskTex"*/, v61, 0LL);
  if ( !*p_monitor )
    goto LABEL_62;
  ObjectNameList = *((_QWORD *)*p_monitor + 5);
  if ( !ObjectNameList )
    goto LABEL_62;
  UIWidget__set_height((UIWidget_o *)ObjectNameList, v53, 0LL);
  if ( !*p_monitor )
    goto LABEL_62;
  v89 = (UIWidget_o *)*((_QWORD *)*p_monitor + 5);
  ObjectNameList = (__int64)TutorialBigDialog_TypeInfo;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo, v37);
  if ( !v89 )
    goto LABEL_62;
  UIWidget__set_width(v89, TutorialBigDialog_TypeInfo->static_fields->baseWidth, 0LL);
  if ( !*p_monitor )
    goto LABEL_62;
  if ( !v55 )
    goto LABEL_62;
  v90 = (UITexture_o *)*((_QWORD *)*p_monitor + 5);
  v91 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v55->klass->vtable._6_get_height.method)(
          v55,
          v55->klass->vtable._7_set_height.methodPtr);
  v92 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v55->klass->vtable._6_get_height.method)(
          v55,
          v55->klass->vtable._7_set_height.methodPtr);
  baseWidth = TutorialBigDialog_TypeInfo->static_fields->baseWidth;
  v94 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v55->klass->vtable._4_get_width.method)(
          v55,
          v55->klass->vtable._5_set_width.methodPtr);
  ObjectNameList = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v55->klass->vtable._6_get_height.method)(
                     v55,
                     v55->klass->vtable._7_set_height.methodPtr);
  if ( !v90 )
    goto LABEL_62;
  v112.fields.m_Height = (float)v53 / (float)(int)ObjectNameList;
  v112.fields.m_Width = (float)baseWidth / (float)v94;
  v112.fields.m_YMin = (float)(v91 - v53) / (float)v92;
  v112.fields.m_XMin = 0.0;
  UITexture__set_uvRect(v90, v112, 0LL);
  if ( !*p_monitor )
    goto LABEL_62;
  ObjectNameList = *((_QWORD *)*p_monitor + 6);
  if ( !ObjectNameList )
    goto LABEL_62;
  v110.fields.z = 1.0;
  v110.fields.y = (float)v53;
  v110.fields.x = (float)TutorialBigDialog_TypeInfo->static_fields->baseWidth;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)ObjectNameList, v110, 0LL);
  if ( !*p_monitor )
    goto LABEL_62;
  ObjectNameList = *((_QWORD *)*p_monitor + 6);
  if ( !ObjectNameList )
    goto LABEL_62;
  v111.fields.y = (float)-v53 * 0.5;
  v111.fields.x = 0.0;
  v111.fields.z = 0.0;
  UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)ObjectNameList, v111, 0LL);
  if ( !*p_monitor )
    goto LABEL_62;
  ObjectNameList = *((_QWORD *)*p_monitor + 7);
  if ( !ObjectNameList )
    goto LABEL_62;
  UIScrollView__ResetPosition((UIScrollView_o *)ObjectNameList, 0LL);
  ObjectNameList = *v64;
  if ( !*v64 )
    goto LABEL_62;
  ObjectNameList = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)ObjectNameList, 0LL);
  if ( !v109->fields.ImageRoot )
    goto LABEL_62;
  v95 = (UnityEngine_Transform_o *)ObjectNameList;
  ObjectNameList = (__int64)UnityEngine_GameObject__get_transform(v109->fields.ImageRoot, 0LL);
  if ( !v95 )
    goto LABEL_62;
  UnityEngine_Transform__set_parent(v95, (UnityEngine_Transform_o *)ObjectNameList, 0LL);
  ObjectNameList = *v64;
  if ( !*v64 )
    goto LABEL_62;
  ObjectNameList = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)ObjectNameList, 0LL);
  v97 = (UnityEngine_Transform_o *)ObjectNameList;
  if ( !byte_4B109C1 )
  {
    ObjectNameList = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v37, v96);
    byte_4B109C1 = 1;
  }
  if ( !v97 )
    goto LABEL_62;
  UnityEngine_Transform__set_localPosition(v97, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  ObjectNameList = *v64;
  if ( !*v64 )
    goto LABEL_62;
  ObjectNameList = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)ObjectNameList, 0LL);
  v99 = (UnityEngine_Transform_o *)ObjectNameList;
  if ( !byte_4B109C6 )
  {
    ObjectNameList = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v37, v98);
    byte_4B109C6 = 1;
  }
  if ( !v99 )
    goto LABEL_62;
  UnityEngine_Transform__set_localScale(v99, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  v103 = sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v100, v101, v102);
  AssetLoader_LoadEndDataHandler___ctor(
    (AssetLoader_LoadEndDataHandler_o *)v103,
    object,
    Method_TutorialBigDialog___c__DisplayClass56_0__AddScrollImg_b__0__,
    0LL);
  if ( v109->fields.baseTexLoadRequested )
  {
    if ( v103 )
    {
      (*(void (__fastcall **)(_QWORD, struct AssetData_o *, _QWORD))(v103 + 24))(
        *(_QWORD *)(v103 + 64),
        v109->fields.baseTexAssetData,
        *(_QWORD *)(v103 + 40));
      return;
    }
LABEL_62:
    sub_1BCAA3C(ObjectNameList, v37);
  }
  v109->fields.baseTexLoadRequested = 1;
  v105 = TutorialBigDialog_TypeInfo;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo, v37);
    v105 = TutorialBigDialog_TypeInfo;
  }
  TuorialImagePath = TutorialBigDialog__GetTuorialImagePath(v109, v105->static_fields->baseImgNo, v104);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v106);
  AssetManager__loadAssetStorage(TuorialImagePath, (AssetLoader_LoadEndDataHandler_o *)v103, 1, 0LL);
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
    sub_1BCAA3C(this, *(_QWORD *)&addCount);
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
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v9, 0LL);
}


void __fastcall TutorialBigDialog__Close(
        TutorialBigDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Action_o *v17; // x20

  if ( (byte_4B14E83 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&AndroidBackKeyManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_TutorialBigDialog_EndClose__, v12, v13);
    byte_4B14E83 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 0;
  v17 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v14, v15, v16);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_TutorialBigDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v17, 0LL);
}


void __fastcall TutorialBigDialog__DestroyImagePageList(TutorialBigDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x0
  __int64 v15; // x1
  Il2CppObject *current; // x20
  __int64 v17; // x0
  __int64 v18; // x1
  struct System_Collections_Generic_List_GameObject__o *v19; // x8
  int32_t size; // w2
  int v21; // w9
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B14E89 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Clear__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    byte_4B14E89 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ImagePageList = this->fields.ImagePageList;
  if ( ImagePageList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      (System_Collections_Generic_List_object__o *)ImagePageList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v22.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
      UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v19 = this->fields.ImagePageList;
    if ( !v19 )
      sub_1BCAA3C(v17, v18);
    size = v19->fields._size;
    v21 = v19->fields._version + 1;
    v19->fields._size = 0;
    v19->fields._version = v21;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v19->fields._items, 0, size, 0LL);
    this->fields.CurrentIndex = 0;
  }
}


void __fastcall TutorialBigDialog__EndClose(TutorialBigDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  PartyOrganizationUtility_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  TutorialBigDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1BCA784(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v12->fields.m_target)(
      v12->fields.original_method_info,
      *(_QWORD *)&v12->fields.extra_arg);
  }
}


void __fastcall TutorialBigDialog__EndOpen(TutorialBigDialog_o *this, const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  PartyOrganizationUtility_o *p_endOpenCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *endOpenCallbackFunc; // t1

  this->fields.isButtonEnable = 1;
  TutorialBigDialog__refreshCurrent(this, method);
  endOpenCallbackFunc = this->fields.endOpenCallbackFunc;
  p_endOpenCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.endOpenCallbackFunc;
  v10 = endOpenCallbackFunc;
  if ( endOpenCallbackFunc )
  {
    p_endOpenCallbackFunc->klass = 0LL;
    sub_1BCA784(p_endOpenCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v10->fields.m_target)(
      v10->fields.original_method_info,
      *(_QWORD *)&v10->fields.extra_arg);
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
    sub_1BCAA3C(this, imageName);
  if ( LODWORD(this->fields.m_CancellationTokenSource) <= 3 )
    sub_1BCAA44(this, imageName);
  System_Int32__TryParse((System_String_o *)this->fields.maskSprite, &result, 0LL);
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TutorialBigDialog__GetTuorialImageName(
        TutorialBigDialog_o *this,
        int32_t imgId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  int32_t v11; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B14E78 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&imgId, method);
    sub_1BCA7E0(&StringLiteral_25207/*"{0:D4}"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_24351/*"tutorial_"*/, v6, v7);
    byte_4B14E78 = 1;
  }
  v11 = imgId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
  v9 = System_String__Format((System_String_o *)StringLiteral_25207/*"{0:D4}"*/, v8, 0LL);
  return System_String__Concat_62401220((System_String_o *)StringLiteral_24351/*"tutorial_"*/, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TutorialBigDialog__GetTuorialImagePath(
        TutorialBigDialog_o *this,
        int32_t imgId,
        const MethodInfo *method)
{
  System_String_o *TuorialImageName; // x0

  if ( (byte_4B14E77 & 1) == 0 )
  {
    this = (TutorialBigDialog_o *)sub_1BCA7E0(&StringLiteral_14759/*"Tutorial/"*/, *(_QWORD *)&imgId, method);
    byte_4B14E77 = 1;
  }
  TuorialImageName = TutorialBigDialog__GetTuorialImageName(this, imgId, method);
  return System_String__Concat_62401220((System_String_o *)StringLiteral_14759/*"Tutorial/"*/, TuorialImageName, 0LL);
}


void __fastcall TutorialBigDialog__Init(TutorialBigDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  TutorialBigDialog_c *v15; // x0
  int32_t sizeKind; // w20
  __int64 v17; // x9
  System_String_o *v18; // x20
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  TutorialBigDialog_c *v25; // x0
  __int64 v26; // x1
  System_String_o *TuorialImagePath; // x20
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct System_Int32_array *TutorialImageLoadList; // x23
  __int64 v35; // x8
  unsigned __int64 v36; // x24
  __int64 v37; // x1
  System_String_o *v38; // x21
  struct System_String_array *assetsImageLoadList; // x8
  struct System_String_array **p_assetsImageLoadList; // x20
  il2cpp_array_size_t v41; // w23
  il2cpp_array_size_t max_length; // w9
  System_String_o *v43; // x21

  if ( (byte_4B14E6D & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&TutorialBigDialog_TypeInfo, v4, v5);
    byte_4B14E6D = 1;
  }
  this->fields.isButtonEnable = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_33:
    sub_1BCAA3C(gameObject, v7);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.IsFading = 0;
  TutorialBigDialog__DestroyImagePageList(this, v8);
  if ( this->fields.alphaTexLoadRequested )
  {
    v15 = TutorialBigDialog_TypeInfo;
    sizeKind = this->fields.sizeKind;
    if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo, v7);
      v15 = TutorialBigDialog_TypeInfo;
    }
    v17 = 8LL;
    if ( sizeKind == 2 )
      v17 = 24LL;
    v18 = *(System_String_o **)((char *)&v15->static_fields->FADE_TIME + v17);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7);
    AssetManager__releaseAssetStorage(v18, 0LL);
    this->fields.alphaTexAssetData = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.alphaTexAssetData, 0LL, v19, v20, v21, v22, v23, v24);
    this->fields.alphaTexLoadRequested = 0;
  }
  if ( this->fields.baseTexLoadRequested )
  {
    v25 = TutorialBigDialog_TypeInfo;
    if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo, v7);
      v25 = TutorialBigDialog_TypeInfo;
    }
    TuorialImagePath = TutorialBigDialog__GetTuorialImagePath(this, v25->static_fields->baseImgNo, v9);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v26);
    AssetManager__releaseAssetStorage(TuorialImagePath, 0LL);
    this->fields.baseTexAssetData = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseTexAssetData, 0LL, v28, v29, v30, v31, v32, v33);
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
LABEL_36:
          sub_1BCAA44(gameObject, v7);
        v38 = TutorialBigDialog__GetTuorialImagePath(this, TutorialImageLoadList->m_Items[v36 + 1], v9);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v37);
        AssetManager__releaseAssetStorage(v38, 0LL);
        LODWORD(v35) = TutorialImageLoadList->max_length;
        ++v36;
      }
      while ( (__int64)v36 < (int)v35 );
    }
    this->fields.TutorialImageLoadList = 0LL;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.TutorialImageLoadList,
      0LL,
      (int64_t)v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  p_assetsImageLoadList = &this->fields.assetsImageLoadList;
  assetsImageLoadList = this->fields.assetsImageLoadList;
  if ( assetsImageLoadList )
  {
    v41 = 0;
    while ( 1 )
    {
      max_length = assetsImageLoadList->max_length;
      if ( (int)v41 >= (int)max_length )
        break;
      if ( v41 >= max_length )
        goto LABEL_36;
      v43 = assetsImageLoadList->m_Items[v41];
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7);
      AssetManager__releaseAssetStorage(v43, 0LL);
      assetsImageLoadList = *p_assetsImageLoadList;
      v41 += 2;
      if ( !*p_assetsImageLoadList )
        goto LABEL_33;
    }
    *p_assetsImageLoadList = 0LL;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.assetsImageLoadList,
      0LL,
      (int64_t)v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall TutorialBigDialog__LoadAlpha(
        TutorialBigDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  TutorialBigDialog_c *v32; // x0
  int32_t sizeKind; // w19
  __int64 v34; // x9
  System_String_o *v35; // x19
  AssetLoader_LoadEndDataHandler_o *v36; // x21
  __int64 v37; // x1

  if ( (byte_4B14E7E & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, callback, method);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v6, v7);
    sub_1BCA7E0(&TutorialBigDialog_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_TutorialBigDialog___c__DisplayClass59_0__LoadAlpha_b__0__, v10, v11);
    sub_1BCA7E0(&TutorialBigDialog___c__DisplayClass59_0_TypeInfo, v12, v13);
    byte_4B14E7E = 1;
  }
  v14 = sub_1BCAA2C(TutorialBigDialog___c__DisplayClass59_0_TypeInfo, callback, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    sub_1BCAA3C(v15, v16);
  *(_QWORD *)(v14 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)this, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v14 + 24) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)callback, v23, v24, v25, v26, v27, v28);
  this->fields.alphaTexLoadRequested = 1;
  v32 = TutorialBigDialog_TypeInfo;
  sizeKind = this->fields.sizeKind;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo, v29);
    v32 = TutorialBigDialog_TypeInfo;
  }
  v34 = 8LL;
  if ( sizeKind == 2 )
    v34 = 24LL;
  v35 = *(System_String_o **)((char *)&v32->static_fields->FADE_TIME + v34);
  v36 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v29, v30, v31);
  AssetLoader_LoadEndDataHandler___ctor(
    v36,
    (Il2CppObject *)v14,
    Method_TutorialBigDialog___c__DisplayClass59_0__LoadAlpha_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v37);
  AssetManager__loadAssetStorage(v35, v36, 1, 0LL);
}


void __fastcall TutorialBigDialog__LoadImages(
        TutorialBigDialog_o *this,
        System_Int32_array *images,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  Il2CppObject *Instance; // x0
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Action_o *v25; // x20
  const MethodInfo *v26; // x2

  if ( (byte_4B14E75 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, images, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_TutorialBigDialog_LoadStart__, v11, v12);
    byte_4B14E75 = 1;
  }
  this->fields._loadIndex = 0;
  this->fields.loadByAsset = 0;
  v13 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       images,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.ImagePageList = (struct System_Collections_Generic_List_GameObject__o *)v13;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.ImagePageList, (int64_t)v13, v14, v15, v16, v17, v18, v19);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v21);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  v25 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24);
  System_Action___ctor(v25, (Il2CppObject *)this, Method_TutorialBigDialog_LoadStart__, 0LL);
  TutorialBigDialog__LoadAlpha(this, v25, v26);
}


void __fastcall TutorialBigDialog__LoadImages_38056520(
        TutorialBigDialog_o *this,
        System_String_array *images,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  Il2CppObject *Instance; // x0
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Action_o *v25; // x20
  const MethodInfo *v26; // x2

  if ( (byte_4B14E76 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, images, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_TutorialBigDialog_LoadStartAssets__, v11, v12);
    byte_4B14E76 = 1;
  }
  this->fields._loadIndex = 0;
  this->fields.loadByAsset = 1;
  v13 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       images,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.ImagePageList = (struct System_Collections_Generic_List_GameObject__o *)v13;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.ImagePageList, (int64_t)v13, v14, v15, v16, v17, v18, v19);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v21);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  v25 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24);
  System_Action___ctor(v25, (Il2CppObject *)this, Method_TutorialBigDialog_LoadStartAssets__, 0LL);
  TutorialBigDialog__LoadAlpha(this, v25, v26);
}


void __fastcall TutorialBigDialog__LoadStart(TutorialBigDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TutorialBigDialog_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct System_Int32_array *TutorialImageLoadList; // x8
  __int64 loadIndex; // x9
  System_String_o *TuorialImagePath; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  AssetLoader_LoadEndDataHandler_o *v14; // x21
  __int64 v15; // x1

  v3 = this;
  if ( (byte_4B14E79 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v4, v5);
    this = (TutorialBigDialog_o *)sub_1BCA7E0(&Method_TutorialBigDialog__LoadStart_b__53_0__, v6, v7);
    byte_4B14E79 = 1;
  }
  TutorialImageLoadList = v3->fields.TutorialImageLoadList;
  if ( !TutorialImageLoadList )
    sub_1BCAA3C(this, method);
  loadIndex = v3->fields._loadIndex;
  if ( (unsigned int)loadIndex >= TutorialImageLoadList->max_length )
    sub_1BCAA44(this, method);
  TuorialImagePath = TutorialBigDialog__GetTuorialImagePath(v3, TutorialImageLoadList->m_Items[loadIndex + 1], v2);
  v14 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v11, v12, v13);
  AssetLoader_LoadEndDataHandler___ctor(v14, (Il2CppObject *)v3, Method_TutorialBigDialog__LoadStart_b__53_0__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v15);
  AssetManager__loadAssetStorage(TuorialImagePath, v14, 1, 0LL);
}


void __fastcall TutorialBigDialog__LoadStartAssets(TutorialBigDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  TutorialBigDialog_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_String_array *assetsImageLoadList; // x8
  __int64 loadIndex; // x9
  System_String_o *v11; // x20
  AssetLoader_LoadEndDataHandler_o *v12; // x21
  __int64 v13; // x1

  v4 = this;
  if ( (byte_4B14E7A & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v5, v6);
    this = (TutorialBigDialog_o *)sub_1BCA7E0(&Method_TutorialBigDialog__LoadStartAssets_b__54_0__, v7, v8);
    byte_4B14E7A = 1;
  }
  assetsImageLoadList = v4->fields.assetsImageLoadList;
  if ( !assetsImageLoadList )
    sub_1BCAA3C(this, method);
  loadIndex = v4->fields._loadIndex;
  if ( (unsigned int)loadIndex >= assetsImageLoadList->max_length )
    sub_1BCAA44(this, method);
  v11 = assetsImageLoadList->m_Items[loadIndex];
  v12 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, method, v2, v3);
  AssetLoader_LoadEndDataHandler___ctor(
    v12,
    (Il2CppObject *)v4,
    Method_TutorialBigDialog__LoadStartAssets_b__54_0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v13);
  AssetManager__loadAssetStorage(v11, v12, 1, 0LL);
}


void __fastcall TutorialBigDialog__OnBottomButton(TutorialBigDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  TutorialBigDialog_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x8
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x1

  v3 = this;
  if ( (byte_4B14E86 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, method, v2);
    this = (TutorialBigDialog_o *)sub_1BCA7E0(&Method_TutorialBigDialog_OnBottomButton__, v4, v5);
    byte_4B14E86 = 1;
  }
  if ( !v3->fields.IsFading )
  {
    ImagePageList = v3->fields.ImagePageList;
    if ( !ImagePageList )
      sub_1BCAA3C(this, method);
    if ( v3->fields.CurrentIndex == ImagePageList->fields._size - 1 )
    {
      v7 = Method_TutorialBigDialog_OnBottomButton__;
      if ( (*((_BYTE *)Method_TutorialBigDialog_OnBottomButton__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1BCA7F8(Method_TutorialBigDialog_OnBottomButton__);
      v8 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 1, 0LL);
      TutorialBigDialog__OnClickClose(v3, v9);
    }
  }
}


void __fastcall TutorialBigDialog__OnClickClose(TutorialBigDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  __int64 v20; // x3
  int32_t localFlagId; // w20
  int configFlagId; // w20
  NetworkManager_ResultCallbackFunc_o *v23; // x20
  __int64 v24; // x1
  Il2CppObject *Request_object; // x0
  __int64 v26; // x1
  NetworkManager_ResultCallbackFunc_o *v27; // x20
  __int64 v28; // x1

  if ( (byte_4B14E87 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, method, v2);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_TutorialSetRequest___, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_TutorialBigDialog_EndTurorialRequest__, v10, v11);
    sub_1BCA7E0(&Method_TutorialBigDialog_OnClickClose__, v12, v13);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v14, v15);
    byte_4B14E87 = 1;
  }
  if ( !this->fields.IsFading && this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v16 = Method_TutorialBigDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_TutorialBigDialog_OnClickClose__ + 83) & 2) != 0 )
      v16 = (_QWORD *)sub_1BCA7F8(Method_TutorialBigDialog_OnClickClose__);
    v17 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v16, v16[4]);
    OverwriteAssetSoundName__PlaySystemSe(v17, 1, 0LL);
    localFlagId = this->fields.localFlagId;
    if ( localFlagId != -1 )
    {
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v18);
      TutorialFlag__Set_38436808(localFlagId, 0LL);
    }
    configFlagId = this->fields.configFlagId;
    if ( configFlagId >= 1 )
    {
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v18);
      TutorialFlag__SetConfigFlg(configFlagId, 0LL);
    }
    if ( this->fields.flagId != -1 )
    {
      v23 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v18,
                                                     v19,
                                                     v20);
      NetworkManager_ResultCallbackFunc___ctor(
        v23,
        (Il2CppObject *)this,
        Method_TutorialBigDialog_EndTurorialRequest__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v24);
      Request_object = NetworkManager__getRequest_object_(
                         v23,
                         (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_TutorialSetRequest___);
      if ( Request_object )
      {
        TutorialSetRequest__beginRequest((TutorialSetRequest_o *)Request_object, this->fields.flagId, 0LL);
        return;
      }
LABEL_28:
      sub_1BCAA3C(Request_object, v26);
    }
    if ( this->fields.eventFlagId == -1 || !this->fields.eventId )
    {
      TutorialBigDialog__Close(this, this->fields.closeCallbackFunc, v19);
    }
    else
    {
      v27 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v18,
                                                     v19,
                                                     v20);
      NetworkManager_ResultCallbackFunc___ctor(
        v27,
        (Il2CppObject *)this,
        Method_TutorialBigDialog_EndTurorialRequest__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v28);
      Request_object = NetworkManager__getRequest_object_(
                         v27,
                         (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
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
  __int64 v2; // x2
  TutorialBigDialog_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x8
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x2

  v3 = this;
  if ( (byte_4B14E84 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, method, v2);
    this = (TutorialBigDialog_o *)sub_1BCA7E0(&Method_TutorialBigDialog_OnNextButton__, v4, v5);
    byte_4B14E84 = 1;
  }
  if ( !v3->fields.IsFading )
  {
    ImagePageList = v3->fields.ImagePageList;
    if ( !ImagePageList )
      sub_1BCAA3C(this, method);
    if ( v3->fields.CurrentIndex != ImagePageList->fields._size - 1 )
    {
      v7 = Method_TutorialBigDialog_OnNextButton__;
      if ( (*((_BYTE *)Method_TutorialBigDialog_OnNextButton__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1BCA7F8(Method_TutorialBigDialog_OnNextButton__);
      v8 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
      TutorialBigDialog__UpdatePage(v3, v3->fields.CurrentIndex + 1, v9);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialBigDialog__OnPageChange(TutorialBigDialog_o *this, int32_t idx, const MethodInfo *method)
{
  TutorialBigDialog_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x8
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0

  v4 = this;
  if ( (byte_4B14E88 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, *(_QWORD *)&idx, method);
    this = (TutorialBigDialog_o *)sub_1BCA7E0(&Method_TutorialBigDialog_OnPageChange__, v5, v6);
    byte_4B14E88 = 1;
  }
  if ( (idx & 0x80000000) == 0 && v4->fields.CurrentIndex != idx )
  {
    ImagePageList = v4->fields.ImagePageList;
    if ( !ImagePageList )
      sub_1BCAA3C(this, *(_QWORD *)&idx);
    if ( ImagePageList->fields._size > idx )
    {
      v8 = Method_TutorialBigDialog_OnPageChange__;
      if ( (*((_BYTE *)Method_TutorialBigDialog_OnPageChange__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_1BCA7F8(Method_TutorialBigDialog_OnPageChange__);
      v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    }
  }
}


void __fastcall TutorialBigDialog__OnPrevButton(TutorialBigDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B14E85 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_TutorialBigDialog_OnPrevButton__, method, v2);
    byte_4B14E85 = 1;
  }
  if ( !this->fields.IsFading && this->fields.CurrentIndex >= 1 )
  {
    v4 = Method_TutorialBigDialog_OnPrevButton__;
    if ( (*((_BYTE *)Method_TutorialBigDialog_OnPrevButton__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_TutorialBigDialog_OnPrevButton__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    TutorialBigDialog__UpdatePage(this, this->fields.CurrentIndex - 1, v6);
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
  __int64 v14; // x2
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 v33; // x1
  UnityEngine_GameObject_o *CloseButton; // x0
  TutorialBigDialog_c *v35; // x8
  UnityEngine_Transform_o *v36; // x21
  struct System_Int32_array *v37; // x0
  struct System_Int32_array **p_TutorialImageLoadList; // x21
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct System_Int32_array *v45; // x9
  unsigned __int64 v46; // x10
  unsigned __int64 v47; // x8
  __int64 v48; // x13
  System_Int32_array *v49; // x1
  const MethodInfo *v50; // x2
  const MethodInfo *v51; // x2

  if ( (byte_4B14E6E & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, images, *(_QWORD *)&flagId);
    sub_1BCA7E0(&TutorialBigDialog_TypeInfo, v13, v14);
    byte_4B14E6E = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&flagId);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.endOpenCallbackFunc,
    (int64_t)endOpenFunc,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.endTurorialRequestFunc,
    (int64_t)endTurorialRequestFunc,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.closeCallbackFunc = closeFunc;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)closeFunc,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  CloseButton = this->fields.CloseButton;
  this->fields.flagId = flagId;
  *(_OWORD *)&this->fields.localFlagId = xmmword_BD2B40;
  this->fields.sizeKind = 1;
  if ( !CloseButton )
    goto LABEL_19;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0LL);
  v35 = TutorialBigDialog_TypeInfo;
  v36 = (UnityEngine_Transform_o *)CloseButton;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo, v33);
    v35 = TutorialBigDialog_TypeInfo;
  }
  if ( !v36 )
    goto LABEL_19;
  UnityEngine_Transform__set_localPosition(v36, v35->static_fields->baseCloseButtonPosition, 0LL);
  if ( !images )
    goto LABEL_19;
  v37 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, images->max_length);
  this->fields.TutorialImageLoadList = v37;
  p_TutorialImageLoadList = &this->fields.TutorialImageLoadList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.TutorialImageLoadList,
    (int64_t)v37,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  if ( (int)*(_QWORD *)&images->max_length >= 1 )
  {
    v45 = *p_TutorialImageLoadList;
    v46 = (unsigned int)*(_QWORD *)&images->max_length;
    v47 = 0LL;
    v48 = (__int64)&(*p_TutorialImageLoadList)->m_Items[1];
    do
    {
      if ( v47 >= v46 )
        goto LABEL_18;
      if ( !v45 )
        goto LABEL_19;
      if ( v47 >= v45->max_length )
LABEL_18:
        sub_1BCAA44(CloseButton, v33);
      *(_DWORD *)(v48 + 4 * v47) = images->m_Items[v47 + 1];
      ++v47;
    }
    while ( (__int64)v47 < (int)v46 );
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMask((BaseDialog_o *)this, 0, 0LL);
  TutorialBigDialog__LoadImages(this, v49, v50);
  CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !CloseButton )
LABEL_19:
    sub_1BCAA3C(CloseButton, v33);
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v51);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Action_o *v26; // x23
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  __int64 v45; // x1
  UnityEngine_GameObject_o *CloseButton; // x0
  TutorialBigDialog_c *v47; // x8
  UnityEngine_Transform_o *v48; // x21
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  Il2CppObject *Component_object; // x21
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  EventDelegate_Callback_o *v59; // x22
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  EventDelegate_o *v63; // x20
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  __int64 v70; // x8
  _QWORD *v71; // x9
  __int64 klass_low; // x10
  __int64 v73; // x8
  System_Int32_array *v74; // x1
  const MethodInfo *v75; // x2
  const MethodInfo *v76; // x2

  if ( (byte_4B14E73 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, images, *(_QWORD *)&kind);
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, v9, v10);
    sub_1BCA7E0(&EventDelegate_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UITouchPress___, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDelegate__Add__, v15, v16);
    sub_1BCA7E0(&Method_TutorialBigDialog__OpenAssets_b__46_0__, v17, v18);
    sub_1BCA7E0(&Method_TutorialBigDialog__OpenAssets_b__46_1__, v19, v20);
    sub_1BCA7E0(&TutorialBigDialog_TypeInfo, v21, v22);
    byte_4B14E73 = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&kind);
  v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v23, v24, v25);
  System_Action___ctor(v26, (Il2CppObject *)this, Method_TutorialBigDialog__OpenAssets_b__46_0__, 0LL);
  this->fields.endOpenCallbackFunc = v26;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.endOpenCallbackFunc,
    (int64_t)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.endTurorialRequestFunc = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.endTurorialRequestFunc, 0LL, v33, v34, v35, v36, v37, v38);
  this->fields.closeCallbackFunc = closeFunc;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)closeFunc,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  CloseButton = this->fields.CloseButton;
  this->fields.configFlagId = 0;
  this->fields.sizeKind = kind;
  *(_OWORD *)&this->fields.flagId = xmmword_BD2DB0;
  if ( !CloseButton )
    goto LABEL_18;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0LL);
  v47 = TutorialBigDialog_TypeInfo;
  v48 = (UnityEngine_Transform_o *)CloseButton;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo, v45);
    v47 = TutorialBigDialog_TypeInfo;
  }
  if ( !v48 )
    goto LABEL_18;
  UnityEngine_Transform__set_localPosition(v48, v47->static_fields->miniCloseButtonPosition, 0LL);
  this->fields.TutorialImageLoadList = images;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.TutorialImageLoadList,
    (int64_t)images,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  CloseButton = this->fields.TouchMask;
  this->fields.isButtonEnable = 0;
  if ( !CloseButton )
    goto LABEL_18;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       CloseButton,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
  v59 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v56, v57, v58);
  EventDelegate_Callback___ctor(v59, (Il2CppObject *)this, Method_TutorialBigDialog__OpenAssets_b__46_1__, 0LL);
  v63 = (EventDelegate_o *)sub_1BCAA2C(EventDelegate_TypeInfo, v60, v61, v62);
  EventDelegate___ctor_47348668(v63, v59, 0LL);
  if ( !Component_object )
    goto LABEL_18;
  CloseButton = (UnityEngine_GameObject_o *)Component_object[2].klass;
  if ( !CloseButton )
    goto LABEL_18;
  v70 = *(_QWORD *)&CloseButton->fields.m_CachedPtr;
  v71 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++HIDWORD(CloseButton[1].klass);
  if ( !v70 )
    goto LABEL_18;
  klass_low = SLODWORD(CloseButton[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(v70 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)CloseButton,
      (Il2CppObject *)v63,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
  }
  else
  {
    v73 = v70 + 8 * klass_low;
    LODWORD(CloseButton[1].klass) = klass_low + 1;
    *(_QWORD *)(v73 + 32) = v63;
    sub_1BCA784((PartyOrganizationUtility_o *)(v73 + 32), (int64_t)v63, v64, v65, v66, v67, v68, v69);
  }
  BaseDialog__SetMask((BaseDialog_o *)this, 0, 0LL);
  TutorialBigDialog__LoadImages(this, v74, v75);
  CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !CloseButton )
LABEL_18:
    sub_1BCAA3C(CloseButton, v45);
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v76);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x1
  UnityEngine_GameObject_o *CloseButton; // x0
  TutorialBigDialog_c *v33; // x8
  UnityEngine_Transform_o *v34; // x21
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  System_String_array *v41; // x1
  const MethodInfo *v42; // x2
  const MethodInfo *v43; // x2

  if ( (byte_4B14E74 & 1) == 0 )
  {
    sub_1BCA7E0(&TutorialBigDialog_TypeInfo, images, *(_QWORD *)&configId);
    byte_4B14E74 = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&configId);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.endOpenCallbackFunc,
    (int64_t)endOpenFunc,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.endTurorialRequestFunc,
    (int64_t)endTurorialRequestFunc,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.closeCallbackFunc = closeFunc;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)closeFunc,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  CloseButton = this->fields.CloseButton;
  this->fields.configFlagId = configId;
  *(_OWORD *)&this->fields.flagId = xmmword_BD2DB0;
  this->fields.sizeKind = 1;
  if ( !CloseButton )
    goto LABEL_11;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0LL);
  v33 = TutorialBigDialog_TypeInfo;
  v34 = (UnityEngine_Transform_o *)CloseButton;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo, v31);
    v33 = TutorialBigDialog_TypeInfo;
  }
  if ( !v34
    || (UnityEngine_Transform__set_localPosition(v34, v33->static_fields->baseCloseButtonPosition, 0LL),
        this->fields.assetsImageLoadList = images,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.assetsImageLoadList,
          (int64_t)images,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40),
        this->fields.isButtonEnable = 0,
        BaseDialog__SetMask((BaseDialog_o *)this, 0, 0LL),
        TutorialBigDialog__LoadImages_38056520(this, v41, v42),
        (CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_11:
    sub_1BCAA3C(CloseButton, v31);
  }
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v43);
}


void __fastcall TutorialBigDialog__OpenWindow(TutorialBigDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_4B14E7F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_TutorialBigDialog_EndOpen__, v6, v7);
    byte_4B14E7F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v9);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x1
  UnityEngine_GameObject_o *CloseButton; // x0
  TutorialBigDialog_c *v31; // x8
  UnityEngine_Transform_o *v32; // x21
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_String_array *v39; // x1
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x2

  if ( (byte_4B14E72 & 1) == 0 )
  {
    sub_1BCA7E0(&TutorialBigDialog_TypeInfo, images, closeFunc);
    byte_4B14E72 = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, (const MethodInfo *)closeFunc);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.endOpenCallbackFunc,
    (int64_t)endOpenFunc,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.endTurorialRequestFunc,
    (int64_t)endTurorialRequestFunc,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.closeCallbackFunc = closeFunc;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)closeFunc,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  CloseButton = this->fields.CloseButton;
  this->fields.configFlagId = 0;
  *(_OWORD *)&this->fields.flagId = xmmword_BD2DB0;
  this->fields.sizeKind = 1;
  if ( !CloseButton )
    goto LABEL_11;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0LL);
  v31 = TutorialBigDialog_TypeInfo;
  v32 = (UnityEngine_Transform_o *)CloseButton;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo, v29);
    v31 = TutorialBigDialog_TypeInfo;
  }
  if ( !v32
    || (UnityEngine_Transform__set_localPosition(v32, v31->static_fields->baseCloseButtonPosition, 0LL),
        this->fields.assetsImageLoadList = images,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.assetsImageLoadList,
          (int64_t)images,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38),
        this->fields.isButtonEnable = 0,
        BaseDialog__SetMask((BaseDialog_o *)this, 0, 0LL),
        TutorialBigDialog__LoadImages_38056520(this, v39, v40),
        (CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_11:
    sub_1BCAA3C(CloseButton, v29);
  }
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v41);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialBigDialog__Open_38054764(
        TutorialBigDialog_o *this,
        TutorialFlag_ImageId_array *images,
        int32_t flagId,
        System_Action_o *closeFunc,
        System_Action_o *endOpenFunc,
        System_Action_o *endTurorialRequestFunc,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 v33; // x1
  UnityEngine_GameObject_o *CloseButton; // x0
  TutorialBigDialog_c *v35; // x8
  UnityEngine_Transform_o *v36; // x21
  struct System_Int32_array *v37; // x0
  struct System_Int32_array **p_TutorialImageLoadList; // x21
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct System_Int32_array *v45; // x9
  unsigned __int64 v46; // x10
  unsigned __int64 v47; // x8
  __int64 v48; // x13
  System_Int32_array *v49; // x1
  const MethodInfo *v50; // x2
  const MethodInfo *v51; // x2

  if ( (byte_4B14E6F & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, images, *(_QWORD *)&flagId);
    sub_1BCA7E0(&TutorialBigDialog_TypeInfo, v13, v14);
    byte_4B14E6F = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&flagId);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.endOpenCallbackFunc,
    (int64_t)endOpenFunc,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.endTurorialRequestFunc,
    (int64_t)endTurorialRequestFunc,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.closeCallbackFunc = closeFunc;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)closeFunc,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  CloseButton = this->fields.CloseButton;
  this->fields.flagId = -1;
  this->fields.localFlagId = flagId;
  *(_QWORD *)&this->fields.eventFlagId = 0xFFFFFFFFLL;
  this->fields.configFlagId = 0;
  this->fields.sizeKind = 1;
  if ( !CloseButton )
    goto LABEL_19;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0LL);
  v35 = TutorialBigDialog_TypeInfo;
  v36 = (UnityEngine_Transform_o *)CloseButton;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo, v33);
    v35 = TutorialBigDialog_TypeInfo;
  }
  if ( !v36 )
    goto LABEL_19;
  UnityEngine_Transform__set_localPosition(v36, v35->static_fields->baseCloseButtonPosition, 0LL);
  if ( !images )
    goto LABEL_19;
  v37 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, images->max_length);
  this->fields.TutorialImageLoadList = v37;
  p_TutorialImageLoadList = &this->fields.TutorialImageLoadList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.TutorialImageLoadList,
    (int64_t)v37,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  if ( (int)*(_QWORD *)&images->max_length >= 1 )
  {
    v45 = *p_TutorialImageLoadList;
    v46 = (unsigned int)*(_QWORD *)&images->max_length;
    v47 = 0LL;
    v48 = (__int64)&(*p_TutorialImageLoadList)->m_Items[1];
    do
    {
      if ( v47 >= v46 )
        goto LABEL_18;
      if ( !v45 )
        goto LABEL_19;
      if ( v47 >= v45->max_length )
LABEL_18:
        sub_1BCAA44(CloseButton, v33);
      *(_DWORD *)(v48 + 4 * v47) = images->m_Items[v47 + 1];
      ++v47;
    }
    while ( (__int64)v47 < (int)v46 );
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMask((BaseDialog_o *)this, 0, 0LL);
  TutorialBigDialog__LoadImages(this, v49, v50);
  CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !CloseButton )
LABEL_19:
    sub_1BCAA3C(CloseButton, v33);
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v51);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialBigDialog__Open_38055260(
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x1
  UnityEngine_GameObject_o *CloseButton; // x0
  TutorialBigDialog_c *v36; // x8
  UnityEngine_Transform_o *v37; // x21
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_Int32_array *v44; // x1
  const MethodInfo *v45; // x2
  const MethodInfo *v46; // x2

  if ( (byte_4B14E70 & 1) == 0 )
  {
    sub_1BCA7E0(&TutorialBigDialog_TypeInfo, images, *(_QWORD *)&flagId);
    byte_4B14E70 = 1;
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.endOpenCallbackFunc,
    (int64_t)endOpenFunc,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.endTurorialRequestFunc,
    (int64_t)endTurorialRequestFunc,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.closeCallbackFunc = closeFunc;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)closeFunc,
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
    goto LABEL_12;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0LL);
  v36 = TutorialBigDialog_TypeInfo;
  v37 = (UnityEngine_Transform_o *)CloseButton;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo, v34);
    v36 = TutorialBigDialog_TypeInfo;
  }
  if ( !v37
    || (UnityEngine_Transform__set_localPosition(v37, v36->static_fields->baseCloseButtonPosition, 0LL),
        this->fields.TutorialImageLoadList = images,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.TutorialImageLoadList,
          (int64_t)images,
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
LABEL_12:
    sub_1BCAA3C(CloseButton, v34);
  }
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v46);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialBigDialog__Open_38055652(
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
  __int64 v16; // x2
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x1
  UnityEngine_GameObject_o *CloseButton; // x0
  TutorialBigDialog_c *v37; // x8
  UnityEngine_Transform_o *v38; // x21
  struct System_Int32_array *v39; // x0
  struct System_Int32_array **p_TutorialImageLoadList; // x21
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct System_Int32_array *v47; // x9
  unsigned __int64 v48; // x10
  unsigned __int64 v49; // x8
  __int64 v50; // x13
  System_Int32_array *v51; // x1
  const MethodInfo *v52; // x2
  const MethodInfo *v53; // x2

  if ( (byte_4B14E71 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, images, *(_QWORD *)&flagId);
    sub_1BCA7E0(&TutorialBigDialog_TypeInfo, v15, v16);
    byte_4B14E71 = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&flagId);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.endOpenCallbackFunc,
    (int64_t)endOpenFunc,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.endTurorialRequestFunc,
    (int64_t)endTurorialRequestFunc,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields.closeCallbackFunc = closeFunc;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)closeFunc,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  CloseButton = this->fields.CloseButton;
  *(_QWORD *)&this->fields.flagId = -1LL;
  this->fields.eventFlagId = flagId;
  this->fields.eventId = eventId;
  this->fields.configFlagId = 0;
  this->fields.sizeKind = 1;
  if ( !CloseButton )
    goto LABEL_19;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0LL);
  v37 = TutorialBigDialog_TypeInfo;
  v38 = (UnityEngine_Transform_o *)CloseButton;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo, v35);
    v37 = TutorialBigDialog_TypeInfo;
  }
  if ( !v38 )
    goto LABEL_19;
  UnityEngine_Transform__set_localPosition(v38, v37->static_fields->baseCloseButtonPosition, 0LL);
  if ( !images )
    goto LABEL_19;
  v39 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, images->max_length);
  this->fields.TutorialImageLoadList = v39;
  p_TutorialImageLoadList = &this->fields.TutorialImageLoadList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.TutorialImageLoadList,
    (int64_t)v39,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  if ( (int)*(_QWORD *)&images->max_length >= 1 )
  {
    v47 = *p_TutorialImageLoadList;
    v48 = (unsigned int)*(_QWORD *)&images->max_length;
    v49 = 0LL;
    v50 = (__int64)&(*p_TutorialImageLoadList)->m_Items[1];
    do
    {
      if ( v49 >= v48 )
        goto LABEL_18;
      if ( !v47 )
        goto LABEL_19;
      if ( v49 >= v47->max_length )
LABEL_18:
        sub_1BCAA44(CloseButton, v35);
      *(_DWORD *)(v50 + 4 * v49) = images->m_Items[v49 + 1];
      ++v49;
    }
    while ( (__int64)v49 < (int)v48 );
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMask((BaseDialog_o *)this, 0, 0LL);
  TutorialBigDialog__LoadImages(this, v51, v52);
  CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !CloseButton )
LABEL_19:
    sub_1BCAA3C(CloseButton, v35);
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v53);
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
    sub_1BCAA3C(TouchMask, isDisp);
  }
  UnityEngine_GameObject__SetActive(TouchMask, isDisp, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialBigDialog__UpdateButtons(TutorialBigDialog_o *this, bool isDisp, const MethodInfo *method)
{
  TutorialBigDialog_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  struct System_Collections_Generic_List_GameObject__o *ImagePageList; // x8
  UILabel_o *basePanel; // x20
  UILabel_o *v17; // x19

  v4 = this;
  if ( (byte_4B14E81 & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidBackKeyManager_TypeInfo, isDisp, method);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____76859144, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_13610/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, v11, v12);
    this = (TutorialBigDialog_o *)sub_1BCA7E0(&StringLiteral_13611/*"TUTORIAL_IMAGE_DIALOG_PREV"*/, v13, v14);
    byte_4B14E81 = 1;
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
                                    (const MethodInfo_2F0A220 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____76859144);
    if ( !this )
      goto LABEL_34;
    if ( !LODWORD(this->fields.m_CancellationTokenSource) )
LABEL_35:
      sub_1BCAA44(this, isDisp);
    basePanel = (UILabel_o *)this->fields.basePanel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, isDisp);
    this = (TutorialBigDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13610/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, 0LL);
    if ( !basePanel )
LABEL_34:
      sub_1BCAA3C(this, isDisp);
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
                                  (const MethodInfo_2F0A220 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____76859144);
  if ( !this )
    goto LABEL_34;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_35;
  v17 = (UILabel_o *)this->fields.basePanel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, isDisp);
  this = (TutorialBigDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13611/*"TUTORIAL_IMAGE_DIALOG_PREV"*/, 0LL);
  if ( !v17 )
    goto LABEL_34;
  UILabel__set_text(v17, (System_String_o *)this, 0LL);
LABEL_33:
  AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialBigDialog__UpdatePage(TutorialBigDialog_o *this, int32_t dispIndex, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  long double v8; // q8
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  int32_t CurrentIndex; // w26
  struct UITexture_o **p_FadeInTarget; // x20
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x1
  const MethodInfo *v30; // x2
  System_Collections_Generic_List_object__o *ImagePageList; // x0
  int size; // w8
  int v33; // w27
  int32_t v34; // w23
  UnityEngine_GameObject_o *v35; // x24
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  long double v42; // q0
  System_Collections_Generic_List_object__o *v43; // x25
  System_Collections_Generic_List_object__c *klass; // x8
  bool v45; // w1
  __int64 v46; // x1
  UnityEngine_GameObject_o *gameObject; // x21
  TutorialBigDialog_c *v48; // x8
  UnityEngine_GameObject_o *v49; // x0
  UITweener_o *v50; // x20
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  EventDelegate_Callback_o *v54; // x21

  if ( (byte_4B14E80 & 1) == 0 )
  {
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, *(_QWORD *)&dispIndex, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UITexture___, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v15, v16);
    sub_1BCA7E0(&Method_TutorialBigDialog__UpdatePage_b__61_0__, v17, v18);
    sub_1BCA7E0(&TutorialBigDialog_TypeInfo, v19, v20);
    byte_4B14E80 = 1;
  }
  CurrentIndex = this->fields.CurrentIndex;
  this->fields.FadeInTarget = 0LL;
  p_FadeInTarget = &this->fields.FadeInTarget;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.FadeInTarget, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  this->fields.FadeOutTarget = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.FadeOutTarget, 0LL, v23, v24, v25, v26, v27, v28);
  ImagePageList = (System_Collections_Generic_List_object__o *)this->fields.ImagePageList;
  if ( !ImagePageList )
    goto LABEL_29;
  size = ImagePageList->fields._size;
  v33 = size - 1;
  if ( size >= 1 )
  {
    LODWORD(v8) = 1000593162;
    v34 = 0;
    while ( 1 )
    {
      ImagePageList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                     ImagePageList,
                                                                     v34,
                                                                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !ImagePageList )
        goto LABEL_29;
      v35 = (UnityEngine_GameObject_o *)ImagePageList;
      ImagePageList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                     (UnityEngine_GameObject_o *)ImagePageList,
                                                                     (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
      v43 = ImagePageList;
      if ( dispIndex == v34 )
      {
        if ( CurrentIndex == dispIndex )
        {
          if ( !ImagePageList )
            goto LABEL_29;
          klass = ImagePageList->klass;
          LODWORD(v42) = 1.0;
        }
        else
        {
          *p_FadeInTarget = (struct UITexture_o *)ImagePageList;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.FadeInTarget,
            (int64_t)ImagePageList,
            v36,
            v37,
            v38,
            v39,
            v40,
            v41);
          if ( !v43 )
            goto LABEL_29;
          klass = v43->klass;
          ImagePageList = v43;
          v42 = v8;
        }
        ((void (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppMethodPointer, long double))klass->vtable._8_unknown.method)(
          ImagePageList,
          klass->vtable._9_unknown.methodPtr,
          v42);
      }
      else
      {
        v45 = 0;
        if ( v34 != this->fields.CurrentIndex || CurrentIndex == dispIndex )
          goto LABEL_18;
        this->fields.FadeOutTarget = (struct UITexture_o *)ImagePageList;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.FadeOutTarget,
          (int64_t)ImagePageList,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41);
      }
      v45 = 1;
LABEL_18:
      UnityEngine_GameObject__SetActive(v35, v45, 0LL);
      if ( v33 == v34 )
        break;
      ImagePageList = (System_Collections_Generic_List_object__o *)this->fields.ImagePageList;
      ++v34;
      if ( !ImagePageList )
        goto LABEL_29;
    }
  }
  this->fields.CurrentIndex = dispIndex;
  if ( CurrentIndex == dispIndex )
  {
    TutorialBigDialog__UpdateButtons(this, 1, v30);
    return;
  }
  ImagePageList = (System_Collections_Generic_List_object__o *)this->fields.FadeOutTarget;
  this->fields.IsFading = 1;
  if ( !ImagePageList )
    goto LABEL_29;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ImagePageList, 0LL);
  v48 = TutorialBigDialog_TypeInfo;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo, v46);
    v48 = TutorialBigDialog_TypeInfo;
  }
  TweenAlpha__Begin(gameObject, v48->static_fields->FADE_TIME, 0.0, 0LL);
  ImagePageList = (System_Collections_Generic_List_object__o *)*p_FadeInTarget;
  if ( !*p_FadeInTarget
    || (v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ImagePageList, 0LL),
        v50 = (UITweener_o *)TweenAlpha__Begin(v49, TutorialBigDialog_TypeInfo->static_fields->FADE_TIME, 1.0, 0LL),
        v54 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v51, v52, v53),
        EventDelegate_Callback___ctor(v54, (Il2CppObject *)this, Method_TutorialBigDialog__UpdatePage_b__61_0__, 0LL),
        !v50) )
  {
LABEL_29:
    sub_1BCAA3C(ImagePageList, v29);
  }
  UITweener__SetOnFinished(v50, v54, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall TutorialBigDialog__WaitPurchase(
        TutorialBigDialog_o *this,
        int32_t CurrentIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B14E7D & 1) == 0 )
  {
    sub_1BCA7E0(&TutorialBigDialog__WaitPurchase_d__58_TypeInfo, *(_QWORD *)&CurrentIndex, method);
    byte_4B14E7D = 1;
  }
  v6 = sub_1BCAA2C(TutorialBigDialog__WaitPurchase_d__58_TypeInfo, *(_QWORD *)&CurrentIndex, method, v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)this, v7, v8, v9, v10, v11, v12);
  *(_DWORD *)(v6 + 40) = CurrentIndex;
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall TutorialBigDialog___LoadStartAssets_b__54_0(
        TutorialBigDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  TutorialBigDialog_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x21
  const MethodInfo *v14; // x3
  struct System_String_array *assetsImageLoadList; // x8
  int v16; // w9
  Il2CppObject *Object_object__49237568; // x0
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2

  v4 = this;
  if ( (byte_4B14E8D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, data, method);
    sub_1BCA7E0(&Method_AssetData_GetObject_Texture2D____76836720, v5, v6);
    sub_1BCA7E0(&Method_TutorialBigDialog__LoadStartAssets_b__54_1__, v7, v8);
    this = (TutorialBigDialog_o *)sub_1BCA7E0(&StringLiteral_16424/*"_L_"*/, v9, v10);
    byte_4B14E8D = 1;
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
                                  (System_String_o *)StringLiteral_16424/*"_L_"*/,
                                  0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, data, v11, v12);
    System_Action___ctor(v13, (Il2CppObject *)v4, Method_TutorialBigDialog__LoadStartAssets_b__54_1__, 0LL);
    TutorialBigDialog__AddScrollImg(v4, data, v13, v14);
    return;
  }
  assetsImageLoadList = v4->fields.assetsImageLoadList;
  if ( !assetsImageLoadList )
LABEL_12:
    sub_1BCAA3C(this, data);
  v16 = v4->fields._loadIndex + 1;
  if ( v16 >= assetsImageLoadList->max_length )
LABEL_13:
    sub_1BCAA44(this, data);
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              data,
                              assetsImageLoadList->m_Items[v16],
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_Texture2D____76836720);
  TutorialBigDialog__AddImg(v4, (UnityEngine_Texture2D_o *)Object_object__49237568, v18);
  TutorialBigDialog__AfterLoad(v4, 2, v19);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  const MethodInfo *v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x21
  const MethodInfo *v14; // x3
  struct System_Int32_array *TutorialImageLoadList; // x8
  __int64 loadIndex; // x9
  System_String_o *TuorialImageName; // x0
  Il2CppObject *Object_object__49237568; // x0
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2

  v4 = this;
  if ( (byte_4B14E8C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, data, method);
    sub_1BCA7E0(&Method_AssetData_GetObject_Texture2D____76836720, v5, v6);
    sub_1BCA7E0(&Method_TutorialBigDialog__LoadStart_b__53_1__, v7, v8);
    this = (TutorialBigDialog_o *)sub_1BCA7E0(&StringLiteral_16424/*"_L_"*/, v9, v10);
    byte_4B14E8C = 1;
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
                                  (System_String_o *)StringLiteral_16424/*"_L_"*/,
                                  0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, data, v11, v12);
    System_Action___ctor(v13, (Il2CppObject *)v4, Method_TutorialBigDialog__LoadStart_b__53_1__, 0LL);
    TutorialBigDialog__AddScrollImg(v4, data, v13, v14);
    return;
  }
  TutorialImageLoadList = v4->fields.TutorialImageLoadList;
  if ( !TutorialImageLoadList )
LABEL_12:
    sub_1BCAA3C(this, data);
  loadIndex = v4->fields._loadIndex;
  if ( (unsigned int)loadIndex >= TutorialImageLoadList->max_length )
LABEL_13:
    sub_1BCAA44(this, data);
  TuorialImageName = TutorialBigDialog__GetTuorialImageName(this, TutorialImageLoadList->m_Items[loadIndex + 1], v11);
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              data,
                              TuorialImageName,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_Texture2D____76836720);
  TutorialBigDialog__AddImg(v4, (UnityEngine_Texture2D_o *)Object_object__49237568, v19);
  TutorialBigDialog__AfterLoad(v4, 1, v20);
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
    sub_1BCAA3C(FadeOutTarget, v3);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)FadeOutTarget, 0, 0LL);
  this->fields.IsFading = 0;
  TutorialBigDialog__UpdateButtons(this, 1, v5);
}


void __fastcall TutorialBigDialog__refreshCurrent(TutorialBigDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_object__o *ImagePageList; // x0
  int32_t CurrentIndex; // w1
  __int64 v12; // x1
  UnityEngine_Object_o *Component_object; // x19

  if ( (byte_4B14E82 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TutorialImageLong___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    byte_4B14E82 = 1;
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
                                                                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !ImagePageList )
      goto LABEL_13;
    Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)ImagePageList,
                                                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TutorialImageLong___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
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
      sub_1BCAA3C(ImagePageList, method);
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
  __int64 v3; // x3
  TutorialBigDialog__WaitPurchase_d__58_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t _1__state; // w8
  TutorialBigDialog___c_c *v14; // x0
  System_Func_bool__o *_9__58_0; // x20
  Il2CppObject *v16; // x21
  struct TutorialBigDialog___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  UnityEngine_WaitUntil_o *v24; // x21
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  bool result; // w0
  TutorialBigDialog_o *_4__this; // x20

  v4 = this;
  if ( (byte_4B14E91 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Func_bool__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_TutorialBigDialog___c__WaitPurchase_b__58_0__, v5, v6);
    sub_1BCA7E0(&TutorialBigDialog___c_TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_WaitUntil_TypeInfo, v9, v10);
    this = (TutorialBigDialog__WaitPurchase_d__58_o *)sub_1BCA7E0(&StringLiteral_10137/*"OpenWindow"*/, v11, v12);
    byte_4B14E91 = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v4->fields.__4__this;
    v4->fields.__1__state = -1;
    if ( !_4__this )
      sub_1BCAA3C(this, method);
    TutorialBigDialog__UpdatePage(_4__this, v4->fields.CurrentIndex, v2);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)_4__this,
      (System_String_o *)StringLiteral_10137/*"OpenWindow"*/,
      0.3,
      0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  v14 = TutorialBigDialog___c_TypeInfo;
  if ( !TutorialBigDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog___c_TypeInfo, method);
    v14 = TutorialBigDialog___c_TypeInfo;
  }
  _9__58_0 = v14->static_fields->__9__58_0;
  if ( !_9__58_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14, method);
      v14 = TutorialBigDialog___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v14->static_fields->__9;
    _9__58_0 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, method, v2, v3);
    System_Func_bool____ctor(_9__58_0, v16, Method_TutorialBigDialog___c__WaitPurchase_b__58_0__, 0LL);
    static_fields = TutorialBigDialog___c_TypeInfo->static_fields;
    static_fields->__9__58_0 = _9__58_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__58_0,
      (int64_t)_9__58_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  v24 = (UnityEngine_WaitUntil_o *)sub_1BCAA2C(UnityEngine_WaitUntil_TypeInfo, method, v2, v3);
  UnityEngine_WaitUntil___ctor(v24, _9__58_0, 0LL);
  v4->fields.__2__current = (Il2CppObject *)v24;
  p__2__current = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
  sub_1BCA784(p__2__current, (int64_t)v24, v26, v27, v28, v29, v30, v31);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_TutorialBigDialog__WaitPurchase_d__58_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B14E8E & 1) == 0 )
  {
    sub_1BCA7E0(&TutorialBigDialog___c_TypeInfo, v1, v2);
    byte_4B14E8E = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(TutorialBigDialog___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  TutorialBigDialog___c_TypeInfo->static_fields->__9 = (struct TutorialBigDialog___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)TutorialBigDialog___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall TutorialBigDialog___c___ctor(TutorialBigDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall TutorialBigDialog___c___WaitPurchase_b__58_0(TutorialBigDialog___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PurchaseBehaviour_c *v3; // x0

  if ( (byte_4B14E8F & 1) == 0 )
  {
    sub_1BCA7E0(&PurchaseBehaviour_TypeInfo, method, v2);
    byte_4B14E8F = 1;
  }
  v3 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, method);
    v3 = PurchaseBehaviour_TypeInfo;
  }
  return !v3->static_fields->isOpenPurchaseDialogEvent;
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  AssetData_o *v8; // x20
  TutorialBigDialog___c__DisplayClass56_0_o *v9; // x19
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  struct TutorialBigDialog_o *_4__this; // x8
  UnityEngine_Shader_o *v21; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  UnityEngine_Material_o *v25; // x21
  struct TutorialImageLong_o *comp; // x8
  const MethodInfo *v27; // x2
  struct TutorialBigDialog_o *v28; // x23
  struct TutorialBigDialog_o *v29; // x8
  Il2CppObject *Object_object__49237568; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct TutorialBigDialog_o *v37; // x8
  struct TutorialBigDialog_o *v38; // x8
  _QWORD *v39; // x9
  __int64 comp_low; // x10
  TutorialBigDialog_c **v41; // x8

  v8 = aData;
  v9 = this;
  if ( (byte_4B14E90 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_Texture2D____76836720, aData, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v10, v11);
    sub_1BCA7E0(&UnityEngine_Material_TypeInfo, v12, v13);
    sub_1BCA7E0(&TutorialBigDialog_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_5048/*"Custom/SpriteWithMask"*/, v16, v17);
    this = (TutorialBigDialog___c__DisplayClass56_0_o *)sub_1BCA7E0(&StringLiteral_16436/*"_MaskTex"*/, v18, v19);
    byte_4B14E90 = 1;
  }
  _4__this = v9->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  _4__this->fields.baseTexAssetData = v8;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&_4__this->fields.baseTexAssetData,
    (int64_t)v8,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v21 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5048/*"Custom/SpriteWithMask"*/, 0LL);
  v25 = (UnityEngine_Material_o *)sub_1BCAA2C(UnityEngine_Material_TypeInfo, v22, v23, v24);
  UnityEngine_Material___ctor(v25, v21, 0LL);
  comp = v9->fields.comp;
  if ( !comp )
    goto LABEL_20;
  this = (TutorialBigDialog___c__DisplayClass56_0_o *)comp->fields.BaseImage;
  if ( !this )
    goto LABEL_20;
  ((void (__fastcall *)(TutorialBigDialog___c__DisplayClass56_0_o *, UnityEngine_Material_o *, Il2CppMethodPointer))this->klass[1].vtable._2_GetHashCode.method)(
    this,
    v25,
    this->klass[1].vtable._3_ToString.methodPtr);
  this = (TutorialBigDialog___c__DisplayClass56_0_o *)TutorialBigDialog_TypeInfo;
  v28 = v9->fields.__4__this;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo, aData);
  if ( !v28 )
    goto LABEL_20;
  this = (TutorialBigDialog___c__DisplayClass56_0_o *)TutorialBigDialog__GetTuorialImageName(
                                                        (TutorialBigDialog_o *)this,
                                                        TutorialBigDialog_TypeInfo->static_fields->baseImgNo,
                                                        v27);
  if ( !v8 )
    goto LABEL_20;
  this = (TutorialBigDialog___c__DisplayClass56_0_o *)AssetData__GetObject_object__49237568(
                                                        v8,
                                                        (System_String_o *)this,
                                                        (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_Texture2D____76836720);
  if ( !v25 )
    goto LABEL_20;
  UnityEngine_Material__set_mainTexture(v25, (UnityEngine_Texture_o *)this, 0LL);
  v29 = v9->fields.__4__this;
  if ( !v29 )
    goto LABEL_20;
  this = (TutorialBigDialog___c__DisplayClass56_0_o *)v29->fields.alphaTexAssetData;
  if ( !this )
    goto LABEL_20;
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              (AssetData_o *)this,
                              TutorialBigDialog_TypeInfo->static_fields->alphaImgName,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_Texture2D____76836720);
  UnityEngine_Material__SetTexture(
    v25,
    (System_String_o *)StringLiteral_16436/*"_MaskTex"*/,
    (UnityEngine_Texture_o *)Object_object__49237568,
    0LL);
  v37 = v9->fields.__4__this;
  if ( !v37
    || (this = (TutorialBigDialog___c__DisplayClass56_0_o *)v37->fields.ImagePageList) == 0LL
    || (aData = (AssetData_o *)v9->fields.obj,
        v38 = this->fields.__4__this,
        v39 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++HIDWORD(this->fields.comp),
        !v38) )
  {
LABEL_20:
    sub_1BCAA3C(this, aData);
  }
  comp_low = SLODWORD(this->fields.comp);
  if ( (unsigned int)comp_low >= LODWORD(v38->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)aData,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
  }
  else
  {
    v41 = &v38->klass + comp_low;
    LODWORD(this->fields.comp) = comp_low + 1;
    v41[4] = (TutorialBigDialog_c *)aData;
    sub_1BCA784((PartyOrganizationUtility_o *)(v41 + 4), (int64_t)aData, v31, v32, v33, v34, v35, v36);
  }
  ActionExtensions__Call(v9->fields.callback, 0LL);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct TutorialBigDialog_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(this, data);
  _4__this->fields.alphaTexAssetData = data;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&_4__this->fields.alphaTexAssetData,
    (int64_t)data,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ActionExtensions__Call(this->fields.callback, 0LL);
}