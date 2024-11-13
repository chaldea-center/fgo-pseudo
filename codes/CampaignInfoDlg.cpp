void __fastcall CampaignInfoDlg___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  struct CampaignInfoDlg_StaticFields *static_fields; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  struct CampaignInfoDlg_StaticFields *v10; // x0

  if ( (byte_4B10DB4 & 1) == 0 )
  {
    sub_1BCA7E0(&CampaignInfoDlg_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_14762/*"Tutorial/tutorial_alpha"*/, v3, v4);
    sub_1BCA7E0(&StringLiteral_24353/*"tutorial_alpha"*/, v5, v6);
    byte_4B10DB4 = 1;
  }
  static_fields = CampaignInfoDlg_TypeInfo->static_fields;
  static_fields->FADE_TIME = 0.3;
  v8 = StringLiteral_14762/*"Tutorial/tutorial_alpha"*/;
  static_fields->alphaImgPath = (struct System_String_o *)StringLiteral_14762/*"Tutorial/tutorial_alpha"*/;
  sub_1BCA784(&static_fields->alphaImgPath, v8);
  v9 = StringLiteral_24353/*"tutorial_alpha"*/;
  v10 = CampaignInfoDlg_TypeInfo->static_fields;
  v10->alphaImgName = (struct System_String_o *)StringLiteral_24353/*"tutorial_alpha"*/;
  sub_1BCA784(&v10->alphaImgName, v9);
  *(_QWORD *)&CampaignInfoDlg_TypeInfo->static_fields->baseImgNo = 0xD200000006LL;
}


void __fastcall CampaignInfoDlg___ctor(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B10DB3 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B10DB3 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, method);
}


