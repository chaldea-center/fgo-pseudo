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
  Il2CppObject *Object_object__48347676; // x19

  if ( (byte_49FB2C2 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObjectList_GameObject___, assetData);
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, v6);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v7);
    this = (CompleteMissionSprite_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    byte_49FB2C2 = 1;
  }
  if ( !assetData )
    goto LABEL_12;
  ObjectList_object = AssetData__GetObjectList_object_(
                        assetData,
                        (const MethodInfo_2E1BBD4 *)Method_AssetData_GetObjectList_GameObject___);
  if ( !ObjectList_object || !*(_QWORD *)&ObjectList_object->max_length )
    return 0LL;
  Object_object__48347676 = AssetData__GetObject_object__48347676(
                              assetData,
                              name,
                              (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (CompleteMissionSprite_o *)UnityEngine_Object__op_Equality(
                                      (UnityEngine_Object_o *)Object_object__48347676,
                                      0LL,
                                      0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0LL;
  if ( !Object_object__48347676 )
LABEL_12:
    sub_1B64324(this);
  return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                        (UnityEngine_GameObject_o *)Object_object__48347676,
                        (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
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
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x1
  __int64 v12; // x2
  System_Action_o *v13; // x22
  const MethodInfo *v14; // x4

  if ( (byte_49FB2BC & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_CompleteMissionSprite___c__DisplayClass12_0__InitBtn_b__0__, v5);
    sub_1B640C8(&CompleteMissionSprite___c__DisplayClass12_0_TypeInfo, v6);
    byte_49FB2BC = 1;
  }
  v7 = sub_1B64314(CompleteMissionSprite___c__DisplayClass12_0_TypeInfo, *(_QWORD *)&eventId, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1B64324(v8);
  *(_QWORD *)(v7 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_DWORD *)(v7 + 24) = eventId;
  v13 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)v7, Method_CompleteMissionSprite___c__DisplayClass12_0__InitBtn_b__0__, 0LL);
  CompleteMissionSprite__LoadEventUI(this, eventId, v13, 1, v14);
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
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x1
  __int64 v12; // x2
  System_Action_o *v13; // x22
  const MethodInfo *v14; // x4

  if ( (byte_49FB2BD & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_CompleteMissionSprite___c__DisplayClass13_0__InitFrame_b__0__, v5);
    sub_1B640C8(&CompleteMissionSprite___c__DisplayClass13_0_TypeInfo, v6);
    byte_49FB2BD = 1;
  }
  v7 = sub_1B64314(CompleteMissionSprite___c__DisplayClass13_0_TypeInfo, *(_QWORD *)&eventId, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1B64324(v8);
  *(_QWORD *)(v7 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_DWORD *)(v7 + 24) = eventId;
  v13 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v11, v12);
  System_Action___ctor(
    v13,
    (Il2CppObject *)v7,
    Method_CompleteMissionSprite___c__DisplayClass13_0__InitFrame_b__0__,
    0LL);
  CompleteMissionSprite__LoadEventUI(this, eventId, v13, 1, v14);
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
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w20
  __int64 v18; // x1
  __int64 v19; // x2
  System_Action_o *v20; // x21
  const MethodInfo *v21; // x4

  if ( (byte_49FB2BE & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_CompleteMissionSprite___c__DisplayClass14_0__InitPanel_b__0__, v9);
    sub_1B640C8(&CompleteMissionSprite___c__DisplayClass14_0_TypeInfo, v10);
    byte_49FB2BE = 1;
  }
  v11 = sub_1B64314(CompleteMissionSprite___c__DisplayClass14_0_TypeInfo, *(_QWORD *)&eventId, listBgSprite);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1B64324(v12);
  *(_DWORD *)(v11 + 16) = eventId;
  *(_QWORD *)(v11 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)this, v13, v14);
  *(_DWORD *)(v11 + 32) = panelCount;
  *(_QWORD *)(v11 + 40) = listBgSprite;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 40), (int32_t)listBgSprite, v15, v16);
  v17 = *(_DWORD *)(v11 + 16);
  v20 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v18, v19);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v11,
    Method_CompleteMissionSprite___c__DisplayClass14_0__InitPanel_b__0__,
    0LL);
  CompleteMissionSprite__LoadEventUI(this, v17, v20, 1, v21);
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

  if ( (byte_49FB2BF & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_CompleteMissionSprite__InitTarget_b__15_0__, v5);
    byte_49FB2BF = 1;
  }
  v6 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, *(_QWORD *)&eventId, method);
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
  int32_t v19; // w3
  System_Action_c *v20; // x1
  Il2CppObject *v21; // x0
  System_String_o *v22; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  AssetLoader_LoadEndDataHandler_o *v25; // x22
  const MethodInfo *v26; // x2
  int32_t v27; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FB2C0 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&AssetManager_TypeInfo, v9);
    sub_1B640C8(&Method_CompleteMissionSprite_LoadEventUIEnd__, v10);
    sub_1B640C8(&int_TypeInfo, v11);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v12);
    sub_1B640C8(&StringLiteral_6206/*"EventUI/Prefabs/{0}"*/, v13);
    byte_49FB2C0 = 1;
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
      v15 = sub_1B645E4(v17);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventUILoadCallbackFunc, (int32_t)v17, v18, v19);
  if ( !this->fields.isEventUILoad )
  {
    this->fields.eventId = eventId;
    this->fields.isEventUILoad = 1;
    v27 = eventId;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
    v22 = System_String__Format((System_String_o *)StringLiteral_6206/*"EventUI/Prefabs/{0}"*/, v21, 0LL);
    v25 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v23, v24);
    AssetLoader_LoadEndDataHandler___ctor(v25, (Il2CppObject *)this, Method_CompleteMissionSprite_LoadEventUIEnd__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( !AssetManager__loadAssetStorage(v22, v25, loadParallelMax, 0LL) )
    {
      this->fields.isEventUILoad = 0;
      CompleteMissionSprite__LoadEventUIEnd(this, 0LL, v26);
    }
  }
}


