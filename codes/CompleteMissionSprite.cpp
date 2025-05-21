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
  System_Object_array *ObjectList_object; // x0
  Il2CppObject *Object_object__50417328; // x19

  if ( (byte_4B43658 & 1) == 0 )
  {
    sub_1BDB878(&Method_AssetData_GetObjectList_GameObject___, assetData);
    sub_1BDB878(&Method_AssetData_GetObject_GameObject____77074016, v6);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v7);
    this = (CompleteMissionSprite_o *)sub_1BDB878(&UnityEngine_Object_TypeInfo, v8);
    byte_4B43658 = 1;
  }
  if ( !assetData )
    goto LABEL_12;
  ObjectList_object = AssetData__GetObjectList_object_(
                        assetData,
                        (const MethodInfo_3015068 *)Method_AssetData_GetObjectList_GameObject___);
  if ( !ObjectList_object || !*(_QWORD *)&ObjectList_object->max_length )
    return 0LL;
  Object_object__50417328 = AssetData__GetObject_object__50417328(
                              assetData,
                              name,
                              (const MethodInfo_3014EB0 *)Method_AssetData_GetObject_GameObject____77074016);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (CompleteMissionSprite_o *)UnityEngine_Object__op_Equality(
                                      (UnityEngine_Object_o *)Object_object__50417328,
                                      0LL,
                                      0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0LL;
  if ( !Object_object__50417328 )
LABEL_12:
    sub_1BDBAD4(this, assetData);
  return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                        (UnityEngine_GameObject_o *)Object_object__50417328,
                        (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Action_o *v12; // x22
  const MethodInfo *v13; // x4

  if ( (byte_4B43652 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1BDB878(&Method_CompleteMissionSprite___c__DisplayClass12_0__InitBtn_b__0__, v5);
    sub_1BDB878(&CompleteMissionSprite___c__DisplayClass12_0_TypeInfo, v6);
    byte_4B43652 = 1;
  }
  v7 = sub_1BDBAC4(CompleteMissionSprite___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1BDBAD4(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_DWORD *)(v7 + 24) = eventId;
  v12 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)v7, Method_CompleteMissionSprite___c__DisplayClass12_0__InitBtn_b__0__, 0LL);
  CompleteMissionSprite__LoadEventUI(this, eventId, v12, 1, v13);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Action_o *v12; // x22
  const MethodInfo *v13; // x4

  if ( (byte_4B43653 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1BDB878(&Method_CompleteMissionSprite___c__DisplayClass13_0__InitFrame_b__0__, v5);
    sub_1BDB878(&CompleteMissionSprite___c__DisplayClass13_0_TypeInfo, v6);
    byte_4B43653 = 1;
  }
  v7 = sub_1BDBAC4(CompleteMissionSprite___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1BDBAD4(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_DWORD *)(v7 + 24) = eventId;
  v12 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)v7,
    Method_CompleteMissionSprite___c__DisplayClass13_0__InitFrame_b__0__,
    0LL);
  CompleteMissionSprite__LoadEventUI(this, eventId, v12, 1, v13);
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
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w20
  System_Action_o *v19; // x21
  const MethodInfo *v20; // x4

  if ( (byte_4B43654 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1BDB878(&Method_CompleteMissionSprite___c__DisplayClass14_0__InitPanel_b__0__, v9);
    sub_1BDB878(&CompleteMissionSprite___c__DisplayClass14_0_TypeInfo, v10);
    byte_4B43654 = 1;
  }
  v11 = sub_1BDBAC4(CompleteMissionSprite___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1BDBAD4(v12, v13);
  *(_DWORD *)(v11 + 16) = eventId;
  *(_QWORD *)(v11 + 24) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v11 + 24), (int32_t)this, v14, v15);
  *(_DWORD *)(v11 + 32) = panelCount;
  *(_QWORD *)(v11 + 40) = listBgSprite;
  sub_1BDB81C((CGThumbnailListItem_o *)(v11 + 40), (int32_t)listBgSprite, v16, v17);
  v18 = *(_DWORD *)(v11 + 16);
  v19 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v11,
    Method_CompleteMissionSprite___c__DisplayClass14_0__InitPanel_b__0__,
    0LL);
  CompleteMissionSprite__LoadEventUI(this, v18, v19, 1, v20);
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

  if ( (byte_4B43655 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1BDB878(&Method_CompleteMissionSprite__InitTarget_b__15_0__, v5);
    byte_4B43655 = 1;
  }
  v6 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
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
  AssetData_o *eventUIAssetData; // x0
  long double v15; // q0
  struct System_Action_o **p_eventUILoadCallbackFunc; // x23
  System_Delegate_o *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Action_c *v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  Il2CppObject *v24; // x0
  System_String_o *v25; // x21
  AssetLoader_LoadEndDataHandler_o *v26; // x22
  const MethodInfo *v27; // x2
  int32_t v28; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B43656 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1BDB878(&AssetManager_TypeInfo, v9);
    sub_1BDB878(&Method_CompleteMissionSprite_LoadEventUIEnd__, v10);
    sub_1BDB878(&int_TypeInfo, v11);
    sub_1BDB878(&AssetLoader_LoadEndDataHandler_TypeInfo, v12);
    sub_1BDB878(&StringLiteral_6282/*"EventUI/Prefabs/{0}"*/, v13);
    byte_4B43656 = 1;
  }
  eventUIAssetData = this->fields.eventUIAssetData;
  if ( eventUIAssetData && !AssetData__get_IsEmpty(eventUIAssetData, 0LL) )
    goto LABEL_9;
  p_eventUILoadCallbackFunc = &this->fields.eventUILoadCallbackFunc;
  v17 = System_Delegate__Combine(
          (System_Delegate_o *)this->fields.eventUILoadCallbackFunc,
          (System_Delegate_o *)callback,
          0LL);
  if ( v17 )
  {
    v20 = System_Action_TypeInfo;
    if ( (System_Action_c *)v17->klass != System_Action_TypeInfo
      || (*p_eventUILoadCallbackFunc = (struct System_Action_o *)v17, (System_Action_c *)v17->klass != v20) )
    {
      v15 = sub_1BDBD94(v17);
LABEL_9:
      if ( callback )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, long double))callback->fields.m_target)(
          callback->fields.original_method_info,
          *(_QWORD *)&callback->fields.extra_arg,
          v15);
      return;
    }
  }
  else
  {
    *p_eventUILoadCallbackFunc = 0LL;
  }
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.eventUILoadCallbackFunc, (int32_t)v17, v18, v19);
  if ( !this->fields.isEventUILoad )
  {
    this->fields.eventId = eventId;
    this->fields.isEventUILoad = 1;
    v28 = eventId;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v21, v22, v23);
    v25 = System_String__Format((System_String_o *)StringLiteral_6282/*"EventUI/Prefabs/{0}"*/, v24, 0LL);
    v26 = (AssetLoader_LoadEndDataHandler_o *)sub_1BDBAC4(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v26, (Il2CppObject *)this, Method_CompleteMissionSprite_LoadEventUIEnd__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( !AssetManager__loadAssetStorage(v25, v26, loadParallelMax, 0LL) )
    {
      this->fields.isEventUILoad = 0;
      CompleteMissionSprite__LoadEventUIEnd(this, 0LL, v27);
    }
  }
}