void __fastcall CampaignInfoDlg__AddScrollImg(
        CampaignInfoDlg_o *this,
        AssetData_o *data,
        System_Action_o *callback,
        const MethodInfo *method)
{
  CampaignInfoDlg_o *v6; // x21
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
  int m_CancellationTokenSource; // w8
  CampaignInfoDlg_o *v22; // x25
  unsigned int v23; // w27
  int32_t v24; // w21
  CampaignInfoDlg_o *v25; // x24
  CampaignInfoDlg_o *v26; // x19
  CampaignInfoDlg_c **v27; // x20
  System_String_o **v28; // x20
  CampaignInfoDlg_o *v29; // t1
  char v30; // w26
  const MethodInfo *v31; // x2
  CampaignInfoDlg_o *v32; // x23
  Il2CppObject *ImagePrefab; // x22
  Il2CppObject *v34; // x22
  System_String_o *v35; // x0
  __int64 v36; // x1
  int32_t layer; // w25
  const MethodInfo *v38; // x5
  struct CampaignInformation_array *infoData; // x8
  __int64 loadIndex; // x9
  CampaignInfoDlg_o *v41; // x23
  __int64 v42; // x2
  CampaignInfoDlg_o *v43; // x23
  __int64 v44; // x8
  _QWORD *v45; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v47; // x8
  System_Action_o *v48; // [xsp+0h] [xbp-70h]
  CampaignInfoDlg_o *v49; // [xsp+8h] [xbp-68h]
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4B10DA6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_Texture2D____76836720, data, callback);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CampaignInfoItem___, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v9, v10);
    sub_1BCA7E0(&NGUITools_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_16906/*"alpha"*/, v17, v18);
    this = (CampaignInfoDlg_o *)sub_1BCA7E0(&StringLiteral_7601/*"Image"*/, v19, v20);
    byte_4B10DA6 = 1;
  }
  if ( !data )
    goto LABEL_38;
  this = (CampaignInfoDlg_o *)AssetData__GetObjectNameList(data, 0LL);
  if ( !this )
    goto LABEL_38;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v22 = this;
  v48 = callback;
  v49 = v6;
  if ( m_CancellationTokenSource >= 1 )
  {
    v23 = 0;
    v24 = 0;
    v25 = 0LL;
    v26 = 0LL;
    while ( v23 < m_CancellationTokenSource )
    {
      v27 = &v22->klass + (int)v23;
      v29 = (CampaignInfoDlg_o *)v27[4];
      v28 = (System_String_o **)(v27 + 4);
      this = v29;
      if ( !v29 )
        goto LABEL_38;
      this = (CampaignInfoDlg_o *)System_String__Contains(
                                    (System_String_o *)this,
                                    (System_String_o *)StringLiteral_16906/*"alpha"*/,
                                    0LL);
      if ( v23 >= LODWORD(v22->fields.m_CancellationTokenSource) )
        break;
      v30 = (char)this;
      this = (CampaignInfoDlg_o *)AssetData__GetObject_object__49237568(
                                    data,
                                    *v28,
                                    (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_Texture2D____76836720);
      v32 = this;
      if ( (v30 & 1) == 0 )
      {
        if ( v23 >= LODWORD(v22->fields.m_CancellationTokenSource) )
          break;
        v26 = this;
        this = (CampaignInfoDlg_o *)CampaignInfoDlg__GetScrollHeightWithName(this, *v28, v31);
        v24 = (int)this;
        v32 = v25;
      }
      m_CancellationTokenSource = (int)v22->fields.m_CancellationTokenSource;
      ++v23;
      v25 = v32;
      if ( (int)v23 >= m_CancellationTokenSource )
        goto LABEL_16;
    }
LABEL_37:
    sub_1BCAA44(this, data);
  }
  v26 = 0LL;
  v32 = 0LL;
  v24 = 0;
LABEL_16:
  ImagePrefab = (Il2CppObject *)v49->fields.ImagePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, data);
  v34 = UnityEngine_Object__Instantiate_object_(
          ImagePrefab,
          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v35 = System_Int32__ToString((int)v49 + 224, 0LL);
  this = (CampaignInfoDlg_o *)System_String__Concat_62401220((System_String_o *)StringLiteral_7601/*"Image"*/, v35, 0LL);
  if ( !v34 )
    goto LABEL_38;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v34, (System_String_o *)this, 0LL);
  this = (CampaignInfoDlg_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v49, 0LL);
  if ( !this )
    goto LABEL_38;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v36);
  NGUITools__SetLayer((UnityEngine_GameObject_o *)v34, layer, 0LL);
  this = (CampaignInfoDlg_o *)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)v34,
                                (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CampaignInfoItem___);
  infoData = v49->fields.infoData;
  if ( !infoData )
    goto LABEL_38;
  loadIndex = v49->fields._loadIndex;
  if ( (unsigned int)loadIndex >= infoData->max_length )
    goto LABEL_37;
  if ( !this )
    goto LABEL_38;
  CampaignInfoItem__SetCampaignInfo(
    (CampaignInfoItem_o *)this,
    infoData->m_Items[loadIndex],
    (UnityEngine_Texture2D_o *)v26,
    (UnityEngine_Texture2D_o *)v32,
    v24,
    v38);
  this = (CampaignInfoDlg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v34, 0LL);
  if ( !v49->fields.ImageGrid )
    goto LABEL_38;
  v41 = this;
  this = (CampaignInfoDlg_o *)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)v49->fields.ImageGrid,
                                0LL);
  if ( !v41 )
    goto LABEL_38;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v41, (UnityEngine_Transform_o *)this, 0LL);
  this = (CampaignInfoDlg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v34, 0LL);
  if ( !this )
    goto LABEL_38;
  v50.fields.y = v49->fields.setPosX;
  v50.fields.x = 0.0;
  v50.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v50, 0LL);
  this = (CampaignInfoDlg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v34, 0LL);
  v43 = this;
  if ( !byte_4B109C6 )
  {
    this = (CampaignInfoDlg_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, data, v42);
    byte_4B109C6 = 1;
  }
  if ( !v43
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v43,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        this = (CampaignInfoDlg_o *)v49->fields.ImagePageList,
        v49->fields.setPosX = v49->fields.setPosX - (float)v24,
        !this)
    || (v44 = *(_QWORD *)&this->fields.m_CachedPtr,
        v45 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++HIDWORD(this->fields.m_CancellationTokenSource),
        !v44) )
  {
LABEL_38:
    sub_1BCAA3C(this, data);
  }
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v44 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      v34,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
  }
  else
  {
    v47 = v44 + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v47 + 32) = v34;
    sub_1BCA784(v47 + 32, v34);
  }
  ActionExtensions__Call(v48, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CampaignInfoDlg__AfterLoad(CampaignInfoDlg_o *this, int32_t addCount, const MethodInfo *method)
{
  CampaignInfoDlg_o *v4; // x19
  struct CampaignInformation_array *infoData; // x9
  int v6; // w8

  v4 = this;
  if ( (byte_4B10DA7 & 1) == 0 )
  {
    this = (CampaignInfoDlg_o *)sub_1BCA7E0(&StringLiteral_10137/*"OpenWindow"*/, *(_QWORD *)&addCount, method);
    byte_4B10DA7 = 1;
  }
  infoData = v4->fields.infoData;
  v6 = v4->fields._loadIndex + addCount;
  v4->fields._loadIndex = v6;
  if ( !infoData )
    sub_1BCAA3C(this, *(_QWORD *)&addCount);
  if ( v6 >= (signed int)infoData->max_length )
  {
    CampaignInfoDlg__UpdatePage(v4, *(const MethodInfo **)&addCount);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)v4,
      (System_String_o *)StringLiteral_10137/*"OpenWindow"*/,
      0.3,
      0LL);
  }
  else
  {
    CampaignInfoDlg__LoadStart(v4, *(const MethodInfo **)&addCount);
  }
}


void __fastcall CampaignInfoDlg__Close(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CampaignInfoDlg__Close_30722108(this, 0LL, v2);
}


void __fastcall CampaignInfoDlg__Close_30722108(
        CampaignInfoDlg_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Action_o *v10; // x20
  const MethodInfo *v11; // x2

  if ( (byte_4B10DAD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_CampaignInfoDlg_EndClose__, v5, v6);
    byte_4B10DAD = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(&this->fields.closeCallbackFunc, callback);
  this->fields.isButtonEnable = 0;
  v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_CampaignInfoDlg_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, v11);
}


