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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x19
  bool v16; // w8

  if ( (byte_42E8F20 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObjectList_GameObject___, (_DWORD)assetData, (_DWORD)name, method);
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v9, v10, v11);
    this = (CompleteMissionSprite_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    byte_42E8F20 = 1;
  }
  if ( !assetData )
    goto LABEL_14;
  this = (CompleteMissionSprite_o *)AssetData__GetObjectList_Texture2D_(
                                      assetData,
                                      (const MethodInfo_1AD0B80 *)Method_AssetData_GetObjectList_GameObject___);
  if ( this )
  {
    if ( this->fields.eventUILoadCallbackFunc )
    {
      Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 assetData,
                                                                 name,
                                                                 (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v16 = UnityEngine_Object__op_Equality(Object_WarBoardWaitTimeSetting, 0LL, 0LL);
      this = 0LL;
      if ( !v16 )
      {
        if ( Object_WarBoardWaitTimeSetting )
          return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting,
                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
LABEL_14:
        sub_B5D69C(this, assetData);
      }
    }
    else
    {
      return 0LL;
    }
  }
  return (UIAtlas_o *)this;
}


void __fastcall CompleteMissionSprite__InitBtn(
        CompleteMissionSprite_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Action_o *v21; // x22
  const MethodInfo *v22; // x4

  if ( (byte_42E8F1A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_CompleteMissionSprite___c__DisplayClass12_0__InitBtn_b__0__, v6, v7, v8);
    sub_B5D5C4(&CompleteMissionSprite___c__DisplayClass12_0_TypeInfo, v9, v10, v11);
    byte_42E8F1A = 1;
  }
  v12 = sub_B5D694(CompleteMissionSprite___c__DisplayClass12_0_TypeInfo);
  CompleteMissionSprite___c__DisplayClass12_0___ctor((CompleteMissionSprite___c__DisplayClass12_0_o *)v12, 0LL);
  if ( !v12 )
    sub_B5D69C(v13, v14);
  *(_QWORD *)(v12 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_DWORD *)(v12 + 24) = eventId;
  v21 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v12,
    Method_CompleteMissionSprite___c__DisplayClass12_0__InitBtn_b__0__,
    0LL);
  CompleteMissionSprite__LoadEventUI(this, eventId, v21, 1, v22);
}


void __fastcall CompleteMissionSprite__InitFrame(
        CompleteMissionSprite_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Action_o *v21; // x22
  const MethodInfo *v22; // x4

  if ( (byte_42E8F1B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_CompleteMissionSprite___c__DisplayClass13_0__InitFrame_b__0__, v6, v7, v8);
    sub_B5D5C4(&CompleteMissionSprite___c__DisplayClass13_0_TypeInfo, v9, v10, v11);
    byte_42E8F1B = 1;
  }
  v12 = sub_B5D694(CompleteMissionSprite___c__DisplayClass13_0_TypeInfo);
  CompleteMissionSprite___c__DisplayClass13_0___ctor((CompleteMissionSprite___c__DisplayClass13_0_o *)v12, 0LL);
  if ( !v12 )
    sub_B5D69C(v13, v14);
  *(_QWORD *)(v12 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_DWORD *)(v12 + 24) = eventId;
  v21 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v12,
    Method_CompleteMissionSprite___c__DisplayClass13_0__InitFrame_b__0__,
    0LL);
  CompleteMissionSprite__LoadEventUI(this, eventId, v21, 1, v22);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CompleteMissionSprite__InitPanel(
        CompleteMissionSprite_o *this,
        int32_t eventId,
        UISprite_o *listBgSprite,
        int32_t panelCount,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x23
  __int64 v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  int32_t v30; // w20
  System_Action_o *v31; // x21
  const MethodInfo *v32; // x4

  if ( (byte_42E8F1C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, eventId, (_DWORD)listBgSprite, *(_QWORD *)&panelCount);
    sub_B5D5C4(&Method_CompleteMissionSprite___c__DisplayClass14_0__InitPanel_b__0__, v9, v10, v11);
    sub_B5D5C4(&CompleteMissionSprite___c__DisplayClass14_0_TypeInfo, v12, v13, v14);
    byte_42E8F1C = 1;
  }
  v15 = sub_B5D694(CompleteMissionSprite___c__DisplayClass14_0_TypeInfo);
  CompleteMissionSprite___c__DisplayClass14_0___ctor((CompleteMissionSprite___c__DisplayClass14_0_o *)v15, 0LL);
  if ( !v15 )
    sub_B5D69C(v16, v17);
  *(_DWORD *)(v15 + 16) = eventId;
  *(_QWORD *)(v15 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v15 + 24), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  *(_DWORD *)(v15 + 32) = panelCount;
  *(_QWORD *)(v15 + 40) = listBgSprite;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v15 + 40),
    (System_Int32_array **)listBgSprite,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = *(_DWORD *)(v15 + 16);
  v31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v15,
    Method_CompleteMissionSprite___c__DisplayClass14_0__InitPanel_b__0__,
    0LL);
  CompleteMissionSprite__LoadEventUI(this, v30, v31, 1, v32);
}


