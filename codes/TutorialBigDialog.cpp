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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct TutorialBigDialog_StaticFields *static_fields; // x0
  int64_t v13; // x1
  int64_t v14; // x1
  struct TutorialBigDialog_StaticFields *v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x1
  struct TutorialBigDialog_StaticFields *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x1
  struct TutorialBigDialog_StaticFields *v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  TutorialBigDialog_c *v38; // x8
  struct TutorialBigDialog_StaticFields *v39; // x9
  struct TutorialBigDialog_StaticFields *v40; // x8

  if ( (byte_4BFC3B5 & 1) == 0 )
  {
    sub_1C2E12C(&TutorialBigDialog_TypeInfo, v1);
    sub_1C2E12C(&StringLiteral_14868/*"Tutorial/tutorial_alpha"*/, v8);
    sub_1C2E12C(&StringLiteral_18467/*"combine_tutorial_alpha"*/, v9);
    sub_1C2E12C(&StringLiteral_14866/*"Tutorial/combine_tutorial_alpha"*/, v10);
    sub_1C2E12C(&StringLiteral_24559/*"tutorial_alpha"*/, v11);
    byte_4BFC3B5 = 1;
  }
  static_fields = TutorialBigDialog_TypeInfo->static_fields;
  static_fields->FADE_TIME = 0.3;
  v13 = StringLiteral_14868/*"Tutorial/tutorial_alpha"*/;
  static_fields->alphaImgPath = (struct System_String_o *)StringLiteral_14868/*"Tutorial/tutorial_alpha"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&static_fields->alphaImgPath, v13, v2, v3, v4, v5, v6, v7);
  v14 = StringLiteral_24559/*"tutorial_alpha"*/;
  v15 = TutorialBigDialog_TypeInfo->static_fields;
  v15->alphaImgName = (struct System_String_o *)StringLiteral_24559/*"tutorial_alpha"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v15->alphaImgName, v14, v16, v17, v18, v19, v20, v21);
  v22 = StringLiteral_14866/*"Tutorial/combine_tutorial_alpha"*/;
  v23 = TutorialBigDialog_TypeInfo->static_fields;
  v23->alphaMiniImgPath = (struct System_String_o *)StringLiteral_14866/*"Tutorial/combine_tutorial_alpha"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v23->alphaMiniImgPath, v22, v24, v25, v26, v27, v28, v29);
  v30 = StringLiteral_18467/*"combine_tutorial_alpha"*/;
  v31 = TutorialBigDialog_TypeInfo->static_fields;
  v31->alphaMiniImgName = (struct System_String_o *)StringLiteral_18467/*"combine_tutorial_alpha"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v31->alphaMiniImgName, v30, v32, v33, v34, v35, v36, v37);
  v38 = TutorialBigDialog_TypeInfo;
  v39 = TutorialBigDialog_TypeInfo->static_fields;
  v39->baseCloseButtonPosition.fields.z = 0.0;
  *(_QWORD *)&v39->baseImgNo = 0x38400000006LL;
  *(_QWORD *)&v39->baseCloseButtonPosition.fields.x = 0x4382800043F28000LL;
  v40 = v38->static_fields;
  *(_QWORD *)&v40->miniCloseButtonPosition.fields.x = 0x4362000043BD0000LL;
  v40->miniCloseButtonPosition.fields.z = 0.0;
}


void __fastcall TutorialBigDialog___ctor(TutorialBigDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4BFC3B4 & 1) == 0 )
  {
    sub_1C2E12C(&BaseDialog_TypeInfo, method);
    byte_4BFC3B4 = 1;
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
  Il2CppObject *Object_object__50017172; // x0
  UnityEngine_Transform_o *v27; // x21
  UnityEngine_Transform_o *v28; // x21
  UnityEngine_Transform_o *v29; // x21
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  __int64 v39; // x8

  if ( (byte_4BFC3A5 & 1) == 0 )
  {
    sub_1C2E12C(&Method_AssetData_GetObject_Texture2D____77757336, tex);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_UITexture___, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__Add__, v6);
    sub_1C2E12C(&UnityEngine_Material_TypeInfo, v7);
    sub_1C2E12C(&NGUITools_TypeInfo, v8);
    sub_1C2E12C(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v10);
    sub_1C2E12C(&TutorialBigDialog_TypeInfo, v11);
    sub_1C2E12C(&StringLiteral_5069/*"Custom/SpriteWithMask"*/, v12);
    sub_1C2E12C(&StringLiteral_7644/*"Image"*/, v13);
    sub_1C2E12C(&StringLiteral_16556/*"_MaskTex"*/, v14);
    byte_4BFC3A5 = 1;
  }
  TutorialImagePrefab = (Il2CppObject *)this->fields.TutorialImagePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v16 = UnityEngine_Object__Instantiate_object_(
          TutorialImagePrefab,
          (const MethodInfo_3057E94 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v17 = System_Int32__ToString((int)this + 248, 0LL);
  gameObject = (__int64)System_String__Concat_63235584((System_String_o *)StringLiteral_7644/*"Image"*/, v17, 0LL);
  if ( !v16 )
    goto LABEL_29;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v16, (System_String_o *)gameObject, 0LL);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v16,
                       (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_29;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)gameObject, 0LL);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__SetLayer((UnityEngine_GameObject_o *)v16, layer, 0LL);
  v22 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5069/*"Custom/SpriteWithMask"*/, 0LL);
  v23 = (UnityEngine_Material_o *)sub_1C2E378(UnityEngine_Material_TypeInfo);
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
  Object_object__50017172 = AssetData__GetObject_object__50017172(
                              (AssetData_o *)gameObject,
                              *(System_String_o **)((char *)&TutorialBigDialog_TypeInfo->static_fields->FADE_TIME + v25),
                              (const MethodInfo_2FB3394 *)Method_AssetData_GetObject_Texture2D____77757336);
  UnityEngine_Material__SetTexture(
    v23,
    (System_String_o *)StringLiteral_16556/*"_MaskTex"*/,
    (UnityEngine_Texture_o *)Object_object__50017172,
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
  if ( !byte_4BF7D91 )
  {
    gameObject = sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v19);
    byte_4BF7D91 = 1;
  }
  if ( !v28 )
    goto LABEL_29;
  UnityEngine_Transform__set_localPosition(v28, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v16, 0LL);
  v29 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4BF7D96 )
  {
    gameObject = sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v19);
    byte_4BF7D96 = 1;
  }
  if ( !v29
    || (UnityEngine_Transform__set_localScale(v29, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
        (gameObject = (__int64)this->fields.ImagePageList) == 0)
    || (v36 = *(_QWORD *)(gameObject + 16),
        v37 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++*(_DWORD *)(gameObject + 28),
        !v36) )
  {
LABEL_29:
    sub_1C2E388(gameObject, v19);
  }
  v38 = *(int *)(gameObject + 24);
  if ( (unsigned int)v38 >= *(_DWORD *)(v36 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)gameObject,
      v16,
      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
  }
  else
  {
    v39 = v36 + 8 * v38;
    *(_DWORD *)(gameObject + 24) = v38 + 1;
    *(_QWORD *)(v39 + 32) = v16;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v39 + 32), (int64_t)v16, v30, v31, v32, v33, v34, v35);
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
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int v36; // w8
  __int64 v37; // x24
  unsigned int v38; // w27
  int32_t v39; // w21
  UnityEngine_Texture_o *v40; // x25
  UnityEngine_Texture_o *v41; // x19
  __int64 v42; // x20
  System_String_o **v43; // x20
  __int64 v44; // t1
  char v45; // w26
  const MethodInfo *v46; // x2
  UnityEngine_Texture_o *v47; // x23
  Il2CppObject *TutorialImageLongPrefab; // x22
  Il2CppObject *v49; // x0
  __int64 *v50; // x22
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  UnityEngine_Object_o *klass; // x24
  System_String_o *v58; // x0
  Il2CppObject *Component_object; // x0
  void **p_monitor; // x24
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  UnityEngine_GameObject_o *v67; // x26
  int32_t layer; // w27
  UnityEngine_Shader_o *v69; // x27
  UnityEngine_Material_o *v70; // x26
  UIWidget_o *v71; // x25
  UITexture_o *v72; // x25
  int v73; // w26
  int v74; // w27
  int32_t baseWidth; // w20
  int v76; // w28
  UnityEngine_Transform_o *v77; // x21
  UnityEngine_Transform_o *v78; // x21
  UnityEngine_Transform_o *v79; // x21
  __int64 v80; // x21
  const MethodInfo *v81; // x2
  TutorialBigDialog_c *v82; // x0
  System_String_o *TuorialImagePath; // x19
  Il2CppObject *object; // [xsp+8h] [xbp-78h]
  TutorialBigDialog_o *v85; // [xsp+18h] [xbp-68h]
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v88; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BFC3A6 & 1) == 0 )
  {
    sub_1C2E12C(&Method_AssetData_GetObject_Texture2D____77757336, data);
    sub_1C2E12C(&AssetManager_TypeInfo, v7);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_TutorialImageLong___, v8);
    sub_1C2E12C(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_1C2E12C(&UnityEngine_Material_TypeInfo, v10);
    sub_1C2E12C(&NGUITools_TypeInfo, v11);
    sub_1C2E12C(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v13);
    sub_1C2E12C(&TutorialBigDialog_TypeInfo, v14);
    sub_1C2E12C(&Method_TutorialBigDialog___c__DisplayClass56_0__AddScrollImg_b__0__, v15);
    sub_1C2E12C(&TutorialBigDialog___c__DisplayClass56_0_TypeInfo, v16);
    sub_1C2E12C(&StringLiteral_17033/*"alpha"*/, v17);
    sub_1C2E12C(&StringLiteral_5069/*"Custom/SpriteWithMask"*/, v18);
    sub_1C2E12C(&StringLiteral_7644/*"Image"*/, v19);
    sub_1C2E12C(&StringLiteral_16556/*"_MaskTex"*/, v20);
    byte_4BFC3A6 = 1;
  }
  v21 = sub_1C2E378(TutorialBigDialog___c__DisplayClass56_0_TypeInfo);
  TutorialBigDialog___c__DisplayClass56_0___ctor((TutorialBigDialog___c__DisplayClass56_0_o *)v21, 0LL);
  if ( !v21 )
    goto LABEL_62;
  *(_QWORD *)(v21 + 16) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v21 + 16), (int64_t)this, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v21 + 40) = callback;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v21 + 40), (int64_t)callback, v30, v31, v32, v33, v34, v35);
  if ( !data )
    goto LABEL_62;
  ObjectNameList = (__int64)AssetData__GetObjectNameList(data, 0LL);
  if ( !ObjectNameList )
    goto LABEL_62;
  v36 = *(_DWORD *)(ObjectNameList + 24);
  v37 = ObjectNameList;
  object = (Il2CppObject *)v21;
  v85 = this;
  if ( v36 < 1 )
  {
    v41 = 0LL;
    v47 = 0LL;
    v39 = 0;
  }
  else
  {
    v38 = 0;
    v39 = 0;
    v40 = 0LL;
    v41 = 0LL;
    do
    {
      if ( v38 >= v36 )
        goto LABEL_61;
      v42 = v37 + 8LL * (int)v38;
      v44 = *(_QWORD *)(v42 + 32);
      v43 = (System_String_o **)(v42 + 32);
      ObjectNameList = v44;
      if ( !v44 )
        goto LABEL_62;
      ObjectNameList = System_String__Contains(
                         (System_String_o *)ObjectNameList,
                         (System_String_o *)StringLiteral_17033/*"alpha"*/,
                         0LL);
      if ( v38 >= *(_DWORD *)(v37 + 24) )
LABEL_61:
        sub_1C2E390(ObjectNameList, v23);
      v45 = ObjectNameList;
      ObjectNameList = (__int64)AssetData__GetObject_object__50017172(
                                  data,
                                  *v43,
                                  (const MethodInfo_2FB3394 *)Method_AssetData_GetObject_Texture2D____77757336);
      v47 = (UnityEngine_Texture_o *)ObjectNameList;
      if ( (v45 & 1) == 0 )
      {
        if ( v38 >= *(_DWORD *)(v37 + 24) )
          goto LABEL_61;
        v41 = (UnityEngine_Texture_o *)ObjectNameList;
        ObjectNameList = TutorialBigDialog__GetScrollHeightWithName((TutorialBigDialog_o *)ObjectNameList, *v43, v46);
        v39 = ObjectNameList;
        v47 = v40;
      }
      v36 = *(_DWORD *)(v37 + 24);
      ++v38;
      v40 = v47;
    }
    while ( (int)v38 < v36 );
  }
  TutorialImageLongPrefab = (Il2CppObject *)v85->fields.TutorialImageLongPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v49 = UnityEngine_Object__Instantiate_object_(
          TutorialImageLongPrefab,
          (const MethodInfo_3057E94 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  object[2].klass = (Il2CppClass *)v49;
  v50 = (__int64 *)&object[2];
  sub_1C2E0D0((PartyOrganizationUtility_o *)&object[2], (int64_t)v49, v51, v52, v53, v54, v55, v56);
  klass = (UnityEngine_Object_o *)object[2].klass;
  v58 = System_Int32__ToString((int)v85 + 248, 0LL);
  ObjectNameList = (__int64)System_String__Concat_63235584((System_String_o *)StringLiteral_7644/*"Image"*/, v58, 0LL);
  if ( !klass )
    goto LABEL_62;
  UnityEngine_Object__set_name(klass, (System_String_o *)ObjectNameList, 0LL);
  ObjectNameList = *v50;
  if ( !*v50 )
    goto LABEL_62;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)ObjectNameList,
                       (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_TutorialImageLong___);
  object[1].monitor = Component_object;
  p_monitor = &object[1].monitor;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&object[1].monitor, (int64_t)Component_object, v61, v62, v63, v64, v65, v66);
  v67 = (UnityEngine_GameObject_o *)object[2].klass;
  ObjectNameList = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v85, 0LL);
  if ( !ObjectNameList )
    goto LABEL_62;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)ObjectNameList, 0LL);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__SetLayer(v67, layer, 0LL);
  v69 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5069/*"Custom/SpriteWithMask"*/, 0LL);
  v70 = (UnityEngine_Material_o *)sub_1C2E378(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v70, v69, 0LL);
  if ( !*p_monitor )
    goto LABEL_62;
  ObjectNameList = *((_QWORD *)*p_monitor + 5);
  if ( !ObjectNameList )
    goto LABEL_62;
  ObjectNameList = (*(__int64 (__fastcall **)(__int64, UnityEngine_Material_o *, _QWORD))(*(_QWORD *)ObjectNameList
                                                                                        + 712LL))(
                     ObjectNameList,
                     v70,
                     *(_QWORD *)(*(_QWORD *)ObjectNameList + 720LL));
  if ( !v70 )
    goto LABEL_62;
  UnityEngine_Material__set_mainTexture(v70, v41, 0LL);
  UnityEngine_Material__SetTexture(v70, (System_String_o *)StringLiteral_16556/*"_MaskTex"*/, v47, 0LL);
  if ( !*p_monitor )
    goto LABEL_62;
  ObjectNameList = *((_QWORD *)*p_monitor + 5);
  if ( !ObjectNameList )
    goto LABEL_62;
  UIWidget__set_height((UIWidget_o *)ObjectNameList, v39, 0LL);
  if ( !*p_monitor )
    goto LABEL_62;
  v71 = (UIWidget_o *)*((_QWORD *)*p_monitor + 5);
  ObjectNameList = (__int64)TutorialBigDialog_TypeInfo;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
  if ( !v71 )
    goto LABEL_62;
  UIWidget__set_width(v71, TutorialBigDialog_TypeInfo->static_fields->baseWidth, 0LL);
  if ( !*p_monitor )
    goto LABEL_62;
  if ( !v41 )
    goto LABEL_62;
  v72 = (UITexture_o *)*((_QWORD *)*p_monitor + 5);
  v73 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v41->klass->vtable._6_get_height.method)(
          v41,
          v41->klass->vtable._7_set_height.methodPtr);
  v74 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v41->klass->vtable._6_get_height.method)(
          v41,
          v41->klass->vtable._7_set_height.methodPtr);
  baseWidth = TutorialBigDialog_TypeInfo->static_fields->baseWidth;
  v76 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v41->klass->vtable._4_get_width.method)(
          v41,
          v41->klass->vtable._5_set_width.methodPtr);
  ObjectNameList = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v41->klass->vtable._6_get_height.method)(
                     v41,
                     v41->klass->vtable._7_set_height.methodPtr);
  if ( !v72 )
    goto LABEL_62;
  v88.fields.m_Height = (float)v39 / (float)(int)ObjectNameList;
  v88.fields.m_Width = (float)baseWidth / (float)v76;
  v88.fields.m_YMin = (float)(v73 - v39) / (float)v74;
  v88.fields.m_XMin = 0.0;
  UITexture__set_uvRect(v72, v88, 0LL);
  if ( !*p_monitor )
    goto LABEL_62;
  ObjectNameList = *((_QWORD *)*p_monitor + 6);
  if ( !ObjectNameList )
    goto LABEL_62;
  v86.fields.z = 1.0;
  v86.fields.y = (float)v39;
  v86.fields.x = (float)TutorialBigDialog_TypeInfo->static_fields->baseWidth;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)ObjectNameList, v86, 0LL);
  if ( !*p_monitor )
    goto LABEL_62;
  ObjectNameList = *((_QWORD *)*p_monitor + 6);
  if ( !ObjectNameList )
    goto LABEL_62;
  v87.fields.y = (float)-v39 * 0.5;
  v87.fields.x = 0.0;
  v87.fields.z = 0.0;
  UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)ObjectNameList, v87, 0LL);
  if ( !*p_monitor )
    goto LABEL_62;
  ObjectNameList = *((_QWORD *)*p_monitor + 7);
  if ( !ObjectNameList )
    goto LABEL_62;
  UIScrollView__ResetPosition((UIScrollView_o *)ObjectNameList, 0LL);
  ObjectNameList = *v50;
  if ( !*v50 )
    goto LABEL_62;
  ObjectNameList = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)ObjectNameList, 0LL);
  if ( !v85->fields.ImageRoot )
    goto LABEL_62;
  v77 = (UnityEngine_Transform_o *)ObjectNameList;
  ObjectNameList = (__int64)UnityEngine_GameObject__get_transform(v85->fields.ImageRoot, 0LL);
  if ( !v77 )
    goto LABEL_62;
  UnityEngine_Transform__set_parent(v77, (UnityEngine_Transform_o *)ObjectNameList, 0LL);
  ObjectNameList = *v50;
  if ( !*v50 )
    goto LABEL_62;
  ObjectNameList = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)ObjectNameList, 0LL);
  v78 = (UnityEngine_Transform_o *)ObjectNameList;
  if ( !byte_4BF7D91 )
  {
    ObjectNameList = sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v23);
    byte_4BF7D91 = 1;
  }
  if ( !v78 )
    goto LABEL_62;
  UnityEngine_Transform__set_localPosition(v78, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  ObjectNameList = *v50;
  if ( !*v50 )
    goto LABEL_62;
  ObjectNameList = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)ObjectNameList, 0LL);
  v79 = (UnityEngine_Transform_o *)ObjectNameList;
  if ( !byte_4BF7D96 )
  {
    ObjectNameList = sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v23);
    byte_4BF7D96 = 1;
  }
  if ( !v79 )
    goto LABEL_62;
  UnityEngine_Transform__set_localScale(v79, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  v80 = sub_1C2E378(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    (AssetLoader_LoadEndDataHandler_o *)v80,
    object,
    Method_TutorialBigDialog___c__DisplayClass56_0__AddScrollImg_b__0__,
    0LL);
  if ( v85->fields.baseTexLoadRequested )
  {
    if ( v80 )
    {
      (*(void (__fastcall **)(_QWORD, struct AssetData_o *, _QWORD))(v80 + 24))(
        *(_QWORD *)(v80 + 64),
        v85->fields.baseTexAssetData,
        *(_QWORD *)(v80 + 40));
      return;
    }
LABEL_62:
    sub_1C2E388(ObjectNameList, v23);
  }
  v85->fields.baseTexLoadRequested = 1;
  v82 = TutorialBigDialog_TypeInfo;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v82 = TutorialBigDialog_TypeInfo;
  }
  TuorialImagePath = TutorialBigDialog__GetTuorialImagePath(v85, v82->static_fields->baseImgNo, v81);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(TuorialImagePath, (AssetLoader_LoadEndDataHandler_o *)v80, 1, 0LL);
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
    sub_1C2E388(this, addCount);
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
  UnityEngine_MonoBehaviour__StartCoroutine_70974992((UnityEngine_MonoBehaviour_o *)this, v9, 0LL);
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
  __int64 v11; // x1
  System_Action_o *v12; // x20

  if ( (byte_4BFC3AD & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, callback);
    sub_1C2E12C(&AndroidBackKeyManager_TypeInfo, v10);
    sub_1C2E12C(&Method_TutorialBigDialog_EndClose__, v11);
    byte_4BFC3AD = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C2E0D0(
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
  v12 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_TutorialBigDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v12, 0LL);
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

  if ( (byte_4BFC3B3 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__Clear__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v6);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v7);
    byte_4BFC3B3 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ImagePageList = this->fields.ImagePageList;
  if ( ImagePageList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      (System_Collections_Generic_List_object__o *)ImagePageList,
      (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v15.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70989720((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v12 = this->fields.ImagePageList;
    if ( !v12 )
      sub_1C2E388(v10, v11);
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
    sub_1C2E388(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1C2E0D0(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
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
    sub_1C2E0D0(p_endOpenCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
    sub_1C2E388(this, imageName);
  if ( LODWORD(this->fields.m_CancellationTokenSource) <= 3 )
    sub_1C2E390(this, imageName);
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

  if ( (byte_4BFC3A2 & 1) == 0 )
  {
    sub_1C2E12C(&int_TypeInfo, *(_QWORD *)&imgId);
    sub_1C2E12C(&StringLiteral_25422/*"{0:D4}"*/, v6);
    sub_1C2E12C(&StringLiteral_24557/*"tutorial_"*/, v7);
    byte_4BFC3A2 = 1;
  }
  v11 = imgId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, method, v3, v4);
  v9 = System_String__Format((System_String_o *)StringLiteral_25422/*"{0:D4}"*/, v8, 0LL);
  return System_String__Concat_63235584((System_String_o *)StringLiteral_24557/*"tutorial_"*/, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TutorialBigDialog__GetTuorialImagePath(
        TutorialBigDialog_o *this,
        int32_t imgId,
        const MethodInfo *method)
{
  System_String_o *TuorialImageName; // x0

  if ( (byte_4BFC3A1 & 1) == 0 )
  {
    this = (TutorialBigDialog_o *)sub_1C2E12C(&StringLiteral_14865/*"Tutorial/"*/, *(_QWORD *)&imgId);
    byte_4BFC3A1 = 1;
  }
  TuorialImageName = TutorialBigDialog__GetTuorialImageName(this, imgId, method);
  return System_String__Concat_63235584((System_String_o *)StringLiteral_14865/*"Tutorial/"*/, TuorialImageName, 0LL);
}


void __fastcall TutorialBigDialog__Init(TutorialBigDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  TutorialBigDialog_c *v13; // x0
  int32_t sizeKind; // w20
  __int64 v15; // x9
  System_String_o *v16; // x20
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  TutorialBigDialog_c *v23; // x0
  System_String_o *TuorialImagePath; // x20
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct System_Int32_array *TutorialImageLoadList; // x23
  __int64 v32; // x8
  unsigned __int64 v33; // x24
  System_String_o *v34; // x21
  struct System_String_array *assetsImageLoadList; // x8
  struct System_String_array **p_assetsImageLoadList; // x20
  il2cpp_array_size_t v37; // w23
  il2cpp_array_size_t max_length; // w9
  System_String_o *v39; // x21

  if ( (byte_4BFC397 & 1) == 0 )
  {
    sub_1C2E12C(&AssetManager_TypeInfo, method);
    sub_1C2E12C(&TutorialBigDialog_TypeInfo, v3);
    byte_4BFC397 = 1;
  }
  this->fields.isButtonEnable = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_33:
    sub_1C2E388(gameObject, v5);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.IsFading = 0;
  TutorialBigDialog__DestroyImagePageList(this, v6);
  if ( this->fields.alphaTexLoadRequested )
  {
    v13 = TutorialBigDialog_TypeInfo;
    sizeKind = this->fields.sizeKind;
    if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
      v13 = TutorialBigDialog_TypeInfo;
    }
    v15 = 8LL;
    if ( sizeKind == 2 )
      v15 = 24LL;
    v16 = *(System_String_o **)((char *)&v13->static_fields->FADE_TIME + v15);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v16, 0LL);
    this->fields.alphaTexAssetData = 0LL;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.alphaTexAssetData, 0LL, v17, v18, v19, v20, v21, v22);
    this->fields.alphaTexLoadRequested = 0;
  }
  if ( this->fields.baseTexLoadRequested )
  {
    v23 = TutorialBigDialog_TypeInfo;
    if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
      v23 = TutorialBigDialog_TypeInfo;
    }
    TuorialImagePath = TutorialBigDialog__GetTuorialImagePath(this, v23->static_fields->baseImgNo, v7);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(TuorialImagePath, 0LL);
    this->fields.baseTexAssetData = 0LL;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.baseTexAssetData, 0LL, v25, v26, v27, v28, v29, v30);
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
LABEL_36:
          sub_1C2E390(gameObject, v5);
        v34 = TutorialBigDialog__GetTuorialImagePath(this, TutorialImageLoadList->m_Items[v33 + 1], v7);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetManager__releaseAssetStorage(v34, 0LL);
        LODWORD(v32) = TutorialImageLoadList->max_length;
        ++v33;
      }
      while ( (__int64)v33 < (int)v32 );
    }
    this->fields.TutorialImageLoadList = 0LL;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&this->fields.TutorialImageLoadList,
      0LL,
      (int64_t)v7,
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
    v37 = 0;
    while ( 1 )
    {
      max_length = assetsImageLoadList->max_length;
      if ( (int)v37 >= (int)max_length )
        break;
      if ( v37 >= max_length )
        goto LABEL_36;
      v39 = assetsImageLoadList->m_Items[v37];
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage(v39, 0LL);
      assetsImageLoadList = *p_assetsImageLoadList;
      v37 += 2;
      if ( !*p_assetsImageLoadList )
        goto LABEL_33;
    }
    *p_assetsImageLoadList = 0LL;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&this->fields.assetsImageLoadList,
      0LL,
      (int64_t)v7,
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
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  TutorialBigDialog_c *v24; // x0
  int32_t sizeKind; // w19
  __int64 v26; // x9
  System_String_o *v27; // x19
  AssetLoader_LoadEndDataHandler_o *v28; // x21

  if ( (byte_4BFC3A8 & 1) == 0 )
  {
    sub_1C2E12C(&AssetManager_TypeInfo, callback);
    sub_1C2E12C(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1C2E12C(&TutorialBigDialog_TypeInfo, v6);
    sub_1C2E12C(&Method_TutorialBigDialog___c__DisplayClass59_0__LoadAlpha_b__0__, v7);
    sub_1C2E12C(&TutorialBigDialog___c__DisplayClass59_0_TypeInfo, v8);
    byte_4BFC3A8 = 1;
  }
  v9 = sub_1C2E378(TutorialBigDialog___c__DisplayClass59_0_TypeInfo);
  TutorialBigDialog___c__DisplayClass59_0___ctor((TutorialBigDialog___c__DisplayClass59_0_o *)v9, 0LL);
  if ( !v9 )
    sub_1C2E388(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = callback;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)callback, v18, v19, v20, v21, v22, v23);
  this->fields.alphaTexLoadRequested = 1;
  v24 = TutorialBigDialog_TypeInfo;
  sizeKind = this->fields.sizeKind;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v24 = TutorialBigDialog_TypeInfo;
  }
  v26 = 8LL;
  if ( sizeKind == 2 )
    v26 = 24LL;
  v27 = *(System_String_o **)((char *)&v24->static_fields->FADE_TIME + v26);
  v28 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2E378(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v28,
    (Il2CppObject *)v9,
    Method_TutorialBigDialog___c__DisplayClass59_0__LoadAlpha_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
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
  System_Collections_Generic_List_object__o *v8; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  System_Action_o *v17; // x20
  const MethodInfo *v18; // x2

  if ( (byte_4BFC39F & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, images);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject___ctor__, v4);
    sub_1C2E12C(&System_Collections_Generic_List_GameObject__TypeInfo, v5);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1C2E12C(&Method_TutorialBigDialog_LoadStart__, v7);
    byte_4BFC39F = 1;
  }
  this->fields._loadIndex = 0;
  this->fields.loadByAsset = 0;
  v8 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.ImagePageList = (struct System_Collections_Generic_List_GameObject__o *)v8;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.ImagePageList, (int64_t)v8, v9, v10, v11, v12, v13, v14);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2E388(0LL, v16);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  v17 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_TutorialBigDialog_LoadStart__, 0LL);
  TutorialBigDialog__LoadAlpha(this, v17, v18);
}