void __fastcall CampaignInfoDlg__EndClose(CampaignInfoDlg_o *this, const MethodInfo *method)
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
  System_Collections_Generic_List_object__o *ImagePageList; // x0
  __int64 v17; // x1
  Il2CppObject *current; // x20
  const MethodInfo *v19; // x2
  CampaignInfoDlg_c *v20; // x0
  System_String_o *alphaImgPath; // x20
  CampaignInfoDlg_c *v22; // x0
  __int64 v23; // x1
  System_String_o *TuorialImagePath; // x20
  struct CampaignInformation_array *infoData; // x23
  int max_length; // w8
  __int64 v27; // x24
  CampaignInformation_o *v28; // x8
  __int64 v29; // x1
  System_String_o *CampaignInfoImagePath; // x21
  struct System_Action_o *closeCallbackFunc; // x20
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B10DAE & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&CampaignInfoDlg_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    byte_4B10DAE = 1;
  }
  memset(&v33, 0, sizeof(v33));
  ImagePageList = (System_Collections_Generic_List_object__o *)this->fields.ImagePageList;
  if ( !ImagePageList )
    goto LABEL_34;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    ImagePageList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v33 = v32;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v33.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  if ( this->fields.alphaTexLoadRequested )
  {
    v20 = CampaignInfoDlg_TypeInfo;
    if ( !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo, method);
      v20 = CampaignInfoDlg_TypeInfo;
    }
    alphaImgPath = v20->static_fields->alphaImgPath;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
    AssetManager__releaseAssetStorage(alphaImgPath, 0LL);
    this->fields.alphaTexAssetData = 0LL;
    ImagePageList = (System_Collections_Generic_List_object__o *)sub_1BCA784(&this->fields.alphaTexAssetData, 0LL);
    this->fields.alphaTexLoadRequested = 0;
  }
  if ( this->fields.baseTexLoadRequested )
  {
    v22 = CampaignInfoDlg_TypeInfo;
    if ( !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo, method);
      v22 = CampaignInfoDlg_TypeInfo;
    }
    TuorialImagePath = CampaignInfoDlg__GetTuorialImagePath(this, v22->static_fields->baseImgNo, v19);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v23);
    AssetManager__releaseAssetStorage(TuorialImagePath, 0LL);
    this->fields.baseTexAssetData = 0LL;
    ImagePageList = (System_Collections_Generic_List_object__o *)sub_1BCA784(&this->fields.baseTexAssetData, 0LL);
    this->fields.baseTexLoadRequested = 0;
  }
  infoData = this->fields.infoData;
  if ( infoData )
  {
    max_length = infoData->max_length;
    if ( max_length >= 1 )
    {
      v27 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v27 >= max_length )
          sub_1BCAA44(ImagePageList, method);
        v28 = infoData->m_Items[v27];
        if ( !v28 )
          break;
        CampaignInfoImagePath = CampaignInfoDlg__GetCampaignInfoImagePath(this, v28->fields.imageId, v19);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v29);
        AssetManager__releaseAssetStorage(CampaignInfoImagePath, 0LL);
        max_length = infoData->max_length;
        if ( (int)++v27 >= max_length )
          goto LABEL_29;
      }
LABEL_34:
      sub_1BCAA3C(ImagePageList, method);
    }
LABEL_29:
    this->fields.infoData = 0LL;
    sub_1BCA784(&this->fields.infoData, 0LL);
  }
  CampaignInfoDlg__Init(this, method);
  ImagePageList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0LL);
  if ( !ImagePageList )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ImagePageList, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1BCA784(&this->fields.closeCallbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallbackFunc->fields.m_target)(
      closeCallbackFunc->fields.original_method_info,
      *(_QWORD *)&closeCallbackFunc->fields.extra_arg);
  }
}


