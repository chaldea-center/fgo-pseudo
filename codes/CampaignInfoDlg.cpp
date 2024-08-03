void __fastcall CampaignInfoDlg___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  struct CampaignInfoDlg_StaticFields *static_fields; // x0
  struct CampaignInfoDlg_StaticFields *v5; // x0

  if ( (byte_49F7504 & 1) == 0 )
  {
    sub_1B640C8(&CampaignInfoDlg_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_14526/*"Tutorial/tutorial_alpha"*/, v2);
    sub_1B640C8(&StringLiteral_24002/*"tutorial_alpha"*/, v3);
    byte_49F7504 = 1;
  }
  static_fields = CampaignInfoDlg_TypeInfo->static_fields;
  static_fields->FADE_TIME = 0.3;
  static_fields->alphaImgPath = (struct System_String_o *)StringLiteral_14526/*"Tutorial/tutorial_alpha"*/;
  sub_1B6406C(&static_fields->alphaImgPath);
  v5 = CampaignInfoDlg_TypeInfo->static_fields;
  v5->alphaImgName = (struct System_String_o *)StringLiteral_24002/*"tutorial_alpha"*/;
  sub_1B6406C(&v5->alphaImgName);
  *(_QWORD *)&CampaignInfoDlg_TypeInfo->static_fields->baseImgNo = 0xD200000006LL;
}


