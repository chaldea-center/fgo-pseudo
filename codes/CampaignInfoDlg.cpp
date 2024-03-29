void __fastcall CampaignInfoDlg___cctor(const MethodInfo *method)
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
  struct CampaignInfoDlg_StaticFields *static_fields; // x0
  System_Int32_array **v11; // x1
  struct CampaignInfoDlg_StaticFields *v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  CampaignInfoDlg_c *v20; // x8

  if ( (byte_4215D7D & 1) == 0 )
  {
    sub_B0D8A4(&CampaignInfoDlg_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_14622/*"Tutorial/tutorial_alpha"*/, v8);
    sub_B0D8A4(&StringLiteral_22904/*"tutorial_alpha"*/, v9);
    byte_4215D7D = 1;
  }
  CampaignInfoDlg_TypeInfo->static_fields->FADE_TIME = 0.3;
  static_fields = CampaignInfoDlg_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_14622/*"Tutorial/tutorial_alpha"*/;
  static_fields->alphaImgPath = (struct System_String_o *)StringLiteral_14622/*"Tutorial/tutorial_alpha"*/;
  sub_B0D840((BattleServantConfConponent_o *)&static_fields->alphaImgPath, v11, v2, v3, v4, v5, v6, v7);
  v12 = CampaignInfoDlg_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_22904/*"tutorial_alpha"*/;
  v12->alphaImgName = (struct System_String_o *)StringLiteral_22904/*"tutorial_alpha"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v12->alphaImgName, v13, v14, v15, v16, v17, v18, v19);
  v20 = CampaignInfoDlg_TypeInfo;
  CampaignInfoDlg_TypeInfo->static_fields->baseImgNo = 6;
  v20->static_fields->basePosX = 210;
}


void __fastcall CampaignInfoDlg___ctor(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  if ( (byte_4215D7C & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    byte_4215D7C = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  int basePanel; // w8
  CampaignInfoDlg_o *v15; // x25
  unsigned int v16; // w27
  int32_t v17; // w20
  UnityEngine_Texture2D_o *v18; // x24
  CampaignInfoDlg_c **v19; // x21
  System_String_o **v20; // x21
  CampaignInfoDlg_o *v21; // t1
  char v22; // w26
  const MethodInfo *v23; // x2
  UnityEngine_Texture2D_o *v24; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *ImagePrefab; // x23
  UnityEngine_Object_o *v26; // x23
  System_String_o *v27; // x0
  int32_t layer; // w25
  const MethodInfo *v29; // x5
  struct CampaignInformation_array *infoData; // x8
  __int64 loadIndex; // x9
  UnityEngine_Transform_o *v32; // x22
  UnityEngine_Transform_o *transform; // x22
  int v34; // s0
  __int64 v37; // x0
  CampaignInfoDlg_o *v38; // [xsp+8h] [xbp-68h]
  System_Action_o *action; // [xsp+10h] [xbp-60h]
  UnityEngine_Texture2D_o *tex; // [xsp+18h] [xbp-58h]
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4215D6F & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_Texture2D____67951464, data);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_CampaignInfoItem___, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_B0D8A4(&NGUITools_TypeInfo, v9);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_16362/*"alpha"*/, v12);
    this = (CampaignInfoDlg_o *)sub_B0D8A4(&StringLiteral_7519/*"Image"*/, v13);
    byte_4215D6F = 1;
  }
  if ( !data )
    goto LABEL_34;
  this = (CampaignInfoDlg_o *)AssetData__GetObjectNameList(data, 0LL);
  if ( !this )
    goto LABEL_34;
  v38 = v6;
  action = callback;
  basePanel = (int)this->fields.basePanel;
  v15 = this;
  if ( basePanel >= 1 )
  {
    tex = 0LL;
    v16 = 0;
    v17 = 0;
    v18 = 0LL;
    while ( v16 < basePanel )
    {
      v19 = &v15->klass + (int)v16;
      v21 = (CampaignInfoDlg_o *)v19[4];
      v20 = (System_String_o **)(v19 + 4);
      this = v21;
      if ( !v21 )
        goto LABEL_34;
      this = (CampaignInfoDlg_o *)System_String__Contains(
                                    (System_String_o *)this,
                                    (System_String_o *)StringLiteral_16362/*"alpha"*/,
                                    0LL);
      if ( v16 >= LODWORD(v15->fields.basePanel) )
        break;
      v22 = (char)this;
      this = (CampaignInfoDlg_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                    data,
                                    *v20,
                                    (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_Texture2D____67951464);
      v24 = (UnityEngine_Texture2D_o *)this;
      if ( (v22 & 1) == 0 )
      {
        if ( v16 >= LODWORD(v15->fields.basePanel) )
          break;
        tex = (UnityEngine_Texture2D_o *)this;
        this = (CampaignInfoDlg_o *)CampaignInfoDlg__GetScrollHeightWithName(this, *v20, v23);
        v17 = (int)this;
        v24 = v18;
      }
      basePanel = (int)v15->fields.basePanel;
      ++v16;
      v18 = v24;
      if ( (int)v16 >= basePanel )
        goto LABEL_16;
    }
LABEL_33:
    v37 = sub_B0D9A8(this);
    sub_B0D948(v37, 0LL);
  }
  tex = 0LL;
  v24 = 0LL;
  v17 = 0;
LABEL_16:
  ImagePrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)v38->fields.ImagePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v26 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                  ImagePrefab,
                                  (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v27 = System_Int32__ToString((int)v38 + 216, 0LL);
  this = (CampaignInfoDlg_o *)System_String__Concat_43849904((System_String_o *)StringLiteral_7519/*"Image"*/, v27, 0LL);
  if ( !v26 )
    goto LABEL_34;
  UnityEngine_Object__set_name(v26, (System_String_o *)this, 0LL);
  this = (CampaignInfoDlg_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v38, 0LL);
  if ( !this )
    goto LABEL_34;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL);
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__SetLayer((UnityEngine_GameObject_o *)v26, layer, 0LL);
  this = (CampaignInfoDlg_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)v26,
                                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_CampaignInfoItem___);
  infoData = v38->fields.infoData;
  if ( !infoData )
    goto LABEL_34;
  loadIndex = v38->fields._loadIndex;
  if ( (unsigned int)loadIndex >= infoData->max_length )
    goto LABEL_33;
  if ( !this )
    goto LABEL_34;
  CampaignInfoItem__SetCampaignInfo((CampaignInfoItem_o *)this, infoData->m_Items[loadIndex], tex, v24, v17, v29);
  this = (CampaignInfoDlg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v26, 0LL);
  if ( !v38->fields.ImageGrid )
    goto LABEL_34;
  v32 = (UnityEngine_Transform_o *)this;
  this = (CampaignInfoDlg_o *)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)v38->fields.ImageGrid,
                                0LL);
  if ( !v32 )
    goto LABEL_34;
  UnityEngine_Transform__set_parent(v32, (UnityEngine_Transform_o *)this, 0LL);
  this = (CampaignInfoDlg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v26, 0LL);
  if ( !this )
    goto LABEL_34;
  v41.fields.y = v38->fields.setPosX;
  v41.fields.x = 0.0;
  v41.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v41, 0LL);
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v26, 0LL);
  *(UnityEngine_Vector3_o *)&v34 = UnityEngine_Vector3__get_one(0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v34, 0LL),
        this = (CampaignInfoDlg_o *)v38->fields.ImagePageList,
        v38->fields.setPosX = v38->fields.setPosX - (float)v17,
        !this) )
  {
LABEL_34:
    sub_B0D97C(this);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
  ActionExtensions__Call(action, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CampaignInfoDlg__AfterLoad(CampaignInfoDlg_o *this, int32_t addCount, const MethodInfo *method)
{
  CampaignInfoDlg_o *v4; // x19
  struct CampaignInformation_array *infoData; // x9
  int v6; // w8

  v4 = this;
  if ( (byte_4215D70 & 1) == 0 )
  {
    this = (CampaignInfoDlg_o *)sub_B0D8A4(&StringLiteral_10128/*"OpenWindow"*/, *(_QWORD *)&addCount);
    byte_4215D70 = 1;
  }
  infoData = v4->fields.infoData;
  v6 = v4->fields._loadIndex + addCount;
  v4->fields._loadIndex = v6;
  if ( !infoData )
    sub_B0D97C(this);
  if ( v6 >= (signed int)infoData->max_length )
  {
    CampaignInfoDlg__UpdatePage(v4, *(const MethodInfo **)&addCount);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)v4,
      (System_String_o *)StringLiteral_10128/*"OpenWindow"*/,
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

  CampaignInfoDlg__Close_26892140(this, 0LL, v2);
}


void __fastcall CampaignInfoDlg__Close_26892140(
        CampaignInfoDlg_o *this,
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
  __int64 v12; // x2
  System_Action_o *v13; // x20

  if ( (byte_4215D76 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_CampaignInfoDlg_EndClose__, v10);
    byte_4215D76 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v13 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_CampaignInfoDlg_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
}


void __fastcall CampaignInfoDlg__EndClose(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ImagePageList; // x0
  Il2CppObject *current; // x20
  const MethodInfo *v11; // x1
  MethodInfo *v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  CampaignInfoDlg_c *v18; // x0
  System_String_o *alphaImgPath; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  CampaignInfoDlg_c *v26; // x0
  System_String_o *TuorialImagePath; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct CampaignInformation_array *infoData; // x22
  int max_length; // w8
  __int64 v36; // x23
  CampaignInformation_o *v37; // x8
  System_String_o *CampaignInfoImagePath; // x21
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Action_o *closeCallbackFunc; // x20
  __int64 v46; // x0
  System_Collections_Generic_List_Enumerator_T__o v47; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v48; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4215D77 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&CampaignInfoDlg_TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    byte_4215D77 = 1;
  }
  memset(&v48, 0, sizeof(v48));
  ImagePageList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.ImagePageList;
  if ( !ImagePageList )
    goto LABEL_40;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v47,
    ImagePageList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v48 = v47;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v48,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v48.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v48,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  if ( this->fields.alphaTexLoadRequested )
  {
    v18 = CampaignInfoDlg_TypeInfo;
    if ( (BYTE3(CampaignInfoDlg_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
      v18 = CampaignInfoDlg_TypeInfo;
    }
    alphaImgPath = v18->static_fields->alphaImgPath;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(alphaImgPath, 0LL);
    this->fields.alphaTexAssetData = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.alphaTexAssetData, 0LL, v20, v21, v22, v23, v24, v25);
    this->fields.alphaTexLoadRequested = 0;
  }
  if ( this->fields.baseTexLoadRequested )
  {
    v26 = CampaignInfoDlg_TypeInfo;
    if ( (BYTE3(CampaignInfoDlg_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
      v26 = CampaignInfoDlg_TypeInfo;
    }
    TuorialImagePath = CampaignInfoDlg__GetTuorialImagePath(this, v26->static_fields->baseImgNo, v12);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(TuorialImagePath, 0LL);
    this->fields.baseTexAssetData = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.baseTexAssetData, 0LL, v28, v29, v30, v31, v32, v33);
    this->fields.baseTexLoadRequested = 0;
  }
  infoData = this->fields.infoData;
  if ( infoData )
  {
    max_length = infoData->max_length;
    if ( max_length >= 1 )
    {
      v36 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v36 >= max_length )
        {
          v46 = sub_B0D9A8(ImagePageList);
          sub_B0D948(v46, 0LL);
        }
        v37 = infoData->m_Items[v36];
        if ( !v37 )
          break;
        CampaignInfoImagePath = CampaignInfoDlg__GetCampaignInfoImagePath(this, v37->fields.imageId, v12);
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        AssetManager__releaseAssetStorage(CampaignInfoImagePath, 0LL);
        max_length = infoData->max_length;
        if ( (int)++v36 >= max_length )
          goto LABEL_35;
      }
LABEL_40:
      sub_B0D97C(ImagePageList);
    }
LABEL_35:
    this->fields.infoData = 0LL;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.infoData,
      0LL,
      (System_String_array **)v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  CampaignInfoDlg__Init(this, v11);
  ImagePageList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UnityEngine_Component__get_gameObject(
                                                                                                   (UnityEngine_Component_o *)this,
                                                                                                   0LL);
  if ( !ImagePageList )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ImagePageList, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v39, v40, v41, v42, v43, v44);
    System_Action__Invoke(closeCallbackFunc, 0LL);
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
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4215D6B & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&imgId);
    sub_B0D8A4(&StringLiteral_23586/*"{0:D4}"*/, v4);
    sub_B0D8A4(&StringLiteral_19864/*"info_"*/, v5);
    byte_4215D6B = 1;
  }
  v9 = imgId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  v7 = System_String__Format((System_String_o *)StringLiteral_23586/*"{0:D4}"*/, v6, 0LL);
  return System_String__Concat_43849904((System_String_o *)StringLiteral_19864/*"info_"*/, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CampaignInfoDlg__GetCampaignInfoImagePath(
        CampaignInfoDlg_o *this,
        int32_t imgId,
        const MethodInfo *method)
{
  System_String_o *CampaignInfoImageName; // x0

  if ( (byte_4215D6A & 1) == 0 )
  {
    this = (CampaignInfoDlg_o *)sub_B0D8A4(&StringLiteral_3496/*"CampaignInfo/"*/, *(_QWORD *)&imgId);
    byte_4215D6A = 1;
  }
  CampaignInfoImageName = CampaignInfoDlg__GetCampaignInfoImageName(this, imgId, method);
  return System_String__Concat_43849904((System_String_o *)StringLiteral_3496/*"CampaignInfo/"*/, CampaignInfoImageName, 0LL);
}


int32_t __fastcall CampaignInfoDlg__GetScrollHeightWithName(
        CampaignInfoDlg_o *this,
        System_String_o *imageName,
        const MethodInfo *method)
{
  System_String_array *v4; // x0
  __int64 v6; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4215D6C & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, imageName);
    byte_4215D6C = 1;
  }
  result = 0;
  v4 = (System_String_array *)sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_9;
  if ( !v4->max_length )
    goto LABEL_10;
  LOWORD(v4->m_Items[0]) = 95;
  if ( !imageName || (v4 = System_String__Split(imageName, (System_Char_array *)v4, 0LL), result = 0, !v4) )
LABEL_9:
    sub_B0D97C(v4);
  if ( v4->max_length <= 2 )
  {
LABEL_10:
    v6 = sub_B0D9A8(v4);
    sub_B0D948(v6, 0LL);
  }
  System_Int32__TryParse(v4->m_Items[2], &result, 0LL);
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
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4215D69 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&imgId);
    sub_B0D8A4(&StringLiteral_23586/*"{0:D4}"*/, v4);
    sub_B0D8A4(&StringLiteral_22902/*"tutorial_"*/, v5);
    byte_4215D69 = 1;
  }
  v9 = imgId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  v7 = System_String__Format((System_String_o *)StringLiteral_23586/*"{0:D4}"*/, v6, 0LL);
  return System_String__Concat_43849904((System_String_o *)StringLiteral_22902/*"tutorial_"*/, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CampaignInfoDlg__GetTuorialImagePath(
        CampaignInfoDlg_o *this,
        int32_t imgId,
        const MethodInfo *method)
{
  System_String_o *TuorialImageName; // x0

  if ( (byte_4215D68 & 1) == 0 )
  {
    this = (CampaignInfoDlg_o *)sub_B0D8A4(&StringLiteral_14619/*"Tutorial/"*/, *(_QWORD *)&imgId);
    byte_4215D68 = 1;
  }
  TuorialImageName = CampaignInfoDlg__GetTuorialImageName(this, imgId, method);
  return System_String__Concat_43849904((System_String_o *)StringLiteral_14619/*"Tutorial/"*/, TuorialImageName, 0LL);
}


void __fastcall CampaignInfoDlg__Init(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  this->fields.isButtonEnable = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
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
  __int64 v9; // x19
  __int64 v10; // x0
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
  __int64 v23; // x1
  __int64 v24; // x2
  CampaignInfoDlg_c *v25; // x0
  System_String_o *alphaImgPath; // x20
  AssetLoader_LoadEndDataHandler_o *v27; // x21

  if ( (byte_4215D72 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, callback);
    sub_B0D8A4(&CampaignInfoDlg_TypeInfo, v5);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_B0D8A4(&Method_CampaignInfoDlg___c__DisplayClass45_0__LoadAlpha_b__0__, v7);
    sub_B0D8A4(&CampaignInfoDlg___c__DisplayClass45_0_TypeInfo, v8);
    byte_4215D72 = 1;
  }
  v9 = sub_B0D974(CampaignInfoDlg___c__DisplayClass45_0_TypeInfo, callback, method);
  CampaignInfoDlg___c__DisplayClass45_0___ctor((CampaignInfoDlg___c__DisplayClass45_0_o *)v9, 0LL);
  if ( !v9 )
    sub_B0D97C(v10);
  *(_QWORD *)(v9 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v9 + 24) = callback;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)callback, v17, v18, v19, v20, v21, v22);
  this->fields.alphaTexLoadRequested = 1;
  v25 = CampaignInfoDlg_TypeInfo;
  if ( (BYTE3(CampaignInfoDlg_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
    v25 = CampaignInfoDlg_TypeInfo;
  }
  alphaImgPath = v25->static_fields->alphaImgPath;
  v27 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v23, v24);
  AssetLoader_LoadEndDataHandler___ctor(
    v27,
    (Il2CppObject *)v9,
    Method_CampaignInfoDlg___c__DisplayClass45_0__LoadAlpha_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(alphaImgPath, v27, 1, 0LL);
}


void __fastcall CampaignInfoDlg__LoadBase(CampaignInfoDlg_o *this, System_Action_o *callback, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  __int64 v10; // x0
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
  const MethodInfo *v23; // x2
  CampaignInfoDlg_c *v24; // x0
  System_String_o *TuorialImagePath; // x19
  __int64 v26; // x1
  __int64 v27; // x2
  AssetLoader_LoadEndDataHandler_o *v28; // x21

  if ( (byte_4215D71 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, callback);
    sub_B0D8A4(&CampaignInfoDlg_TypeInfo, v5);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_B0D8A4(&Method_CampaignInfoDlg___c__DisplayClass44_0__LoadBase_b__0__, v7);
    sub_B0D8A4(&CampaignInfoDlg___c__DisplayClass44_0_TypeInfo, v8);
    byte_4215D71 = 1;
  }
  v9 = sub_B0D974(CampaignInfoDlg___c__DisplayClass44_0_TypeInfo, callback, method);
  CampaignInfoDlg___c__DisplayClass44_0___ctor((CampaignInfoDlg___c__DisplayClass44_0_o *)v9, 0LL);
  if ( !v9 )
    sub_B0D97C(v10);
  *(_QWORD *)(v9 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v9 + 24) = callback;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)callback, v17, v18, v19, v20, v21, v22);
  this->fields.baseTexLoadRequested = 1;
  v24 = CampaignInfoDlg_TypeInfo;
  if ( (BYTE3(CampaignInfoDlg_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
    v24 = CampaignInfoDlg_TypeInfo;
  }
  TuorialImagePath = CampaignInfoDlg__GetTuorialImagePath(this, v24->static_fields->baseImgNo, v23);
  v28 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v26, v27);
  AssetLoader_LoadEndDataHandler___ctor(
    v28,
    (Il2CppObject *)v9,
    Method_CampaignInfoDlg___c__DisplayClass44_0__LoadBase_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(TuorialImagePath, v28, 1, 0LL);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  CommonUI_o *Instance; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  System_Action_o *v18; // x20
  const MethodInfo *v19; // x2

  if ( (byte_4215D67 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, images);
    sub_B0D8A4(&Method_CampaignInfoDlg__LoadImages_b__34_0__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_GameObject__TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4215D67 = 1;
  }
  this->fields._loadIndex = 0;
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                 images,
                                                                                                 method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.ImagePageList = (struct System_Collections_Generic_List_GameObject__o *)v8;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.ImagePageList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v18 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v16, v17);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_CampaignInfoDlg__LoadImages_b__34_0__, 0LL);
  CampaignInfoDlg__LoadAlpha(this, v18, v19);
}


