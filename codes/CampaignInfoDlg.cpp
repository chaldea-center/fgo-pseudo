void CampaignInfoDlg___cctor(const MethodInfo *method)
{
  struct CampaignInfoDlg_StaticFields *static_fields; // x0
  struct CampaignInfoDlg_StaticFields *v2; // x0

  if ( (byte_4C2119B & 1) == 0 )
  {
    sub_1C2D490(&CampaignInfoDlg_TypeInfo);
    sub_1C2D490(&StringLiteral_14612/*"Tutorial/tutorial_alpha"*/);
    sub_1C2D490(&StringLiteral_24216/*"tutorial_alpha"*/);
    byte_4C2119B = 1;
  }
  static_fields = CampaignInfoDlg_TypeInfo->static_fields;
  static_fields->FADE_TIME = 0.3;
  static_fields->alphaImgPath = (struct System_String_o *)StringLiteral_14612/*"Tutorial/tutorial_alpha"*/;
  sub_1C2D434(&static_fields->alphaImgPath);
  v2 = CampaignInfoDlg_TypeInfo->static_fields;
  v2->alphaImgName = (struct System_String_o *)StringLiteral_24216/*"tutorial_alpha"*/;
  sub_1C2D434(&v2->alphaImgName);
  *(_QWORD *)&CampaignInfoDlg_TypeInfo->static_fields->baseImgNo = 0xD200000006LL;
}


void CampaignInfoDlg___ctor(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  if ( (byte_4C2119A & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C2119A = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, method);
}


void CampaignInfoDlg__AddScrollImg(
        CampaignInfoDlg_o *this,
        AssetData_o *data,
        System_Action_o *callback,
        const MethodInfo *method)
{
  CampaignInfoDlg_o *v6; // x21
  const MethodInfo *v7; // x2
  __int64 v8; // x3
  int m_CancellationTokenSource; // w8
  CampaignInfoDlg_o *v10; // x25
  unsigned int v11; // w27
  int32_t v12; // w21
  CampaignInfoDlg_o *v13; // x24
  CampaignInfoDlg_o *v14; // x19
  CampaignInfoDlg_c **v15; // x20
  System_String_o **v16; // x20
  CampaignInfoDlg_o *v17; // t1
  char v18; // w26
  CampaignInfoDlg_o *v19; // x23
  Il2CppObject *ImagePrefab; // x22
  Il2CppObject *v21; // x22
  System_String_o *v22; // x0
  int32_t layer; // w25
  const MethodInfo *v24; // x5
  struct CampaignInformation_array *infoData; // x8
  __int64 loadIndex; // x9
  CampaignInfoDlg_o *v27; // x23
  CampaignInfoDlg_o *v28; // x23
  intptr_t m_CachedPtr; // x8
  _QWORD *v30; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v32; // x8
  System_Action_o *v33; // [xsp+0h] [xbp-70h]
  CampaignInfoDlg_o *v34; // [xsp+8h] [xbp-68h]
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4C2118D & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_Texture2D____77994112);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_CampaignInfoItem___);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C2D490(&NGUITools_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_16736/*"alpha"*/);
    this = (CampaignInfoDlg_o *)sub_1C2D490(&StringLiteral_7560/*"Image"*/);
    byte_4C2118D = 1;
  }
  if ( !data )
    goto LABEL_38;
  this = (CampaignInfoDlg_o *)AssetData__GetObjectNameList(data, 0);
  if ( !this )
    goto LABEL_38;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v10 = this;
  v33 = callback;
  v34 = v6;
  if ( m_CancellationTokenSource >= 1 )
  {
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    while ( v11 < m_CancellationTokenSource )
    {
      v15 = &v10->klass + (int)v11;
      v17 = (CampaignInfoDlg_o *)v15[4];
      v16 = (System_String_o **)(v15 + 4);
      this = v17;
      if ( !v17 )
        goto LABEL_38;
      this = (CampaignInfoDlg_o *)System_String__Contains(
                                    (System_String_o *)this,
                                    (System_String_o *)StringLiteral_16736/*"alpha"*/,
                                    0);
      if ( v11 >= LODWORD(v10->fields.m_CancellationTokenSource) )
        break;
      v18 = (char)this;
      this = (CampaignInfoDlg_o *)AssetData__GetObject_object__51051712(
                                    data,
                                    *v16,
                                    (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_Texture2D____77994112);
      v19 = this;
      if ( (v18 & 1) == 0 )
      {
        if ( v11 >= LODWORD(v10->fields.m_CancellationTokenSource) )
          break;
        v14 = this;
        this = (CampaignInfoDlg_o *)CampaignInfoDlg__GetScrollHeightWithName(this, *v16, v7);
        v12 = (int)this;
        v19 = v13;
      }
      m_CancellationTokenSource = (int)v10->fields.m_CancellationTokenSource;
      ++v11;
      v13 = v19;
      if ( (int)v11 >= m_CancellationTokenSource )
        goto LABEL_16;
    }
LABEL_37:
    sub_1C2D6F4(this, data, v7, v8);
  }
  v14 = 0;
  v19 = 0;
  v12 = 0;
LABEL_16:
  ImagePrefab = (Il2CppObject *)v34->fields.ImagePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v21 = UnityEngine_Object__Instantiate_object_(
          ImagePrefab,
          (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v22 = System_Int32__ToString((int)v34 + 232, 0);
  this = (CampaignInfoDlg_o *)System_String__Concat_63457864((System_String_o *)StringLiteral_7560/*"Image"*/, v22, 0);
  if ( !v21 )
    goto LABEL_38;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v21, (System_String_o *)this, 0);
  this = (CampaignInfoDlg_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v34, 0);
  if ( !this )
    goto LABEL_38;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__SetLayer((UnityEngine_GameObject_o *)v21, layer, 0);
  this = (CampaignInfoDlg_o *)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)v21,
                                (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_CampaignInfoItem___);
  infoData = v34->fields.infoData;
  if ( !infoData )
    goto LABEL_38;
  loadIndex = v34->fields._loadIndex;
  if ( (unsigned int)loadIndex >= LODWORD(infoData->max_length) )
    goto LABEL_37;
  if ( !this )
    goto LABEL_38;
  CampaignInfoItem__SetCampaignInfo(
    (CampaignInfoItem_o *)this,
    infoData->m_Items[loadIndex],
    (UnityEngine_Texture2D_o *)v14,
    (UnityEngine_Texture2D_o *)v19,
    v12,
    v24);
  this = (CampaignInfoDlg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v21, 0);
  if ( !v34->fields.ImageGrid )
    goto LABEL_38;
  v27 = this;
  this = (CampaignInfoDlg_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v34->fields.ImageGrid, 0);
  if ( !v27 )
    goto LABEL_38;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v27, (UnityEngine_Transform_o *)this, 0);
  this = (CampaignInfoDlg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v21, 0);
  if ( !this )
    goto LABEL_38;
  v35.fields.y = v34->fields.setPosX;
  v35.fields.x = 0.0;
  v35.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v35, 0);
  this = (CampaignInfoDlg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v21, 0);
  v28 = this;
  if ( !byte_4C20DA6 )
  {
    this = (CampaignInfoDlg_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA6 = 1;
  }
  if ( !v28
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v28,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0),
        this = (CampaignInfoDlg_o *)v34->fields.ImagePageList,
        v34->fields.setPosX = v34->fields.setPosX - (float)v12,
        !this)
    || (m_CachedPtr = this->fields.m_CachedPtr,
        v30 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++HIDWORD(this->fields.m_CancellationTokenSource),
        !m_CachedPtr) )
  {
LABEL_38:
    sub_1C2D6EC(this, data);
  }
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      v21,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v32 + 32) = v21;
    sub_1C2D434(v32 + 32);
  }
  ActionExtensions__Call(v33, 0);
}


