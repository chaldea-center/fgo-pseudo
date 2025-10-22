void CompleteMissionSprite___ctor(CompleteMissionSprite_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


UIAtlas_o *CompleteMissionSprite__CreateUIAtlasFromAssetData(
        CompleteMissionSprite_o *this,
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo *method)
{
  System_Object_array *ObjectList_object; // x0
  Il2CppObject *Object_object__51228128; // x19

  if ( (byte_4C55892 & 1) == 0 )
  {
    sub_1C3E564(&Method_AssetData_GetObjectList_GameObject___);
    sub_1C3E564(&Method_AssetData_GetObject_GameObject____78185152);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    this = (CompleteMissionSprite_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C55892 = 1;
  }
  if ( !assetData )
    goto LABEL_12;
  ObjectList_object = AssetData__GetObjectList_object_(
                        assetData,
                        (const MethodInfo_30DAF98 *)Method_AssetData_GetObjectList_GameObject___);
  if ( !ObjectList_object || !ObjectList_object->max_length )
    return 0;
  Object_object__51228128 = AssetData__GetObject_object__51228128(
                              assetData,
                              name,
                              (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_GameObject____78185152);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (CompleteMissionSprite_o *)UnityEngine_Object__op_Equality(
                                      (UnityEngine_Object_o *)Object_object__51228128,
                                      0,
                                      0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !Object_object__51228128 )
LABEL_12:
    sub_1C3E7C0(this, assetData);
  return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                        (UnityEngine_GameObject_o *)Object_object__51228128,
                        (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
}


void CompleteMissionSprite__InitBtn(CompleteMissionSprite_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Action_o *v10; // x22
  const MethodInfo *v11; // x4

  if ( (byte_4C5588C & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_CompleteMissionSprite___c__DisplayClass12_0__InitBtn_b__0__);
    sub_1C3E564(&CompleteMissionSprite___c__DisplayClass12_0_TypeInfo);
    byte_4C5588C = 1;
  }
  v5 = sub_1C3E7B0(CompleteMissionSprite___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C3E7C0(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_DWORD *)(v5 + 24) = eventId;
  v10 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)v5, Method_CompleteMissionSprite___c__DisplayClass12_0__InitBtn_b__0__, 0);
  CompleteMissionSprite__LoadEventUI(this, eventId, v10, 1, v11);
}


void CompleteMissionSprite__InitFrame(CompleteMissionSprite_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Action_o *v10; // x22
  const MethodInfo *v11; // x4

  if ( (byte_4C5588D & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_CompleteMissionSprite___c__DisplayClass13_0__InitFrame_b__0__);
    sub_1C3E564(&CompleteMissionSprite___c__DisplayClass13_0_TypeInfo);
    byte_4C5588D = 1;
  }
  v5 = sub_1C3E7B0(CompleteMissionSprite___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C3E7C0(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_DWORD *)(v5 + 24) = eventId;
  v10 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)v5, Method_CompleteMissionSprite___c__DisplayClass13_0__InitFrame_b__0__, 0);
  CompleteMissionSprite__LoadEventUI(this, eventId, v10, 1, v11);
}


void CompleteMissionSprite__InitPanel(
        CompleteMissionSprite_o *this,
        int32_t eventId,
        UISprite_o *listBgSprite,
        int32_t panelCount,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w20
  System_Action_o *v17; // x21
  const MethodInfo *v18; // x4

  if ( (byte_4C5588E & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_CompleteMissionSprite___c__DisplayClass14_0__InitPanel_b__0__);
    sub_1C3E564(&CompleteMissionSprite___c__DisplayClass14_0_TypeInfo);
    byte_4C5588E = 1;
  }
  v9 = sub_1C3E7B0(CompleteMissionSprite___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_1C3E7C0(v10, v11);
  *(_DWORD *)(v9 + 16) = eventId;
  *(_QWORD *)(v9 + 24) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 24), (int32_t)this, v12, v13);
  *(_DWORD *)(v9 + 32) = panelCount;
  *(_QWORD *)(v9 + 40) = listBgSprite;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 40), (int32_t)listBgSprite, v14, v15);
  v16 = *(_DWORD *)(v9 + 16);
  v17 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)v9, Method_CompleteMissionSprite___c__DisplayClass14_0__InitPanel_b__0__, 0);
  CompleteMissionSprite__LoadEventUI(this, v16, v17, 1, v18);
}


