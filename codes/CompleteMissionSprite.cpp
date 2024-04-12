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
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x19
  bool v7; // w8

  if ( (byte_42B0875 & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObjectList_GameObject___);
    sub_B52984(&Method_AssetData_GetObject_GameObject____68579952);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    this = (CompleteMissionSprite_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B0875 = 1;
  }
  if ( !assetData )
    goto LABEL_14;
  this = (CompleteMissionSprite_o *)AssetData__GetObjectList_Texture2D_(
                                      assetData,
                                      (const MethodInfo_1A3BAB8 *)Method_AssetData_GetObjectList_GameObject___);
  if ( this )
  {
    if ( this->fields.eventUILoadCallbackFunc )
    {
      Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 assetData,
                                                                 name,
                                                                 (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v7 = UnityEngine_Object__op_Equality(Object_WarBoardWaitTimeSetting, 0LL, 0LL);
      this = 0LL;
      if ( !v7 )
      {
        if ( Object_WarBoardWaitTimeSetting )
          return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting,
                                (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
LABEL_14:
        sub_B52A5C(this, assetData);
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
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Action_o *v14; // x22
  const MethodInfo *v15; // x4

  if ( (byte_42B086F & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_CompleteMissionSprite___c__DisplayClass12_0__InitBtn_b__0__);
    sub_B52984(&CompleteMissionSprite___c__DisplayClass12_0_TypeInfo);
    byte_42B086F = 1;
  }
  v5 = sub_B52A54(CompleteMissionSprite___c__DisplayClass12_0_TypeInfo);
  CompleteMissionSprite___c__DisplayClass12_0___ctor((CompleteMissionSprite___c__DisplayClass12_0_o *)v5, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 24) = eventId;
  v14 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)v5, Method_CompleteMissionSprite___c__DisplayClass12_0__InitBtn_b__0__, 0LL);
  CompleteMissionSprite__LoadEventUI(this, eventId, v14, 1, v15);
}


void __fastcall CompleteMissionSprite__InitFrame(
        CompleteMissionSprite_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Action_o *v14; // x22
  const MethodInfo *v15; // x4

  if ( (byte_42B0870 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_CompleteMissionSprite___c__DisplayClass13_0__InitFrame_b__0__);
    sub_B52984(&CompleteMissionSprite___c__DisplayClass13_0_TypeInfo);
    byte_42B0870 = 1;
  }
  v5 = sub_B52A54(CompleteMissionSprite___c__DisplayClass13_0_TypeInfo);
  CompleteMissionSprite___c__DisplayClass13_0___ctor((CompleteMissionSprite___c__DisplayClass13_0_o *)v5, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 24) = eventId;
  v14 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v5,
    Method_CompleteMissionSprite___c__DisplayClass13_0__InitFrame_b__0__,
    0LL);
  CompleteMissionSprite__LoadEventUI(this, eventId, v14, 1, v15);
}


void __fastcall CompleteMissionSprite__InitPanel(
        CompleteMissionSprite_o *this,
        int32_t eventId,
        UISprite_o *listBgSprite,
        int32_t panelCount,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  int32_t v24; // w20
  System_Action_o *v25; // x21
  const MethodInfo *v26; // x4

  if ( (byte_42B0871 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_CompleteMissionSprite___c__DisplayClass14_0__InitPanel_b__0__);
    sub_B52984(&CompleteMissionSprite___c__DisplayClass14_0_TypeInfo);
    byte_42B0871 = 1;
  }
  v9 = sub_B52A54(CompleteMissionSprite___c__DisplayClass14_0_TypeInfo);
  CompleteMissionSprite___c__DisplayClass14_0___ctor((CompleteMissionSprite___c__DisplayClass14_0_o *)v9, 0LL);
  if ( !v9 )
    sub_B52A5C(v10, v11);
  *(_DWORD *)(v9 + 16) = eventId;
  *(_QWORD *)(v9 + 24) = this;
  sub_B52920((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_DWORD *)(v9 + 32) = panelCount;
  *(_QWORD *)(v9 + 40) = listBgSprite;
  sub_B52920(
    (BattleServantConfConponent_o *)(v9 + 40),
    (System_Int32_array **)listBgSprite,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = *(_DWORD *)(v9 + 16);
  v25 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v9,
    Method_CompleteMissionSprite___c__DisplayClass14_0__InitPanel_b__0__,
    0LL);
  CompleteMissionSprite__LoadEventUI(this, v24, v25, 1, v26);
}


void __fastcall CompleteMissionSprite__InitTarget(
        CompleteMissionSprite_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x4

  if ( (byte_42B0872 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_CompleteMissionSprite__InitTarget_b__15_0__);
    byte_42B0872 = 1;
  }
  v5 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_CompleteMissionSprite__InitTarget_b__15_0__, 0LL);
  CompleteMissionSprite__LoadEventUI(this, eventId, v5, 1, v6);
}


void __fastcall CompleteMissionSprite__LoadEventUI(
        CompleteMissionSprite_o *this,
        int32_t eventId,
        System_Action_o *callback,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  AssetData_o *eventUIDownloadAtlas; // x0
  System_Delegate_o *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  Il2CppObject *v17; // x0
  System_String_o *v18; // x21
  AssetLoader_LoadEndDataHandler_o *v19; // x22
  const MethodInfo *v20; // x2
  CompleteMissionSprite_o *v21; // x0
  int32_t v22; // w1
  UISprite_o *v23; // x2
  int32_t v24; // w3
  const MethodInfo *v25; // x4
  int32_t v26; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42B0873 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&Method_CompleteMissionSprite_LoadEventUIEnd__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B52984(&StringLiteral_6250/*"EventUI/Prefabs/{0}"*/);
    byte_42B0873 = 1;
  }
  eventUIDownloadAtlas = (AssetData_o *)this->fields.eventUIDownloadAtlas;
  if ( eventUIDownloadAtlas && !AssetData__get_IsEmpty(eventUIDownloadAtlas, 0LL) )
  {
    if ( callback )
      System_Action__Invoke(callback, 0LL);
  }
  else
  {
    v10 = System_Delegate__Combine(
            (System_Delegate_o *)this->fields.eventUIAssetData,
            (System_Delegate_o *)callback,
            0LL);
    if ( v10 && (System_Action_c *)v10->klass != System_Action_TypeInfo )
    {
      v21 = (CompleteMissionSprite_o *)sub_B52D50(v10);
      CompleteMissionSprite__InitPanel(v21, v22, v23, v24, v25);
    }
    else
    {
      this->fields.eventUIAssetData = (struct AssetData_o *)v10;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.eventUIAssetData,
        (System_Int32_array **)v10,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      if ( !LOBYTE(this->fields.eventUILoadCallbackFunc) )
      {
        LODWORD(this->fields.sprite) = eventId;
        LOBYTE(this->fields.eventUILoadCallbackFunc) = 1;
        v26 = eventId;
        v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
        v18 = System_String__Format((System_String_o *)StringLiteral_6250/*"EventUI/Prefabs/{0}"*/, v17, 0LL);
        v19 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v19,
          (Il2CppObject *)this,
          Method_CompleteMissionSprite_LoadEventUIEnd__,
          0LL);
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        if ( !AssetManager__loadAssetStorage(v18, v19, loadParallelMax, 0LL) )
        {
          LOBYTE(this->fields.eventUILoadCallbackFunc) = 0;
          CompleteMissionSprite__LoadEventUIEnd(this, 0LL, v20);
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
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  const MethodInfo *v12; // x3
  System_Int32_array **UIAtlasFromAssetData; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  BattleServantConfConponent_o *p_eventUIAssetData; // x19
  System_Action_o *v21; // x20
  struct AssetData_o *eventUIAssetData; // t1
  int sprite; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42B0874 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&StringLiteral_5420/*"DownloadEventUIAtlas{0}01"*/);
    byte_42B0874 = 1;
  }
  if ( LOBYTE(this->fields.eventUILoadCallbackFunc) )
  {
    this->fields.eventUIDownloadAtlas = (struct UIAtlas_o *)assetData;
    LOBYTE(this->fields.eventUILoadCallbackFunc) = 0;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.eventUIDownloadAtlas,
      (System_Int32_array **)assetData,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    sprite = (int)this->fields.sprite;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sprite);
    v11 = System_String__Format((System_String_o *)StringLiteral_5420/*"DownloadEventUIAtlas{0}01"*/, v10, 0LL);
    UIAtlasFromAssetData = (System_Int32_array **)CompleteMissionSprite__CreateUIAtlasFromAssetData(
                                                    (CompleteMissionSprite_o *)v11,
                                                    assetData,
                                                    v11,
                                                    v12);
    *(_QWORD *)&this->fields.eventId = UIAtlasFromAssetData;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.eventId,
      UIAtlasFromAssetData,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  eventUIAssetData = this->fields.eventUIAssetData;
  p_eventUIAssetData = (BattleServantConfConponent_o *)&this->fields.eventUIAssetData;
  v21 = (System_Action_o *)eventUIAssetData;
  if ( eventUIAssetData )
  {
    p_eventUIAssetData->klass = 0LL;
    sub_B52920(p_eventUIAssetData, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    System_Action__Invoke(v21, 0LL);
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
  Il2CppObject *v9; // x0
  System_String_o *v10; // x20
  struct UIAtlas_o **p_eventUIDownloadAtlas; // x20
  AssetData_o *eventUIDownloadAtlas; // x21
  int32_t *p_eventId; // x19
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  int sprite; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42B0876 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&StringLiteral_6250/*"EventUI/Prefabs/{0}"*/);
    byte_42B0876 = 1;
  }
  if ( LOBYTE(this->fields.eventUILoadCallbackFunc) )
  {
    LOBYTE(this->fields.eventUILoadCallbackFunc) = 0;
    sprite = (int)this->fields.sprite;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sprite);
    v10 = System_String__Format((System_String_o *)StringLiteral_6250/*"EventUI/Prefabs/{0}"*/, v9, 0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(v10, 0LL);
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
      AssetManager__releaseAsset_30359936(eventUIDownloadAtlas, 0LL);
    }
  }
  *(_QWORD *)&this->fields.eventId = 0LL;
  p_eventId = &this->fields.eventId;
  sub_B52920((BattleServantConfConponent_o *)p_eventId, 0LL, v2, v3, v4, v5, v6, v7);
  *((_QWORD *)p_eventId - 1) = 0LL;
  sub_B52920((BattleServantConfConponent_o *)p_eventUIDownloadAtlas, 0LL, v14, v15, v16, v17, v18, v19);
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

  if ( (byte_42B0877 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B0877 = 1;
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
    sub_B52A5C(IsNullOrEmpty, v8);
  }
  if ( !sprite )
    goto LABEL_17;
  UISprite__set_spriteName(sprite, 0LL, 0LL);
  return 0;
}


void __fastcall CompleteMissionSprite___InitTarget_b__15_0(CompleteMissionSprite_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42B0878 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_19898/*"img_txt_target_panel"*/);
    byte_42B0878 = 1;
  }
  CompleteMissionSprite__SetEventUI(this, (UISprite_o *)this[1].klass, (System_String_o *)StringLiteral_19898/*"img_txt_target_panel"*/, v2);
}


