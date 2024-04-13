void __fastcall CampaignInfoDlg___cctor(const MethodInfo *method)
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
  struct CampaignInfoDlg_StaticFields *static_fields; // x0
  System_Int32_array **v15; // x1
  struct CampaignInfoDlg_StaticFields *v16; // x0
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  CampaignInfoDlg_c *v24; // x8

  if ( (byte_42EB639 & 1) == 0 )
  {
    sub_B5D5C4(&CampaignInfoDlg_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_14734/*"Tutorial/tutorial_alpha"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_23133/*"tutorial_alpha"*/, v11, v12, v13);
    byte_42EB639 = 1;
  }
  CampaignInfoDlg_TypeInfo->static_fields->FADE_TIME = 0.3;
  static_fields = CampaignInfoDlg_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_14734/*"Tutorial/tutorial_alpha"*/;
  static_fields->alphaImgPath = (struct System_String_o *)StringLiteral_14734/*"Tutorial/tutorial_alpha"*/;
  sub_B5D560((BattleServantConfConponent_o *)&static_fields->alphaImgPath, v15, v2, v3, v4, v5, v6, v7);
  v16 = CampaignInfoDlg_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_23133/*"tutorial_alpha"*/;
  v16->alphaImgName = (struct System_String_o *)StringLiteral_23133/*"tutorial_alpha"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v16->alphaImgName, v17, v18, v19, v20, v21, v22, v23);
  v24 = CampaignInfoDlg_TypeInfo;
  CampaignInfoDlg_TypeInfo->static_fields->baseImgNo = 6;
  v24->static_fields->basePosX = 210;
}


void __fastcall CampaignInfoDlg___ctor(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB638 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB638 = 1;
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
  int basePanel; // w8
  CampaignInfoDlg_o *v29; // x25
  unsigned int v30; // w27
  int32_t v31; // w20
  UnityEngine_Texture2D_o *v32; // x24
  CampaignInfoDlg_c **v33; // x21
  System_String_o **v34; // x21
  CampaignInfoDlg_o *v35; // t1
  char v36; // w26
  const MethodInfo *v37; // x2
  UnityEngine_Texture2D_o *v38; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *ImagePrefab; // x23
  UnityEngine_Object_o *v40; // x23
  System_String_o *v41; // x0
  int32_t layer; // w25
  const MethodInfo *v43; // x5
  struct CampaignInformation_array *infoData; // x8
  __int64 loadIndex; // x9
  UnityEngine_Transform_o *v46; // x22
  UnityEngine_Transform_o *transform; // x22
  int v48; // s0
  __int64 v51; // x0
  CampaignInfoDlg_o *v52; // [xsp+8h] [xbp-68h]
  System_Action_o *action; // [xsp+10h] [xbp-60h]
  UnityEngine_Texture2D_o *tex; // [xsp+18h] [xbp-58h]
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_42EB62B & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_Texture2D____68807528, (_DWORD)data, (_DWORD)callback, method);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CampaignInfoItem___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v10, v11, v12);
    sub_B5D5C4(&NGUITools_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v16, v17, v18);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_16511/*"alpha"*/, v22, v23, v24);
    this = (CampaignInfoDlg_o *)sub_B5D5C4(&StringLiteral_7582/*"Image"*/, v25, v26, v27);
    byte_42EB62B = 1;
  }
  if ( !data )
    goto LABEL_34;
  this = (CampaignInfoDlg_o *)AssetData__GetObjectNameList(data, 0LL);
  if ( !this )
    goto LABEL_34;
  v52 = v6;
  action = callback;
  basePanel = (int)this->fields.basePanel;
  v29 = this;
  if ( basePanel >= 1 )
  {
    tex = 0LL;
    v30 = 0;
    v31 = 0;
    v32 = 0LL;
    while ( v30 < basePanel )
    {
      v33 = &v29->klass + (int)v30;
      v35 = (CampaignInfoDlg_o *)v33[4];
      v34 = (System_String_o **)(v33 + 4);
      this = v35;
      if ( !v35 )
        goto LABEL_34;
      this = (CampaignInfoDlg_o *)System_String__Contains(
                                    (System_String_o *)this,
                                    (System_String_o *)StringLiteral_16511/*"alpha"*/,
                                    0LL);
      if ( v30 >= LODWORD(v29->fields.basePanel) )
        break;
      v36 = (char)this;
      this = (CampaignInfoDlg_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                    data,
                                    *v34,
                                    (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_Texture2D____68807528);
      v38 = (UnityEngine_Texture2D_o *)this;
      if ( (v36 & 1) == 0 )
      {
        if ( v30 >= LODWORD(v29->fields.basePanel) )
          break;
        tex = (UnityEngine_Texture2D_o *)this;
        this = (CampaignInfoDlg_o *)CampaignInfoDlg__GetScrollHeightWithName(this, *v34, v37);
        v31 = (int)this;
        v38 = v32;
      }
      basePanel = (int)v29->fields.basePanel;
      ++v30;
      v32 = v38;
      if ( (int)v30 >= basePanel )
        goto LABEL_16;
    }
LABEL_33:
    v51 = sub_B5D6C8(this);
    sub_B5D668(v51, 0LL);
  }
  tex = 0LL;
  v38 = 0LL;
  v31 = 0;
LABEL_16:
  ImagePrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)v52->fields.ImagePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v40 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                  ImagePrefab,
                                  (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v41 = System_Int32__ToString((int)v52 + 216, 0LL);
  this = (CampaignInfoDlg_o *)System_String__Concat_44577788((System_String_o *)StringLiteral_7582/*"Image"*/, v41, 0LL);
  if ( !v40 )
    goto LABEL_34;
  UnityEngine_Object__set_name(v40, (System_String_o *)this, 0LL);
  this = (CampaignInfoDlg_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v52, 0LL);
  if ( !this )
    goto LABEL_34;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL);
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__SetLayer((UnityEngine_GameObject_o *)v40, layer, 0LL);
  this = (CampaignInfoDlg_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)v40,
                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CampaignInfoItem___);
  infoData = v52->fields.infoData;
  if ( !infoData )
    goto LABEL_34;
  loadIndex = v52->fields._loadIndex;
  if ( (unsigned int)loadIndex >= infoData->max_length )
    goto LABEL_33;
  if ( !this )
    goto LABEL_34;
  CampaignInfoItem__SetCampaignInfo((CampaignInfoItem_o *)this, infoData->m_Items[loadIndex], tex, v38, v31, v43);
  this = (CampaignInfoDlg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v40, 0LL);
  if ( !v52->fields.ImageGrid )
    goto LABEL_34;
  v46 = (UnityEngine_Transform_o *)this;
  this = (CampaignInfoDlg_o *)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)v52->fields.ImageGrid,
                                0LL);
  if ( !v46 )
    goto LABEL_34;
  UnityEngine_Transform__set_parent(v46, (UnityEngine_Transform_o *)this, 0LL);
  this = (CampaignInfoDlg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v40, 0LL);
  if ( !this )
    goto LABEL_34;
  v55.fields.y = v52->fields.setPosX;
  v55.fields.x = 0.0;
  v55.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v55, 0LL);
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v40, 0LL);
  *(UnityEngine_Vector3_o *)&v48 = UnityEngine_Vector3__get_one(0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v48, 0LL),
        this = (CampaignInfoDlg_o *)v52->fields.ImagePageList,
        v52->fields.setPosX = v52->fields.setPosX - (float)v31,
        !this) )
  {
LABEL_34:
    sub_B5D69C(this, data);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v40,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
  ActionExtensions__Call(action, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CampaignInfoDlg__AfterLoad(CampaignInfoDlg_o *this, int32_t addCount, const MethodInfo *method)
{
  __int64 v3; // x3
  CampaignInfoDlg_o *v5; // x19
  struct CampaignInformation_array *infoData; // x9
  int v7; // w8

  v5 = this;
  if ( (byte_42EB62C & 1) == 0 )
  {
    this = (CampaignInfoDlg_o *)sub_B5D5C4(&StringLiteral_10210/*"OpenWindow"*/, addCount, (_DWORD)method, v3);
    byte_42EB62C = 1;
  }
  infoData = v5->fields.infoData;
  v7 = v5->fields._loadIndex + addCount;
  v5->fields._loadIndex = v7;
  if ( !infoData )
    sub_B5D69C(this, *(_QWORD *)&addCount);
  if ( v7 >= (signed int)infoData->max_length )
  {
    CampaignInfoDlg__UpdatePage(v5, *(const MethodInfo **)&addCount);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)v5,
      (System_String_o *)StringLiteral_10210/*"OpenWindow"*/,
      0.3,
      0LL);
  }
  else
  {
    CampaignInfoDlg__LoadStart(v5, *(const MethodInfo **)&addCount);
  }
}


