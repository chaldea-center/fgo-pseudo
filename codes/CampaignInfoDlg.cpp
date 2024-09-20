void __fastcall CampaignInfoDlg___cctor(const MethodInfo *method)
{
  struct CampaignInfoDlg_StaticFields *static_fields; // x0
  __int64 v2; // x1
  __int64 v3; // x1
  struct CampaignInfoDlg_StaticFields *v4; // x0

  if ( (byte_4A560D4 & 1) == 0 )
  {
    sub_1B885B0(&CampaignInfoDlg_TypeInfo);
    sub_1B885B0(&StringLiteral_14597/*"Tutorial/tutorial_alpha"*/);
    sub_1B885B0(&StringLiteral_24101/*"tutorial_alpha"*/);
    byte_4A560D4 = 1;
  }
  static_fields = CampaignInfoDlg_TypeInfo->static_fields;
  static_fields->FADE_TIME = 0.3;
  v2 = StringLiteral_14597/*"Tutorial/tutorial_alpha"*/;
  static_fields->alphaImgPath = (struct System_String_o *)StringLiteral_14597/*"Tutorial/tutorial_alpha"*/;
  sub_1B88554(&static_fields->alphaImgPath, v2);
  v3 = StringLiteral_24101/*"tutorial_alpha"*/;
  v4 = CampaignInfoDlg_TypeInfo->static_fields;
  v4->alphaImgName = (struct System_String_o *)StringLiteral_24101/*"tutorial_alpha"*/;
  sub_1B88554(&v4->alphaImgName, v3);
  *(_QWORD *)&CampaignInfoDlg_TypeInfo->static_fields->baseImgNo = 0xD200000006LL;
}


