void CampaignInfoDlg___cctor(const MethodInfo *method)
{
  struct CampaignInfoDlg_StaticFields *static_fields; // x0
  __int64 v2; // x1
  __int64 v3; // x1
  struct CampaignInfoDlg_StaticFields *v4; // x0

  if ( (byte_4CC10E4 & 1) == 0 )
  {
    sub_1C713B0(&CampaignInfoDlg_TypeInfo);
    sub_1C713B0(&StringLiteral_14622/*"Tutorial/tutorial_alpha"*/);
    sub_1C713B0(&StringLiteral_24358/*"tutorial_alpha"*/);
    byte_4CC10E4 = 1;
  }
  static_fields = CampaignInfoDlg_TypeInfo->static_fields;
  static_fields->FADE_TIME = 0.3;
  v2 = StringLiteral_14622/*"Tutorial/tutorial_alpha"*/;
  static_fields->alphaImgPath = (struct System_String_o *)StringLiteral_14622/*"Tutorial/tutorial_alpha"*/;
  sub_1C71354(&static_fields->alphaImgPath, v2);
  v3 = StringLiteral_24358/*"tutorial_alpha"*/;
  v4 = CampaignInfoDlg_TypeInfo->static_fields;
  v4->alphaImgName = (struct System_String_o *)StringLiteral_24358/*"tutorial_alpha"*/;
  sub_1C71354(&v4->alphaImgName, v3);
  *(_QWORD *)&CampaignInfoDlg_TypeInfo->static_fields->baseImgNo = 0xD200000006LL;
}


void CampaignInfoDlg___ctor(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  if ( (byte_4CC10E3 & 1) == 0 )
  {
    sub_1C713B0(&BaseDialog_TypeInfo);
    byte_4CC10E3 = 1;
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
  intptr_t m_CachedPtr; // x8
  _QWORD *v29; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v31; // x8
  System_Action_o *v32; // [xsp+0h] [xbp-70h]
  CampaignInfoDlg_o *v33; // [xsp+8h] [xbp-68h]
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4CC10D6 & 1) == 0 )
  {
    sub_1C713B0(&Method_AssetData_GetObject_Texture2D____78637000);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_CampaignInfoItem___);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C713B0(&NGUITools_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_16760/*"alpha"*/);
    this = (CampaignInfoDlg_o *)sub_1C713B0(&StringLiteral_7568/*"Image"*/);
    byte_4CC10D6 = 1;
  }
  if ( !data )
    goto LABEL_38;
  this = (CampaignInfoDlg_o *)AssetData__GetObjectNameList(data, 0);
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
    v11 = 0;
    v12 = 0;
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
                                    (System_String_o *)StringLiteral_16760/*"alpha"*/,
                                    0);
      if ( v9 >= LODWORD(v8->fields.m_CancellationTokenSource) )
        break;
      v16 = (char)this;
      this = (CampaignInfoDlg_o *)AssetData__GetObject_object__51560868(
                                    data,
                                    *v14,
                                    (const MethodInfo_312C1A4 *)Method_AssetData_GetObject_Texture2D____78637000);
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
    sub_1C71610(this);
  }
  v12 = 0;
  v18 = 0;
  v10 = 0;
