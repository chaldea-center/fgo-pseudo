void __fastcall CampaignInfoDlg___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  struct CampaignInfoDlg_StaticFields *static_fields; // x0
  System_Int32_array **v8; // x1
  struct CampaignInfoDlg_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  CampaignInfoDlg_c *v17; // x8

  if ( (byte_42B1672 & 1) == 0 )
  {
    sub_B52984(&CampaignInfoDlg_TypeInfo);
    sub_B52984(&StringLiteral_14675/*"Tutorial/tutorial_alpha"*/);
    sub_B52984(&StringLiteral_23018/*"tutorial_alpha"*/);
    byte_42B1672 = 1;
  }
  CampaignInfoDlg_TypeInfo->static_fields->FADE_TIME = 0.3;
  static_fields = CampaignInfoDlg_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_14675/*"Tutorial/tutorial_alpha"*/;
  static_fields->alphaImgPath = (struct System_String_o *)StringLiteral_14675/*"Tutorial/tutorial_alpha"*/;
  sub_B52920((BattleServantConfConponent_o *)&static_fields->alphaImgPath, v8, v1, v2, v3, v4, v5, v6);
  v9 = CampaignInfoDlg_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_23018/*"tutorial_alpha"*/;
  v9->alphaImgName = (struct System_String_o *)StringLiteral_23018/*"tutorial_alpha"*/;
  sub_B52920((BattleServantConfConponent_o *)&v9->alphaImgName, v10, v11, v12, v13, v14, v15, v16);
  v17 = CampaignInfoDlg_TypeInfo;
  CampaignInfoDlg_TypeInfo->static_fields->baseImgNo = 6;
  v17->static_fields->basePosX = 210;
}