void __fastcall CampaignInfoDlg__EndOpen(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
  CampaignInfoDlg__refreshCurrent(this, method);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CampaignInfoDlg__GetCampaignInfoImageName(
        CampaignInfoDlg_o *this,
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

  if ( (byte_4B10DA3 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&imgId, method);
    sub_1BCA7E0(&StringLiteral_25207/*"{0:D4}"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_20874/*"info_"*/, v6, v7);
    byte_4B10DA3 = 1;
  }
  v11 = imgId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
  v9 = System_String__Format((System_String_o *)StringLiteral_25207/*"{0:D4}"*/, v8, 0LL);
  return System_String__Concat_62401220((System_String_o *)StringLiteral_20874/*"info_"*/, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CampaignInfoDlg__GetCampaignInfoImagePath(
        CampaignInfoDlg_o *this,
        int32_t imgId,
        const MethodInfo *method)
{
  System_String_o *CampaignInfoImageName; // x0

  if ( (byte_4B10DA2 & 1) == 0 )
  {
    this = (CampaignInfoDlg_o *)sub_1BCA7E0(&StringLiteral_4055/*"CampaignInfo/"*/, *(_QWORD *)&imgId, method);
    byte_4B10DA2 = 1;
  }
  CampaignInfoImageName = CampaignInfoDlg__GetCampaignInfoImageName(this, imgId, method);
  return System_String__Concat_62401220((System_String_o *)StringLiteral_4055/*"CampaignInfo/"*/, CampaignInfoImageName, 0LL);
}


int32_t __fastcall CampaignInfoDlg__GetScrollHeightWithName(
        CampaignInfoDlg_o *this,
        System_String_o *imageName,
        const MethodInfo *method)
{
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  if ( !imageName || (this = (CampaignInfoDlg_o *)System_String__Split(imageName, 0x5Fu, 0, 0LL), result = 0, !this) )
    sub_1BCAA3C(this, imageName);
  if ( LODWORD(this->fields.m_CancellationTokenSource) <= 2 )
    sub_1BCAA44(this, imageName);
  System_Int32__TryParse((System_String_o *)this->fields.baseWindow, &result, 0LL);
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CampaignInfoDlg__GetTuorialImageName(
        CampaignInfoDlg_o *this,
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

  if ( (byte_4B10DA1 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&imgId, method);
    sub_1BCA7E0(&StringLiteral_25207/*"{0:D4}"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_24351/*"tutorial_"*/, v6, v7);
    byte_4B10DA1 = 1;
  }
  v11 = imgId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
  v9 = System_String__Format((System_String_o *)StringLiteral_25207/*"{0:D4}"*/, v8, 0LL);
  return System_String__Concat_62401220((System_String_o *)StringLiteral_24351/*"tutorial_"*/, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CampaignInfoDlg__GetTuorialImagePath(
        CampaignInfoDlg_o *this,
        int32_t imgId,
        const MethodInfo *method)
{
  System_String_o *TuorialImageName; // x0

  if ( (byte_4B10DA0 & 1) == 0 )
  {
    this = (CampaignInfoDlg_o *)sub_1BCA7E0(&StringLiteral_14759/*"Tutorial/"*/, *(_QWORD *)&imgId, method);
    byte_4B10DA0 = 1;
  }
  TuorialImageName = CampaignInfoDlg__GetTuorialImageName(this, imgId, method);
  return System_String__Concat_62401220((System_String_o *)StringLiteral_14759/*"Tutorial/"*/, TuorialImageName, 0LL);
}


void __fastcall CampaignInfoDlg__Init(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  this->fields.isButtonEnable = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, v5);
}


void __fastcall CampaignInfoDlg__LoadAlpha(
        CampaignInfoDlg_o *this,
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
  Il2CppObject *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  CampaignInfoDlg_c *v20; // x0
  System_String_o *alphaImgPath; // x19
  AssetLoader_LoadEndDataHandler_o *v22; // x20
  __int64 v23; // x1

  if ( (byte_4B10DA9 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, callback, method);
    sub_1BCA7E0(&CampaignInfoDlg_TypeInfo, v6, v7);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_CampaignInfoDlg___c__DisplayClass45_0__LoadAlpha_b__0__, v10, v11);
    sub_1BCA7E0(&CampaignInfoDlg___c__DisplayClass45_0_TypeInfo, v12, v13);
    byte_4B10DA9 = 1;
  }
  v14 = (Il2CppObject *)sub_1BCAA2C(CampaignInfoDlg___c__DisplayClass45_0_TypeInfo, callback, method, v3);
  System_Object___ctor(v14, 0LL);
  if ( !v14 )
    sub_1BCAA3C(v15, v16);
  v14[1].klass = (Il2CppClass *)this;
  sub_1BCA784(&v14[1], this);
  v14[1].monitor = callback;
  sub_1BCA784(&v14[1].monitor, callback);
  this->fields.alphaTexLoadRequested = 1;
  v20 = CampaignInfoDlg_TypeInfo;
  if ( !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo, v17);
    v20 = CampaignInfoDlg_TypeInfo;
  }
  alphaImgPath = v20->static_fields->alphaImgPath;
  v22 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v17, v18, v19);
  AssetLoader_LoadEndDataHandler___ctor(v22, v14, Method_CampaignInfoDlg___c__DisplayClass45_0__LoadAlpha_b__0__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v23);
  AssetManager__loadAssetStorage(alphaImgPath, v22, 1, 0LL);
}


void __fastcall CampaignInfoDlg__LoadBase(CampaignInfoDlg_o *this, System_Action_o *callback, const MethodInfo *method)
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
  Il2CppObject *v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  CampaignInfoDlg_c *v19; // x0
  System_String_o *TuorialImagePath; // x19
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  AssetLoader_LoadEndDataHandler_o *v24; // x21
  __int64 v25; // x1

  if ( (byte_4B10DA8 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, callback, method);
    sub_1BCA7E0(&CampaignInfoDlg_TypeInfo, v6, v7);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_CampaignInfoDlg___c__DisplayClass44_0__LoadBase_b__0__, v10, v11);
    sub_1BCA7E0(&CampaignInfoDlg___c__DisplayClass44_0_TypeInfo, v12, v13);
    byte_4B10DA8 = 1;
  }
  v14 = (Il2CppObject *)sub_1BCAA2C(CampaignInfoDlg___c__DisplayClass44_0_TypeInfo, callback, method, v3);
  System_Object___ctor(v14, 0LL);
  if ( !v14 )
    sub_1BCAA3C(v15, v16);
  v14[1].klass = (Il2CppClass *)this;
  sub_1BCA784(&v14[1], this);
  v14[1].monitor = callback;
  sub_1BCA784(&v14[1].monitor, callback);
  this->fields.baseTexLoadRequested = 1;
  v19 = CampaignInfoDlg_TypeInfo;
  if ( !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo, v17);
    v19 = CampaignInfoDlg_TypeInfo;
  }
  TuorialImagePath = CampaignInfoDlg__GetTuorialImagePath(this, v19->static_fields->baseImgNo, v18);
  v24 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v21, v22, v23);
  AssetLoader_LoadEndDataHandler___ctor(v24, v14, Method_CampaignInfoDlg___c__DisplayClass44_0__LoadBase_b__0__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v25);
  AssetManager__loadAssetStorage(TuorialImagePath, v24, 1, 0LL);
}


