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
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Object_object__58323140; // x19

  if ( (byte_593707B & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetData_GetObjectList_GameObject___);
    sub_21FFC50(&Method_AssetData_GetObject_GameObject____91482112);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    this = (CompleteMissionSprite_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593707B = 1;
  }
  if ( !assetData )
    goto LABEL_12;
  ObjectList_object = AssetData__GetObjectList_object_(
                        assetData,
                        (const MethodInfo_379F258 *)Method_AssetData_GetObjectList_GameObject___);
  if ( !ObjectList_object || !ObjectList_object->max_length )
    return 0;
  Object_object__58323140 = AssetData__GetObject_object__58323140(
                              assetData,
                              name,
                              (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  this = (CompleteMissionSprite_o *)UnityEngine_Object__op_Equality(
                                      (UnityEngine_Object_o *)Object_object__58323140,
                                      0,
                                      0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !Object_object__58323140 )
LABEL_12:
    sub_21FFECC(this, assetData);
  return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                        (UnityEngine_GameObject_o *)Object_object__58323140,
                        (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
}


void CompleteMissionSprite__InitBtn(CompleteMissionSprite_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Action_c *v14; // x0
  System_Action_o *v15; // x22
  const MethodInfo *v16; // x4

  if ( (byte_5937075 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_CompleteMissionSprite___c__DisplayClass12_0__InitBtn_b__0__);
    sub_21FFC50(&CompleteMissionSprite___c__DisplayClass12_0_TypeInfo);
    byte_5937075 = 1;
  }
  v5 = sub_21FFEBC(CompleteMissionSprite___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  v14 = System_Action_TypeInfo;
  *(_DWORD *)(v5 + 24) = eventId;
  v15 = (System_Action_o *)sub_21FFEBC(v14);
  System_Action___ctor(v15, (Il2CppObject *)v5, Method_CompleteMissionSprite___c__DisplayClass12_0__InitBtn_b__0__, 0);
  CompleteMissionSprite__LoadEventUI(this, eventId, v15, 1, v16);
}


void CompleteMissionSprite__InitFrame(CompleteMissionSprite_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Action_c *v14; // x0
  System_Action_o *v15; // x22
  const MethodInfo *v16; // x4

  if ( (byte_5937076 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_CompleteMissionSprite___c__DisplayClass13_0__InitFrame_b__0__);
    sub_21FFC50(&CompleteMissionSprite___c__DisplayClass13_0_TypeInfo);
    byte_5937076 = 1;
  }
  v5 = sub_21FFEBC(CompleteMissionSprite___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  v14 = System_Action_TypeInfo;
  *(_DWORD *)(v5 + 24) = eventId;
  v15 = (System_Action_o *)sub_21FFEBC(v14);
  System_Action___ctor(v15, (Il2CppObject *)v5, Method_CompleteMissionSprite___c__DisplayClass13_0__InitFrame_b__0__, 0);
  CompleteMissionSprite__LoadEventUI(this, eventId, v15, 1, v16);
}


void CompleteMissionSprite__InitPanel(
        CompleteMissionSprite_o *this,
        int32_t eventId,
        UISprite_o *listBgSprite,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  int32_t v22; // w20
  System_Action_o *v23; // x21
  const MethodInfo *v24; // x4

  if ( (byte_5937077 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_CompleteMissionSprite___c__DisplayClass14_0__InitPanel_b__0__);
    sub_21FFC50(&CompleteMissionSprite___c__DisplayClass14_0_TypeInfo);
    byte_5937077 = 1;
  }
  v7 = sub_21FFEBC(CompleteMissionSprite___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_21FFECC(v8, v9);
  *(_DWORD *)(v7 + 16) = eventId;
  *(_QWORD *)(v7 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = listBgSprite;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)listBgSprite, v16, v17, v18, v19, v20, v21);
  v22 = *(_DWORD *)(v7 + 16);
  v23 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v23, (Il2CppObject *)v7, Method_CompleteMissionSprite___c__DisplayClass14_0__InitPanel_b__0__, 0);
  CompleteMissionSprite__LoadEventUI(this, v22, v23, 1, v24);
}


void CompleteMissionSprite__InitTarget(CompleteMissionSprite_o *this, int32_t eventId, const MethodInfo *method)
{
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x4

  if ( (byte_5937078 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_CompleteMissionSprite__InitTarget_b__15_0__);
    byte_5937078 = 1;
  }
  v5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
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
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Action_c *v19; // x1
  Il2CppObject *v20; // x0
  System_String_o *v21; // x21
  AssetLoader_LoadEndDataHandler_o *v22; // x22
  __int64 v23; // x1
  __int64 v24; // x2
  const MethodInfo *v25; // x2
  int32_t v26; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5937079 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_CompleteMissionSprite_LoadEventUIEnd__);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&StringLiteral_6526/*"EventUI/Prefabs/{0}"*/);
    byte_5937079 = 1;
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
      v10 = sub_220024C(v12, v19, v13, v14);
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
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventUILoadCallbackFunc,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( !this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 1;
    this->fields.eventId = eventId;
    v26 = eventId;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v26);
    v21 = System_String__Format((System_String_o *)StringLiteral_6526/*"EventUI/Prefabs/{0}"*/, v20, 0);
    v22 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v22, (Il2CppObject *)this, Method_CompleteMissionSprite_LoadEventUIEnd__, 0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v23, v24);
    if ( !AssetManager__loadAssetStorage(v21, v22, loadParallelMax, 0, 0) )
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  Il2CppObject *v10; // x0
  CompleteMissionSprite_o *v11; // x0
  const MethodInfo *v12; // x3
  struct UIAtlas_o *UIAtlasFromAssetData; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  MissionNaviTransitionBoardItem_o *p_eventUILoadCallbackFunc; // x19
  struct System_Action_o *v21; // x20
  struct System_Action_o *eventUILoadCallbackFunc; // t1
  int32_t eventId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_593707A & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_5525/*"DownloadEventUIAtlas{0}01"*/);
    byte_593707A = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 0;
    this->fields.eventUIAssetData = assetData;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.eventUIAssetData,
      (int32_t)assetData,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    eventId = this->fields.eventId;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &eventId);
    v11 = (CompleteMissionSprite_o *)System_String__Format((System_String_o *)StringLiteral_5525/*"DownloadEventUIAtlas{0}01"*/, v10, 0);
    UIAtlasFromAssetData = CompleteMissionSprite__CreateUIAtlasFromAssetData(
                             v11,
                             assetData,
                             (System_String_o *)v11,
                             v12);
    this->fields.eventUIDownloadAtlas = UIAtlasFromAssetData;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.eventUIDownloadAtlas,
      (int32_t)UIAtlasFromAssetData,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  eventUILoadCallbackFunc = this->fields.eventUILoadCallbackFunc;
  p_eventUILoadCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.eventUILoadCallbackFunc;
  v21 = eventUILoadCallbackFunc;
  if ( eventUILoadCallbackFunc )
  {
    p_eventUILoadCallbackFunc->klass = 0;
    sub_21FFBF4(p_eventUILoadCallbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v21->fields.invoke_impl)(v21->fields.method_code, v21->fields.method);
  }
}


