void __fastcall CompleteMissionSprite___ctor(CompleteMissionSprite_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


UIAtlas_o *__fastcall CompleteMissionSprite__CreateUIAtlasFromAssetData(
        CompleteMissionSprite_o *this,
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x19
  bool v10; // w8

  if ( (byte_4187F7E & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObjectList_GameObject___, assetData);
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, v6);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v7);
    this = (CompleteMissionSprite_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_4187F7E = 1;
  }
  if ( !assetData )
    goto LABEL_14;
  this = (CompleteMissionSprite_o *)AssetData__GetObjectList_Texture2D_(
                                      assetData,
                                      (const MethodInfo_17204F8 *)Method_AssetData_GetObjectList_GameObject___);
  if ( this )
  {
    if ( this->fields.eventUILoadCallbackFunc )
    {
      Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 assetData,
                                                                 name,
                                                                 (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v10 = UnityEngine_Object__op_Equality(Object_WarBoardWaitTimeSetting, 0LL, 0LL);
      this = 0LL;
      if ( !v10 )
      {
        if ( Object_WarBoardWaitTimeSetting )
          return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting,
                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
LABEL_14:
        sub_B2C434(this, assetData);
      }
    }
    else
    {
      return 0LL;
    }
  }
  return (UIAtlas_o *)this;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CompleteMissionSprite__InitBtn(
        CompleteMissionSprite_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Action_o *v16; // x22
  const MethodInfo *v17; // x4

  if ( (byte_4187F78 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_CompleteMissionSprite___c__DisplayClass12_0__InitBtn_b__0__, v5);
    sub_B2C35C(&CompleteMissionSprite___c__DisplayClass12_0_TypeInfo, v6);
    byte_4187F78 = 1;
  }
  v7 = sub_B2C42C(CompleteMissionSprite___c__DisplayClass12_0_TypeInfo);
  CompleteMissionSprite___c__DisplayClass12_0___ctor((CompleteMissionSprite___c__DisplayClass12_0_o *)v7, 0LL);
  if ( !v7 )
    sub_B2C434(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 24) = eventId;
  v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)v7, Method_CompleteMissionSprite___c__DisplayClass12_0__InitBtn_b__0__, 0LL);
  CompleteMissionSprite__LoadEventUI(this, eventId, v16, 1, v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CompleteMissionSprite__InitFrame(
        CompleteMissionSprite_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Action_o *v16; // x22
  const MethodInfo *v17; // x4

  if ( (byte_4187F79 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_CompleteMissionSprite___c__DisplayClass13_0__InitFrame_b__0__, v5);
    sub_B2C35C(&CompleteMissionSprite___c__DisplayClass13_0_TypeInfo, v6);
    byte_4187F79 = 1;
  }
  v7 = sub_B2C42C(CompleteMissionSprite___c__DisplayClass13_0_TypeInfo);
  CompleteMissionSprite___c__DisplayClass13_0___ctor((CompleteMissionSprite___c__DisplayClass13_0_o *)v7, 0LL);
  if ( !v7 )
    sub_B2C434(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 24) = eventId;
  v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)v7,
    Method_CompleteMissionSprite___c__DisplayClass13_0__InitFrame_b__0__,
    0LL);
  CompleteMissionSprite__LoadEventUI(this, eventId, v16, 1, v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CompleteMissionSprite__InitPanel(
        CompleteMissionSprite_o *this,
        int32_t eventId,
        UISprite_o *listBgSprite,
        int32_t panelCount,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x23
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  int32_t v26; // w20
  System_Action_o *v27; // x21
  const MethodInfo *v28; // x4

  if ( (byte_4187F7A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_CompleteMissionSprite___c__DisplayClass14_0__InitPanel_b__0__, v9);
    sub_B2C35C(&CompleteMissionSprite___c__DisplayClass14_0_TypeInfo, v10);
    byte_4187F7A = 1;
  }
  v11 = sub_B2C42C(CompleteMissionSprite___c__DisplayClass14_0_TypeInfo);
  CompleteMissionSprite___c__DisplayClass14_0___ctor((CompleteMissionSprite___c__DisplayClass14_0_o *)v11, 0LL);
  if ( !v11 )
    sub_B2C434(v12, v13);
  *(_DWORD *)(v11 + 16) = eventId;
  *(_QWORD *)(v11 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_DWORD *)(v11 + 32) = panelCount;
  *(_QWORD *)(v11 + 40) = listBgSprite;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v11 + 40),
    (System_Int32_array **)listBgSprite,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = *(_DWORD *)(v11 + 16);
  v27 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v11,
    Method_CompleteMissionSprite___c__DisplayClass14_0__InitPanel_b__0__,
    0LL);
  CompleteMissionSprite__LoadEventUI(this, v26, v27, 1, v28);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CompleteMissionSprite__InitTarget(
        CompleteMissionSprite_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x21
  const MethodInfo *v7; // x4

  if ( (byte_4187F7B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_CompleteMissionSprite__InitTarget_b__15_0__, v5);
    byte_4187F7B = 1;
  }
  v6 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_CompleteMissionSprite__InitTarget_b__15_0__, 0LL);
  CompleteMissionSprite__LoadEventUI(this, eventId, v6, 1, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CompleteMissionSprite__LoadEventUI(
        CompleteMissionSprite_o *this,
        int32_t eventId,
        System_Action_o *callback,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  AssetData_o *eventUIDownloadAtlas; // x0
  System_Delegate_o *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  Il2CppObject *v22; // x0
  System_String_o *v23; // x21
  AssetLoader_LoadEndDataHandler_o *v24; // x22
  const MethodInfo *v25; // x2
  CompleteMissionSprite_o *v26; // x0
  int32_t v27; // w1
  UISprite_o *v28; // x2
  int32_t v29; // w3
  const MethodInfo *v30; // x4
  int32_t v31; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4187F7C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&AssetManager_TypeInfo, v9);
    sub_B2C35C(&Method_CompleteMissionSprite_LoadEventUIEnd__, v10);
    sub_B2C35C(&int_TypeInfo, v11);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_6207/*"EventUI/Prefabs/{0}"*/, v13);
    byte_4187F7C = 1;
  }
  eventUIDownloadAtlas = (AssetData_o *)this->fields.eventUIDownloadAtlas;
  if ( eventUIDownloadAtlas && !AssetData__get_IsEmpty(eventUIDownloadAtlas, 0LL) )
  {
    if ( callback )
      System_Action__Invoke(callback, 0LL);
  }
  else
  {
    v15 = System_Delegate__Combine(
            (System_Delegate_o *)this->fields.eventUIAssetData,
            (System_Delegate_o *)callback,
            0LL);
    if ( v15 && (System_Action_c *)v15->klass != System_Action_TypeInfo )
    {
      v26 = (CompleteMissionSprite_o *)sub_B2C728(v15);
      CompleteMissionSprite__InitPanel(v26, v27, v28, v29, v30);
    }
    else
    {
      this->fields.eventUIAssetData = (struct AssetData_o *)v15;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.eventUIAssetData,
        (System_Int32_array **)v15,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      if ( !LOBYTE(this->fields.eventUILoadCallbackFunc) )
      {
        LODWORD(this->fields.sprite) = eventId;
        LOBYTE(this->fields.eventUILoadCallbackFunc) = 1;
        v31 = eventId;
        v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
        v23 = System_String__Format((System_String_o *)StringLiteral_6207/*"EventUI/Prefabs/{0}"*/, v22, 0LL);
        v24 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v24,
          (Il2CppObject *)this,
          Method_CompleteMissionSprite_LoadEventUIEnd__,
          0LL);
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        if ( !AssetManager__loadAssetStorage(v23, v24, loadParallelMax, 0LL) )
        {
          LOBYTE(this->fields.eventUILoadCallbackFunc) = 0;
          CompleteMissionSprite__LoadEventUIEnd(this, 0LL, v25);
        }
      }
    }
  }
}