LABEL_16:
  ImagePrefab = (Il2CppObject *)v33->fields.ImagePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v20 = UnityEngine_Object__Instantiate_object_(
          ImagePrefab,
          (const MethodInfo_31D7CB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v21 = System_Int32__ToString((int)v33 + 232, 0);
  this = (CampaignInfoDlg_o *)System_String__Concat_64031724((System_String_o *)StringLiteral_7568/*"Image"*/, v21, 0);
  if ( !v20 )
    goto LABEL_38;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v20, (System_String_o *)this, 0);
  this = (CampaignInfoDlg_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v33, 0);
  if ( !this )
    goto LABEL_38;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__SetLayer((UnityEngine_GameObject_o *)v20, layer, 0);
  this = (CampaignInfoDlg_o *)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)v20,
                                (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_CampaignInfoItem___);
  infoData = v33->fields.infoData;
  if ( !infoData )
    goto LABEL_38;
  loadIndex = v33->fields._loadIndex;
  if ( (unsigned int)loadIndex >= LODWORD(infoData->max_length) )
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
  this = (CampaignInfoDlg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v20, 0);
  if ( !v33->fields.ImageGrid )
    goto LABEL_38;
  v26 = this;
  this = (CampaignInfoDlg_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v33->fields.ImageGrid, 0);
  if ( !v26 )
    goto LABEL_38;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v26, (UnityEngine_Transform_o *)this, 0);
  this = (CampaignInfoDlg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v20, 0);
  if ( !this )
    goto LABEL_38;
  v34.fields.y = v33->fields.setPosX;
  v34.fields.x = 0.0;
  v34.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v34, 0);
  this = (CampaignInfoDlg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v20, 0);
  v27 = this;
  if ( !byte_4CC0D0E )
  {
    this = (CampaignInfoDlg_o *)sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D0E = 1;
  }
  if ( !v27
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v27,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0),
        this = (CampaignInfoDlg_o *)v33->fields.ImagePageList,
        v33->fields.setPosX = v33->fields.setPosX - (float)v10,
        !this)
    || (m_CachedPtr = this->fields.m_CachedPtr,
        v29 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++HIDWORD(this->fields.m_CancellationTokenSource),
        !m_CachedPtr) )
  {
LABEL_38:
    sub_1C71608(this, data);
  }
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      v20,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    v31 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v31 + 32) = v20;
    sub_1C71354(v31 + 32, v20);
  }
  ActionExtensions__Call(v32, 0);
}


// local variable allocation has failed, the output may be wrong!
void CampaignInfoDlg__AfterLoad(CampaignInfoDlg_o *this, int32_t addCount, const MethodInfo *method)
{
  CampaignInfoDlg_o *v4; // x19
  struct CampaignInformation_array *infoData; // x9
  int v6; // w8

  v4 = this;
  if ( (byte_4CC10D7 & 1) == 0 )
  {
    this = (CampaignInfoDlg_o *)sub_1C713B0(&StringLiteral_10011/*"OpenWindow"*/);
    byte_4CC10D7 = 1;
  }
  infoData = v4->fields.infoData;
  v6 = v4->fields._loadIndex + addCount;
  v4->fields._loadIndex = v6;
  if ( !infoData )
    sub_1C71608(this, *(_QWORD *)&addCount);
  if ( v6 >= SLODWORD(infoData->max_length) )
  {
    CampaignInfoDlg__UpdatePage(v4, *(const MethodInfo **)&addCount);
    UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v4, (System_String_o *)StringLiteral_10011/*"OpenWindow"*/, 0.3, 0);
  }
  else
  {
    CampaignInfoDlg__LoadStart(v4, *(const MethodInfo **)&addCount);
  }
}


void CampaignInfoDlg__Close(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CampaignInfoDlg__Close_31395276(this, 0, v2);
}


void CampaignInfoDlg__Close_31395276(CampaignInfoDlg_o *this, System_Action_o *callback, const MethodInfo *method)
{
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4CC10DD & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_CampaignInfoDlg_EndClose__);
    byte_4CC10DD = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C71354(&this->fields.closeCallbackFunc, callback);
  this->fields.isButtonEnable = 0;
  v5 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_CampaignInfoDlg_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, v6);
}