void __fastcall CampaignInfoDlg___ctor(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  if ( (byte_42B1671 & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    byte_42B1671 = 1;
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
  int basePanel; // w8
  CampaignInfoDlg_o *v8; // x25
  unsigned int v9; // w27
  int32_t v10; // w20
  UnityEngine_Texture2D_o *v11; // x24
  CampaignInfoDlg_c **v12; // x21
  System_String_o **v13; // x21
  CampaignInfoDlg_o *v14; // t1
  char v15; // w26
  const MethodInfo *v16; // x2
  UnityEngine_Texture2D_o *v17; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *ImagePrefab; // x23
  UnityEngine_Object_o *v19; // x23
  System_String_o *v20; // x0
  int32_t layer; // w25
  const MethodInfo *v22; // x5
  struct CampaignInformation_array *infoData; // x8
  __int64 loadIndex; // x9
  UnityEngine_Transform_o *v25; // x22
  UnityEngine_Transform_o *transform; // x22
  int v27; // s0
  __int64 v30; // x0
  CampaignInfoDlg_o *v31; // [xsp+8h] [xbp-68h]
  System_Action_o *action; // [xsp+10h] [xbp-60h]
  UnityEngine_Texture2D_o *tex; // [xsp+18h] [xbp-58h]
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_42B1664 & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_Texture2D____68579976);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_CampaignInfoItem___);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B52984(&NGUITools_TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_16425/*"alpha"*/);
    this = (CampaignInfoDlg_o *)sub_B52984(&StringLiteral_7545/*"Image"*/);
    byte_42B1664 = 1;
  }
  if ( !data )
    goto LABEL_34;
  this = (CampaignInfoDlg_o *)AssetData__GetObjectNameList(data, 0LL);
  if ( !this )
    goto LABEL_34;
  v31 = v6;
  action = callback;
  basePanel = (int)this->fields.basePanel;
  v8 = this;
  if ( basePanel >= 1 )
  {
    tex = 0LL;
    v9 = 0;
    v10 = 0;
    v11 = 0LL;
    while ( v9 < basePanel )
    {
      v12 = &v8->klass + (int)v9;
      v14 = (CampaignInfoDlg_o *)v12[4];
      v13 = (System_String_o **)(v12 + 4);
      this = v14;
      if ( !v14 )
        goto LABEL_34;
      this = (CampaignInfoDlg_o *)System_String__Contains(
                                    (System_String_o *)this,
                                    (System_String_o *)StringLiteral_16425/*"alpha"*/,
                                    0LL);
      if ( v9 >= LODWORD(v8->fields.basePanel) )
        break;
      v15 = (char)this;
      this = (CampaignInfoDlg_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                    data,
                                    *v13,
                                    (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_Texture2D____68579976);
      v17 = (UnityEngine_Texture2D_o *)this;
      if ( (v15 & 1) == 0 )
      {
        if ( v9 >= LODWORD(v8->fields.basePanel) )
          break;
        tex = (UnityEngine_Texture2D_o *)this;
        this = (CampaignInfoDlg_o *)CampaignInfoDlg__GetScrollHeightWithName(this, *v13, v16);
        v10 = (int)this;
        v17 = v11;
      }
      basePanel = (int)v8->fields.basePanel;
      ++v9;
      v11 = v17;
      if ( (int)v9 >= basePanel )
        goto LABEL_16;
    }
LABEL_33:
    v30 = sub_B52A88(this);
    sub_B52A28(v30, 0LL);
  }
  tex = 0LL;
  v17 = 0LL;
  v10 = 0;
LABEL_16:
  ImagePrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)v31->fields.ImagePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v19 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                  ImagePrefab,
                                  (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v20 = System_Int32__ToString((int)v31 + 216, 0LL);
  this = (CampaignInfoDlg_o *)System_String__Concat_44568316((System_String_o *)StringLiteral_7545/*"Image"*/, v20, 0LL);
  if ( !v19 )
    goto LABEL_34;
  UnityEngine_Object__set_name(v19, (System_String_o *)this, 0LL);
  this = (CampaignInfoDlg_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v31, 0LL);
  if ( !this )
    goto LABEL_34;
  layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)this, 0LL);
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__SetLayer((UnityEngine_GameObject_o *)v19, layer, 0LL);
  this = (CampaignInfoDlg_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)v19,
                                (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_CampaignInfoItem___);
  infoData = v31->fields.infoData;
  if ( !infoData )
    goto LABEL_34;
  loadIndex = v31->fields._loadIndex;
  if ( (unsigned int)loadIndex >= infoData->max_length )
    goto LABEL_33;
  if ( !this )
    goto LABEL_34;
  CampaignInfoItem__SetCampaignInfo((CampaignInfoItem_o *)this, infoData->m_Items[loadIndex], tex, v17, v10, v22);
  this = (CampaignInfoDlg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v19, 0LL);
  if ( !v31->fields.ImageGrid )
    goto LABEL_34;
  v25 = (UnityEngine_Transform_o *)this;
  this = (CampaignInfoDlg_o *)UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)v31->fields.ImageGrid,
                                0LL);
  if ( !v25 )
    goto LABEL_34;
  UnityEngine_Transform__set_parent(v25, (UnityEngine_Transform_o *)this, 0LL);
  this = (CampaignInfoDlg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v19, 0LL);
  if ( !this )
    goto LABEL_34;
  v34.fields.y = v31->fields.setPosX;
  v34.fields.x = 0.0;
  v34.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v34, 0LL);
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v19, 0LL);
  *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Vector3__get_one(0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v27, 0LL),
        this = (CampaignInfoDlg_o *)v31->fields.ImagePageList,
        v31->fields.setPosX = v31->fields.setPosX - (float)v10,
        !this) )
  {
LABEL_34:
    sub_B52A5C(this, data);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GameObject__Add__);
  ActionExtensions__Call(action, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CampaignInfoDlg__AfterLoad(CampaignInfoDlg_o *this, int32_t addCount, const MethodInfo *method)
{
  CampaignInfoDlg_o *v4; // x19
  struct CampaignInformation_array *infoData; // x9
  int v6; // w8

  v4 = this;
  if ( (byte_42B1665 & 1) == 0 )
  {
    this = (CampaignInfoDlg_o *)sub_B52984(&StringLiteral_10168/*"OpenWindow"*/);
    byte_42B1665 = 1;
  }
  infoData = v4->fields.infoData;
  v6 = v4->fields._loadIndex + addCount;
  v4->fields._loadIndex = v6;
  if ( !infoData )
    sub_B52A5C(this, *(_QWORD *)&addCount);
  if ( v6 >= (signed int)infoData->max_length )
  {
    CampaignInfoDlg__UpdatePage(v4, *(const MethodInfo **)&addCount);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)v4,
      (System_String_o *)StringLiteral_10168/*"OpenWindow"*/,
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

  CampaignInfoDlg__Close_27628712(this, 0LL, v2);
}


void __fastcall CampaignInfoDlg__Close_27628712(
        CampaignInfoDlg_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_42B166B & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_CampaignInfoDlg_EndClose__);
    byte_42B166B = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v10 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_CampaignInfoDlg_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall CampaignInfoDlg__EndClose(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ImagePageList; // x0
  Il2CppObject *current; // x20
  MethodInfo *v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  CampaignInfoDlg_c *v11; // x0
  System_String_o *alphaImgPath; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  CampaignInfoDlg_c *v19; // x0
  System_String_o *TuorialImagePath; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct CampaignInformation_array *infoData; // x22
  int max_length; // w8
  __int64 v29; // x23
  CampaignInformation_o *v30; // x8
  System_String_o *CampaignInfoImagePath; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Action_o *closeCallbackFunc; // x20
  __int64 v39; // x0
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42B166C & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&CampaignInfoDlg_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B166C = 1;
  }
  memset(&v41, 0, sizeof(v41));
  ImagePageList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.ImagePageList;
  if ( !ImagePageList )
    goto LABEL_40;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v40,
    ImagePageList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v41 = v40;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v41,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v41.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v41,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  if ( this->fields.alphaTexLoadRequested )
  {
    v11 = CampaignInfoDlg_TypeInfo;
    if ( (BYTE3(CampaignInfoDlg_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
      v11 = CampaignInfoDlg_TypeInfo;
    }
    alphaImgPath = v11->static_fields->alphaImgPath;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(alphaImgPath, 0LL);
    this->fields.alphaTexAssetData = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.alphaTexAssetData, 0LL, v13, v14, v15, v16, v17, v18);
    this->fields.alphaTexLoadRequested = 0;
  }
  if ( this->fields.baseTexLoadRequested )
  {
    v19 = CampaignInfoDlg_TypeInfo;
    if ( (BYTE3(CampaignInfoDlg_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
      v19 = CampaignInfoDlg_TypeInfo;
    }
    TuorialImagePath = CampaignInfoDlg__GetTuorialImagePath(this, v19->static_fields->baseImgNo, v5);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(TuorialImagePath, 0LL);
    this->fields.baseTexAssetData = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.baseTexAssetData, 0LL, v21, v22, v23, v24, v25, v26);
    this->fields.baseTexLoadRequested = 0;
  }
  infoData = this->fields.infoData;
  if ( infoData )
  {
    max_length = infoData->max_length;
    if ( max_length >= 1 )
    {
      v29 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v29 >= max_length )
        {
          v39 = sub_B52A88(ImagePageList);
          sub_B52A28(v39, 0LL);
        }
        v30 = infoData->m_Items[v29];
        if ( !v30 )
          break;
        CampaignInfoImagePath = CampaignInfoDlg__GetCampaignInfoImagePath(this, v30->fields.imageId, v5);
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        AssetManager__releaseAssetStorage(CampaignInfoImagePath, 0LL);
        max_length = infoData->max_length;
        if ( (int)++v29 >= max_length )
          goto LABEL_35;
      }
LABEL_40:
      sub_B52A5C(ImagePageList, method);
    }
LABEL_35:
    this->fields.infoData = 0LL;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.infoData,
      0LL,
      (System_String_array **)v5,
      v6,
      v7,
      v8,
      v9,
      v10);
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
    sub_B52920((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v32, v33, v34, v35, v36, v37);
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
  Il2CppObject *v4; // x0
  System_String_o *v5; // x0
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42B1660 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&StringLiteral_23701/*"{0:D4}"*/);
    sub_B52984(&StringLiteral_19951/*"info_"*/);
    byte_42B1660 = 1;
  }
  v7 = imgId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v7);
  v5 = System_String__Format((System_String_o *)StringLiteral_23701/*"{0:D4}"*/, v4, 0LL);
  return System_String__Concat_44568316((System_String_o *)StringLiteral_19951/*"info_"*/, v5, 0LL);
}