void CompleteMissionSprite__InitTarget(CompleteMissionSprite_o *this, int32_t eventId, const MethodInfo *method)
{
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x4

  if ( (byte_4C5588F & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_CompleteMissionSprite__InitTarget_b__15_0__);
    byte_4C5588F = 1;
  }
  v5 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_CompleteMissionSprite__InitTarget_b__15_0__, 0);
  CompleteMissionSprite__LoadEventUI(this, eventId, v5, 1, v6);
}


void CompleteMissionSprite__LoadEventUI(
        CompleteMissionSprite_o *this,
        int32_t eventId,
        System_Action_o *callback,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  AssetData_o *eventUIAssetData; // x0
  long double v10; // q0
  struct System_Action_o **p_eventUILoadCallbackFunc; // x23
  System_Delegate_o *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Action_c *v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x5
  __int64 v20; // x6
  __int64 v21; // x7
  Il2CppObject *v22; // x0
  System_String_o *v23; // x21
  AssetLoader_LoadEndDataHandler_o *v24; // x22
  const MethodInfo *v25; // x2
  int32_t v26; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C55890 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&Method_CompleteMissionSprite_LoadEventUIEnd__);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C3E564(&StringLiteral_6274/*"EventUI/Prefabs/{0}"*/);
    byte_4C55890 = 1;
  }
  eventUIAssetData = this->fields.eventUIAssetData;
  if ( eventUIAssetData && !AssetData__get_IsEmpty(eventUIAssetData, 0) )
    goto LABEL_9;
  p_eventUILoadCallbackFunc = &this->fields.eventUILoadCallbackFunc;
  v12 = System_Delegate__Combine(
          (System_Delegate_o *)this->fields.eventUILoadCallbackFunc,
          (System_Delegate_o *)callback,
          0);
  if ( v12 )
  {
    v15 = System_Action_TypeInfo;
    if ( (System_Action_c *)v12->klass != System_Action_TypeInfo
      || (*p_eventUILoadCallbackFunc = (struct System_Action_o *)v12, (System_Action_c *)v12->klass != v15) )
    {
      v10 = sub_1C3EA80(v12);
LABEL_9:
      if ( callback )
        ((void (__fastcall *)(intptr_t, intptr_t, long double))callback->fields.invoke_impl)(
          callback->fields.method_code,
          callback->fields.method,
          v10);
      return;
    }
  }
  else
  {
    *p_eventUILoadCallbackFunc = 0;
  }
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.eventUILoadCallbackFunc, (int32_t)v12, v13, v14);
  if ( !this->fields.isEventUILoad )
  {
    this->fields.eventId = eventId;
    this->fields.isEventUILoad = 1;
    v26 = eventId;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v16, v17, v18, v19, v20, v21);
    v23 = System_String__Format((System_String_o *)StringLiteral_6274/*"EventUI/Prefabs/{0}"*/, v22, 0);
    v24 = (AssetLoader_LoadEndDataHandler_o *)sub_1C3E7B0(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v24, (Il2CppObject *)this, Method_CompleteMissionSprite_LoadEventUIEnd__, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( !AssetManager__loadAssetStorage(v23, v24, loadParallelMax, 0) )
    {
      this->fields.isEventUILoad = 0;
      CompleteMissionSprite__LoadEventUIEnd(this, 0, v25);
    }
  }
}