void __fastcall CampaignInfoDlg__Close(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CampaignInfoDlg__Close_30501584(this, 0LL, v2);
}


void __fastcall CampaignInfoDlg__Close_30501584(
        CampaignInfoDlg_o *this,
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
  System_Action_o *v13; // x20

  if ( (byte_42EB632 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_CampaignInfoDlg_EndClose__, v10, v11, v12);
    byte_42EB632 = 1;
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
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_CampaignInfoDlg_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
}


void __fastcall CampaignInfoDlg__EndClose(CampaignInfoDlg_o *this, const MethodInfo *method)
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ImagePageList; // x0
  Il2CppObject *current; // x20
  MethodInfo *v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  CampaignInfoDlg_c *v31; // x0
  System_String_o *alphaImgPath; // x20
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  CampaignInfoDlg_c *v39; // x0
  System_String_o *TuorialImagePath; // x20
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct CampaignInformation_array *infoData; // x22
  int max_length; // w8
  __int64 v49; // x23
  CampaignInformation_o *v50; // x8
  System_String_o *CampaignInfoImagePath; // x21
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Action_o *closeCallbackFunc; // x20
  __int64 v59; // x0
  System_Collections_Generic_List_Enumerator_T__o v60; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42EB633 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CampaignInfoDlg_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    byte_42EB633 = 1;
  }
  memset(&v61, 0, sizeof(v61));
  ImagePageList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.ImagePageList;
  if ( !ImagePageList )
    goto LABEL_40;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v60,
    ImagePageList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v61 = v60;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v61,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v61.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v61,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  if ( this->fields.alphaTexLoadRequested )
  {
    v31 = CampaignInfoDlg_TypeInfo;
    if ( (BYTE3(CampaignInfoDlg_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
      v31 = CampaignInfoDlg_TypeInfo;
    }
    alphaImgPath = v31->static_fields->alphaImgPath;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(alphaImgPath, 0LL);
    this->fields.alphaTexAssetData = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.alphaTexAssetData, 0LL, v33, v34, v35, v36, v37, v38);
    this->fields.alphaTexLoadRequested = 0;
  }
  if ( this->fields.baseTexLoadRequested )
  {
    v39 = CampaignInfoDlg_TypeInfo;
    if ( (BYTE3(CampaignInfoDlg_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
      v39 = CampaignInfoDlg_TypeInfo;
    }
    TuorialImagePath = CampaignInfoDlg__GetTuorialImagePath(this, v39->static_fields->baseImgNo, v25);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(TuorialImagePath, 0LL);
    this->fields.baseTexAssetData = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.baseTexAssetData, 0LL, v41, v42, v43, v44, v45, v46);
    this->fields.baseTexLoadRequested = 0;
  }
  infoData = this->fields.infoData;
  if ( infoData )
  {
    max_length = infoData->max_length;
    if ( max_length >= 1 )
    {
      v49 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v49 >= max_length )
        {
          v59 = sub_B5D6C8(ImagePageList);
          sub_B5D668(v59, 0LL);
        }
        v50 = infoData->m_Items[v49];
        if ( !v50 )
          break;
        CampaignInfoImagePath = CampaignInfoDlg__GetCampaignInfoImagePath(this, v50->fields.imageId, v25);
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        AssetManager__releaseAssetStorage(CampaignInfoImagePath, 0LL);
        max_length = infoData->max_length;
        if ( (int)++v49 >= max_length )
          goto LABEL_35;
      }
LABEL_40:
      sub_B5D69C(ImagePageList, method);
    }
LABEL_35:
    this->fields.infoData = 0LL;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.infoData,
      0LL,
      (System_String_array **)v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  CampaignInfoDlg__Init(this, method);
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
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v52, v53, v54, v55, v56, v57);
    System_Action__Invoke(closeCallbackFunc, 0LL);
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
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  int32_t v14; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EB627 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, imgId, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_23819/*"{0:D4}"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_20053/*"info_"*/, v8, v9, v10);
    byte_42EB627 = 1;
  }
  v14 = imgId;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v12 = System_String__Format((System_String_o *)StringLiteral_23819/*"{0:D4}"*/, v11, 0LL);
  return System_String__Concat_44577788((System_String_o *)StringLiteral_20053/*"info_"*/, v12, 0LL);
}