void __fastcall CampaignInfoDlg___ctor(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  if ( (byte_49F7503 & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    byte_49F7503 = 1;
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  __int64 v16; // x3
  int m_CancellationTokenSource; // w8
  CampaignInfoDlg_o *v18; // x25
  unsigned int v19; // w27
  int32_t v20; // w21
  CampaignInfoDlg_o *v21; // x24
  CampaignInfoDlg_o *v22; // x19
  CampaignInfoDlg_c **v23; // x20
  System_String_o **v24; // x20
  CampaignInfoDlg_o *v25; // t1
  char v26; // w26
  CampaignInfoDlg_o *v27; // x23
  Il2CppObject *ImagePrefab; // x22
  Il2CppObject *v29; // x22
  System_String_o *v30; // x0
  int32_t layer; // w25
  const MethodInfo *v32; // x5
  struct CampaignInformation_array *infoData; // x8
  __int64 loadIndex; // x9
  CampaignInfoDlg_o *v35; // x23
  __int64 v36; // x1
  CampaignInfoDlg_o *v37; // x23
  __int64 v38; // x8
  _QWORD *v39; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v41; // x8
  System_Action_o *v42; // [xsp+0h] [xbp-70h]
  CampaignInfoDlg_o *v43; // [xsp+8h] [xbp-68h]
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_49F74F6 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_Texture2D____75705984, data);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CampaignInfoItem___, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_1B640C8(&NGUITools_TypeInfo, v9);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    sub_1B640C8(&StringLiteral_16668/*"alpha"*/, v12);
    this = (CampaignInfoDlg_o *)sub_1B640C8(&StringLiteral_7442/*"Image"*/, v13);
    byte_49F74F6 = 1;
  }
  if ( !data )
    goto LABEL_38;
  this = (CampaignInfoDlg_o *)AssetData__GetObjectNameList(data, 0LL);
  if ( !this )
    goto LABEL_38;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v18 = this;
  v42 = callback;
  v43 = v6;
  if ( m_CancellationTokenSource >= 1 )
  {
    v19 = 0;
    v20 = 0;
    v21 = 0LL;
    v22 = 0LL;
    while ( v19 < m_CancellationTokenSource )
    {
      v23 = &v18->klass + (int)v19;
      v25 = (CampaignInfoDlg_o *)v23[4];
      v24 = (System_String_o **)(v23 + 4);
      this = v25;
      if ( !v25 )
        goto LABEL_38;
      this = (CampaignInfoDlg_o *)System_String__Contains(
                                    (System_String_o *)this,
                                    (System_String_o *)StringLiteral_16668/*"alpha"*/,
                                    0LL);
      if ( v19 >= LODWORD(v18->fields.m_CancellationTokenSource) )
        break;
      v26 = (char)this;
      this = (CampaignInfoDlg_o *)AssetData__GetObject_object__48347676(
                                    data,
                                    *v24,
                                    (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_Texture2D____75705984);
      v27 = this;
      if ( (v26 & 1) == 0 )
      {
        if ( v19 >= LODWORD(v18->fields.m_CancellationTokenSource) )
          break;
        v22 = this;
        this = (CampaignInfoDlg_o *)CampaignInfoDlg__GetScrollHeightWithName(this, *v24, v15);
        v20 = (int)this;
        v27 = v21;
      }
      m_CancellationTokenSource = (int)v18->fields.m_CancellationTokenSource;
      ++v19;
      v21 = v27;
      if ( (int)v19 >= m_CancellationTokenSource )
        goto LABEL_16;
    }
LABEL_37:
    sub_1B6432C(this, v14, v15, v16);
  }
  v22 = 0LL;
  v27 = 0LL;
  v20 = 0;
LABEL_16:
  ImagePrefab = (Il2CppObject *)v43->fields.ImagePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v29 = UnityEngine_Object__Instantiate_object_(
          ImagePrefab,
          (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v30 = System_Int32__ToString((int)v43 + 224, 0LL);
  this = (CampaignInfoDlg_o *)System_String__Concat_61375396((System_String_o *)StringLiteral_7442/*"Image"*/, v30, 0LL);
  if ( !v29 )
    goto LABEL_38;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v29, (System_String_o *)this, 0LL);
  this = (CampaignInfoDlg_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v43, 0LL);
  if ( !this )
    goto LABEL_38;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__SetLayer((UnityEngine_GameObject_o *)v29, layer, 0LL);
  this = (CampaignInfoDlg_o *)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)v29,
                                (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CampaignInfoItem___);
  infoData = v43->fields.infoData;
  if ( !infoData )
    goto LABEL_38;
  loadIndex = v43->fields._loadIndex;
  if ( (unsigned int)loadIndex >= infoData->max_length )
    goto LABEL_37;
  if ( !this )
    goto LABEL_38;
  CampaignInfoItem__SetCampaignInfo(
    (CampaignInfoItem_o *)this,
    infoData->m_Items[loadIndex],
    (UnityEngine_Texture2D_o *)v22,
    (UnityEngine_Texture2D_o *)v27,
    v20,
    v32);
  this = (CampaignInfoDlg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v29, 0LL);
  if ( !v43->fields.ImageGrid )
    goto LABEL_38;
  v35 = this;
  this = (CampaignInfoDlg_o *)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)v43->fields.ImageGrid,
                                0LL);
  if ( !v35 )
    goto LABEL_38;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v35, (UnityEngine_Transform_o *)this, 0LL);
  this = (CampaignInfoDlg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v29, 0LL);
  if ( !this )
    goto LABEL_38;
  v44.fields.y = v43->fields.setPosX;
  v44.fields.x = 0.0;
  v44.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v44, 0LL);
  this = (CampaignInfoDlg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v29, 0LL);
  v37 = this;
  if ( !byte_49F7116 )
  {
    this = (CampaignInfoDlg_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v36);
    byte_49F7116 = 1;
  }
  if ( !v37
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v37,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        this = (CampaignInfoDlg_o *)v43->fields.ImagePageList,
        v43->fields.setPosX = v43->fields.setPosX - (float)v20,
        !this)
    || (v38 = *(_QWORD *)&this->fields.m_CachedPtr,
        v39 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++HIDWORD(this->fields.m_CancellationTokenSource),
        !v38) )
  {
LABEL_38:
    sub_1B64324(this);
  }
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v38 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      v29,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
  }
  else
  {
    v41 = v38 + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v41 + 32) = v29;
    sub_1B6406C(v41 + 32);
  }
  ActionExtensions__Call(v42, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CampaignInfoDlg__AfterLoad(CampaignInfoDlg_o *this, int32_t addCount, const MethodInfo *method)
{
  CampaignInfoDlg_o *v4; // x19
  struct CampaignInformation_array *infoData; // x9
  int v6; // w8

  v4 = this;
  if ( (byte_49F74F7 & 1) == 0 )
  {
    this = (CampaignInfoDlg_o *)sub_1B640C8(&StringLiteral_9959/*"OpenWindow"*/, *(_QWORD *)&addCount);
    byte_49F74F7 = 1;
  }
  infoData = v4->fields.infoData;
  v6 = v4->fields._loadIndex + addCount;
  v4->fields._loadIndex = v6;
  if ( !infoData )
    sub_1B64324(this);
  if ( v6 >= (signed int)infoData->max_length )
  {
    CampaignInfoDlg__UpdatePage(v4, *(const MethodInfo **)&addCount);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)v4,
      (System_String_o *)StringLiteral_9959/*"OpenWindow"*/,
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

  CampaignInfoDlg__Close_30302284(this, 0LL, v2);
}


void __fastcall CampaignInfoDlg__Close_30302284(
        CampaignInfoDlg_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_49F74FD & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&Method_CampaignInfoDlg_EndClose__, v5);
    byte_49F74FD = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B6406C(&this->fields.closeCallbackFunc);
  this->fields.isButtonEnable = 0;
  v8 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v6, v7);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_CampaignInfoDlg_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v8, v9);
}