void __fastcall CampaignInfoDlg___ctor(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  if ( (byte_4A560D3 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A560D3 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, method);
}


void __fastcall CampaignInfoDlg__AddScrollImg(
        CampaignInfoDlg_o *this,
        AssetData_o *data,
        System_Action_o *callback,
        const MethodInfo *method)
{
  CampaignInfoDlg_o *v6; // x21
  int m_CancellationTokenSource; // w8
  CampaignInfoDlg_o *v8; // x25
  unsigned int v9; // w27
  int32_t v10; // w21
  CampaignInfoDlg_o *v11; // x24
  CampaignInfoDlg_o *v12; // x19
  CampaignInfoDlg_c **v13; // x20
  System_String_o **v14; // x20
  CampaignInfoDlg_o *v15; // t1
  char v16; // w26
  const MethodInfo *v17; // x2
  CampaignInfoDlg_o *v18; // x23
  Il2CppObject *ImagePrefab; // x22
  Il2CppObject *v20; // x22
  System_String_o *v21; // x0
  int32_t layer; // w25
  const MethodInfo *v23; // x5
  struct CampaignInformation_array *infoData; // x8
  __int64 loadIndex; // x9
  CampaignInfoDlg_o *v26; // x23
  CampaignInfoDlg_o *v27; // x23
  __int64 v28; // x8
  _QWORD *v29; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v31; // x8
  System_Action_o *v32; // [xsp+0h] [xbp-70h]
  CampaignInfoDlg_o *v33; // [xsp+8h] [xbp-68h]
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4A560C6 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_Texture2D____76085376);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CampaignInfoItem___);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1B885B0(&NGUITools_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_16737/*"alpha"*/);
    this = (CampaignInfoDlg_o *)sub_1B885B0(&StringLiteral_7476/*"Image"*/);
    byte_4A560C6 = 1;
  }
  if ( !data )
    goto LABEL_38;
  this = (CampaignInfoDlg_o *)AssetData__GetObjectNameList(data, 0LL);
  if ( !this )
    goto LABEL_38;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v8 = this;
  v32 = callback;
  v33 = v6;
  if ( m_CancellationTokenSource >= 1 )
  {
    v9 = 0;
    v10 = 0;
    v11 = 0LL;
    v12 = 0LL;
    while ( v9 < m_CancellationTokenSource )
    {
      v13 = &v8->klass + (int)v9;
      v15 = (CampaignInfoDlg_o *)v13[4];
      v14 = (System_String_o **)(v13 + 4);
      this = v15;
      if ( !v15 )
        goto LABEL_38;
      this = (CampaignInfoDlg_o *)System_String__Contains(
                                    (System_String_o *)this,
                                    (System_String_o *)StringLiteral_16737/*"alpha"*/,
                                    0LL);
      if ( v9 >= LODWORD(v8->fields.m_CancellationTokenSource) )
        break;
      v16 = (char)this;
      this = (CampaignInfoDlg_o *)AssetData__GetObject_object__48635516(
                                    data,
                                    *v14,
                                    (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_Texture2D____76085376);
      v18 = this;
      if ( (v16 & 1) == 0 )
      {
        if ( v9 >= LODWORD(v8->fields.m_CancellationTokenSource) )
          break;
        v12 = this;
        this = (CampaignInfoDlg_o *)CampaignInfoDlg__GetScrollHeightWithName(this, *v14, v17);
        v10 = (int)this;
        v18 = v11;
      }
      m_CancellationTokenSource = (int)v8->fields.m_CancellationTokenSource;
      ++v9;
      v11 = v18;
      if ( (int)v9 >= m_CancellationTokenSource )
        goto LABEL_16;
    }
LABEL_37:
    sub_1B88814(this, data);
  }
  v12 = 0LL;
  v18 = 0LL;
  v10 = 0;
LABEL_16:
  ImagePrefab = (Il2CppObject *)v33->fields.ImagePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v20 = UnityEngine_Object__Instantiate_object_(
          ImagePrefab,
          (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v21 = System_Int32__ToString((int)v33 + 224, 0LL);
  this = (CampaignInfoDlg_o *)System_String__Concat_61707032((System_String_o *)StringLiteral_7476/*"Image"*/, v21, 0LL);
  if ( !v20 )
    goto LABEL_38;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v20, (System_String_o *)this, 0LL);
  this = (CampaignInfoDlg_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v33, 0LL);
  if ( !this )
    goto LABEL_38;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__SetLayer((UnityEngine_GameObject_o *)v20, layer, 0LL);
  this = (CampaignInfoDlg_o *)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)v20,
                                (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CampaignInfoItem___);
  infoData = v33->fields.infoData;
  if ( !infoData )
    goto LABEL_38;
  loadIndex = v33->fields._loadIndex;
  if ( (unsigned int)loadIndex >= infoData->max_length )
    goto LABEL_37;
  if ( !this )
    goto LABEL_38;
  CampaignInfoItem__SetCampaignInfo(
    (CampaignInfoItem_o *)this,
    infoData->m_Items[loadIndex],
    (UnityEngine_Texture2D_o *)v12,
    (UnityEngine_Texture2D_o *)v18,
    v10,
    v23);
  this = (CampaignInfoDlg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v20, 0LL);
  if ( !v33->fields.ImageGrid )
    goto LABEL_38;
  v26 = this;
  this = (CampaignInfoDlg_o *)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)v33->fields.ImageGrid,
                                0LL);
  if ( !v26 )
    goto LABEL_38;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v26, (UnityEngine_Transform_o *)this, 0LL);
  this = (CampaignInfoDlg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v20, 0LL);
  if ( !this )
    goto LABEL_38;
  v34.fields.y = v33->fields.setPosX;
  v34.fields.x = 0.0;
  v34.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v34, 0LL);
  this = (CampaignInfoDlg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v20, 0LL);
  v27 = this;
  if ( !byte_4A55CE6 )
  {
    this = (CampaignInfoDlg_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  if ( !v27
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v27,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        this = (CampaignInfoDlg_o *)v33->fields.ImagePageList,
        v33->fields.setPosX = v33->fields.setPosX - (float)v10,
        !this)
    || (v28 = *(_QWORD *)&this->fields.m_CachedPtr,
        v29 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++HIDWORD(this->fields.m_CancellationTokenSource),
        !v28) )
  {
LABEL_38:
    sub_1B8880C(this, data);
  }
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v28 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      v20,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    v31 = v28 + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v31 + 32) = v20;
    sub_1B88554(v31 + 32, v20);
  }
  ActionExtensions__Call(v32, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CampaignInfoDlg__AfterLoad(CampaignInfoDlg_o *this, int32_t addCount, const MethodInfo *method)
{
  CampaignInfoDlg_o *v4; // x19
  struct CampaignInformation_array *infoData; // x9
  int v6; // w8

  v4 = this;
  if ( (byte_4A560C7 & 1) == 0 )
  {
    this = (CampaignInfoDlg_o *)sub_1B885B0(&StringLiteral_10004/*"OpenWindow"*/);
    byte_4A560C7 = 1;
  }
  infoData = v4->fields.infoData;
  v6 = v4->fields._loadIndex + addCount;
  v4->fields._loadIndex = v6;
  if ( !infoData )
    sub_1B8880C(this, *(_QWORD *)&addCount);
  if ( v6 >= (signed int)infoData->max_length )
  {
    CampaignInfoDlg__UpdatePage(v4, *(const MethodInfo **)&addCount);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)v4,
      (System_String_o *)StringLiteral_10004/*"OpenWindow"*/,
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

  CampaignInfoDlg__Close_30450988(this, 0LL, v2);
}


void __fastcall CampaignInfoDlg__Close_30450988(
        CampaignInfoDlg_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4A560CD & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CampaignInfoDlg_EndClose__);
    byte_4A560CD = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B88554(&this->fields.closeCallbackFunc, callback);
  this->fields.isButtonEnable = 0;
  v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_CampaignInfoDlg_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, v6);
}