System_String_o *__fastcall CampaignInfoDlg__GetCampaignInfoImagePath(
        CampaignInfoDlg_o *this,
        int32_t imgId,
        const MethodInfo *method)
{
  System_String_o *CampaignInfoImageName; // x0

  if ( (byte_42B165F & 1) == 0 )
  {
    this = (CampaignInfoDlg_o *)sub_B52984(&StringLiteral_3516/*"CampaignInfo/"*/);
    byte_42B165F = 1;
  }
  CampaignInfoImageName = CampaignInfoDlg__GetCampaignInfoImageName(this, imgId, method);
  return System_String__Concat_44568316((System_String_o *)StringLiteral_3516/*"CampaignInfo/"*/, CampaignInfoImageName, 0LL);
}


int32_t __fastcall CampaignInfoDlg__GetScrollHeightWithName(
        CampaignInfoDlg_o *this,
        System_String_o *imageName,
        const MethodInfo *method)
{
  System_String_array *v4; // x0
  System_String_array *v5; // x1
  __int64 v7; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42B1661 & 1) == 0 )
  {
    sub_B52984(&char___TypeInfo);
    byte_42B1661 = 1;
  }
  result = 0;
  v4 = (System_String_array *)sub_B5299C(char___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_9;
  v5 = v4;
  if ( !v4->max_length )
    goto LABEL_10;
  LOWORD(v4->m_Items[0]) = 95;
  if ( !imageName || (v4 = System_String__Split(imageName, (System_Char_array *)v4, 0LL), result = 0, !v4) )
LABEL_9:
    sub_B52A5C(v4, v5);
  if ( v4->max_length <= 2 )
  {
LABEL_10:
    v7 = sub_B52A88(v4);
    sub_B52A28(v7, 0LL);
  }
  System_Int32__TryParse(v4->m_Items[2], &result, 0LL);
  return result;
}