void CampaignInfoDlg__EndClose(CampaignInfoDlg_o *this, const MethodInfo *method)
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

  if ( (byte_4CC10DE & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&CampaignInfoDlg_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC10DE = 1;
  }
  memset(&v17, 0, sizeof(v17));
  ImagePageList = (System_Collections_Generic_List_object__o *)this->fields.ImagePageList;
  if ( !ImagePageList )
    goto LABEL_34;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    ImagePageList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71724608((UnityEngine_Object_o *)current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
    AssetManager__releaseAssetStorage(alphaImgPath, 0);
    this->fields.alphaTexAssetData = 0;
    ImagePageList = (System_Collections_Generic_List_object__o *)sub_1C71354(&this->fields.alphaTexAssetData, 0);
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
    AssetManager__releaseAssetStorage(TuorialImagePath, 0);
    this->fields.baseTexAssetData = 0;
    ImagePageList = (System_Collections_Generic_List_object__o *)sub_1C71354(&this->fields.baseTexAssetData, 0);
    this->fields.baseTexLoadRequested = 0;
  }
  infoData = this->fields.infoData;
  if ( infoData )
  {
    max_length = infoData->max_length;
    if ( max_length >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v12 >= max_length )
          sub_1C71610(ImagePageList);
        v13 = infoData->m_Items[v12];
        if ( !v13 )
          break;
        CampaignInfoImagePath = CampaignInfoDlg__GetCampaignInfoImagePath(this, v13->fields.imageId, v5);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetManager__releaseAssetStorage(CampaignInfoImagePath, 0);
        max_length = infoData->max_length;
        if ( (int)++v12 >= max_length )
          goto LABEL_29;
      }
LABEL_34:
      sub_1C71608(ImagePageList, method);
    }
LABEL_29:
    this->fields.infoData = 0;
    sub_1C71354(&this->fields.infoData, 0);
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
    sub_1C71354(&this->fields.closeCallbackFunc, 0);
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
  Il2CppObject *v4; // x0
  System_String_o *v5; // x0
  int32_t v7; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CC10D3 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&StringLiteral_25202/*"{0:D4}"*/);
    sub_1C713B0(&StringLiteral_20864/*"info_"*/);
    byte_4CC10D3 = 1;
  }
  v7 = imgId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v7);
  v5 = System_String__Format((System_String_o *)StringLiteral_25202/*"{0:D4}"*/, v4, 0);
  return System_String__Concat_64031724((System_String_o *)StringLiteral_20864/*"info_"*/, v5, 0);
}


System_String_o *CampaignInfoDlg__GetCampaignInfoImagePath(
        CampaignInfoDlg_o *this,
        int32_t imgId,
        const MethodInfo *method)
{
  System_String_o *CampaignInfoImageName; // x0

  if ( (byte_4CC10D2 & 1) == 0 )
  {
    this = (CampaignInfoDlg_o *)sub_1C713B0(&StringLiteral_3969/*"CampaignInfo/"*/);
    byte_4CC10D2 = 1;
  }
  CampaignInfoImageName = CampaignInfoDlg__GetCampaignInfoImageName(this, imgId, method);
  return System_String__Concat_64031724((System_String_o *)StringLiteral_3969/*"CampaignInfo/"*/, CampaignInfoImageName, 0);
}


int32_t CampaignInfoDlg__GetScrollHeightWithName(
        CampaignInfoDlg_o *this,
        System_String_o *imageName,
        const MethodInfo *method)
{
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  if ( !imageName || (this = (CampaignInfoDlg_o *)System_String__Split(imageName, 0x5Fu, 0, 0), result = 0, !this) )
    sub_1C71608(this, imageName);
  if ( LODWORD(this->fields.m_CancellationTokenSource) <= 2 )
    sub_1C71610(this);
  System_Int32__TryParse((System_String_o *)this->fields.baseWindow, &result, 0);
  return result;
}


System_String_o *CampaignInfoDlg__GetTuorialImageName(CampaignInfoDlg_o *this, int32_t imgId, const MethodInfo *method)
{
  Il2CppObject *v4; // x0
  System_String_o *v5; // x0
  int32_t v7; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CC10D1 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&StringLiteral_25202/*"{0:D4}"*/);
    sub_1C713B0(&StringLiteral_24356/*"tutorial_"*/);
    byte_4CC10D1 = 1;
  }
  v7 = imgId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v7);
  v5 = System_String__Format((System_String_o *)StringLiteral_25202/*"{0:D4}"*/, v4, 0);
  return System_String__Concat_64031724((System_String_o *)StringLiteral_24356/*"tutorial_"*/, v5, 0);
}