void __fastcall CampaignInfoDlg__LoadImages(
        CampaignInfoDlg_o *this,
        CampaignInformation_array *images,
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
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Action_o *v19; // x20
  const MethodInfo *v20; // x2

  if ( (byte_4B10D9F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, images, method);
    sub_1BCA7E0(&Method_CampaignInfoDlg__LoadImages_b__34_0__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12);
    byte_4B10D9F = 1;
  }
  this->fields._loadIndex = 0;
  v13 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       images,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.ImagePageList = (struct System_Collections_Generic_List_GameObject__o *)v13;
  sub_1BCA784(&this->fields.ImagePageList, v13);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v15);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  v19 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v16, v17, v18);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_CampaignInfoDlg__LoadImages_b__34_0__, 0LL);
  CampaignInfoDlg__LoadAlpha(this, v19, v20);
}


void __fastcall CampaignInfoDlg__LoadStart(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  CampaignInfoDlg_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct CampaignInformation_array *infoData; // x8
  __int64 loadIndex; // x9
  CampaignInformation_o *v10; // x8
  __int64 v11; // x1
  System_String_o *CampaignInfoImagePath; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  AssetLoader_LoadEndDataHandler_o *v16; // x21
  __int64 v17; // x1

  v3 = this;
  if ( (byte_4B10DA4 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CampaignInfoDlg__LoadStart_b__40_0__, v4, v5);
    this = (CampaignInfoDlg_o *)sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v6, v7);
    byte_4B10DA4 = 1;
  }
  infoData = v3->fields.infoData;
  if ( !infoData )
    goto LABEL_13;
  loadIndex = v3->fields._loadIndex;
  if ( (unsigned int)loadIndex >= infoData->max_length )
    sub_1BCAA44(this, method);
  v10 = infoData->m_Items[loadIndex];
  if ( !v10 )
LABEL_13:
    sub_1BCAA3C(this, method);
  CampaignInfoImagePath = CampaignInfoDlg__GetCampaignInfoImagePath(v3, v10->fields.imageId, v2);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v11);
  if ( AssetManager__isExistAssetStorage(CampaignInfoImagePath, 0LL) )
  {
    v16 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v13, v14, v15);
    AssetLoader_LoadEndDataHandler___ctor(v16, (Il2CppObject *)v3, Method_CampaignInfoDlg__LoadStart_b__40_0__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v17);
    AssetManager__loadAssetStorage(CampaignInfoImagePath, v16, 1, 0LL);
  }
}


void __fastcall CampaignInfoDlg__OnCancelButton(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  struct CampaignInfoDlg_onButtonDelgate_o *btnCallbackFunc; // x8

  if ( (byte_4B10DB0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CampaignInfoDlg_OnCancelButton__, method, v2);
    byte_4B10DB0 = 1;
  }
  if ( !this->fields.IsFading && this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v4 = Method_CampaignInfoDlg_OnCancelButton__;
    if ( (*((_BYTE *)Method_CampaignInfoDlg_OnCancelButton__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8();
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    btnCallbackFunc = this->fields.btnCallbackFunc;
    if ( !btnCallbackFunc )
      sub_1BCAA3C(v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))btnCallbackFunc->fields.m_target)(
      btnCallbackFunc->fields.original_method_info,
      0LL,
      *(_QWORD *)&btnCallbackFunc->fields.extra_arg);
  }
}


void __fastcall CampaignInfoDlg__OnClickClose(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  struct CampaignInfoDlg_onButtonDelgate_o *btnCallbackFunc; // x8

  if ( (byte_4B10DB1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CampaignInfoDlg_OnClickClose__, method, v2);
    byte_4B10DB1 = 1;
  }
  if ( !this->fields.IsFading && this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v4 = Method_CampaignInfoDlg_OnClickClose__;
    if ( (*((_BYTE *)Method_CampaignInfoDlg_OnClickClose__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8();
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    btnCallbackFunc = this->fields.btnCallbackFunc;
    if ( !btnCallbackFunc )
      sub_1BCAA3C(v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))btnCallbackFunc->fields.m_target)(
      btnCallbackFunc->fields.original_method_info,
      0LL,
      *(_QWORD *)&btnCallbackFunc->fields.extra_arg);
  }
}


void __fastcall CampaignInfoDlg__OnDecideButton(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  struct CampaignInfoDlg_onButtonDelgate_o *btnCallbackFunc; // x8

  if ( (byte_4B10DAF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CampaignInfoDlg_OnDecideButton__, method, v2);
    byte_4B10DAF = 1;
  }
  if ( !this->fields.IsFading && this->fields.isButtonEnable )
  {
    v4 = Method_CampaignInfoDlg_OnDecideButton__;
    if ( (*((_BYTE *)Method_CampaignInfoDlg_OnDecideButton__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8();
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0LL);
    btnCallbackFunc = this->fields.btnCallbackFunc;
    if ( !btnCallbackFunc )
      sub_1BCAA3C(v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))btnCallbackFunc->fields.m_target)(
      btnCallbackFunc->fields.original_method_info,
      1LL,
      *(_QWORD *)&btnCallbackFunc->fields.extra_arg);
  }
}


void __fastcall CampaignInfoDlg__Open(
        CampaignInfoDlg_o *this,
        CampaignInfoEntity_o *cInfo,
        System_String_o *cancelBtnMsg,
        System_String_o *decideBtnMsg,
        bool activeDecide,
        CampaignInfoDlg_onButtonDelgate_o *onClickButton,
        const MethodInfo *method)
{
  UILabel_o *DecideBtnLb; // x0
  __int64 v14; // x1
  struct CampaignInformation_array *script; // x1
  const MethodInfo *v16; // x2
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  CampaignInfoDlg_c *v19; // x0
  CampaignInformation_array *v20; // x1
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x2

  if ( (byte_4B10D9E & 1) == 0 )
  {
    sub_1BCA7E0(&CampaignInfoDlg_TypeInfo, cInfo, cancelBtnMsg);
    byte_4B10D9E = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    CampaignInfoDlg__Init(this, (const MethodInfo *)cInfo);
    this->fields.IsInitialized = 1;
  }
  CampaignInfoDlg__SetTouchMask(this, 0, (const MethodInfo *)cancelBtnMsg);
  if ( !cInfo )
    goto LABEL_15;
  script = cInfo->fields.script;
  this->fields.infoData = script;
  sub_1BCA784(&this->fields.infoData, script);
  this->fields.isButtonEnable = 0;
  this->fields.isNotExistImg = 0;
  CampaignInfoDlg__SetDecideActive(this, activeDecide, v16);
  DecideBtnLb = this->fields.DecideBtnLb;
  if ( !DecideBtnLb )
    goto LABEL_15;
  UILabel__set_text(DecideBtnLb, decideBtnMsg, 0LL);
  DecideBtnLb = this->fields.CancelBtnLb;
  if ( !DecideBtnLb )
    goto LABEL_15;
  UILabel__set_text(DecideBtnLb, cancelBtnMsg, 0LL);
  this->fields.btnCallbackFunc = onClickButton;
  sub_1BCA784(&this->fields.btnCallbackFunc, onClickButton);
  v19 = CampaignInfoDlg_TypeInfo;
  if ( !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo, v17);
    v19 = CampaignInfoDlg_TypeInfo;
  }
  this->fields.setPosX = (float)v19->static_fields->basePosX;
  BaseDialog__SetMask((BaseDialog_o *)this, 0, v18);
  CampaignInfoDlg__LoadImages(this, v20, v21);
  DecideBtnLb = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !DecideBtnLb )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)DecideBtnLb, 1, 0LL);
  CampaignInfoDlg__UpdateButtons(this, 1, v22);
  if ( this->fields.isNotExistImg )
  {
    DecideBtnLb = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( DecideBtnLb )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)DecideBtnLb, 0, 0LL);
      return;
    }