void __fastcall CampaignInfoDlg__EndClose(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *ImagePageList; // x0
  Il2CppObject *current; // x20
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  __int64 v13; // x3
  CampaignInfoDlg_c *v14; // x0
  System_String_o *alphaImgPath; // x20
  CampaignInfoDlg_c *v16; // x0
  System_String_o *TuorialImagePath; // x20
  struct CampaignInformation_array *infoData; // x23
  int max_length; // w8
  __int64 v20; // x24
  CampaignInformation_o *v21; // x8
  System_String_o *CampaignInfoImagePath; // x21
  struct System_Action_o *closeCallbackFunc; // x20
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49F74FE & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&CampaignInfoDlg_TypeInfo, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    byte_49F74FE = 1;
  }
  memset(&v25, 0, sizeof(v25));
  ImagePageList = (System_Collections_Generic_List_object__o *)this->fields.ImagePageList;
  if ( !ImagePageList )
    goto LABEL_34;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    ImagePageList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  if ( this->fields.alphaTexLoadRequested )
  {
    v14 = CampaignInfoDlg_TypeInfo;
    if ( !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
      v14 = CampaignInfoDlg_TypeInfo;
    }
    alphaImgPath = v14->static_fields->alphaImgPath;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(alphaImgPath, 0LL);
    this->fields.alphaTexAssetData = 0LL;
    ImagePageList = (System_Collections_Generic_List_object__o *)sub_1B6406C(&this->fields.alphaTexAssetData);
    this->fields.alphaTexLoadRequested = 0;
  }
  if ( this->fields.baseTexLoadRequested )
  {
    v16 = CampaignInfoDlg_TypeInfo;
    if ( !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
      v16 = CampaignInfoDlg_TypeInfo;
    }
    TuorialImagePath = CampaignInfoDlg__GetTuorialImagePath(this, v16->static_fields->baseImgNo, v12);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(TuorialImagePath, 0LL);
    this->fields.baseTexAssetData = 0LL;
    ImagePageList = (System_Collections_Generic_List_object__o *)sub_1B6406C(&this->fields.baseTexAssetData);
    this->fields.baseTexLoadRequested = 0;
  }
  infoData = this->fields.infoData;
  if ( infoData )
  {
    max_length = infoData->max_length;
    if ( max_length >= 1 )
    {
      v20 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v20 >= max_length )
          sub_1B6432C(ImagePageList, v11, v12, v13);
        v21 = infoData->m_Items[v20];
        if ( !v21 )
          break;
        CampaignInfoImagePath = CampaignInfoDlg__GetCampaignInfoImagePath(this, v21->fields.imageId, v12);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetManager__releaseAssetStorage(CampaignInfoImagePath, 0LL);
        max_length = infoData->max_length;
        if ( (int)++v20 >= max_length )
          goto LABEL_29;
      }
LABEL_34:
      sub_1B64324(ImagePageList);
    }