void __fastcall CompleteMissionSprite__LoadEventUIEnd(
        CompleteMissionSprite_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  CompleteMissionSprite_o *v8; // x0
  const MethodInfo *v9; // x3
  struct UIAtlas_o *UIAtlasFromAssetData; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  ServantStatusBattleListViewItem_o *p_eventUILoadCallbackFunc; // x19
  struct System_Action_o *v14; // x20
  struct System_Action_o *eventUILoadCallbackFunc; // t1
  int32_t eventId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FB2C1 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, assetData);
    sub_1B640C8(&StringLiteral_5354/*"DownloadEventUIAtlas{0}01"*/, v6);
    byte_49FB2C1 = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 0;
    this->fields.eventUIAssetData = assetData;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.eventUIAssetData,
      (int32_t)assetData,
      (int32_t)method,
      v3);
    eventId = this->fields.eventId;
    v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
    v8 = (CompleteMissionSprite_o *)System_String__Format((System_String_o *)StringLiteral_5354/*"DownloadEventUIAtlas{0}01"*/, v7, 0LL);
    UIAtlasFromAssetData = CompleteMissionSprite__CreateUIAtlasFromAssetData(v8, assetData, (System_String_o *)v8, v9);
    this->fields.eventUIDownloadAtlas = UIAtlasFromAssetData;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.eventUIDownloadAtlas,
      (int32_t)UIAtlasFromAssetData,
      v11,
      v12);
  }
  eventUILoadCallbackFunc = this->fields.eventUILoadCallbackFunc;
  p_eventUILoadCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.eventUILoadCallbackFunc;
  v14 = eventUILoadCallbackFunc;
  if ( eventUILoadCallbackFunc )
  {
    p_eventUILoadCallbackFunc->klass = 0LL;
    sub_1B6406C(p_eventUILoadCallbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v14->fields.m_target)(
      v14->fields.original_method_info,
      *(_QWORD *)&v14->fields.extra_arg);
  }
}