System_String_o *CampaignInfoDlg__GetTuorialImagePath(CampaignInfoDlg_o *this, int32_t imgId, const MethodInfo *method)
{
  System_String_o *TuorialImageName; // x0

  if ( (byte_4CC10D0 & 1) == 0 )
  {
    this = (CampaignInfoDlg_o *)sub_1C713B0(&StringLiteral_14619/*"Tutorial/"*/);
    byte_4CC10D0 = 1;
  }
  TuorialImageName = CampaignInfoDlg__GetTuorialImageName(this, imgId, method);
  return System_String__Concat_64031724((System_String_o *)StringLiteral_14619/*"Tutorial/"*/, TuorialImageName, 0);
}


void CampaignInfoDlg__Init(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  this->fields.isButtonEnable = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C71608(0, v4);
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

  if ( (byte_4CC10D9 & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&CampaignInfoDlg_TypeInfo);
    sub_1C713B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C713B0(&Method_CampaignInfoDlg___c__DisplayClass45_0__LoadAlpha_b__0__);
    sub_1C713B0(&CampaignInfoDlg___c__DisplayClass45_0_TypeInfo);
    byte_4CC10D9 = 1;
  }
  v5 = (Il2CppObject *)sub_1C715FC(CampaignInfoDlg___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_1C71608(v6, v7);
  v5[1].klass = (Il2CppClass *)this;
  sub_1C71354(&v5[1], this);
  v5[1].monitor = callback;
  sub_1C71354(&v5[1].monitor, callback);
  this->fields.alphaTexLoadRequested = 1;
  v8 = CampaignInfoDlg_TypeInfo;
  if ( !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
    v8 = CampaignInfoDlg_TypeInfo;
  }
  alphaImgPath = v8->static_fields->alphaImgPath;
  v10 = (AssetLoader_LoadEndDataHandler_o *)sub_1C715FC(AssetLoader_LoadEndDataHandler_TypeInfo);
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

  if ( (byte_4CC10D8 & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&CampaignInfoDlg_TypeInfo);
    sub_1C713B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C713B0(&Method_CampaignInfoDlg___c__DisplayClass44_0__LoadBase_b__0__);
    sub_1C713B0(&CampaignInfoDlg___c__DisplayClass44_0_TypeInfo);
    byte_4CC10D8 = 1;
  }
  v5 = (Il2CppObject *)sub_1C715FC(CampaignInfoDlg___c__DisplayClass44_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_1C71608(v6, v7);
  v5[1].klass = (Il2CppClass *)this;
  sub_1C71354(&v5[1], this);
  v5[1].monitor = callback;
  sub_1C71354(&v5[1].monitor, callback);
  this->fields.baseTexLoadRequested = 1;
  v9 = CampaignInfoDlg_TypeInfo;
  if ( !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
    v9 = CampaignInfoDlg_TypeInfo;
  }
  TuorialImagePath = CampaignInfoDlg__GetTuorialImagePath(this, v9->static_fields->baseImgNo, v8);
  v11 = (AssetLoader_LoadEndDataHandler_o *)sub_1C715FC(AssetLoader_LoadEndDataHandler_TypeInfo);
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

  if ( (byte_4CC10CF & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_CampaignInfoDlg__LoadImages_b__34_0__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC10CF = 1;
  }
  this->fields._loadIndex = 0;
  v4 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.ImagePageList = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_1C71354(&this->fields.ImagePageList, v4);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v6);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
  v7 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_CampaignInfoDlg__LoadImages_b__34_0__, 0);
  CampaignInfoDlg__LoadAlpha(this, v7, v8);
}


void CampaignInfoDlg__LoadStart(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  CampaignInfoDlg_o *v3; // x19
  struct CampaignInformation_array *infoData; // x8
  __int64 loadIndex; // x9
  CampaignInformation_o *v6; // x8
  System_String_o *CampaignInfoImagePath; // x20
  AssetLoader_LoadEndDataHandler_o *v8; // x21

  v3 = this;
  if ( (byte_4CC10D4 & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&Method_CampaignInfoDlg__LoadStart_b__40_0__);
    this = (CampaignInfoDlg_o *)sub_1C713B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_4CC10D4 = 1;
  }
  infoData = v3->fields.infoData;
  if ( !infoData )
    goto LABEL_13;
  loadIndex = v3->fields._loadIndex;
  if ( (unsigned int)loadIndex >= LODWORD(infoData->max_length) )
    sub_1C71610(this);
  v6 = infoData->m_Items[loadIndex];
  if ( !v6 )
LABEL_13:
    sub_1C71608(this, method);
  CampaignInfoImagePath = CampaignInfoDlg__GetCampaignInfoImagePath(v3, v6->fields.imageId, v2);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(CampaignInfoImagePath, 0) )
  {
    v8 = (AssetLoader_LoadEndDataHandler_o *)sub_1C715FC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v8, (Il2CppObject *)v3, Method_CampaignInfoDlg__LoadStart_b__40_0__, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(CampaignInfoImagePath, v8, 1, 0);
  }
}