void __fastcall CampaignInfoDlg__EndClose(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ImagePageList; // x0
  Il2CppObject *current; // x20
  const MethodInfo *v5; // x2
  CampaignInfoDlg_c *v6; // x0
  System_String_o *alphaImgPath; // x20
  CampaignInfoDlg_c *v8; // x0
  System_String_o *TuorialImagePath; // x20
  struct CampaignInformation_array *infoData; // x23
  int max_length; // w8
  __int64 v12; // x24
  CampaignInformation_o *v13; // x8
  System_String_o *CampaignInfoImagePath; // x21
  struct System_Action_o *closeCallbackFunc; // x20
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A560CE & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&CampaignInfoDlg_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A560CE = 1;
  }
  memset(&v17, 0, sizeof(v17));
  ImagePageList = (System_Collections_Generic_List_object__o *)this->fields.ImagePageList;
  if ( !ImagePageList )
    goto LABEL_34;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    ImagePageList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  if ( this->fields.alphaTexLoadRequested )
  {
    v6 = CampaignInfoDlg_TypeInfo;
    if ( !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
      v6 = CampaignInfoDlg_TypeInfo;
    }
    alphaImgPath = v6->static_fields->alphaImgPath;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(alphaImgPath, 0LL);
    this->fields.alphaTexAssetData = 0LL;
    ImagePageList = (System_Collections_Generic_List_object__o *)sub_1B88554(&this->fields.alphaTexAssetData, 0LL);
    this->fields.alphaTexLoadRequested = 0;
  }
  if ( this->fields.baseTexLoadRequested )
  {
    v8 = CampaignInfoDlg_TypeInfo;
    if ( !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
      v8 = CampaignInfoDlg_TypeInfo;
    }
    TuorialImagePath = CampaignInfoDlg__GetTuorialImagePath(this, v8->static_fields->baseImgNo, v5);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(TuorialImagePath, 0LL);
    this->fields.baseTexAssetData = 0LL;
    ImagePageList = (System_Collections_Generic_List_object__o *)sub_1B88554(&this->fields.baseTexAssetData, 0LL);
    this->fields.baseTexLoadRequested = 0;
  }
  infoData = this->fields.infoData;
  if ( infoData )
  {
    max_length = infoData->max_length;
    if ( max_length >= 1 )
    {
      v12 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v12 >= max_length )
          sub_1B88814(ImagePageList, method);
        v13 = infoData->m_Items[v12];
        if ( !v13 )
          break;
        CampaignInfoImagePath = CampaignInfoDlg__GetCampaignInfoImagePath(this, v13->fields.imageId, v5);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetManager__releaseAssetStorage(CampaignInfoImagePath, 0LL);
        max_length = infoData->max_length;
        if ( (int)++v12 >= max_length )
          goto LABEL_29;
      }
LABEL_34:
      sub_1B8880C(ImagePageList, method);
    }
LABEL_29:
    this->fields.infoData = 0LL;
    sub_1B88554(&this->fields.infoData, 0LL);
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
    sub_1B88554(&this->fields.closeCallbackFunc, 0LL);
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


System_String_o *__fastcall CampaignInfoDlg__GetCampaignInfoImageName(
        CampaignInfoDlg_o *this,
        int32_t imgId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A560C3 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_24952/*"{0:D4}"*/);
    sub_1B885B0(&StringLiteral_20650/*"info_"*/);
    byte_4A560C3 = 1;
  }
  v9 = imgId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9, method, v3, v4);
  v7 = System_String__Format((System_String_o *)StringLiteral_24952/*"{0:D4}"*/, v6, 0LL);
  return System_String__Concat_61707032((System_String_o *)StringLiteral_20650/*"info_"*/, v7, 0LL);
}


