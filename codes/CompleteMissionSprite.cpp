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
  Il2CppObject *Object_object__51927708; // x19

  if ( (byte_4D2F42E & 1) == 0 )
  {
    sub_1C93AD4(&Method_AssetData_GetObjectList_GameObject___);
    sub_1C93AD4(&Method_AssetData_GetObject_GameObject____79057888);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    this = (CompleteMissionSprite_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2F42E = 1;
  }
  if ( !assetData )
    goto LABEL_12;
  ObjectList_object = AssetData__GetObjectList_object_(
                        assetData,
                        (const MethodInfo_3185C54 *)Method_AssetData_GetObjectList_GameObject___);
  if ( !ObjectList_object || !ObjectList_object->max_length )
    return 0;
  Object_object__51927708 = AssetData__GetObject_object__51927708(
                              assetData,
                              name,
                              (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (CompleteMissionSprite_o *)UnityEngine_Object__op_Equality(
                                      (UnityEngine_Object_o *)Object_object__51927708,
                                      0,
                                      0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !Object_object__51927708 )
LABEL_12:
    sub_1C93D2C(this, assetData);
  return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                        (UnityEngine_GameObject_o *)Object_object__51927708,
                        (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
}


void CompleteMissionSprite__InitBtn(CompleteMissionSprite_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Action_o *v14; // x22
  const MethodInfo *v15; // x4

  if ( (byte_4D2F428 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_CompleteMissionSprite___c__DisplayClass12_0__InitBtn_b__0__);
    sub_1C93AD4(&CompleteMissionSprite___c__DisplayClass12_0_TypeInfo);
    byte_4D2F428 = 1;
  }
  v5 = sub_1C93D20(CompleteMissionSprite___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 24) = eventId;
  v14 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)v5, Method_CompleteMissionSprite___c__DisplayClass12_0__InitBtn_b__0__, 0);
  CompleteMissionSprite__LoadEventUI(this, eventId, v14, 1, v15);
}


void CompleteMissionSprite__InitFrame(CompleteMissionSprite_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Action_o *v14; // x22
  const MethodInfo *v15; // x4

  if ( (byte_4D2F429 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_CompleteMissionSprite___c__DisplayClass13_0__InitFrame_b__0__);
    sub_1C93AD4(&CompleteMissionSprite___c__DisplayClass13_0_TypeInfo);
    byte_4D2F429 = 1;
  }
  v5 = sub_1C93D20(CompleteMissionSprite___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 24) = eventId;
  v14 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)v5, Method_CompleteMissionSprite___c__DisplayClass13_0__InitFrame_b__0__, 0);
  CompleteMissionSprite__LoadEventUI(this, eventId, v14, 1, v15);
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w20
  System_Action_o *v25; // x21
  const MethodInfo *v26; // x4

  if ( (byte_4D2F42A & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_CompleteMissionSprite___c__DisplayClass14_0__InitPanel_b__0__);
    sub_1C93AD4(&CompleteMissionSprite___c__DisplayClass14_0_TypeInfo);
    byte_4D2F42A = 1;
  }
  v9 = sub_1C93D20(CompleteMissionSprite___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_1C93D2C(v10, v11);
  *(_DWORD *)(v9 + 16) = eventId;
  *(_QWORD *)(v9 + 24) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_DWORD *)(v9 + 32) = panelCount;
  *(_QWORD *)(v9 + 40) = listBgSprite;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 40), (int32_t)listBgSprite, v18, v19, v20, v21, v22, v23);
  v24 = *(_DWORD *)(v9 + 16);
  v25 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v25, (Il2CppObject *)v9, Method_CompleteMissionSprite___c__DisplayClass14_0__InitPanel_b__0__, 0);
  CompleteMissionSprite__LoadEventUI(this, v24, v25, 1, v26);
}