void __fastcall CompleteMissionSprite___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42AE2B9 & 1) == 0 )
  {
    sub_B52984(&CompleteMissionSprite___c_TypeInfo);
    byte_42AE2B9 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(CompleteMissionSprite___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)CompleteMissionSprite___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
  CompleteMissionSprite_o *_4__this; // x19
  UISprite_o *klass; // x21
  Il2CppObject *v5; // x0
  System_String_o *v6; // x0
  int32_t eventId; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_42AE2BA & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    this = (CompleteMissionSprite___c__DisplayClass12_0_o *)sub_B52984(&StringLiteral_17254/*"button_mission_{0}"*/);
    byte_42AE2BA = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(this, method);
  klass = (UISprite_o *)_4__this[1].klass;
  eventId = v2->fields.eventId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v6 = System_String__Format((System_String_o *)StringLiteral_17254/*"button_mission_{0}"*/, v5, 0LL);
  CompleteMissionSprite__SetEventUI(_4__this, klass, v6, 0LL);
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
  CompleteMissionSprite_o *_4__this; // x19
  UISprite_o *klass; // x21
  Il2CppObject *v5; // x0
  System_String_o *v6; // x0
  int32_t eventId; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_42AE2BB & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    this = (CompleteMissionSprite___c__DisplayClass13_0_o *)sub_B52984(&StringLiteral_19628/*"img_flame_{0}"*/);
    byte_42AE2BB = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(this, method);
  klass = (UISprite_o *)_4__this[1].klass;
  eventId = v2->fields.eventId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v6 = System_String__Format((System_String_o *)StringLiteral_19628/*"img_flame_{0}"*/, v5, 0LL);
  CompleteMissionSprite__SetEventUI(_4__this, klass, v6, 0LL);
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
  int32_t v3; // w20
  struct UISprite_o *listBgSprite; // x8
  WebViewObject_o *Component_WebViewObject; // x21
  CompleteMissionSprite_o *_4__this; // x22
  Il2CppObject *v7; // x0
  CompleteMissionSprite_o *v8; // x20
  UISprite_o *klass; // x21
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  CommonUI_o *Instance; // x19
  AvalonSceneManager_c *v13; // x8
  float DEFAULT_FADE_TIME; // s8
  void *static_fields; // x8
  System_Action_o *v16; // x20
  Il2CppObject *v17; // x21
  struct CompleteMissionSprite___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  int32_t eventId; // [xsp+8h] [xbp-58h] BYREF
  int v26; // [xsp+Ch] [xbp-54h] BYREF

  v2 = this;
  if ( (byte_42AE2BC & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_CompleteMissionSprite___c__InitPanel_b__14_1__);
    sub_B52984(&CompleteMissionSprite___c_TypeInfo);
    sub_B52984(&StringLiteral_20691/*"mission_bg_{0}"*/);
    sub_B52984(&StringLiteral_20703/*"mission_on_{0}"*/);
    this = (CompleteMissionSprite___c__DisplayClass14_0_o *)sub_B52984(&StringLiteral_18739/*"event_tab_type5_0"*/);
    byte_42AE2BC = 1;
  }
  if ( v2->fields.panelCount > 0 )
  {
    v3 = 0;
    while ( 1 )
    {
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                                                                v3,
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
                                  (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      _4__this = v2->fields.__4__this;
      v26 = v3 + 100 * v2->fields.eventId + 1;
      v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)System_String__Format(
                                                                (System_String_o *)StringLiteral_20703/*"mission_on_{0}"*/,
                                                                v7,
                                                                0LL);
      if ( !_4__this )
        break;
      ++v3;
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)CompleteMissionSprite__SetEventUI(
                                                                _4__this,
                                                                (UISprite_o *)Component_WebViewObject,
                                                                (System_String_o *)this,
                                                                0LL);
      if ( v3 >= v2->fields.panelCount )
        goto LABEL_12;
    }
LABEL_28:
    sub_B52A5C(this, method);
  }