System_String_o *__fastcall CampaignInfoDlg__GetTuorialImageName(
        CampaignInfoDlg_o *this,
        int32_t imgId,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x0
  System_String_o *v5; // x0
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42B165E & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&StringLiteral_23701/*"{0:D4}"*/);
    sub_B52984(&StringLiteral_23016/*"tutorial_"*/);
    byte_42B165E = 1;
  }
  v7 = imgId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v7);
  v5 = System_String__Format((System_String_o *)StringLiteral_23701/*"{0:D4}"*/, v4, 0LL);
  return System_String__Concat_44568316((System_String_o *)StringLiteral_23016/*"tutorial_"*/, v5, 0LL);
}


System_String_o *__fastcall CampaignInfoDlg__GetTuorialImagePath(
        CampaignInfoDlg_o *this,
        int32_t imgId,
        const MethodInfo *method)
{
  System_String_o *TuorialImageName; // x0

  if ( (byte_42B165D & 1) == 0 )
  {
    this = (CampaignInfoDlg_o *)sub_B52984(&StringLiteral_14672/*"Tutorial/"*/);
    byte_42B165D = 1;
  }
  TuorialImageName = CampaignInfoDlg__GetTuorialImageName(this, imgId, method);
  return System_String__Concat_44568316((System_String_o *)StringLiteral_14672/*"Tutorial/"*/, TuorialImageName, 0LL);
}