System_String_o *__fastcall CampaignInfoDlg__GetCampaignInfoImagePath(
        CampaignInfoDlg_o *this,
        int32_t imgId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *CampaignInfoImageName; // x0

  if ( (byte_42EB626 & 1) == 0 )
  {
    this = (CampaignInfoDlg_o *)sub_B5D5C4(&StringLiteral_3549/*"CampaignInfo/"*/, imgId, (_DWORD)method, v3);
    byte_42EB626 = 1;
  }
  CampaignInfoImageName = CampaignInfoDlg__GetCampaignInfoImageName(this, imgId, method);
  return System_String__Concat_44577788((System_String_o *)StringLiteral_3549/*"CampaignInfo/"*/, CampaignInfoImageName, 0LL);
}


int32_t __fastcall CampaignInfoDlg__GetScrollHeightWithName(
        CampaignInfoDlg_o *this,
        System_String_o *imageName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_array *v5; // x0
  System_String_array *v6; // x1
  __int64 v8; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EB628 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)imageName, (_DWORD)method, v3);
    byte_42EB628 = 1;
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
  if ( v5->max_length <= 2 )
  {
LABEL_10:
    v8 = sub_B5D6C8(v5);
    sub_B5D668(v8, 0LL);
  }
  System_Int32__TryParse(v5->m_Items[2], &result, 0LL);
  return result;
}


