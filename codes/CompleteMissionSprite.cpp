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

  if ( (byte_438ACC0 & 1) == 0 )
  {
    sub_B775C4(&Method_AssetData_GetObjectList_GameObject___);
    sub_B775C4(&Method_AssetData_GetObject_GameObject____69465408);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    this = (CompleteMissionSprite_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438ACC0 = 1;
  }
  if ( !assetData )
    goto LABEL_14;
  this = (CompleteMissionSprite_o *)AssetData__GetObjectList_Texture2D_(
                                      assetData,
                                      (const MethodInfo_1C5FF90 *)Method_AssetData_GetObjectList_GameObject___);
  if ( this )
  {
    if ( this->fields.eventUILoadCallbackFunc )
    {
      Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 assetData,
                                                                 name,
                                                                 (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
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
                                (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
LABEL_14:
        sub_B7769C(this, assetData);
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

  if ( (byte_438ACBA & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_CompleteMissionSprite___c__DisplayClass12_0__InitBtn_b__0__);
    sub_B775C4(&CompleteMissionSprite___c__DisplayClass12_0_TypeInfo);
    byte_438ACBA = 1;
  }
  v5 = sub_B77694(CompleteMissionSprite___c__DisplayClass12_0_TypeInfo);
  CompleteMissionSprite___c__DisplayClass12_0___ctor((CompleteMissionSprite___c__DisplayClass12_0_o *)v5, 0LL);
  if ( !v5 )
    sub_B7769C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 24) = eventId;
  v14 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
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

  if ( (byte_438ACBB & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_CompleteMissionSprite___c__DisplayClass13_0__InitFrame_b__0__);
    sub_B775C4(&CompleteMissionSprite___c__DisplayClass13_0_TypeInfo);
    byte_438ACBB = 1;
  }
  v5 = sub_B77694(CompleteMissionSprite___c__DisplayClass13_0_TypeInfo);
  CompleteMissionSprite___c__DisplayClass13_0___ctor((CompleteMissionSprite___c__DisplayClass13_0_o *)v5, 0LL);
  if ( !v5 )
    sub_B7769C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 24) = eventId;
  v14 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
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

  if ( (byte_438ACBC & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_CompleteMissionSprite___c__DisplayClass14_0__InitPanel_b__0__);
    sub_B775C4(&CompleteMissionSprite___c__DisplayClass14_0_TypeInfo);
    byte_438ACBC = 1;
  }
  v9 = sub_B77694(CompleteMissionSprite___c__DisplayClass14_0_TypeInfo);
  CompleteMissionSprite___c__DisplayClass14_0___ctor((CompleteMissionSprite___c__DisplayClass14_0_o *)v9, 0LL);
  if ( !v9 )
    sub_B7769C(v10, v11);
  *(_DWORD *)(v9 + 16) = eventId;
  *(_QWORD *)(v9 + 24) = this;
  sub_B77560((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_DWORD *)(v9 + 32) = panelCount;
  *(_QWORD *)(v9 + 40) = listBgSprite;
  sub_B77560(
    (BattleServantConfConponent_o *)(v9 + 40),
    (System_Int32_array **)listBgSprite,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = *(_DWORD *)(v9 + 16);
  v25 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
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

  if ( (byte_438ACBD & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_CompleteMissionSprite__InitTarget_b__15_0__);
    byte_438ACBD = 1;
  }
  v5 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
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
  __int64 v17; // x2
  Il2CppObject *v18; // x0
  System_String_o *v19; // x21
  AssetLoader_LoadEndDataHandler_o *v20; // x22
  const MethodInfo *v21; // x2
  CompleteMissionSprite_o *v22; // x0
  int32_t v23; // w1
  UISprite_o *v24; // x2
  int32_t v25; // w3
  const MethodInfo *v26; // x4
  int32_t v27; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_438ACBE & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&Method_CompleteMissionSprite_LoadEventUIEnd__);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B775C4(&StringLiteral_6355/*"EventUI/Prefabs/{0}"*/);
    byte_438ACBE = 1;
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
      v22 = (CompleteMissionSprite_o *)sub_B77990(v10);
      CompleteMissionSprite__InitPanel(v22, v23, v24, v25, v26);
    }
    else
    {
      this->fields.eventUIAssetData = (struct AssetData_o *)v10;
      sub_B77560(
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
        v27 = eventId;
        v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v17);
        v19 = System_String__Format((System_String_o *)StringLiteral_6355/*"EventUI/Prefabs/{0}"*/, v18, 0LL);
        v20 = (AssetLoader_LoadEndDataHandler_o *)sub_B77694(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v20,
          (Il2CppObject *)this,
          Method_CompleteMissionSprite_LoadEventUIEnd__,
          0LL);
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        if ( !AssetManager__loadAssetStorage(v19, v20, loadParallelMax, 0LL) )
        {
          LOBYTE(this->fields.eventUILoadCallbackFunc) = 0;
          CompleteMissionSprite__LoadEventUIEnd(this, 0LL, v21);
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
  __int64 v10; // x2
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

  if ( (byte_438ACBF & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&StringLiteral_5519/*"DownloadEventUIAtlas{0}01"*/);
    byte_438ACBF = 1;
  }
  if ( LOBYTE(this->fields.eventUILoadCallbackFunc) )
  {
    this->fields.eventUIDownloadAtlas = (struct UIAtlas_o *)assetData;
    LOBYTE(this->fields.eventUILoadCallbackFunc) = 0;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.eventUIDownloadAtlas,
      (System_Int32_array **)assetData,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    sprite = (int)this->fields.sprite;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sprite, v10);
    v12 = System_String__Format((System_String_o *)StringLiteral_5519/*"DownloadEventUIAtlas{0}01"*/, v11, 0LL);
    UIAtlasFromAssetData = (System_Int32_array **)CompleteMissionSprite__CreateUIAtlasFromAssetData(
                                                    (CompleteMissionSprite_o *)v12,
                                                    assetData,
                                                    v12,
                                                    v13);
    *(_QWORD *)&this->fields.eventId = UIAtlasFromAssetData;
    sub_B77560(
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
    sub_B77560(p_eventUIAssetData, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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

  if ( (byte_438ACC1 & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&StringLiteral_6355/*"EventUI/Prefabs/{0}"*/);
    byte_438ACC1 = 1;
  }
  if ( LOBYTE(this->fields.eventUILoadCallbackFunc) )
  {
    LOBYTE(this->fields.eventUILoadCallbackFunc) = 0;
    sprite = (int)this->fields.sprite;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &sprite, v2);
    v10 = System_String__Format((System_String_o *)StringLiteral_6355/*"EventUI/Prefabs/{0}"*/, v9, 0LL);
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
      AssetManager__releaseAsset_24402476(eventUIDownloadAtlas, 0LL);
    }
  }
  *(_QWORD *)&this->fields.eventId = 0LL;
  p_eventId = &this->fields.eventId;
  sub_B77560((BattleServantConfConponent_o *)p_eventId, 0LL, v2, v3, v4, v5, v6, v7);
  *((_QWORD *)p_eventId - 1) = 0LL;
  sub_B77560((BattleServantConfConponent_o *)p_eventUIDownloadAtlas, 0LL, v14, v15, v16, v17, v18, v19);
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

  if ( (byte_438ACC2 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438ACC2 = 1;
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
    sub_B7769C(IsNullOrEmpty, v8);
  }
  if ( !sprite )
    goto LABEL_17;
  UISprite__set_spriteName(sprite, 0LL, 0LL);
  return 0;
}


void __fastcall CompleteMissionSprite___InitTarget_b__15_0(CompleteMissionSprite_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438ACC3 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_20154/*"img_txt_target_panel"*/);
    byte_438ACC3 = 1;
  }
  CompleteMissionSprite__SetEventUI(this, (UISprite_o *)this[1].klass, (System_String_o *)StringLiteral_20154/*"img_txt_target_panel"*/, v2);
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

  if ( (byte_43890DD & 1) == 0 )
  {
    sub_B775C4(&CompleteMissionSprite___c_TypeInfo);
    byte_43890DD = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(CompleteMissionSprite___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)CompleteMissionSprite___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
  __int64 v2; // x2
  CompleteMissionSprite___c__DisplayClass12_0_o *v3; // x20
  CompleteMissionSprite_o *_4__this; // x19
  UISprite_o *klass; // x21
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  int32_t eventId; // [xsp+Ch] [xbp-14h] BYREF

  v3 = this;
  if ( (byte_43890DE & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    this = (CompleteMissionSprite___c__DisplayClass12_0_o *)sub_B775C4(&StringLiteral_17475/*"button_mission_{0}"*/);
    byte_43890DE = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    sub_B7769C(this, method);
  klass = (UISprite_o *)_4__this[1].klass;
  eventId = v3->fields.eventId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v2);
  v7 = System_String__Format((System_String_o *)StringLiteral_17475/*"button_mission_{0}"*/, v6, 0LL);
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
  __int64 v2; // x2
  CompleteMissionSprite___c__DisplayClass13_0_o *v3; // x20
  CompleteMissionSprite_o *_4__this; // x19
  UISprite_o *klass; // x21
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  int32_t eventId; // [xsp+Ch] [xbp-14h] BYREF

  v3 = this;
  if ( (byte_43890DF & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    this = (CompleteMissionSprite___c__DisplayClass13_0_o *)sub_B775C4(&StringLiteral_19875/*"img_flame_{0}"*/);
    byte_43890DF = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    sub_B7769C(this, method);
  klass = (UISprite_o *)_4__this[1].klass;
  eventId = v3->fields.eventId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v2);
  v7 = System_String__Format((System_String_o *)StringLiteral_19875/*"img_flame_{0}"*/, v6, 0LL);
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
  __int64 v2; // x2
  CompleteMissionSprite___c__DisplayClass14_0_o *v3; // x19
  int32_t v4; // w20
  __int64 v5; // x8
  WebViewObject_o *Component_WebViewObject; // x21
  CompleteMissionSprite_o *_4__this; // x22
  __int64 v8; // x2
  Il2CppObject *v9; // x0
  CompleteMissionSprite_o *v10; // x20
  UISprite_o *klass; // x21
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  CommonUI_o *Instance; // x19
  AvalonSceneManager_c *v15; // x8
  float DEFAULT_FADE_TIME; // s8
  void *listBgSprite; // x8
  System_Action_o *v18; // x20
  Il2CppObject *v19; // x21
  struct CompleteMissionSprite___c_StaticFields *static_fields; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  int32_t eventId; // [xsp+8h] [xbp-58h] BYREF
  int v28; // [xsp+Ch] [xbp-54h] BYREF

  v3 = this;
  if ( (byte_43890E0 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_CompleteMissionSprite___c__InitPanel_b__14_1__);
    sub_B775C4(&CompleteMissionSprite___c_TypeInfo);
    sub_B775C4(&StringLiteral_20952/*"mission_bg_{0}"*/);
    sub_B775C4(&StringLiteral_20964/*"mission_on_{0}"*/);
    this = (CompleteMissionSprite___c__DisplayClass14_0_o *)sub_B775C4(&StringLiteral_18972/*"event_tab_type5_0"*/);
    byte_43890E0 = 1;
  }
  if ( v3->fields.panelCount > 0 )
  {
    v4 = 0;
    while ( 1 )
    {
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        break;
      v5 = *(_QWORD *)&this[26].fields.panelCount;
      if ( !v5 )
        break;
      this = *(CompleteMissionSprite___c__DisplayClass14_0_o **)(v5 + 24);
      if ( !this )
        break;
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)UnityEngine_Transform__GetChild(
                                                                (UnityEngine_Transform_o *)this,
                                                                v4,
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
                                  (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      _4__this = v3->fields.__4__this;
      v28 = v4 + 100 * v3->fields.eventId + 1;
      v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v8);
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)System_String__Format(
                                                                (System_String_o *)StringLiteral_20964/*"mission_on_{0}"*/,
                                                                v9,
                                                                0LL);
      if ( !_4__this )
        break;
      ++v4;
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)CompleteMissionSprite__SetEventUI(
                                                                _4__this,
                                                                (UISprite_o *)Component_WebViewObject,
                                                                (System_String_o *)this,
                                                                0LL);
      if ( v4 >= v3->fields.panelCount )
        goto LABEL_12;
    }
LABEL_28:
    sub_B7769C(this, method);
  }
LABEL_12:
  v10 = v3->fields.__4__this;
  if ( !v10 )
    goto LABEL_28;
  klass = (UISprite_o *)v10[1].klass;
  eventId = v3->fields.eventId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v2);
  v13 = System_String__Format((System_String_o *)StringLiteral_20952/*"mission_bg_{0}"*/, v12, 0LL);
  CompleteMissionSprite__SetEventUI(v10, klass, v13, 0LL);
  this = (CompleteMissionSprite___c__DisplayClass14_0_o *)v3->fields.__4__this;
  if ( !this )
    goto LABEL_28;
  CompleteMissionSprite__SetEventUI(
    (CompleteMissionSprite_o *)this,
    v3->fields.listBgSprite,
    (System_String_o *)StringLiteral_18972/*"event_tab_type5_0"*/,
    0LL);
  this = (CompleteMissionSprite___c__DisplayClass14_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_28;
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v15 = AvalonSceneManager_TypeInfo;
  }
  this = (CompleteMissionSprite___c__DisplayClass14_0_o *)CompleteMissionSprite___c_TypeInfo;
  DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
  if ( (BYTE3(CompleteMissionSprite___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CompleteMissionSprite___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompleteMissionSprite___c_TypeInfo);
    this = (CompleteMissionSprite___c__DisplayClass14_0_o *)CompleteMissionSprite___c_TypeInfo;
  }
  listBgSprite = this[3].fields.listBgSprite;
  v18 = (System_Action_o *)*((_QWORD *)listBgSprite + 1);
  if ( !v18 )
  {
    if ( (this[6].fields.eventId & 0x4000000) != 0 && !this[4].fields.panelCount )
    {
      j_il2cpp_runtime_class_init_0(this);
      listBgSprite = CompleteMissionSprite___c_TypeInfo->static_fields;
    }
    v19 = *(Il2CppObject **)listBgSprite;
    v18 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v18, v19, Method_CompleteMissionSprite___c__InitPanel_b__14_1__, 0LL);
    static_fields = CompleteMissionSprite___c_TypeInfo->static_fields;
    static_fields->__9__14_1 = v18;
    sub_B77560(
      (BattleServantConfConponent_o *)&static_fields->__9__14_1,
      (System_Int32_array **)v18,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  if ( !Instance )
    goto LABEL_28;
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v18, 0LL);
}