void __fastcall CampaignInfoDlg__LoadStart(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  CampaignInfoDlg_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  struct CampaignInformation_array *infoData; // x8
  __int64 loadIndex; // x9
  CampaignInformation_o *v8; // x8
  System_String_o *CampaignInfoImagePath; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  AssetLoader_LoadEndDataHandler_o *v12; // x21
  __int64 v13; // x0

  v3 = this;
  if ( (byte_4215D6D & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&Method_CampaignInfoDlg__LoadStart_b__40_0__, v4);
    this = (CampaignInfoDlg_o *)sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    byte_4215D6D = 1;
  }
  infoData = v3->fields.infoData;
  if ( !infoData )
    goto LABEL_15;
  loadIndex = v3->fields._loadIndex;
  if ( (unsigned int)loadIndex >= infoData->max_length )
  {
    v13 = sub_B0D9A8(this);
    sub_B0D948(v13, 0LL);
  }
  v8 = infoData->m_Items[loadIndex];
  if ( !v8 )
LABEL_15:
    sub_B0D97C(this);
  CampaignInfoImagePath = CampaignInfoDlg__GetCampaignInfoImagePath(v3, v8->fields.imageId, v2);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(CampaignInfoImagePath, 0LL) )
  {
    v12 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v10, v11);
    AssetLoader_LoadEndDataHandler___ctor(v12, (Il2CppObject *)v3, Method_CampaignInfoDlg__LoadStart_b__40_0__, 0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(CampaignInfoImagePath, v12, 1, 0LL);
  }
}