void CompleteMissionSprite__InitTarget(CompleteMissionSprite_o *this, int32_t eventId, const MethodInfo *method)
{
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x4

  if ( (byte_4D2F42B & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_CompleteMissionSprite__InitTarget_b__15_0__);
    byte_4D2F42B = 1;
  }
  v5 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
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
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  System_Action_c *v19; // x1
  Il2CppObject *v20; // x0
  System_String_o *v21; // x21
  AssetLoader_LoadEndDataHandler_o *v22; // x22
  const MethodInfo *v23; // x2
  int32_t v24; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D2F42C & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&Method_CompleteMissionSprite_LoadEventUIEnd__);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C93AD4(&StringLiteral_6305/*"EventUI/Prefabs/{0}"*/);
    byte_4D2F42C = 1;
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
    v19 = System_Action_TypeInfo;
    if ( (System_Action_c *)v12->klass != System_Action_TypeInfo
      || (*p_eventUILoadCallbackFunc = (struct System_Action_o *)v12, (System_Action_c *)v12->klass != v19) )
    {
      v10 = sub_1C940C8(v12);
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
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventUILoadCallbackFunc,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( !this->fields.isEventUILoad )
  {
    this->fields.eventId = eventId;
    this->fields.isEventUILoad = 1;
    v24 = eventId;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
    v21 = System_String__Format((System_String_o *)StringLiteral_6305/*"EventUI/Prefabs/{0}"*/, v20, 0);
    v22 = (AssetLoader_LoadEndDataHandler_o *)sub_1C93D20(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v22, (Il2CppObject *)this, Method_CompleteMissionSprite_LoadEventUIEnd__, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( !AssetManager__loadAssetStorage(v21, v22, loadParallelMax, 0) )
    {
      this->fields.isEventUILoad = 0;
      CompleteMissionSprite__LoadEventUIEnd(this, 0, v23);
    }
  }
}


void CompleteMissionSprite__LoadEventUIEnd(
        CompleteMissionSprite_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  Il2CppObject *v10; // x0
  CompleteMissionSprite_o *v11; // x0
  const MethodInfo *v12; // x3
  struct UIAtlas_o *UIAtlasFromAssetData; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  GrandQuestFolderBoardItem_o *p_eventUILoadCallbackFunc; // x19
  struct System_Action_o *v21; // x20
  struct System_Action_o *eventUILoadCallbackFunc; // t1
  int32_t eventId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2F42D & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&StringLiteral_5365/*"DownloadEventUIAtlas{0}01"*/);
    byte_4D2F42D = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 0;
    this->fields.eventUIAssetData = assetData;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.eventUIAssetData,
      (int32_t)assetData,
      (int32_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    eventId = this->fields.eventId;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
    v11 = (CompleteMissionSprite_o *)System_String__Format((System_String_o *)StringLiteral_5365/*"DownloadEventUIAtlas{0}01"*/, v10, 0);
    UIAtlasFromAssetData = CompleteMissionSprite__CreateUIAtlasFromAssetData(
                             v11,
                             assetData,
                             (System_String_o *)v11,
                             v12);
    this->fields.eventUIDownloadAtlas = UIAtlasFromAssetData;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.eventUIDownloadAtlas,
      (int32_t)UIAtlasFromAssetData,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  eventUILoadCallbackFunc = this->fields.eventUILoadCallbackFunc;
  p_eventUILoadCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.eventUILoadCallbackFunc;
  v21 = eventUILoadCallbackFunc;
  if ( eventUILoadCallbackFunc )
  {
    p_eventUILoadCallbackFunc->klass = 0;
    sub_1C93A78(p_eventUILoadCallbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v21->fields.invoke_impl)(v21->fields.method_code, v21->fields.method);
  }
}


void CompleteMissionSprite__ReleaseEventUI(CompleteMissionSprite_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  Il2CppObject *v9; // x0
  System_String_o *v10; // x20
  AssetData_o *eventUIAssetData; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t eventId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2F42F & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&StringLiteral_6305/*"EventUI/Prefabs/{0}"*/);
    byte_4D2F42F = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 0;
    eventId = this->fields.eventId;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
    v10 = System_String__Format((System_String_o *)StringLiteral_6305/*"EventUI/Prefabs/{0}"*/, v9, 0);
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
      AssetManager__releaseAsset_41247948(eventUIAssetData, 0);
    }
  }
  this->fields.eventUIDownloadAtlas = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.eventUIDownloadAtlas, 0, v2, v3, v4, v5, v6, v7);
  this->fields.eventUIAssetData = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.eventUIAssetData, 0, v12, v13, v14, v15, v16, v17);
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

  if ( (byte_4D2F430 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2F430 = 1;
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
      sub_1C93D2C(IsNullOrEmpty, v8);
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

  if ( (byte_4D2F431 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_20961/*"img_txt_target_panel"*/);
    byte_4D2F431 = 1;
  }
  CompleteMissionSprite__SetEventUI(this, this->fields.sprite, (System_String_o *)StringLiteral_20961/*"img_txt_target_panel"*/, v2);
}


void CompleteMissionSprite___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2F432 & 1) == 0 )
  {
    sub_1C93AD4(&CompleteMissionSprite___c_TypeInfo);
    byte_4D2F432 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(CompleteMissionSprite___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CompleteMissionSprite___c_TypeInfo->static_fields->__9 = (struct CompleteMissionSprite___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)CompleteMissionSprite___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  CompleteMissionSprite___c__DisplayClass12_0_o *v2; // x20
  CompleteMissionSprite_o *_4__this; // x19
  UISprite_o *sprite; // x21
  Il2CppObject *v5; // x0
  System_String_o *v6; // x0
  const MethodInfo *v7; // x3
  int32_t eventId; // [xsp+Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_4D2F433 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    this = (CompleteMissionSprite___c__DisplayClass12_0_o *)sub_1C93AD4(&StringLiteral_17790/*"button_mission_{0}"*/);
    byte_4D2F433 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(this, method);
  sprite = _4__this->fields.sprite;
  eventId = v2->fields.eventId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v6 = System_String__Format((System_String_o *)StringLiteral_17790/*"button_mission_{0}"*/, v5, 0);
  CompleteMissionSprite__SetEventUI(_4__this, sprite, v6, v7);
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
  CompleteMissionSprite___c__DisplayClass13_0_o *v2; // x20
  CompleteMissionSprite_o *_4__this; // x19
  UISprite_o *sprite; // x21
  Il2CppObject *v5; // x0
  System_String_o *v6; // x0
  const MethodInfo *v7; // x3
  int32_t eventId; // [xsp+Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_4D2F434 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    this = (CompleteMissionSprite___c__DisplayClass13_0_o *)sub_1C93AD4(&StringLiteral_20615/*"img_flame_{0}"*/);
    byte_4D2F434 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(this, method);
  sprite = _4__this->fields.sprite;
  eventId = v2->fields.eventId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v6 = System_String__Format((System_String_o *)StringLiteral_20615/*"img_flame_{0}"*/, v5, 0);
  CompleteMissionSprite__SetEventUI(_4__this, sprite, v6, v7);
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
  CompleteMissionSprite___c__DisplayClass14_0_o *v2; // x19
  int32_t v3; // w20
  __int64 v4; // x8
  Il2CppObject *Component_object; // x21
  CompleteMissionSprite_o *_4__this; // x22
  Il2CppObject *v7; // x0
  const MethodInfo *v8; // x3
  CompleteMissionSprite_o *v9; // x20
  UISprite_o *sprite; // x21
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x3
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v16; // x8
  CommonUI_o *v17; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v19; // x20
  Il2CppObject *v20; // x21
  struct CompleteMissionSprite___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int32_t eventId; // [xsp+8h] [xbp-58h] BYREF
  int v29; // [xsp+Ch] [xbp-54h] BYREF

  v2 = this;
  if ( (byte_4D2F435 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_CompleteMissionSprite___c__InitPanel_b__14_1__);
    sub_1C93AD4(&CompleteMissionSprite___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_21878/*"mission_bg_{0}"*/);
    sub_1C93AD4(&StringLiteral_21890/*"mission_on_{0}"*/);
    this = (CompleteMissionSprite___c__DisplayClass14_0_o *)sub_1C93AD4(&StringLiteral_19486/*"event_tab_type5_0"*/);
    byte_4D2F435 = 1;
  }
  if ( v2->fields.panelCount >= 1 )
  {
    v3 = 0;
    while ( 1 )
    {
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        break;
      v4 = *((_QWORD *)this + 169);
      if ( !v4 )
        break;
      this = *(CompleteMissionSprite___c__DisplayClass14_0_o **)(v4 + 32);
      if ( !this )
        break;
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)UnityEngine_Transform__GetChild(
                                                                (UnityEngine_Transform_o *)this,
                                                                v3,
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
                           (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UISprite___);
      _4__this = v2->fields.__4__this;
      v29 = v3 + 100 * v2->fields.eventId + 1;
      v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)System_String__Format(
                                                                (System_String_o *)StringLiteral_21890/*"mission_on_{0}"*/,
                                                                v7,
                                                                0);
      if ( !_4__this )
        break;
      ++v3;
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)CompleteMissionSprite__SetEventUI(
                                                                _4__this,
                                                                (UISprite_o *)Component_object,
                                                                (System_String_o *)this,
                                                                v8);
      if ( v3 >= v2->fields.panelCount )
        goto LABEL_12;
    }
LABEL_25:
    sub_1C93D2C(this, method);
  }