void __fastcall TutorialBigDialog__LoadImages_38644020(
        TutorialBigDialog_o *this,
        System_String_array *images,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  System_Action_o *v17; // x20
  const MethodInfo *v18; // x2

  if ( (byte_4BFC3A0 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, images);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject___ctor__, v4);
    sub_1C2E12C(&System_Collections_Generic_List_GameObject__TypeInfo, v5);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1C2E12C(&Method_TutorialBigDialog_LoadStartAssets__, v7);
    byte_4BFC3A0 = 1;
  }
  this->fields._loadIndex = 0;
  this->fields.loadByAsset = 1;
  v8 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.ImagePageList = (struct System_Collections_Generic_List_GameObject__o *)v8;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.ImagePageList, (int64_t)v8, v9, v10, v11, v12, v13, v14);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2E388(0LL, v16);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  v17 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
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

  v3 = this;
  if ( (byte_4BFC3A3 & 1) == 0 )
  {
    sub_1C2E12C(&AssetManager_TypeInfo, method);
    sub_1C2E12C(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    this = (TutorialBigDialog_o *)sub_1C2E12C(&Method_TutorialBigDialog__LoadStart_b__53_0__, v5);
    byte_4BFC3A3 = 1;
  }
  TutorialImageLoadList = v3->fields.TutorialImageLoadList;
  if ( !TutorialImageLoadList )
    sub_1C2E388(this, method);
  loadIndex = v3->fields._loadIndex;
  if ( (unsigned int)loadIndex >= TutorialImageLoadList->max_length )
    sub_1C2E390(this, method);
  TuorialImagePath = TutorialBigDialog__GetTuorialImagePath(v3, TutorialImageLoadList->m_Items[loadIndex + 1], v2);
  v9 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2E378(AssetLoader_LoadEndDataHandler_TypeInfo);
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
  if ( (byte_4BFC3A4 & 1) == 0 )
  {
    sub_1C2E12C(&AssetManager_TypeInfo, method);
    sub_1C2E12C(&AssetLoader_LoadEndDataHandler_TypeInfo, v3);
    this = (TutorialBigDialog_o *)sub_1C2E12C(&Method_TutorialBigDialog__LoadStartAssets_b__54_0__, v4);
    byte_4BFC3A4 = 1;
  }
  assetsImageLoadList = v2->fields.assetsImageLoadList;
  if ( !assetsImageLoadList )
    sub_1C2E388(this, method);
  loadIndex = v2->fields._loadIndex;
  if ( (unsigned int)loadIndex >= assetsImageLoadList->max_length )
    sub_1C2E390(this, method);
  v7 = assetsImageLoadList->m_Items[loadIndex];
  v8 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2E378(AssetLoader_LoadEndDataHandler_TypeInfo);
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
  if ( (byte_4BFC3B0 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__get_Count__, method);
    this = (TutorialBigDialog_o *)sub_1C2E12C(&Method_TutorialBigDialog_OnBottomButton__, v3);
    byte_4BFC3B0 = 1;
  }
  if ( !v2->fields.IsFading )
  {
    ImagePageList = v2->fields.ImagePageList;
    if ( !ImagePageList )
      sub_1C2E388(this, method);
    if ( v2->fields.CurrentIndex == ImagePageList->fields._size - 1 )
    {
      v5 = Method_TutorialBigDialog_OnBottomButton__;
      if ( (*((_BYTE *)Method_TutorialBigDialog_OnBottomButton__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1C2E144(Method_TutorialBigDialog_OnBottomButton__);
      v6 = (System_Reflection_MethodBase_o *)sub_1C2E110(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0LL);
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

  if ( (byte_4BFC3B1 & 1) == 0 )
  {
    sub_1C2E12C(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, method);
    sub_1C2E12C(&Method_NetworkManager_getRequest_TutorialSetRequest___, v3);
    sub_1C2E12C(&NetworkManager_TypeInfo, v4);
    sub_1C2E12C(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1C2E12C(&Method_TutorialBigDialog_EndTurorialRequest__, v6);
    sub_1C2E12C(&Method_TutorialBigDialog_OnClickClose__, v7);
    sub_1C2E12C(&TutorialFlag_TypeInfo, v8);
    byte_4BFC3B1 = 1;
  }
  if ( !this->fields.IsFading && this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v9 = Method_TutorialBigDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_TutorialBigDialog_OnClickClose__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1C2E144(Method_TutorialBigDialog_OnClickClose__);
    v10 = (System_Reflection_MethodBase_o *)sub_1C2E110(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 1, 0, 0LL);
    localFlagId = this->fields.localFlagId;
    if ( localFlagId != -1 )
    {
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      TutorialFlag__Set_39035020(localFlagId, 0LL);
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
      v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2E378(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_TutorialBigDialog_EndTurorialRequest__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v14,
                         (const MethodInfo_3056BC4 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
      if ( Request_object )
      {
        TutorialSetRequest__beginRequest((TutorialSetRequest_o *)Request_object, this->fields.flagId, 0LL);
        return;
      }
LABEL_28:
      sub_1C2E388(Request_object, v16);
    }
    if ( this->fields.eventFlagId == -1 || !this->fields.eventId )
    {
      TutorialBigDialog__Close(this, this->fields.closeCallbackFunc, v11);
    }
    else
    {
      v17 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2E378(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_TutorialBigDialog_EndTurorialRequest__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v17,
                         (const MethodInfo_3056BC4 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
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
  if ( (byte_4BFC3AE & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__get_Count__, method);
    this = (TutorialBigDialog_o *)sub_1C2E12C(&Method_TutorialBigDialog_OnNextButton__, v3);
    byte_4BFC3AE = 1;
  }
  if ( !v2->fields.IsFading )
  {
    ImagePageList = v2->fields.ImagePageList;
    if ( !ImagePageList )
      sub_1C2E388(this, method);
    if ( v2->fields.CurrentIndex != ImagePageList->fields._size - 1 )
    {
      v5 = Method_TutorialBigDialog_OnNextButton__;
      if ( (*((_BYTE *)Method_TutorialBigDialog_OnNextButton__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1C2E144(Method_TutorialBigDialog_OnNextButton__);
      v6 = (System_Reflection_MethodBase_o *)sub_1C2E110(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
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
  if ( (byte_4BFC3B2 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__get_Count__, *(_QWORD *)&idx);
    this = (TutorialBigDialog_o *)sub_1C2E12C(&Method_TutorialBigDialog_OnPageChange__, v5);
    byte_4BFC3B2 = 1;
  }
  if ( (idx & 0x80000000) == 0 && v4->fields.CurrentIndex != idx )
  {
    ImagePageList = v4->fields.ImagePageList;
    if ( !ImagePageList )
      sub_1C2E388(this, *(_QWORD *)&idx);
    if ( ImagePageList->fields._size > idx )
    {
      v7 = Method_TutorialBigDialog_OnPageChange__;
      if ( (*((_BYTE *)Method_TutorialBigDialog_OnPageChange__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1C2E144(Method_TutorialBigDialog_OnPageChange__);
      v8 = (System_Reflection_MethodBase_o *)sub_1C2E110(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
    }
  }
}


void __fastcall TutorialBigDialog__OnPrevButton(TutorialBigDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4BFC3AF & 1) == 0 )
  {
    sub_1C2E12C(&Method_TutorialBigDialog_OnPrevButton__, method);
    byte_4BFC3AF = 1;
  }
  if ( !this->fields.IsFading && this->fields.CurrentIndex >= 1 )
  {
    v3 = Method_TutorialBigDialog_OnPrevButton__;
    if ( (*((_BYTE *)Method_TutorialBigDialog_OnPrevButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2E144(Method_TutorialBigDialog_OnPrevButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2E110(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x1
  UnityEngine_GameObject_o *CloseButton; // x0
  TutorialBigDialog_c *v34; // x8
  UnityEngine_Transform_o *v35; // x21
  struct System_Int32_array *v36; // x0
  struct System_Int32_array **p_TutorialImageLoadList; // x21
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct System_Int32_array *v44; // x9
  unsigned __int64 v45; // x10
  unsigned __int64 v46; // x8
  __int64 v47; // x13
  System_Int32_array *v48; // x1
  const MethodInfo *v49; // x2
  const MethodInfo *v50; // x2

  if ( (byte_4BFC398 & 1) == 0 )
  {
    sub_1C2E12C(&int___TypeInfo, images);
    sub_1C2E12C(&TutorialBigDialog_TypeInfo, v13);
    byte_4BFC398 = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&flagId);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.endOpenCallbackFunc,
    (int64_t)endOpenFunc,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.endTurorialRequestFunc,
    (int64_t)endTurorialRequestFunc,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.closeCallbackFunc = closeFunc;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)closeFunc,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  CloseButton = this->fields.CloseButton;
  this->fields.flagId = flagId;
  *(_OWORD *)&this->fields.localFlagId = xmmword_C06510;
  this->fields.sizeKind = 1;
  if ( !CloseButton )
    goto LABEL_19;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0LL);
  v34 = TutorialBigDialog_TypeInfo;
  v35 = (UnityEngine_Transform_o *)CloseButton;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v34 = TutorialBigDialog_TypeInfo;
  }
  if ( !v35 )
    goto LABEL_19;
  UnityEngine_Transform__set_localPosition(v35, v34->static_fields->baseCloseButtonPosition, 0LL);
  if ( !images )
    goto LABEL_19;
  v36 = (struct System_Int32_array *)sub_1C2E1D4(int___TypeInfo, images->max_length);
  this->fields.TutorialImageLoadList = v36;
  p_TutorialImageLoadList = &this->fields.TutorialImageLoadList;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.TutorialImageLoadList,
    (int64_t)v36,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  if ( (int)*(_QWORD *)&images->max_length >= 1 )
  {
    v44 = *p_TutorialImageLoadList;
    v45 = (unsigned int)*(_QWORD *)&images->max_length;
    v46 = 0LL;
    v47 = (__int64)&(*p_TutorialImageLoadList)->m_Items[1];
    do
    {
      if ( v46 >= v45 )
        goto LABEL_18;
      if ( !v44 )
        goto LABEL_19;
      if ( v46 >= v44->max_length )
LABEL_18:
        sub_1C2E390(CloseButton, v32);
      *(_DWORD *)(v47 + 4 * v46) = images->m_Items[v46 + 1];
      ++v46;
    }
    while ( (__int64)v46 < (int)v45 );
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMask((BaseDialog_o *)this, 0, 0LL);
  TutorialBigDialog__LoadImages(this, v48, v49);
  CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !CloseButton )
LABEL_19:
    sub_1C2E388(CloseButton, v32);
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
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  Il2CppObject *Component_object; // x21
  EventDelegate_Callback_o *v46; // x22
  EventDelegate_o *v47; // x20
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  __int64 v54; // x8
  _QWORD *v55; // x9
  __int64 klass_low; // x10
  __int64 v57; // x8
  System_Int32_array *v58; // x1
  const MethodInfo *v59; // x2
  const MethodInfo *v60; // x2

  if ( (byte_4BFC39D & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, images);
    sub_1C2E12C(&EventDelegate_Callback_TypeInfo, v9);
    sub_1C2E12C(&EventDelegate_TypeInfo, v10);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_UITouchPress___, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventDelegate__Add__, v12);
    sub_1C2E12C(&Method_TutorialBigDialog__OpenAssets_b__46_0__, v13);
    sub_1C2E12C(&Method_TutorialBigDialog__OpenAssets_b__46_1__, v14);
    sub_1C2E12C(&TutorialBigDialog_TypeInfo, v15);
    byte_4BFC39D = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&kind);
  v16 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_TutorialBigDialog__OpenAssets_b__46_0__, 0LL);
  this->fields.endOpenCallbackFunc = v16;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.endOpenCallbackFunc,
    (int64_t)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.endTurorialRequestFunc = 0LL;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.endTurorialRequestFunc, 0LL, v23, v24, v25, v26, v27, v28);
  this->fields.closeCallbackFunc = closeFunc;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)closeFunc,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  CloseButton = this->fields.CloseButton;
  this->fields.configFlagId = 0;
  this->fields.sizeKind = kind;
  *(_OWORD *)&this->fields.flagId = xmmword_C06780;
  if ( !CloseButton )
    goto LABEL_18;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0LL);
  v37 = TutorialBigDialog_TypeInfo;
  v38 = (UnityEngine_Transform_o *)CloseButton;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v37 = TutorialBigDialog_TypeInfo;
  }
  if ( !v38 )
    goto LABEL_18;
  UnityEngine_Transform__set_localPosition(v38, v37->static_fields->miniCloseButtonPosition, 0LL);
  this->fields.TutorialImageLoadList = images;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.TutorialImageLoadList,
    (int64_t)images,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  CloseButton = this->fields.TouchMask;
  this->fields.isButtonEnable = 0;
  if ( !CloseButton )
    goto LABEL_18;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       CloseButton,
                       (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
  v46 = (EventDelegate_Callback_o *)sub_1C2E378(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v46, (Il2CppObject *)this, Method_TutorialBigDialog__OpenAssets_b__46_1__, 0LL);
  v47 = (EventDelegate_o *)sub_1C2E378(EventDelegate_TypeInfo);
  EventDelegate___ctor_48098832(v47, v46, 0LL);
  if ( !Component_object )
    goto LABEL_18;
  CloseButton = (UnityEngine_GameObject_o *)Component_object[2].klass;
  if ( !CloseButton )
    goto LABEL_18;
  v54 = *(_QWORD *)&CloseButton->fields.m_CachedPtr;
  v55 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  ++HIDWORD(CloseButton[1].klass);
  if ( !v54 )
    goto LABEL_18;
  klass_low = SLODWORD(CloseButton[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(v54 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)CloseButton,
      (Il2CppObject *)v47,
      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
  }
  else
  {
    v57 = v54 + 8 * klass_low;
    LODWORD(CloseButton[1].klass) = klass_low + 1;
    *(_QWORD *)(v57 + 32) = v47;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v57 + 32), (int64_t)v47, v48, v49, v50, v51, v52, v53);
  }
  BaseDialog__SetMask((BaseDialog_o *)this, 0, 0LL);
  TutorialBigDialog__LoadImages(this, v58, v59);
  CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !CloseButton )
LABEL_18:
    sub_1C2E388(CloseButton, v35);
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v60);
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

  if ( (byte_4BFC39E & 1) == 0 )
  {
    sub_1C2E12C(&TutorialBigDialog_TypeInfo, images);
    byte_4BFC39E = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&configId);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.endOpenCallbackFunc,
    (int64_t)endOpenFunc,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.endTurorialRequestFunc,
    (int64_t)endTurorialRequestFunc,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.closeCallbackFunc = closeFunc;
  sub_1C2E0D0(
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
  *(_OWORD *)&this->fields.flagId = xmmword_C06780;
  this->fields.sizeKind = 1;
  if ( !CloseButton )
    goto LABEL_11;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0LL);
  v33 = TutorialBigDialog_TypeInfo;
  v34 = (UnityEngine_Transform_o *)CloseButton;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v33 = TutorialBigDialog_TypeInfo;
  }
  if ( !v34
    || (UnityEngine_Transform__set_localPosition(v34, v33->static_fields->baseCloseButtonPosition, 0LL),
        this->fields.assetsImageLoadList = images,
        sub_1C2E0D0(
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
        TutorialBigDialog__LoadImages_38644020(this, v41, v42),
        (CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_11:
    sub_1C2E388(CloseButton, v31);
  }
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v43);
}


void __fastcall TutorialBigDialog__OpenWindow(TutorialBigDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4BFC3A9 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1C2E12C(&Method_TutorialBigDialog_EndOpen__, v4);
    byte_4BFC3A9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2E388(0LL, v6);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  v7 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
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

  if ( (byte_4BFC39C & 1) == 0 )
  {
    sub_1C2E12C(&TutorialBigDialog_TypeInfo, images);
    byte_4BFC39C = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, (const MethodInfo *)closeFunc);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.endOpenCallbackFunc,
    (int64_t)endOpenFunc,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.endTurorialRequestFunc,
    (int64_t)endTurorialRequestFunc,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.closeCallbackFunc = closeFunc;
  sub_1C2E0D0(
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
  *(_OWORD *)&this->fields.flagId = xmmword_C06780;
  this->fields.sizeKind = 1;
  if ( !CloseButton )
    goto LABEL_11;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0LL);
  v31 = TutorialBigDialog_TypeInfo;
  v32 = (UnityEngine_Transform_o *)CloseButton;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v31 = TutorialBigDialog_TypeInfo;
  }
  if ( !v32
    || (UnityEngine_Transform__set_localPosition(v32, v31->static_fields->baseCloseButtonPosition, 0LL),
        this->fields.assetsImageLoadList = images,
        sub_1C2E0D0(
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
        TutorialBigDialog__LoadImages_38644020(this, v39, v40),
        (CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_11:
    sub_1C2E388(CloseButton, v29);
  }
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v41);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialBigDialog__Open_38642264(
        TutorialBigDialog_o *this,
        TutorialFlag_ImageId_array *images,
        int32_t flagId,
        System_Action_o *closeFunc,
        System_Action_o *endOpenFunc,
        System_Action_o *endTurorialRequestFunc,
        const MethodInfo *method)
{
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x1
  UnityEngine_GameObject_o *CloseButton; // x0
  TutorialBigDialog_c *v34; // x8
  UnityEngine_Transform_o *v35; // x21
  struct System_Int32_array *v36; // x0
  struct System_Int32_array **p_TutorialImageLoadList; // x21
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct System_Int32_array *v44; // x9
  unsigned __int64 v45; // x10
  unsigned __int64 v46; // x8
  __int64 v47; // x13
  System_Int32_array *v48; // x1
  const MethodInfo *v49; // x2
  const MethodInfo *v50; // x2

  if ( (byte_4BFC399 & 1) == 0 )
  {
    sub_1C2E12C(&int___TypeInfo, images);
    sub_1C2E12C(&TutorialBigDialog_TypeInfo, v13);
    byte_4BFC399 = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&flagId);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.endOpenCallbackFunc,
    (int64_t)endOpenFunc,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.endTurorialRequestFunc,
    (int64_t)endTurorialRequestFunc,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.closeCallbackFunc = closeFunc;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)closeFunc,
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
    goto LABEL_19;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0LL);
  v34 = TutorialBigDialog_TypeInfo;
  v35 = (UnityEngine_Transform_o *)CloseButton;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v34 = TutorialBigDialog_TypeInfo;
  }
  if ( !v35 )
    goto LABEL_19;
  UnityEngine_Transform__set_localPosition(v35, v34->static_fields->baseCloseButtonPosition, 0LL);
  if ( !images )
    goto LABEL_19;
  v36 = (struct System_Int32_array *)sub_1C2E1D4(int___TypeInfo, images->max_length);
  this->fields.TutorialImageLoadList = v36;
  p_TutorialImageLoadList = &this->fields.TutorialImageLoadList;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.TutorialImageLoadList,
    (int64_t)v36,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  if ( (int)*(_QWORD *)&images->max_length >= 1 )
  {
    v44 = *p_TutorialImageLoadList;
    v45 = (unsigned int)*(_QWORD *)&images->max_length;
    v46 = 0LL;
    v47 = (__int64)&(*p_TutorialImageLoadList)->m_Items[1];
    do
    {
      if ( v46 >= v45 )
        goto LABEL_18;
      if ( !v44 )
        goto LABEL_19;
      if ( v46 >= v44->max_length )
LABEL_18:
        sub_1C2E390(CloseButton, v32);
      *(_DWORD *)(v47 + 4 * v46) = images->m_Items[v46 + 1];
      ++v46;
    }
    while ( (__int64)v46 < (int)v45 );
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMask((BaseDialog_o *)this, 0, 0LL);
  TutorialBigDialog__LoadImages(this, v48, v49);
  CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !CloseButton )
LABEL_19:
    sub_1C2E388(CloseButton, v32);
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v50);
}


void __fastcall TutorialBigDialog__Open_38642760(
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

  if ( (byte_4BFC39A & 1) == 0 )
  {
    sub_1C2E12C(&TutorialBigDialog_TypeInfo, images);
    byte_4BFC39A = 1;
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
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.endOpenCallbackFunc,
    (int64_t)endOpenFunc,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.endTurorialRequestFunc,
    (int64_t)endTurorialRequestFunc,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.closeCallbackFunc = closeFunc;
  sub_1C2E0D0(
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
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v36 = TutorialBigDialog_TypeInfo;
  }
  if ( !v37
    || (UnityEngine_Transform__set_localPosition(v37, v36->static_fields->baseCloseButtonPosition, 0LL),
        this->fields.TutorialImageLoadList = images,
        sub_1C2E0D0(
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
    sub_1C2E388(CloseButton, v34);
  }
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  TutorialBigDialog__UpdateButtons(this, 1, v46);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialBigDialog__Open_38643152(
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
  struct System_Int32_array *v38; // x0
  struct System_Int32_array **p_TutorialImageLoadList; // x21
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct System_Int32_array *v46; // x9
  unsigned __int64 v47; // x10
  unsigned __int64 v48; // x8
  __int64 v49; // x13
  System_Int32_array *v50; // x1
  const MethodInfo *v51; // x2
  const MethodInfo *v52; // x2

  if ( (byte_4BFC39B & 1) == 0 )
  {
    sub_1C2E12C(&int___TypeInfo, images);
    sub_1C2E12C(&TutorialBigDialog_TypeInfo, v15);
    byte_4BFC39B = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    TutorialBigDialog__Init(this, (const MethodInfo *)images);
    this->fields.IsInitialized = 1;
  }
  TutorialBigDialog__SetTouchMask(this, 0, *(const MethodInfo **)&flagId);
  this->fields.endOpenCallbackFunc = endOpenFunc;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.endOpenCallbackFunc,
    (int64_t)endOpenFunc,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.endTurorialRequestFunc = endTurorialRequestFunc;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.endTurorialRequestFunc,
    (int64_t)endTurorialRequestFunc,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.closeCallbackFunc = closeFunc;
  sub_1C2E0D0(
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
    goto LABEL_19;
  CloseButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(CloseButton, 0LL);
  v36 = TutorialBigDialog_TypeInfo;
  v37 = (UnityEngine_Transform_o *)CloseButton;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v36 = TutorialBigDialog_TypeInfo;
  }
  if ( !v37 )
    goto LABEL_19;
  UnityEngine_Transform__set_localPosition(v37, v36->static_fields->baseCloseButtonPosition, 0LL);
  if ( !images )
    goto LABEL_19;
  v38 = (struct System_Int32_array *)sub_1C2E1D4(int___TypeInfo, images->max_length);
  this->fields.TutorialImageLoadList = v38;
  p_TutorialImageLoadList = &this->fields.TutorialImageLoadList;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.TutorialImageLoadList,
    (int64_t)v38,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  if ( (int)*(_QWORD *)&images->max_length >= 1 )
  {
    v46 = *p_TutorialImageLoadList;
    v47 = (unsigned int)*(_QWORD *)&images->max_length;
    v48 = 0LL;
    v49 = (__int64)&(*p_TutorialImageLoadList)->m_Items[1];
    do
    {
      if ( v48 >= v47 )
        goto LABEL_18;
      if ( !v46 )
        goto LABEL_19;
      if ( v48 >= v46->max_length )
LABEL_18:
        sub_1C2E390(CloseButton, v34);
      *(_DWORD *)(v49 + 4 * v48) = images->m_Items[v48 + 1];
      ++v48;
    }
    while ( (__int64)v48 < (int)v47 );
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMask((BaseDialog_o *)this, 0, 0LL);
  TutorialBigDialog__LoadImages(this, v50, v51);
  CloseButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !CloseButton )
LABEL_19:
    sub_1C2E388(CloseButton, v34);
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
    sub_1C2E388(TouchMask, isDisp);
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
  if ( (byte_4BFC3AB & 1) == 0 )
  {
    sub_1C2E12C(&AndroidBackKeyManager_TypeInfo, isDisp);
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____77780216, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v6);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v7);
    sub_1C2E12C(&StringLiteral_13713/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, v8);
    this = (TutorialBigDialog_o *)sub_1C2E12C(&StringLiteral_13714/*"TUTORIAL_IMAGE_DIALOG_PREV"*/, v9);
    byte_4BFC3AB = 1;
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
                                    (const MethodInfo_2FC8DC0 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____77780216);
    if ( !this )
      goto LABEL_34;
    if ( !LODWORD(this->fields.m_CancellationTokenSource) )
LABEL_35:
      sub_1C2E390(this, isDisp);
    basePanel = (UILabel_o *)this->fields.basePanel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (TutorialBigDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13713/*"TUTORIAL_IMAGE_DIALOG_NEXT"*/, 0LL);
    if ( !basePanel )
LABEL_34:
      sub_1C2E388(this, isDisp);
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
                                  (const MethodInfo_2FC8DC0 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____77780216);
  if ( !this )
    goto LABEL_34;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_35;
  v12 = (UILabel_o *)this->fields.basePanel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (TutorialBigDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13714/*"TUTORIAL_IMAGE_DIALOG_PREV"*/, 0LL);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  long double v8; // q8
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int32_t CurrentIndex; // w26
  struct UITexture_o **p_FadeInTarget; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  System_Collections_Generic_List_object__o *ImagePageList; // x0
  int size; // w8
  int v28; // w27
  int32_t v29; // w23
  UnityEngine_GameObject_o *v30; // x24
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  long double v37; // q0
  System_Collections_Generic_List_object__o *v38; // x25
  System_Collections_Generic_List_object__c *klass; // x8
  bool v40; // w1
  UnityEngine_GameObject_o *gameObject; // x21
  TutorialBigDialog_c *v42; // x8
  UnityEngine_GameObject_o *v43; // x0
  UITweener_o *v44; // x20
  EventDelegate_Callback_o *v45; // x21

  if ( (byte_4BFC3AA & 1) == 0 )
  {
    sub_1C2E12C(&EventDelegate_Callback_TypeInfo, *(_QWORD *)&dispIndex);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_UITexture___, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v12);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v13);
    sub_1C2E12C(&Method_TutorialBigDialog__UpdatePage_b__61_0__, v14);
    sub_1C2E12C(&TutorialBigDialog_TypeInfo, v15);
    byte_4BFC3AA = 1;
  }
  CurrentIndex = this->fields.CurrentIndex;
  this->fields.FadeInTarget = 0LL;
  p_FadeInTarget = &this->fields.FadeInTarget;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.FadeInTarget, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  this->fields.FadeOutTarget = 0LL;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.FadeOutTarget, 0LL, v18, v19, v20, v21, v22, v23);
  ImagePageList = (System_Collections_Generic_List_object__o *)this->fields.ImagePageList;
  if ( !ImagePageList )
    goto LABEL_29;
  size = ImagePageList->fields._size;
  v28 = size - 1;
  if ( size >= 1 )
  {
    LODWORD(v8) = 1000593162;
    v29 = 0;
    while ( 1 )
    {
      ImagePageList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                     ImagePageList,
                                                                     v29,
                                                                     (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !ImagePageList )
        goto LABEL_29;
      v30 = (UnityEngine_GameObject_o *)ImagePageList;
      ImagePageList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                     (UnityEngine_GameObject_o *)ImagePageList,
                                                                     (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
      v38 = ImagePageList;
      if ( dispIndex == v29 )
      {
        if ( CurrentIndex == dispIndex )
        {
          if ( !ImagePageList )
            goto LABEL_29;
          klass = ImagePageList->klass;
          LODWORD(v37) = 1.0;
        }
        else
        {
          *p_FadeInTarget = (struct UITexture_o *)ImagePageList;
          sub_1C2E0D0(
            (PartyOrganizationUtility_o *)&this->fields.FadeInTarget,
            (int64_t)ImagePageList,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36);
          if ( !v38 )
            goto LABEL_29;
          klass = v38->klass;
          ImagePageList = v38;
          v37 = v8;
        }
        ((void (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppMethodPointer, long double))klass->vtable._8_unknown.method)(
          ImagePageList,
          klass->vtable._9_unknown.methodPtr,
          v37);
      }
      else
      {
        v40 = 0;
        if ( v29 != this->fields.CurrentIndex || CurrentIndex == dispIndex )
          goto LABEL_18;
        this->fields.FadeOutTarget = (struct UITexture_o *)ImagePageList;
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&this->fields.FadeOutTarget,
          (int64_t)ImagePageList,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36);
      }
      v40 = 1;
LABEL_18:
      UnityEngine_GameObject__SetActive(v30, v40, 0LL);
      if ( v28 == v29 )
        break;
      ImagePageList = (System_Collections_Generic_List_object__o *)this->fields.ImagePageList;
      ++v29;
      if ( !ImagePageList )
        goto LABEL_29;
    }
  }
  this->fields.CurrentIndex = dispIndex;
  if ( CurrentIndex == dispIndex )
  {
    TutorialBigDialog__UpdateButtons(this, 1, v25);
    return;
  }
  ImagePageList = (System_Collections_Generic_List_object__o *)this->fields.FadeOutTarget;
  this->fields.IsFading = 1;
  if ( !ImagePageList )
    goto LABEL_29;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ImagePageList, 0LL);
  v42 = TutorialBigDialog_TypeInfo;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
    v42 = TutorialBigDialog_TypeInfo;
  }
  TweenAlpha__Begin(gameObject, v42->static_fields->FADE_TIME, 0.0, 0LL);
  ImagePageList = (System_Collections_Generic_List_object__o *)*p_FadeInTarget;
  if ( !*p_FadeInTarget
    || (v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ImagePageList, 0LL),
        v44 = (UITweener_o *)TweenAlpha__Begin(v43, TutorialBigDialog_TypeInfo->static_fields->FADE_TIME, 1.0, 0LL),
        v45 = (EventDelegate_Callback_o *)sub_1C2E378(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(v45, (Il2CppObject *)this, Method_TutorialBigDialog__UpdatePage_b__61_0__, 0LL),
        !v44) )
  {
LABEL_29:
    sub_1C2E388(ImagePageList, v24);
  }
  UITweener__SetOnFinished(v44, v45, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall TutorialBigDialog__WaitPurchase(
        TutorialBigDialog_o *this,
        int32_t CurrentIndex,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BFC3A7 & 1) == 0 )
  {
    sub_1C2E12C(&TutorialBigDialog__WaitPurchase_d__58_TypeInfo, *(_QWORD *)&CurrentIndex);
    byte_4BFC3A7 = 1;
  }
  v5 = sub_1C2E378(TutorialBigDialog__WaitPurchase_d__58_TypeInfo);
  TutorialBigDialog__WaitPurchase_d__58___ctor((TutorialBigDialog__WaitPurchase_d__58_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1C2E388(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
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
  Il2CppObject *Object_object__50017172; // x0
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2

  v4 = this;
  if ( (byte_4BFC3B7 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, data);
    sub_1C2E12C(&Method_AssetData_GetObject_Texture2D____77757336, v5);
    sub_1C2E12C(&Method_TutorialBigDialog__LoadStartAssets_b__54_1__, v6);
    this = (TutorialBigDialog_o *)sub_1C2E12C(&StringLiteral_16544/*"_L_"*/, v7);
    byte_4BFC3B7 = 1;
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
                                  (System_String_o *)StringLiteral_16544/*"_L_"*/,
                                  0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v8 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)v4, Method_TutorialBigDialog__LoadStartAssets_b__54_1__, 0LL);
    TutorialBigDialog__AddScrollImg(v4, data, v8, v9);
    return;
  }
  assetsImageLoadList = v4->fields.assetsImageLoadList;
  if ( !assetsImageLoadList )
LABEL_12:
    sub_1C2E388(this, data);
  v11 = v4->fields._loadIndex + 1;
  if ( v11 >= assetsImageLoadList->max_length )
LABEL_13:
    sub_1C2E390(this, data);
  Object_object__50017172 = AssetData__GetObject_object__50017172(
                              data,
                              assetsImageLoadList->m_Items[v11],
                              (const MethodInfo_2FB3394 *)Method_AssetData_GetObject_Texture2D____77757336);
  TutorialBigDialog__AddImg(v4, (UnityEngine_Texture2D_o *)Object_object__50017172, v13);
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
  Il2CppObject *Object_object__50017172; // x0
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2

  v4 = this;
  if ( (byte_4BFC3B6 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, data);
    sub_1C2E12C(&Method_AssetData_GetObject_Texture2D____77757336, v5);
    sub_1C2E12C(&Method_TutorialBigDialog__LoadStart_b__53_1__, v6);
    this = (TutorialBigDialog_o *)sub_1C2E12C(&StringLiteral_16544/*"_L_"*/, v7);
    byte_4BFC3B6 = 1;
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
                                  (System_String_o *)StringLiteral_16544/*"_L_"*/,
                                  0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)v4, Method_TutorialBigDialog__LoadStart_b__53_1__, 0LL);
    TutorialBigDialog__AddScrollImg(v4, data, v9, v10);
    return;
  }
  TutorialImageLoadList = v4->fields.TutorialImageLoadList;
  if ( !TutorialImageLoadList )
LABEL_12:
    sub_1C2E388(this, data);
  loadIndex = v4->fields._loadIndex;
  if ( (unsigned int)loadIndex >= TutorialImageLoadList->max_length )
LABEL_13:
    sub_1C2E390(this, data);
  TuorialImageName = TutorialBigDialog__GetTuorialImageName(this, TutorialImageLoadList->m_Items[loadIndex + 1], v8);
  Object_object__50017172 = AssetData__GetObject_object__50017172(
                              data,
                              TuorialImageName,
                              (const MethodInfo_2FB3394 *)Method_AssetData_GetObject_Texture2D____77757336);
  TutorialBigDialog__AddImg(v4, (UnityEngine_Texture2D_o *)Object_object__50017172, v15);
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
    sub_1C2E388(FadeOutTarget, v3);
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

  if ( (byte_4BFC3AC & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_TutorialImageLong___, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v5);
    byte_4BFC3AC = 1;
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
                                                                   (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !ImagePageList )
      goto LABEL_13;
    Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)ImagePageList,
                                                 (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_TutorialImageLong___);
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
      sub_1C2E388(ImagePageList, method);
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
  TutorialBigDialog__WaitPurchase_d__58_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  TutorialBigDialog___c_c *v8; // x0
  System_Func_bool__o *_9__58_0; // x20
  Il2CppObject *v10; // x21
  struct TutorialBigDialog___c_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  UnityEngine_WaitUntil_o *v18; // x21
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  bool result; // w0
  TutorialBigDialog_o *_4__this; // x20

  v2 = this;
  if ( (byte_4BFC498 & 1) == 0 )
  {
    sub_1C2E12C(&System_Func_bool__TypeInfo, method);
    sub_1C2E12C(&Method_TutorialBigDialog___c__WaitPurchase_b__58_0__, v3);
    sub_1C2E12C(&TutorialBigDialog___c_TypeInfo, v4);
    sub_1C2E12C(&UnityEngine_WaitUntil_TypeInfo, v5);
    this = (TutorialBigDialog__WaitPurchase_d__58_o *)sub_1C2E12C(&StringLiteral_10195/*"OpenWindow"*/, v6);
    byte_4BFC498 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_1C2E388(this, method);
    TutorialBigDialog__UpdatePage(_4__this, v2->fields.CurrentIndex, 0LL);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)_4__this,
      (System_String_o *)StringLiteral_10195/*"OpenWindow"*/,
      0.3,
      0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  v8 = TutorialBigDialog___c_TypeInfo;
  if ( !TutorialBigDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialBigDialog___c_TypeInfo);
    v8 = TutorialBigDialog___c_TypeInfo;
  }
  _9__58_0 = v8->static_fields->__9__58_0;
  if ( !_9__58_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = TutorialBigDialog___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__58_0 = (System_Func_bool__o *)sub_1C2E378(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(_9__58_0, v10, Method_TutorialBigDialog___c__WaitPurchase_b__58_0__, 0LL);
    static_fields = TutorialBigDialog___c_TypeInfo->static_fields;
    static_fields->__9__58_0 = _9__58_0;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&static_fields->__9__58_0,
      (int64_t)_9__58_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  v18 = (UnityEngine_WaitUntil_o *)sub_1C2E378(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v18, _9__58_0, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v18;
  p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
  sub_1C2E0D0(p__2__current, (int64_t)v18, v20, v21, v22, v23, v24, v25);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2E140(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2E378(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C2E140(&Method_TutorialBigDialog__WaitPurchase_d__58_System_Collections_IEnumerator_Reset__);
  sub_1C2E254(v3, v4);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BFC495 & 1) == 0 )
  {
    sub_1C2E12C(&TutorialBigDialog___c_TypeInfo, v1);
    byte_4BFC495 = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(TutorialBigDialog___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TutorialBigDialog___c_TypeInfo->static_fields->__9 = (struct TutorialBigDialog___c_o *)v2;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)TutorialBigDialog___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall TutorialBigDialog___c___ctor(TutorialBigDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall TutorialBigDialog___c___WaitPurchase_b__58_0(TutorialBigDialog___c_o *this, const MethodInfo *method)
{
  PurchaseBehaviour_c *v2; // x0

  if ( (byte_4BFC496 & 1) == 0 )
  {
    sub_1C2E12C(&PurchaseBehaviour_TypeInfo, method);
    byte_4BFC496 = 1;
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  AssetData_o *v8; // x20
  TutorialBigDialog___c__DisplayClass56_0_o *v9; // x19
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct TutorialBigDialog_o *_4__this; // x8
  UnityEngine_Shader_o *v16; // x22
  UnityEngine_Material_o *v17; // x21
  struct TutorialImageLong_o *comp; // x8
  TutorialBigDialog_o *v19; // x22
  struct TutorialBigDialog_o *v20; // x8
  Il2CppObject *Object_object__50017172; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct TutorialBigDialog_o *v28; // x8
  struct TutorialBigDialog_o *v29; // x8
  _QWORD *v30; // x9
  __int64 comp_low; // x10
  TutorialBigDialog_c **v32; // x8

  v8 = aData;
  v9 = this;
  if ( (byte_4BFC497 & 1) == 0 )
  {
    sub_1C2E12C(&Method_AssetData_GetObject_Texture2D____77757336, aData);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__Add__, v10);
    sub_1C2E12C(&UnityEngine_Material_TypeInfo, v11);
    sub_1C2E12C(&TutorialBigDialog_TypeInfo, v12);
    sub_1C2E12C(&StringLiteral_5069/*"Custom/SpriteWithMask"*/, v13);
    this = (TutorialBigDialog___c__DisplayClass56_0_o *)sub_1C2E12C(&StringLiteral_16556/*"_MaskTex"*/, v14);
    byte_4BFC497 = 1;
  }
  _4__this = v9->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  _4__this->fields.baseTexAssetData = v8;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&_4__this->fields.baseTexAssetData,
    (int64_t)v8,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v16 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5069/*"Custom/SpriteWithMask"*/, 0LL);
  v17 = (UnityEngine_Material_o *)sub_1C2E378(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v17, v16, 0LL);
  comp = v9->fields.comp;
  if ( !comp )
    goto LABEL_20;
  this = (TutorialBigDialog___c__DisplayClass56_0_o *)comp->fields.BaseImage;
  if ( !this )
    goto LABEL_20;
  ((void (__fastcall *)(TutorialBigDialog___c__DisplayClass56_0_o *, UnityEngine_Material_o *, Il2CppMethodPointer))this->klass[1].vtable._2_GetHashCode.method)(
    this,
    v17,
    this->klass[1].vtable._3_ToString.methodPtr);
  this = (TutorialBigDialog___c__DisplayClass56_0_o *)TutorialBigDialog_TypeInfo;
  v19 = v9->fields.__4__this;
  if ( !TutorialBigDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialBigDialog_TypeInfo);
  if ( !v19 )
    goto LABEL_20;
  this = (TutorialBigDialog___c__DisplayClass56_0_o *)TutorialBigDialog__GetTuorialImageName(
                                                        v19,
                                                        TutorialBigDialog_TypeInfo->static_fields->baseImgNo,
                                                        0LL);
  if ( !v8 )
    goto LABEL_20;
  this = (TutorialBigDialog___c__DisplayClass56_0_o *)AssetData__GetObject_object__50017172(
                                                        v8,
                                                        (System_String_o *)this,
                                                        (const MethodInfo_2FB3394 *)Method_AssetData_GetObject_Texture2D____77757336);
  if ( !v17 )
    goto LABEL_20;
  UnityEngine_Material__set_mainTexture(v17, (UnityEngine_Texture_o *)this, 0LL);
  v20 = v9->fields.__4__this;
  if ( !v20 )
    goto LABEL_20;
  this = (TutorialBigDialog___c__DisplayClass56_0_o *)v20->fields.alphaTexAssetData;
  if ( !this )
    goto LABEL_20;
  Object_object__50017172 = AssetData__GetObject_object__50017172(
                              (AssetData_o *)this,
                              TutorialBigDialog_TypeInfo->static_fields->alphaImgName,
                              (const MethodInfo_2FB3394 *)Method_AssetData_GetObject_Texture2D____77757336);
  UnityEngine_Material__SetTexture(
    v17,
    (System_String_o *)StringLiteral_16556/*"_MaskTex"*/,
    (UnityEngine_Texture_o *)Object_object__50017172,
    0LL);
  v28 = v9->fields.__4__this;
  if ( !v28
    || (this = (TutorialBigDialog___c__DisplayClass56_0_o *)v28->fields.ImagePageList) == 0LL
    || (aData = (AssetData_o *)v9->fields.obj,
        v29 = this->fields.__4__this,
        v30 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++HIDWORD(this->fields.comp),
        !v29) )
  {
LABEL_20:
    sub_1C2E388(this, aData);
  }
  comp_low = SLODWORD(this->fields.comp);
  if ( (unsigned int)comp_low >= LODWORD(v29->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)aData,
      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = &v29->klass + comp_low;
    LODWORD(this->fields.comp) = comp_low + 1;
    v32[4] = (TutorialBigDialog_c *)aData;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v32 + 4), (int64_t)aData, v22, v23, v24, v25, v26, v27);
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
    sub_1C2E388(this, data);
  _4__this->fields.alphaTexAssetData = data;
  sub_1C2E0D0(
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