void __fastcall CampaignInfoDlg__OnCancelButton(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  CampaignInfoDlg_onButtonDelgate_o *btnCallbackFunc; // x0

  if ( (byte_4215D79 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4215D79 = 1;
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
    btnCallbackFunc = this->fields.btnCallbackFunc;
    if ( !btnCallbackFunc )
      sub_B0D97C(0LL);
    CampaignInfoDlg_onButtonDelgate__Invoke(btnCallbackFunc, 0, 0LL);
  }
}


void __fastcall CampaignInfoDlg__OnClickClose(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  CampaignInfoDlg_onButtonDelgate_o *btnCallbackFunc; // x0

  if ( (byte_4215D7A & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4215D7A = 1;
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
    btnCallbackFunc = this->fields.btnCallbackFunc;
    if ( !btnCallbackFunc )
      sub_B0D97C(0LL);
    CampaignInfoDlg_onButtonDelgate__Invoke(btnCallbackFunc, 0, 0LL);
  }
}


void __fastcall CampaignInfoDlg__OnDecideButton(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  CampaignInfoDlg_onButtonDelgate_o *btnCallbackFunc; // x0

  if ( (byte_4215D78 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4215D78 = 1;
  }
  if ( !this->fields.IsFading && this->fields.isButtonEnable )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    btnCallbackFunc = this->fields.btnCallbackFunc;
    if ( !btnCallbackFunc )
      sub_B0D97C(0LL);
    CampaignInfoDlg_onButtonDelgate__Invoke(btnCallbackFunc, 1, 0LL);
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct CampaignInformation_array *script; // x1
  const MethodInfo *v21; // x2
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  CampaignInfoDlg_c *v28; // x0
  CampaignInformation_array *v29; // x1
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x2

  if ( (byte_4215D66 & 1) == 0 )
  {
    sub_B0D8A4(&CampaignInfoDlg_TypeInfo, cInfo);
    byte_4215D66 = 1;
  }
  if ( !this->fields.IsInitialized )
  {
    CampaignInfoDlg__Init(this, (const MethodInfo *)cInfo);
    this->fields.IsInitialized = 1;
  }
  CampaignInfoDlg__SetTouchMask(this, 0, (const MethodInfo *)cancelBtnMsg);
  if ( !cInfo )
    goto LABEL_16;
  script = cInfo->fields.script;
  this->fields.infoData = script;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.infoData,
    (System_Int32_array **)script,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.isButtonEnable = 0;
  this->fields.isNotExistImg = 0;
  CampaignInfoDlg__SetDecideActive(this, activeDecide, v21);
  DecideBtnLb = this->fields.DecideBtnLb;
  if ( !DecideBtnLb )
    goto LABEL_16;
  UILabel__set_text(DecideBtnLb, decideBtnMsg, 0LL);
  DecideBtnLb = this->fields.CancelBtnLb;
  if ( !DecideBtnLb )
    goto LABEL_16;
  UILabel__set_text(DecideBtnLb, cancelBtnMsg, 0LL);
  this->fields.btnCallbackFunc = onClickButton;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.btnCallbackFunc,
    (System_Int32_array **)onClickButton,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = CampaignInfoDlg_TypeInfo;
  if ( (BYTE3(CampaignInfoDlg_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
    v28 = CampaignInfoDlg_TypeInfo;
  }
  this->fields.setPosX = (float)v28->static_fields->basePosX;
  BaseDialog__SetMask((BaseDialog_o *)this, 0, 0LL);
  CampaignInfoDlg__LoadImages(this, v29, v30);
  DecideBtnLb = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !DecideBtnLb )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)DecideBtnLb, 1, 0LL);
  CampaignInfoDlg__UpdateButtons(this, 1, v31);
  if ( this->fields.isNotExistImg )
  {
    DecideBtnLb = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( DecideBtnLb )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)DecideBtnLb, 0, 0LL);
      return;
    }
LABEL_16:
    sub_B0D97C(DecideBtnLb);
  }
}