System_String_o *__fastcall CampaignInfoDlg__GetCampaignInfoImagePath(
        CampaignInfoDlg_o *this,
        int32_t imgId,
        const MethodInfo *method)
{
  System_String_o *CampaignInfoImageName; // x0

  if ( (byte_4A560C2 & 1) == 0 )
  {
    this = (CampaignInfoDlg_o *)sub_1B885B0(&StringLiteral_3989/*"CampaignInfo/"*/);
    byte_4A560C2 = 1;
  }
  CampaignInfoImageName = CampaignInfoDlg__GetCampaignInfoImageName(this, imgId, method);
  return System_String__Concat_61707032((System_String_o *)StringLiteral_3989/*"CampaignInfo/"*/, CampaignInfoImageName, 0LL);
}


int32_t __fastcall CampaignInfoDlg__GetScrollHeightWithName(
        CampaignInfoDlg_o *this,
        System_String_o *imageName,
        const MethodInfo *method)
{
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  if ( !imageName || (this = (CampaignInfoDlg_o *)System_String__Split(imageName, 0x5Fu, 0, 0LL), result = 0, !this) )
    sub_1B8880C(this, imageName);
  if ( LODWORD(this->fields.m_CancellationTokenSource) <= 2 )
    sub_1B88814(this, imageName);
  System_Int32__TryParse((System_String_o *)this->fields.baseWindow, &result, 0LL);
  return result;
}


System_String_o *__fastcall CampaignInfoDlg__GetTuorialImageName(
        CampaignInfoDlg_o *this,
        int32_t imgId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A560C1 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_24952/*"{0:D4}"*/);
    sub_1B885B0(&StringLiteral_24099/*"tutorial_"*/);
    byte_4A560C1 = 1;
  }
  v9 = imgId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9, method, v3, v4);
  v7 = System_String__Format((System_String_o *)StringLiteral_24952/*"{0:D4}"*/, v6, 0LL);
  return System_String__Concat_61707032((System_String_o *)StringLiteral_24099/*"tutorial_"*/, v7, 0LL);
}


System_String_o *__fastcall CampaignInfoDlg__GetTuorialImagePath(
        CampaignInfoDlg_o *this,
        int32_t imgId,
        const MethodInfo *method)
{
  System_String_o *TuorialImageName; // x0

  if ( (byte_4A560C0 & 1) == 0 )
  {
    this = (CampaignInfoDlg_o *)sub_1B885B0(&StringLiteral_14594/*"Tutorial/"*/);
    byte_4A560C0 = 1;
  }
  TuorialImageName = CampaignInfoDlg__GetTuorialImageName(this, imgId, method);
  return System_String__Concat_61707032((System_String_o *)StringLiteral_14594/*"Tutorial/"*/, TuorialImageName, 0LL);
}


void __fastcall CampaignInfoDlg__Init(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  this->fields.isButtonEnable = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, v5);
}