void __fastcall CompleteMissionSprite__LoadEventUIEnd(
        CompleteMissionSprite_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  Il2CppObject *v10; // x0
  CompleteMissionSprite_o *v11; // x0
  const MethodInfo *v12; // x3
  struct UIAtlas_o *UIAtlasFromAssetData; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  CGThumbnailListItem_o *p_eventUILoadCallbackFunc; // x19
  struct System_Action_o *v17; // x20
  struct System_Action_o *eventUILoadCallbackFunc; // t1
  int32_t eventId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B43657 & 1) == 0 )
  {
    sub_1BDB878(&int_TypeInfo, assetData);
    sub_1BDB878(&StringLiteral_5381/*"DownloadEventUIAtlas{0}01"*/, v6);
    byte_4B43657 = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 0;
    this->fields.eventUIAssetData = assetData;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.eventUIAssetData, (int32_t)assetData, (int32_t)method, v3);
    eventId = this->fields.eventId;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v7, v8, v9);
    v11 = (CompleteMissionSprite_o *)System_String__Format((System_String_o *)StringLiteral_5381/*"DownloadEventUIAtlas{0}01"*/, v10, 0LL);
    UIAtlasFromAssetData = CompleteMissionSprite__CreateUIAtlasFromAssetData(
                             v11,
                             assetData,
                             (System_String_o *)v11,
                             v12);
    this->fields.eventUIDownloadAtlas = UIAtlasFromAssetData;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.eventUIDownloadAtlas, (int32_t)UIAtlasFromAssetData, v14, v15);
  }
  eventUILoadCallbackFunc = this->fields.eventUILoadCallbackFunc;
  p_eventUILoadCallbackFunc = (CGThumbnailListItem_o *)&this->fields.eventUILoadCallbackFunc;
  v17 = eventUILoadCallbackFunc;
  if ( eventUILoadCallbackFunc )
  {
    p_eventUILoadCallbackFunc->klass = 0LL;
    sub_1BDB81C(p_eventUILoadCallbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v17->fields.m_target)(
      v17->fields.original_method_info,
      *(_QWORD *)&v17->fields.extra_arg);
  }
}