void __fastcall CampaignInfoDlg__OpenWindow(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *v8; // x20

  if ( (byte_4215D73 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_CampaignInfoDlg_EndOpen__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4215D73 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  v8 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v6, v7);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_CampaignInfoDlg_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v8, 1, 0LL);
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
  UnityEngine_Texture_o *Object_WarBoardWaitTimeSetting; // x0

  if ( (byte_4215D6E & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_Texture2D____67951464, tex);
    sub_B0D8A4(&CampaignInfoDlg_TypeInfo, v5);
    sub_B0D8A4(&UnityEngine_Material_TypeInfo, v6);
    sub_B0D8A4(&NGUITools_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_4552/*"Custom/SpriteWithMask"*/, v8);
    sub_B0D8A4(&StringLiteral_16063/*"_MaskTex"*/, v9);
    byte_4215D6E = 1;
  }
  BaseImg = (UnityEngine_Component_o *)this->fields.BaseImg;
  if ( !BaseImg )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject(BaseImg, 0LL);
  BaseImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !BaseImg )
    goto LABEL_17;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)BaseImg, 0LL);
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__SetLayer(gameObject, layer, 0LL);
  v13 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4552/*"Custom/SpriteWithMask"*/, 0LL);
  v16 = (UnityEngine_Material_o *)sub_B0D974(UnityEngine_Material_TypeInfo, v14, v15);
  UnityEngine_Material___ctor(v16, v13, 0LL);
  BaseImg = (UnityEngine_Component_o *)this->fields.BaseImg;
  if ( !BaseImg )
    goto LABEL_17;
  BaseImg = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, UnityEngine_Material_o *, Il2CppMethodPointer))BaseImg->klass[1].vtable._2_GetHashCode.method)(
                                         BaseImg,
                                         v16,
                                         BaseImg->klass[1].vtable._3_ToString.methodPtr);
  if ( !v16 )
    goto LABEL_17;
  UnityEngine_Material__set_mainTexture(v16, (UnityEngine_Texture_o *)tex, 0LL);
  alphaTexAssetData = this->fields.alphaTexAssetData;
  BaseImg = (UnityEngine_Component_o *)CampaignInfoDlg_TypeInfo;
  if ( (BYTE3(CampaignInfoDlg_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
  }
  if ( !alphaTexAssetData
    || (Object_WarBoardWaitTimeSetting = (UnityEngine_Texture_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                    alphaTexAssetData,
                                                                    CampaignInfoDlg_TypeInfo->static_fields->alphaImgName,
                                                                    (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_Texture2D____67951464),
        UnityEngine_Material__SetTexture(
          v16,
          (System_String_o *)StringLiteral_16063/*"_MaskTex"*/,
          Object_WarBoardWaitTimeSetting,
          0LL),
        (BaseImg = (UnityEngine_Component_o *)this->fields.BaseImg) == 0LL)
    || (BaseImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(BaseImg, 0LL)) == 0LL )
  {
LABEL_17:
    sub_B0D97C(BaseImg);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)BaseImg, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CampaignInfoDlg__SetDecideActive(CampaignInfoDlg_o *this, bool onOff, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *DecideButton; // x0
  UIWidget_o *Component_srcLineSprite; // x20
  int v8; // s0

  if ( (byte_4215D7B & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, onOff);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v5);
    byte_4215D7B = 1;
  }
  DecideButton = this->fields.DecideButton;
  if ( !DecideButton
    || (DecideButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     DecideButton,
                                                     (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)DecideButton, onOff, 0LL),
        (DecideButton = this->fields.DecideButton) == 0LL) )
  {
LABEL_11:
    sub_B0D97C(DecideButton);
  }
  Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            DecideButton,
                                            (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( onOff )
  {
    *(UnityEngine_Color_o *)&v8 = UnityEngine_Color__get_white(0LL);
    if ( !Component_srcLineSprite )
      goto LABEL_11;
  }
  else
  {
    *(UnityEngine_Color_o *)&v8 = UnityEngine_Color__get_gray(0LL);
    if ( !Component_srcLineSprite )
      goto LABEL_11;
  }
  UIWidget__set_color(Component_srcLineSprite, *(UnityEngine_Color_o *)&v8, 0LL);
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
    sub_B0D97C(TouchMask);
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
    sub_B0D97C(CloseButton);
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
  UnityEngine_GameObject_o *ImageRoot; // x20
  CampaignInfoDlg_c *v6; // x0
  UITweener_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  EventDelegate_Callback_o *v10; // x21
  __int64 v11; // x0

  if ( (byte_4215D74 & 1) == 0 )
  {
    sub_B0D8A4(&EventDelegate_Callback_TypeInfo, method);
    sub_B0D8A4(&Method_CampaignInfoDlg__UpdatePage_b__47_0__, v3);
    sub_B0D8A4(&CampaignInfoDlg_TypeInfo, v4);
    byte_4215D74 = 1;
  }
  this->fields.IsFading = 1;
  ImageRoot = this->fields.ImageRoot;
  v6 = CampaignInfoDlg_TypeInfo;
  if ( (BYTE3(CampaignInfoDlg_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
    v6 = CampaignInfoDlg_TypeInfo;
  }
  v7 = (UITweener_o *)TweenAlpha__Begin(ImageRoot, v6->static_fields->FADE_TIME, 1.0, 0LL);
  v10 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v8, v9);
  EventDelegate_Callback___ctor(v10, (Il2CppObject *)this, Method_CampaignInfoDlg__UpdatePage_b__47_0__, 0LL);
  if ( !v7 )
    sub_B0D97C(v11);
  UITweener__SetOnFinished(v7, v10, 0LL);
}


void __fastcall CampaignInfoDlg___LoadImages_b__34_0(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4215D7E & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_CampaignInfoDlg_LoadStart__, v4);
    byte_4215D7E = 1;
  }
  v5 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
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
  if ( (byte_4215D7F & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, data);
    this = (CampaignInfoDlg_o *)sub_B0D8A4(&Method_CampaignInfoDlg__LoadStart_b__40_1__, v5);
    byte_4215D7F = 1;
  }
  if ( !data )
    sub_B0D97C(this);
  AssetData__GetObjectNameList(data, 0LL);
  v8 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v6, v7);
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

  if ( (byte_4215D75 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4215D75 = 1;
  }
  ScrView = (UnityEngine_Object_o *)this->fields.ScrView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(ScrView, 0LL, 0LL) )
  {
    v4 = this->fields.ScrView;
    if ( !v4 )
      sub_B0D97C(0LL);
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
  System_String_o *_4__this; // x0
  UnityEngine_Shader_o *v10; // x22
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Material_o *v13; // x21
  struct CampaignInfoDlg_o *v14; // x8
  CampaignInfoDlg_o *v15; // x22
  struct CampaignInfoDlg_o *v16; // x8
  UnityEngine_Texture_o *Object_WarBoardWaitTimeSetting; // x0

  if ( (byte_4211DE4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_Texture2D____67951464, data);
    sub_B0D8A4(&CampaignInfoDlg_TypeInfo, v5);
    sub_B0D8A4(&UnityEngine_Material_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_4552/*"Custom/SpriteWithMask"*/, v7);
    sub_B0D8A4(&StringLiteral_16063/*"_MaskTex"*/, v8);
    byte_4211DE4 = 1;
  }
  _4__this = (System_String_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  _4__this[10].klass = (System_String_c *)data;
  sub_B0D840(&_4__this[10], data);
  v10 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4552/*"Custom/SpriteWithMask"*/, 0LL);
  v13 = (UnityEngine_Material_o *)sub_B0D974(UnityEngine_Material_TypeInfo, v11, v12);
  UnityEngine_Material___ctor(v13, v10, 0LL);
  v14 = this->fields.__4__this;
  if ( !v14 )
    goto LABEL_15;
  _4__this = (System_String_o *)v14->fields.BaseImg;
  if ( !_4__this )
    goto LABEL_15;
  ((void (__fastcall *)(System_String_o *, UnityEngine_Material_o *, Il2CppMethodPointer))_4__this->klass->vtable._25_System_Collections_Generic_IEnumerable_System_Char__GetEnumerator.method)(
    _4__this,
    v13,
    _4__this->klass->vtable._26_Equals.methodPtr);
  v15 = this->fields.__4__this;
  _4__this = (System_String_o *)CampaignInfoDlg_TypeInfo;
  if ( (BYTE3(CampaignInfoDlg_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
  }
  if ( !v15
    || (_4__this = CampaignInfoDlg__GetTuorialImageName(v15, CampaignInfoDlg_TypeInfo->static_fields->baseImgNo, 0LL),
        !data)
    || (_4__this = (System_String_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                        data,
                                        _4__this,
                                        (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_Texture2D____67951464),
        !v13)
    || (UnityEngine_Material__set_mainTexture(v13, (UnityEngine_Texture_o *)_4__this, 0LL),
        (v16 = this->fields.__4__this) == 0LL)
    || (_4__this = (System_String_o *)v16->fields.alphaTexAssetData) == 0LL )
  {
LABEL_15:
    sub_B0D97C(_4__this);
  }
  Object_WarBoardWaitTimeSetting = (UnityEngine_Texture_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                              (AssetData_o *)_4__this,
                                                              CampaignInfoDlg_TypeInfo->static_fields->alphaImgName,
                                                              (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_Texture2D____67951464);
  UnityEngine_Material__SetTexture(v13, (System_String_o *)StringLiteral_16063/*"_MaskTex"*/, Object_WarBoardWaitTimeSetting, 0LL);
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
    sub_B0D97C(0LL);
  _4__this->fields.alphaTexAssetData = data;
  sub_B0D840(&_4__this->fields.alphaTexAssetData, data);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B0D840(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall CampaignInfoDlg_onButtonDelgate__BeginInvoke(
        CampaignInfoDlg_onButtonDelgate_o *this,
        bool decide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = decide;
  if ( (byte_4211DE5 & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, decide);
    byte_4211DE5 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B0D848(this, v9, callback, object);
}


void __fastcall CampaignInfoDlg_onButtonDelgate__EndInvoke(
        CampaignInfoDlg_onButtonDelgate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CampaignInfoDlg_onButtonDelgate__Invoke(
        CampaignInfoDlg_onButtonDelgate_o *this,
        bool decide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  CampaignInfoDlg_onButtonDelgate_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  CampaignInfoDlg_onButtonDelgate_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  CampaignInfoDlg_onButtonDelgate_o *v30; // [xsp+8h] [xbp-48h] BYREF

  v30 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v30;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (CampaignInfoDlg_onButtonDelgate_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v19 = v8[v9];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v19->fields.extra_arg, decide, method, v3);
      if ( (sub_B0D8D4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(decide, v21);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B0D8CC(v21);
      v24 = sub_B0DCD0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v25 = *v20;
          v26 = *(_QWORD *)(v21 + 24);
          v27 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AA67A0(v20, v26, v27);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B0D954(v16, v21);
        (*v18)(v20, decide, v18);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v10) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AA67A0(v20, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, decide, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            decide,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, decide, v21);
    goto LABEL_37;
  }
}