void __fastcall CompleteMissionSprite__LoadEventUIEnd(
        CompleteMissionSprite_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  const MethodInfo *v13; // x3
  System_Int32_array **UIAtlasFromAssetData; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  BattleServantConfConponent_o *p_eventUIAssetData; // x19
  System_Action_o *v22; // x20
  struct AssetData_o *eventUIAssetData; // t1
  int sprite; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4187F7D & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, assetData);
    sub_B2C35C(&StringLiteral_5379/*"DownloadEventUIAtlas{0}01"*/, v10);
    byte_4187F7D = 1;
  }
  if ( LOBYTE(this->fields.eventUILoadCallbackFunc) )
  {
    this->fields.eventUIDownloadAtlas = (struct UIAtlas_o *)assetData;
    LOBYTE(this->fields.eventUILoadCallbackFunc) = 0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.eventUIDownloadAtlas,
      (System_Int32_array **)assetData,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    sprite = (int)this->fields.sprite;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sprite);
    v12 = System_String__Format((System_String_o *)StringLiteral_5379/*"DownloadEventUIAtlas{0}01"*/, v11, 0LL);
    UIAtlasFromAssetData = (System_Int32_array **)CompleteMissionSprite__CreateUIAtlasFromAssetData(
                                                    (CompleteMissionSprite_o *)v12,
                                                    assetData,
                                                    v12,
                                                    v13);
    *(_QWORD *)&this->fields.eventId = UIAtlasFromAssetData;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.eventId,
      UIAtlasFromAssetData,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  eventUIAssetData = this->fields.eventUIAssetData;
  p_eventUIAssetData = (BattleServantConfConponent_o *)&this->fields.eventUIAssetData;
  v22 = (System_Action_o *)eventUIAssetData;
  if ( eventUIAssetData )
  {
    p_eventUIAssetData->klass = 0LL;
    sub_B2C2F8(p_eventUIAssetData, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    System_Action__Invoke(v22, 0LL);
  }
}