// local variable allocation has failed, the output may be wrong!
void CampaignInfoDlg__AfterLoad(CampaignInfoDlg_o *this, int32_t addCount, const MethodInfo *method)
{
  CampaignInfoDlg_o *v4; // x19
  struct CampaignInformation_array *infoData; // x9
  int v6; // w8

  v4 = this;
  if ( (byte_4C2118E & 1) == 0 )
  {
    this = (CampaignInfoDlg_o *)sub_1C2D490(&StringLiteral_10002/*"OpenWindow"*/);
    byte_4C2118E = 1;
  }
  infoData = v4->fields.infoData;
  v6 = v4->fields._loadIndex + addCount;
  v4->fields._loadIndex = v6;
  if ( !infoData )
    sub_1C2D6EC(this, *(_QWORD *)&addCount);
  if ( v6 >= SLODWORD(infoData->max_length) )
  {
    CampaignInfoDlg__UpdatePage(v4, *(const MethodInfo **)&addCount);
    UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v4, (System_String_o *)StringLiteral_10002/*"OpenWindow"*/, 0.3, 0);
  }
  else
  {
    CampaignInfoDlg__LoadStart(v4, *(const MethodInfo **)&addCount);
  }
}


void CampaignInfoDlg__Close(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CampaignInfoDlg__Close_31122512(this, 0, v2);
}


void CampaignInfoDlg__Close_31122512(CampaignInfoDlg_o *this, System_Action_o *callback, const MethodInfo *method)
{
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4C21194 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_CampaignInfoDlg_EndClose__);
    byte_4C21194 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C2D434(&this->fields.closeCallbackFunc);
  this->fields.isButtonEnable = 0;
  v5 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_CampaignInfoDlg_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, v6);
}