void CompleteMissionSprite__LoadEventUIEnd(
        CompleteMissionSprite_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  __int64 v9; // x5
  __int64 v10; // x6
  __int64 v11; // x7
  Il2CppObject *v12; // x0
  CompleteMissionSprite_o *v13; // x0
  const MethodInfo *v14; // x3
  struct UIAtlas_o *UIAtlasFromAssetData; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  CGThumbnailListItem_o *p_eventUILoadCallbackFunc; // x19
  struct System_Action_o *v19; // x20
  struct System_Action_o *eventUILoadCallbackFunc; // t1
  int32_t eventId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C55891 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&StringLiteral_5346/*"DownloadEventUIAtlas{0}01"*/);
    byte_4C55891 = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 0;
    this->fields.eventUIAssetData = assetData;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.eventUIAssetData, (int32_t)assetData, (int32_t)method, v3);
    eventId = this->fields.eventId;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v6, v7, v8, v9, v10, v11);
    v13 = (CompleteMissionSprite_o *)System_String__Format((System_String_o *)StringLiteral_5346/*"DownloadEventUIAtlas{0}01"*/, v12, 0);
    UIAtlasFromAssetData = CompleteMissionSprite__CreateUIAtlasFromAssetData(
                             v13,
                             assetData,
                             (System_String_o *)v13,
                             v14);
    this->fields.eventUIDownloadAtlas = UIAtlasFromAssetData;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.eventUIDownloadAtlas, (int32_t)UIAtlasFromAssetData, v16, v17);
  }
  eventUILoadCallbackFunc = this->fields.eventUILoadCallbackFunc;
  p_eventUILoadCallbackFunc = (CGThumbnailListItem_o *)&this->fields.eventUILoadCallbackFunc;
  v19 = eventUILoadCallbackFunc;
  if ( eventUILoadCallbackFunc )
  {
    p_eventUILoadCallbackFunc->klass = 0;
    sub_1C3E508(p_eventUILoadCallbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))v19->fields.invoke_impl)(v19->fields.method_code, v19->fields.method);
  }
}


void CompleteMissionSprite__ReleaseEventUI(CompleteMissionSprite_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  Il2CppObject *v9; // x0
  System_String_o *v10; // x20
  AssetData_o *eventUIAssetData; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t eventId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C55893 & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&StringLiteral_6274/*"EventUI/Prefabs/{0}"*/);
    byte_4C55893 = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 0;
    eventId = this->fields.eventId;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v2, v3, v4, v5, v6, v7);
    v10 = System_String__Format((System_String_o *)StringLiteral_6274/*"EventUI/Prefabs/{0}"*/, v9, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v10, 0);
  }
  else
  {
    eventUIAssetData = this->fields.eventUIAssetData;
    if ( eventUIAssetData )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_40580972(eventUIAssetData, 0);
    }
  }
  this->fields.eventUIDownloadAtlas = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.eventUIDownloadAtlas, 0, v2, v3);
  this->fields.eventUIAssetData = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.eventUIAssetData, 0, v12, v13);
}


bool CompleteMissionSprite__SetEventUI(
        CompleteMissionSprite_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  UIAtlas_o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *eventUIDownloadAtlas; // x22
  bool v10; // w21

  if ( (byte_4C55894 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C55894 = 1;
  }
  IsNullOrEmpty = (UIAtlas_o *)System_String__IsNullOrEmpty(spriteName, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    eventUIDownloadAtlas = (UnityEngine_Object_o *)this->fields.eventUIDownloadAtlas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    IsNullOrEmpty = (UIAtlas_o *)UnityEngine_Object__op_Equality(eventUIDownloadAtlas, 0, 0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
    {
      IsNullOrEmpty = this->fields.eventUIDownloadAtlas;
      if ( IsNullOrEmpty )
      {
        IsNullOrEmpty = (UIAtlas_o *)UIAtlas__GetSprite(IsNullOrEmpty, spriteName, 0);
        if ( IsNullOrEmpty )
        {
          if ( sprite )
          {
            UISprite__set_atlas(sprite, this->fields.eventUIDownloadAtlas, 0);
            goto LABEL_9;
          }
        }
        else if ( sprite )
        {
          spriteName = 0;
          v10 = 0;
          goto LABEL_10;
        }
      }
LABEL_17:
      sub_1C3E7C0(IsNullOrEmpty, v8);
    }
  }
  if ( !sprite )
    goto LABEL_17;
  spriteName = 0;
LABEL_9:
  v10 = 1;
LABEL_10:
  UISprite__set_spriteName(sprite, spriteName, 0);
  return v10;
}


void CompleteMissionSprite___InitTarget_b__15_0(CompleteMissionSprite_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C55895 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_20745/*"img_txt_target_panel"*/);
    byte_4C55895 = 1;
  }
  CompleteMissionSprite__SetEventUI(this, this->fields.sprite, (System_String_o *)StringLiteral_20745/*"img_txt_target_panel"*/, v2);
}