void __fastcall CompleteMissionSprite__ReleaseEventUI(CompleteMissionSprite_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *v8; // x0
  System_String_o *v9; // x20
  AssetData_o *eventUIAssetData; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t eventId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B43659 & 1) == 0 )
  {
    sub_1BDB878(&AssetManager_TypeInfo, method);
    sub_1BDB878(&int_TypeInfo, v6);
    sub_1BDB878(&StringLiteral_6282/*"EventUI/Prefabs/{0}"*/, v7);
    byte_4B43659 = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 0;
    eventId = this->fields.eventId;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v2, v3, v4);
    v9 = System_String__Format((System_String_o *)StringLiteral_6282/*"EventUI/Prefabs/{0}"*/, v8, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v9, 0LL);
  }
  else
  {
    eventUIAssetData = this->fields.eventUIAssetData;
    if ( eventUIAssetData )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_39554172(eventUIAssetData, 0LL);
    }
  }
  this->fields.eventUIDownloadAtlas = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.eventUIDownloadAtlas, 0, v2, v3);
  this->fields.eventUIAssetData = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.eventUIAssetData, 0, v11, v12);
}


bool __fastcall CompleteMissionSprite__SetEventUI(
        CompleteMissionSprite_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  UIAtlas_o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *eventUIDownloadAtlas; // x22
  bool v10; // w21

  if ( (byte_4B4365A & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, sprite);
    byte_4B4365A = 1;
  }
  IsNullOrEmpty = (UIAtlas_o *)System_String__IsNullOrEmpty(spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    eventUIDownloadAtlas = (UnityEngine_Object_o *)this->fields.eventUIDownloadAtlas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    IsNullOrEmpty = (UIAtlas_o *)UnityEngine_Object__op_Equality(eventUIDownloadAtlas, 0LL, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
    {
      IsNullOrEmpty = this->fields.eventUIDownloadAtlas;
      if ( IsNullOrEmpty )
      {
        IsNullOrEmpty = (UIAtlas_o *)UIAtlas__GetSprite(IsNullOrEmpty, spriteName, 0LL);
        if ( IsNullOrEmpty )
        {
          if ( sprite )
          {
            UISprite__set_atlas(sprite, this->fields.eventUIDownloadAtlas, 0LL);
            goto LABEL_9;
          }
        }
        else if ( sprite )
        {
          spriteName = 0LL;
          v10 = 0;
          goto LABEL_10;
        }
      }
LABEL_17:
      sub_1BDBAD4(IsNullOrEmpty, v8);
    }
  }
  if ( !sprite )
    goto LABEL_17;
  spriteName = 0LL;
LABEL_9:
  v10 = 1;
LABEL_10:
  UISprite__set_spriteName(sprite, spriteName, 0LL);
  return v10;
}


void __fastcall CompleteMissionSprite___InitTarget_b__15_0(CompleteMissionSprite_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B4365B & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_20734/*"img_txt_target_panel"*/, method);
    byte_4B4365B = 1;
  }
  CompleteMissionSprite__SetEventUI(this, this->fields.sprite, (System_String_o *)StringLiteral_20734/*"img_txt_target_panel"*/, v2);
}