void CampaignInfoDlg__EndClose(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ImagePageList; // x0
  Il2CppObject *current; // x20
  const MethodInfo *v5; // x2
  __int64 v6; // x3
  CampaignInfoDlg_c *v7; // x0
  System_String_o *alphaImgPath; // x20
  CampaignInfoDlg_c *v9; // x0
  System_String_o *TuorialImagePath; // x20
  struct CampaignInformation_array *infoData; // x23
  int max_length; // w8
  __int64 v13; // x24
  CampaignInformation_o *v14; // x8
  System_String_o *CampaignInfoImagePath; // x21
  struct System_Action_o *closeCallbackFunc; // x20
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C21195 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&CampaignInfoDlg_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21195 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  ImagePageList = (System_Collections_Generic_List_object__o *)this->fields.ImagePageList;
  if ( !ImagePageList )
    goto LABEL_34;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    ImagePageList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v18.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704((UnityEngine_Object_o *)current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  if ( this->fields.alphaTexLoadRequested )
  {
    v7 = CampaignInfoDlg_TypeInfo;
    if ( !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
      v7 = CampaignInfoDlg_TypeInfo;
    }
    alphaImgPath = v7->static_fields->alphaImgPath;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(alphaImgPath, 0);
    this->fields.alphaTexAssetData = 0;
    ImagePageList = (System_Collections_Generic_List_object__o *)sub_1C2D434(&this->fields.alphaTexAssetData);
    this->fields.alphaTexLoadRequested = 0;
  }
  if ( this->fields.baseTexLoadRequested )
  {
    v9 = CampaignInfoDlg_TypeInfo;
    if ( !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
      v9 = CampaignInfoDlg_TypeInfo;
    }
    TuorialImagePath = CampaignInfoDlg__GetTuorialImagePath(this, v9->static_fields->baseImgNo, v5);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(TuorialImagePath, 0);
    this->fields.baseTexAssetData = 0;
    ImagePageList = (System_Collections_Generic_List_object__o *)sub_1C2D434(&this->fields.baseTexAssetData);
    this->fields.baseTexLoadRequested = 0;
  }
  infoData = this->fields.infoData;
  if ( infoData )
  {
    max_length = infoData->max_length;
    if ( max_length >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v13 >= max_length )
          sub_1C2D6F4(ImagePageList, method, v5, v6);
        v14 = infoData->m_Items[v13];
        if ( !v14 )
          break;
        CampaignInfoImagePath = CampaignInfoDlg__GetCampaignInfoImagePath(this, v14->fields.imageId, v5);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetManager__releaseAssetStorage(CampaignInfoImagePath, 0);
        max_length = infoData->max_length;
        if ( (int)++v13 >= max_length )
          goto LABEL_29;
      }
LABEL_34:
      sub_1C2D6EC(ImagePageList, method);
    }
LABEL_29:
    this->fields.infoData = 0;
    sub_1C2D434(&this->fields.infoData);
  }
  CampaignInfoDlg__Init(this, method);
  ImagePageList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0);
  if ( !ImagePageList )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ImagePageList, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_1C2D434(&this->fields.closeCallbackFunc);
    ((void (__fastcall *)(intptr_t, intptr_t))closeCallbackFunc->fields.invoke_impl)(
      closeCallbackFunc->fields.method_code,
      closeCallbackFunc->fields.method);
  }
}


void CampaignInfoDlg__EndOpen(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
  CampaignInfoDlg__refreshCurrent(this, method);
}


System_String_o *CampaignInfoDlg__GetCampaignInfoImageName(
        CampaignInfoDlg_o *this,
        int32_t imgId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C2118A & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&StringLiteral_25049/*"{0:D4}"*/);
    sub_1C2D490(&StringLiteral_20771/*"info_"*/);
    byte_4C2118A = 1;
  }
  v9 = imgId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9, method, v3, v4);
  v7 = System_String__Format((System_String_o *)StringLiteral_25049/*"{0:D4}"*/, v6, 0);
  return System_String__Concat_63457864((System_String_o *)StringLiteral_20771/*"info_"*/, v7, 0);
}


System_String_o *CampaignInfoDlg__GetCampaignInfoImagePath(
        CampaignInfoDlg_o *this,
        int32_t imgId,
        const MethodInfo *method)
{
  System_String_o *CampaignInfoImageName; // x0

  if ( (byte_4C21189 & 1) == 0 )
  {
    this = (CampaignInfoDlg_o *)sub_1C2D490(&StringLiteral_3967/*"CampaignInfo/"*/);
    byte_4C21189 = 1;
  }
  CampaignInfoImageName = CampaignInfoDlg__GetCampaignInfoImageName(this, imgId, method);
  return System_String__Concat_63457864((System_String_o *)StringLiteral_3967/*"CampaignInfo/"*/, CampaignInfoImageName, 0);
}


int32_t CampaignInfoDlg__GetScrollHeightWithName(
        CampaignInfoDlg_o *this,
        System_String_o *imageName,
        const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v4; // x3
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  if ( !imageName || (this = (CampaignInfoDlg_o *)System_String__Split(imageName, 0x5Fu, 0, 0), result = 0, !this) )
    sub_1C2D6EC(this, imageName);
  if ( LODWORD(this->fields.m_CancellationTokenSource) <= 2 )
    sub_1C2D6F4(this, imageName, v3, v4);
  System_Int32__TryParse((System_String_o *)this->fields.baseWindow, &result, 0);
  return result;
}