LABEL_15:
    sub_1BCAA3C(DecideBtnLb, v14);
  }
}


void __fastcall CampaignInfoDlg__OpenWindow(CampaignInfoDlg_o *this, const MethodInfo *method)
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
  const MethodInfo *v14; // x3

  if ( (byte_4B10DAA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CampaignInfoDlg_EndOpen__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    byte_4B10DAA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v9);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_CampaignInfoDlg_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v13, 1, v14);
}


void __fastcall CampaignInfoDlg__SetBaseImage(
        CampaignInfoDlg_o *this,
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
  UnityEngine_Component_o *BaseImg; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  __int64 v17; // x1
  int32_t layer; // w22
  UnityEngine_Shader_o *v19; // x22
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  UnityEngine_Material_o *v23; // x21
  AssetData_o *alphaTexAssetData; // x20
  Il2CppObject *Object_object__49237568; // x0

  if ( (byte_4B10DA5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_Texture2D____76836720, tex, method);
    sub_1BCA7E0(&CampaignInfoDlg_TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_Material_TypeInfo, v7, v8);
    sub_1BCA7E0(&NGUITools_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_5048/*"Custom/SpriteWithMask"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_16436/*"_MaskTex"*/, v13, v14);
    byte_4B10DA5 = 1;
  }
  BaseImg = (UnityEngine_Component_o *)this->fields.BaseImg;
  if ( !BaseImg )
    goto LABEL_15;
  gameObject = UnityEngine_Component__get_gameObject(BaseImg, 0LL);
  BaseImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !BaseImg )
    goto LABEL_15;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)BaseImg, 0LL);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v17);
  NGUITools__SetLayer(gameObject, layer, 0LL);
  v19 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5048/*"Custom/SpriteWithMask"*/, 0LL);
  v23 = (UnityEngine_Material_o *)sub_1BCAA2C(UnityEngine_Material_TypeInfo, v20, v21, v22);
  UnityEngine_Material___ctor(v23, v19, 0LL);
  BaseImg = (UnityEngine_Component_o *)this->fields.BaseImg;
  if ( !BaseImg )
    goto LABEL_15;
  BaseImg = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, UnityEngine_Material_o *, Il2CppMethodPointer))BaseImg->klass[1].vtable._2_GetHashCode.method)(
                                         BaseImg,
                                         v23,
                                         BaseImg->klass[1].vtable._3_ToString.methodPtr);
  if ( !v23 )
    goto LABEL_15;
  UnityEngine_Material__set_mainTexture(v23, (UnityEngine_Texture_o *)tex, 0LL);
  BaseImg = (UnityEngine_Component_o *)CampaignInfoDlg_TypeInfo;
  alphaTexAssetData = this->fields.alphaTexAssetData;
  if ( !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
    BaseImg = (UnityEngine_Component_o *)j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo, tex);
  if ( !alphaTexAssetData
    || (Object_object__49237568 = AssetData__GetObject_object__49237568(
                                    alphaTexAssetData,
                                    CampaignInfoDlg_TypeInfo->static_fields->alphaImgName,
                                    (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_Texture2D____76836720),
        UnityEngine_Material__SetTexture(
          v23,
          (System_String_o *)StringLiteral_16436/*"_MaskTex"*/,
          (UnityEngine_Texture_o *)Object_object__49237568,
          0LL),
        (BaseImg = (UnityEngine_Component_o *)this->fields.BaseImg) == 0LL)
    || (BaseImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(BaseImg, 0LL)) == 0LL )
  {
LABEL_15:
    sub_1BCAA3C(BaseImg, tex);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)BaseImg, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CampaignInfoDlg__SetDecideActive(CampaignInfoDlg_o *this, bool onOff, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_GameObject_o *DecideButton; // x0
  float v8; // s0
  float v9; // s3
  float v10; // s1
  float v11; // s2

  if ( (byte_4B10DB2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, onOff, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v5, v6);
    byte_4B10DB2 = 1;
  }
  DecideButton = this->fields.DecideButton;
  if ( !DecideButton )
    goto LABEL_10;
  DecideButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               DecideButton,
                                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !DecideButton )
    goto LABEL_10;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)DecideButton, onOff, 0LL);
  DecideButton = this->fields.DecideButton;
  if ( !DecideButton )
    goto LABEL_10;
  DecideButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               DecideButton,
                                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v8 = 0.5;
  if ( onOff )
    v8 = 1.0;
  if ( !DecideButton )