void __fastcall CompleteMissionSprite__ReleaseEventUI(CompleteMissionSprite_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  System_String_o *v8; // x20
  AssetData_o *eventUIAssetData; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t eventId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FB2C3 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&int_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_6206/*"EventUI/Prefabs/{0}"*/, v6);
    byte_49FB2C3 = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 0;
    eventId = this->fields.eventId;
    v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
    v8 = System_String__Format((System_String_o *)StringLiteral_6206/*"EventUI/Prefabs/{0}"*/, v7, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v8, 0LL);
  }
  else
  {
    eventUIAssetData = this->fields.eventUIAssetData;
    if ( eventUIAssetData )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_37477464(eventUIAssetData, 0LL);
    }
  }
  this->fields.eventUIDownloadAtlas = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventUIDownloadAtlas, 0, v2, v3);
  this->fields.eventUIAssetData = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventUIAssetData, 0, v10, v11);
}


bool __fastcall CompleteMissionSprite__SetEventUI(
        CompleteMissionSprite_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  UIAtlas_o *IsNullOrEmpty; // x0
  UnityEngine_Object_o *eventUIDownloadAtlas; // x22
  bool v9; // w21

  if ( (byte_49FB2C4 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, sprite);
    byte_49FB2C4 = 1;
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
          v9 = 0;
          goto LABEL_10;
        }
      }
LABEL_17:
      sub_1B64324(IsNullOrEmpty);
    }
  }
  if ( !sprite )
    goto LABEL_17;
  spriteName = 0LL;
LABEL_9:
  v9 = 1;
LABEL_10:
  UISprite__set_spriteName(sprite, spriteName, 0LL);
  return v9;
}


void __fastcall CompleteMissionSprite___InitTarget_b__15_0(CompleteMissionSprite_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FB2C5 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_20514/*"img_txt_target_panel"*/, method);
    byte_49FB2C5 = 1;
  }
  CompleteMissionSprite__SetEventUI(this, this->fields.sprite, (System_String_o *)StringLiteral_20514/*"img_txt_target_panel"*/, v2);
}