System_String_o *CampaignInfoDlg__GetTuorialImageName(CampaignInfoDlg_o *this, int32_t imgId, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C21188 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&StringLiteral_25049/*"{0:D4}"*/);
    sub_1C2D490(&StringLiteral_24214/*"tutorial_"*/);
    byte_4C21188 = 1;
  }
  v9 = imgId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9, method, v3, v4);
  v7 = System_String__Format((System_String_o *)StringLiteral_25049/*"{0:D4}"*/, v6, 0);
  return System_String__Concat_63457864((System_String_o *)StringLiteral_24214/*"tutorial_"*/, v7, 0);
}


System_String_o *CampaignInfoDlg__GetTuorialImagePath(CampaignInfoDlg_o *this, int32_t imgId, const MethodInfo *method)
{
  System_String_o *TuorialImageName; // x0

  if ( (byte_4C21187 & 1) == 0 )
  {
    this = (CampaignInfoDlg_o *)sub_1C2D490(&StringLiteral_14609/*"Tutorial/"*/);
    byte_4C21187 = 1;
  }
  TuorialImageName = CampaignInfoDlg__GetTuorialImageName(this, imgId, method);
  return System_String__Concat_63457864((System_String_o *)StringLiteral_14609/*"Tutorial/"*/, TuorialImageName, 0);
}


void CampaignInfoDlg__Init(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  this->fields.isButtonEnable = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, v5);
}


void CampaignInfoDlg__LoadAlpha(CampaignInfoDlg_o *this, System_Action_o *callback, const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  CampaignInfoDlg_c *v8; // x0
  System_String_o *alphaImgPath; // x19
  AssetLoader_LoadEndDataHandler_o *v10; // x20

  if ( (byte_4C21190 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&CampaignInfoDlg_TypeInfo);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&Method_CampaignInfoDlg___c__DisplayClass45_0__LoadAlpha_b__0__);
    sub_1C2D490(&CampaignInfoDlg___c__DisplayClass45_0_TypeInfo);
    byte_4C21190 = 1;
  }
  v5 = (Il2CppObject *)sub_1C2D6DC(CampaignInfoDlg___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  v5[1].klass = (Il2CppClass *)this;
  sub_1C2D434(&v5[1]);
  v5[1].monitor = callback;
  sub_1C2D434(&v5[1].monitor);
  this->fields.alphaTexLoadRequested = 1;
  v8 = CampaignInfoDlg_TypeInfo;
  if ( !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
    v8 = CampaignInfoDlg_TypeInfo;
  }
  alphaImgPath = v8->static_fields->alphaImgPath;
  v10 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v10, v5, Method_CampaignInfoDlg___c__DisplayClass45_0__LoadAlpha_b__0__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(alphaImgPath, v10, 1, 0);
}


void CampaignInfoDlg__LoadBase(CampaignInfoDlg_o *this, System_Action_o *callback, const MethodInfo *method)
{
  Il2CppObject *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  CampaignInfoDlg_c *v9; // x0
  System_String_o *TuorialImagePath; // x19
  AssetLoader_LoadEndDataHandler_o *v11; // x21

  if ( (byte_4C2118F & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&CampaignInfoDlg_TypeInfo);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&Method_CampaignInfoDlg___c__DisplayClass44_0__LoadBase_b__0__);
    sub_1C2D490(&CampaignInfoDlg___c__DisplayClass44_0_TypeInfo);
    byte_4C2118F = 1;
  }
  v5 = (Il2CppObject *)sub_1C2D6DC(CampaignInfoDlg___c__DisplayClass44_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  v5[1].klass = (Il2CppClass *)this;
  sub_1C2D434(&v5[1]);
  v5[1].monitor = callback;
  sub_1C2D434(&v5[1].monitor);
  this->fields.baseTexLoadRequested = 1;
  v9 = CampaignInfoDlg_TypeInfo;
  if ( !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
    v9 = CampaignInfoDlg_TypeInfo;
  }
  TuorialImagePath = CampaignInfoDlg__GetTuorialImagePath(this, v9->static_fields->baseImgNo, v8);
  v11 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v11, v5, Method_CampaignInfoDlg___c__DisplayClass44_0__LoadBase_b__0__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(TuorialImagePath, v11, 1, 0);
}


void CampaignInfoDlg__LoadImages(CampaignInfoDlg_o *this, CampaignInformation_array *images, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x20
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4C21186 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_CampaignInfoDlg__LoadImages_b__34_0__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C21186 = 1;
  }
  this->fields._loadIndex = 0;
  v4 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.ImagePageList = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_1C2D434(&this->fields.ImagePageList);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v6);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
  v7 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_CampaignInfoDlg__LoadImages_b__34_0__, 0);
  CampaignInfoDlg__LoadAlpha(this, v7, v8);
}