void CompleteMissionSprite__ReleaseEventUI(CompleteMissionSprite_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t eventId; // w9
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  System_String_o *v13; // x20
  AssetData_o *eventUIAssetData; // x20
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  int32_t v21; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_593707C & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&StringLiteral_6526/*"EventUI/Prefabs/{0}"*/);
    byte_593707C = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    eventId = this->fields.eventId;
    this->fields.isEventUILoad = 0;
    v21 = eventId;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v21);
    v13 = System_String__Format((System_String_o *)StringLiteral_6526/*"EventUI/Prefabs/{0}"*/, v10, 0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v11, v12);
    AssetManager__releaseAssetStorage(v13, 0);
  }
  else
  {
    eventUIAssetData = this->fields.eventUIAssetData;
    if ( eventUIAssetData )
    {
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
      AssetManager__releaseAsset_47465556(eventUIAssetData, 0);
    }
  }
  this->fields.eventUIDownloadAtlas = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.eventUIDownloadAtlas, 0, v2, v3, v4, v5, v6, v7);
  this->fields.eventUIAssetData = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.eventUIAssetData, 0, v15, v16, v17, v18, v19, v20);
}


bool CompleteMissionSprite__SetEventUI(
        CompleteMissionSprite_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  UIAtlas_o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *eventUIDownloadAtlas; // x22
  bool v11; // w21

  if ( (byte_593707D & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593707D = 1;
  }
  IsNullOrEmpty = (UIAtlas_o *)System_String__IsNullOrEmpty(spriteName, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    eventUIDownloadAtlas = (UnityEngine_Object_o *)this->fields.eventUIDownloadAtlas;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
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
          v11 = 0;
          goto LABEL_10;
        }
      }
LABEL_17:
      sub_21FFECC(IsNullOrEmpty, v8);
    }
  }
  if ( !sprite )
    goto LABEL_17;
  spriteName = 0;