void __fastcall CampaignInfoDlg__LoadAlpha(
        CampaignInfoDlg_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  CampaignInfoDlg_c *v8; // x0
  System_String_o *alphaImgPath; // x19
  AssetLoader_LoadEndDataHandler_o *v10; // x20

  if ( (byte_4A560C9 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&CampaignInfoDlg_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&Method_CampaignInfoDlg___c__DisplayClass45_0__LoadAlpha_b__0__);
    sub_1B885B0(&CampaignInfoDlg___c__DisplayClass45_0_TypeInfo);
    byte_4A560C9 = 1;
  }
  v5 = (Il2CppObject *)sub_1B887FC(CampaignInfoDlg___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor(v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  v5[1].klass = (Il2CppClass *)this;
  sub_1B88554(&v5[1], this);
  v5[1].monitor = callback;
  sub_1B88554(&v5[1].monitor, callback);
  this->fields.alphaTexLoadRequested = 1;
  v8 = CampaignInfoDlg_TypeInfo;
  if ( !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
    v8 = CampaignInfoDlg_TypeInfo;
  }
  alphaImgPath = v8->static_fields->alphaImgPath;
  v10 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v10, v5, Method_CampaignInfoDlg___c__DisplayClass45_0__LoadAlpha_b__0__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(alphaImgPath, v10, 1, 0LL);
}


void __fastcall CampaignInfoDlg__LoadBase(CampaignInfoDlg_o *this, System_Action_o *callback, const MethodInfo *method)
{
  Il2CppObject *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  CampaignInfoDlg_c *v9; // x0
  System_String_o *TuorialImagePath; // x19
  AssetLoader_LoadEndDataHandler_o *v11; // x21

  if ( (byte_4A560C8 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&CampaignInfoDlg_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&Method_CampaignInfoDlg___c__DisplayClass44_0__LoadBase_b__0__);
    sub_1B885B0(&CampaignInfoDlg___c__DisplayClass44_0_TypeInfo);
    byte_4A560C8 = 1;
  }
  v5 = (Il2CppObject *)sub_1B887FC(CampaignInfoDlg___c__DisplayClass44_0_TypeInfo);
  System_Object___ctor(v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  v5[1].klass = (Il2CppClass *)this;
  sub_1B88554(&v5[1], this);
  v5[1].monitor = callback;
  sub_1B88554(&v5[1].monitor, callback);
  this->fields.baseTexLoadRequested = 1;
  v9 = CampaignInfoDlg_TypeInfo;
  if ( !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
    v9 = CampaignInfoDlg_TypeInfo;
  }
  TuorialImagePath = CampaignInfoDlg__GetTuorialImagePath(this, v9->static_fields->baseImgNo, v8);
  v11 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v11, v5, Method_CampaignInfoDlg___c__DisplayClass44_0__LoadBase_b__0__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(TuorialImagePath, v11, 1, 0LL);
}


void __fastcall CampaignInfoDlg__LoadImages(
        CampaignInfoDlg_o *this,
        CampaignInformation_array *images,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x20
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4A560BF & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CampaignInfoDlg__LoadImages_b__34_0__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A560BF = 1;
  }
  this->fields._loadIndex = 0;
  v4 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.ImagePageList = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_1B88554(&this->fields.ImagePageList, v4);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v6);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_CampaignInfoDlg__LoadImages_b__34_0__, 0LL);
  CampaignInfoDlg__LoadAlpha(this, v7, v8);
}


void __fastcall CampaignInfoDlg__LoadStart(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  CampaignInfoDlg_o *v3; // x19
  struct CampaignInformation_array *infoData; // x8
  __int64 loadIndex; // x9
  CampaignInformation_o *v6; // x8
  System_String_o *CampaignInfoImagePath; // x20
  AssetLoader_LoadEndDataHandler_o *v8; // x21

  v3 = this;
  if ( (byte_4A560C4 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_CampaignInfoDlg__LoadStart_b__40_0__);
    this = (CampaignInfoDlg_o *)sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_4A560C4 = 1;
  }
  infoData = v3->fields.infoData;
  if ( !infoData )
    goto LABEL_13;
  loadIndex = v3->fields._loadIndex;
  if ( (unsigned int)loadIndex >= infoData->max_length )
    sub_1B88814(this, method);
  v6 = infoData->m_Items[loadIndex];
  if ( !v6 )
LABEL_13:
    sub_1B8880C(this, method);
  CampaignInfoImagePath = CampaignInfoDlg__GetCampaignInfoImagePath(v3, v6->fields.imageId, v2);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(CampaignInfoImagePath, 0LL) )
  {
    v8 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v8, (Il2CppObject *)v3, Method_CampaignInfoDlg__LoadStart_b__40_0__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(CampaignInfoImagePath, v8, 1, 0LL);
  }
}