void CompleteMissionSprite___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C55896 & 1) == 0 )
  {
    sub_1C3E564(&CompleteMissionSprite___c_TypeInfo);
    byte_4C55896 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(CompleteMissionSprite___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CompleteMissionSprite___c_TypeInfo->static_fields->__9 = (struct CompleteMissionSprite___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)CompleteMissionSprite___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void CompleteMissionSprite___c___ctor(CompleteMissionSprite___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CompleteMissionSprite___c___InitPanel_b__14_1(CompleteMissionSprite___c_o *this, const MethodInfo *method)
{
  ;
}


void CompleteMissionSprite___c__DisplayClass12_0___ctor(
        CompleteMissionSprite___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CompleteMissionSprite___c__DisplayClass12_0___InitBtn_b__0(
        CompleteMissionSprite___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  CompleteMissionSprite___c__DisplayClass12_0_o *v8; // x20
  CompleteMissionSprite_o *_4__this; // x19
  UISprite_o *sprite; // x21
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  const MethodInfo *v13; // x3
  int32_t eventId; // [xsp+Ch] [xbp-24h] BYREF

  v8 = this;
  if ( (byte_4C55897 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    this = (CompleteMissionSprite___c__DisplayClass12_0_o *)sub_1C3E564(&StringLiteral_17669/*"button_mission_{0}"*/);
    byte_4C55897 = 1;
  }
  _4__this = v8->fields.__4__this;
  if ( !_4__this )
    sub_1C3E7C0(this, method);
  sprite = _4__this->fields.sprite;
  eventId = v8->fields.eventId;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v2, v3, v4, v5, v6, v7);
  v12 = System_String__Format((System_String_o *)StringLiteral_17669/*"button_mission_{0}"*/, v11, 0);
  CompleteMissionSprite__SetEventUI(_4__this, sprite, v12, v13);
}


void CompleteMissionSprite___c__DisplayClass13_0___ctor(
        CompleteMissionSprite___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CompleteMissionSprite___c__DisplayClass13_0___InitFrame_b__0(
        CompleteMissionSprite___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  CompleteMissionSprite___c__DisplayClass13_0_o *v8; // x20
  CompleteMissionSprite_o *_4__this; // x19
  UISprite_o *sprite; // x21
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  const MethodInfo *v13; // x3
  int32_t eventId; // [xsp+Ch] [xbp-24h] BYREF

  v8 = this;
  if ( (byte_4C55898 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    this = (CompleteMissionSprite___c__DisplayClass13_0_o *)sub_1C3E564(&StringLiteral_20406/*"img_flame_{0}"*/);
    byte_4C55898 = 1;
  }
  _4__this = v8->fields.__4__this;
  if ( !_4__this )
    sub_1C3E7C0(this, method);
  sprite = _4__this->fields.sprite;
  eventId = v8->fields.eventId;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v2, v3, v4, v5, v6, v7);
  v12 = System_String__Format((System_String_o *)StringLiteral_20406/*"img_flame_{0}"*/, v11, 0);
  CompleteMissionSprite__SetEventUI(_4__this, sprite, v12, v13);
}


void CompleteMissionSprite___c__DisplayClass14_0___ctor(
        CompleteMissionSprite___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CompleteMissionSprite___c__DisplayClass14_0___InitPanel_b__0(
        CompleteMissionSprite___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  CompleteMissionSprite___c__DisplayClass14_0_o *v8; // x19
  int32_t v9; // w20
  __int64 v10; // x8
  Il2CppObject *Component_object; // x21
  CompleteMissionSprite_o *_4__this; // x22
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  Il2CppObject *v19; // x0
  const MethodInfo *v20; // x3
  CompleteMissionSprite_o *v21; // x20
  UISprite_o *sprite; // x21
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x3
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v28; // x8
  CommonUI_o *v29; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *monitor; // x20
  Il2CppObject *klass; // x21
  struct CompleteMissionSprite___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  int32_t eventId; // [xsp+8h] [xbp-58h] BYREF
  int v37; // [xsp+Ch] [xbp-54h] BYREF

  v8 = this;
  if ( (byte_4C55899 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&AvalonSceneManager_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_CompleteMissionSprite___c__InitPanel_b__14_1__);
    sub_1C3E564(&CompleteMissionSprite___c_TypeInfo);
    sub_1C3E564(&StringLiteral_21632/*"mission_bg_{0}"*/);
    sub_1C3E564(&StringLiteral_21644/*"mission_on_{0}"*/);
    this = (CompleteMissionSprite___c__DisplayClass14_0_o *)sub_1C3E564(&StringLiteral_19310/*"event_tab_type5_0"*/);
    byte_4C55899 = 1;
  }
  if ( v8->fields.panelCount >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        break;
      v10 = *(_QWORD *)&this[28].fields.panelCount;
      if ( !v10 )
        break;
      this = *(CompleteMissionSprite___c__DisplayClass14_0_o **)(v10 + 32);
      if ( !this )
        break;
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)UnityEngine_Transform__GetChild(
                                                                (UnityEngine_Transform_o *)this,
                                                                v9,
                                                                0);
      if ( !this )
        break;
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)UnityEngine_Transform__GetChild(
                                                                (UnityEngine_Transform_o *)this,
                                                                0,
                                                                0);
      if ( !this )
        break;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)this,
                           (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      _4__this = v8->fields.__4__this;
      v37 = v9 + 100 * v8->fields.eventId + 1;
      v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v13, v14, v15, v16, v17, v18);
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)System_String__Format(
                                                                (System_String_o *)StringLiteral_21644/*"mission_on_{0}"*/,
                                                                v19,
                                                                0);
      if ( !_4__this )
        break;
      ++v9;
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)CompleteMissionSprite__SetEventUI(
                                                                _4__this,
                                                                (UISprite_o *)Component_object,
                                                                (System_String_o *)this,
                                                                v20);
      if ( v9 >= v8->fields.panelCount )
        goto LABEL_12;
    }
LABEL_25:
    sub_1C3E7C0(this, method);
  }
LABEL_12:
  v21 = v8->fields.__4__this;
  if ( !v21 )
    goto LABEL_25;
  sprite = v21->fields.sprite;
  eventId = v8->fields.eventId;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v2, v3, v4, v5, v6, v7);
  v24 = System_String__Format((System_String_o *)StringLiteral_21632/*"mission_bg_{0}"*/, v23, 0);
  CompleteMissionSprite__SetEventUI(v21, sprite, v24, v25);
  this = (CompleteMissionSprite___c__DisplayClass14_0_o *)v8->fields.__4__this;
  if ( !this )
    goto LABEL_25;
  CompleteMissionSprite__SetEventUI(
    (CompleteMissionSprite_o *)this,
    v8->fields.listBgSprite,
    (System_String_o *)StringLiteral_19310/*"event_tab_type5_0"*/,
    v26);
  this = (CompleteMissionSprite___c__DisplayClass14_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_25;
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v28 = AvalonSceneManager_TypeInfo;
  v29 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v28 = AvalonSceneManager_TypeInfo;
  }
  this = (CompleteMissionSprite___c__DisplayClass14_0_o *)CompleteMissionSprite___c_TypeInfo;
  DEFAULT_FADE_TIME = v28->static_fields->DEFAULT_FADE_TIME;
  if ( !CompleteMissionSprite___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompleteMissionSprite___c_TypeInfo);
    this = (CompleteMissionSprite___c__DisplayClass14_0_o *)CompleteMissionSprite___c_TypeInfo;
  }
  monitor = (System_Action_o *)this[3].fields.listBgSprite->monitor;
  if ( !monitor )
  {
    if ( !this[4].fields.panelCount )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)CompleteMissionSprite___c_TypeInfo;
    }
    klass = (Il2CppObject *)this[3].fields.listBgSprite->klass;
    monitor = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(monitor, klass, Method_CompleteMissionSprite___c__InitPanel_b__14_1__, 0);
    static_fields = CompleteMissionSprite___c_TypeInfo->static_fields;
    static_fields->__9__14_1 = monitor;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__14_1, (int32_t)monitor, v34, v35);
  }
  if ( !v29 )
    goto LABEL_25;
  CommonUI__maskFadein(v29, DEFAULT_FADE_TIME, monitor, 0);
}