void CampaignInfoDlg__LoadStart(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  CampaignInfoDlg_o *v4; // x19
  struct CampaignInformation_array *infoData; // x8
  __int64 loadIndex; // x9
  CampaignInformation_o *v7; // x8
  System_String_o *CampaignInfoImagePath; // x20
  AssetLoader_LoadEndDataHandler_o *v9; // x21

  v4 = this;
  if ( (byte_4C2118B & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&Method_CampaignInfoDlg__LoadStart_b__40_0__);
    this = (CampaignInfoDlg_o *)sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_4C2118B = 1;
  }
  infoData = v4->fields.infoData;
  if ( !infoData )
    goto LABEL_13;
  loadIndex = v4->fields._loadIndex;
  if ( (unsigned int)loadIndex >= LODWORD(infoData->max_length) )
    sub_1C2D6F4(this, method, v2, v3);
  v7 = infoData->m_Items[loadIndex];
  if ( !v7 )
LABEL_13:
    sub_1C2D6EC(this, method);
  CampaignInfoImagePath = CampaignInfoDlg__GetCampaignInfoImagePath(v4, v7->fields.imageId, v2);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(CampaignInfoImagePath, 0) )
  {
    v9 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v9, (Il2CppObject *)v4, Method_CampaignInfoDlg__LoadStart_b__40_0__, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(CampaignInfoImagePath, v9, 1, 0);
  }
}


void CampaignInfoDlg__OnCancelButton(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct CampaignInfoDlg_onButtonDelgate_o *btnCallbackFunc; // x8

  if ( (byte_4C21197 & 1) == 0 )
  {
    sub_1C2D490(&Method_CampaignInfoDlg_OnCancelButton__);
    byte_4C21197 = 1;
  }
  if ( !this->fields.IsFading && this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v3 = Method_CampaignInfoDlg_OnCancelButton__;
    if ( (*((_BYTE *)Method_CampaignInfoDlg_OnCancelButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8();
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    btnCallbackFunc = this->fields.btnCallbackFunc;
    if ( !btnCallbackFunc )
      sub_1C2D6EC(v5, v6);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))btnCallbackFunc->fields.invoke_impl)(
      btnCallbackFunc->fields.method_code,
      0,
      btnCallbackFunc->fields.method);
  }
}


void CampaignInfoDlg__OnClickClose(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct CampaignInfoDlg_onButtonDelgate_o *btnCallbackFunc; // x8

  if ( (byte_4C21198 & 1) == 0 )
  {
    sub_1C2D490(&Method_CampaignInfoDlg_OnClickClose__);
    byte_4C21198 = 1;
  }
  if ( !this->fields.IsFading && this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v3 = Method_CampaignInfoDlg_OnClickClose__;
    if ( (*((_BYTE *)Method_CampaignInfoDlg_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8();
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    btnCallbackFunc = this->fields.btnCallbackFunc;
    if ( !btnCallbackFunc )
      sub_1C2D6EC(v5, v6);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))btnCallbackFunc->fields.invoke_impl)(
      btnCallbackFunc->fields.method_code,
      0,
      btnCallbackFunc->fields.method);
  }
}


void CampaignInfoDlg__OnDecideButton(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct CampaignInfoDlg_onButtonDelgate_o *btnCallbackFunc; // x8

  if ( (byte_4C21196 & 1) == 0 )
  {
    sub_1C2D490(&Method_CampaignInfoDlg_OnDecideButton__);
    byte_4C21196 = 1;
  }
  if ( !this->fields.IsFading && this->fields.isButtonEnable )
  {
    v3 = Method_CampaignInfoDlg_OnDecideButton__;
    if ( (*((_BYTE *)Method_CampaignInfoDlg_OnDecideButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8();
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    btnCallbackFunc = this->fields.btnCallbackFunc;
    if ( !btnCallbackFunc )
      sub_1C2D6EC(v5, v6);
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))btnCallbackFunc->fields.invoke_impl)(
      btnCallbackFunc->fields.method_code,
      1,
      btnCallbackFunc->fields.method);
  }
}


void CampaignInfoDlg__Open(
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
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  CampaignInfoDlg_c *v17; // x0
  CampaignInformation_array *v18; // x1
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2

  if ( (byte_4C21185 & 1) == 0 )
  {
    sub_1C2D490(&CampaignInfoDlg_TypeInfo);
    byte_4C21185 = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    CampaignInfoDlg__Init(this, (const MethodInfo *)cInfo);
    this->fields.IsInitialized = 1;
  }
  CampaignInfoDlg__SetTouchMask(this, 0, (const MethodInfo *)cancelBtnMsg);
  if ( !cInfo )
    goto LABEL_15;
  this->fields.infoData = cInfo->fields.script;
  sub_1C2D434(&this->fields.infoData);
  this->fields.isButtonEnable = 0;
  this->fields.isNotExistImg = 0;
  CampaignInfoDlg__SetDecideActive(this, activeDecide, v15);
  DecideBtnLb = this->fields.DecideBtnLb;
  if ( !DecideBtnLb )
    goto LABEL_15;
  UILabel__set_text(DecideBtnLb, decideBtnMsg, 0);
  DecideBtnLb = this->fields.CancelBtnLb;
  if ( !DecideBtnLb )
    goto LABEL_15;
  UILabel__set_text(DecideBtnLb, cancelBtnMsg, 0);
  this->fields.btnCallbackFunc = onClickButton;
  sub_1C2D434(&this->fields.btnCallbackFunc);
  v17 = CampaignInfoDlg_TypeInfo;
  if ( !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
    v17 = CampaignInfoDlg_TypeInfo;
  }
  this->fields.setPosX = (float)v17->static_fields->basePosX;
  BaseDialog__SetMask((BaseDialog_o *)this, 0, v16);
  CampaignInfoDlg__LoadImages(this, v18, v19);
  DecideBtnLb = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !DecideBtnLb )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)DecideBtnLb, 1, 0);
  CampaignInfoDlg__UpdateButtons(this, 1, v20);
  if ( this->fields.isNotExistImg )
  {
    DecideBtnLb = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( DecideBtnLb )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)DecideBtnLb, 0, 0);
      return;
    }