System_String_o *__fastcall CampaignInfoDlg__GetTuorialImageName(
        CampaignInfoDlg_o *this,
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

  if ( (byte_42EB625 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, imgId, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_23819/*"{0:D4}"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_23131/*"tutorial_"*/, v8, v9, v10);
    byte_42EB625 = 1;
  }
  v14 = imgId;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v12 = System_String__Format((System_String_o *)StringLiteral_23819/*"{0:D4}"*/, v11, 0LL);
  return System_String__Concat_44577788((System_String_o *)StringLiteral_23131/*"tutorial_"*/, v12, 0LL);
}


System_String_o *__fastcall CampaignInfoDlg__GetTuorialImagePath(
        CampaignInfoDlg_o *this,
        int32_t imgId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *TuorialImageName; // x0

  if ( (byte_42EB624 & 1) == 0 )
  {
    this = (CampaignInfoDlg_o *)sub_B5D5C4(&StringLiteral_14731/*"Tutorial/"*/, imgId, (_DWORD)method, v3);
    byte_42EB624 = 1;
  }
  TuorialImageName = CampaignInfoDlg__GetTuorialImageName(this, imgId, method);
  return System_String__Concat_44577788((System_String_o *)StringLiteral_14731/*"Tutorial/"*/, TuorialImageName, 0LL);
}