LABEL_29:
    this->fields.infoData = 0LL;
    sub_1B6406C(&this->fields.infoData);
  }
  CampaignInfoDlg__Init(this, v11);
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
    sub_1B6406C(&this->fields.closeCallbackFunc);
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
  __int64 v5; // x1
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49F74F3 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&imgId);
    sub_1B640C8(&StringLiteral_24852/*"{0:D4}"*/, v4);
    sub_1B640C8(&StringLiteral_20569/*"info_"*/, v5);
    byte_49F74F3 = 1;
  }
  v9 = imgId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  v7 = System_String__Format((System_String_o *)StringLiteral_24852/*"{0:D4}"*/, v6, 0LL);
  return System_String__Concat_61375396((System_String_o *)StringLiteral_20569/*"info_"*/, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CampaignInfoDlg__GetCampaignInfoImagePath(
        CampaignInfoDlg_o *this,
        int32_t imgId,
        const MethodInfo *method)
{
  System_String_o *CampaignInfoImageName; // x0

  if ( (byte_49F74F2 & 1) == 0 )
  {
    this = (CampaignInfoDlg_o *)sub_1B640C8(&StringLiteral_3966/*"CampaignInfo/"*/, *(_QWORD *)&imgId);
    byte_49F74F2 = 1;
  }
  CampaignInfoImageName = CampaignInfoDlg__GetCampaignInfoImageName(this, imgId, method);
  return System_String__Concat_61375396((System_String_o *)StringLiteral_3966/*"CampaignInfo/"*/, CampaignInfoImageName, 0LL);
}


int32_t __fastcall CampaignInfoDlg__GetScrollHeightWithName(
        CampaignInfoDlg_o *this,
        System_String_o *imageName,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  if ( !imageName || (this = (CampaignInfoDlg_o *)System_String__Split(imageName, 0x5Fu, 0, 0LL), result = 0, !this) )
    sub_1B64324(this);
  if ( LODWORD(this->fields.m_CancellationTokenSource) <= 2 )
    sub_1B6432C(this, v3, v4, v5);
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
  __int64 v5; // x1
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49F74F1 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&imgId);
    sub_1B640C8(&StringLiteral_24852/*"{0:D4}"*/, v4);
    sub_1B640C8(&StringLiteral_24000/*"tutorial_"*/, v5);
    byte_49F74F1 = 1;
  }
  v9 = imgId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  v7 = System_String__Format((System_String_o *)StringLiteral_24852/*"{0:D4}"*/, v6, 0LL);
  return System_String__Concat_61375396((System_String_o *)StringLiteral_24000/*"tutorial_"*/, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CampaignInfoDlg__GetTuorialImagePath(
        CampaignInfoDlg_o *this,
        int32_t imgId,
        const MethodInfo *method)
{
  System_String_o *TuorialImageName; // x0

  if ( (byte_49F74F0 & 1) == 0 )
  {
    this = (CampaignInfoDlg_o *)sub_1B640C8(&StringLiteral_14523/*"Tutorial/"*/, *(_QWORD *)&imgId);
    byte_49F74F0 = 1;
  }
  TuorialImageName = CampaignInfoDlg__GetTuorialImageName(this, imgId, method);
  return System_String__Concat_61375396((System_String_o *)StringLiteral_14523/*"Tutorial/"*/, TuorialImageName, 0LL);
}


void __fastcall CampaignInfoDlg__Init(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1

  this->fields.isButtonEnable = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, v4);
}


void __fastcall CampaignInfoDlg__LoadAlpha(
        CampaignInfoDlg_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  CampaignInfoDlg_c *v13; // x0
  System_String_o *alphaImgPath; // x19
  AssetLoader_LoadEndDataHandler_o *v15; // x20

  if ( (byte_49F74F9 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, callback);
    sub_1B640C8(&CampaignInfoDlg_TypeInfo, v5);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_1B640C8(&Method_CampaignInfoDlg___c__DisplayClass45_0__LoadAlpha_b__0__, v7);
    sub_1B640C8(&CampaignInfoDlg___c__DisplayClass45_0_TypeInfo, v8);
    byte_49F74F9 = 1;
  }
  v9 = (Il2CppObject *)sub_1B64314(CampaignInfoDlg___c__DisplayClass45_0_TypeInfo, callback, method);
  System_Object___ctor(v9, 0LL);
  if ( !v9 )
    sub_1B64324(v10);
  v9[1].klass = (Il2CppClass *)this;
  sub_1B6406C(&v9[1]);
  v9[1].monitor = callback;
  sub_1B6406C(&v9[1].monitor);
  this->fields.alphaTexLoadRequested = 1;
  v13 = CampaignInfoDlg_TypeInfo;
  if ( !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
    v13 = CampaignInfoDlg_TypeInfo;
  }
  alphaImgPath = v13->static_fields->alphaImgPath;
  v15 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v11, v12);
  AssetLoader_LoadEndDataHandler___ctor(v15, v9, Method_CampaignInfoDlg___c__DisplayClass45_0__LoadAlpha_b__0__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(alphaImgPath, v15, 1, 0LL);
}