LABEL_15:
    sub_1C2D6EC(DecideBtnLb, v14);
  }
}


void CampaignInfoDlg__OpenWindow(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x3

  if ( (byte_4C21191 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_CampaignInfoDlg_EndOpen__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C21191 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v4);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
  v5 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_CampaignInfoDlg_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v5, 1, v6);
}


void CampaignInfoDlg__SetBaseImage(CampaignInfoDlg_o *this, UnityEngine_Texture2D_o *tex, const MethodInfo *method)
{
  UnityEngine_Component_o *BaseImg; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  int32_t layer; // w22
  UnityEngine_Shader_o *v8; // x22
  UnityEngine_Material_o *v9; // x21
  AssetData_o *alphaTexAssetData; // x20
  Il2CppObject *Object_object__51051712; // x0

  if ( (byte_4C2118C & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_Texture2D____77994112);
    sub_1C2D490(&CampaignInfoDlg_TypeInfo);
    sub_1C2D490(&UnityEngine_Material_TypeInfo);
    sub_1C2D490(&NGUITools_TypeInfo);
    sub_1C2D490(&StringLiteral_4932/*"Custom/SpriteWithMask"*/);
    sub_1C2D490(&StringLiteral_16265/*"_MaskTex"*/);
    byte_4C2118C = 1;
  }
  BaseImg = (UnityEngine_Component_o *)this->fields.BaseImg;
  if ( !BaseImg )
    goto LABEL_15;
  gameObject = UnityEngine_Component__get_gameObject(BaseImg, 0);
  BaseImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !BaseImg )
    goto LABEL_15;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)BaseImg, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__SetLayer(gameObject, layer, 0);
  v8 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4932/*"Custom/SpriteWithMask"*/, 0);
  v9 = (UnityEngine_Material_o *)sub_1C2D6DC(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v9, v8, 0);
  BaseImg = (UnityEngine_Component_o *)this->fields.BaseImg;
  if ( !BaseImg )
    goto LABEL_15;
  BaseImg = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, UnityEngine_Material_o *, Il2CppMethodPointer))BaseImg->klass[1].vtable._1_Finalize.method)(
                                         BaseImg,
                                         v9,
                                         BaseImg->klass[1].vtable._2_GetHashCode.methodPtr);
  if ( !v9 )
    goto LABEL_15;
  UnityEngine_Material__set_mainTexture(v9, (UnityEngine_Texture_o *)tex, 0);
  BaseImg = (UnityEngine_Component_o *)CampaignInfoDlg_TypeInfo;
  alphaTexAssetData = this->fields.alphaTexAssetData;
  if ( !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
    BaseImg = (UnityEngine_Component_o *)j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
  if ( !alphaTexAssetData
    || (Object_object__51051712 = AssetData__GetObject_object__51051712(
                                    alphaTexAssetData,
                                    CampaignInfoDlg_TypeInfo->static_fields->alphaImgName,
                                    (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_Texture2D____77994112),
        UnityEngine_Material__SetTexture(
          v9,
          (System_String_o *)StringLiteral_16265/*"_MaskTex"*/,
          (UnityEngine_Texture_o *)Object_object__51051712,
          0),
        (BaseImg = (UnityEngine_Component_o *)this->fields.BaseImg) == 0)
    || (BaseImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(BaseImg, 0)) == 0 )
  {
LABEL_15:
    sub_1C2D6EC(BaseImg, tex);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)BaseImg, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void CampaignInfoDlg__SetDecideActive(CampaignInfoDlg_o *this, bool onOff, const MethodInfo *method)
{
  UnityEngine_GameObject_o *DecideButton; // x0
  float v6; // s0 OVERLAPPED
  float v7; // s3
  float v8; // s1
  float v9; // s2

  if ( (byte_4C21199 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    byte_4C21199 = 1;
  }
  DecideButton = this->fields.DecideButton;
  if ( !DecideButton )
    goto LABEL_10;
  DecideButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               DecideButton,
                                               (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !DecideButton )
    goto LABEL_10;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)DecideButton, onOff, 0);
  DecideButton = this->fields.DecideButton;
  if ( !DecideButton )
    goto LABEL_10;
  DecideButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               DecideButton,
                                               (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v6 = 0.5;
  if ( onOff )
    v6 = 1.0;
  if ( !DecideButton )
LABEL_10:
    sub_1C2D6EC(DecideButton, onOff);
  v7 = 1.0;
  v8 = v6;
  v9 = v6;
  UIWidget__set_color((UIWidget_o *)DecideButton, *(UnityEngine_Color_o *)&v6, 0);
}


// local variable allocation has failed, the output may be wrong!
void CampaignInfoDlg__SetTouchMask(CampaignInfoDlg_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_GameObject_o *TouchMask; // x0

  TouchMask = this->fields.TouchMask;
  if ( !TouchMask
    || (TouchMask = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(TouchMask, 0)) == 0
    || (TouchMask = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                  (UnityEngine_Transform_o *)TouchMask,
                                                  0)) == 0
    || (TouchMask = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)TouchMask, 0)) == 0 )
  {
    sub_1C2D6EC(TouchMask, isDisp);
  }
  UnityEngine_GameObject__SetActive(TouchMask, isDisp, 0);
}