void __fastcall CompleteMissionSprite__ReleaseEventUI(CompleteMissionSprite_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *v11; // x0
  System_String_o *v12; // x20
  struct UIAtlas_o **p_eventUIDownloadAtlas; // x20
  AssetData_o *eventUIDownloadAtlas; // x21
  int32_t *p_eventId; // x19
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  int sprite; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4187F7F & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&int_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_6207/*"EventUI/Prefabs/{0}"*/, v10);
    byte_4187F7F = 1;
  }
  if ( LOBYTE(this->fields.eventUILoadCallbackFunc) )
  {
    LOBYTE(this->fields.eventUILoadCallbackFunc) = 0;
    sprite = (int)this->fields.sprite;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sprite);
    v12 = System_String__Format((System_String_o *)StringLiteral_6207/*"EventUI/Prefabs/{0}"*/, v11, 0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(v12, 0LL);
    p_eventUIDownloadAtlas = &this->fields.eventUIDownloadAtlas;
  }
  else
  {
    p_eventUIDownloadAtlas = &this->fields.eventUIDownloadAtlas;
    eventUIDownloadAtlas = (AssetData_o *)this->fields.eventUIDownloadAtlas;
    if ( eventUIDownloadAtlas )
    {
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__releaseAsset_30152684(eventUIDownloadAtlas, 0LL);
    }
  }
  *(_QWORD *)&this->fields.eventId = 0LL;
  p_eventId = &this->fields.eventId;
  sub_B2C2F8((BattleServantConfConponent_o *)p_eventId, 0LL, v2, v3, v4, v5, v6, v7);
  *((_QWORD *)p_eventId - 1) = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)p_eventUIDownloadAtlas, 0LL, v16, v17, v18, v19, v20, v21);
}


bool __fastcall CompleteMissionSprite__SetEventUI(
        CompleteMissionSprite_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  UISpriteData_o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *v9; // x22
  UISprite_o *v10; // x0
  System_String_o *v11; // x1

  if ( (byte_4187F80 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, sprite);
    byte_4187F80 = 1;
  }
  IsNullOrEmpty = (UISpriteData_o *)System_String__IsNullOrEmpty(spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    goto LABEL_8;
  v9 = *(UnityEngine_Object_o **)&this->fields.eventId;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  IsNullOrEmpty = (UISpriteData_o *)UnityEngine_Object__op_Equality(v9, 0LL, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
LABEL_8:
    if ( sprite )
    {
      v10 = sprite;
      v11 = 0LL;
LABEL_10:
      UISprite__set_spriteName(v10, v11, 0LL);
      return 1;
    }
    goto LABEL_17;
  }
  IsNullOrEmpty = *(UISpriteData_o **)&this->fields.eventId;
  if ( !IsNullOrEmpty )
    goto LABEL_17;
  IsNullOrEmpty = UIAtlas__GetSprite((UIAtlas_o *)IsNullOrEmpty, spriteName, 0LL);
  if ( IsNullOrEmpty )
  {
    if ( sprite )
    {
      UISprite__set_atlas(sprite, *(UIAtlas_o **)&this->fields.eventId, 0LL);
      v10 = sprite;
      v11 = spriteName;
      goto LABEL_10;
    }
LABEL_17:
    sub_B2C434(IsNullOrEmpty, v8);
  }
  if ( !sprite )
    goto LABEL_17;
  UISprite__set_spriteName(sprite, 0LL, 0LL);
  return 0;
}


void __fastcall CompleteMissionSprite___InitTarget_b__15_0(CompleteMissionSprite_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4187F81 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19751/*"img_txt_target_panel"*/, method);
    byte_4187F81 = 1;
  }
  CompleteMissionSprite__SetEventUI(this, (UISprite_o *)this[1].klass, (System_String_o *)StringLiteral_19751/*"img_txt_target_panel"*/, v2);
}