void __fastcall CompleteMissionSprite___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B4365C & 1) == 0 )
  {
    sub_1BDB878(&CompleteMissionSprite___c_TypeInfo, v1);
    byte_4B4365C = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(CompleteMissionSprite___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  CompleteMissionSprite___c_TypeInfo->static_fields->__9 = (struct CompleteMissionSprite___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)CompleteMissionSprite___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
  __int64 v3; // x3
  __int64 v4; // x4
  CompleteMissionSprite___c__DisplayClass12_0_o *v5; // x20
  __int64 v6; // x1
  CompleteMissionSprite_o *_4__this; // x19
  UISprite_o *sprite; // x21
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  const MethodInfo *v11; // x3
  int32_t eventId; // [xsp+Ch] [xbp-24h] BYREF

  v5 = this;
  if ( (byte_4B4365D & 1) == 0 )
  {
    sub_1BDB878(&int_TypeInfo, method);
    this = (CompleteMissionSprite___c__DisplayClass12_0_o *)sub_1BDB878(&StringLiteral_17662/*"button_mission_{0}"*/, v6);
    byte_4B4365D = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    sub_1BDBAD4(this, method);
  sprite = _4__this->fields.sprite;
  eventId = v5->fields.eventId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v2, v3, v4);
  v10 = System_String__Format((System_String_o *)StringLiteral_17662/*"button_mission_{0}"*/, v9, 0LL);
  CompleteMissionSprite__SetEventUI(_4__this, sprite, v10, v11);
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
  __int64 v3; // x3
  __int64 v4; // x4
  CompleteMissionSprite___c__DisplayClass13_0_o *v5; // x20
  __int64 v6; // x1
  CompleteMissionSprite_o *_4__this; // x19
  UISprite_o *sprite; // x21
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  const MethodInfo *v11; // x3
  int32_t eventId; // [xsp+Ch] [xbp-24h] BYREF

  v5 = this;
  if ( (byte_4B4365E & 1) == 0 )
  {
    sub_1BDB878(&int_TypeInfo, method);
    this = (CompleteMissionSprite___c__DisplayClass13_0_o *)sub_1BDB878(&StringLiteral_20403/*"img_flame_{0}"*/, v6);
    byte_4B4365E = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    sub_1BDBAD4(this, method);
  sprite = _4__this->fields.sprite;
  eventId = v5->fields.eventId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v2, v3, v4);
  v10 = System_String__Format((System_String_o *)StringLiteral_20403/*"img_flame_{0}"*/, v9, 0LL);
  CompleteMissionSprite__SetEventUI(_4__this, sprite, v10, v11);
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
  __int64 v3; // x3
  __int64 v4; // x4
  CompleteMissionSprite___c__DisplayClass14_0_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  int32_t v15; // w20
  __int64 v16; // x8
  Il2CppObject *Component_object; // x21
  CompleteMissionSprite_o *_4__this; // x22
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x0
  const MethodInfo *v23; // x3
  CompleteMissionSprite_o *v24; // x20
  UISprite_o *sprite; // x21
  Il2CppObject *v26; // x0
  System_String_o *v27; // x0
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x3
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v31; // x8
  CommonUI_o *v32; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *monitor; // x20
  Il2CppObject *klass; // x21
  struct CompleteMissionSprite___c_StaticFields *static_fields; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  int32_t eventId; // [xsp+8h] [xbp-58h] BYREF
  int v40; // [xsp+Ch] [xbp-54h] BYREF

  v5 = this;
  if ( (byte_4B4365F & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&AvalonSceneManager_TypeInfo, v6);
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_UISprite___, v7);
    sub_1BDB878(&int_TypeInfo, v8);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1BDB878(&Method_CompleteMissionSprite___c__InitPanel_b__14_1__, v10);
    sub_1BDB878(&CompleteMissionSprite___c_TypeInfo, v11);
    sub_1BDB878(&StringLiteral_21631/*"mission_bg_{0}"*/, v12);
    sub_1BDB878(&StringLiteral_21643/*"mission_on_{0}"*/, v13);
    this = (CompleteMissionSprite___c__DisplayClass14_0_o *)sub_1BDB878(&StringLiteral_19295/*"event_tab_type5_0"*/, v14);
    byte_4B4365F = 1;
  }
  if ( v5->fields.panelCount >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        break;
      v16 = *(_QWORD *)&this[28].fields.eventId;
      if ( !v16 )
        break;
      this = *(CompleteMissionSprite___c__DisplayClass14_0_o **)(v16 + 32);
      if ( !this )
        break;
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)UnityEngine_Transform__GetChild(
                                                                (UnityEngine_Transform_o *)this,
                                                                v15,
                                                                0LL);
      if ( !this )
        break;
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)UnityEngine_Transform__GetChild(
                                                                (UnityEngine_Transform_o *)this,
                                                                0,
                                                                0LL);
      if ( !this )
        break;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)this,
                           (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_UISprite___);
      _4__this = v5->fields.__4__this;
      v40 = v15 + 100 * v5->fields.eventId + 1;
      v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40, v19, v20, v21);
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)System_String__Format(
                                                                (System_String_o *)StringLiteral_21643/*"mission_on_{0}"*/,
                                                                v22,
                                                                0LL);
      if ( !_4__this )
        break;
      ++v15;
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)CompleteMissionSprite__SetEventUI(
                                                                _4__this,
                                                                (UISprite_o *)Component_object,
                                                                (System_String_o *)this,
                                                                v23);
      if ( v15 >= v5->fields.panelCount )
        goto LABEL_12;
    }