void __fastcall CompleteMissionSprite___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FB2C6 & 1) == 0 )
  {
    sub_1B640C8(&CompleteMissionSprite___c_TypeInfo, v1);
    byte_49FB2C6 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(CompleteMissionSprite___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  CompleteMissionSprite___c_TypeInfo->static_fields->__9 = (struct CompleteMissionSprite___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)CompleteMissionSprite___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
  UISprite_o *sprite; // x21
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  const MethodInfo *v8; // x3
  int32_t eventId; // [xsp+Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_49FB2C7 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, method);
    this = (CompleteMissionSprite___c__DisplayClass12_0_o *)sub_1B640C8(&StringLiteral_17589/*"button_mission_{0}"*/, v3);
    byte_49FB2C7 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(this);
  sprite = _4__this->fields.sprite;
  eventId = v2->fields.eventId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v7 = System_String__Format((System_String_o *)StringLiteral_17589/*"button_mission_{0}"*/, v6, 0LL);
  CompleteMissionSprite__SetEventUI(_4__this, sprite, v7, v8);
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
  UISprite_o *sprite; // x21
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  const MethodInfo *v8; // x3
  int32_t eventId; // [xsp+Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_49FB2C8 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, method);
    this = (CompleteMissionSprite___c__DisplayClass13_0_o *)sub_1B640C8(&StringLiteral_20223/*"img_flame_{0}"*/, v3);
    byte_49FB2C8 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(this);
  sprite = _4__this->fields.sprite;
  eventId = v2->fields.eventId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v7 = System_String__Format((System_String_o *)StringLiteral_20223/*"img_flame_{0}"*/, v6, 0LL);
  CompleteMissionSprite__SetEventUI(_4__this, sprite, v7, v8);
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
  __int64 v13; // x8
  Il2CppObject *Component_object; // x21
  CompleteMissionSprite_o *_4__this; // x22
  Il2CppObject *v16; // x0
  const MethodInfo *v17; // x3
  CompleteMissionSprite_o *v18; // x20
  UISprite_o *sprite; // x21
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x3
  Il2CppObject *Instance; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  AvalonSceneManager_c *v27; // x8
  CommonUI_o *v28; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *monitor; // x20
  Il2CppObject *klass; // x21
  struct CompleteMissionSprite___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t eventId; // [xsp+8h] [xbp-58h] BYREF
  int v36; // [xsp+Ch] [xbp-54h] BYREF

  v2 = this;
  if ( (byte_49FB2C9 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v3);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UISprite___, v4);
    sub_1B640C8(&int_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&Method_CompleteMissionSprite___c__InitPanel_b__14_1__, v7);
    sub_1B640C8(&CompleteMissionSprite___c_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_21387/*"mission_bg_{0}"*/, v9);
    sub_1B640C8(&StringLiteral_21399/*"mission_on_{0}"*/, v10);
    this = (CompleteMissionSprite___c__DisplayClass14_0_o *)sub_1B640C8(&StringLiteral_19194/*"event_tab_type5_0"*/, v11);
    byte_49FB2C9 = 1;
  }
  if ( v2->fields.panelCount >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        break;
      v13 = *(_QWORD *)&this[28].fields.panelCount;
      if ( !v13 )
        break;
      this = *(CompleteMissionSprite___c__DisplayClass14_0_o **)(v13 + 32);
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
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)this,
                           (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      _4__this = v2->fields.__4__this;
      v36 = v12 + 100 * v2->fields.eventId + 1;
      v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36);
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)System_String__Format(
                                                                (System_String_o *)StringLiteral_21399/*"mission_on_{0}"*/,
                                                                v16,
                                                                0LL);
      if ( !_4__this )
        break;
      ++v12;
      this = (CompleteMissionSprite___c__DisplayClass14_0_o *)CompleteMissionSprite__SetEventUI(
                                                                _4__this,
                                                                (UISprite_o *)Component_object,
                                                                (System_String_o *)this,
                                                                v17);
      if ( v12 >= v2->fields.panelCount )
        goto LABEL_12;
    }
LABEL_25:
    sub_1B64324(this);
  }
LABEL_12:
  v18 = v2->fields.__4__this;
  if ( !v18 )
    goto LABEL_25;
  sprite = v18->fields.sprite;
  eventId = v2->fields.eventId;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  v21 = System_String__Format((System_String_o *)StringLiteral_21387/*"mission_bg_{0}"*/, v20, 0LL);
  CompleteMissionSprite__SetEventUI(v18, sprite, v21, v22);
  this = (CompleteMissionSprite___c__DisplayClass14_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_25;
  CompleteMissionSprite__SetEventUI(
    (CompleteMissionSprite_o *)this,
    v2->fields.listBgSprite,
    (System_String_o *)StringLiteral_19194/*"event_tab_type5_0"*/,
    v23);
  this = (CompleteMissionSprite___c__DisplayClass14_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_25;
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v27 = AvalonSceneManager_TypeInfo;
  v28 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v27 = AvalonSceneManager_TypeInfo;
  }
  this = (CompleteMissionSprite___c__DisplayClass14_0_o *)CompleteMissionSprite___c_TypeInfo;
  DEFAULT_FADE_TIME = v27->static_fields->DEFAULT_FADE_TIME;
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
    monitor = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v25, v26);
    System_Action___ctor(monitor, klass, Method_CompleteMissionSprite___c__InitPanel_b__14_1__, 0LL);
    static_fields = CompleteMissionSprite___c_TypeInfo->static_fields;
    static_fields->__9__14_1 = monitor;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__14_1, (int32_t)monitor, v33, v34);
  }
  if ( !v28 )
    goto LABEL_25;
  CommonUI__maskFadein(v28, DEFAULT_FADE_TIME, monitor, 0LL);
}