LABEL_12:
  v8 = v2->fields.__4__this;
  if ( !v8 )
    goto LABEL_28;
  klass = (UISprite_o *)v8[1].klass;
  eventId = v2->fields.eventId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v11 = System_String__Format((System_String_o *)StringLiteral_20691/*"mission_bg_{0}"*/, v10, 0LL);
  CompleteMissionSprite__SetEventUI(v8, klass, v11, 0LL);
  this = (CompleteMissionSprite___c__DisplayClass14_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_28;
  CompleteMissionSprite__SetEventUI(
    (CompleteMissionSprite_o *)this,
    v2->fields.listBgSprite,
    (System_String_o *)StringLiteral_18739/*"event_tab_type5_0"*/,
    0LL);
  this = (CompleteMissionSprite___c__DisplayClass14_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_28;
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v13 = AvalonSceneManager_TypeInfo;
  }
  this = (CompleteMissionSprite___c__DisplayClass14_0_o *)CompleteMissionSprite___c_TypeInfo;
  DEFAULT_FADE_TIME = v13->static_fields->DEFAULT_FADE_TIME;
  if ( (BYTE3(CompleteMissionSprite___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CompleteMissionSprite___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompleteMissionSprite___c_TypeInfo);
    this = (CompleteMissionSprite___c__DisplayClass14_0_o *)CompleteMissionSprite___c_TypeInfo;
  }
  static_fields = this[3].fields.listBgSprite;
  v16 = (System_Action_o *)*((_QWORD *)static_fields + 1);
  if ( !v16 )
  {
    if ( (this[6].fields.eventId & 0x4000000) != 0 && !this[4].fields.panelCount )
    {
      j_il2cpp_runtime_class_init_0(this);
      static_fields = CompleteMissionSprite___c_TypeInfo->static_fields;
    }
    v17 = *(Il2CppObject **)static_fields;
    v16 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v16, v17, Method_CompleteMissionSprite___c__InitPanel_b__14_1__, 0LL);
    v18 = CompleteMissionSprite___c_TypeInfo->static_fields;
    v18->__9__14_1 = v16;
    sub_B52920(
      (BattleServantConfConponent_o *)&v18->__9__14_1,
      (System_Int32_array **)v16,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  if ( !Instance )
    goto LABEL_28;
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v16, 0LL);
}