void __fastcall CampaignInfoDlg__LoadBase(CampaignInfoDlg_o *this, System_Action_o *callback, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *v9; // x20
  __int64 v10; // x0
  const MethodInfo *v11; // x2
  CampaignInfoDlg_c *v12; // x0
  System_String_o *TuorialImagePath; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  AssetLoader_LoadEndDataHandler_o *v16; // x21

  if ( (byte_49F74F8 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, callback);
    sub_1B640C8(&CampaignInfoDlg_TypeInfo, v5);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_1B640C8(&Method_CampaignInfoDlg___c__DisplayClass44_0__LoadBase_b__0__, v7);
    sub_1B640C8(&CampaignInfoDlg___c__DisplayClass44_0_TypeInfo, v8);
    byte_49F74F8 = 1;
  }
  v9 = (Il2CppObject *)sub_1B64314(CampaignInfoDlg___c__DisplayClass44_0_TypeInfo, callback, method);
  System_Object___ctor(v9, 0LL);
  if ( !v9 )
    sub_1B64324(v10);
  v9[1].klass = (Il2CppClass *)this;
  sub_1B6406C(&v9[1]);
  v9[1].monitor = callback;
  sub_1B6406C(&v9[1].monitor);
  this->fields.baseTexLoadRequested = 1;
  v12 = CampaignInfoDlg_TypeInfo;
  if ( !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
    v12 = CampaignInfoDlg_TypeInfo;
  }
  TuorialImagePath = CampaignInfoDlg__GetTuorialImagePath(this, v12->static_fields->baseImgNo, v11);
  v16 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v14, v15);
  AssetLoader_LoadEndDataHandler___ctor(v16, v9, Method_CampaignInfoDlg___c__DisplayClass44_0__LoadBase_b__0__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(TuorialImagePath, v16, 1, 0LL);
}


void __fastcall CampaignInfoDlg__LoadImages(
        CampaignInfoDlg_o *this,
        CampaignInformation_array *images,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x20
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x20
  const MethodInfo *v13; // x2

  if ( (byte_49F74EF & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, images);
    sub_1B640C8(&Method_CampaignInfoDlg__LoadImages_b__34_0__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_GameObject__TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_49F74EF = 1;
  }
  this->fields._loadIndex = 0;
  v8 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_GameObject__TypeInfo,
                                                      images,
                                                      method);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.ImagePageList = (struct System_Collections_Generic_List_GameObject__o *)v8;
  sub_1B6406C(&this->fields.ImagePageList);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  v12 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_CampaignInfoDlg__LoadImages_b__34_0__, 0LL);
  CampaignInfoDlg__LoadAlpha(this, v12, v13);
}


void __fastcall CampaignInfoDlg__LoadStart(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  CampaignInfoDlg_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  struct CampaignInformation_array *infoData; // x8
  __int64 loadIndex; // x9
  CampaignInformation_o *v9; // x8
  System_String_o *CampaignInfoImagePath; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  AssetLoader_LoadEndDataHandler_o *v13; // x21

  v4 = this;
  if ( (byte_49F74F4 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&Method_CampaignInfoDlg__LoadStart_b__40_0__, v5);
    this = (CampaignInfoDlg_o *)sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    byte_49F74F4 = 1;
  }
  infoData = v4->fields.infoData;
  if ( !infoData )
    goto LABEL_13;
  loadIndex = v4->fields._loadIndex;
  if ( (unsigned int)loadIndex >= infoData->max_length )
    sub_1B6432C(this, method, v2, v3);
  v9 = infoData->m_Items[loadIndex];
  if ( !v9 )
LABEL_13:
    sub_1B64324(this);
  CampaignInfoImagePath = CampaignInfoDlg__GetCampaignInfoImagePath(v4, v9->fields.imageId, v2);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(CampaignInfoImagePath, 0LL) )
  {
    v13 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v11, v12);
    AssetLoader_LoadEndDataHandler___ctor(v13, (Il2CppObject *)v4, Method_CampaignInfoDlg__LoadStart_b__40_0__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(CampaignInfoImagePath, v13, 1, 0LL);
  }
}