void __fastcall CampaignInfoDlg__Init(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  this->fields.isButtonEnable = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B52A5C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall CampaignInfoDlg__LoadAlpha(
        CampaignInfoDlg_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  CampaignInfoDlg_c *v20; // x0
  System_String_o *alphaImgPath; // x20
  AssetLoader_LoadEndDataHandler_o *v22; // x21

  if ( (byte_42B1667 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&CampaignInfoDlg_TypeInfo);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B52984(&Method_CampaignInfoDlg___c__DisplayClass45_0__LoadAlpha_b__0__);
    sub_B52984(&CampaignInfoDlg___c__DisplayClass45_0_TypeInfo);
    byte_42B1667 = 1;
  }
  v5 = sub_B52A54(CampaignInfoDlg___c__DisplayClass45_0_TypeInfo);
  CampaignInfoDlg___c__DisplayClass45_0___ctor((CampaignInfoDlg___c__DisplayClass45_0_o *)v5, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)callback, v14, v15, v16, v17, v18, v19);
  this->fields.alphaTexLoadRequested = 1;
  v20 = CampaignInfoDlg_TypeInfo;
  if ( (BYTE3(CampaignInfoDlg_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
    v20 = CampaignInfoDlg_TypeInfo;
  }
  alphaImgPath = v20->static_fields->alphaImgPath;
  v22 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v22,
    (Il2CppObject *)v5,
    Method_CampaignInfoDlg___c__DisplayClass45_0__LoadAlpha_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(alphaImgPath, v22, 1, 0LL);
}


void __fastcall CampaignInfoDlg__LoadBase(CampaignInfoDlg_o *this, System_Action_o *callback, const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x2
  CampaignInfoDlg_c *v21; // x0
  System_String_o *TuorialImagePath; // x19
  AssetLoader_LoadEndDataHandler_o *v23; // x21

  if ( (byte_42B1666 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&CampaignInfoDlg_TypeInfo);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B52984(&Method_CampaignInfoDlg___c__DisplayClass44_0__LoadBase_b__0__);
    sub_B52984(&CampaignInfoDlg___c__DisplayClass44_0_TypeInfo);
    byte_42B1666 = 1;
  }
  v5 = sub_B52A54(CampaignInfoDlg___c__DisplayClass44_0_TypeInfo);
  CampaignInfoDlg___c__DisplayClass44_0___ctor((CampaignInfoDlg___c__DisplayClass44_0_o *)v5, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)callback, v14, v15, v16, v17, v18, v19);
  this->fields.baseTexLoadRequested = 1;
  v21 = CampaignInfoDlg_TypeInfo;
  if ( (BYTE3(CampaignInfoDlg_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
    v21 = CampaignInfoDlg_TypeInfo;
  }
  TuorialImagePath = CampaignInfoDlg__GetTuorialImagePath(this, v21->static_fields->baseImgNo, v20);
  v23 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v23,
    (Il2CppObject *)v5,
    Method_CampaignInfoDlg___c__DisplayClass44_0__LoadBase_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(TuorialImagePath, v23, 1, 0LL);
}


void __fastcall CampaignInfoDlg__LoadImages(
        CampaignInfoDlg_o *this,
        CampaignInformation_array *images,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  CommonUI_o *Instance; // x0
  __int64 v12; // x1
  System_Action_o *v13; // x20
  const MethodInfo *v14; // x2

  if ( (byte_42B165C & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_CampaignInfoDlg__LoadImages_b__34_0__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B165C = 1;
  }
  this->fields._loadIndex = 0;
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.ImagePageList = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.ImagePageList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v12);
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v13 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_CampaignInfoDlg__LoadImages_b__34_0__, 0LL);
  CampaignInfoDlg__LoadAlpha(this, v13, v14);
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
  __int64 v9; // x0

  v3 = this;
  if ( (byte_42B1662 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&Method_CampaignInfoDlg__LoadStart_b__40_0__);
    this = (CampaignInfoDlg_o *)sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_42B1662 = 1;
  }
  infoData = v3->fields.infoData;
  if ( !infoData )
    goto LABEL_15;
  loadIndex = v3->fields._loadIndex;
  if ( (unsigned int)loadIndex >= infoData->max_length )
  {
    v9 = sub_B52A88(this);
    sub_B52A28(v9, 0LL);
  }
  v6 = infoData->m_Items[loadIndex];
  if ( !v6 )
LABEL_15:
    sub_B52A5C(this, method);
  CampaignInfoImagePath = CampaignInfoDlg__GetCampaignInfoImagePath(v3, v6->fields.imageId, v2);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(CampaignInfoImagePath, 0LL) )
  {
    v8 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v8, (Il2CppObject *)v3, Method_CampaignInfoDlg__LoadStart_b__40_0__, 0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(CampaignInfoImagePath, v8, 1, 0LL);
  }
}


void __fastcall CampaignInfoDlg__OnCancelButton(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CampaignInfoDlg_onButtonDelgate_o *btnCallbackFunc; // x0

  if ( (byte_42B166E & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B166E = 1;
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
      sub_B52A5C(0LL, v3);
    CampaignInfoDlg_onButtonDelgate__Invoke(btnCallbackFunc, 0, 0LL);
  }
}


void __fastcall CampaignInfoDlg__OnClickClose(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CampaignInfoDlg_onButtonDelgate_o *btnCallbackFunc; // x0

  if ( (byte_42B166F & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B166F = 1;
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
      sub_B52A5C(0LL, v3);
    CampaignInfoDlg_onButtonDelgate__Invoke(btnCallbackFunc, 0, 0LL);
  }
}


void __fastcall CampaignInfoDlg__OnDecideButton(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CampaignInfoDlg_onButtonDelgate_o *btnCallbackFunc; // x0

  if ( (byte_42B166D & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B166D = 1;
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
      sub_B52A5C(0LL, v3);
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

  if ( (byte_42B165B & 1) == 0 )
  {
    sub_B52984(&CampaignInfoDlg_TypeInfo);
    byte_42B165B = 1;
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
  sub_B52920(
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
  sub_B52920(
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
    sub_B52A5C(DecideBtnLb, v14);
  }
}


void __fastcall CampaignInfoDlg__OpenWindow(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_42B1668 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_CampaignInfoDlg_EndOpen__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B1668 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  v5 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_CampaignInfoDlg_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v5, 1, 0LL);
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
  UnityEngine_Texture_o *Object_WarBoardWaitTimeSetting; // x0

  if ( (byte_42B1663 & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_Texture2D____68579976);
    sub_B52984(&CampaignInfoDlg_TypeInfo);
    sub_B52984(&UnityEngine_Material_TypeInfo);
    sub_B52984(&NGUITools_TypeInfo);
    sub_B52984(&StringLiteral_4576/*"Custom/SpriteWithMask"*/);
    sub_B52984(&StringLiteral_16122/*"_MaskTex"*/);
    byte_42B1663 = 1;
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
  v8 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4576/*"Custom/SpriteWithMask"*/, 0LL);
  v9 = (UnityEngine_Material_o *)sub_B52A54(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v9, v8, 0LL);
  BaseImg = (UnityEngine_Component_o *)this->fields.BaseImg;
  if ( !BaseImg )
    goto LABEL_17;
  BaseImg = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, UnityEngine_Material_o *, Il2CppMethodPointer))BaseImg->klass[1].vtable._2_GetHashCode.method)(
                                         BaseImg,
                                         v9,
                                         BaseImg->klass[1].vtable._3_ToString.methodPtr);
  if ( !v9 )
    goto LABEL_17;
  UnityEngine_Material__set_mainTexture(v9, (UnityEngine_Texture_o *)tex, 0LL);
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
                                                                    (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_Texture2D____68579976),
        UnityEngine_Material__SetTexture(
          v9,
          (System_String_o *)StringLiteral_16122/*"_MaskTex"*/,
          Object_WarBoardWaitTimeSetting,
          0LL),
        (BaseImg = (UnityEngine_Component_o *)this->fields.BaseImg) == 0LL)
    || (BaseImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(BaseImg, 0LL)) == 0LL )
  {
LABEL_17:
    sub_B52A5C(BaseImg, tex);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)BaseImg, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CampaignInfoDlg__SetDecideActive(CampaignInfoDlg_o *this, bool onOff, const MethodInfo *method)
{
  UnityEngine_GameObject_o *DecideButton; // x0
  UIWidget_o *Component_srcLineSprite; // x20
  int v7; // s0

  if ( (byte_42B1670 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    byte_42B1670 = 1;
  }
  DecideButton = this->fields.DecideButton;
  if ( !DecideButton
    || (DecideButton = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     DecideButton,
                                                     (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)DecideButton, onOff, 0LL),
        (DecideButton = this->fields.DecideButton) == 0LL) )
  {
LABEL_11:
    sub_B52A5C(DecideButton, onOff);
  }
  Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            DecideButton,
                                            (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( onOff )
  {
    *(UnityEngine_Color_o *)&v7 = UnityEngine_Color__get_white(0LL);
    if ( !Component_srcLineSprite )
      goto LABEL_11;
  }
  else
  {
    *(UnityEngine_Color_o *)&v7 = UnityEngine_Color__get_gray(0LL);
    if ( !Component_srcLineSprite )
      goto LABEL_11;
  }
  UIWidget__set_color(Component_srcLineSprite, *(UnityEngine_Color_o *)&v7, 0LL);
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
    sub_B52A5C(TouchMask, isDisp);
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
    sub_B52A5C(CloseButton, isDisp);
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
  UnityEngine_GameObject_o *ImageRoot; // x20
  CampaignInfoDlg_c *v4; // x0
  UITweener_o *v5; // x20
  EventDelegate_Callback_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_42B1669 & 1) == 0 )
  {
    sub_B52984(&EventDelegate_Callback_TypeInfo);
    sub_B52984(&Method_CampaignInfoDlg__UpdatePage_b__47_0__);
    sub_B52984(&CampaignInfoDlg_TypeInfo);
    byte_42B1669 = 1;
  }
  this->fields.IsFading = 1;
  ImageRoot = this->fields.ImageRoot;
  v4 = CampaignInfoDlg_TypeInfo;
  if ( (BYTE3(CampaignInfoDlg_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
    v4 = CampaignInfoDlg_TypeInfo;
  }
  v5 = (UITweener_o *)TweenAlpha__Begin(ImageRoot, v4->static_fields->FADE_TIME, 1.0, 0LL);
  v6 = (EventDelegate_Callback_o *)sub_B52A54(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v6, (Il2CppObject *)this, Method_CampaignInfoDlg__UpdatePage_b__47_0__, 0LL);
  if ( !v5 )
    sub_B52A5C(v7, v8);
  UITweener__SetOnFinished(v5, v6, 0LL);
}


void __fastcall CampaignInfoDlg___LoadImages_b__34_0(CampaignInfoDlg_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_42B1673 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_CampaignInfoDlg_LoadStart__);
    byte_42B1673 = 1;
  }
  v3 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
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
  if ( (byte_42B1674 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    this = (CampaignInfoDlg_o *)sub_B52984(&Method_CampaignInfoDlg__LoadStart_b__40_1__);
    byte_42B1674 = 1;
  }
  if ( !data )
    sub_B52A5C(this, data);
  AssetData__GetObjectNameList(data, 0LL);
  v5 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
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

  if ( (byte_42B166A & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B166A = 1;
  }
  ScrView = (UnityEngine_Object_o *)this->fields.ScrView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(ScrView, 0LL, 0LL) )
  {
    v5 = this->fields.ScrView;
    if ( !v5 )
      sub_B52A5C(0LL, v4);
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
  System_String_o *_4__this; // x0
  UnityEngine_Shader_o *v6; // x22
  UnityEngine_Material_o *v7; // x21
  struct CampaignInfoDlg_o *v8; // x8
  CampaignInfoDlg_o *v9; // x22
  struct CampaignInfoDlg_o *v10; // x8
  UnityEngine_Texture_o *Object_WarBoardWaitTimeSetting; // x0

  if ( (byte_42AD686 & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_Texture2D____68579976);
    sub_B52984(&CampaignInfoDlg_TypeInfo);
    sub_B52984(&UnityEngine_Material_TypeInfo);
    sub_B52984(&StringLiteral_4576/*"Custom/SpriteWithMask"*/);
    sub_B52984(&StringLiteral_16122/*"_MaskTex"*/);
    byte_42AD686 = 1;
  }
  _4__this = (System_String_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  _4__this[10].klass = (System_String_c *)data;
  sub_B52920(&_4__this[10]);
  v6 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4576/*"Custom/SpriteWithMask"*/, 0LL);
  v7 = (UnityEngine_Material_o *)sub_B52A54(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v7, v6, 0LL);
  v8 = this->fields.__4__this;
  if ( !v8 )
    goto LABEL_15;
  _4__this = (System_String_o *)v8->fields.BaseImg;
  if ( !_4__this )
    goto LABEL_15;
  ((void (__fastcall *)(System_String_o *, UnityEngine_Material_o *, Il2CppMethodPointer))_4__this->klass->vtable._25_System_Collections_Generic_IEnumerable_System_Char__GetEnumerator.method)(
    _4__this,
    v7,
    _4__this->klass->vtable._26_Equals.methodPtr);
  v9 = this->fields.__4__this;
  _4__this = (System_String_o *)CampaignInfoDlg_TypeInfo;
  if ( (BYTE3(CampaignInfoDlg_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CampaignInfoDlg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CampaignInfoDlg_TypeInfo);
  }
  if ( !v9
    || (_4__this = CampaignInfoDlg__GetTuorialImageName(v9, CampaignInfoDlg_TypeInfo->static_fields->baseImgNo, 0LL),
        !data)
    || (_4__this = (System_String_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                        data,
                                        _4__this,
                                        (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_Texture2D____68579976),
        !v7)
    || (UnityEngine_Material__set_mainTexture(v7, (UnityEngine_Texture_o *)_4__this, 0LL),
        (v10 = this->fields.__4__this) == 0LL)
    || (_4__this = (System_String_o *)v10->fields.alphaTexAssetData) == 0LL )
  {
LABEL_15:
    sub_B52A5C(_4__this, data);
  }
  Object_WarBoardWaitTimeSetting = (UnityEngine_Texture_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                              (AssetData_o *)_4__this,
                                                              CampaignInfoDlg_TypeInfo->static_fields->alphaImgName,
                                                              (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_Texture2D____68579976);
  UnityEngine_Material__SetTexture(v7, (System_String_o *)StringLiteral_16122/*"_MaskTex"*/, Object_WarBoardWaitTimeSetting, 0LL);
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
    sub_B52A5C(0LL, data);
  _4__this->fields.alphaTexAssetData = data;
  sub_B52920(&_4__this->fields.alphaTexAssetData);
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
  sub_B52920(p_method);
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
  if ( (byte_42AD687 & 1) == 0 )
  {
    sub_B52984(&bool_TypeInfo);
    byte_42AD687 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B52928(this, v9, callback, object);
}


void __fastcall CampaignInfoDlg_onButtonDelgate__EndInvoke(
        CampaignInfoDlg_onButtonDelgate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
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
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  CampaignInfoDlg_onButtonDelgate_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  CampaignInfoDlg_onButtonDelgate_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
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
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B52A40(*(_QWORD *)&v20->fields.extra_arg, decide, method, v3);
      if ( (sub_B529B4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(decide, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B529AC(v22);
      v25 = sub_B52DB0(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AEB880(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B52A34(v17, v22);
        (*v19)(v21, decide, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AEB880(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, decide, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            decide,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, decide, v22);
    goto LABEL_37;
  }
}