LABEL_25:
    sub_1BDBAD4(this, method);
  }
LABEL_12:
  v24 = v5->fields.__4__this;
  if ( !v24 )
    goto LABEL_25;
  sprite = v24->fields.sprite;
  eventId = v5->fields.eventId;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v2, v3, v4);
  v27 = System_String__Format((System_String_o *)StringLiteral_21631/*"mission_bg_{0}"*/, v26, 0LL);
  CompleteMissionSprite__SetEventUI(v24, sprite, v27, v28);
  this = (CompleteMissionSprite___c__DisplayClass14_0_o *)v5->fields.__4__this;
  if ( !this )
    goto LABEL_25;
  CompleteMissionSprite__SetEventUI(
    (CompleteMissionSprite_o *)this,
    v5->fields.listBgSprite,
    (System_String_o *)StringLiteral_19295/*"event_tab_type5_0"*/,
    v29);
  this = (CompleteMissionSprite___c__DisplayClass14_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_25;
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v31 = AvalonSceneManager_TypeInfo;
  v32 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v31 = AvalonSceneManager_TypeInfo;
  }
  this = (CompleteMissionSprite___c__DisplayClass14_0_o *)CompleteMissionSprite___c_TypeInfo;
  DEFAULT_FADE_TIME = v31->static_fields->DEFAULT_FADE_TIME;
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
    monitor = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(monitor, klass, Method_CompleteMissionSprite___c__InitPanel_b__14_1__, 0LL);
    static_fields = CompleteMissionSprite___c_TypeInfo->static_fields;
    static_fields->__9__14_1 = monitor;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__14_1, (int32_t)monitor, v37, v38);
  }
  if ( !v32 )
    goto LABEL_25;
  CommonUI__maskFadein(v32, DEFAULT_FADE_TIME, monitor, 0LL);
}