// local variable allocation has failed, the output may be wrong!
void CampaignInfoDlg__UpdateButtons(CampaignInfoDlg_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_GameObject_o *CloseButton; // x0
  bool v5; // w1

  CloseButton = this->fields.CloseButton;
  if ( !CloseButton )
    goto LABEL_10;
  if ( !isDisp )
  {
    UnityEngine_GameObject__SetActive(CloseButton, 0, 0);
    CloseButton = this->fields.CancelButton;
    if ( CloseButton )
    {
      UnityEngine_GameObject__SetActive(CloseButton, 0, 0);
      CloseButton = this->fields.DecideButton;
      if ( CloseButton )
      {
        v5 = 0;
        goto LABEL_9;
      }
    }
LABEL_10:
    sub_1C2D6EC(CloseButton, isDisp);
  }
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0);
  CloseButton = this->fields.CancelButton;
  if ( !CloseButton )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(CloseButton, 1, 0);
  CloseButton = this->fields.DecideButton;
  if ( !CloseButton )
    goto LABEL_10;
  v5 = 1;
LABEL_9:
  UnityEngine_GameObject__SetActive(CloseButton, v5, 0);
}


void CampaignInfoDlg__UpdatePage(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  CampaignInfoDlg_c *v3; // x0
  UnityEngine_GameObject_o *ImageRoot; // x20
  UITweener_o *v5; // x20
  EventDelegate_Callback_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4C21192 & 1) == 0 )
  {
    sub_1C2D490(&EventDelegate_Callback_TypeInfo);
    sub_1C2D490(&Method_CampaignInfoDlg__UpdatePage_b__47_0__);
    sub_1C2D490(&CampaignInfoDlg_TypeInfo);
    byte_4C21192 = 1;
  }
  this->fields.IsFading = 1;
  v3 = CampaignInfoDlg_TypeInfo;
  ImageRoot = this->fields.ImageRoot;
  if ( !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
    v3 = CampaignInfoDlg_TypeInfo;
  }
  v5 = (UITweener_o *)TweenAlpha__Begin(ImageRoot, v3->static_fields->FADE_TIME, 1.0, 0);
  v6 = (EventDelegate_Callback_o *)sub_1C2D6DC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v6, (Il2CppObject *)this, Method_CampaignInfoDlg__UpdatePage_b__47_0__, 0);
  if ( !v5 )
    sub_1C2D6EC(v7, v8);
  UITweener__SetOnFinished(v5, v6, 0);
}


void CampaignInfoDlg___LoadImages_b__34_0(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4C2119C & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_CampaignInfoDlg_LoadStart__);
    byte_4C2119C = 1;
  }
  v3 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_CampaignInfoDlg_LoadStart__, 0);
  CampaignInfoDlg__LoadBase(this, v3, v4);
}


void CampaignInfoDlg___LoadStart_b__40_0(CampaignInfoDlg_o *this, AssetData_o *data, const MethodInfo *method)
{
  Il2CppObject *v4; // x20
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x3

  v4 = (Il2CppObject *)this;
  if ( (byte_4C2119D & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    this = (CampaignInfoDlg_o *)sub_1C2D490(&Method_CampaignInfoDlg__LoadStart_b__40_1__);
    byte_4C2119D = 1;
  }
  if ( !data )
    sub_1C2D6EC(this, data);
  AssetData__GetObjectNameList(data, 0);
  v5 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v5, v4, Method_CampaignInfoDlg__LoadStart_b__40_1__, 0);
  CampaignInfoDlg__AddScrollImg((CampaignInfoDlg_o *)v4, data, v5, v6);
}


void CampaignInfoDlg___LoadStart_b__40_1(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CampaignInfoDlg__AfterLoad(this, 1, v2);
}


void CampaignInfoDlg___UpdatePage_b__47_0(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  CampaignInfoDlg__refreshCurrent(this, method);
  this->fields.IsFading = 0;
  CampaignInfoDlg__UpdateButtons(this, 1, v3);
}


void CampaignInfoDlg__refreshCurrent(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *ScrView; // x20
  __int64 v4; // x1
  UIScrollView_o *v5; // x0

  if ( (byte_4C21193 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21193 = 1;
  }
  ScrView = (UnityEngine_Object_o *)this->fields.ScrView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(ScrView, 0, 0) )
  {
    v5 = this->fields.ScrView;
    if ( !v5 )
      sub_1C2D6EC(0, v4);
    UIScrollView__ResetPosition(v5, 0);
  }
}