void __fastcall CompleteMissionSprite___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_418648D & 1) == 0 )
  {
    sub_B2C35C(&CompleteMissionSprite___c_TypeInfo, v1);
    byte_418648D = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(CompleteMissionSprite___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)CompleteMissionSprite___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
}


void __fastcall CompleteMissionSprite___c___ctor(CompleteMissionSprite___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CompleteMissionSprite___c___InitPanel_b__14_1(
        CompleteMissionSprite___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall CompleteMissionSprite___c__DisplayClass12_0___ctor(
        CompleteMissionSprite___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CompleteMissionSprite___c__DisplayClass12_0___InitBtn_b__0(
        CompleteMissionSprite___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  CompleteMissionSprite___c__DisplayClass12_0_o *v2; // x20
  __int64 v3; // x1
  CompleteMissionSprite_o *_4__this; // x19
  UISprite_o *klass; // x21
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  int32_t eventId; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_418648E & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    this = (CompleteMissionSprite___c__DisplayClass12_0_o *)sub_B2C35C(&StringLiteral_17135/*"button_mission_{0}"*/, v3);
    byte_418648E = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(this, method);
  klass = (UISprite_o *)_4__this[1].klass;
  eventId = v2->fields.eventId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v7 = System_String__Format((System_String_o *)StringLiteral_17135/*"button_mission_{0}"*/, v6, 0LL);
  CompleteMissionSprite__SetEventUI(_4__this, klass, v7, 0LL);
}


void __fastcall CompleteMissionSprite___c__DisplayClass13_0___ctor(
        CompleteMissionSprite___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CompleteMissionSprite___c__DisplayClass13_0___InitFrame_b__0(
        CompleteMissionSprite___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  CompleteMissionSprite___c__DisplayClass13_0_o *v2; // x20
  __int64 v3; // x1
  CompleteMissionSprite_o *_4__this; // x19
  UISprite_o *klass; // x21
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  int32_t eventId; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_418648F & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    this = (CompleteMissionSprite___c__DisplayClass13_0_o *)sub_B2C35C(&StringLiteral_19481/*"img_flame_{0}"*/, v3);
    byte_418648F = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(this, method);
  klass = (UISprite_o *)_4__this[1].klass;
  eventId = v2->fields.eventId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v7 = System_String__Format((System_String_o *)StringLiteral_19481/*"img_flame_{0}"*/, v6, 0LL);
  CompleteMissionSprite__SetEventUI(_4__this, klass, v7, 0LL);
}


void __fastcall CompleteMissionSprite___c__DisplayClass14_0___ctor(
        CompleteMissionSprite___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CompleteMissionSprite___c__DisplayClass14_0___InitPanel_b__0(
        CompleteMissionSprite___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  CompleteMissionSprite___c__DisplayClass14_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t v12; // w20
  struct UISprite_o *listBgSprite; // x8
  WebViewObject_o *Component_WebViewObject; // x21
  CompleteMissionSprite_o *_4__this; // x22
  Il2CppObject *v16; // x0
  CompleteMissionSprite_o *v17; // x20
  UISprite_o *klass; // x21
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  CommonUI_o *Instance; // x19
  AvalonSceneManager_c *v22; // x8
  float DEFAULT_FADE_TIME; // s8
  void *static_fields; // x8
  System_Action_o *v25; // x20
  Il2CppObject *v26; // x21
  struct CompleteMissionSprite___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  int32_t eventId; // [xsp+8h] [xbp-58h] BYREF
  int v35; // [xsp+Ch] [xbp-54h] BYREF

  v2 = this;
  if ( (byte_4186490 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v3);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UISprite___, v4);
    sub_B2C35C(&int_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&Method_CompleteMissionSprite___c__InitPanel_b__14_1__, v7);
    sub_B2C35C(&CompleteMissionSprite___c_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_20533/*"mission_bg_{0}"*/, v9);
    sub_B2C35C(&StringLiteral_20545/*"mission_on_{0}"*/, v10);
    this = (CompleteMissionSprite___c__DisplayClass14_0_o *)sub_B2C35C(&StringLiteral_18603/*"event_tab_type5_0"*/, v11);
    byte_4186490 = 1;
  }
  if ( v2->fields.panelCount > 0 )
  {
    v12 = 0;
    while ( 1 )
    {
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        break;
      listBgSprite = this[25].fields.listBgSprite;
      if ( !listBgSprite )
        break;
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)listBgSprite->fields.leftAnchor;
      if ( !this )
        break;
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)UnityEngine_Transform__GetChild(
                                                                (UnityEngine_Transform_o *)this,
                                                                v12,
                                                                0LL);
      if ( !this )
        break;
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)UnityEngine_Transform__GetChild(
                                                                (UnityEngine_Transform_o *)this,
                                                                0,
                                                                0LL);
      if ( !this )
        break;
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      _4__this = v2->fields.__4__this;
      v35 = v12 + 100 * v2->fields.eventId + 1;
      v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35);
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)System_String__Format(
                                                                (System_String_o *)StringLiteral_20545/*"mission_on_{0}"*/,
                                                                v16,
                                                                0LL);
      if ( !_4__this )
        break;
      ++v12;
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)CompleteMissionSprite__SetEventUI(
                                                                _4__this,
                                                                (UISprite_o *)Component_WebViewObject,
                                                                (System_String_o *)this,
                                                                0LL);
      if ( v12 >= v2->fields.panelCount )
        goto LABEL_12;
    }