void __fastcall CampaignInfoDlg__OnCancelButton(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  struct CampaignInfoDlg_onButtonDelgate_o *btnCallbackFunc; // x8

  if ( (byte_49F7500 & 1) == 0 )
  {
    sub_1B640C8(&Method_CampaignInfoDlg_OnCancelButton__, method);
    byte_49F7500 = 1;
  }
  if ( !this->fields.IsFading && this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v3 = Method_CampaignInfoDlg_OnCancelButton__;
    if ( (*((_BYTE *)Method_CampaignInfoDlg_OnCancelButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0();
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    btnCallbackFunc = this->fields.btnCallbackFunc;
    if ( !btnCallbackFunc )
      sub_1B64324(v5);
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
  struct CampaignInfoDlg_onButtonDelgate_o *btnCallbackFunc; // x8

  if ( (byte_49F7501 & 1) == 0 )
  {
    sub_1B640C8(&Method_CampaignInfoDlg_OnClickClose__, method);
    byte_49F7501 = 1;
  }
  if ( !this->fields.IsFading && this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v3 = Method_CampaignInfoDlg_OnClickClose__;
    if ( (*((_BYTE *)Method_CampaignInfoDlg_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0();
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    btnCallbackFunc = this->fields.btnCallbackFunc;
    if ( !btnCallbackFunc )
      sub_1B64324(v5);
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
  struct CampaignInfoDlg_onButtonDelgate_o *btnCallbackFunc; // x8

  if ( (byte_49F74FF & 1) == 0 )
  {
    sub_1B640C8(&Method_CampaignInfoDlg_OnDecideButton__, method);
    byte_49F74FF = 1;
  }
  if ( !this->fields.IsFading && this->fields.isButtonEnable )
  {
    v3 = Method_CampaignInfoDlg_OnDecideButton__;
    if ( (*((_BYTE *)Method_CampaignInfoDlg_OnDecideButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0();
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
    btnCallbackFunc = this->fields.btnCallbackFunc;
    if ( !btnCallbackFunc )
      sub_1B64324(v5);
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
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2
  CampaignInfoDlg_c *v16; // x0
  CampaignInformation_array *v17; // x1
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2

  if ( (byte_49F74EE & 1) == 0 )
  {
    sub_1B640C8(&CampaignInfoDlg_TypeInfo, cInfo);
    byte_49F74EE = 1;
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
  sub_1B6406C(&this->fields.infoData);
  this->fields.isButtonEnable = 0;
  this->fields.isNotExistImg = 0;
  CampaignInfoDlg__SetDecideActive(this, activeDecide, v14);
  DecideBtnLb = this->fields.DecideBtnLb;
  if ( !DecideBtnLb )
    goto LABEL_15;
  UILabel__set_text(DecideBtnLb, decideBtnMsg, 0LL);
  DecideBtnLb = this->fields.CancelBtnLb;
  if ( !DecideBtnLb )
    goto LABEL_15;
  UILabel__set_text(DecideBtnLb, cancelBtnMsg, 0LL);
  this->fields.btnCallbackFunc = onClickButton;
  sub_1B6406C(&this->fields.btnCallbackFunc);
  v16 = CampaignInfoDlg_TypeInfo;
  if ( !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
    v16 = CampaignInfoDlg_TypeInfo;
  }
  this->fields.setPosX = (float)v16->static_fields->basePosX;
  BaseDialog__SetMask((BaseDialog_o *)this, 0, v15);
  CampaignInfoDlg__LoadImages(this, v17, v18);
  DecideBtnLb = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !DecideBtnLb )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)DecideBtnLb, 1, 0LL);
  CampaignInfoDlg__UpdateButtons(this, 1, v19);
  if ( this->fields.isNotExistImg )
  {
    DecideBtnLb = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( DecideBtnLb )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)DecideBtnLb, 0, 0LL);
      return;
    }
LABEL_15:
    sub_1B64324(DecideBtnLb);
  }
}


void __fastcall CampaignInfoDlg__OpenWindow(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *v8; // x20
  const MethodInfo *v9; // x3

  if ( (byte_49F74FA & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_CampaignInfoDlg_EndOpen__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_49F74FA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  v8 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v6, v7);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_CampaignInfoDlg_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v8, 1, v9);
}


void __fastcall CampaignInfoDlg__SetBaseImage(
        CampaignInfoDlg_o *this,
        UnityEngine_Texture2D_o *tex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Component_o *BaseImg; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  int32_t layer; // w22
  UnityEngine_Shader_o *v13; // x22
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Material_o *v16; // x21
  AssetData_o *alphaTexAssetData; // x20
  Il2CppObject *Object_object__48347676; // x0

  if ( (byte_49F74F5 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_Texture2D____75705984, tex);
    sub_1B640C8(&CampaignInfoDlg_TypeInfo, v5);
    sub_1B640C8(&UnityEngine_Material_TypeInfo, v6);
    sub_1B640C8(&NGUITools_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_4952/*"Custom/SpriteWithMask"*/, v8);
    sub_1B640C8(&StringLiteral_16198/*"_MaskTex"*/, v9);
    byte_49F74F5 = 1;
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
  v13 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4952/*"Custom/SpriteWithMask"*/, 0LL);
  v16 = (UnityEngine_Material_o *)sub_1B64314(UnityEngine_Material_TypeInfo, v14, v15);
  UnityEngine_Material___ctor(v16, v13, 0LL);
  BaseImg = (UnityEngine_Component_o *)this->fields.BaseImg;
  if ( !BaseImg )
    goto LABEL_15;
  BaseImg = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, UnityEngine_Material_o *, Il2CppMethodPointer))BaseImg->klass[1].vtable._2_GetHashCode.method)(
                                         BaseImg,
                                         v16,
                                         BaseImg->klass[1].vtable._3_ToString.methodPtr);
  if ( !v16 )
    goto LABEL_15;
  UnityEngine_Material__set_mainTexture(v16, (UnityEngine_Texture_o *)tex, 0LL);
  BaseImg = (UnityEngine_Component_o *)CampaignInfoDlg_TypeInfo;
  alphaTexAssetData = this->fields.alphaTexAssetData;
  if ( !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
    BaseImg = (UnityEngine_Component_o *)j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
  if ( !alphaTexAssetData
    || (Object_object__48347676 = AssetData__GetObject_object__48347676(
                                    alphaTexAssetData,
                                    CampaignInfoDlg_TypeInfo->static_fields->alphaImgName,
                                    (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_Texture2D____75705984),
        UnityEngine_Material__SetTexture(
          v16,
          (System_String_o *)StringLiteral_16198/*"_MaskTex"*/,
          (UnityEngine_Texture_o *)Object_object__48347676,
          0LL),
        (BaseImg = (UnityEngine_Component_o *)this->fields.BaseImg) == 0LL)
    || (BaseImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(BaseImg, 0LL)) == 0LL )
  {
LABEL_15:
    sub_1B64324(BaseImg);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)BaseImg, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CampaignInfoDlg__SetDecideActive(CampaignInfoDlg_o *this, bool onOff, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *DecideButton; // x0
  float v7; // s0
  float v8; // s3
  float v9; // s1
  float v10; // s2

  if ( (byte_49F7502 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, onOff);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v5);
    byte_49F7502 = 1;
  }
  DecideButton = this->fields.DecideButton;
  if ( !DecideButton )
    goto LABEL_10;
  DecideButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               DecideButton,
                                               (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !DecideButton )
    goto LABEL_10;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)DecideButton, onOff, 0LL);
  DecideButton = this->fields.DecideButton;
  if ( !DecideButton )
    goto LABEL_10;
  DecideButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               DecideButton,
                                               (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v7 = 0.5;
  if ( onOff )
    v7 = 1.0;
  if ( !DecideButton )
LABEL_10:
    sub_1B64324(DecideButton);
  v8 = 1.0;
  v9 = v7;
  v10 = v7;
  UIWidget__set_color((UIWidget_o *)DecideButton, *(UnityEngine_Color_o *)&v7, 0LL);
}


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
    sub_1B64324(TouchMask);
  }
  UnityEngine_GameObject__SetActive(TouchMask, isDisp, 0LL);
}


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
    sub_1B64324(CloseButton);
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
  __int64 v3; // x1
  __int64 v4; // x1
  CampaignInfoDlg_c *v5; // x0
  UnityEngine_GameObject_o *ImageRoot; // x20
  UITweener_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  EventDelegate_Callback_o *v10; // x21
  __int64 v11; // x0

  if ( (byte_49F74FB & 1) == 0 )
  {
    sub_1B640C8(&EventDelegate_Callback_TypeInfo, method);
    sub_1B640C8(&Method_CampaignInfoDlg__UpdatePage_b__47_0__, v3);
    sub_1B640C8(&CampaignInfoDlg_TypeInfo, v4);
    byte_49F74FB = 1;
  }
  this->fields.IsFading = 1;
  v5 = CampaignInfoDlg_TypeInfo;
  ImageRoot = this->fields.ImageRoot;
  if ( !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
    v5 = CampaignInfoDlg_TypeInfo;
  }
  v7 = (UITweener_o *)TweenAlpha__Begin(ImageRoot, v5->static_fields->FADE_TIME, 1.0, 0LL);
  v10 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v8, v9);
  EventDelegate_Callback___ctor(v10, (Il2CppObject *)this, Method_CampaignInfoDlg__UpdatePage_b__47_0__, 0LL);
  if ( !v7 )
    sub_1B64324(v11);
  UITweener__SetOnFinished(v7, v10, 0LL);
}


void __fastcall CampaignInfoDlg___LoadImages_b__34_0(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_49F7505 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_CampaignInfoDlg_LoadStart__, v4);
    byte_49F7505 = 1;
  }
  v5 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_CampaignInfoDlg_LoadStart__, 0LL);
  CampaignInfoDlg__LoadBase(this, v5, v6);
}