LABEL_10:
    sub_1BCAA3C(DecideButton, onOff);
  v9 = 1.0;
  v10 = v8;
  v11 = v8;
  UIWidget__set_color((UIWidget_o *)DecideButton, *(UnityEngine_Color_o *)&v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CampaignInfoDlg__SetTouchMask(CampaignInfoDlg_o *this, bool isDisp, const MethodInfo *method)
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
void __fastcall CampaignInfoDlg__UpdateButtons(CampaignInfoDlg_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_GameObject_o *CloseButton; // x0
  bool v5; // w1

  CloseButton = this->fields.CloseButton;
  if ( !CloseButton )
    goto LABEL_10;
  if ( !isDisp )
  {
    UnityEngine_GameObject__SetActive(CloseButton, 0, 0LL);
    CloseButton = this->fields.CancelButton;
    if ( CloseButton )
    {
      UnityEngine_GameObject__SetActive(CloseButton, 0, 0LL);
      CloseButton = this->fields.DecideButton;
      if ( CloseButton )
      {
        v5 = 0;
        goto LABEL_9;
      }
    }
LABEL_10:
    sub_1BCAA3C(CloseButton, isDisp);
  }
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  CloseButton = this->fields.CancelButton;
  if ( !CloseButton )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0LL);
  CloseButton = this->fields.DecideButton;
  if ( !CloseButton )
    goto LABEL_10;
  v5 = 1;
LABEL_9:
  UnityEngine_GameObject__SetActive(CloseButton, v5, 0LL);
}


void __fastcall CampaignInfoDlg__UpdatePage(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  CampaignInfoDlg_c *v8; // x0
  UnityEngine_GameObject_o *ImageRoot; // x20
  UITweener_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  EventDelegate_Callback_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_4B10DAB & 1) == 0 )
  {
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CampaignInfoDlg__UpdatePage_b__47_0__, v4, v5);
    sub_1BCA7E0(&CampaignInfoDlg_TypeInfo, v6, v7);
    byte_4B10DAB = 1;
  }
  this->fields.IsFading = 1;
  v8 = CampaignInfoDlg_TypeInfo;
  ImageRoot = this->fields.ImageRoot;
  if ( !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo, method);
    v8 = CampaignInfoDlg_TypeInfo;
  }
  v10 = (UITweener_o *)TweenAlpha__Begin(ImageRoot, v8->static_fields->FADE_TIME, 1.0, 0LL);
  v14 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v11, v12, v13);
  EventDelegate_Callback___ctor(v14, (Il2CppObject *)this, Method_CampaignInfoDlg__UpdatePage_b__47_0__, 0LL);
  if ( !v10 )
    sub_1BCAA3C(v15, v16);
  UITweener__SetOnFinished(v10, v14, 0LL);
}


void __fastcall CampaignInfoDlg___LoadImages_b__34_0(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4B10DB5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CampaignInfoDlg_LoadStart__, v5, v6);
    byte_4B10DB5 = 1;
  }
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_CampaignInfoDlg_LoadStart__, 0LL);
  CampaignInfoDlg__LoadBase(this, v7, v8);
}


void __fastcall CampaignInfoDlg___LoadStart_b__40_0(
        CampaignInfoDlg_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Action_o *v10; // x21
  const MethodInfo *v11; // x3

  v4 = (Il2CppObject *)this;
  if ( (byte_4B10DB6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, data, method);
    this = (CampaignInfoDlg_o *)sub_1BCA7E0(&Method_CampaignInfoDlg__LoadStart_b__40_1__, v5, v6);
    byte_4B10DB6 = 1;
  }
  if ( !data )
    sub_1BCAA3C(this, data);
  AssetData__GetObjectNameList(data, 0LL);
  v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
  System_Action___ctor(v10, v4, Method_CampaignInfoDlg__LoadStart_b__40_1__, 0LL);
  CampaignInfoDlg__AddScrollImg((CampaignInfoDlg_o *)v4, data, v10, v11);
}


void __fastcall CampaignInfoDlg___LoadStart_b__40_1(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CampaignInfoDlg__AfterLoad(this, 1, v2);
}