void CampaignInfoDlg___c__DisplayClass44_0___ctor(
        CampaignInfoDlg___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CampaignInfoDlg___c__DisplayClass44_0___LoadBase_b__0(
        CampaignInfoDlg___c__DisplayClass44_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  CampaignInfoDlg___c__DisplayClass44_0_o *v4; // x19
  struct CampaignInfoDlg_o *_4__this; // x8
  UnityEngine_Shader_o *v6; // x22
  UnityEngine_Material_o *v7; // x21
  struct CampaignInfoDlg_o *v8; // x8
  const MethodInfo *v9; // x2
  struct CampaignInfoDlg_o *v10; // x23
  struct CampaignInfoDlg_o *v11; // x8
  Il2CppObject *Object_object__51051712; // x0

  v4 = this;
  if ( (byte_4C2119F & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_Texture2D____77994112);
    sub_1C2D490(&CampaignInfoDlg_TypeInfo);
    sub_1C2D490(&UnityEngine_Material_TypeInfo);
    sub_1C2D490(&StringLiteral_4932/*"Custom/SpriteWithMask"*/);
    this = (CampaignInfoDlg___c__DisplayClass44_0_o *)sub_1C2D490(&StringLiteral_16265/*"_MaskTex"*/);
    byte_4C2119F = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  _4__this->fields.baseTexAssetData = data;
  sub_1C2D434(&_4__this->fields.baseTexAssetData);
  v6 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4932/*"Custom/SpriteWithMask"*/, 0);
  v7 = (UnityEngine_Material_o *)sub_1C2D6DC(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v7, v6, 0);
  v8 = v4->fields.__4__this;
  if ( !v8 )
    goto LABEL_14;
  this = (CampaignInfoDlg___c__DisplayClass44_0_o *)v8->fields.BaseImg;
  if ( !this )
    goto LABEL_14;
  ((void (__fastcall *)(CampaignInfoDlg___c__DisplayClass44_0_o *, UnityEngine_Material_o *, Il2CppMethodPointer))this->klass[1].vtable._1_Finalize.method)(
    this,
    v7,
    this->klass[1].vtable._2_GetHashCode.methodPtr);
  this = (CampaignInfoDlg___c__DisplayClass44_0_o *)CampaignInfoDlg_TypeInfo;
  v10 = v4->fields.__4__this;
  if ( !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
    this = (CampaignInfoDlg___c__DisplayClass44_0_o *)j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
  if ( !v10
    || (this = (CampaignInfoDlg___c__DisplayClass44_0_o *)CampaignInfoDlg__GetTuorialImageName(
                                                            (CampaignInfoDlg_o *)this,
                                                            CampaignInfoDlg_TypeInfo->static_fields->baseImgNo,
                                                            v9),
        !data)
    || (this = (CampaignInfoDlg___c__DisplayClass44_0_o *)AssetData__GetObject_object__51051712(
                                                            data,
                                                            (System_String_o *)this,
                                                            (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_Texture2D____77994112),
        !v7)
    || (UnityEngine_Material__set_mainTexture(v7, (UnityEngine_Texture_o *)this, 0), (v11 = v4->fields.__4__this) == 0)
    || (this = (CampaignInfoDlg___c__DisplayClass44_0_o *)v11->fields.alphaTexAssetData) == 0 )
  {
LABEL_14:
    sub_1C2D6EC(this, data);
  }
  Object_object__51051712 = AssetData__GetObject_object__51051712(
                              (AssetData_o *)this,
                              CampaignInfoDlg_TypeInfo->static_fields->alphaImgName,
                              (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_Texture2D____77994112);
  UnityEngine_Material__SetTexture(
    v7,
    (System_String_o *)StringLiteral_16265/*"_MaskTex"*/,
    (UnityEngine_Texture_o *)Object_object__51051712,
    0);
  ActionExtensions__Call(v4->fields.callback, 0);
}


void CampaignInfoDlg___c__DisplayClass45_0___ctor(
        CampaignInfoDlg___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CampaignInfoDlg___c__DisplayClass45_0___LoadAlpha_b__0(
        CampaignInfoDlg___c__DisplayClass45_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  struct CampaignInfoDlg_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(0, data);
  _4__this->fields.alphaTexAssetData = data;
  sub_1C2D434(&_4__this->fields.alphaTexAssetData);
  ActionExtensions__Call(this->fields.callback, 0);
}


void CampaignInfoDlg_onButtonDelgate___ctor(
        CampaignInfoDlg_onButtonDelgate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434(&this->fields.m_target);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A68E00;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A68DB8;
}


System_IAsyncResult_o *CampaignInfoDlg_onButtonDelgate__BeginInvoke(
        CampaignInfoDlg_onButtonDelgate_o *this,
        bool decide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = decide;
  if ( (byte_4C2119E & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    byte_4C2119E = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v9, callback, object);
}


void CampaignInfoDlg_onButtonDelgate__EndInvoke(
        CampaignInfoDlg_onButtonDelgate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
}


void CampaignInfoDlg_onButtonDelgate__Invoke(
        CampaignInfoDlg_onButtonDelgate_o *this,
        bool decide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    decide,
    this->fields.method);
}