LABEL_9:
  v11 = 1;
LABEL_10:
  UISprite__set_spriteName(sprite, spriteName, 0);
  return v11;
}


void CompleteMissionSprite___InitTarget_b__15_0(CompleteMissionSprite_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593707E & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21684/*"img_txt_target_panel"*/);
    byte_593707E = 1;
  }
  CompleteMissionSprite__SetEventUI(this, this->fields.sprite, (System_String_o *)StringLiteral_21684/*"img_txt_target_panel"*/, v2);
}


void CompleteMissionSprite___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593707F & 1) == 0 )
  {
    sub_21FFC50(&CompleteMissionSprite___c_TypeInfo);
    byte_593707F = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(CompleteMissionSprite___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CompleteMissionSprite___c_TypeInfo->static_fields->__9 = (struct CompleteMissionSprite___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)CompleteMissionSprite___c_TypeInfo->static_fields,
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
  int32_t eventId; // w9
  UISprite_o *sprite; // x20
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  const MethodInfo *v8; // x3
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_5937080 & 1) == 0 )
  {
    this = (CompleteMissionSprite___c__DisplayClass12_0_o *)sub_21FFC50(&StringLiteral_18391/*"button_mission_{0}"*/);
    byte_5937080 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(this, method);
  eventId = v2->fields.eventId;
  sprite = _4__this->fields.sprite;
  v9 = eventId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v9);
  v7 = System_String__Format((System_String_o *)StringLiteral_18391/*"button_mission_{0}"*/, v6, 0);
  CompleteMissionSprite__SetEventUI(_4__this, sprite, v7, v8);
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
  int32_t eventId; // w9
  UISprite_o *sprite; // x20
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  const MethodInfo *v8; // x3
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_5937081 & 1) == 0 )
  {
    this = (CompleteMissionSprite___c__DisplayClass13_0_o *)sub_21FFC50(&StringLiteral_21330/*"img_flame_{0}"*/);
    byte_5937081 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(this, method);
  eventId = v2->fields.eventId;
  sprite = _4__this->fields.sprite;
  v9 = eventId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v9);
  v7 = System_String__Format((System_String_o *)StringLiteral_21330/*"img_flame_{0}"*/, v6, 0);
  CompleteMissionSprite__SetEventUI(_4__this, sprite, v7, v8);
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
  void *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x8
  UnityEngine_Object_o *v7; // x20
  int32_t v8; // w21
  UnityEngine_Object_c *klass; // x8
  CompleteMissionSprite_o *_4__this; // x22
  Il2CppObject *v11; // x23
  Il2CppObject *v12; // x0
  const MethodInfo *v13; // x3
  struct CompleteMissionSprite_o *v14; // x20
  UISprite_o *sprite; // x21
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3
  __int64 v20; // x2
  Il2CppObject *v21; // x19
  AvalonSceneManager_c *v22; // x8
  float DEFAULT_FADE_TIME; // s8
  struct CompleteMissionSprite___c_StaticFields *static_fields; // x8
  System_Action_o *_9__14_1; // x20
  Il2CppObject *v26; // x21
  struct CompleteMissionSprite___c_StaticFields *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  int32_t eventId; // [xsp+4h] [xbp-6Ch] BYREF
  Il2CppObject *component; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_5937082 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&Method_CompleteMissionPanelComponent_TryGetPanelChildComponent_UISprite___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_CompleteMissionSprite___c__InitPanel_b__14_1__);
    sub_21FFC50(&CompleteMissionSprite___c_TypeInfo);
    sub_21FFC50(&StringLiteral_22669/*"mission_bg_{0}"*/);
    sub_21FFC50(&StringLiteral_22681/*"mission_on_{0}"*/);
    sub_21FFC50(&StringLiteral_20142/*"event_tab_type5_0"*/);
    byte_5937082 = 1;
  }
  component = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  v6 = *((_QWORD *)Instance + 173);
  if ( !v6 )
    goto LABEL_31;
  v7 = *(UnityEngine_Object_o **)(v6 + 40);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  Instance = (void *)UnityEngine_Object__op_Equality(v7, 0, 0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( v7 )
    {
      v8 = 0;
      while ( 1 )
      {
        klass = v7[2].klass;
        if ( klass )
          LODWORD(klass) = klass->_1.namespaze;
        if ( v8 >= (int)klass )
          break;
        Instance = (void *)CompleteMissionPanelComponent__TryGetPanelChildComponent_object_(
                             (CompleteMissionPanelComponent_o *)v7,
                             v8,
                             0,
                             &component,
                             (const MethodInfo_37ED578 *)Method_CompleteMissionPanelComponent_TryGetPanelChildComponent_UISprite___);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          ++v8;
          _4__this = this->fields.__4__this;
          v11 = component;
          eventId = v8 + 100 * this->fields.eventId;
          v12 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &eventId);
          Instance = System_String__Format((System_String_o *)StringLiteral_22681/*"mission_on_{0}"*/, v12, 0);
          if ( !_4__this )
            goto LABEL_31;
          Instance = (void *)CompleteMissionSprite__SetEventUI(
                               _4__this,
                               (UISprite_o *)v11,
                               (System_String_o *)Instance,
                               v13);
        }
        else
        {
          ++v8;
        }
      }
      v14 = this->fields.__4__this;
      if ( v14 )
      {
        sprite = v14->fields.sprite;
        eventId = this->fields.eventId;
        v16 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &eventId);
        v17 = System_String__Format((System_String_o *)StringLiteral_22669/*"mission_bg_{0}"*/, v16, 0);
        CompleteMissionSprite__SetEventUI(v14, sprite, v17, v18);
        Instance = this->fields.__4__this;
        if ( Instance )
        {
          CompleteMissionSprite__SetEventUI(
            (CompleteMissionSprite_o *)Instance,
            this->fields.listBgSprite,
            (System_String_o *)StringLiteral_20142/*"event_tab_type5_0"*/,
            v19);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( Instance )
          {
            CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
            v21 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v22 = AvalonSceneManager_TypeInfo;
            if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v4, v20);
              v22 = AvalonSceneManager_TypeInfo;
            }
            Instance = CompleteMissionSprite___c_TypeInfo;
            DEFAULT_FADE_TIME = v22->static_fields->DEFAULT_FADE_TIME;
            if ( !*(&CompleteMissionSprite___c_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(CompleteMissionSprite___c_TypeInfo, v4, v20);
              Instance = CompleteMissionSprite___c_TypeInfo;
            }
            static_fields = (struct CompleteMissionSprite___c_StaticFields *)*((_QWORD *)Instance + 23);
            _9__14_1 = static_fields->__9__14_1;
            if ( !_9__14_1 )
            {
              if ( !*((_DWORD *)Instance + 57) )
              {
                j_il2cpp_runtime_class_init_0(Instance, v4, v20);
                static_fields = CompleteMissionSprite___c_TypeInfo->static_fields;
              }
              v26 = (Il2CppObject *)static_fields->__9;
              _9__14_1 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
              System_Action___ctor(_9__14_1, v26, Method_CompleteMissionSprite___c__InitPanel_b__14_1__, 0);
              v27 = CompleteMissionSprite___c_TypeInfo->static_fields;
              v27->__9__14_1 = _9__14_1;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)&v27->__9__14_1,
                (int32_t)_9__14_1,
                v28,
                v29,
                v30,
                v31,
                v32,
                v33);
            }
            if ( v21 )
            {
              CommonUI__maskFadein((CommonUI_o *)v21, DEFAULT_FADE_TIME, _9__14_1, 0);
              return;
            }
          }
        }
      }
    }
LABEL_31:
    sub_21FFECC(Instance, v4);
  }
}