void __fastcall CompleteMissionSprite__InitTarget(
        CompleteMissionSprite_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Action_o *v9; // x21
  const MethodInfo *v10; // x4

  if ( (byte_42E8F1D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_CompleteMissionSprite__InitTarget_b__15_0__, v6, v7, v8);
    byte_42E8F1D = 1;
  }
  v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_CompleteMissionSprite__InitTarget_b__15_0__, 0LL);
  CompleteMissionSprite__LoadEventUI(this, eventId, v9, 1, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CompleteMissionSprite__LoadEventUI(
        CompleteMissionSprite_o *this,
        int32_t eventId,
        System_Action_o *callback,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  AssetData_o *eventUIDownloadAtlas; // x0
  System_Delegate_o *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  Il2CppObject *v32; // x0
  System_String_o *v33; // x21
  AssetLoader_LoadEndDataHandler_o *v34; // x22
  const MethodInfo *v35; // x2
  CompleteMissionSprite_o *v36; // x0
  int32_t v37; // w1
  UISprite_o *v38; // x2
  int32_t v39; // w3
  const MethodInfo *v40; // x4
  int32_t v41; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E8F1E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, eventId, (_DWORD)callback, *(_QWORD *)&loadParallelMax);
    sub_B5D5C4(&AssetManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_CompleteMissionSprite_LoadEventUIEnd__, v12, v13, v14);
    sub_B5D5C4(&int_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_6286/*"EventUI/Prefabs/{0}"*/, v21, v22, v23);
    byte_42E8F1E = 1;
  }
  eventUIDownloadAtlas = (AssetData_o *)this->fields.eventUIDownloadAtlas;
  if ( eventUIDownloadAtlas && !AssetData__get_IsEmpty(eventUIDownloadAtlas, 0LL) )
  {
    if ( callback )
      System_Action__Invoke(callback, 0LL);
  }
  else
  {
    v25 = System_Delegate__Combine(
            (System_Delegate_o *)this->fields.eventUIAssetData,
            (System_Delegate_o *)callback,
            0LL);
    if ( v25 && (System_Action_c *)v25->klass != System_Action_TypeInfo )
    {
      v36 = (CompleteMissionSprite_o *)sub_B5D990(v25);
      CompleteMissionSprite__InitPanel(v36, v37, v38, v39, v40);
    }
    else
    {
      this->fields.eventUIAssetData = (struct AssetData_o *)v25;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.eventUIAssetData,
        (System_Int32_array **)v25,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
      if ( !LOBYTE(this->fields.eventUILoadCallbackFunc) )
      {
        LODWORD(this->fields.sprite) = eventId;
        LOBYTE(this->fields.eventUILoadCallbackFunc) = 1;
        v41 = eventId;
        v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41);
        v33 = System_String__Format((System_String_o *)StringLiteral_6286/*"EventUI/Prefabs/{0}"*/, v32, 0LL);
        v34 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v34,
          (Il2CppObject *)this,
          Method_CompleteMissionSprite_LoadEventUIEnd__,
          0LL);
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        if ( !AssetManager__loadAssetStorage(v33, v34, loadParallelMax, 0LL) )
        {
          LOBYTE(this->fields.eventUILoadCallbackFunc) = 0;
          CompleteMissionSprite__LoadEventUIEnd(this, 0LL, v35);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  const MethodInfo *v15; // x3
  System_Int32_array **UIAtlasFromAssetData; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  BattleServantConfConponent_o *p_eventUIAssetData; // x19
  System_Action_o *v24; // x20
  struct AssetData_o *eventUIAssetData; // t1
  int sprite; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E8F1F & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)assetData, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_5455/*"DownloadEventUIAtlas{0}01"*/, v10, v11, v12);
    byte_42E8F1F = 1;
  }
  if ( LOBYTE(this->fields.eventUILoadCallbackFunc) )
  {
    this->fields.eventUIDownloadAtlas = (struct UIAtlas_o *)assetData;
    LOBYTE(this->fields.eventUILoadCallbackFunc) = 0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.eventUIDownloadAtlas,
      (System_Int32_array **)assetData,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    sprite = (int)this->fields.sprite;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sprite);
    v14 = System_String__Format((System_String_o *)StringLiteral_5455/*"DownloadEventUIAtlas{0}01"*/, v13, 0LL);
    UIAtlasFromAssetData = (System_Int32_array **)CompleteMissionSprite__CreateUIAtlasFromAssetData(
                                                    (CompleteMissionSprite_o *)v14,
                                                    assetData,
                                                    v14,
                                                    v15);
    *(_QWORD *)&this->fields.eventId = UIAtlasFromAssetData;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.eventId,
      UIAtlasFromAssetData,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  eventUIAssetData = this->fields.eventUIAssetData;
  p_eventUIAssetData = (BattleServantConfConponent_o *)&this->fields.eventUIAssetData;
  v24 = (System_Action_o *)eventUIAssetData;
  if ( eventUIAssetData )
  {
    p_eventUIAssetData->klass = 0LL;
    sub_B5D560(p_eventUIAssetData, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    System_Action__Invoke(v24, 0LL);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  Il2CppObject *v15; // x0
  System_String_o *v16; // x20
  struct UIAtlas_o **p_eventUIDownloadAtlas; // x20
  AssetData_o *eventUIDownloadAtlas; // x21
  int32_t *p_eventId; // x19
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  int sprite; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E8F21 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&int_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_6286/*"EventUI/Prefabs/{0}"*/, v12, v13, v14);
    byte_42E8F21 = 1;
  }
  if ( LOBYTE(this->fields.eventUILoadCallbackFunc) )
  {
    LOBYTE(this->fields.eventUILoadCallbackFunc) = 0;
    sprite = (int)this->fields.sprite;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sprite);
    v16 = System_String__Format((System_String_o *)StringLiteral_6286/*"EventUI/Prefabs/{0}"*/, v15, 0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(v16, 0LL);
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
      AssetManager__releaseAsset_30657564(eventUIDownloadAtlas, 0LL);
    }
  }
  *(_QWORD *)&this->fields.eventId = 0LL;
  p_eventId = &this->fields.eventId;
  sub_B5D560((BattleServantConfConponent_o *)p_eventId, 0LL, v2, v3, v4, v5, v6, v7);
  *((_QWORD *)p_eventId - 1) = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)p_eventUIDownloadAtlas, 0LL, v20, v21, v22, v23, v24, v25);
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

  if ( (byte_42E8F22 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)sprite, (_DWORD)spriteName, method);
    byte_42E8F22 = 1;
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
    sub_B5D69C(IsNullOrEmpty, v8);
  }
  if ( !sprite )
    goto LABEL_17;
  UISprite__set_spriteName(sprite, 0LL, 0LL);
  return 0;
}