void __fastcall CampaignInfoDlg___UpdatePage_b__47_0(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  CampaignInfoDlg__refreshCurrent(this, method);
  this->fields.IsFading = 0;
  CampaignInfoDlg__UpdateButtons(this, 1, v3);
}


void __fastcall CampaignInfoDlg__refreshCurrent(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *ScrView; // x20
  __int64 v5; // x1
  UIScrollView_o *v6; // x0

  if ( (byte_4B10DAC & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B10DAC = 1;
  }
  ScrView = (UnityEngine_Object_o *)this->fields.ScrView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(ScrView, 0LL, 0LL) )
  {
    v6 = this->fields.ScrView;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    UIScrollView__ResetPosition(v6, 0LL);
  }
}


void __fastcall CampaignInfoDlg___c__DisplayClass44_0___ctor(
        CampaignInfoDlg___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CampaignInfoDlg___c__DisplayClass44_0___LoadBase_b__0(
        CampaignInfoDlg___c__DisplayClass44_0_o *this,
        AssetData_o *data,
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
  CampaignInfoDlg_o *_4__this; // x0
  UnityEngine_Shader_o *v14; // x22
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  UnityEngine_Material_o *v18; // x21
  struct CampaignInfoDlg_o *v19; // x8
  const MethodInfo *v20; // x2
  struct CampaignInfoDlg_o *v21; // x23
  struct CampaignInfoDlg_o *v22; // x8
  Il2CppObject *Object_object__49237568; // x0

  if ( (byte_4B10DB8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_Texture2D____76836720, data, method);
    sub_1BCA7E0(&CampaignInfoDlg_TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_Material_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_5048/*"Custom/SpriteWithMask"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_16436/*"_MaskTex"*/, v11, v12);
    byte_4B10DB8 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  _4__this->fields.baseTexAssetData = data;
  sub_1BCA784(&_4__this->fields.baseTexAssetData, data);
  v14 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5048/*"Custom/SpriteWithMask"*/, 0LL);
  v18 = (UnityEngine_Material_o *)sub_1BCAA2C(UnityEngine_Material_TypeInfo, v15, v16, v17);
  UnityEngine_Material___ctor(v18, v14, 0LL);
  v19 = this->fields.__4__this;
  if ( !v19 )
    goto LABEL_14;
  _4__this = (CampaignInfoDlg_o *)v19->fields.BaseImg;
  if ( !_4__this )
    goto LABEL_14;
  (*(void (__fastcall **)(CampaignInfoDlg_o *, UnityEngine_Material_o *, Il2CppMethodPointer))&_4__this->klass[1]._2.naturalAligment)(
    _4__this,
    v18,
    _4__this->klass[1].vtable._0_Equals.methodPtr);
  _4__this = (CampaignInfoDlg_o *)CampaignInfoDlg_TypeInfo;
  v21 = this->fields.__4__this;
  if ( !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
    _4__this = (CampaignInfoDlg_o *)j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo, data);
  if ( !v21
    || (_4__this = (CampaignInfoDlg_o *)CampaignInfoDlg__GetTuorialImageName(
                                          _4__this,
                                          CampaignInfoDlg_TypeInfo->static_fields->baseImgNo,
                                          v20),
        !data)
    || (_4__this = (CampaignInfoDlg_o *)AssetData__GetObject_object__49237568(
                                          data,
                                          (System_String_o *)_4__this,
                                          (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_Texture2D____76836720),
        !v18)
    || (UnityEngine_Material__set_mainTexture(v18, (UnityEngine_Texture_o *)_4__this, 0LL),
        (v22 = this->fields.__4__this) == 0LL)
    || (_4__this = (CampaignInfoDlg_o *)v22->fields.alphaTexAssetData) == 0LL )
  {
LABEL_14:
    sub_1BCAA3C(_4__this, data);
  }
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              (AssetData_o *)_4__this,
                              CampaignInfoDlg_TypeInfo->static_fields->alphaImgName,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_Texture2D____76836720);
  UnityEngine_Material__SetTexture(
    v18,
    (System_String_o *)StringLiteral_16436/*"_MaskTex"*/,
    (UnityEngine_Texture_o *)Object_object__49237568,
    0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall CampaignInfoDlg___c__DisplayClass45_0___ctor(
        CampaignInfoDlg___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CampaignInfoDlg___c__DisplayClass45_0___LoadAlpha_b__0(
        CampaignInfoDlg___c__DisplayClass45_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  struct CampaignInfoDlg_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, data);
  _4__this->fields.alphaTexAssetData = data;
  sub_1BCA784(&_4__this->fields.alphaTexAssetData, data);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CampaignInfoDlg_onButtonDelgate___ctor(
        CampaignInfoDlg_onButtonDelgate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A04E60;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A04E18;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall CampaignInfoDlg_onButtonDelgate__BeginInvoke(
        CampaignInfoDlg_onButtonDelgate_o *this,
        bool decide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = decide;
  if ( (byte_4B10DB7 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, decide, callback);
    byte_4B10DB7 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall CampaignInfoDlg_onButtonDelgate__EndInvoke(
        CampaignInfoDlg_onButtonDelgate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall CampaignInfoDlg_onButtonDelgate__Invoke(
        CampaignInfoDlg_onButtonDelgate_o *this,
        bool decide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    decide,
    *(_QWORD *)&this->fields.extra_arg);
}