LABEL_12:
  v9 = v2->fields.__4__this;
  if ( !v9 )
    goto LABEL_25;
  sprite = v9->fields.sprite;
  eventId = v2->fields.eventId;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v12 = System_String__Format((System_String_o *)StringLiteral_21878/*"mission_bg_{0}"*/, v11, 0);
  CompleteMissionSprite__SetEventUI(v9, sprite, v12, v13);
  this = (CompleteMissionSprite___c__DisplayClass14_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_25;
  CompleteMissionSprite__SetEventUI(
    (CompleteMissionSprite_o *)this,
    v2->fields.listBgSprite,
    (System_String_o *)StringLiteral_19486/*"event_tab_type5_0"*/,
    v14);
  this = (CompleteMissionSprite___c__DisplayClass14_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_25;
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = AvalonSceneManager_TypeInfo;
  v17 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v16 = AvalonSceneManager_TypeInfo;
  }
  this = (CompleteMissionSprite___c__DisplayClass14_0_o *)CompleteMissionSprite___c_TypeInfo;
  DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
  if ( !CompleteMissionSprite___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompleteMissionSprite___c_TypeInfo);
    this = (CompleteMissionSprite___c__DisplayClass14_0_o *)CompleteMissionSprite___c_TypeInfo;
  }
  v19 = *(System_Action_o **)(*((_QWORD *)this + 23) + 8LL);
  if ( !v19 )
  {
    if ( !*((_DWORD *)this + 56) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)CompleteMissionSprite___c_TypeInfo;
    }
    v20 = (Il2CppObject *)**((_QWORD **)this + 23);
    v19 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v19, v20, Method_CompleteMissionSprite___c__InitPanel_b__14_1__, 0);
    static_fields = CompleteMissionSprite___c_TypeInfo->static_fields;
    static_fields->__9__14_1 = v19;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__14_1, (int32_t)v19, v22, v23, v24, v25, v26, v27);
  }
  if ( !v17 )
    goto LABEL_25;
  CommonUI__maskFadein(v17, DEFAULT_FADE_TIME, v19, 0);
}