void __fastcall CampaignInfoDlg__Init(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  this->fields.isButtonEnable = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall CampaignInfoDlg__LoadAlpha(
        CampaignInfoDlg_o *this,
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
  CampaignInfoDlg_c *v33; // x0
  System_String_o *alphaImgPath; // x20
  AssetLoader_LoadEndDataHandler_o *v35; // x21

  if ( (byte_42EB62E & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&CampaignInfoDlg_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_CampaignInfoDlg___c__DisplayClass45_0__LoadAlpha_b__0__, v12, v13, v14);
    sub_B5D5C4(&CampaignInfoDlg___c__DisplayClass45_0_TypeInfo, v15, v16, v17);
    byte_42EB62E = 1;
  }
  v18 = sub_B5D694(CampaignInfoDlg___c__DisplayClass45_0_TypeInfo);
  CampaignInfoDlg___c__DisplayClass45_0___ctor((CampaignInfoDlg___c__DisplayClass45_0_o *)v18, 0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  *(_QWORD *)(v18 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v18 + 24) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)callback, v27, v28, v29, v30, v31, v32);
  this->fields.alphaTexLoadRequested = 1;
  v33 = CampaignInfoDlg_TypeInfo;
  if ( (BYTE3(CampaignInfoDlg_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
    v33 = CampaignInfoDlg_TypeInfo;
  }
  alphaImgPath = v33->static_fields->alphaImgPath;
  v35 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v35,
    (Il2CppObject *)v18,
    Method_CampaignInfoDlg___c__DisplayClass45_0__LoadAlpha_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(alphaImgPath, v35, 1, 0LL);
}


void __fastcall CampaignInfoDlg__LoadBase(CampaignInfoDlg_o *this, System_Action_o *callback, const MethodInfo *method)
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
  __int64 v18; // x20
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
  const MethodInfo *v33; // x2
  CampaignInfoDlg_c *v34; // x0
  System_String_o *TuorialImagePath; // x19
  AssetLoader_LoadEndDataHandler_o *v36; // x21

  if ( (byte_42EB62D & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&CampaignInfoDlg_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_CampaignInfoDlg___c__DisplayClass44_0__LoadBase_b__0__, v12, v13, v14);
    sub_B5D5C4(&CampaignInfoDlg___c__DisplayClass44_0_TypeInfo, v15, v16, v17);
    byte_42EB62D = 1;
  }
  v18 = sub_B5D694(CampaignInfoDlg___c__DisplayClass44_0_TypeInfo);
  CampaignInfoDlg___c__DisplayClass44_0___ctor((CampaignInfoDlg___c__DisplayClass44_0_o *)v18, 0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  *(_QWORD *)(v18 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v18 + 24) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)callback, v27, v28, v29, v30, v31, v32);
  this->fields.baseTexLoadRequested = 1;
  v34 = CampaignInfoDlg_TypeInfo;
  if ( (BYTE3(CampaignInfoDlg_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
    v34 = CampaignInfoDlg_TypeInfo;
  }
  TuorialImagePath = CampaignInfoDlg__GetTuorialImagePath(this, v34->static_fields->baseImgNo, v33);
  v36 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v36,
    (Il2CppObject *)v18,
    Method_CampaignInfoDlg___c__DisplayClass44_0__LoadBase_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(TuorialImagePath, v36, 1, 0LL);
}


void __fastcall CampaignInfoDlg__LoadImages(
        CampaignInfoDlg_o *this,
        CampaignInformation_array *images,
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

  if ( (byte_42EB623 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)images, (_DWORD)method, v3);
    sub_B5D5C4(&Method_CampaignInfoDlg__LoadImages_b__34_0__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15, v16);
    byte_42EB623 = 1;
  }
  this->fields._loadIndex = 0;
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
  System_Action___ctor(v26, (Il2CppObject *)this, Method_CampaignInfoDlg__LoadImages_b__34_0__, 0LL);
  CampaignInfoDlg__LoadAlpha(this, v26, v27);
}


void __fastcall CampaignInfoDlg__LoadStart(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  CampaignInfoDlg_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct CampaignInformation_array *infoData; // x8
  __int64 loadIndex; // x9
  CampaignInformation_o *v13; // x8
  System_String_o *CampaignInfoImagePath; // x20
  AssetLoader_LoadEndDataHandler_o *v15; // x21
  __int64 v16; // x0

  v4 = this;
  if ( (byte_42EB629 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_CampaignInfoDlg__LoadStart_b__40_0__, v5, v6, v7);
    this = (CampaignInfoDlg_o *)sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v8, v9, v10);
    byte_42EB629 = 1;
  }
  infoData = v4->fields.infoData;
  if ( !infoData )
    goto LABEL_15;
  loadIndex = v4->fields._loadIndex;
  if ( (unsigned int)loadIndex >= infoData->max_length )
  {
    v16 = sub_B5D6C8(this);
    sub_B5D668(v16, 0LL);
  }
  v13 = infoData->m_Items[loadIndex];
  if ( !v13 )
LABEL_15:
    sub_B5D69C(this, method);
  CampaignInfoImagePath = CampaignInfoDlg__GetCampaignInfoImagePath(v4, v13->fields.imageId, v2);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(CampaignInfoImagePath, 0LL) )
  {
    v15 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v15, (Il2CppObject *)v4, Method_CampaignInfoDlg__LoadStart_b__40_0__, 0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(CampaignInfoImagePath, v15, 1, 0LL);
  }
}