void __fastcall CampaignInfoDlg__OnCancelButton(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct CampaignInfoDlg_onButtonDelgate_o *btnCallbackFunc; // x8

  if ( (byte_4A560D0 & 1) == 0 )
  {
    sub_1B885B0(&Method_CampaignInfoDlg_OnCancelButton__);
    byte_4A560D0 = 1;
  }
  if ( !this->fields.IsFading && this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v3 = Method_CampaignInfoDlg_OnCancelButton__;
    if ( (*((_BYTE *)Method_CampaignInfoDlg_OnCancelButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8();
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    btnCallbackFunc = this->fields.btnCallbackFunc;
    if ( !btnCallbackFunc )
      sub_1B8880C(v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))btnCallbackFunc->fields.m_target)(
      btnCallbackFunc->fields.original_method_info,
      0LL,
      *(_QWORD *)&btnCallbackFunc->fields.extra_arg);
  }
}


void __fastcall CampaignInfoDlg__OnClickClose(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct CampaignInfoDlg_onButtonDelgate_o *btnCallbackFunc; // x8

  if ( (byte_4A560D1 & 1) == 0 )
  {
    sub_1B885B0(&Method_CampaignInfoDlg_OnClickClose__);
    byte_4A560D1 = 1;
  }
  if ( !this->fields.IsFading && this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v3 = Method_CampaignInfoDlg_OnClickClose__;
    if ( (*((_BYTE *)Method_CampaignInfoDlg_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8();
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    btnCallbackFunc = this->fields.btnCallbackFunc;
    if ( !btnCallbackFunc )
      sub_1B8880C(v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))btnCallbackFunc->fields.m_target)(
      btnCallbackFunc->fields.original_method_info,
      0LL,
      *(_QWORD *)&btnCallbackFunc->fields.extra_arg);
  }
}


void __fastcall CampaignInfoDlg__OnDecideButton(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct CampaignInfoDlg_onButtonDelgate_o *btnCallbackFunc; // x8

  if ( (byte_4A560CF & 1) == 0 )
  {
    sub_1B885B0(&Method_CampaignInfoDlg_OnDecideButton__);
    byte_4A560CF = 1;
  }
  if ( !this->fields.IsFading && this->fields.isButtonEnable )
  {
    v3 = Method_CampaignInfoDlg_OnDecideButton__;
    if ( (*((_BYTE *)Method_CampaignInfoDlg_OnDecideButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8();
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
    btnCallbackFunc = this->fields.btnCallbackFunc;
    if ( !btnCallbackFunc )
      sub_1B8880C(v5, v6);
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
  const MethodInfo *v17; // x2
  CampaignInfoDlg_c *v18; // x0
  CampaignInformation_array *v19; // x1
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2

  if ( (byte_4A560BE & 1) == 0 )
  {
    sub_1B885B0(&CampaignInfoDlg_TypeInfo);
    byte_4A560BE = 1;
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
  sub_1B88554(&this->fields.infoData, script);
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
  sub_1B88554(&this->fields.btnCallbackFunc, onClickButton);
  v18 = CampaignInfoDlg_TypeInfo;
  if ( !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
    v18 = CampaignInfoDlg_TypeInfo;
  }
  this->fields.setPosX = (float)v18->static_fields->basePosX;
  BaseDialog__SetMask((BaseDialog_o *)this, 0, v17);
  CampaignInfoDlg__LoadImages(this, v19, v20);
  DecideBtnLb = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !DecideBtnLb )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)DecideBtnLb, 1, 0LL);
  CampaignInfoDlg__UpdateButtons(this, 1, v21);
  if ( this->fields.isNotExistImg )
  {
    DecideBtnLb = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( DecideBtnLb )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)DecideBtnLb, 0, 0LL);
      return;
    }
LABEL_15:
    sub_1B8880C(DecideBtnLb, v14);
  }
}


void __fastcall CampaignInfoDlg__OpenWindow(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x3

  if ( (byte_4A560CA & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CampaignInfoDlg_EndOpen__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A560CA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_CampaignInfoDlg_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v5, 1, v6);
}


void __fastcall CampaignInfoDlg__SetBaseImage(
        CampaignInfoDlg_o *this,
        UnityEngine_Texture2D_o *tex,
        const MethodInfo *method)
{
  UnityEngine_Component_o *BaseImg; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  int32_t layer; // w22
  UnityEngine_Shader_o *v8; // x22
  UnityEngine_Material_o *v9; // x21
  AssetData_o *alphaTexAssetData; // x20
  Il2CppObject *Object_object__48635516; // x0

  if ( (byte_4A560C5 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_Texture2D____76085376);
    sub_1B885B0(&CampaignInfoDlg_TypeInfo);
    sub_1B885B0(&UnityEngine_Material_TypeInfo);
    sub_1B885B0(&NGUITools_TypeInfo);
    sub_1B885B0(&StringLiteral_4975/*"Custom/SpriteWithMask"*/);
    sub_1B885B0(&StringLiteral_16267/*"_MaskTex"*/);
    byte_4A560C5 = 1;
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
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__SetLayer(gameObject, layer, 0LL);
  v8 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4975/*"Custom/SpriteWithMask"*/, 0LL);
  v9 = (UnityEngine_Material_o *)sub_1B887FC(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v9, v8, 0LL);
  BaseImg = (UnityEngine_Component_o *)this->fields.BaseImg;
  if ( !BaseImg )
    goto LABEL_15;
  BaseImg = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, UnityEngine_Material_o *, Il2CppMethodPointer))BaseImg->klass[1].vtable._2_GetHashCode.method)(
                                         BaseImg,
                                         v9,
                                         BaseImg->klass[1].vtable._3_ToString.methodPtr);
  if ( !v9 )
    goto LABEL_15;
  UnityEngine_Material__set_mainTexture(v9, (UnityEngine_Texture_o *)tex, 0LL);
  BaseImg = (UnityEngine_Component_o *)CampaignInfoDlg_TypeInfo;
  alphaTexAssetData = this->fields.alphaTexAssetData;
  if ( !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
    BaseImg = (UnityEngine_Component_o *)j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
  if ( !alphaTexAssetData
    || (Object_object__48635516 = AssetData__GetObject_object__48635516(
                                    alphaTexAssetData,
                                    CampaignInfoDlg_TypeInfo->static_fields->alphaImgName,
                                    (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_Texture2D____76085376),
        UnityEngine_Material__SetTexture(
          v9,
          (System_String_o *)StringLiteral_16267/*"_MaskTex"*/,
          (UnityEngine_Texture_o *)Object_object__48635516,
          0LL),
        (BaseImg = (UnityEngine_Component_o *)this->fields.BaseImg) == 0LL)
    || (BaseImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(BaseImg, 0LL)) == 0LL )
  {
LABEL_15:
    sub_1B8880C(BaseImg, tex);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)BaseImg, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CampaignInfoDlg__SetDecideActive(CampaignInfoDlg_o *this, bool onOff, const MethodInfo *method)
{
  UnityEngine_GameObject_o *DecideButton; // x0
  float v6; // s0
  float v7; // s3
  float v8; // s1
  float v9; // s2

  if ( (byte_4A560D2 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    byte_4A560D2 = 1;
  }
  DecideButton = this->fields.DecideButton;
  if ( !DecideButton )
    goto LABEL_10;
  DecideButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               DecideButton,
                                               (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !DecideButton )
    goto LABEL_10;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)DecideButton, onOff, 0LL);
  DecideButton = this->fields.DecideButton;
  if ( !DecideButton )
    goto LABEL_10;
  DecideButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               DecideButton,
                                               (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v6 = 0.5;
  if ( onOff )
    v6 = 1.0;
  if ( !DecideButton )
LABEL_10:
    sub_1B8880C(DecideButton, onOff);
  v7 = 1.0;
  v8 = v6;
  v9 = v6;
  UIWidget__set_color((UIWidget_o *)DecideButton, *(UnityEngine_Color_o *)&v6, 0LL);
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
    sub_1B8880C(TouchMask, isDisp);
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
    sub_1B8880C(CloseButton, isDisp);
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
  CampaignInfoDlg_c *v3; // x0
  UnityEngine_GameObject_o *ImageRoot; // x20
  UITweener_o *v5; // x20
  EventDelegate_Callback_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4A560CB & 1) == 0 )
  {
    sub_1B885B0(&EventDelegate_Callback_TypeInfo);
    sub_1B885B0(&Method_CampaignInfoDlg__UpdatePage_b__47_0__);
    sub_1B885B0(&CampaignInfoDlg_TypeInfo);
    byte_4A560CB = 1;
  }
  this->fields.IsFading = 1;
  v3 = CampaignInfoDlg_TypeInfo;
  ImageRoot = this->fields.ImageRoot;
  if ( !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
    v3 = CampaignInfoDlg_TypeInfo;
  }
  v5 = (UITweener_o *)TweenAlpha__Begin(ImageRoot, v3->static_fields->FADE_TIME, 1.0, 0LL);
  v6 = (EventDelegate_Callback_o *)sub_1B887FC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v6, (Il2CppObject *)this, Method_CampaignInfoDlg__UpdatePage_b__47_0__, 0LL);
  if ( !v5 )
    sub_1B8880C(v7, v8);
  UITweener__SetOnFinished(v5, v6, 0LL);
}