void __fastcall CampaignInfoDlg___LoadStart_b__40_0(
        CampaignInfoDlg_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *v8; // x21
  const MethodInfo *v9; // x3

  v4 = (Il2CppObject *)this;
  if ( (byte_49F7506 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, data);
    this = (CampaignInfoDlg_o *)sub_1B640C8(&Method_CampaignInfoDlg__LoadStart_b__40_1__, v5);
    byte_49F7506 = 1;
  }
  if ( !data )
    sub_1B64324(this);
  AssetData__GetObjectNameList(data, 0LL);
  v8 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v6, v7);
  System_Action___ctor(v8, v4, Method_CampaignInfoDlg__LoadStart_b__40_1__, 0LL);
  CampaignInfoDlg__AddScrollImg((CampaignInfoDlg_o *)v4, data, v8, v9);
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
  UIScrollView_o *v4; // x0

  if ( (byte_49F74FC & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F74FC = 1;
  }
  ScrView = (UnityEngine_Object_o *)this->fields.ScrView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(ScrView, 0LL, 0LL) )
  {
    v4 = this->fields.ScrView;
    if ( !v4 )
      sub_1B64324(0LL);
    UIScrollView__ResetPosition(v4, 0LL);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  CampaignInfoDlg_o *_4__this; // x0
  UnityEngine_Shader_o *v10; // x22
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Material_o *v13; // x21
  struct CampaignInfoDlg_o *v14; // x8
  const MethodInfo *v15; // x2
  struct CampaignInfoDlg_o *v16; // x23
  struct CampaignInfoDlg_o *v17; // x8
  Il2CppObject *Object_object__48347676; // x0

  if ( (byte_49F7508 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_Texture2D____75705984, data);
    sub_1B640C8(&CampaignInfoDlg_TypeInfo, v5);
    sub_1B640C8(&UnityEngine_Material_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_4952/*"Custom/SpriteWithMask"*/, v7);
    sub_1B640C8(&StringLiteral_16198/*"_MaskTex"*/, v8);
    byte_49F7508 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  _4__this->fields.baseTexAssetData = data;
  sub_1B6406C(&_4__this->fields.baseTexAssetData);
  v10 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4952/*"Custom/SpriteWithMask"*/, 0LL);
  v13 = (UnityEngine_Material_o *)sub_1B64314(UnityEngine_Material_TypeInfo, v11, v12);
  UnityEngine_Material___ctor(v13, v10, 0LL);
  v14 = this->fields.__4__this;
  if ( !v14 )
    goto LABEL_14;
  _4__this = (CampaignInfoDlg_o *)v14->fields.BaseImg;
  if ( !_4__this )
    goto LABEL_14;
  (*(void (__fastcall **)(CampaignInfoDlg_o *, UnityEngine_Material_o *, Il2CppMethodPointer))&_4__this->klass[1]._2.naturalAligment)(
    _4__this,
    v13,
    _4__this->klass[1].vtable._0_Equals.methodPtr);
  _4__this = (CampaignInfoDlg_o *)CampaignInfoDlg_TypeInfo;
  v16 = this->fields.__4__this;
  if ( !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
    _4__this = (CampaignInfoDlg_o *)j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
  if ( !v16
    || (_4__this = (CampaignInfoDlg_o *)CampaignInfoDlg__GetTuorialImageName(
                                          _4__this,
                                          CampaignInfoDlg_TypeInfo->static_fields->baseImgNo,
                                          v15),
        !data)
    || (_4__this = (CampaignInfoDlg_o *)AssetData__GetObject_object__48347676(
                                          data,
                                          (System_String_o *)_4__this,
                                          (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_Texture2D____75705984),
        !v13)
    || (UnityEngine_Material__set_mainTexture(v13, (UnityEngine_Texture_o *)_4__this, 0LL),
        (v17 = this->fields.__4__this) == 0LL)
    || (_4__this = (CampaignInfoDlg_o *)v17->fields.alphaTexAssetData) == 0LL )
  {
LABEL_14:
    sub_1B64324(_4__this);
  }
  Object_object__48347676 = AssetData__GetObject_object__48347676(
                              (AssetData_o *)_4__this,
                              CampaignInfoDlg_TypeInfo->static_fields->alphaImgName,
                              (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_Texture2D____75705984);
  UnityEngine_Material__SetTexture(
    v13,
    (System_String_o *)StringLiteral_16198/*"_MaskTex"*/,
    (UnityEngine_Texture_o *)Object_object__48347676,
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
    sub_1B64324(0LL);
  _4__this->fields.alphaTexAssetData = data;
  sub_1B6406C(&_4__this->fields.alphaTexAssetData);
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
  sub_1B6406C(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A4568;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A4520;
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
  if ( (byte_49F7507 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, decide);
    byte_49F7507 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v9, callback, object);
}


void __fastcall CampaignInfoDlg_onButtonDelgate__EndInvoke(
        CampaignInfoDlg_onButtonDelgate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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