void __fastcall CampaignInfoDlg__OnCancelButton(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  CampaignInfoDlg_onButtonDelgate_o *btnCallbackFunc; // x0

  if ( (byte_42EB635 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB635 = 1;
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
      sub_B5D69C(0LL, v5);
    CampaignInfoDlg_onButtonDelgate__Invoke(btnCallbackFunc, 0, 0LL);
  }
}


void __fastcall CampaignInfoDlg__OnClickClose(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  CampaignInfoDlg_onButtonDelgate_o *btnCallbackFunc; // x0

  if ( (byte_42EB636 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB636 = 1;
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
      sub_B5D69C(0LL, v5);
    CampaignInfoDlg_onButtonDelgate__Invoke(btnCallbackFunc, 0, 0LL);
  }
}


void __fastcall CampaignInfoDlg__OnDecideButton(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  CampaignInfoDlg_onButtonDelgate_o *btnCallbackFunc; // x0

  if ( (byte_42EB634 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB634 = 1;
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
      sub_B5D69C(0LL, v5);
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
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct CampaignInformation_array *script; // x1
  const MethodInfo *v22; // x2
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  CampaignInfoDlg_c *v29; // x0
  CampaignInformation_array *v30; // x1
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x2

  if ( (byte_42EB622 & 1) == 0 )
  {
    sub_B5D5C4(&CampaignInfoDlg_TypeInfo, (_DWORD)cInfo, (_DWORD)cancelBtnMsg, decideBtnMsg);
    byte_42EB622 = 1;
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.infoData,
    (System_Int32_array **)script,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.isButtonEnable = 0;
  this->fields.isNotExistImg = 0;
  CampaignInfoDlg__SetDecideActive(this, activeDecide, v22);
  DecideBtnLb = this->fields.DecideBtnLb;
  if ( !DecideBtnLb )
    goto LABEL_16;
  UILabel__set_text(DecideBtnLb, decideBtnMsg, 0LL);
  DecideBtnLb = this->fields.CancelBtnLb;
  if ( !DecideBtnLb )
    goto LABEL_16;
  UILabel__set_text(DecideBtnLb, cancelBtnMsg, 0LL);
  this->fields.btnCallbackFunc = onClickButton;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.btnCallbackFunc,
    (System_Int32_array **)onClickButton,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = CampaignInfoDlg_TypeInfo;
  if ( (BYTE3(CampaignInfoDlg_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
    v29 = CampaignInfoDlg_TypeInfo;
  }
  this->fields.setPosX = (float)v29->static_fields->basePosX;
  BaseDialog__SetMask((BaseDialog_o *)this, 0, 0LL);
  CampaignInfoDlg__LoadImages(this, v30, v31);
  DecideBtnLb = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !DecideBtnLb )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)DecideBtnLb, 1, 0LL);
  CampaignInfoDlg__UpdateButtons(this, 1, v32);
  if ( this->fields.isNotExistImg )
  {
    DecideBtnLb = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( DecideBtnLb )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)DecideBtnLb, 0, 0LL);
      return;
    }
LABEL_16:
    sub_B5D69C(DecideBtnLb, v14);
  }
}


void __fastcall CampaignInfoDlg__OpenWindow(CampaignInfoDlg_o *this, const MethodInfo *method)
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

  if ( (byte_42EB62F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CampaignInfoDlg_EndOpen__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    byte_42EB62F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v12);
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_CampaignInfoDlg_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v13, 1, 0LL);
}