void __fastcall CampaignInfoDlg___LoadImages_b__34_0(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4A560D5 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CampaignInfoDlg_LoadStart__);
    byte_4A560D5 = 1;
  }
  v3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_CampaignInfoDlg_LoadStart__, 0LL);
  CampaignInfoDlg__LoadBase(this, v3, v4);
}


void __fastcall CampaignInfoDlg___LoadStart_b__40_0(
        CampaignInfoDlg_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x20
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x3

  v4 = (Il2CppObject *)this;
  if ( (byte_4A560D6 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (CampaignInfoDlg_o *)sub_1B885B0(&Method_CampaignInfoDlg__LoadStart_b__40_1__);
    byte_4A560D6 = 1;
  }
  if ( !data )
    sub_1B8880C(this, data);
  AssetData__GetObjectNameList(data, 0LL);
  v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v5, v4, Method_CampaignInfoDlg__LoadStart_b__40_1__, 0LL);
  CampaignInfoDlg__AddScrollImg((CampaignInfoDlg_o *)v4, data, v5, v6);
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
  UnityEngine_Object_o *ScrView; // x20
  __int64 v4; // x1
  UIScrollView_o *v5; // x0

  if ( (byte_4A560CC & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A560CC = 1;
  }
  ScrView = (UnityEngine_Object_o *)this->fields.ScrView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(ScrView, 0LL, 0LL) )
  {
    v5 = this->fields.ScrView;
    if ( !v5 )
      sub_1B8880C(0LL, v4);
    UIScrollView__ResetPosition(v5, 0LL);
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
  CampaignInfoDlg_o *_4__this; // x0
  UnityEngine_Shader_o *v6; // x22
  UnityEngine_Material_o *v7; // x21
  struct CampaignInfoDlg_o *v8; // x8
  const MethodInfo *v9; // x2
  struct CampaignInfoDlg_o *v10; // x23
  struct CampaignInfoDlg_o *v11; // x8
  Il2CppObject *Object_object__48635516; // x0

  if ( (byte_4A560D8 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_Texture2D____76085376);
    sub_1B885B0(&CampaignInfoDlg_TypeInfo);
    sub_1B885B0(&UnityEngine_Material_TypeInfo);
    sub_1B885B0(&StringLiteral_4975/*"Custom/SpriteWithMask"*/);
    sub_1B885B0(&StringLiteral_16267/*"_MaskTex"*/);
    byte_4A560D8 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  _4__this->fields.baseTexAssetData = data;
  sub_1B88554(&_4__this->fields.baseTexAssetData, data);
  v6 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4975/*"Custom/SpriteWithMask"*/, 0LL);
  v7 = (UnityEngine_Material_o *)sub_1B887FC(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v7, v6, 0LL);
  v8 = this->fields.__4__this;
  if ( !v8 )
    goto LABEL_14;
  _4__this = (CampaignInfoDlg_o *)v8->fields.BaseImg;
  if ( !_4__this )
    goto LABEL_14;
  (*(void (__fastcall **)(CampaignInfoDlg_o *, UnityEngine_Material_o *, Il2CppMethodPointer))&_4__this->klass[1]._2.naturalAligment)(
    _4__this,
    v7,
    _4__this->klass[1].vtable._0_Equals.methodPtr);
  _4__this = (CampaignInfoDlg_o *)CampaignInfoDlg_TypeInfo;
  v10 = this->fields.__4__this;
  if ( !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
    _4__this = (CampaignInfoDlg_o *)j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
  if ( !v10
    || (_4__this = (CampaignInfoDlg_o *)CampaignInfoDlg__GetTuorialImageName(
                                          _4__this,
                                          CampaignInfoDlg_TypeInfo->static_fields->baseImgNo,
                                          v9),
        !data)
    || (_4__this = (CampaignInfoDlg_o *)AssetData__GetObject_object__48635516(
                                          data,
                                          (System_String_o *)_4__this,
                                          (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_Texture2D____76085376),
        !v7)
    || (UnityEngine_Material__set_mainTexture(v7, (UnityEngine_Texture_o *)_4__this, 0LL),
        (v11 = this->fields.__4__this) == 0LL)
    || (_4__this = (CampaignInfoDlg_o *)v11->fields.alphaTexAssetData) == 0LL )
  {
LABEL_14:
    sub_1B8880C(_4__this, data);
  }
  Object_object__48635516 = AssetData__GetObject_object__48635516(
                              (AssetData_o *)_4__this,
                              CampaignInfoDlg_TypeInfo->static_fields->alphaImgName,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_Texture2D____76085376);
  UnityEngine_Material__SetTexture(
    v7,
    (System_String_o *)StringLiteral_16267/*"_MaskTex"*/,
    (UnityEngine_Texture_o *)Object_object__48635516,
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
    sub_1B8880C(0LL, data);
  _4__this->fields.alphaTexAssetData = data;
  sub_1B88554(&_4__this->fields.alphaTexAssetData, data);
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
  sub_1B88554(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19C6CF8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C6CB0;
}


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
  if ( (byte_4A560D7 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A560D7 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall CampaignInfoDlg_onButtonDelgate__EndInvoke(
        CampaignInfoDlg_onButtonDelgate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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