void __fastcall CompleteMissionSprite___InitTarget_b__15_0(CompleteMissionSprite_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E8F23 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20000/*"img_txt_target_panel"*/, (_DWORD)method, v2, v3);
    byte_42E8F23 = 1;
  }
  CompleteMissionSprite__SetEventUI(this, (UISprite_o *)this[1].klass, (System_String_o *)StringLiteral_20000/*"img_txt_target_panel"*/, v3);
}


void __fastcall CompleteMissionSprite___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E6D31 & 1) == 0 )
  {
    sub_B5D5C4(&CompleteMissionSprite___c_TypeInfo, v1, v2, v3);
    byte_42E6D31 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(CompleteMissionSprite___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)CompleteMissionSprite___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
  int v2; // w2
  __int64 v3; // x3
  CompleteMissionSprite___c__DisplayClass12_0_o *v4; // x20
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CompleteMissionSprite_o *_4__this; // x19
  UISprite_o *klass; // x21
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  int32_t eventId; // [xsp+Ch] [xbp-14h] BYREF

  v4 = this;
  if ( (byte_42E6D32 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    this = (CompleteMissionSprite___c__DisplayClass12_0_o *)sub_B5D5C4(&StringLiteral_17345/*"button_mission_{0}"*/, v5, v6, v7);
    byte_42E6D32 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(this, method);
  klass = (UISprite_o *)_4__this[1].klass;
  eventId = v4->fields.eventId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v11 = System_String__Format((System_String_o *)StringLiteral_17345/*"button_mission_{0}"*/, v10, 0LL);
  CompleteMissionSprite__SetEventUI(_4__this, klass, v11, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  CompleteMissionSprite___c__DisplayClass13_0_o *v4; // x20
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CompleteMissionSprite_o *_4__this; // x19
  UISprite_o *klass; // x21
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  int32_t eventId; // [xsp+Ch] [xbp-14h] BYREF

  v4 = this;
  if ( (byte_42E6D33 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    this = (CompleteMissionSprite___c__DisplayClass13_0_o *)sub_B5D5C4(&StringLiteral_19726/*"img_flame_{0}"*/, v5, v6, v7);
    byte_42E6D33 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(this, method);
  klass = (UISprite_o *)_4__this[1].klass;
  eventId = v4->fields.eventId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v11 = System_String__Format((System_String_o *)StringLiteral_19726/*"img_flame_{0}"*/, v10, 0LL);
  CompleteMissionSprite__SetEventUI(_4__this, klass, v11, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  CompleteMissionSprite___c__DisplayClass14_0_o *v4; // x19
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
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int32_t v32; // w20
  struct UISprite_o *listBgSprite; // x8
  WebViewObject_o *Component_WebViewObject; // x21
  CompleteMissionSprite_o *_4__this; // x22
  Il2CppObject *v36; // x0
  CompleteMissionSprite_o *v37; // x20
  UISprite_o *klass; // x21
  Il2CppObject *v39; // x0
  System_String_o *v40; // x0
  CommonUI_o *Instance; // x19
  AvalonSceneManager_c *v42; // x8
  float DEFAULT_FADE_TIME; // s8
  void *static_fields; // x8
  System_Action_o *v45; // x20
  Il2CppObject *v46; // x21
  struct CompleteMissionSprite___c_StaticFields *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  int32_t eventId; // [xsp+8h] [xbp-58h] BYREF
  int v55; // [xsp+Ch] [xbp-54h] BYREF

  v4 = this;
  if ( (byte_42E6D34 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UISprite___, v8, v9, v10);
    sub_B5D5C4(&int_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&Method_CompleteMissionSprite___c__InitPanel_b__14_1__, v17, v18, v19);
    sub_B5D5C4(&CompleteMissionSprite___c_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_20796/*"mission_bg_{0}"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_20808/*"mission_on_{0}"*/, v26, v27, v28);
    this = (CompleteMissionSprite___c__DisplayClass14_0_o *)sub_B5D5C4(&StringLiteral_18834/*"event_tab_type5_0"*/, v29, v30, v31);
    byte_42E6D34 = 1;
  }
  if ( v4->fields.panelCount > 0 )
  {
    v32 = 0;
    while ( 1 )
    {
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                                                                v32,
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
                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      _4__this = v4->fields.__4__this;
      v55 = v32 + 100 * v4->fields.eventId + 1;
      v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55);
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)System_String__Format(
                                                                (System_String_o *)StringLiteral_20808/*"mission_on_{0}"*/,
                                                                v36,
                                                                0LL);
      if ( !_4__this )
        break;
      ++v32;
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)CompleteMissionSprite__SetEventUI(
                                                                _4__this,
                                                                (UISprite_o *)Component_WebViewObject,
                                                                (System_String_o *)this,
                                                                0LL);
      if ( v32 >= v4->fields.panelCount )
        goto LABEL_12;
    }
LABEL_28:
    sub_B5D69C(this, method);
  }
LABEL_12:
  v37 = v4->fields.__4__this;
  if ( !v37 )
    goto LABEL_28;
  klass = (UISprite_o *)v37[1].klass;
  eventId = v4->fields.eventId;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v40 = System_String__Format((System_String_o *)StringLiteral_20796/*"mission_bg_{0}"*/, v39, 0LL);
  CompleteMissionSprite__SetEventUI(v37, klass, v40, 0LL);
  this = (CompleteMissionSprite___c__DisplayClass14_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_28;
  CompleteMissionSprite__SetEventUI(
    (CompleteMissionSprite_o *)this,
    v4->fields.listBgSprite,
    (System_String_o *)StringLiteral_18834/*"event_tab_type5_0"*/,
    0LL);
  this = (CompleteMissionSprite___c__DisplayClass14_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_28;
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v42 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v42 = AvalonSceneManager_TypeInfo;
  }
  this = (CompleteMissionSprite___c__DisplayClass14_0_o *)CompleteMissionSprite___c_TypeInfo;
  DEFAULT_FADE_TIME = v42->static_fields->DEFAULT_FADE_TIME;
  if ( (BYTE3(CompleteMissionSprite___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CompleteMissionSprite___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompleteMissionSprite___c_TypeInfo);
    this = (CompleteMissionSprite___c__DisplayClass14_0_o *)CompleteMissionSprite___c_TypeInfo;
  }
  static_fields = this[3].fields.listBgSprite;
  v45 = (System_Action_o *)*((_QWORD *)static_fields + 1);
  if ( !v45 )
  {
    if ( (this[6].fields.eventId & 0x4000000) != 0 && !this[4].fields.panelCount )
    {
      j_il2cpp_runtime_class_init_0(this);
      static_fields = CompleteMissionSprite___c_TypeInfo->static_fields;
    }
    v46 = *(Il2CppObject **)static_fields;
    v45 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v45, v46, Method_CompleteMissionSprite___c__InitPanel_b__14_1__, 0LL);
    v47 = CompleteMissionSprite___c_TypeInfo->static_fields;
    v47->__9__14_1 = v45;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v47->__9__14_1,
      (System_Int32_array **)v45,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
  }
  if ( !Instance )
    goto LABEL_28;
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v45, 0LL);
}