void __fastcall CampaignInfoDlg__SetBaseImage(
        CampaignInfoDlg_o *this,
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
  UnityEngine_Component_o *BaseImg; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  int32_t layer; // w22
  UnityEngine_Shader_o *v24; // x22
  UnityEngine_Material_o *v25; // x21
  AssetData_o *alphaTexAssetData; // x20
  UnityEngine_Texture_o *Object_WarBoardWaitTimeSetting; // x0

  if ( (byte_42EB62A & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_Texture2D____68807528, (_DWORD)tex, (_DWORD)method, v3);
    sub_B5D5C4(&CampaignInfoDlg_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Material_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&NGUITools_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_4609/*"Custom/SpriteWithMask"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_16207/*"_MaskTex"*/, v18, v19, v20);
    byte_42EB62A = 1;
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
  v24 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4609/*"Custom/SpriteWithMask"*/, 0LL);
  v25 = (UnityEngine_Material_o *)sub_B5D694(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v25, v24, 0LL);
  BaseImg = (UnityEngine_Component_o *)this->fields.BaseImg;
  if ( !BaseImg )
    goto LABEL_17;
  BaseImg = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, UnityEngine_Material_o *, Il2CppMethodPointer))BaseImg->klass[1].vtable._2_GetHashCode.method)(
                                         BaseImg,
                                         v25,
                                         BaseImg->klass[1].vtable._3_ToString.methodPtr);
  if ( !v25 )
    goto LABEL_17;
  UnityEngine_Material__set_mainTexture(v25, (UnityEngine_Texture_o *)tex, 0LL);
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
                                                                    (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_Texture2D____68807528),
        UnityEngine_Material__SetTexture(
          v25,
          (System_String_o *)StringLiteral_16207/*"_MaskTex"*/,
          Object_WarBoardWaitTimeSetting,
          0LL),
        (BaseImg = (UnityEngine_Component_o *)this->fields.BaseImg) == 0LL)
    || (BaseImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(BaseImg, 0LL)) == 0LL )
  {
LABEL_17:
    sub_B5D69C(BaseImg, tex);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)BaseImg, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CampaignInfoDlg__SetDecideActive(CampaignInfoDlg_o *this, bool onOff, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_GameObject_o *DecideButton; // x0
  UIWidget_o *Component_srcLineSprite; // x20
  int v11; // s0

  if ( (byte_42EB637 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, onOff, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v6, v7, v8);
    byte_42EB637 = 1;
  }
  DecideButton = this->fields.DecideButton;
  if ( !DecideButton
    || (DecideButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     DecideButton,
                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)DecideButton, onOff, 0LL),
        (DecideButton = this->fields.DecideButton) == 0LL) )
  {
LABEL_11:
    sub_B5D69C(DecideButton, onOff);
  }
  Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            DecideButton,
                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( onOff )
  {
    *(UnityEngine_Color_o *)&v11 = UnityEngine_Color__get_white(0LL);
    if ( !Component_srcLineSprite )
      goto LABEL_11;
  }
  else
  {
    *(UnityEngine_Color_o *)&v11 = UnityEngine_Color__get_gray(0LL);
    if ( !Component_srcLineSprite )
      goto LABEL_11;
  }
  UIWidget__set_color(Component_srcLineSprite, *(UnityEngine_Color_o *)&v11, 0LL);
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
    sub_B5D69C(TouchMask, isDisp);
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
    sub_B5D69C(CloseButton, isDisp);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_GameObject_o *ImageRoot; // x20
  CampaignInfoDlg_c *v12; // x0
  UITweener_o *v13; // x20
  EventDelegate_Callback_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_42EB630 & 1) == 0 )
  {
    sub_B5D5C4(&EventDelegate_Callback_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CampaignInfoDlg__UpdatePage_b__47_0__, v5, v6, v7);
    sub_B5D5C4(&CampaignInfoDlg_TypeInfo, v8, v9, v10);
    byte_42EB630 = 1;
  }
  this->fields.IsFading = 1;
  ImageRoot = this->fields.ImageRoot;
  v12 = CampaignInfoDlg_TypeInfo;
  if ( (BYTE3(CampaignInfoDlg_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
    v12 = CampaignInfoDlg_TypeInfo;
  }
  v13 = (UITweener_o *)TweenAlpha__Begin(ImageRoot, v12->static_fields->FADE_TIME, 1.0, 0LL);
  v14 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v14, (Il2CppObject *)this, Method_CampaignInfoDlg__UpdatePage_b__47_0__, 0LL);
  if ( !v13 )
    sub_B5D69C(v15, v16);
  UITweener__SetOnFinished(v13, v14, 0LL);
}


void __fastcall CampaignInfoDlg___LoadImages_b__34_0(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_42EB63A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CampaignInfoDlg_LoadStart__, v5, v6, v7);
    byte_42EB63A = 1;
  }
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_CampaignInfoDlg_LoadStart__, 0LL);
  CampaignInfoDlg__LoadBase(this, v8, v9);
}