void CampaignInfoDlg__OnCancelButton(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct CampaignInfoDlg_onButtonDelgate_o *btnCallbackFunc; // x8

  if ( (byte_4CC10E0 & 1) == 0 )
  {
    sub_1C713B0(&Method_CampaignInfoDlg_OnCancelButton__);
    byte_4CC10E0 = 1;
  }
  if ( !this->fields.IsFading && this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v3 = Method_CampaignInfoDlg_OnCancelButton__;
    if ( (*((_BYTE *)Method_CampaignInfoDlg_OnCancelButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8();
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    btnCallbackFunc = this->fields.btnCallbackFunc;
    if ( !btnCallbackFunc )
      sub_1C71608(v5, v6);
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

  if ( (byte_4CC10E1 & 1) == 0 )
  {
    sub_1C713B0(&Method_CampaignInfoDlg_OnClickClose__);
    byte_4CC10E1 = 1;
  }
  if ( !this->fields.IsFading && this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v3 = Method_CampaignInfoDlg_OnClickClose__;
    if ( (*((_BYTE *)Method_CampaignInfoDlg_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8();
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    btnCallbackFunc = this->fields.btnCallbackFunc;
    if ( !btnCallbackFunc )
      sub_1C71608(v5, v6);
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

  if ( (byte_4CC10DF & 1) == 0 )
  {
    sub_1C713B0(&Method_CampaignInfoDlg_OnDecideButton__);
    byte_4CC10DF = 1;
  }
  if ( !this->fields.IsFading && this->fields.isButtonEnable )
  {
    v3 = Method_CampaignInfoDlg_OnDecideButton__;
    if ( (*((_BYTE *)Method_CampaignInfoDlg_OnDecideButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8();
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    btnCallbackFunc = this->fields.btnCallbackFunc;
    if ( !btnCallbackFunc )
      sub_1C71608(v5, v6);
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
  struct CampaignInformation_array *script; // x1
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  CampaignInfoDlg_c *v18; // x0
  CampaignInformation_array *v19; // x1
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2

  if ( (byte_4CC10CE & 1) == 0 )
  {
    sub_1C713B0(&CampaignInfoDlg_TypeInfo);
    byte_4CC10CE = 1;
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
  sub_1C71354(&this->fields.infoData, script);
  this->fields.isButtonEnable = 0;
  this->fields.isNotExistImg = 0;
  CampaignInfoDlg__SetDecideActive(this, activeDecide, v16);
  DecideBtnLb = this->fields.DecideBtnLb;
  if ( !DecideBtnLb )
    goto LABEL_15;
  UILabel__set_text(DecideBtnLb, decideBtnMsg, 0);
  DecideBtnLb = this->fields.CancelBtnLb;
  if ( !DecideBtnLb )
    goto LABEL_15;
  UILabel__set_text(DecideBtnLb, cancelBtnMsg, 0);
  this->fields.btnCallbackFunc = onClickButton;
  sub_1C71354(&this->fields.btnCallbackFunc, onClickButton);
  v18 = CampaignInfoDlg_TypeInfo;
  if ( !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
    v18 = CampaignInfoDlg_TypeInfo;
  }
  this->fields.setPosX = (float)v18->static_fields->basePosX;
  BaseDialog__SetMask((BaseDialog_o *)this, 0, v17);
  CampaignInfoDlg__LoadImages(this, v19, v20);
  DecideBtnLb = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !DecideBtnLb )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)DecideBtnLb, 1, 0);
  CampaignInfoDlg__UpdateButtons(this, 1, v21);
  if ( this->fields.isNotExistImg )
  {
    DecideBtnLb = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( DecideBtnLb )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)DecideBtnLb, 0, 0);
      return;
    }
LABEL_15:
    sub_1C71608(DecideBtnLb, v14);
  }
}


void CampaignInfoDlg__OpenWindow(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x4

  if ( (byte_4CC10DA & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_CampaignInfoDlg_EndOpen__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC10DA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v4);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
  v5 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_CampaignInfoDlg_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v5, 1, 0, v6);
}


void CampaignInfoDlg__SetBaseImage(CampaignInfoDlg_o *this, UnityEngine_Texture2D_o *tex, const MethodInfo *method)
{
  UnityEngine_Component_o *BaseImg; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  int32_t layer; // w22
  UnityEngine_Shader_o *v8; // x22
  UnityEngine_Material_o *v9; // x21
  AssetData_o *alphaTexAssetData; // x20
  Il2CppObject *Object_object__51560868; // x0

  if ( (byte_4CC10D5 & 1) == 0 )
  {
    sub_1C713B0(&Method_AssetData_GetObject_Texture2D____78637000);
    sub_1C713B0(&CampaignInfoDlg_TypeInfo);
    sub_1C713B0(&UnityEngine_Material_TypeInfo);
    sub_1C713B0(&NGUITools_TypeInfo);
    sub_1C713B0(&StringLiteral_4933/*"Custom/SpriteWithMask"*/);
    sub_1C713B0(&StringLiteral_16270/*"_MaskTex"*/);
    byte_4CC10D5 = 1;
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
  v8 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4933/*"Custom/SpriteWithMask"*/, 0);
  v9 = (UnityEngine_Material_o *)sub_1C715FC(UnityEngine_Material_TypeInfo);
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
    || (Object_object__51560868 = AssetData__GetObject_object__51560868(
                                    alphaTexAssetData,
                                    CampaignInfoDlg_TypeInfo->static_fields->alphaImgName,
                                    (const MethodInfo_312C1A4 *)Method_AssetData_GetObject_Texture2D____78637000),
        UnityEngine_Material__SetTexture(
          v9,
          (System_String_o *)StringLiteral_16270/*"_MaskTex"*/,
          (UnityEngine_Texture_o *)Object_object__51560868,
          0),
        (BaseImg = (UnityEngine_Component_o *)this->fields.BaseImg) == 0)
    || (BaseImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(BaseImg, 0)) == 0 )
  {
LABEL_15:
    sub_1C71608(BaseImg, tex);
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

  if ( (byte_4CC10E2 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    byte_4CC10E2 = 1;
  }
  DecideButton = this->fields.DecideButton;
  if ( !DecideButton )
    goto LABEL_10;
  DecideButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               DecideButton,
                                               (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !DecideButton )
    goto LABEL_10;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)DecideButton, onOff, 0);
  DecideButton = this->fields.DecideButton;
  if ( !DecideButton )
    goto LABEL_10;
  DecideButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               DecideButton,
                                               (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v6 = 0.5;
  if ( onOff )
    v6 = 1.0;
  if ( !DecideButton )
LABEL_10:
    sub_1C71608(DecideButton, onOff);
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
    sub_1C71608(TouchMask, isDisp);
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
    sub_1C71608(CloseButton, isDisp);
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

  if ( (byte_4CC10DB & 1) == 0 )
  {
    sub_1C713B0(&EventDelegate_Callback_TypeInfo);
    sub_1C713B0(&Method_CampaignInfoDlg__UpdatePage_b__47_0__);
    sub_1C713B0(&CampaignInfoDlg_TypeInfo);
    byte_4CC10DB = 1;
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
  v6 = (EventDelegate_Callback_o *)sub_1C715FC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v6, (Il2CppObject *)this, Method_CampaignInfoDlg__UpdatePage_b__47_0__, 0);
  if ( !v5 )
    sub_1C71608(v7, v8);
  UITweener__SetOnFinished(v5, v6, 0);
}


void CampaignInfoDlg___LoadImages_b__34_0(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4CC10E5 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_CampaignInfoDlg_LoadStart__);
    byte_4CC10E5 = 1;
  }
  v3 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_CampaignInfoDlg_LoadStart__, 0);
  CampaignInfoDlg__LoadBase(this, v3, v4);
}


void CampaignInfoDlg___LoadStart_b__40_0(CampaignInfoDlg_o *this, AssetData_o *data, const MethodInfo *method)
{
  Il2CppObject *v4; // x20
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x3

  v4 = (Il2CppObject *)this;
  if ( (byte_4CC10E6 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    this = (CampaignInfoDlg_o *)sub_1C713B0(&Method_CampaignInfoDlg__LoadStart_b__40_1__);
    byte_4CC10E6 = 1;
  }
  if ( !data )
    sub_1C71608(this, data);
  AssetData__GetObjectNameList(data, 0);
  v5 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
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

  if ( (byte_4CC10DC & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC10DC = 1;
  }
  ScrView = (UnityEngine_Object_o *)this->fields.ScrView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(ScrView, 0, 0) )
  {
    v5 = this->fields.ScrView;
    if ( !v5 )
      sub_1C71608(0, v4);
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
  Il2CppObject *Object_object__51560868; // x0

  v4 = this;
  if ( (byte_4CC10E8 & 1) == 0 )
  {
    sub_1C713B0(&Method_AssetData_GetObject_Texture2D____78637000);
    sub_1C713B0(&CampaignInfoDlg_TypeInfo);
    sub_1C713B0(&UnityEngine_Material_TypeInfo);
    sub_1C713B0(&StringLiteral_4933/*"Custom/SpriteWithMask"*/);
    this = (CampaignInfoDlg___c__DisplayClass44_0_o *)sub_1C713B0(&StringLiteral_16270/*"_MaskTex"*/);
    byte_4CC10E8 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  _4__this->fields.baseTexAssetData = data;
  sub_1C71354(&_4__this->fields.baseTexAssetData, data);
  v6 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4933/*"Custom/SpriteWithMask"*/, 0);
  v7 = (UnityEngine_Material_o *)sub_1C715FC(UnityEngine_Material_TypeInfo);
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
    || (this = (CampaignInfoDlg___c__DisplayClass44_0_o *)AssetData__GetObject_object__51560868(
                                                            data,
                                                            (System_String_o *)this,
                                                            (const MethodInfo_312C1A4 *)Method_AssetData_GetObject_Texture2D____78637000),
        !v7)
    || (UnityEngine_Material__set_mainTexture(v7, (UnityEngine_Texture_o *)this, 0), (v11 = v4->fields.__4__this) == 0)
    || (this = (CampaignInfoDlg___c__DisplayClass44_0_o *)v11->fields.alphaTexAssetData) == 0 )
  {
LABEL_14:
    sub_1C71608(this, data);
  }
  Object_object__51560868 = AssetData__GetObject_object__51560868(
                              (AssetData_o *)this,
                              CampaignInfoDlg_TypeInfo->static_fields->alphaImgName,
                              (const MethodInfo_312C1A4 *)Method_AssetData_GetObject_Texture2D____78637000);
  UnityEngine_Material__SetTexture(
    v7,
    (System_String_o *)StringLiteral_16270/*"_MaskTex"*/,
    (UnityEngine_Texture_o *)Object_object__51560868,
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
    sub_1C71608(0, data);
  _4__this->fields.alphaTexAssetData = data;
  sub_1C71354(&_4__this->fields.alphaTexAssetData, data);
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
  sub_1C71354(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A9D7D0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A9D788;
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
  if ( (byte_4CC10E7 & 1) == 0 )
  {
    sub_1C713B0(&bool_TypeInfo);
    byte_4CC10E7 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C71364(this, v9, callback, object);
}


void CampaignInfoDlg_onButtonDelgate__EndInvoke(
        CampaignInfoDlg_onButtonDelgate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
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