LABEL_28:
    sub_B2C434(this, method);
  }
LABEL_12:
  v17 = v2->fields.__4__this;
  if ( !v17 )
    goto LABEL_28;
  klass = (UISprite_o *)v17[1].klass;
  eventId = v2->fields.eventId;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v20 = System_String__Format((System_String_o *)StringLiteral_20533/*"mission_bg_{0}"*/, v19, 0LL);
  CompleteMissionSprite__SetEventUI(v17, klass, v20, 0LL);
  this = (CompleteMissionSprite___c__DisplayClass14_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_28;
  CompleteMissionSprite__SetEventUI(
    (CompleteMissionSprite_o *)this,
    v2->fields.listBgSprite,
    (System_String_o *)StringLiteral_18603/*"event_tab_type5_0"*/,
    0LL);
  this = (CompleteMissionSprite___c__DisplayClass14_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_28;
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v22 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v22 = AvalonSceneManager_TypeInfo;
  }
  this = (CompleteMissionSprite___c__DisplayClass14_0_o *)CompleteMissionSprite___c_TypeInfo;
  DEFAULT_FADE_TIME = v22->static_fields->DEFAULT_FADE_TIME;
  if ( (BYTE3(CompleteMissionSprite___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CompleteMissionSprite___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompleteMissionSprite___c_TypeInfo);
    this = (CompleteMissionSprite___c__DisplayClass14_0_o *)CompleteMissionSprite___c_TypeInfo;
  }
  static_fields = this[3].fields.listBgSprite;
  v25 = (System_Action_o *)*((_QWORD *)static_fields + 1);
  if ( !v25 )
  {
    if ( (this[6].fields.eventId & 0x4000000) != 0 && !this[4].fields.panelCount )
    {
      j_il2cpp_runtime_class_init_0(this);
      static_fields = CompleteMissionSprite___c_TypeInfo->static_fields;
    }
    v26 = *(Il2CppObject **)static_fields;
    v25 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v25, v26, Method_CompleteMissionSprite___c__InitPanel_b__14_1__, 0LL);
    v27 = CompleteMissionSprite___c_TypeInfo->static_fields;
    v27->__9__14_1 = v25;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v27->__9__14_1,
      (System_Int32_array **)v25,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  if ( !Instance )
    goto LABEL_28;
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v25, 0LL);
}