void __fastcall CampaignInfoDlg___LoadStart_b__40_0(
        CampaignInfoDlg_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  Il2CppObject *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Action_o *v9; // x21
  const MethodInfo *v10; // x3

  v5 = (Il2CppObject *)this;
  if ( (byte_42EB63B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    this = (CampaignInfoDlg_o *)sub_B5D5C4(&Method_CampaignInfoDlg__LoadStart_b__40_1__, v6, v7, v8);
    byte_42EB63B = 1;
  }
  if ( !data )
    sub_B5D69C(this, data);
  AssetData__GetObjectNameList(data, 0LL);
  v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v9, v5, Method_CampaignInfoDlg__LoadStart_b__40_1__, 0LL);
  CampaignInfoDlg__AddScrollImg((CampaignInfoDlg_o *)v5, data, v9, v10);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *ScrView; // x20
  __int64 v6; // x1
  UIScrollView_o *v7; // x0

  if ( (byte_42EB631 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB631 = 1;
  }
  ScrView = (UnityEngine_Object_o *)this->fields.ScrView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(ScrView, 0LL, 0LL) )
  {
    v7 = this->fields.ScrView;
    if ( !v7 )
      sub_B5D69C(0LL, v6);
    UIScrollView__ResetPosition(v7, 0LL);
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
  System_String_o *_4__this; // x0
  UnityEngine_Shader_o *v19; // x22
  UnityEngine_Material_o *v20; // x21
  struct CampaignInfoDlg_o *v21; // x8
  CampaignInfoDlg_o *v22; // x22
  struct CampaignInfoDlg_o *v23; // x8
  UnityEngine_Texture_o *Object_WarBoardWaitTimeSetting; // x0

  if ( (byte_42E5E3D & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_Texture2D____68807528, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&CampaignInfoDlg_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Material_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_4609/*"Custom/SpriteWithMask"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_16207/*"_MaskTex"*/, v15, v16, v17);
    byte_42E5E3D = 1;
  }
  _4__this = (System_String_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  _4__this[10].klass = (System_String_c *)data;
  sub_B5D560(&_4__this[10]);
  v19 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4609/*"Custom/SpriteWithMask"*/, 0LL);
  v20 = (UnityEngine_Material_o *)sub_B5D694(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v20, v19, 0LL);
  v21 = this->fields.__4__this;
  if ( !v21 )
    goto LABEL_15;
  _4__this = (System_String_o *)v21->fields.BaseImg;
  if ( !_4__this )
    goto LABEL_15;
  ((void (__fastcall *)(System_String_o *, UnityEngine_Material_o *, Il2CppMethodPointer))_4__this->klass->vtable._25_System_Collections_Generic_IEnumerable_System_Char__GetEnumerator.method)(
    _4__this,
    v20,
    _4__this->klass->vtable._26_Equals.methodPtr);
  v22 = this->fields.__4__this;
  _4__this = (System_String_o *)CampaignInfoDlg_TypeInfo;
  if ( (BYTE3(CampaignInfoDlg_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
  }
  if ( !v22
    || (_4__this = CampaignInfoDlg__GetTuorialImageName(v22, CampaignInfoDlg_TypeInfo->static_fields->baseImgNo, 0LL),
        !data)
    || (_4__this = (System_String_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                        data,
                                        _4__this,
                                        (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_Texture2D____68807528),
        !v20)
    || (UnityEngine_Material__set_mainTexture(v20, (UnityEngine_Texture_o *)_4__this, 0LL),
        (v23 = this->fields.__4__this) == 0LL)
    || (_4__this = (System_String_o *)v23->fields.alphaTexAssetData) == 0LL )
  {
LABEL_15:
    sub_B5D69C(_4__this, data);
  }
  Object_WarBoardWaitTimeSetting = (UnityEngine_Texture_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                              (AssetData_o *)_4__this,
                                                              CampaignInfoDlg_TypeInfo->static_fields->alphaImgName,
                                                              (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_Texture2D____68807528);
  UnityEngine_Material__SetTexture(v20, (System_String_o *)StringLiteral_16207/*"_MaskTex"*/, Object_WarBoardWaitTimeSetting, 0LL);
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
    sub_B5D69C(0LL, data);
  _4__this->fields.alphaTexAssetData = data;
  sub_B5D560(&_4__this->fields.alphaTexAssetData);
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
  sub_B5D560(p_method);
}


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
  if ( (byte_42E5E3E & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, decide, (_DWORD)callback, object);
    byte_42E5E3E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall CampaignInfoDlg_onButtonDelgate__EndInvoke(
        CampaignInfoDlg_onButtonDelgate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CampaignInfoDlg_onButtonDelgate__Invoke(
        CampaignInfoDlg_onButtonDelgate_o *this,
        bool decide,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  CampaignInfoDlg_onButtonDelgate_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x3
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
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  CampaignInfoDlg_onButtonDelgate_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (CampaignInfoDlg_onButtonDelgate_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, decide, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(decide, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, decide, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
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
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
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